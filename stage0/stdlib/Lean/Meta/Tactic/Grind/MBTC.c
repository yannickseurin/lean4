// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.MBTC
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.CastLike
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
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_SplitInfo_beq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Meta_Grind_isCongrRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isInstanceReducibleCore(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_isCastLikeFn(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getRoot_x3f(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Canon_isSupport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Grind_SplitInfo_hash(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
lean_object* l_Lean_Meta_Grind_isKnownCaseSplit___redArg(lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_SplitInfo_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_checkMaxCaseSplit___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addSplitCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey___closed__0_value;
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey_hash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey_hash___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "__grind_main_arg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 28, 25, 170, 231, 254, 59, 65)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "__grind_other_arg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 27, 42, 236, 138, 38, 28, 251)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Grind_mbtc_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_mbtc_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_mbtc_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12_spec__21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Grind_mbtc_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Grind_mbtc_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mbtc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(6, 3, 200, 238, 83, 121, 101, 214)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " @ "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__8;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__10;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15_spec__20(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15_spec__20___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18_spec__26(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18_spec__26___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__0_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__2_value),LEAN_SCALAR_PTR_LITERAL(241, 58, 101, 243, 41, 236, 253, 51)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_mbtc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mbtc___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_mbtc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mbtc___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_mbtc___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mbtc___closed__2;
static const lean_string_object l_Lean_Meta_Grind_mbtc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "skipping `mbtc`, maximum number of splits has been reached `(splits := "};
static const lean_object* l_Lean_Meta_Grind_mbtc___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mbtc___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_mbtc___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mbtc___closed__4;
static const lean_string_object l_Lean_Meta_Grind_mbtc___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ")`"};
static const lean_object* l_Lean_Meta_Grind_mbtc___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_mbtc___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_mbtc___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mbtc___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mbtc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mbtc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey_beq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
uint8_t v___x_3_; 
v___x_3_ = lean_expr_eqv(v_x_1_, v_x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey_beq___boxed(lean_object* v_x_4_, lean_object* v_x_5_){
_start:
{
uint8_t v_res_6_; lean_object* v_r_7_; 
v_res_6_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instBEqKey_beq(v_x_4_, v_x_5_);
lean_dec_ref(v_x_5_);
lean_dec_ref(v_x_4_);
v_r_7_ = lean_box(v_res_6_);
return v_r_7_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey_hash(lean_object* v_x_10_){
_start:
{
uint64_t v___x_11_; uint64_t v___x_12_; uint64_t v___x_13_; 
v___x_11_ = 0ULL;
v___x_12_ = l_Lean_Expr_hash(v_x_10_);
v___x_13_ = lean_uint64_mix_hash(v___x_11_, v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey_hash___boxed(lean_object* v_x_14_){
_start:
{
uint64_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey_hash(v_x_14_);
lean_dec_ref(v_x_14_);
v_r_16_ = lean_box_uint64(v_res_15_);
return v_r_16_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__2(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = lean_box(0);
v___x_23_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__1));
v___x_24_ = l_Lean_mkConst(v___x_23_, v___x_22_);
return v___x_24_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__2, &l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark___closed__2);
return v___x_25_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__2(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = lean_box(0);
v___x_30_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__1));
v___x_31_ = l_Lean_mkConst(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark(void){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__2, &l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark___closed__2);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0___redArg(lean_object* v_upperBound_33_, lean_object* v_i_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_b_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v_a_44_; uint8_t v___x_48_; 
v___x_48_ = lean_nat_dec_lt(v_a_36_, v_upperBound_33_);
if (v___x_48_ == 0)
{
lean_object* v___x_49_; 
lean_dec(v_a_36_);
v___x_49_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_49_, 0, v_b_37_);
return v___x_49_;
}
else
{
uint8_t v___x_50_; 
v___x_50_ = lean_nat_dec_eq(v_i_34_, v_a_36_);
if (v___x_50_ == 0)
{
lean_object* v_paramInfo_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v_paramInfo_51_ = lean_ctor_get(v_a_35_, 0);
v___x_52_ = lean_array_fget_borrowed(v_b_37_, v_a_36_);
lean_inc(v___x_52_);
v___x_53_ = l_Lean_Meta_Sym_Canon_isSupport(v_paramInfo_51_, v_a_36_, v___x_52_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
if (lean_obj_tag(v___x_53_) == 0)
{
lean_object* v_a_54_; uint8_t v___x_55_; 
v_a_54_ = lean_ctor_get(v___x_53_, 0);
lean_inc(v_a_54_);
lean_dec_ref_known(v___x_53_, 1);
v___x_55_ = lean_unbox(v_a_54_);
lean_dec(v_a_54_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark;
v___x_57_ = lean_array_fset(v_b_37_, v_a_36_, v___x_56_);
v_a_44_ = v___x_57_;
goto v___jp_43_;
}
else
{
v_a_44_ = v_b_37_;
goto v___jp_43_;
}
}
else
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
lean_dec_ref(v_b_37_);
lean_dec(v_a_36_);
v_a_58_ = lean_ctor_get(v___x_53_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_53_);
if (v_isSharedCheck_65_ == 0)
{
v___x_60_ = v___x_53_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_53_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_58_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
else
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark;
v___x_67_ = lean_array_fset(v_b_37_, v_a_36_, v___x_66_);
v_a_44_ = v___x_67_;
goto v___jp_43_;
}
}
v___jp_43_:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_unsigned_to_nat(1u);
v___x_46_ = lean_nat_add(v_a_36_, v___x_45_);
lean_dec(v_a_36_);
v_a_36_ = v___x_46_;
v_b_37_ = v_a_44_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0___redArg___boxed(lean_object* v_upperBound_68_, lean_object* v_i_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_b_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0___redArg(v_upperBound_68_, v_i_69_, v_a_70_, v_a_71_, v_b_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec_ref(v_a_70_);
lean_dec(v_i_69_);
lean_dec(v_upperBound_68_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__1(lean_object* v_i_79_, lean_object* v_x_80_, lean_object* v_x_81_, lean_object* v_x_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
if (lean_obj_tag(v_x_80_) == 5)
{
lean_object* v_fn_88_; lean_object* v_arg_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v_fn_88_ = lean_ctor_get(v_x_80_, 0);
lean_inc_ref(v_fn_88_);
v_arg_89_ = lean_ctor_get(v_x_80_, 1);
lean_inc_ref(v_arg_89_);
lean_dec_ref_known(v_x_80_, 2);
v___x_90_ = lean_array_set(v_x_81_, v_x_82_, v_arg_89_);
v___x_91_ = lean_unsigned_to_nat(1u);
v___x_92_ = lean_nat_sub(v_x_82_, v___x_91_);
lean_dec(v_x_82_);
v_x_80_ = v_fn_88_;
v_x_81_ = v___x_90_;
v_x_82_ = v___x_92_;
goto _start;
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; 
lean_dec(v_x_82_);
v___x_94_ = lean_box(0);
lean_inc_ref(v_x_80_);
v___x_95_ = l_Lean_Meta_getFunInfo(v_x_80_, v___x_94_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v_a_96_ = lean_ctor_get(v___x_95_, 0);
lean_inc(v_a_96_);
lean_dec_ref_known(v___x_95_, 1);
v___x_97_ = lean_array_get_size(v_x_81_);
v___x_98_ = lean_unsigned_to_nat(0u);
v___x_99_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0___redArg(v___x_97_, v_i_79_, v_a_96_, v___x_98_, v_x_81_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
lean_dec(v_a_96_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_108_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_108_ == 0)
{
v___x_102_ = v___x_99_;
v_isShared_103_ = v_isSharedCheck_108_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_108_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_104_ = l_Lean_mkAppN(v_x_80_, v_a_100_);
lean_dec(v_a_100_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 0, v___x_104_);
v___x_106_ = v___x_102_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
else
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
lean_dec_ref(v_x_80_);
v_a_109_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v___x_99_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_99_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
else
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
lean_dec_ref(v_x_81_);
lean_dec_ref(v_x_80_);
v_a_117_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_124_ == 0)
{
v___x_119_ = v___x_95_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_95_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_117_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__1___boxed(lean_object* v_i_125_, lean_object* v_x_126_, lean_object* v_x_127_, lean_object* v_x_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__1(v_i_125_, v_x_126_, v_x_127_, v_x_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v_i_125_);
return v_res_134_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__0(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_box(0);
v___x_136_ = l_unsafeCast___redArg(v___x_135_);
return v___x_136_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1(void){
_start:
{
lean_object* v___x_137_; lean_object* v_dummy_138_; 
v___x_137_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__0, &l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__0);
v_dummy_138_ = l_Lean_Expr_sort___override(v___x_137_);
return v_dummy_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey(lean_object* v_e_139_, lean_object* v_i_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_dummy_146_; lean_object* v_nargs_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_dummy_146_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1, &l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1);
v_nargs_147_ = l_Lean_Expr_getAppNumArgs(v_e_139_);
lean_inc(v_nargs_147_);
v___x_148_ = lean_mk_array(v_nargs_147_, v_dummy_146_);
v___x_149_ = lean_unsigned_to_nat(1u);
v___x_150_ = lean_nat_sub(v_nargs_147_, v___x_149_);
lean_dec(v_nargs_147_);
v___x_151_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__1(v_i_140_, v_e_139_, v___x_148_, v___x_150_, v_a_141_, v_a_142_, v_a_143_, v_a_144_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___boxed(lean_object* v_e_152_, lean_object* v_i_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey(v_e_152_, v_i_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec(v_a_155_);
lean_dec_ref(v_a_154_);
lean_dec(v_i_153_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0(lean_object* v_upperBound_160_, lean_object* v_i_161_, lean_object* v_a_162_, lean_object* v___x_163_, lean_object* v_inst_164_, lean_object* v_R_165_, lean_object* v_a_166_, lean_object* v_b_167_, lean_object* v_c_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0___redArg(v_upperBound_160_, v_i_161_, v_a_162_, v_a_166_, v_b_167_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0___boxed(lean_object* v_upperBound_175_, lean_object* v_i_176_, lean_object* v_a_177_, lean_object* v___x_178_, lean_object* v_inst_179_, lean_object* v_R_180_, lean_object* v_a_181_, lean_object* v_b_182_, lean_object* v_c_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey_spec__0(v_upperBound_175_, v_i_176_, v_a_177_, v___x_178_, v_inst_179_, v_R_180_, v_a_181_, v_b_182_, v_c_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
lean_dec(v___x_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_i_176_);
lean_dec(v_upperBound_175_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate___redArg(lean_object* v_a_190_, lean_object* v_b_191_, lean_object* v_i_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_arg_200_; lean_object* v_app_201_; lean_object* v_arg_202_; lean_object* v_app_203_; lean_object* v_fst_205_; lean_object* v_snd_206_; uint8_t v___x_246_; 
v_arg_200_ = lean_ctor_get(v_a_190_, 0);
lean_inc_ref(v_arg_200_);
v_app_201_ = lean_ctor_get(v_a_190_, 1);
lean_inc_ref(v_app_201_);
lean_dec_ref(v_a_190_);
v_arg_202_ = lean_ctor_get(v_b_191_, 0);
lean_inc_ref(v_arg_202_);
v_app_203_ = lean_ctor_get(v_b_191_, 1);
lean_inc_ref(v_app_203_);
lean_dec_ref(v_b_191_);
v___x_246_ = lean_expr_lt(v_arg_200_, v_arg_202_);
if (v___x_246_ == 0)
{
v_fst_205_ = v_arg_202_;
v_snd_206_ = v_arg_200_;
goto v___jp_204_;
}
else
{
v_fst_205_ = v_arg_200_;
v_snd_206_ = v_arg_202_;
goto v___jp_204_;
}
v___jp_204_:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_Meta_mkEq(v_fst_205_, v_snd_206_, v_a_195_, v_a_196_, v_a_197_, v_a_198_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; lean_object* v___x_209_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_a_208_);
lean_dec_ref_known(v___x_207_, 1);
v___x_209_ = l_Lean_Meta_Sym_canon(v_a_208_, v_a_193_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_);
if (lean_obj_tag(v___x_209_) == 0)
{
lean_object* v_a_210_; lean_object* v___x_211_; 
v_a_210_ = lean_ctor_get(v___x_209_, 0);
lean_inc(v_a_210_);
lean_dec_ref_known(v___x_209_, 1);
v___x_211_ = l_Lean_Meta_Sym_shareCommon(v_a_210_, v_a_193_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_221_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_221_ == 0)
{
v___x_214_ = v___x_211_;
v_isShared_215_ = v_isSharedCheck_221_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___x_211_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_221_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_219_; 
lean_inc(v_i_192_);
lean_inc_ref(v_app_203_);
lean_inc_ref(v_app_201_);
v___x_216_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_216_, 0, v_app_201_);
lean_ctor_set(v___x_216_, 1, v_app_203_);
lean_ctor_set(v___x_216_, 2, v_i_192_);
v___x_217_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_217_, 0, v_app_201_);
lean_ctor_set(v___x_217_, 1, v_app_203_);
lean_ctor_set(v___x_217_, 2, v_i_192_);
lean_ctor_set(v___x_217_, 3, v_a_212_);
lean_ctor_set(v___x_217_, 4, v___x_216_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_217_);
v___x_219_ = v___x_214_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
lean_dec_ref(v_app_203_);
lean_dec_ref(v_app_201_);
lean_dec(v_i_192_);
v_a_222_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v___x_211_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_211_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_dec_ref(v_app_203_);
lean_dec_ref(v_app_201_);
lean_dec(v_i_192_);
v_a_230_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_209_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_209_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
else
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
lean_dec_ref(v_app_203_);
lean_dec_ref(v_app_201_);
lean_dec(v_i_192_);
v_a_238_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v___x_207_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_207_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_238_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate___redArg___boxed(lean_object* v_a_247_, lean_object* v_b_248_, lean_object* v_i_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate___redArg(v_a_247_, v_b_248_, v_i_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_);
lean_dec(v_a_255_);
lean_dec_ref(v_a_254_);
lean_dec(v_a_253_);
lean_dec_ref(v_a_252_);
lean_dec(v_a_251_);
lean_dec_ref(v_a_250_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate(lean_object* v_a_258_, lean_object* v_b_259_, lean_object* v_i_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate___redArg(v_a_258_, v_b_259_, v_i_260_, v_a_265_, v_a_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate___boxed(lean_object* v_a_273_, lean_object* v_b_274_, lean_object* v_i_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate(v_a_273_, v_b_274_, v_i_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
lean_dec(v_a_285_);
lean_dec_ref(v_a_284_);
lean_dec(v_a_283_);
lean_dec_ref(v_a_282_);
lean_dec(v_a_281_);
lean_dec_ref(v_a_280_);
lean_dec(v_a_279_);
lean_dec_ref(v_a_278_);
lean_dec(v_a_277_);
lean_dec(v_a_276_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0___redArg(lean_object* v_declName_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___x_291_; lean_object* v_env_292_; uint8_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_291_ = lean_st_ref_get(v___y_289_);
v_env_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc_ref(v_env_292_);
lean_dec(v___x_291_);
v___x_293_ = l_Lean_isInstanceReducibleCore(v_env_292_, v_declName_288_);
v___x_294_ = lean_box(v___x_293_);
v___x_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0___redArg___boxed(lean_object* v_declName_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0___redArg(v_declName_296_, v___y_297_);
lean_dec(v___y_297_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0(lean_object* v_declName_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0___redArg(v_declName_300_, v___y_302_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0___boxed(lean_object* v_declName_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0(v_declName_305_, v___y_306_, v___y_307_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance(lean_object* v_f_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
if (lean_obj_tag(v_f_310_) == 4)
{
lean_object* v_declName_314_; lean_object* v___x_315_; 
v_declName_314_ = lean_ctor_get(v_f_310_, 0);
lean_inc(v_declName_314_);
lean_dec_ref_known(v_f_310_, 2);
v___x_315_ = l_Lean_isInstanceReducible___at___00__private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance_spec__0___redArg(v_declName_314_, v_a_312_);
return v___x_315_;
}
else
{
uint8_t v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
lean_dec_ref(v_f_310_);
v___x_316_ = 0;
v___x_317_ = lean_box(v___x_316_);
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance___boxed(lean_object* v_f_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance(v_f_319_, v_a_320_, v_a_321_);
lean_dec(v_a_321_);
lean_dec_ref(v_a_320_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__9(lean_object* v_as_324_, size_t v_sz_325_, size_t v_i_326_, lean_object* v_b_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
uint8_t v___x_339_; 
v___x_339_ = lean_usize_dec_lt(v_i_326_, v_sz_325_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; 
v___x_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_340_, 0, v_b_327_);
return v___x_340_;
}
else
{
lean_object* v___x_341_; lean_object* v_a_342_; lean_object* v___x_343_; 
v___x_341_ = lean_box(0);
v_a_342_ = lean_array_uget_borrowed(v_as_324_, v_i_326_);
lean_inc(v_a_342_);
v___x_343_ = l_Lean_Meta_Grind_addSplitCandidate(v_a_342_, v___y_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_);
if (lean_obj_tag(v___x_343_) == 0)
{
size_t v___x_344_; size_t v___x_345_; 
lean_dec_ref_known(v___x_343_, 1);
v___x_344_ = ((size_t)1ULL);
v___x_345_ = lean_usize_add(v_i_326_, v___x_344_);
v_i_326_ = v___x_345_;
v_b_327_ = v___x_341_;
goto _start;
}
else
{
return v___x_343_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__9___boxed(lean_object* v_as_347_, lean_object* v_sz_348_, lean_object* v_i_349_, lean_object* v_b_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
size_t v_sz_boxed_362_; size_t v_i_boxed_363_; lean_object* v_res_364_; 
v_sz_boxed_362_ = lean_unbox_usize(v_sz_348_);
lean_dec(v_sz_348_);
v_i_boxed_363_ = lean_unbox_usize(v_i_349_);
lean_dec(v_i_349_);
v_res_364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__9(v_as_347_, v_sz_boxed_362_, v_i_boxed_363_, v_b_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec(v___y_351_);
lean_dec_ref(v_as_347_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Grind_mbtc_spec__11(lean_object* v_x_365_, lean_object* v_x_366_){
_start:
{
if (lean_obj_tag(v_x_366_) == 0)
{
return v_x_365_;
}
else
{
lean_object* v_key_367_; lean_object* v_tail_368_; lean_object* v___x_369_; 
v_key_367_ = lean_ctor_get(v_x_366_, 0);
lean_inc(v_key_367_);
v_tail_368_ = lean_ctor_get(v_x_366_, 2);
lean_inc(v_tail_368_);
lean_dec_ref_known(v_x_366_, 3);
v___x_369_ = lean_array_push(v_x_365_, v_key_367_);
v_x_365_ = v___x_369_;
v_x_366_ = v_tail_368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_mbtc_spec__12(lean_object* v_as_371_, size_t v_i_372_, size_t v_stop_373_, lean_object* v_b_374_){
_start:
{
uint8_t v___x_375_; 
v___x_375_ = lean_usize_dec_eq(v_i_372_, v_stop_373_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; lean_object* v___x_377_; size_t v___x_378_; size_t v___x_379_; 
v___x_376_ = lean_array_uget_borrowed(v_as_371_, v_i_372_);
lean_inc(v___x_376_);
v___x_377_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Grind_mbtc_spec__11(v_b_374_, v___x_376_);
v___x_378_ = ((size_t)1ULL);
v___x_379_ = lean_usize_add(v_i_372_, v___x_378_);
v_i_372_ = v___x_379_;
v_b_374_ = v___x_377_;
goto _start;
}
else
{
return v_b_374_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_mbtc_spec__12___boxed(lean_object* v_as_381_, lean_object* v_i_382_, lean_object* v_stop_383_, lean_object* v_b_384_){
_start:
{
size_t v_i_boxed_385_; size_t v_stop_boxed_386_; lean_object* v_res_387_; 
v_i_boxed_385_ = lean_unbox_usize(v_i_382_);
lean_dec(v_i_382_);
v_stop_boxed_386_ = lean_unbox_usize(v_stop_383_);
lean_dec(v_stop_383_);
v_res_387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_mbtc_spec__12(v_as_381_, v_i_boxed_385_, v_stop_boxed_386_, v_b_384_);
lean_dec_ref(v_as_381_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20___redArg(lean_object* v_hi_388_, lean_object* v_pivot_389_, lean_object* v_as_390_, lean_object* v_i_391_, lean_object* v_k_392_){
_start:
{
uint8_t v___x_393_; 
v___x_393_ = lean_nat_dec_lt(v_k_392_, v_hi_388_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; lean_object* v___x_395_; 
lean_dec(v_k_392_);
v___x_394_ = lean_array_fswap(v_as_390_, v_i_391_, v_hi_388_);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v_i_391_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
return v___x_395_;
}
else
{
lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_396_ = lean_array_fget_borrowed(v_as_390_, v_k_392_);
v___x_397_ = l_Lean_Meta_Grind_SplitInfo_lt(v___x_396_, v_pivot_389_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = lean_nat_add(v_k_392_, v___x_398_);
lean_dec(v_k_392_);
v_k_392_ = v___x_399_;
goto _start;
}
else
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_401_ = lean_array_fswap(v_as_390_, v_i_391_, v_k_392_);
v___x_402_ = lean_unsigned_to_nat(1u);
v___x_403_ = lean_nat_add(v_i_391_, v___x_402_);
lean_dec(v_i_391_);
v___x_404_ = lean_nat_add(v_k_392_, v___x_402_);
lean_dec(v_k_392_);
v_as_390_ = v___x_401_;
v_i_391_ = v___x_403_;
v_k_392_ = v___x_404_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20___redArg___boxed(lean_object* v_hi_406_, lean_object* v_pivot_407_, lean_object* v_as_408_, lean_object* v_i_409_, lean_object* v_k_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20___redArg(v_hi_406_, v_pivot_407_, v_as_408_, v_i_409_, v_k_410_);
lean_dec_ref(v_pivot_407_);
lean_dec(v_hi_406_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___redArg(lean_object* v_n_412_, lean_object* v_as_413_, lean_object* v_lo_414_, lean_object* v_hi_415_){
_start:
{
lean_object* v___y_417_; uint8_t v___x_427_; 
v___x_427_ = lean_nat_dec_lt(v_lo_414_, v_hi_415_);
if (v___x_427_ == 0)
{
lean_dec(v_lo_414_);
return v_as_413_;
}
else
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v_mid_430_; lean_object* v___y_432_; lean_object* v___y_438_; lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_428_ = lean_nat_add(v_lo_414_, v_hi_415_);
v___x_429_ = lean_unsigned_to_nat(1u);
v_mid_430_ = lean_nat_shiftr(v___x_428_, v___x_429_);
lean_dec(v___x_428_);
v___x_443_ = lean_array_fget_borrowed(v_as_413_, v_mid_430_);
v___x_444_ = lean_array_fget_borrowed(v_as_413_, v_lo_414_);
v___x_445_ = l_Lean_Meta_Grind_SplitInfo_lt(v___x_443_, v___x_444_);
if (v___x_445_ == 0)
{
v___y_438_ = v_as_413_;
goto v___jp_437_;
}
else
{
lean_object* v___x_446_; 
v___x_446_ = lean_array_fswap(v_as_413_, v_lo_414_, v_mid_430_);
v___y_438_ = v___x_446_;
goto v___jp_437_;
}
v___jp_431_:
{
lean_object* v___x_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_433_ = lean_array_fget_borrowed(v___y_432_, v_mid_430_);
v___x_434_ = lean_array_fget_borrowed(v___y_432_, v_hi_415_);
v___x_435_ = l_Lean_Meta_Grind_SplitInfo_lt(v___x_433_, v___x_434_);
if (v___x_435_ == 0)
{
lean_dec(v_mid_430_);
v___y_417_ = v___y_432_;
goto v___jp_416_;
}
else
{
lean_object* v___x_436_; 
v___x_436_ = lean_array_fswap(v___y_432_, v_mid_430_, v_hi_415_);
lean_dec(v_mid_430_);
v___y_417_ = v___x_436_;
goto v___jp_416_;
}
}
v___jp_437_:
{
lean_object* v___x_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_439_ = lean_array_fget_borrowed(v___y_438_, v_hi_415_);
v___x_440_ = lean_array_fget_borrowed(v___y_438_, v_lo_414_);
v___x_441_ = l_Lean_Meta_Grind_SplitInfo_lt(v___x_439_, v___x_440_);
if (v___x_441_ == 0)
{
v___y_432_ = v___y_438_;
goto v___jp_431_;
}
else
{
lean_object* v___x_442_; 
v___x_442_ = lean_array_fswap(v___y_438_, v_lo_414_, v_hi_415_);
v___y_432_ = v___x_442_;
goto v___jp_431_;
}
}
}
v___jp_416_:
{
lean_object* v_pivot_418_; lean_object* v___x_419_; lean_object* v_fst_420_; lean_object* v_snd_421_; uint8_t v___x_422_; 
v_pivot_418_ = lean_array_fget(v___y_417_, v_hi_415_);
lean_inc_n(v_lo_414_, 2);
v___x_419_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20___redArg(v_hi_415_, v_pivot_418_, v___y_417_, v_lo_414_, v_lo_414_);
lean_dec(v_pivot_418_);
v_fst_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_fst_420_);
v_snd_421_ = lean_ctor_get(v___x_419_, 1);
lean_inc(v_snd_421_);
lean_dec_ref(v___x_419_);
v___x_422_ = lean_nat_dec_le(v_hi_415_, v_fst_420_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_423_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___redArg(v_n_412_, v_snd_421_, v_lo_414_, v_fst_420_);
v___x_424_ = lean_unsigned_to_nat(1u);
v___x_425_ = lean_nat_add(v_fst_420_, v___x_424_);
lean_dec(v_fst_420_);
v_as_413_ = v___x_423_;
v_lo_414_ = v___x_425_;
goto _start;
}
else
{
lean_dec(v_fst_420_);
lean_dec(v_lo_414_);
return v_snd_421_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___redArg___boxed(lean_object* v_n_447_, lean_object* v_as_448_, lean_object* v_lo_449_, lean_object* v_hi_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___redArg(v_n_447_, v_as_448_, v_lo_449_, v_hi_450_);
lean_dec(v_hi_450_);
lean_dec(v_n_447_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5___redArg(lean_object* v_a_452_, lean_object* v_x_453_){
_start:
{
if (lean_obj_tag(v_x_453_) == 0)
{
lean_object* v___x_454_; 
v___x_454_ = lean_box(0);
return v___x_454_;
}
else
{
lean_object* v_key_455_; lean_object* v_value_456_; lean_object* v_tail_457_; uint8_t v___x_458_; 
v_key_455_ = lean_ctor_get(v_x_453_, 0);
v_value_456_ = lean_ctor_get(v_x_453_, 1);
v_tail_457_ = lean_ctor_get(v_x_453_, 2);
v___x_458_ = lean_expr_eqv(v_key_455_, v_a_452_);
if (v___x_458_ == 0)
{
v_x_453_ = v_tail_457_;
goto _start;
}
else
{
lean_object* v___x_460_; 
lean_inc(v_value_456_);
v___x_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_460_, 0, v_value_456_);
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5___redArg___boxed(lean_object* v_a_461_, lean_object* v_x_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5___redArg(v_a_461_, v_x_462_);
lean_dec(v_x_462_);
lean_dec_ref(v_a_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2___redArg(lean_object* v_m_464_, lean_object* v_a_465_){
_start:
{
lean_object* v_buckets_466_; lean_object* v___x_467_; uint64_t v___x_468_; uint64_t v___x_469_; uint64_t v___x_470_; uint64_t v_fold_471_; uint64_t v___x_472_; uint64_t v___x_473_; uint64_t v___x_474_; size_t v___x_475_; size_t v___x_476_; size_t v___x_477_; size_t v___x_478_; size_t v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v_buckets_466_ = lean_ctor_get(v_m_464_, 1);
v___x_467_ = lean_array_get_size(v_buckets_466_);
v___x_468_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey_hash(v_a_465_);
v___x_469_ = 32ULL;
v___x_470_ = lean_uint64_shift_right(v___x_468_, v___x_469_);
v_fold_471_ = lean_uint64_xor(v___x_468_, v___x_470_);
v___x_472_ = 16ULL;
v___x_473_ = lean_uint64_shift_right(v_fold_471_, v___x_472_);
v___x_474_ = lean_uint64_xor(v_fold_471_, v___x_473_);
v___x_475_ = lean_uint64_to_usize(v___x_474_);
v___x_476_ = lean_usize_of_nat(v___x_467_);
v___x_477_ = ((size_t)1ULL);
v___x_478_ = lean_usize_sub(v___x_476_, v___x_477_);
v___x_479_ = lean_usize_land(v___x_475_, v___x_478_);
v___x_480_ = lean_array_uget_borrowed(v_buckets_466_, v___x_479_);
v___x_481_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5___redArg(v_a_465_, v___x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2___redArg___boxed(lean_object* v_m_482_, lean_object* v_a_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2___redArg(v_m_482_, v_a_483_);
lean_dec_ref(v_a_483_);
lean_dec_ref(v_m_482_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0_spec__0(lean_object* v_msgData_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
lean_object* v___x_491_; lean_object* v_env_492_; lean_object* v___x_493_; lean_object* v_toCold_494_; lean_object* v_mctx_495_; lean_object* v_lctx_496_; lean_object* v_options_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_491_ = lean_st_ref_get(v___y_489_);
v_env_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc_ref(v_env_492_);
lean_dec(v___x_491_);
v___x_493_ = lean_st_ref_get(v___y_487_);
v_toCold_494_ = lean_ctor_get(v___y_488_, 0);
v_mctx_495_ = lean_ctor_get(v___x_493_, 0);
lean_inc_ref(v_mctx_495_);
lean_dec(v___x_493_);
v_lctx_496_ = lean_ctor_get(v___y_486_, 2);
v_options_497_ = lean_ctor_get(v_toCold_494_, 2);
lean_inc_ref(v_options_497_);
lean_inc_ref(v_lctx_496_);
v___x_498_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_498_, 0, v_env_492_);
lean_ctor_set(v___x_498_, 1, v_mctx_495_);
lean_ctor_set(v___x_498_, 2, v_lctx_496_);
lean_ctor_set(v___x_498_, 3, v_options_497_);
v___x_499_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
lean_ctor_set(v___x_499_, 1, v_msgData_485_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0_spec__0___boxed(lean_object* v_msgData_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0_spec__0(v_msgData_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
return v_res_507_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_508_; double v___x_509_; 
v___x_508_ = lean_unsigned_to_nat(0u);
v___x_509_ = lean_float_of_nat(v___x_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg(lean_object* v_cls_513_, lean_object* v_msg_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
lean_object* v_ref_520_; lean_object* v___x_521_; lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_566_; 
v_ref_520_ = lean_ctor_get(v___y_517_, 2);
v___x_521_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0_spec__0(v_msg_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
v_a_522_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_566_ == 0)
{
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_566_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_566_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v_traceState_527_; lean_object* v_env_528_; lean_object* v_nextMacroScope_529_; lean_object* v_ngen_530_; lean_object* v_auxDeclNGen_531_; lean_object* v_cache_532_; lean_object* v_messages_533_; lean_object* v_infoState_534_; lean_object* v_snapshotTasks_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_565_; 
v___x_526_ = lean_st_ref_take(v___y_518_);
v_traceState_527_ = lean_ctor_get(v___x_526_, 4);
v_env_528_ = lean_ctor_get(v___x_526_, 0);
v_nextMacroScope_529_ = lean_ctor_get(v___x_526_, 1);
v_ngen_530_ = lean_ctor_get(v___x_526_, 2);
v_auxDeclNGen_531_ = lean_ctor_get(v___x_526_, 3);
v_cache_532_ = lean_ctor_get(v___x_526_, 5);
v_messages_533_ = lean_ctor_get(v___x_526_, 6);
v_infoState_534_ = lean_ctor_get(v___x_526_, 7);
v_snapshotTasks_535_ = lean_ctor_get(v___x_526_, 8);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_565_ == 0)
{
v___x_537_ = v___x_526_;
v_isShared_538_ = v_isSharedCheck_565_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_snapshotTasks_535_);
lean_inc(v_infoState_534_);
lean_inc(v_messages_533_);
lean_inc(v_cache_532_);
lean_inc(v_traceState_527_);
lean_inc(v_auxDeclNGen_531_);
lean_inc(v_ngen_530_);
lean_inc(v_nextMacroScope_529_);
lean_inc(v_env_528_);
lean_dec(v___x_526_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_565_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
uint64_t v_tid_539_; lean_object* v_traces_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_564_; 
v_tid_539_ = lean_ctor_get_uint64(v_traceState_527_, sizeof(void*)*1);
v_traces_540_ = lean_ctor_get(v_traceState_527_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v_traceState_527_);
if (v_isSharedCheck_564_ == 0)
{
v___x_542_ = v_traceState_527_;
v_isShared_543_ = v_isSharedCheck_564_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_traces_540_);
lean_dec(v_traceState_527_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_564_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_544_; lean_object* v___x_545_; double v___x_546_; uint8_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_555_; 
v___x_544_ = lean_box(0);
v___x_545_ = lean_box(0);
v___x_546_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__0);
v___x_547_ = 0;
v___x_548_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__1));
v___x_549_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_549_, 0, v_cls_513_);
lean_ctor_set(v___x_549_, 1, v___x_545_);
lean_ctor_set(v___x_549_, 2, v___x_548_);
lean_ctor_set_float(v___x_549_, sizeof(void*)*3, v___x_546_);
lean_ctor_set_float(v___x_549_, sizeof(void*)*3 + 8, v___x_546_);
lean_ctor_set_uint8(v___x_549_, sizeof(void*)*3 + 16, v___x_547_);
v___x_550_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___closed__2));
v___x_551_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_551_, 0, v___x_549_);
lean_ctor_set(v___x_551_, 1, v_a_522_);
lean_ctor_set(v___x_551_, 2, v___x_550_);
lean_inc(v_ref_520_);
v___x_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_552_, 0, v_ref_520_);
lean_ctor_set(v___x_552_, 1, v___x_551_);
v___x_553_ = l_Lean_PersistentArray_push___redArg(v_traces_540_, v___x_552_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 0, v___x_553_);
v___x_555_ = v___x_542_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_553_);
lean_ctor_set_uint64(v_reuseFailAlloc_563_, sizeof(void*)*1, v_tid_539_);
v___x_555_ = v_reuseFailAlloc_563_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
lean_object* v___x_557_; 
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 4, v___x_555_);
v___x_557_ = v___x_537_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_env_528_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v_nextMacroScope_529_);
lean_ctor_set(v_reuseFailAlloc_562_, 2, v_ngen_530_);
lean_ctor_set(v_reuseFailAlloc_562_, 3, v_auxDeclNGen_531_);
lean_ctor_set(v_reuseFailAlloc_562_, 4, v___x_555_);
lean_ctor_set(v_reuseFailAlloc_562_, 5, v_cache_532_);
lean_ctor_set(v_reuseFailAlloc_562_, 6, v_messages_533_);
lean_ctor_set(v_reuseFailAlloc_562_, 7, v_infoState_534_);
lean_ctor_set(v_reuseFailAlloc_562_, 8, v_snapshotTasks_535_);
v___x_557_ = v_reuseFailAlloc_562_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_558_ = lean_st_ref_put(v___y_518_, v___x_557_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_544_);
v___x_560_ = v___x_524_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_544_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg___boxed(lean_object* v_cls_567_, lean_object* v_msg_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg(v_cls_567_, v_msg_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
return v_res_574_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2___redArg(lean_object* v_a_575_, lean_object* v_x_576_){
_start:
{
if (lean_obj_tag(v_x_576_) == 0)
{
uint8_t v___x_577_; 
v___x_577_ = 0;
return v___x_577_;
}
else
{
lean_object* v_key_578_; lean_object* v_tail_579_; uint8_t v___x_580_; 
v_key_578_ = lean_ctor_get(v_x_576_, 0);
v_tail_579_ = lean_ctor_get(v_x_576_, 2);
v___x_580_ = l_Lean_Meta_Grind_SplitInfo_beq(v_key_578_, v_a_575_);
if (v___x_580_ == 0)
{
v_x_576_ = v_tail_579_;
goto _start;
}
else
{
return v___x_580_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2___redArg___boxed(lean_object* v_a_582_, lean_object* v_x_583_){
_start:
{
uint8_t v_res_584_; lean_object* v_r_585_; 
v_res_584_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2___redArg(v_a_582_, v_x_583_);
lean_dec(v_x_583_);
lean_dec_ref(v_a_582_);
v_r_585_ = lean_box(v_res_584_);
return v_r_585_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4_spec__16___redArg(lean_object* v_x_586_, lean_object* v_x_587_){
_start:
{
if (lean_obj_tag(v_x_587_) == 0)
{
return v_x_586_;
}
else
{
lean_object* v_key_588_; lean_object* v_value_589_; lean_object* v_tail_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_613_; 
v_key_588_ = lean_ctor_get(v_x_587_, 0);
v_value_589_ = lean_ctor_get(v_x_587_, 1);
v_tail_590_ = lean_ctor_get(v_x_587_, 2);
v_isSharedCheck_613_ = !lean_is_exclusive(v_x_587_);
if (v_isSharedCheck_613_ == 0)
{
v___x_592_ = v_x_587_;
v_isShared_593_ = v_isSharedCheck_613_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_tail_590_);
lean_inc(v_value_589_);
lean_inc(v_key_588_);
lean_dec(v_x_587_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_613_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_594_; uint64_t v___x_595_; uint64_t v___x_596_; uint64_t v___x_597_; uint64_t v_fold_598_; uint64_t v___x_599_; uint64_t v___x_600_; uint64_t v___x_601_; size_t v___x_602_; size_t v___x_603_; size_t v___x_604_; size_t v___x_605_; size_t v___x_606_; lean_object* v___x_607_; lean_object* v___x_609_; 
v___x_594_ = lean_array_get_size(v_x_586_);
v___x_595_ = l_Lean_Meta_Grind_SplitInfo_hash(v_key_588_);
v___x_596_ = 32ULL;
v___x_597_ = lean_uint64_shift_right(v___x_595_, v___x_596_);
v_fold_598_ = lean_uint64_xor(v___x_595_, v___x_597_);
v___x_599_ = 16ULL;
v___x_600_ = lean_uint64_shift_right(v_fold_598_, v___x_599_);
v___x_601_ = lean_uint64_xor(v_fold_598_, v___x_600_);
v___x_602_ = lean_uint64_to_usize(v___x_601_);
v___x_603_ = lean_usize_of_nat(v___x_594_);
v___x_604_ = ((size_t)1ULL);
v___x_605_ = lean_usize_sub(v___x_603_, v___x_604_);
v___x_606_ = lean_usize_land(v___x_602_, v___x_605_);
v___x_607_ = lean_array_uget_borrowed(v_x_586_, v___x_606_);
lean_inc(v___x_607_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 2, v___x_607_);
v___x_609_ = v___x_592_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_key_588_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_value_589_);
lean_ctor_set(v_reuseFailAlloc_612_, 2, v___x_607_);
v___x_609_ = v_reuseFailAlloc_612_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
lean_object* v___x_610_; 
v___x_610_ = lean_array_uset(v_x_586_, v___x_606_, v___x_609_);
v_x_586_ = v___x_610_;
v_x_587_ = v_tail_590_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4___redArg(lean_object* v_i_614_, lean_object* v_source_615_, lean_object* v_target_616_){
_start:
{
lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_617_ = lean_array_get_size(v_source_615_);
v___x_618_ = lean_nat_dec_lt(v_i_614_, v___x_617_);
if (v___x_618_ == 0)
{
lean_dec_ref(v_source_615_);
lean_dec(v_i_614_);
return v_target_616_;
}
else
{
lean_object* v_es_619_; lean_object* v___x_620_; lean_object* v_source_621_; lean_object* v_target_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v_es_619_ = lean_array_fget(v_source_615_, v_i_614_);
v___x_620_ = lean_box(0);
v_source_621_ = lean_array_fset(v_source_615_, v_i_614_, v___x_620_);
v_target_622_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4_spec__16___redArg(v_target_616_, v_es_619_);
v___x_623_ = lean_unsigned_to_nat(1u);
v___x_624_ = lean_nat_add(v_i_614_, v___x_623_);
lean_dec(v_i_614_);
v_i_614_ = v___x_624_;
v_source_615_ = v_source_621_;
v_target_616_ = v_target_622_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3___redArg(lean_object* v_data_626_){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_nbuckets_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_627_ = lean_array_get_size(v_data_626_);
v___x_628_ = lean_unsigned_to_nat(2u);
v_nbuckets_629_ = lean_nat_mul(v___x_627_, v___x_628_);
v___x_630_ = lean_unsigned_to_nat(0u);
v___x_631_ = lean_box(0);
v___x_632_ = lean_mk_array(v_nbuckets_629_, v___x_631_);
v___x_633_ = lean_array_propagate_mark(v_data_626_, v___x_632_);
v___x_634_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4___redArg(v___x_630_, v_data_626_, v___x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1___redArg(lean_object* v_m_635_, lean_object* v_a_636_, lean_object* v_b_637_){
_start:
{
lean_object* v_size_638_; lean_object* v_buckets_639_; lean_object* v___x_640_; uint64_t v___x_641_; uint64_t v___x_642_; uint64_t v___x_643_; uint64_t v_fold_644_; uint64_t v___x_645_; uint64_t v___x_646_; uint64_t v___x_647_; size_t v___x_648_; size_t v___x_649_; size_t v___x_650_; size_t v___x_651_; size_t v___x_652_; lean_object* v_bkt_653_; uint8_t v___x_654_; 
v_size_638_ = lean_ctor_get(v_m_635_, 0);
v_buckets_639_ = lean_ctor_get(v_m_635_, 1);
v___x_640_ = lean_array_get_size(v_buckets_639_);
v___x_641_ = l_Lean_Meta_Grind_SplitInfo_hash(v_a_636_);
v___x_642_ = 32ULL;
v___x_643_ = lean_uint64_shift_right(v___x_641_, v___x_642_);
v_fold_644_ = lean_uint64_xor(v___x_641_, v___x_643_);
v___x_645_ = 16ULL;
v___x_646_ = lean_uint64_shift_right(v_fold_644_, v___x_645_);
v___x_647_ = lean_uint64_xor(v_fold_644_, v___x_646_);
v___x_648_ = lean_uint64_to_usize(v___x_647_);
v___x_649_ = lean_usize_of_nat(v___x_640_);
v___x_650_ = ((size_t)1ULL);
v___x_651_ = lean_usize_sub(v___x_649_, v___x_650_);
v___x_652_ = lean_usize_land(v___x_648_, v___x_651_);
v_bkt_653_ = lean_array_uget_borrowed(v_buckets_639_, v___x_652_);
v___x_654_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2___redArg(v_a_636_, v_bkt_653_);
if (v___x_654_ == 0)
{
lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_675_; 
lean_inc_ref(v_buckets_639_);
lean_inc(v_size_638_);
v_isSharedCheck_675_ = !lean_is_exclusive(v_m_635_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; lean_object* v_unused_677_; 
v_unused_676_ = lean_ctor_get(v_m_635_, 1);
lean_dec(v_unused_676_);
v_unused_677_ = lean_ctor_get(v_m_635_, 0);
lean_dec(v_unused_677_);
v___x_656_ = v_m_635_;
v_isShared_657_ = v_isSharedCheck_675_;
goto v_resetjp_655_;
}
else
{
lean_dec(v_m_635_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_675_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_658_; lean_object* v_size_x27_659_; lean_object* v___x_660_; lean_object* v_buckets_x27_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v___x_658_ = lean_unsigned_to_nat(1u);
v_size_x27_659_ = lean_nat_add(v_size_638_, v___x_658_);
lean_dec(v_size_638_);
lean_inc(v_bkt_653_);
v___x_660_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_660_, 0, v_a_636_);
lean_ctor_set(v___x_660_, 1, v_b_637_);
lean_ctor_set(v___x_660_, 2, v_bkt_653_);
v_buckets_x27_661_ = lean_array_uset(v_buckets_639_, v___x_652_, v___x_660_);
v___x_662_ = lean_unsigned_to_nat(4u);
v___x_663_ = lean_nat_mul(v_size_x27_659_, v___x_662_);
v___x_664_ = lean_unsigned_to_nat(3u);
v___x_665_ = lean_nat_div(v___x_663_, v___x_664_);
lean_dec(v___x_663_);
v___x_666_ = lean_array_get_size(v_buckets_x27_661_);
v___x_667_ = lean_nat_dec_le(v___x_665_, v___x_666_);
lean_dec(v___x_665_);
if (v___x_667_ == 0)
{
lean_object* v_val_668_; lean_object* v___x_670_; 
v_val_668_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3___redArg(v_buckets_x27_661_);
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 1, v_val_668_);
lean_ctor_set(v___x_656_, 0, v_size_x27_659_);
v___x_670_ = v___x_656_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_size_x27_659_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v_val_668_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
else
{
lean_object* v___x_673_; 
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 1, v_buckets_x27_661_);
lean_ctor_set(v___x_656_, 0, v_size_x27_659_);
v___x_673_ = v___x_656_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_size_x27_659_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v_buckets_x27_661_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
else
{
lean_dec(v_b_637_);
lean_dec_ref(v_a_636_);
return v_m_635_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4___redArg(lean_object* v_ctx_678_, lean_object* v_val_679_, lean_object* v___x_680_, lean_object* v___x_681_, lean_object* v_as_x27_682_, lean_object* v_b_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
if (lean_obj_tag(v_as_x27_682_) == 0)
{
lean_object* v___x_695_; 
lean_dec(v___x_681_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v_val_679_);
lean_dec_ref(v_ctx_678_);
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v_b_683_);
return v___x_695_;
}
else
{
lean_object* v_head_696_; lean_object* v_tail_697_; lean_object* v_eqAssignment_698_; lean_object* v_arg_699_; lean_object* v___x_700_; 
v_head_696_ = lean_ctor_get(v_as_x27_682_, 0);
v_tail_697_ = lean_ctor_get(v_as_x27_682_, 1);
v_eqAssignment_698_ = lean_ctor_get(v_ctx_678_, 2);
v_arg_699_ = lean_ctor_get(v_head_696_, 0);
lean_inc_ref(v_eqAssignment_698_);
lean_inc(v___y_693_);
lean_inc_ref(v___y_692_);
lean_inc(v___y_691_);
lean_inc_ref(v___y_690_);
lean_inc(v___y_689_);
lean_inc_ref(v___y_688_);
lean_inc(v___y_687_);
lean_inc_ref(v___y_686_);
lean_inc(v___y_685_);
lean_inc(v___y_684_);
lean_inc_ref(v_arg_699_);
lean_inc_ref(v_val_679_);
v___x_700_ = lean_apply_13(v_eqAssignment_698_, v_val_679_, v_arg_699_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, lean_box(0));
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; uint8_t v___x_702_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
v___x_702_ = lean_unbox(v_a_701_);
lean_dec(v_a_701_);
if (v___x_702_ == 0)
{
v_as_x27_682_ = v_tail_697_;
goto _start;
}
else
{
lean_object* v___x_704_; 
lean_inc_ref(v_arg_699_);
lean_inc_ref(v_val_679_);
v___x_704_ = l_Lean_Meta_Grind_hasSameType(v_val_679_, v_arg_699_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; uint8_t v___x_706_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_705_);
lean_dec_ref_known(v___x_704_, 1);
v___x_706_ = lean_unbox(v_a_705_);
lean_dec(v_a_705_);
if (v___x_706_ == 0)
{
v_as_x27_682_ = v_tail_697_;
goto _start;
}
else
{
lean_object* v___x_708_; 
lean_inc(v___x_681_);
lean_inc(v_head_696_);
lean_inc_ref(v___x_680_);
v___x_708_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkCandidate___redArg(v___x_680_, v_head_696_, v___x_681_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_708_, 1);
v___x_710_ = lean_box(0);
v___x_711_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1___redArg(v_b_683_, v_a_709_, v___x_710_);
v_as_x27_682_ = v_tail_697_;
v_b_683_ = v___x_711_;
goto _start;
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec_ref(v_b_683_);
lean_dec(v___x_681_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v_val_679_);
lean_dec_ref(v_ctx_678_);
v_a_713_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_708_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_708_);
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
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
lean_dec_ref(v_b_683_);
lean_dec(v___x_681_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v_val_679_);
lean_dec_ref(v_ctx_678_);
v_a_721_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_728_ == 0)
{
v___x_723_ = v___x_704_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_704_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
}
else
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
lean_dec_ref(v_b_683_);
lean_dec(v___x_681_);
lean_dec_ref(v___x_680_);
lean_dec_ref(v_val_679_);
lean_dec_ref(v_ctx_678_);
v_a_729_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_700_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_700_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4___redArg___boxed(lean_object** _args){
lean_object* v_ctx_737_ = _args[0];
lean_object* v_val_738_ = _args[1];
lean_object* v___x_739_ = _args[2];
lean_object* v___x_740_ = _args[3];
lean_object* v_as_x27_741_ = _args[4];
lean_object* v_b_742_ = _args[5];
lean_object* v___y_743_ = _args[6];
lean_object* v___y_744_ = _args[7];
lean_object* v___y_745_ = _args[8];
lean_object* v___y_746_ = _args[9];
lean_object* v___y_747_ = _args[10];
lean_object* v___y_748_ = _args[11];
lean_object* v___y_749_ = _args[12];
lean_object* v___y_750_ = _args[13];
lean_object* v___y_751_ = _args[14];
lean_object* v___y_752_ = _args[15];
lean_object* v___y_753_ = _args[16];
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4___redArg(v_ctx_737_, v_val_738_, v___x_739_, v___x_740_, v_as_x27_741_, v_b_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec(v___y_743_);
lean_dec(v_as_x27_741_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__11___redArg(lean_object* v_a_755_, lean_object* v_b_756_, lean_object* v_x_757_){
_start:
{
if (lean_obj_tag(v_x_757_) == 0)
{
lean_dec(v_b_756_);
lean_dec_ref(v_a_755_);
return v_x_757_;
}
else
{
lean_object* v_key_758_; lean_object* v_value_759_; lean_object* v_tail_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_772_; 
v_key_758_ = lean_ctor_get(v_x_757_, 0);
v_value_759_ = lean_ctor_get(v_x_757_, 1);
v_tail_760_ = lean_ctor_get(v_x_757_, 2);
v_isSharedCheck_772_ = !lean_is_exclusive(v_x_757_);
if (v_isSharedCheck_772_ == 0)
{
v___x_762_ = v_x_757_;
v_isShared_763_ = v_isSharedCheck_772_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_tail_760_);
lean_inc(v_value_759_);
lean_inc(v_key_758_);
lean_dec(v_x_757_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_772_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
uint8_t v___x_764_; 
v___x_764_ = lean_expr_eqv(v_key_758_, v_a_755_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_765_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__11___redArg(v_a_755_, v_b_756_, v_tail_760_);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 2, v___x_765_);
v___x_767_ = v___x_762_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_key_758_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v_value_759_);
lean_ctor_set(v_reuseFailAlloc_768_, 2, v___x_765_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
else
{
lean_object* v___x_770_; 
lean_dec(v_value_759_);
lean_dec(v_key_758_);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 1, v_b_756_);
lean_ctor_set(v___x_762_, 0, v_a_755_);
v___x_770_ = v___x_762_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_755_);
lean_ctor_set(v_reuseFailAlloc_771_, 1, v_b_756_);
lean_ctor_set(v_reuseFailAlloc_771_, 2, v_tail_760_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9___redArg(lean_object* v_a_773_, lean_object* v_x_774_){
_start:
{
if (lean_obj_tag(v_x_774_) == 0)
{
uint8_t v___x_775_; 
v___x_775_ = 0;
return v___x_775_;
}
else
{
lean_object* v_key_776_; lean_object* v_tail_777_; uint8_t v___x_778_; 
v_key_776_ = lean_ctor_get(v_x_774_, 0);
v_tail_777_ = lean_ctor_get(v_x_774_, 2);
v___x_778_ = lean_expr_eqv(v_key_776_, v_a_773_);
if (v___x_778_ == 0)
{
v_x_774_ = v_tail_777_;
goto _start;
}
else
{
return v___x_778_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9___redArg___boxed(lean_object* v_a_780_, lean_object* v_x_781_){
_start:
{
uint8_t v_res_782_; lean_object* v_r_783_; 
v_res_782_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9___redArg(v_a_780_, v_x_781_);
lean_dec(v_x_781_);
lean_dec_ref(v_a_780_);
v_r_783_ = lean_box(v_res_782_);
return v_r_783_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12_spec__21___redArg(lean_object* v_x_784_, lean_object* v_x_785_){
_start:
{
if (lean_obj_tag(v_x_785_) == 0)
{
return v_x_784_;
}
else
{
lean_object* v_key_786_; lean_object* v_value_787_; lean_object* v_tail_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_811_; 
v_key_786_ = lean_ctor_get(v_x_785_, 0);
v_value_787_ = lean_ctor_get(v_x_785_, 1);
v_tail_788_ = lean_ctor_get(v_x_785_, 2);
v_isSharedCheck_811_ = !lean_is_exclusive(v_x_785_);
if (v_isSharedCheck_811_ == 0)
{
v___x_790_ = v_x_785_;
v_isShared_791_ = v_isSharedCheck_811_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_tail_788_);
lean_inc(v_value_787_);
lean_inc(v_key_786_);
lean_dec(v_x_785_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_811_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_792_; uint64_t v___x_793_; uint64_t v___x_794_; uint64_t v___x_795_; uint64_t v_fold_796_; uint64_t v___x_797_; uint64_t v___x_798_; uint64_t v___x_799_; size_t v___x_800_; size_t v___x_801_; size_t v___x_802_; size_t v___x_803_; size_t v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_792_ = lean_array_get_size(v_x_784_);
v___x_793_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey_hash(v_key_786_);
v___x_794_ = 32ULL;
v___x_795_ = lean_uint64_shift_right(v___x_793_, v___x_794_);
v_fold_796_ = lean_uint64_xor(v___x_793_, v___x_795_);
v___x_797_ = 16ULL;
v___x_798_ = lean_uint64_shift_right(v_fold_796_, v___x_797_);
v___x_799_ = lean_uint64_xor(v_fold_796_, v___x_798_);
v___x_800_ = lean_uint64_to_usize(v___x_799_);
v___x_801_ = lean_usize_of_nat(v___x_792_);
v___x_802_ = ((size_t)1ULL);
v___x_803_ = lean_usize_sub(v___x_801_, v___x_802_);
v___x_804_ = lean_usize_land(v___x_800_, v___x_803_);
v___x_805_ = lean_array_uget_borrowed(v_x_784_, v___x_804_);
lean_inc(v___x_805_);
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 2, v___x_805_);
v___x_807_ = v___x_790_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_key_786_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_value_787_);
lean_ctor_set(v_reuseFailAlloc_810_, 2, v___x_805_);
v___x_807_ = v_reuseFailAlloc_810_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_808_; 
v___x_808_ = lean_array_uset(v_x_784_, v___x_804_, v___x_807_);
v_x_784_ = v___x_808_;
v_x_785_ = v_tail_788_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12___redArg(lean_object* v_i_812_, lean_object* v_source_813_, lean_object* v_target_814_){
_start:
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = lean_array_get_size(v_source_813_);
v___x_816_ = lean_nat_dec_lt(v_i_812_, v___x_815_);
if (v___x_816_ == 0)
{
lean_dec_ref(v_source_813_);
lean_dec(v_i_812_);
return v_target_814_;
}
else
{
lean_object* v_es_817_; lean_object* v___x_818_; lean_object* v_source_819_; lean_object* v_target_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_es_817_ = lean_array_fget(v_source_813_, v_i_812_);
v___x_818_ = lean_box(0);
v_source_819_ = lean_array_fset(v_source_813_, v_i_812_, v___x_818_);
v_target_820_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12_spec__21___redArg(v_target_814_, v_es_817_);
v___x_821_ = lean_unsigned_to_nat(1u);
v___x_822_ = lean_nat_add(v_i_812_, v___x_821_);
lean_dec(v_i_812_);
v_i_812_ = v___x_822_;
v_source_813_ = v_source_819_;
v_target_814_ = v_target_820_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10___redArg(lean_object* v_data_824_){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v_nbuckets_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_825_ = lean_array_get_size(v_data_824_);
v___x_826_ = lean_unsigned_to_nat(2u);
v_nbuckets_827_ = lean_nat_mul(v___x_825_, v___x_826_);
v___x_828_ = lean_unsigned_to_nat(0u);
v___x_829_ = lean_box(0);
v___x_830_ = lean_mk_array(v_nbuckets_827_, v___x_829_);
v___x_831_ = lean_array_propagate_mark(v_data_824_, v___x_830_);
v___x_832_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12___redArg(v___x_828_, v_data_824_, v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5___redArg(lean_object* v_m_833_, lean_object* v_a_834_, lean_object* v_b_835_){
_start:
{
lean_object* v_size_836_; lean_object* v_buckets_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_880_; 
v_size_836_ = lean_ctor_get(v_m_833_, 0);
v_buckets_837_ = lean_ctor_get(v_m_833_, 1);
v_isSharedCheck_880_ = !lean_is_exclusive(v_m_833_);
if (v_isSharedCheck_880_ == 0)
{
v___x_839_ = v_m_833_;
v_isShared_840_ = v_isSharedCheck_880_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_buckets_837_);
lean_inc(v_size_836_);
lean_dec(v_m_833_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_880_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; uint64_t v___x_842_; uint64_t v___x_843_; uint64_t v___x_844_; uint64_t v_fold_845_; uint64_t v___x_846_; uint64_t v___x_847_; uint64_t v___x_848_; size_t v___x_849_; size_t v___x_850_; size_t v___x_851_; size_t v___x_852_; size_t v___x_853_; lean_object* v_bkt_854_; uint8_t v___x_855_; 
v___x_841_ = lean_array_get_size(v_buckets_837_);
v___x_842_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_instHashableKey_hash(v_a_834_);
v___x_843_ = 32ULL;
v___x_844_ = lean_uint64_shift_right(v___x_842_, v___x_843_);
v_fold_845_ = lean_uint64_xor(v___x_842_, v___x_844_);
v___x_846_ = 16ULL;
v___x_847_ = lean_uint64_shift_right(v_fold_845_, v___x_846_);
v___x_848_ = lean_uint64_xor(v_fold_845_, v___x_847_);
v___x_849_ = lean_uint64_to_usize(v___x_848_);
v___x_850_ = lean_usize_of_nat(v___x_841_);
v___x_851_ = ((size_t)1ULL);
v___x_852_ = lean_usize_sub(v___x_850_, v___x_851_);
v___x_853_ = lean_usize_land(v___x_849_, v___x_852_);
v_bkt_854_ = lean_array_uget_borrowed(v_buckets_837_, v___x_853_);
v___x_855_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9___redArg(v_a_834_, v_bkt_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; lean_object* v_size_x27_857_; lean_object* v___x_858_; lean_object* v_buckets_x27_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; 
v___x_856_ = lean_unsigned_to_nat(1u);
v_size_x27_857_ = lean_nat_add(v_size_836_, v___x_856_);
lean_dec(v_size_836_);
lean_inc(v_bkt_854_);
v___x_858_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_858_, 0, v_a_834_);
lean_ctor_set(v___x_858_, 1, v_b_835_);
lean_ctor_set(v___x_858_, 2, v_bkt_854_);
v_buckets_x27_859_ = lean_array_uset(v_buckets_837_, v___x_853_, v___x_858_);
v___x_860_ = lean_unsigned_to_nat(4u);
v___x_861_ = lean_nat_mul(v_size_x27_857_, v___x_860_);
v___x_862_ = lean_unsigned_to_nat(3u);
v___x_863_ = lean_nat_div(v___x_861_, v___x_862_);
lean_dec(v___x_861_);
v___x_864_ = lean_array_get_size(v_buckets_x27_859_);
v___x_865_ = lean_nat_dec_le(v___x_863_, v___x_864_);
lean_dec(v___x_863_);
if (v___x_865_ == 0)
{
lean_object* v_val_866_; lean_object* v___x_868_; 
v_val_866_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10___redArg(v_buckets_x27_859_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v_val_866_);
lean_ctor_set(v___x_839_, 0, v_size_x27_857_);
v___x_868_ = v___x_839_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_size_x27_857_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v_val_866_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
else
{
lean_object* v___x_871_; 
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v_buckets_x27_859_);
lean_ctor_set(v___x_839_, 0, v_size_x27_857_);
v___x_871_ = v___x_839_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_size_x27_857_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v_buckets_x27_859_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
else
{
lean_object* v___x_873_; lean_object* v_buckets_x27_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_878_; 
lean_inc(v_bkt_854_);
v___x_873_ = lean_box(0);
v_buckets_x27_874_ = lean_array_uset(v_buckets_837_, v___x_853_, v___x_873_);
v___x_875_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__11___redArg(v_a_834_, v_b_835_, v_bkt_854_);
v___x_876_ = lean_array_uset(v_buckets_x27_874_, v___x_853_, v___x_875_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v___x_876_);
v___x_878_ = v___x_839_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_size_836_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Meta_Grind_mbtc_spec__3(lean_object* v_val_881_, lean_object* v_x_882_){
_start:
{
if (lean_obj_tag(v_x_882_) == 0)
{
uint8_t v___x_883_; 
v___x_883_ = 0;
return v___x_883_;
}
else
{
lean_object* v_head_884_; lean_object* v_tail_885_; lean_object* v_arg_886_; size_t v___x_887_; size_t v___x_888_; uint8_t v___x_889_; 
v_head_884_ = lean_ctor_get(v_x_882_, 0);
v_tail_885_ = lean_ctor_get(v_x_882_, 1);
v_arg_886_ = lean_ctor_get(v_head_884_, 0);
v___x_887_ = lean_ptr_addr(v_val_881_);
v___x_888_ = lean_ptr_addr(v_arg_886_);
v___x_889_ = lean_usize_dec_eq(v___x_887_, v___x_888_);
if (v___x_889_ == 0)
{
v_x_882_ = v_tail_885_;
goto _start;
}
else
{
return v___x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Meta_Grind_mbtc_spec__3___boxed(lean_object* v_val_891_, lean_object* v_x_892_){
_start:
{
uint8_t v_res_893_; lean_object* v_r_894_; 
v_res_893_ = l_List_any___at___00Lean_Meta_Grind_mbtc_spec__3(v_val_891_, v_x_892_);
lean_dec(v_x_892_);
lean_dec_ref(v_val_891_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__6(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_905_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__3));
v___x_906_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__5));
v___x_907_ = l_Lean_Name_append(v___x_906_, v___x_905_);
return v___x_907_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__8(void){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_909_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__7));
v___x_910_ = l_Lean_stringToMessageData(v___x_909_);
return v___x_910_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__10(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__9));
v___x_913_ = l_Lean_stringToMessageData(v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6(lean_object* v_e_914_, lean_object* v_ctx_915_, lean_object* v___x_916_, lean_object* v_as_917_, size_t v_sz_918_, size_t v_i_919_, lean_object* v_b_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_a_933_; uint8_t v___x_937_; 
v___x_937_ = lean_usize_dec_lt(v_i_919_, v_sz_918_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; 
lean_dec_ref(v___x_916_);
lean_dec_ref(v_ctx_915_);
lean_dec_ref(v_e_914_);
v___x_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_938_, 0, v_b_920_);
return v___x_938_;
}
else
{
lean_object* v_snd_939_; lean_object* v_fst_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_1052_; 
v_snd_939_ = lean_ctor_get(v_b_920_, 1);
v_fst_940_ = lean_ctor_get(v_b_920_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_b_920_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_942_ = v_b_920_;
v_isShared_943_ = v_isSharedCheck_1052_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_snd_939_);
lean_inc(v_fst_940_);
lean_dec(v_b_920_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_1052_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v_fst_944_; lean_object* v_snd_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_1051_; 
v_fst_944_ = lean_ctor_get(v_snd_939_, 0);
v_snd_945_ = lean_ctor_get(v_snd_939_, 1);
v_isSharedCheck_1051_ = !lean_is_exclusive(v_snd_939_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_947_ = v_snd_939_;
v_isShared_948_ = v_isSharedCheck_1051_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_snd_945_);
lean_inc(v_fst_944_);
lean_dec(v_snd_939_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_1051_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v_map_950_; lean_object* v_candidates_951_; lean_object* v_a_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_a_960_ = lean_array_uget_borrowed(v_as_917_, v_i_919_);
v___x_961_ = lean_st_ref_get(v___y_921_);
v___x_962_ = l_Lean_Meta_Grind_Goal_getRoot_x3f(v___x_961_, v_a_960_);
lean_dec(v___x_961_);
if (lean_obj_tag(v___x_962_) == 1)
{
lean_object* v_val_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_1048_; 
v_val_963_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_965_ = v___x_962_;
v_isShared_966_ = v_isSharedCheck_1048_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_val_963_);
lean_dec(v___x_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_1048_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v_hasTheoryVar_1007_; lean_object* v___x_1008_; 
v_hasTheoryVar_1007_ = lean_ctor_get(v_ctx_915_, 1);
lean_inc_ref(v_hasTheoryVar_1007_);
lean_inc(v___y_930_);
lean_inc_ref(v___y_929_);
lean_inc(v___y_928_);
lean_inc_ref(v___y_927_);
lean_inc(v___y_926_);
lean_inc_ref(v___y_925_);
lean_inc(v___y_924_);
lean_inc_ref(v___y_923_);
lean_inc(v___y_922_);
lean_inc(v___y_921_);
lean_inc(v_val_963_);
v___x_1008_ = lean_apply_12(v_hasTheoryVar_1007_, v_val_963_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, lean_box(0));
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; uint8_t v___x_1010_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1009_);
lean_dec_ref_known(v___x_1008_, 1);
v___x_1010_ = lean_unbox(v_a_1009_);
lean_dec(v_a_1009_);
if (v___x_1010_ == 0)
{
lean_del_object(v___x_965_);
lean_dec(v_val_963_);
v_map_950_ = v_fst_940_;
v_candidates_951_ = v_fst_944_;
goto v___jp_949_;
}
else
{
lean_object* v_toCold_1011_; lean_object* v_options_1012_; uint8_t v_hasTrace_1013_; 
v_toCold_1011_ = lean_ctor_get(v___y_929_, 0);
v_options_1012_ = lean_ctor_get(v_toCold_1011_, 2);
v_hasTrace_1013_ = lean_ctor_get_uint8(v_options_1012_, sizeof(void*)*1);
if (v_hasTrace_1013_ == 0)
{
lean_del_object(v___x_965_);
v___y_968_ = v___y_921_;
v___y_969_ = v___y_922_;
v___y_970_ = v___y_923_;
v___y_971_ = v___y_924_;
v___y_972_ = v___y_925_;
v___y_973_ = v___y_926_;
v___y_974_ = v___y_927_;
v___y_975_ = v___y_928_;
v___y_976_ = v___y_929_;
v___y_977_ = v___y_930_;
goto v___jp_967_;
}
else
{
lean_object* v_inheritedTraceOptions_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; uint8_t v___x_1017_; 
v_inheritedTraceOptions_1014_ = lean_ctor_get(v_toCold_1011_, 11);
v___x_1015_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__3));
v___x_1016_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__6);
v___x_1017_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1014_, v_options_1012_, v___x_1016_);
if (v___x_1017_ == 0)
{
lean_del_object(v___x_965_);
v___y_968_ = v___y_921_;
v___y_969_ = v___y_922_;
v___y_970_ = v___y_923_;
v___y_971_ = v___y_924_;
v___y_972_ = v___y_925_;
v___y_973_ = v___y_926_;
v___y_974_ = v___y_927_;
v___y_975_ = v___y_928_;
v___y_976_ = v___y_929_;
v___y_977_ = v___y_930_;
goto v___jp_967_;
}
else
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1027_; 
lean_inc(v_val_963_);
v___x_1018_ = l_Lean_MessageData_ofExpr(v_val_963_);
v___x_1019_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__8);
v___x_1020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
lean_inc_ref(v___x_916_);
v___x_1021_ = l_Lean_MessageData_ofExpr(v___x_916_);
v___x_1022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1020_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__10);
v___x_1024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
lean_inc(v_snd_945_);
v___x_1025_ = l_Nat_reprFast(v_snd_945_);
if (v_isShared_966_ == 0)
{
lean_ctor_set_tag(v___x_965_, 3);
lean_ctor_set(v___x_965_, 0, v___x_1025_);
v___x_1027_ = v___x_965_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v___x_1025_);
v___x_1027_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1028_ = l_Lean_MessageData_ofFormat(v___x_1027_);
v___x_1029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1024_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg(v___x_1015_, v___x_1029_, v___y_927_, v___y_928_, v___y_929_, v___y_930_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_dec_ref_known(v___x_1030_, 1);
v___y_968_ = v___y_921_;
v___y_969_ = v___y_922_;
v___y_970_ = v___y_923_;
v___y_971_ = v___y_924_;
v___y_972_ = v___y_925_;
v___y_973_ = v___y_926_;
v___y_974_ = v___y_927_;
v___y_975_ = v___y_928_;
v___y_976_ = v___y_929_;
v___y_977_ = v___y_930_;
goto v___jp_967_;
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_dec(v_val_963_);
lean_del_object(v___x_947_);
lean_dec(v_snd_945_);
lean_dec(v_fst_944_);
lean_del_object(v___x_942_);
lean_dec(v_fst_940_);
lean_dec_ref(v___x_916_);
lean_dec_ref(v_ctx_915_);
lean_dec_ref(v_e_914_);
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_1030_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
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
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_del_object(v___x_965_);
lean_dec(v_val_963_);
lean_del_object(v___x_947_);
lean_dec(v_snd_945_);
lean_dec(v_fst_944_);
lean_del_object(v___x_942_);
lean_dec(v_fst_940_);
lean_dec_ref(v___x_916_);
lean_dec_ref(v_ctx_915_);
lean_dec_ref(v_e_914_);
v_a_1040_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_1008_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1008_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
v___jp_967_:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
lean_inc_ref_n(v_e_914_, 2);
lean_inc(v_val_963_);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v_val_963_);
lean_ctor_set(v___x_978_, 1, v_e_914_);
v___x_979_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey(v_e_914_, v_snd_945_, v___y_974_, v___y_975_, v___y_976_, v___y_977_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_981_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
lean_inc(v_a_980_);
lean_dec_ref_known(v___x_979_, 1);
v___x_981_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2___redArg(v_fst_940_, v_a_980_);
if (lean_obj_tag(v___x_981_) == 1)
{
lean_object* v_val_982_; uint8_t v___x_983_; 
v_val_982_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_val_982_);
lean_dec_ref_known(v___x_981_, 1);
v___x_983_ = l_List_any___at___00Lean_Meta_Grind_mbtc_spec__3(v_val_963_, v_val_982_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; 
lean_inc(v_snd_945_);
lean_inc_ref(v___x_978_);
lean_inc_ref(v_ctx_915_);
v___x_984_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4___redArg(v_ctx_915_, v_val_963_, v___x_978_, v_snd_945_, v_val_982_, v_fst_944_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_978_);
lean_ctor_set(v___x_986_, 1, v_val_982_);
v___x_987_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5___redArg(v_fst_940_, v_a_980_, v___x_986_);
v_map_950_ = v___x_987_;
v_candidates_951_ = v_a_985_;
goto v___jp_949_;
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec(v_val_982_);
lean_dec(v_a_980_);
lean_dec_ref_known(v___x_978_, 2);
lean_del_object(v___x_947_);
lean_dec(v_snd_945_);
lean_del_object(v___x_942_);
lean_dec(v_fst_940_);
lean_dec_ref(v___x_916_);
lean_dec_ref(v_ctx_915_);
lean_dec_ref(v_e_914_);
v_a_988_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_984_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_984_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
else
{
lean_dec(v_val_982_);
lean_dec(v_a_980_);
lean_dec_ref_known(v___x_978_, 2);
lean_dec(v_val_963_);
v_map_950_ = v_fst_940_;
v_candidates_951_ = v_fst_944_;
goto v___jp_949_;
}
}
else
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
lean_dec(v___x_981_);
lean_dec(v_val_963_);
v___x_996_ = lean_box(0);
v___x_997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_978_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5___redArg(v_fst_940_, v_a_980_, v___x_997_);
v_map_950_ = v___x_998_;
v_candidates_951_ = v_fst_944_;
goto v___jp_949_;
}
}
else
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_dec_ref_known(v___x_978_, 2);
lean_dec(v_val_963_);
lean_del_object(v___x_947_);
lean_dec(v_snd_945_);
lean_dec(v_fst_944_);
lean_del_object(v___x_942_);
lean_dec(v_fst_940_);
lean_dec_ref(v___x_916_);
lean_dec_ref(v_ctx_915_);
lean_dec_ref(v_e_914_);
v_a_999_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_979_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_979_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
}
else
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
lean_dec(v___x_962_);
lean_del_object(v___x_947_);
lean_del_object(v___x_942_);
v___x_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1049_, 0, v_fst_944_);
lean_ctor_set(v___x_1049_, 1, v_snd_945_);
v___x_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1050_, 0, v_fst_940_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v_a_933_ = v___x_1050_;
goto v___jp_932_;
}
v___jp_949_:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_955_; 
v___x_952_ = lean_unsigned_to_nat(1u);
v___x_953_ = lean_nat_add(v_snd_945_, v___x_952_);
lean_dec(v_snd_945_);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 1, v___x_953_);
lean_ctor_set(v___x_947_, 0, v_candidates_951_);
v___x_955_ = v___x_947_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_candidates_951_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v___x_953_);
v___x_955_ = v_reuseFailAlloc_959_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
lean_object* v___x_957_; 
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 1, v___x_955_);
lean_ctor_set(v___x_942_, 0, v_map_950_);
v___x_957_ = v___x_942_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_map_950_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v___x_955_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
v_a_933_ = v___x_957_;
goto v___jp_932_;
}
}
}
}
}
}
v___jp_932_:
{
size_t v___x_934_; size_t v___x_935_; 
v___x_934_ = ((size_t)1ULL);
v___x_935_ = lean_usize_add(v_i_919_, v___x_934_);
v_i_919_ = v___x_935_;
v_b_920_ = v_a_933_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___boxed(lean_object** _args){
lean_object* v_e_1053_ = _args[0];
lean_object* v_ctx_1054_ = _args[1];
lean_object* v___x_1055_ = _args[2];
lean_object* v_as_1056_ = _args[3];
lean_object* v_sz_1057_ = _args[4];
lean_object* v_i_1058_ = _args[5];
lean_object* v_b_1059_ = _args[6];
lean_object* v___y_1060_ = _args[7];
lean_object* v___y_1061_ = _args[8];
lean_object* v___y_1062_ = _args[9];
lean_object* v___y_1063_ = _args[10];
lean_object* v___y_1064_ = _args[11];
lean_object* v___y_1065_ = _args[12];
lean_object* v___y_1066_ = _args[13];
lean_object* v___y_1067_ = _args[14];
lean_object* v___y_1068_ = _args[15];
lean_object* v___y_1069_ = _args[16];
lean_object* v___y_1070_ = _args[17];
_start:
{
size_t v_sz_boxed_1071_; size_t v_i_boxed_1072_; lean_object* v_res_1073_; 
v_sz_boxed_1071_ = lean_unbox_usize(v_sz_1057_);
lean_dec(v_sz_1057_);
v_i_boxed_1072_ = lean_unbox_usize(v_i_1058_);
lean_dec(v_i_1058_);
v_res_1073_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6(v_e_1053_, v_ctx_1054_, v___x_1055_, v_as_1056_, v_sz_boxed_1071_, v_i_boxed_1072_, v_b_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v_as_1056_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15_spec__20(lean_object* v_ctx_1074_, uint8_t v_a_1075_, lean_object* v_as_1076_, size_t v_sz_1077_, size_t v_i_1078_, lean_object* v_b_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
uint8_t v___x_1091_; 
v___x_1091_ = lean_usize_dec_lt(v_i_1078_, v_sz_1077_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1092_; 
lean_dec_ref(v_ctx_1074_);
v___x_1092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1092_, 0, v_b_1079_);
return v___x_1092_;
}
else
{
lean_object* v_snd_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1195_; 
v_snd_1093_ = lean_ctor_get(v_b_1079_, 1);
v_isSharedCheck_1195_ = !lean_is_exclusive(v_b_1079_);
if (v_isSharedCheck_1195_ == 0)
{
lean_object* v_unused_1196_; 
v_unused_1196_ = lean_ctor_get(v_b_1079_, 0);
lean_dec(v_unused_1196_);
v___x_1095_ = v_b_1079_;
v_isShared_1096_ = v_isSharedCheck_1195_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_snd_1093_);
lean_dec(v_b_1079_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1195_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v_fst_1097_; lean_object* v_snd_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1194_; 
v_fst_1097_ = lean_ctor_get(v_snd_1093_, 0);
v_snd_1098_ = lean_ctor_get(v_snd_1093_, 1);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_snd_1093_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1100_ = v_snd_1093_;
v_isShared_1101_ = v_isSharedCheck_1194_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_snd_1098_);
lean_inc(v_fst_1097_);
lean_dec(v_snd_1093_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1194_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1102_; lean_object* v_a_1104_; lean_object* v_a_1117_; uint8_t v___y_1191_; uint8_t v___x_1192_; 
v___x_1102_ = lean_box(0);
v_a_1117_ = lean_array_uget_borrowed(v_as_1076_, v_i_1078_);
v___x_1192_ = l_Lean_Expr_isApp(v_a_1117_);
if (v___x_1192_ == 0)
{
v___y_1191_ = v_a_1075_;
goto v___jp_1190_;
}
else
{
uint8_t v___x_1193_; 
v___x_1193_ = l_Lean_Expr_isEq(v_a_1117_);
if (v___x_1193_ == 0)
{
goto v___jp_1118_;
}
else
{
v___y_1191_ = v_a_1075_;
goto v___jp_1190_;
}
}
v___jp_1103_:
{
lean_object* v___x_1106_; 
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 1, v_a_1104_);
lean_ctor_set(v___x_1100_, 0, v___x_1102_);
v___x_1106_ = v___x_1100_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1102_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_a_1104_);
v___x_1106_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
size_t v___x_1107_; size_t v___x_1108_; 
v___x_1107_ = ((size_t)1ULL);
v___x_1108_ = lean_usize_add(v_i_1078_, v___x_1107_);
v_i_1078_ = v___x_1108_;
v_b_1079_ = v___x_1106_;
goto _start;
}
}
v___jp_1111_:
{
lean_object* v___x_1113_; 
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 1, v_snd_1098_);
lean_ctor_set(v___x_1095_, 0, v_fst_1097_);
v___x_1113_ = v___x_1095_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_fst_1097_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_snd_1098_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
v_a_1104_ = v___x_1113_;
goto v___jp_1103_;
}
}
v___jp_1115_:
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v_fst_1097_);
lean_ctor_set(v___x_1116_, 1, v_snd_1098_);
v_a_1104_ = v___x_1116_;
goto v___jp_1103_;
}
v___jp_1118_:
{
uint8_t v___x_1119_; 
v___x_1119_ = l_Lean_Expr_isHEq(v_a_1117_);
if (v___x_1119_ == 0)
{
lean_object* v___x_1120_; 
lean_inc(v_a_1117_);
v___x_1120_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_a_1117_, v___y_1080_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; uint8_t v___x_1122_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1120_, 1);
v___x_1122_ = lean_unbox(v_a_1121_);
lean_dec(v_a_1121_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; 
lean_del_object(v___x_1095_);
v___x_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1123_, 0, v_fst_1097_);
lean_ctor_set(v___x_1123_, 1, v_snd_1098_);
v_a_1104_ = v___x_1123_;
goto v___jp_1103_;
}
else
{
lean_object* v_isInterpreted_1124_; lean_object* v___x_1125_; 
v_isInterpreted_1124_ = lean_ctor_get(v_ctx_1074_, 0);
lean_inc_ref(v_isInterpreted_1124_);
lean_inc(v___y_1089_);
lean_inc_ref(v___y_1088_);
lean_inc(v___y_1087_);
lean_inc_ref(v___y_1086_);
lean_inc(v___y_1085_);
lean_inc_ref(v___y_1084_);
lean_inc(v___y_1083_);
lean_inc_ref(v___y_1082_);
lean_inc(v___y_1081_);
lean_inc(v___y_1080_);
lean_inc(v_a_1117_);
v___x_1125_ = lean_apply_12(v_isInterpreted_1124_, v_a_1117_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_, lean_box(0));
if (lean_obj_tag(v___x_1125_) == 0)
{
lean_object* v_a_1126_; uint8_t v___x_1127_; 
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc(v_a_1126_);
lean_dec_ref_known(v___x_1125_, 1);
v___x_1127_ = lean_unbox(v_a_1126_);
lean_dec(v_a_1126_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = l_Lean_Expr_getAppFn(v_a_1117_);
lean_inc_ref(v___x_1128_);
v___x_1129_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance(v___x_1128_, v___y_1088_, v___y_1089_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; uint8_t v___x_1131_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_a_1130_);
lean_dec_ref_known(v___x_1129_, 1);
v___x_1131_ = lean_unbox(v_a_1130_);
lean_dec(v_a_1130_);
if (v___x_1131_ == 0)
{
uint8_t v___x_1132_; 
v___x_1132_ = l_Lean_Meta_Grind_isCastLikeFn(v___x_1128_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v_dummy_1134_; lean_object* v_nargs_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; size_t v_sz_1142_; size_t v___x_1143_; lean_object* v___x_1144_; 
lean_del_object(v___x_1095_);
v___x_1133_ = lean_unsigned_to_nat(0u);
v_dummy_1134_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1, &l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1);
v_nargs_1135_ = l_Lean_Expr_getAppNumArgs(v_a_1117_);
lean_inc(v_nargs_1135_);
v___x_1136_ = lean_mk_array(v_nargs_1135_, v_dummy_1134_);
v___x_1137_ = lean_unsigned_to_nat(1u);
v___x_1138_ = lean_nat_sub(v_nargs_1135_, v___x_1137_);
lean_dec(v_nargs_1135_);
lean_inc_n(v_a_1117_, 2);
v___x_1139_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1117_, v___x_1136_, v___x_1138_);
v___x_1140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1140_, 0, v_snd_1098_);
lean_ctor_set(v___x_1140_, 1, v___x_1133_);
v___x_1141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1141_, 0, v_fst_1097_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v_sz_1142_ = lean_array_size(v___x_1139_);
v___x_1143_ = ((size_t)0ULL);
lean_inc_ref(v_ctx_1074_);
v___x_1144_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6(v_a_1117_, v_ctx_1074_, v___x_1128_, v___x_1139_, v_sz_1142_, v___x_1143_, v___x_1141_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_, v___y_1089_);
lean_dec_ref(v___x_1139_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v_snd_1146_; lean_object* v_fst_1147_; lean_object* v_fst_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v_snd_1146_ = lean_ctor_get(v_a_1145_, 1);
lean_inc(v_snd_1146_);
v_fst_1147_ = lean_ctor_get(v_a_1145_, 0);
lean_inc(v_fst_1147_);
lean_dec(v_a_1145_);
v_fst_1148_ = lean_ctor_get(v_snd_1146_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v_snd_1146_);
if (v_isSharedCheck_1155_ == 0)
{
lean_object* v_unused_1156_; 
v_unused_1156_ = lean_ctor_get(v_snd_1146_, 1);
lean_dec(v_unused_1156_);
v___x_1150_ = v_snd_1146_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_fst_1148_);
lean_dec(v_snd_1146_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 1, v_fst_1148_);
lean_ctor_set(v___x_1150_, 0, v_fst_1147_);
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_fst_1147_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_fst_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
v_a_1104_ = v___x_1153_;
goto v___jp_1103_;
}
}
}
else
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
lean_del_object(v___x_1100_);
lean_dec_ref(v_ctx_1074_);
v_a_1157_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1144_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1144_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
else
{
lean_dec_ref(v___x_1128_);
goto v___jp_1111_;
}
}
else
{
lean_dec_ref(v___x_1128_);
goto v___jp_1111_;
}
}
else
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
lean_dec_ref(v___x_1128_);
lean_del_object(v___x_1100_);
lean_dec(v_snd_1098_);
lean_dec(v_fst_1097_);
lean_del_object(v___x_1095_);
lean_dec_ref(v_ctx_1074_);
v_a_1165_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v___x_1129_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1129_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
else
{
lean_object* v___x_1173_; 
lean_del_object(v___x_1095_);
v___x_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1173_, 0, v_fst_1097_);
lean_ctor_set(v___x_1173_, 1, v_snd_1098_);
v_a_1104_ = v___x_1173_;
goto v___jp_1103_;
}
}
else
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
lean_del_object(v___x_1100_);
lean_dec(v_snd_1098_);
lean_dec(v_fst_1097_);
lean_del_object(v___x_1095_);
lean_dec_ref(v_ctx_1074_);
v_a_1174_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1125_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1125_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
lean_del_object(v___x_1100_);
lean_dec(v_snd_1098_);
lean_dec(v_fst_1097_);
lean_del_object(v___x_1095_);
lean_dec_ref(v_ctx_1074_);
v_a_1182_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1120_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1120_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
else
{
lean_del_object(v___x_1095_);
goto v___jp_1115_;
}
}
v___jp_1190_:
{
if (v___y_1191_ == 0)
{
lean_del_object(v___x_1095_);
goto v___jp_1115_;
}
else
{
goto v___jp_1118_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15_spec__20___boxed(lean_object** _args){
lean_object* v_ctx_1197_ = _args[0];
lean_object* v_a_1198_ = _args[1];
lean_object* v_as_1199_ = _args[2];
lean_object* v_sz_1200_ = _args[3];
lean_object* v_i_1201_ = _args[4];
lean_object* v_b_1202_ = _args[5];
lean_object* v___y_1203_ = _args[6];
lean_object* v___y_1204_ = _args[7];
lean_object* v___y_1205_ = _args[8];
lean_object* v___y_1206_ = _args[9];
lean_object* v___y_1207_ = _args[10];
lean_object* v___y_1208_ = _args[11];
lean_object* v___y_1209_ = _args[12];
lean_object* v___y_1210_ = _args[13];
lean_object* v___y_1211_ = _args[14];
lean_object* v___y_1212_ = _args[15];
lean_object* v___y_1213_ = _args[16];
_start:
{
uint8_t v_a_162262__boxed_1214_; size_t v_sz_boxed_1215_; size_t v_i_boxed_1216_; lean_object* v_res_1217_; 
v_a_162262__boxed_1214_ = lean_unbox(v_a_1198_);
v_sz_boxed_1215_ = lean_unbox_usize(v_sz_1200_);
lean_dec(v_sz_1200_);
v_i_boxed_1216_ = lean_unbox_usize(v_i_1201_);
lean_dec(v_i_1201_);
v_res_1217_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15_spec__20(v_ctx_1197_, v_a_162262__boxed_1214_, v_as_1199_, v_sz_boxed_1215_, v_i_boxed_1216_, v_b_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
lean_dec(v___y_1204_);
lean_dec(v___y_1203_);
lean_dec_ref(v_as_1199_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15(lean_object* v_ctx_1218_, uint8_t v_a_1219_, lean_object* v_as_1220_, size_t v_sz_1221_, size_t v_i_1222_, lean_object* v_b_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
uint8_t v___x_1235_; 
v___x_1235_ = lean_usize_dec_lt(v_i_1222_, v_sz_1221_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; 
lean_dec_ref(v_ctx_1218_);
v___x_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1236_, 0, v_b_1223_);
return v___x_1236_;
}
else
{
lean_object* v_snd_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1339_; 
v_snd_1237_ = lean_ctor_get(v_b_1223_, 1);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_b_1223_);
if (v_isSharedCheck_1339_ == 0)
{
lean_object* v_unused_1340_; 
v_unused_1340_ = lean_ctor_get(v_b_1223_, 0);
lean_dec(v_unused_1340_);
v___x_1239_ = v_b_1223_;
v_isShared_1240_ = v_isSharedCheck_1339_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_snd_1237_);
lean_dec(v_b_1223_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1339_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v_fst_1241_; lean_object* v_snd_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1338_; 
v_fst_1241_ = lean_ctor_get(v_snd_1237_, 0);
v_snd_1242_ = lean_ctor_get(v_snd_1237_, 1);
v_isSharedCheck_1338_ = !lean_is_exclusive(v_snd_1237_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1244_ = v_snd_1237_;
v_isShared_1245_ = v_isSharedCheck_1338_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_snd_1242_);
lean_inc(v_fst_1241_);
lean_dec(v_snd_1237_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1338_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1246_; lean_object* v_a_1248_; lean_object* v_a_1261_; uint8_t v___y_1335_; uint8_t v___x_1336_; 
v___x_1246_ = lean_box(0);
v_a_1261_ = lean_array_uget_borrowed(v_as_1220_, v_i_1222_);
v___x_1336_ = l_Lean_Expr_isApp(v_a_1261_);
if (v___x_1336_ == 0)
{
v___y_1335_ = v_a_1219_;
goto v___jp_1334_;
}
else
{
uint8_t v___x_1337_; 
v___x_1337_ = l_Lean_Expr_isEq(v_a_1261_);
if (v___x_1337_ == 0)
{
goto v___jp_1262_;
}
else
{
v___y_1335_ = v_a_1219_;
goto v___jp_1334_;
}
}
v___jp_1247_:
{
lean_object* v___x_1250_; 
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 1, v_a_1248_);
lean_ctor_set(v___x_1244_, 0, v___x_1246_);
v___x_1250_ = v___x_1244_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1246_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_a_1248_);
v___x_1250_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
size_t v___x_1251_; size_t v___x_1252_; lean_object* v___x_1253_; 
v___x_1251_ = ((size_t)1ULL);
v___x_1252_ = lean_usize_add(v_i_1222_, v___x_1251_);
v___x_1253_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15_spec__20(v_ctx_1218_, v_a_1219_, v_as_1220_, v_sz_1221_, v___x_1252_, v___x_1250_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
return v___x_1253_;
}
}
v___jp_1255_:
{
lean_object* v___x_1257_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 1, v_snd_1242_);
lean_ctor_set(v___x_1239_, 0, v_fst_1241_);
v___x_1257_ = v___x_1239_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_fst_1241_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_snd_1242_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
v_a_1248_ = v___x_1257_;
goto v___jp_1247_;
}
}
v___jp_1259_:
{
lean_object* v___x_1260_; 
v___x_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1260_, 0, v_fst_1241_);
lean_ctor_set(v___x_1260_, 1, v_snd_1242_);
v_a_1248_ = v___x_1260_;
goto v___jp_1247_;
}
v___jp_1262_:
{
uint8_t v___x_1263_; 
v___x_1263_ = l_Lean_Expr_isHEq(v_a_1261_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; 
lean_inc(v_a_1261_);
v___x_1264_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_a_1261_, v___y_1224_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; uint8_t v___x_1266_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_a_1265_);
lean_dec_ref_known(v___x_1264_, 1);
v___x_1266_ = lean_unbox(v_a_1265_);
lean_dec(v_a_1265_);
if (v___x_1266_ == 0)
{
lean_object* v___x_1267_; 
lean_del_object(v___x_1239_);
v___x_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1267_, 0, v_fst_1241_);
lean_ctor_set(v___x_1267_, 1, v_snd_1242_);
v_a_1248_ = v___x_1267_;
goto v___jp_1247_;
}
else
{
lean_object* v_isInterpreted_1268_; lean_object* v___x_1269_; 
v_isInterpreted_1268_ = lean_ctor_get(v_ctx_1218_, 0);
lean_inc_ref(v_isInterpreted_1268_);
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
lean_inc(v___y_1231_);
lean_inc_ref(v___y_1230_);
lean_inc(v___y_1229_);
lean_inc_ref(v___y_1228_);
lean_inc(v___y_1227_);
lean_inc_ref(v___y_1226_);
lean_inc(v___y_1225_);
lean_inc(v___y_1224_);
lean_inc(v_a_1261_);
v___x_1269_ = lean_apply_12(v_isInterpreted_1268_, v_a_1261_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, lean_box(0));
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; uint8_t v___x_1271_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___x_1269_, 1);
v___x_1271_ = lean_unbox(v_a_1270_);
lean_dec(v_a_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = l_Lean_Expr_getAppFn(v_a_1261_);
lean_inc_ref(v___x_1272_);
v___x_1273_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance(v___x_1272_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; uint8_t v___x_1275_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1273_, 1);
v___x_1275_ = lean_unbox(v_a_1274_);
lean_dec(v_a_1274_);
if (v___x_1275_ == 0)
{
uint8_t v___x_1276_; 
v___x_1276_ = l_Lean_Meta_Grind_isCastLikeFn(v___x_1272_);
if (v___x_1276_ == 0)
{
lean_object* v___x_1277_; lean_object* v_dummy_1278_; lean_object* v_nargs_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; size_t v_sz_1286_; size_t v___x_1287_; lean_object* v___x_1288_; 
lean_del_object(v___x_1239_);
v___x_1277_ = lean_unsigned_to_nat(0u);
v_dummy_1278_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1, &l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1);
v_nargs_1279_ = l_Lean_Expr_getAppNumArgs(v_a_1261_);
lean_inc(v_nargs_1279_);
v___x_1280_ = lean_mk_array(v_nargs_1279_, v_dummy_1278_);
v___x_1281_ = lean_unsigned_to_nat(1u);
v___x_1282_ = lean_nat_sub(v_nargs_1279_, v___x_1281_);
lean_dec(v_nargs_1279_);
lean_inc_n(v_a_1261_, 2);
v___x_1283_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1261_, v___x_1280_, v___x_1282_);
v___x_1284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1284_, 0, v_snd_1242_);
lean_ctor_set(v___x_1284_, 1, v___x_1277_);
v___x_1285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1285_, 0, v_fst_1241_);
lean_ctor_set(v___x_1285_, 1, v___x_1284_);
v_sz_1286_ = lean_array_size(v___x_1283_);
v___x_1287_ = ((size_t)0ULL);
lean_inc_ref(v_ctx_1218_);
v___x_1288_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6(v_a_1261_, v_ctx_1218_, v___x_1272_, v___x_1283_, v_sz_1286_, v___x_1287_, v___x_1285_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec_ref(v___x_1283_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v_a_1289_; lean_object* v_snd_1290_; lean_object* v_fst_1291_; lean_object* v_fst_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1299_; 
v_a_1289_ = lean_ctor_get(v___x_1288_, 0);
lean_inc(v_a_1289_);
lean_dec_ref_known(v___x_1288_, 1);
v_snd_1290_ = lean_ctor_get(v_a_1289_, 1);
lean_inc(v_snd_1290_);
v_fst_1291_ = lean_ctor_get(v_a_1289_, 0);
lean_inc(v_fst_1291_);
lean_dec(v_a_1289_);
v_fst_1292_ = lean_ctor_get(v_snd_1290_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_snd_1290_);
if (v_isSharedCheck_1299_ == 0)
{
lean_object* v_unused_1300_; 
v_unused_1300_ = lean_ctor_get(v_snd_1290_, 1);
lean_dec(v_unused_1300_);
v___x_1294_ = v_snd_1290_;
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_fst_1292_);
lean_dec(v_snd_1290_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 1, v_fst_1292_);
lean_ctor_set(v___x_1294_, 0, v_fst_1291_);
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_fst_1291_);
lean_ctor_set(v_reuseFailAlloc_1298_, 1, v_fst_1292_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
v_a_1248_ = v___x_1297_;
goto v___jp_1247_;
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_del_object(v___x_1244_);
lean_dec_ref(v_ctx_1218_);
v_a_1301_ = lean_ctor_get(v___x_1288_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1288_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1288_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1288_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
else
{
lean_dec_ref(v___x_1272_);
goto v___jp_1255_;
}
}
else
{
lean_dec_ref(v___x_1272_);
goto v___jp_1255_;
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_dec_ref(v___x_1272_);
lean_del_object(v___x_1244_);
lean_dec(v_snd_1242_);
lean_dec(v_fst_1241_);
lean_del_object(v___x_1239_);
lean_dec_ref(v_ctx_1218_);
v_a_1309_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1273_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1273_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
else
{
lean_object* v___x_1317_; 
lean_del_object(v___x_1239_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v_fst_1241_);
lean_ctor_set(v___x_1317_, 1, v_snd_1242_);
v_a_1248_ = v___x_1317_;
goto v___jp_1247_;
}
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_del_object(v___x_1244_);
lean_dec(v_snd_1242_);
lean_dec(v_fst_1241_);
lean_del_object(v___x_1239_);
lean_dec_ref(v_ctx_1218_);
v_a_1318_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1269_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1269_);
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
lean_del_object(v___x_1244_);
lean_dec(v_snd_1242_);
lean_dec(v_fst_1241_);
lean_del_object(v___x_1239_);
lean_dec_ref(v_ctx_1218_);
v_a_1326_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1264_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1264_);
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
lean_del_object(v___x_1239_);
goto v___jp_1259_;
}
}
v___jp_1334_:
{
if (v___y_1335_ == 0)
{
lean_del_object(v___x_1239_);
goto v___jp_1259_;
}
else
{
goto v___jp_1262_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15___boxed(lean_object** _args){
lean_object* v_ctx_1341_ = _args[0];
lean_object* v_a_1342_ = _args[1];
lean_object* v_as_1343_ = _args[2];
lean_object* v_sz_1344_ = _args[3];
lean_object* v_i_1345_ = _args[4];
lean_object* v_b_1346_ = _args[5];
lean_object* v___y_1347_ = _args[6];
lean_object* v___y_1348_ = _args[7];
lean_object* v___y_1349_ = _args[8];
lean_object* v___y_1350_ = _args[9];
lean_object* v___y_1351_ = _args[10];
lean_object* v___y_1352_ = _args[11];
lean_object* v___y_1353_ = _args[12];
lean_object* v___y_1354_ = _args[13];
lean_object* v___y_1355_ = _args[14];
lean_object* v___y_1356_ = _args[15];
lean_object* v___y_1357_ = _args[16];
_start:
{
uint8_t v_a_162493__boxed_1358_; size_t v_sz_boxed_1359_; size_t v_i_boxed_1360_; lean_object* v_res_1361_; 
v_a_162493__boxed_1358_ = lean_unbox(v_a_1342_);
v_sz_boxed_1359_ = lean_unbox_usize(v_sz_1344_);
lean_dec(v_sz_1344_);
v_i_boxed_1360_ = lean_unbox_usize(v_i_1345_);
lean_dec(v_i_1345_);
v_res_1361_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15(v_ctx_1341_, v_a_162493__boxed_1358_, v_as_1343_, v_sz_boxed_1359_, v_i_boxed_1360_, v_b_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec(v___y_1347_);
lean_dec_ref(v_as_1343_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18_spec__26(lean_object* v_ctx_1362_, uint8_t v_a_1363_, lean_object* v_as_1364_, size_t v_sz_1365_, size_t v_i_1366_, lean_object* v_b_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
uint8_t v___x_1379_; 
v___x_1379_ = lean_usize_dec_lt(v_i_1366_, v_sz_1365_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; 
lean_dec_ref(v_ctx_1362_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v_b_1367_);
return v___x_1380_;
}
else
{
lean_object* v_snd_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1483_; 
v_snd_1381_ = lean_ctor_get(v_b_1367_, 1);
v_isSharedCheck_1483_ = !lean_is_exclusive(v_b_1367_);
if (v_isSharedCheck_1483_ == 0)
{
lean_object* v_unused_1484_; 
v_unused_1484_ = lean_ctor_get(v_b_1367_, 0);
lean_dec(v_unused_1484_);
v___x_1383_ = v_b_1367_;
v_isShared_1384_ = v_isSharedCheck_1483_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_snd_1381_);
lean_dec(v_b_1367_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1483_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v_fst_1385_; lean_object* v_snd_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1482_; 
v_fst_1385_ = lean_ctor_get(v_snd_1381_, 0);
v_snd_1386_ = lean_ctor_get(v_snd_1381_, 1);
v_isSharedCheck_1482_ = !lean_is_exclusive(v_snd_1381_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1388_ = v_snd_1381_;
v_isShared_1389_ = v_isSharedCheck_1482_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_snd_1386_);
lean_inc(v_fst_1385_);
lean_dec(v_snd_1381_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1482_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; lean_object* v_a_1392_; lean_object* v_a_1405_; uint8_t v___y_1479_; uint8_t v___x_1480_; 
v___x_1390_ = lean_box(0);
v_a_1405_ = lean_array_uget_borrowed(v_as_1364_, v_i_1366_);
v___x_1480_ = l_Lean_Expr_isApp(v_a_1405_);
if (v___x_1480_ == 0)
{
v___y_1479_ = v_a_1363_;
goto v___jp_1478_;
}
else
{
uint8_t v___x_1481_; 
v___x_1481_ = l_Lean_Expr_isEq(v_a_1405_);
if (v___x_1481_ == 0)
{
goto v___jp_1406_;
}
else
{
v___y_1479_ = v_a_1363_;
goto v___jp_1478_;
}
}
v___jp_1391_:
{
lean_object* v___x_1394_; 
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 1, v_a_1392_);
lean_ctor_set(v___x_1388_, 0, v___x_1390_);
v___x_1394_ = v___x_1388_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v___x_1390_);
lean_ctor_set(v_reuseFailAlloc_1398_, 1, v_a_1392_);
v___x_1394_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
size_t v___x_1395_; size_t v___x_1396_; 
v___x_1395_ = ((size_t)1ULL);
v___x_1396_ = lean_usize_add(v_i_1366_, v___x_1395_);
v_i_1366_ = v___x_1396_;
v_b_1367_ = v___x_1394_;
goto _start;
}
}
v___jp_1399_:
{
lean_object* v___x_1401_; 
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 1, v_snd_1386_);
lean_ctor_set(v___x_1383_, 0, v_fst_1385_);
v___x_1401_ = v___x_1383_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_fst_1385_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v_snd_1386_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
v_a_1392_ = v___x_1401_;
goto v___jp_1391_;
}
}
v___jp_1403_:
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1404_, 0, v_fst_1385_);
lean_ctor_set(v___x_1404_, 1, v_snd_1386_);
v_a_1392_ = v___x_1404_;
goto v___jp_1391_;
}
v___jp_1406_:
{
uint8_t v___x_1407_; 
v___x_1407_ = l_Lean_Expr_isHEq(v_a_1405_);
if (v___x_1407_ == 0)
{
lean_object* v___x_1408_; 
lean_inc(v_a_1405_);
v___x_1408_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_a_1405_, v___y_1368_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v_a_1409_; uint8_t v___x_1410_; 
v_a_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc(v_a_1409_);
lean_dec_ref_known(v___x_1408_, 1);
v___x_1410_ = lean_unbox(v_a_1409_);
lean_dec(v_a_1409_);
if (v___x_1410_ == 0)
{
lean_object* v___x_1411_; 
lean_del_object(v___x_1383_);
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v_fst_1385_);
lean_ctor_set(v___x_1411_, 1, v_snd_1386_);
v_a_1392_ = v___x_1411_;
goto v___jp_1391_;
}
else
{
lean_object* v_isInterpreted_1412_; lean_object* v___x_1413_; 
v_isInterpreted_1412_ = lean_ctor_get(v_ctx_1362_, 0);
lean_inc_ref(v_isInterpreted_1412_);
lean_inc(v___y_1377_);
lean_inc_ref(v___y_1376_);
lean_inc(v___y_1375_);
lean_inc_ref(v___y_1374_);
lean_inc(v___y_1373_);
lean_inc_ref(v___y_1372_);
lean_inc(v___y_1371_);
lean_inc_ref(v___y_1370_);
lean_inc(v___y_1369_);
lean_inc(v___y_1368_);
lean_inc(v_a_1405_);
v___x_1413_ = lean_apply_12(v_isInterpreted_1412_, v_a_1405_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, lean_box(0));
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; uint8_t v___x_1415_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1414_);
lean_dec_ref_known(v___x_1413_, 1);
v___x_1415_ = lean_unbox(v_a_1414_);
lean_dec(v_a_1414_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = l_Lean_Expr_getAppFn(v_a_1405_);
lean_inc_ref(v___x_1416_);
v___x_1417_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance(v___x_1416_, v___y_1376_, v___y_1377_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; uint8_t v___x_1419_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1417_, 1);
v___x_1419_ = lean_unbox(v_a_1418_);
lean_dec(v_a_1418_);
if (v___x_1419_ == 0)
{
uint8_t v___x_1420_; 
v___x_1420_ = l_Lean_Meta_Grind_isCastLikeFn(v___x_1416_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1421_; lean_object* v_dummy_1422_; lean_object* v_nargs_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; size_t v_sz_1430_; size_t v___x_1431_; lean_object* v___x_1432_; 
lean_del_object(v___x_1383_);
v___x_1421_ = lean_unsigned_to_nat(0u);
v_dummy_1422_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1, &l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1);
v_nargs_1423_ = l_Lean_Expr_getAppNumArgs(v_a_1405_);
lean_inc(v_nargs_1423_);
v___x_1424_ = lean_mk_array(v_nargs_1423_, v_dummy_1422_);
v___x_1425_ = lean_unsigned_to_nat(1u);
v___x_1426_ = lean_nat_sub(v_nargs_1423_, v___x_1425_);
lean_dec(v_nargs_1423_);
lean_inc_n(v_a_1405_, 2);
v___x_1427_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1405_, v___x_1424_, v___x_1426_);
v___x_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1428_, 0, v_snd_1386_);
lean_ctor_set(v___x_1428_, 1, v___x_1421_);
v___x_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1429_, 0, v_fst_1385_);
lean_ctor_set(v___x_1429_, 1, v___x_1428_);
v_sz_1430_ = lean_array_size(v___x_1427_);
v___x_1431_ = ((size_t)0ULL);
lean_inc_ref(v_ctx_1362_);
v___x_1432_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6(v_a_1405_, v_ctx_1362_, v___x_1416_, v___x_1427_, v_sz_1430_, v___x_1431_, v___x_1429_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec_ref(v___x_1427_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v_snd_1434_; lean_object* v_fst_1435_; lean_object* v_fst_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
lean_inc(v_a_1433_);
lean_dec_ref_known(v___x_1432_, 1);
v_snd_1434_ = lean_ctor_get(v_a_1433_, 1);
lean_inc(v_snd_1434_);
v_fst_1435_ = lean_ctor_get(v_a_1433_, 0);
lean_inc(v_fst_1435_);
lean_dec(v_a_1433_);
v_fst_1436_ = lean_ctor_get(v_snd_1434_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_snd_1434_);
if (v_isSharedCheck_1443_ == 0)
{
lean_object* v_unused_1444_; 
v_unused_1444_ = lean_ctor_get(v_snd_1434_, 1);
lean_dec(v_unused_1444_);
v___x_1438_ = v_snd_1434_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_fst_1436_);
lean_dec(v_snd_1434_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 1, v_fst_1436_);
lean_ctor_set(v___x_1438_, 0, v_fst_1435_);
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_fst_1435_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v_fst_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
v_a_1392_ = v___x_1441_;
goto v___jp_1391_;
}
}
}
else
{
lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1452_; 
lean_del_object(v___x_1388_);
lean_dec_ref(v_ctx_1362_);
v_a_1445_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1447_ = v___x_1432_;
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v___x_1432_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1450_; 
if (v_isShared_1448_ == 0)
{
v___x_1450_ = v___x_1447_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_a_1445_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
else
{
lean_dec_ref(v___x_1416_);
goto v___jp_1399_;
}
}
else
{
lean_dec_ref(v___x_1416_);
goto v___jp_1399_;
}
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
lean_dec_ref(v___x_1416_);
lean_del_object(v___x_1388_);
lean_dec(v_snd_1386_);
lean_dec(v_fst_1385_);
lean_del_object(v___x_1383_);
lean_dec_ref(v_ctx_1362_);
v_a_1453_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1417_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1417_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
else
{
lean_object* v___x_1461_; 
lean_del_object(v___x_1383_);
v___x_1461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1461_, 0, v_fst_1385_);
lean_ctor_set(v___x_1461_, 1, v_snd_1386_);
v_a_1392_ = v___x_1461_;
goto v___jp_1391_;
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_del_object(v___x_1388_);
lean_dec(v_snd_1386_);
lean_dec(v_fst_1385_);
lean_del_object(v___x_1383_);
lean_dec_ref(v_ctx_1362_);
v_a_1462_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1413_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1413_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_del_object(v___x_1388_);
lean_dec(v_snd_1386_);
lean_dec(v_fst_1385_);
lean_del_object(v___x_1383_);
lean_dec_ref(v_ctx_1362_);
v_a_1470_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1408_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1408_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
else
{
lean_del_object(v___x_1383_);
goto v___jp_1403_;
}
}
v___jp_1478_:
{
if (v___y_1479_ == 0)
{
lean_del_object(v___x_1383_);
goto v___jp_1403_;
}
else
{
goto v___jp_1406_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18_spec__26___boxed(lean_object** _args){
lean_object* v_ctx_1485_ = _args[0];
lean_object* v_a_1486_ = _args[1];
lean_object* v_as_1487_ = _args[2];
lean_object* v_sz_1488_ = _args[3];
lean_object* v_i_1489_ = _args[4];
lean_object* v_b_1490_ = _args[5];
lean_object* v___y_1491_ = _args[6];
lean_object* v___y_1492_ = _args[7];
lean_object* v___y_1493_ = _args[8];
lean_object* v___y_1494_ = _args[9];
lean_object* v___y_1495_ = _args[10];
lean_object* v___y_1496_ = _args[11];
lean_object* v___y_1497_ = _args[12];
lean_object* v___y_1498_ = _args[13];
lean_object* v___y_1499_ = _args[14];
lean_object* v___y_1500_ = _args[15];
lean_object* v___y_1501_ = _args[16];
_start:
{
uint8_t v_a_162724__boxed_1502_; size_t v_sz_boxed_1503_; size_t v_i_boxed_1504_; lean_object* v_res_1505_; 
v_a_162724__boxed_1502_ = lean_unbox(v_a_1486_);
v_sz_boxed_1503_ = lean_unbox_usize(v_sz_1488_);
lean_dec(v_sz_1488_);
v_i_boxed_1504_ = lean_unbox_usize(v_i_1489_);
lean_dec(v_i_1489_);
v_res_1505_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18_spec__26(v_ctx_1485_, v_a_162724__boxed_1502_, v_as_1487_, v_sz_boxed_1503_, v_i_boxed_1504_, v_b_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec(v___y_1491_);
lean_dec_ref(v_as_1487_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18(lean_object* v_ctx_1506_, uint8_t v_a_1507_, lean_object* v_as_1508_, size_t v_sz_1509_, size_t v_i_1510_, lean_object* v_b_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
uint8_t v___x_1523_; 
v___x_1523_ = lean_usize_dec_lt(v_i_1510_, v_sz_1509_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; 
lean_dec_ref(v_ctx_1506_);
v___x_1524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1524_, 0, v_b_1511_);
return v___x_1524_;
}
else
{
lean_object* v_snd_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1627_; 
v_snd_1525_ = lean_ctor_get(v_b_1511_, 1);
v_isSharedCheck_1627_ = !lean_is_exclusive(v_b_1511_);
if (v_isSharedCheck_1627_ == 0)
{
lean_object* v_unused_1628_; 
v_unused_1628_ = lean_ctor_get(v_b_1511_, 0);
lean_dec(v_unused_1628_);
v___x_1527_ = v_b_1511_;
v_isShared_1528_ = v_isSharedCheck_1627_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_snd_1525_);
lean_dec(v_b_1511_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1627_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v_fst_1529_; lean_object* v_snd_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1626_; 
v_fst_1529_ = lean_ctor_get(v_snd_1525_, 0);
v_snd_1530_ = lean_ctor_get(v_snd_1525_, 1);
v_isSharedCheck_1626_ = !lean_is_exclusive(v_snd_1525_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1532_ = v_snd_1525_;
v_isShared_1533_ = v_isSharedCheck_1626_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_snd_1530_);
lean_inc(v_fst_1529_);
lean_dec(v_snd_1525_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1626_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1534_; lean_object* v_a_1536_; lean_object* v_a_1549_; uint8_t v___y_1623_; uint8_t v___x_1624_; 
v___x_1534_ = lean_box(0);
v_a_1549_ = lean_array_uget_borrowed(v_as_1508_, v_i_1510_);
v___x_1624_ = l_Lean_Expr_isApp(v_a_1549_);
if (v___x_1624_ == 0)
{
v___y_1623_ = v_a_1507_;
goto v___jp_1622_;
}
else
{
uint8_t v___x_1625_; 
v___x_1625_ = l_Lean_Expr_isEq(v_a_1549_);
if (v___x_1625_ == 0)
{
goto v___jp_1550_;
}
else
{
v___y_1623_ = v_a_1507_;
goto v___jp_1622_;
}
}
v___jp_1535_:
{
lean_object* v___x_1538_; 
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 1, v_a_1536_);
lean_ctor_set(v___x_1532_, 0, v___x_1534_);
v___x_1538_ = v___x_1532_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1534_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v_a_1536_);
v___x_1538_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
size_t v___x_1539_; size_t v___x_1540_; lean_object* v___x_1541_; 
v___x_1539_ = ((size_t)1ULL);
v___x_1540_ = lean_usize_add(v_i_1510_, v___x_1539_);
v___x_1541_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18_spec__26(v_ctx_1506_, v_a_1507_, v_as_1508_, v_sz_1509_, v___x_1540_, v___x_1538_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
return v___x_1541_;
}
}
v___jp_1543_:
{
lean_object* v___x_1545_; 
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 1, v_snd_1530_);
lean_ctor_set(v___x_1527_, 0, v_fst_1529_);
v___x_1545_ = v___x_1527_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_fst_1529_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v_snd_1530_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
v_a_1536_ = v___x_1545_;
goto v___jp_1535_;
}
}
v___jp_1547_:
{
lean_object* v___x_1548_; 
v___x_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1548_, 0, v_fst_1529_);
lean_ctor_set(v___x_1548_, 1, v_snd_1530_);
v_a_1536_ = v___x_1548_;
goto v___jp_1535_;
}
v___jp_1550_:
{
uint8_t v___x_1551_; 
v___x_1551_ = l_Lean_Expr_isHEq(v_a_1549_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1552_; 
lean_inc(v_a_1549_);
v___x_1552_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_a_1549_, v___y_1512_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; uint8_t v___x_1554_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1552_, 1);
v___x_1554_ = lean_unbox(v_a_1553_);
lean_dec(v_a_1553_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; 
lean_del_object(v___x_1527_);
v___x_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1555_, 0, v_fst_1529_);
lean_ctor_set(v___x_1555_, 1, v_snd_1530_);
v_a_1536_ = v___x_1555_;
goto v___jp_1535_;
}
else
{
lean_object* v_isInterpreted_1556_; lean_object* v___x_1557_; 
v_isInterpreted_1556_ = lean_ctor_get(v_ctx_1506_, 0);
lean_inc_ref(v_isInterpreted_1556_);
lean_inc(v___y_1521_);
lean_inc_ref(v___y_1520_);
lean_inc(v___y_1519_);
lean_inc_ref(v___y_1518_);
lean_inc(v___y_1517_);
lean_inc_ref(v___y_1516_);
lean_inc(v___y_1515_);
lean_inc_ref(v___y_1514_);
lean_inc(v___y_1513_);
lean_inc(v___y_1512_);
lean_inc(v_a_1549_);
v___x_1557_ = lean_apply_12(v_isInterpreted_1556_, v_a_1549_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, lean_box(0));
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; uint8_t v___x_1559_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1557_, 1);
v___x_1559_ = lean_unbox(v_a_1558_);
lean_dec(v_a_1558_);
if (v___x_1559_ == 0)
{
lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1560_ = l_Lean_Expr_getAppFn(v_a_1549_);
lean_inc_ref(v___x_1560_);
v___x_1561_ = l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_isFnInstance(v___x_1560_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1561_) == 0)
{
lean_object* v_a_1562_; uint8_t v___x_1563_; 
v_a_1562_ = lean_ctor_get(v___x_1561_, 0);
lean_inc(v_a_1562_);
lean_dec_ref_known(v___x_1561_, 1);
v___x_1563_ = lean_unbox(v_a_1562_);
lean_dec(v_a_1562_);
if (v___x_1563_ == 0)
{
uint8_t v___x_1564_; 
v___x_1564_ = l_Lean_Meta_Grind_isCastLikeFn(v___x_1560_);
if (v___x_1564_ == 0)
{
lean_object* v___x_1565_; lean_object* v_dummy_1566_; lean_object* v_nargs_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; size_t v_sz_1574_; size_t v___x_1575_; lean_object* v___x_1576_; 
lean_del_object(v___x_1527_);
v___x_1565_ = lean_unsigned_to_nat(0u);
v_dummy_1566_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1, &l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mkKey___closed__1);
v_nargs_1567_ = l_Lean_Expr_getAppNumArgs(v_a_1549_);
lean_inc(v_nargs_1567_);
v___x_1568_ = lean_mk_array(v_nargs_1567_, v_dummy_1566_);
v___x_1569_ = lean_unsigned_to_nat(1u);
v___x_1570_ = lean_nat_sub(v_nargs_1567_, v___x_1569_);
lean_dec(v_nargs_1567_);
lean_inc_n(v_a_1549_, 2);
v___x_1571_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1549_, v___x_1568_, v___x_1570_);
v___x_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1572_, 0, v_snd_1530_);
lean_ctor_set(v___x_1572_, 1, v___x_1565_);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v_fst_1529_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
v_sz_1574_ = lean_array_size(v___x_1571_);
v___x_1575_ = ((size_t)0ULL);
lean_inc_ref(v_ctx_1506_);
v___x_1576_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6(v_a_1549_, v_ctx_1506_, v___x_1560_, v___x_1571_, v_sz_1574_, v___x_1575_, v___x_1573_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec_ref(v___x_1571_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v_snd_1578_; lean_object* v_fst_1579_; lean_object* v_fst_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v_snd_1578_ = lean_ctor_get(v_a_1577_, 1);
lean_inc(v_snd_1578_);
v_fst_1579_ = lean_ctor_get(v_a_1577_, 0);
lean_inc(v_fst_1579_);
lean_dec(v_a_1577_);
v_fst_1580_ = lean_ctor_get(v_snd_1578_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v_snd_1578_);
if (v_isSharedCheck_1587_ == 0)
{
lean_object* v_unused_1588_; 
v_unused_1588_ = lean_ctor_get(v_snd_1578_, 1);
lean_dec(v_unused_1588_);
v___x_1582_ = v_snd_1578_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_fst_1580_);
lean_dec(v_snd_1578_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 1, v_fst_1580_);
lean_ctor_set(v___x_1582_, 0, v_fst_1579_);
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_fst_1579_);
lean_ctor_set(v_reuseFailAlloc_1586_, 1, v_fst_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
v_a_1536_ = v___x_1585_;
goto v___jp_1535_;
}
}
}
else
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1596_; 
lean_del_object(v___x_1532_);
lean_dec_ref(v_ctx_1506_);
v_a_1589_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1591_ = v___x_1576_;
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___x_1576_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
}
else
{
lean_dec_ref(v___x_1560_);
goto v___jp_1543_;
}
}
else
{
lean_dec_ref(v___x_1560_);
goto v___jp_1543_;
}
}
else
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1604_; 
lean_dec_ref(v___x_1560_);
lean_del_object(v___x_1532_);
lean_dec(v_snd_1530_);
lean_dec(v_fst_1529_);
lean_del_object(v___x_1527_);
lean_dec_ref(v_ctx_1506_);
v_a_1597_ = lean_ctor_get(v___x_1561_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1599_ = v___x_1561_;
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v___x_1561_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___x_1602_; 
if (v_isShared_1600_ == 0)
{
v___x_1602_ = v___x_1599_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_a_1597_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
}
}
else
{
lean_object* v___x_1605_; 
lean_del_object(v___x_1527_);
v___x_1605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1605_, 0, v_fst_1529_);
lean_ctor_set(v___x_1605_, 1, v_snd_1530_);
v_a_1536_ = v___x_1605_;
goto v___jp_1535_;
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
lean_del_object(v___x_1532_);
lean_dec(v_snd_1530_);
lean_dec(v_fst_1529_);
lean_del_object(v___x_1527_);
lean_dec_ref(v_ctx_1506_);
v_a_1606_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1557_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1557_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
lean_del_object(v___x_1532_);
lean_dec(v_snd_1530_);
lean_dec(v_fst_1529_);
lean_del_object(v___x_1527_);
lean_dec_ref(v_ctx_1506_);
v_a_1614_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1552_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1552_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
else
{
lean_del_object(v___x_1527_);
goto v___jp_1547_;
}
}
v___jp_1622_:
{
if (v___y_1623_ == 0)
{
lean_del_object(v___x_1527_);
goto v___jp_1547_;
}
else
{
goto v___jp_1550_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18___boxed(lean_object** _args){
lean_object* v_ctx_1629_ = _args[0];
lean_object* v_a_1630_ = _args[1];
lean_object* v_as_1631_ = _args[2];
lean_object* v_sz_1632_ = _args[3];
lean_object* v_i_1633_ = _args[4];
lean_object* v_b_1634_ = _args[5];
lean_object* v___y_1635_ = _args[6];
lean_object* v___y_1636_ = _args[7];
lean_object* v___y_1637_ = _args[8];
lean_object* v___y_1638_ = _args[9];
lean_object* v___y_1639_ = _args[10];
lean_object* v___y_1640_ = _args[11];
lean_object* v___y_1641_ = _args[12];
lean_object* v___y_1642_ = _args[13];
lean_object* v___y_1643_ = _args[14];
lean_object* v___y_1644_ = _args[15];
lean_object* v___y_1645_ = _args[16];
_start:
{
uint8_t v_a_162955__boxed_1646_; size_t v_sz_boxed_1647_; size_t v_i_boxed_1648_; lean_object* v_res_1649_; 
v_a_162955__boxed_1646_ = lean_unbox(v_a_1630_);
v_sz_boxed_1647_ = lean_unbox_usize(v_sz_1632_);
lean_dec(v_sz_1632_);
v_i_boxed_1648_ = lean_unbox_usize(v_i_1633_);
lean_dec(v_i_1633_);
v_res_1649_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18(v_ctx_1629_, v_a_162955__boxed_1646_, v_as_1631_, v_sz_boxed_1647_, v_i_boxed_1648_, v_b_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec(v___y_1635_);
lean_dec_ref(v_as_1631_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14(lean_object* v_init_1650_, lean_object* v_ctx_1651_, uint8_t v_a_1652_, lean_object* v_n_1653_, lean_object* v_b_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
if (lean_obj_tag(v_n_1653_) == 0)
{
lean_object* v_cs_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; size_t v_sz_1669_; size_t v___x_1670_; lean_object* v___x_1671_; 
v_cs_1666_ = lean_ctor_get(v_n_1653_, 0);
v___x_1667_ = lean_box(0);
v___x_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
lean_ctor_set(v___x_1668_, 1, v_b_1654_);
v_sz_1669_ = lean_array_size(v_cs_1666_);
v___x_1670_ = ((size_t)0ULL);
v___x_1671_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__17(v_init_1650_, v_ctx_1651_, v_a_1652_, v_cs_1666_, v_sz_1669_, v___x_1670_, v___x_1668_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1686_; 
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1674_ = v___x_1671_;
v_isShared_1675_ = v_isSharedCheck_1686_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1671_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1686_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v_fst_1676_; 
v_fst_1676_ = lean_ctor_get(v_a_1672_, 0);
if (lean_obj_tag(v_fst_1676_) == 0)
{
lean_object* v_snd_1677_; lean_object* v___x_1678_; lean_object* v___x_1680_; 
v_snd_1677_ = lean_ctor_get(v_a_1672_, 1);
lean_inc(v_snd_1677_);
lean_dec(v_a_1672_);
v___x_1678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1678_, 0, v_snd_1677_);
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 0, v___x_1678_);
v___x_1680_ = v___x_1674_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v___x_1678_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
else
{
lean_object* v_val_1682_; lean_object* v___x_1684_; 
lean_inc_ref(v_fst_1676_);
lean_dec(v_a_1672_);
v_val_1682_ = lean_ctor_get(v_fst_1676_, 0);
lean_inc(v_val_1682_);
lean_dec_ref_known(v_fst_1676_, 1);
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 0, v_val_1682_);
v___x_1684_ = v___x_1674_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_val_1682_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
else
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1694_; 
v_a_1687_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1689_ = v___x_1671_;
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1671_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1692_; 
if (v_isShared_1690_ == 0)
{
v___x_1692_ = v___x_1689_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_a_1687_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
}
}
else
{
lean_object* v_vs_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; size_t v_sz_1698_; size_t v___x_1699_; lean_object* v___x_1700_; 
v_vs_1695_ = lean_ctor_get(v_n_1653_, 0);
v___x_1696_ = lean_box(0);
v___x_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1696_);
lean_ctor_set(v___x_1697_, 1, v_b_1654_);
v_sz_1698_ = lean_array_size(v_vs_1695_);
v___x_1699_ = ((size_t)0ULL);
v___x_1700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__18(v_ctx_1651_, v_a_1652_, v_vs_1695_, v_sz_1698_, v___x_1699_, v___x_1697_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1715_; 
v_a_1701_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1703_ = v___x_1700_;
v_isShared_1704_ = v_isSharedCheck_1715_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v___x_1700_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1715_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v_fst_1705_; 
v_fst_1705_ = lean_ctor_get(v_a_1701_, 0);
if (lean_obj_tag(v_fst_1705_) == 0)
{
lean_object* v_snd_1706_; lean_object* v___x_1707_; lean_object* v___x_1709_; 
v_snd_1706_ = lean_ctor_get(v_a_1701_, 1);
lean_inc(v_snd_1706_);
lean_dec(v_a_1701_);
v___x_1707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1707_, 0, v_snd_1706_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 0, v___x_1707_);
v___x_1709_ = v___x_1703_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1707_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
else
{
lean_object* v_val_1711_; lean_object* v___x_1713_; 
lean_inc_ref(v_fst_1705_);
lean_dec(v_a_1701_);
v_val_1711_ = lean_ctor_get(v_fst_1705_, 0);
lean_inc(v_val_1711_);
lean_dec_ref_known(v_fst_1705_, 1);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 0, v_val_1711_);
v___x_1713_ = v___x_1703_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_val_1711_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
else
{
lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1723_; 
v_a_1716_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1718_ = v___x_1700_;
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1700_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1721_; 
if (v_isShared_1719_ == 0)
{
v___x_1721_ = v___x_1718_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_a_1716_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__17(lean_object* v_init_1724_, lean_object* v_ctx_1725_, uint8_t v_a_1726_, lean_object* v_as_1727_, size_t v_sz_1728_, size_t v_i_1729_, lean_object* v_b_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_){
_start:
{
uint8_t v___x_1742_; 
v___x_1742_ = lean_usize_dec_lt(v_i_1729_, v_sz_1728_);
if (v___x_1742_ == 0)
{
lean_object* v___x_1743_; 
lean_dec_ref(v_ctx_1725_);
v___x_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1743_, 0, v_b_1730_);
return v___x_1743_;
}
else
{
lean_object* v_snd_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1778_; 
v_snd_1744_ = lean_ctor_get(v_b_1730_, 1);
v_isSharedCheck_1778_ = !lean_is_exclusive(v_b_1730_);
if (v_isSharedCheck_1778_ == 0)
{
lean_object* v_unused_1779_; 
v_unused_1779_ = lean_ctor_get(v_b_1730_, 0);
lean_dec(v_unused_1779_);
v___x_1746_ = v_b_1730_;
v_isShared_1747_ = v_isSharedCheck_1778_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_snd_1744_);
lean_dec(v_b_1730_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1778_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1748_; lean_object* v_a_1749_; lean_object* v___x_1750_; 
v___x_1748_ = lean_box(0);
v_a_1749_ = lean_array_uget_borrowed(v_as_1727_, v_i_1729_);
lean_inc(v_snd_1744_);
lean_inc_ref(v_ctx_1725_);
v___x_1750_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14(v_init_1724_, v_ctx_1725_, v_a_1726_, v_a_1749_, v_snd_1744_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1769_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1753_ = v___x_1750_;
v_isShared_1754_ = v_isSharedCheck_1769_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1750_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1769_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
if (lean_obj_tag(v_a_1751_) == 0)
{
lean_object* v___x_1755_; lean_object* v___x_1757_; 
lean_dec_ref(v_ctx_1725_);
v___x_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1755_, 0, v_a_1751_);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v___x_1755_);
v___x_1757_ = v___x_1746_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v___x_1755_);
lean_ctor_set(v_reuseFailAlloc_1761_, 1, v_snd_1744_);
v___x_1757_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
lean_object* v___x_1759_; 
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v___x_1757_);
v___x_1759_ = v___x_1753_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1757_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
else
{
lean_object* v_a_1762_; lean_object* v___x_1764_; 
lean_del_object(v___x_1753_);
lean_dec(v_snd_1744_);
v_a_1762_ = lean_ctor_get(v_a_1751_, 0);
lean_inc(v_a_1762_);
lean_dec_ref_known(v_a_1751_, 1);
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 1, v_a_1762_);
lean_ctor_set(v___x_1746_, 0, v___x_1748_);
v___x_1764_ = v___x_1746_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1748_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v_a_1762_);
v___x_1764_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
size_t v___x_1765_; size_t v___x_1766_; 
v___x_1765_ = ((size_t)1ULL);
v___x_1766_ = lean_usize_add(v_i_1729_, v___x_1765_);
v_i_1729_ = v___x_1766_;
v_b_1730_ = v___x_1764_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
lean_del_object(v___x_1746_);
lean_dec(v_snd_1744_);
lean_dec_ref(v_ctx_1725_);
v_a_1770_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v___x_1750_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1750_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__17___boxed(lean_object** _args){
lean_object* v_init_1780_ = _args[0];
lean_object* v_ctx_1781_ = _args[1];
lean_object* v_a_1782_ = _args[2];
lean_object* v_as_1783_ = _args[3];
lean_object* v_sz_1784_ = _args[4];
lean_object* v_i_1785_ = _args[5];
lean_object* v_b_1786_ = _args[6];
lean_object* v___y_1787_ = _args[7];
lean_object* v___y_1788_ = _args[8];
lean_object* v___y_1789_ = _args[9];
lean_object* v___y_1790_ = _args[10];
lean_object* v___y_1791_ = _args[11];
lean_object* v___y_1792_ = _args[12];
lean_object* v___y_1793_ = _args[13];
lean_object* v___y_1794_ = _args[14];
lean_object* v___y_1795_ = _args[15];
lean_object* v___y_1796_ = _args[16];
lean_object* v___y_1797_ = _args[17];
_start:
{
uint8_t v_a_163183__boxed_1798_; size_t v_sz_boxed_1799_; size_t v_i_boxed_1800_; lean_object* v_res_1801_; 
v_a_163183__boxed_1798_ = lean_unbox(v_a_1782_);
v_sz_boxed_1799_ = lean_unbox_usize(v_sz_1784_);
lean_dec(v_sz_1784_);
v_i_boxed_1800_ = lean_unbox_usize(v_i_1785_);
lean_dec(v_i_1785_);
v_res_1801_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14_spec__17(v_init_1780_, v_ctx_1781_, v_a_163183__boxed_1798_, v_as_1783_, v_sz_boxed_1799_, v_i_boxed_1800_, v_b_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_);
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
lean_dec(v___y_1794_);
lean_dec_ref(v___y_1793_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v_as_1783_);
lean_dec_ref(v_init_1780_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14___boxed(lean_object* v_init_1802_, lean_object* v_ctx_1803_, lean_object* v_a_1804_, lean_object* v_n_1805_, lean_object* v_b_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
uint8_t v_a_163211__boxed_1818_; lean_object* v_res_1819_; 
v_a_163211__boxed_1818_ = lean_unbox(v_a_1804_);
v_res_1819_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14(v_init_1802_, v_ctx_1803_, v_a_163211__boxed_1818_, v_n_1805_, v_b_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec(v___y_1807_);
lean_dec_ref(v_n_1805_);
lean_dec_ref(v_init_1802_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7(lean_object* v_ctx_1820_, uint8_t v_a_1821_, lean_object* v_t_1822_, lean_object* v_init_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v_root_1835_; lean_object* v_tail_1836_; lean_object* v___x_1837_; 
v_root_1835_ = lean_ctor_get(v_t_1822_, 0);
v_tail_1836_ = lean_ctor_get(v_t_1822_, 1);
lean_inc_ref(v_ctx_1820_);
lean_inc_ref(v_init_1823_);
v___x_1837_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__14(v_init_1823_, v_ctx_1820_, v_a_1821_, v_root_1835_, v_init_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
lean_dec_ref(v_init_1823_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1874_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1840_ = v___x_1837_;
v_isShared_1841_ = v_isSharedCheck_1874_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1837_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1874_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
if (lean_obj_tag(v_a_1838_) == 0)
{
lean_object* v_a_1842_; lean_object* v___x_1844_; 
lean_dec_ref(v_ctx_1820_);
v_a_1842_ = lean_ctor_get(v_a_1838_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v_a_1838_, 1);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 0, v_a_1842_);
v___x_1844_ = v___x_1840_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_a_1842_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; size_t v_sz_1849_; size_t v___x_1850_; lean_object* v___x_1851_; 
lean_del_object(v___x_1840_);
v_a_1846_ = lean_ctor_get(v_a_1838_, 0);
lean_inc(v_a_1846_);
lean_dec_ref_known(v_a_1838_, 1);
v___x_1847_ = lean_box(0);
v___x_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
lean_ctor_set(v___x_1848_, 1, v_a_1846_);
v_sz_1849_ = lean_array_size(v_tail_1836_);
v___x_1850_ = ((size_t)0ULL);
v___x_1851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7_spec__15(v_ctx_1820_, v_a_1821_, v_tail_1836_, v_sz_1849_, v___x_1850_, v___x_1848_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v_a_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1865_; 
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1854_ = v___x_1851_;
v_isShared_1855_ = v_isSharedCheck_1865_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_a_1852_);
lean_dec(v___x_1851_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1865_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v_fst_1856_; 
v_fst_1856_ = lean_ctor_get(v_a_1852_, 0);
if (lean_obj_tag(v_fst_1856_) == 0)
{
lean_object* v_snd_1857_; lean_object* v___x_1859_; 
v_snd_1857_ = lean_ctor_get(v_a_1852_, 1);
lean_inc(v_snd_1857_);
lean_dec(v_a_1852_);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 0, v_snd_1857_);
v___x_1859_ = v___x_1854_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_snd_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
else
{
lean_object* v_val_1861_; lean_object* v___x_1863_; 
lean_inc_ref(v_fst_1856_);
lean_dec(v_a_1852_);
v_val_1861_ = lean_ctor_get(v_fst_1856_, 0);
lean_inc(v_val_1861_);
lean_dec_ref_known(v_fst_1856_, 1);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 0, v_val_1861_);
v___x_1863_ = v___x_1854_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_val_1861_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
v_a_1866_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1851_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1851_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
}
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec_ref(v_ctx_1820_);
v_a_1875_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1837_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1837_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7___boxed(lean_object* v_ctx_1883_, lean_object* v_a_1884_, lean_object* v_t_1885_, lean_object* v_init_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
uint8_t v_a_163432__boxed_1898_; lean_object* v_res_1899_; 
v_a_163432__boxed_1898_ = lean_unbox(v_a_1884_);
v_res_1899_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7(v_ctx_1883_, v_a_163432__boxed_1898_, v_t_1885_, v_init_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v_t_1885_);
return v_res_1899_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__1(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1903_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__0));
v___x_1904_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__6___closed__5));
v___x_1905_ = l_Lean_Name_append(v___x_1904_, v___x_1903_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17(lean_object* v_as_1906_, size_t v_i_1907_, size_t v_stop_1908_, lean_object* v_b_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v_a_1922_; uint8_t v___x_1926_; 
v___x_1926_ = lean_usize_dec_eq(v_i_1907_, v_stop_1908_);
if (v___x_1926_ == 0)
{
lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1927_ = lean_array_uget_borrowed(v_as_1906_, v_i_1907_);
v___x_1928_ = l_Lean_Meta_Grind_isKnownCaseSplit___redArg(v___x_1927_, v___y_1910_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; uint8_t v___x_1930_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___x_1928_, 1);
v___x_1930_ = lean_unbox(v_a_1929_);
lean_dec(v_a_1929_);
if (v___x_1930_ == 0)
{
if (lean_obj_tag(v___x_1927_) == 2)
{
lean_object* v_a_1931_; lean_object* v_b_1932_; lean_object* v_eq_1933_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v___y_1937_; lean_object* v___y_1938_; lean_object* v___y_1939_; lean_object* v___y_1940_; lean_object* v___y_1941_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v___y_1944_; lean_object* v___y_1945_; lean_object* v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v_toCold_1989_; lean_object* v_options_1990_; uint8_t v_hasTrace_1991_; 
v_a_1931_ = lean_ctor_get(v___x_1927_, 0);
v_b_1932_ = lean_ctor_get(v___x_1927_, 1);
v_eq_1933_ = lean_ctor_get(v___x_1927_, 3);
v_toCold_1989_ = lean_ctor_get(v___y_1918_, 0);
v_options_1990_ = lean_ctor_get(v_toCold_1989_, 2);
v_hasTrace_1991_ = lean_ctor_get_uint8(v_options_1990_, sizeof(void*)*1);
if (v_hasTrace_1991_ == 0)
{
v___y_1958_ = v___y_1910_;
v___y_1959_ = v___y_1911_;
v___y_1960_ = v___y_1912_;
v___y_1961_ = v___y_1913_;
v___y_1962_ = v___y_1914_;
v___y_1963_ = v___y_1915_;
v___y_1964_ = v___y_1916_;
v___y_1965_ = v___y_1917_;
v___y_1966_ = v___y_1918_;
v___y_1967_ = v___y_1919_;
goto v___jp_1957_;
}
else
{
lean_object* v_inheritedTraceOptions_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; uint8_t v___x_1995_; 
v_inheritedTraceOptions_1992_ = lean_ctor_get(v_toCold_1989_, 11);
v___x_1993_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__0));
v___x_1994_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___closed__1);
v___x_1995_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1992_, v_options_1990_, v___x_1994_);
if (v___x_1995_ == 0)
{
v___y_1958_ = v___y_1910_;
v___y_1959_ = v___y_1911_;
v___y_1960_ = v___y_1912_;
v___y_1961_ = v___y_1913_;
v___y_1962_ = v___y_1914_;
v___y_1963_ = v___y_1915_;
v___y_1964_ = v___y_1916_;
v___y_1965_ = v___y_1917_;
v___y_1966_ = v___y_1918_;
v___y_1967_ = v___y_1919_;
goto v___jp_1957_;
}
else
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
lean_inc_ref(v_eq_1933_);
v___x_1996_ = l_Lean_MessageData_ofExpr(v_eq_1933_);
v___x_1997_ = l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg(v___x_1993_, v___x_1996_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_dec_ref_known(v___x_1997_, 1);
v___y_1958_ = v___y_1910_;
v___y_1959_ = v___y_1911_;
v___y_1960_ = v___y_1912_;
v___y_1961_ = v___y_1913_;
v___y_1962_ = v___y_1914_;
v___y_1963_ = v___y_1915_;
v___y_1964_ = v___y_1916_;
v___y_1965_ = v___y_1917_;
v___y_1966_ = v___y_1918_;
v___y_1967_ = v___y_1919_;
goto v___jp_1957_;
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec_ref(v_b_1909_);
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1997_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
}
v___jp_1934_:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = lean_box(0);
lean_inc(v___y_1939_);
lean_inc_ref(v___y_1943_);
lean_inc(v___y_1935_);
lean_inc_ref(v___y_1944_);
lean_inc(v___y_1937_);
lean_inc_ref(v___y_1938_);
lean_inc(v___y_1940_);
lean_inc_ref(v___y_1936_);
lean_inc(v___y_1942_);
lean_inc(v___y_1941_);
lean_inc_ref(v_eq_1933_);
v___x_1947_ = lean_grind_internalize(v_eq_1933_, v___y_1945_, v___x_1946_, v___y_1941_, v___y_1942_, v___y_1936_, v___y_1940_, v___y_1938_, v___y_1937_, v___y_1944_, v___y_1935_, v___y_1943_, v___y_1939_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v___x_1948_; 
lean_dec_ref_known(v___x_1947_, 1);
lean_inc_ref(v___x_1927_);
v___x_1948_ = lean_array_push(v_b_1909_, v___x_1927_);
v_a_1922_ = v___x_1948_;
goto v___jp_1921_;
}
else
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1956_; 
lean_dec_ref(v_b_1909_);
v_a_1949_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1951_ = v___x_1947_;
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1947_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1954_; 
if (v_isShared_1952_ == 0)
{
v___x_1954_ = v___x_1951_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_a_1949_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
}
v___jp_1957_:
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_1931_, v___y_1958_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1970_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1968_, 1);
v___x_1970_ = l_Lean_Meta_Grind_getGeneration___redArg(v_b_1932_, v___y_1958_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; uint8_t v___x_1972_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1971_);
lean_dec_ref_known(v___x_1970_, 1);
v___x_1972_ = lean_nat_dec_le(v_a_1969_, v_a_1971_);
if (v___x_1972_ == 0)
{
lean_dec(v_a_1971_);
v___y_1935_ = v___y_1965_;
v___y_1936_ = v___y_1960_;
v___y_1937_ = v___y_1963_;
v___y_1938_ = v___y_1962_;
v___y_1939_ = v___y_1967_;
v___y_1940_ = v___y_1961_;
v___y_1941_ = v___y_1958_;
v___y_1942_ = v___y_1959_;
v___y_1943_ = v___y_1966_;
v___y_1944_ = v___y_1964_;
v___y_1945_ = v_a_1969_;
goto v___jp_1934_;
}
else
{
lean_dec(v_a_1969_);
v___y_1935_ = v___y_1965_;
v___y_1936_ = v___y_1960_;
v___y_1937_ = v___y_1963_;
v___y_1938_ = v___y_1962_;
v___y_1939_ = v___y_1967_;
v___y_1940_ = v___y_1961_;
v___y_1941_ = v___y_1958_;
v___y_1942_ = v___y_1959_;
v___y_1943_ = v___y_1966_;
v___y_1944_ = v___y_1964_;
v___y_1945_ = v_a_1971_;
goto v___jp_1934_;
}
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
lean_dec(v_a_1969_);
lean_dec_ref(v_b_1909_);
v_a_1973_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1970_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1970_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
}
else
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1988_; 
lean_dec_ref(v_b_1909_);
v_a_1981_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_1988_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1983_ = v___x_1968_;
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1968_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1988_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1986_; 
if (v_isShared_1984_ == 0)
{
v___x_1986_ = v___x_1983_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v_a_1981_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
}
}
else
{
v_a_1922_ = v_b_1909_;
goto v___jp_1921_;
}
}
else
{
v_a_1922_ = v_b_1909_;
goto v___jp_1921_;
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
lean_dec_ref(v_b_1909_);
v_a_2006_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1928_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1928_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
else
{
lean_object* v___x_2014_; 
v___x_2014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2014_, 0, v_b_1909_);
return v___x_2014_;
}
v___jp_1921_:
{
size_t v___x_1923_; size_t v___x_1924_; 
v___x_1923_ = ((size_t)1ULL);
v___x_1924_ = lean_usize_add(v_i_1907_, v___x_1923_);
v_i_1907_ = v___x_1924_;
v_b_1909_ = v_a_1922_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17___boxed(lean_object* v_as_2015_, lean_object* v_i_2016_, lean_object* v_stop_2017_, lean_object* v_b_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_){
_start:
{
size_t v_i_boxed_2030_; size_t v_stop_boxed_2031_; lean_object* v_res_2032_; 
v_i_boxed_2030_ = lean_unbox_usize(v_i_2016_);
lean_dec(v_i_2016_);
v_stop_boxed_2031_ = lean_unbox_usize(v_stop_2017_);
lean_dec(v_stop_2017_);
v_res_2032_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17(v_as_2015_, v_i_boxed_2030_, v_stop_boxed_2031_, v_b_2018_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v___y_2024_);
lean_dec_ref(v___y_2023_);
lean_dec(v___y_2022_);
lean_dec_ref(v___y_2021_);
lean_dec(v___y_2020_);
lean_dec(v___y_2019_);
lean_dec_ref(v_as_2015_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8(lean_object* v_as_2035_, lean_object* v_start_2036_, lean_object* v_stop_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v___x_2049_; uint8_t v___x_2050_; 
v___x_2049_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8___closed__0));
v___x_2050_ = lean_nat_dec_lt(v_start_2036_, v_stop_2037_);
if (v___x_2050_ == 0)
{
lean_object* v___x_2051_; 
v___x_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2049_);
return v___x_2051_;
}
else
{
lean_object* v___x_2052_; uint8_t v___x_2053_; 
v___x_2052_ = lean_array_get_size(v_as_2035_);
v___x_2053_ = lean_nat_dec_le(v_stop_2037_, v___x_2052_);
if (v___x_2053_ == 0)
{
uint8_t v___x_2054_; 
v___x_2054_ = lean_nat_dec_lt(v_start_2036_, v___x_2052_);
if (v___x_2054_ == 0)
{
lean_object* v___x_2055_; 
v___x_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2049_);
return v___x_2055_;
}
else
{
size_t v___x_2056_; size_t v___x_2057_; lean_object* v___x_2058_; 
v___x_2056_ = lean_usize_of_nat(v_start_2036_);
v___x_2057_ = lean_usize_of_nat(v___x_2052_);
v___x_2058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17(v_as_2035_, v___x_2056_, v___x_2057_, v___x_2049_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
return v___x_2058_;
}
}
else
{
size_t v___x_2059_; size_t v___x_2060_; lean_object* v___x_2061_; 
v___x_2059_ = lean_usize_of_nat(v_start_2036_);
v___x_2060_ = lean_usize_of_nat(v_stop_2037_);
v___x_2061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8_spec__17(v_as_2035_, v___x_2059_, v___x_2060_, v___x_2049_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
return v___x_2061_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8___boxed(lean_object* v_as_2062_, lean_object* v_start_2063_, lean_object* v_stop_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
lean_object* v_res_2076_; 
v_res_2076_ = l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8(v_as_2062_, v_start_2063_, v_stop_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec(v___y_2065_);
lean_dec(v_stop_2064_);
lean_dec(v_start_2063_);
lean_dec_ref(v_as_2062_);
return v_res_2076_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mbtc___closed__0(void){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2077_ = lean_box(0);
v___x_2078_ = lean_unsigned_to_nat(16u);
v___x_2079_ = lean_mk_array(v___x_2078_, v___x_2077_);
return v___x_2079_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mbtc___closed__1(void){
_start:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2080_ = lean_obj_once(&l_Lean_Meta_Grind_mbtc___closed__0, &l_Lean_Meta_Grind_mbtc___closed__0_once, _init_l_Lean_Meta_Grind_mbtc___closed__0);
v___x_2081_ = lean_unsigned_to_nat(0u);
v___x_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
lean_ctor_set(v___x_2082_, 1, v___x_2080_);
return v___x_2082_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mbtc___closed__2(void){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = lean_obj_once(&l_Lean_Meta_Grind_mbtc___closed__1, &l_Lean_Meta_Grind_mbtc___closed__1_once, _init_l_Lean_Meta_Grind_mbtc___closed__1);
v___x_2084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
return v___x_2084_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mbtc___closed__4(void){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2086_ = ((lean_object*)(l_Lean_Meta_Grind_mbtc___closed__3));
v___x_2087_ = l_Lean_stringToMessageData(v___x_2086_);
return v___x_2087_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mbtc___closed__6(void){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = ((lean_object*)(l_Lean_Meta_Grind_mbtc___closed__5));
v___x_2090_ = l_Lean_stringToMessageData(v___x_2089_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mbtc(lean_object* v_ctx_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_){
_start:
{
lean_object* v___x_2103_; 
v___x_2103_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2094_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2305_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2106_ = v___x_2103_;
v_isShared_2107_ = v_isSharedCheck_2305_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_a_2104_);
lean_dec(v___x_2103_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2305_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
uint8_t v_mbtc_2108_; 
v_mbtc_2108_ = lean_ctor_get_uint8(v_a_2104_, sizeof(void*)*14 + 18);
lean_dec(v_a_2104_);
if (v_mbtc_2108_ == 0)
{
lean_object* v___x_2109_; lean_object* v___x_2111_; 
lean_dec_ref(v_ctx_2091_);
v___x_2109_ = lean_box(v_mbtc_2108_);
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 0, v___x_2109_);
v___x_2111_ = v___x_2106_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v___x_2109_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
else
{
lean_object* v___x_2113_; 
lean_del_object(v___x_2106_);
v___x_2113_ = l_Lean_Meta_Grind_checkMaxCaseSplit___redArg(v_a_2092_, v_a_2094_);
if (lean_obj_tag(v___x_2113_) == 0)
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2304_; 
v_a_2114_ = lean_ctor_get(v___x_2113_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2116_ = v___x_2113_;
v_isShared_2117_ = v_isSharedCheck_2304_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2113_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2304_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
uint8_t v___x_2118_; 
v___x_2118_ = lean_unbox(v_a_2114_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v_toGoalState_2121_; lean_object* v_exprs_2122_; lean_object* v___x_2123_; uint8_t v___x_2124_; lean_object* v___x_2125_; 
lean_del_object(v___x_2116_);
v___x_2119_ = lean_unsigned_to_nat(0u);
v___x_2120_ = lean_st_ref_get(v_a_2092_);
v_toGoalState_2121_ = lean_ctor_get(v___x_2120_, 0);
lean_inc_ref(v_toGoalState_2121_);
lean_dec(v___x_2120_);
v_exprs_2122_ = lean_ctor_get(v_toGoalState_2121_, 2);
lean_inc_ref(v_exprs_2122_);
lean_dec_ref(v_toGoalState_2121_);
v___x_2123_ = lean_obj_once(&l_Lean_Meta_Grind_mbtc___closed__2, &l_Lean_Meta_Grind_mbtc___closed__2_once, _init_l_Lean_Meta_Grind_mbtc___closed__2);
v___x_2124_ = lean_unbox(v_a_2114_);
v___x_2125_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_mbtc_spec__7(v_ctx_2091_, v___x_2124_, v_exprs_2122_, v___x_2123_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_);
lean_dec_ref(v_exprs_2122_);
if (lean_obj_tag(v___x_2125_) == 0)
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2290_; 
v_a_2126_ = lean_ctor_get(v___x_2125_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2125_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2128_ = v___x_2125_;
v_isShared_2129_ = v_isSharedCheck_2290_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2125_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2290_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v_snd_2130_; lean_object* v_size_2131_; lean_object* v_buckets_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2289_; 
v_snd_2130_ = lean_ctor_get(v_a_2126_, 1);
lean_inc(v_snd_2130_);
lean_dec(v_a_2126_);
v_size_2131_ = lean_ctor_get(v_snd_2130_, 0);
v_buckets_2132_ = lean_ctor_get(v_snd_2130_, 1);
v_isSharedCheck_2289_ = !lean_is_exclusive(v_snd_2130_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2134_ = v_snd_2130_;
v_isShared_2135_ = v_isSharedCheck_2289_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_buckets_2132_);
lean_inc(v_size_2131_);
lean_dec(v_snd_2130_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2289_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
uint8_t v___x_2136_; 
v___x_2136_ = lean_nat_dec_eq(v_size_2131_, v___x_2119_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
lean_del_object(v___x_2128_);
lean_dec(v_a_2114_);
v___x_2137_ = lean_st_ref_get(v_a_2092_);
v___x_2138_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2094_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v_toGoalState_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2276_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_a_2139_);
lean_dec_ref_known(v___x_2138_, 1);
v_toGoalState_2140_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2276_ == 0)
{
lean_object* v_unused_2277_; 
v_unused_2277_ = lean_ctor_get(v___x_2137_, 1);
lean_dec(v_unused_2277_);
v___x_2142_ = v___x_2137_;
v_isShared_2143_ = v_isSharedCheck_2276_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_toGoalState_2140_);
lean_dec(v___x_2137_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2276_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v_split_2144_; lean_object* v_splits_2145_; lean_object* v_num_2146_; uint8_t v___x_2147_; lean_object* v___y_2149_; lean_object* v___y_2193_; lean_object* v___y_2194_; lean_object* v___y_2195_; lean_object* v___y_2196_; lean_object* v___y_2199_; lean_object* v___y_2200_; lean_object* v___y_2201_; lean_object* v___y_2202_; lean_object* v___y_2205_; 
v_split_2144_ = lean_ctor_get(v_toGoalState_2140_, 14);
lean_inc_ref(v_split_2144_);
lean_dec_ref(v_toGoalState_2140_);
v_splits_2145_ = lean_ctor_get(v_a_2139_, 0);
lean_inc(v_splits_2145_);
lean_dec(v_a_2139_);
v_num_2146_ = lean_ctor_get(v_split_2144_, 0);
lean_inc(v_num_2146_);
lean_dec_ref(v_split_2144_);
v___x_2147_ = lean_nat_dec_lt(v_splits_2145_, v_num_2146_);
lean_dec(v_num_2146_);
lean_dec(v_splits_2145_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2211_; lean_object* v___x_2212_; uint8_t v___x_2213_; 
lean_del_object(v___x_2142_);
lean_del_object(v___x_2134_);
v___x_2211_ = lean_mk_empty_array_with_capacity(v_size_2131_);
lean_dec(v_size_2131_);
v___x_2212_ = lean_array_get_size(v_buckets_2132_);
v___x_2213_ = lean_nat_dec_lt(v___x_2119_, v___x_2212_);
if (v___x_2213_ == 0)
{
lean_dec_ref(v_buckets_2132_);
v___y_2205_ = v___x_2211_;
goto v___jp_2204_;
}
else
{
size_t v___x_2214_; size_t v___x_2215_; lean_object* v___x_2216_; 
v___x_2214_ = ((size_t)0ULL);
v___x_2215_ = lean_usize_of_nat(v___x_2212_);
v___x_2216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_mbtc_spec__12(v_buckets_2132_, v___x_2214_, v___x_2215_, v___x_2211_);
lean_dec_ref(v_buckets_2132_);
v___y_2205_ = v___x_2216_;
goto v___jp_2204_;
}
}
else
{
lean_object* v___x_2217_; 
lean_dec_ref(v_buckets_2132_);
lean_dec(v_size_2131_);
v___x_2217_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2094_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; lean_object* v_splits_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2225_; 
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
lean_inc(v_a_2218_);
lean_dec_ref_known(v___x_2217_, 1);
v_splits_2219_ = lean_ctor_get(v_a_2218_, 0);
lean_inc(v_splits_2219_);
lean_dec(v_a_2218_);
v___x_2220_ = lean_obj_once(&l_Lean_Meta_Grind_mbtc___closed__4, &l_Lean_Meta_Grind_mbtc___closed__4_once, _init_l_Lean_Meta_Grind_mbtc___closed__4);
v___x_2221_ = l_Nat_reprFast(v_splits_2219_);
v___x_2222_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2221_);
v___x_2223_ = l_Lean_MessageData_ofFormat(v___x_2222_);
if (v_isShared_2143_ == 0)
{
lean_ctor_set_tag(v___x_2142_, 7);
lean_ctor_set(v___x_2142_, 1, v___x_2223_);
lean_ctor_set(v___x_2142_, 0, v___x_2220_);
v___x_2225_ = v___x_2142_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2220_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v___x_2223_);
v___x_2225_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
lean_object* v___x_2226_; lean_object* v___x_2228_; 
v___x_2226_ = lean_obj_once(&l_Lean_Meta_Grind_mbtc___closed__6, &l_Lean_Meta_Grind_mbtc___closed__6_once, _init_l_Lean_Meta_Grind_mbtc___closed__6);
if (v_isShared_2135_ == 0)
{
lean_ctor_set_tag(v___x_2134_, 7);
lean_ctor_set(v___x_2134_, 1, v___x_2226_);
lean_ctor_set(v___x_2134_, 0, v___x_2225_);
v___x_2228_ = v___x_2134_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2225_);
lean_ctor_set(v_reuseFailAlloc_2266_, 1, v___x_2226_);
v___x_2228_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
lean_object* v___x_2229_; 
v___x_2229_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_2096_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2257_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2232_ = v___x_2229_;
v_isShared_2233_ = v_isSharedCheck_2257_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2229_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2257_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
uint8_t v_verbose_2234_; 
v_verbose_2234_ = lean_ctor_get_uint8(v_a_2230_, 0);
lean_dec(v_a_2230_);
if (v_verbose_2234_ == 0)
{
lean_object* v___x_2235_; lean_object* v___x_2237_; 
lean_dec_ref(v___x_2228_);
v___x_2235_ = lean_box(v___x_2136_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2235_);
v___x_2237_ = v___x_2232_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___x_2235_);
v___x_2237_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
return v___x_2237_;
}
}
else
{
lean_object* v___x_2239_; 
lean_del_object(v___x_2232_);
v___x_2239_ = l_Lean_Meta_Sym_reportIssue(v___x_2228_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2247_; 
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2247_ == 0)
{
lean_object* v_unused_2248_; 
v_unused_2248_ = lean_ctor_get(v___x_2239_, 0);
lean_dec(v_unused_2248_);
v___x_2241_ = v___x_2239_;
v_isShared_2242_ = v_isSharedCheck_2247_;
goto v_resetjp_2240_;
}
else
{
lean_dec(v___x_2239_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2247_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2243_; lean_object* v___x_2245_; 
v___x_2243_ = lean_box(v___x_2136_);
if (v_isShared_2242_ == 0)
{
lean_ctor_set(v___x_2241_, 0, v___x_2243_);
v___x_2245_ = v___x_2241_;
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
}
else
{
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2256_; 
v_a_2249_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2251_ = v___x_2239_;
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2239_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2252_ == 0)
{
v___x_2254_ = v___x_2251_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_a_2249_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
}
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
lean_dec_ref(v___x_2228_);
v_a_2258_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___x_2229_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2229_);
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
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_del_object(v___x_2142_);
lean_del_object(v___x_2134_);
v_a_2268_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2217_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2217_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
v___jp_2148_:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2150_ = lean_array_get_size(v___y_2149_);
v___x_2151_ = l_Array_filterMapM___at___00Lean_Meta_Grind_mbtc_spec__8(v___y_2149_, v___x_2119_, v___x_2150_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_);
lean_dec_ref(v___y_2149_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2183_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2154_ = v___x_2151_;
v_isShared_2155_ = v_isSharedCheck_2183_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2151_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2183_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2156_; uint8_t v___x_2157_; 
v___x_2156_ = lean_array_get_size(v_a_2152_);
v___x_2157_ = lean_nat_dec_eq(v___x_2156_, v___x_2119_);
if (v___x_2157_ == 0)
{
lean_object* v___x_2158_; size_t v_sz_2159_; size_t v___x_2160_; lean_object* v___x_2161_; 
lean_del_object(v___x_2154_);
v___x_2158_ = lean_box(0);
v_sz_2159_ = lean_array_size(v_a_2152_);
v___x_2160_ = ((size_t)0ULL);
v___x_2161_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_mbtc_spec__9(v_a_2152_, v_sz_2159_, v___x_2160_, v___x_2158_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_);
lean_dec(v_a_2152_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2169_; 
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2169_ == 0)
{
lean_object* v_unused_2170_; 
v_unused_2170_ = lean_ctor_get(v___x_2161_, 0);
lean_dec(v_unused_2170_);
v___x_2163_ = v___x_2161_;
v_isShared_2164_ = v_isSharedCheck_2169_;
goto v_resetjp_2162_;
}
else
{
lean_dec(v___x_2161_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2169_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v___x_2165_; lean_object* v___x_2167_; 
v___x_2165_ = lean_box(v_mbtc_2108_);
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 0, v___x_2165_);
v___x_2167_ = v___x_2163_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
v_a_2171_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2161_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2161_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
else
{
lean_object* v___x_2179_; lean_object* v___x_2181_; 
lean_dec(v_a_2152_);
v___x_2179_ = lean_box(v___x_2147_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2179_);
v___x_2181_ = v___x_2154_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v___x_2179_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
v_a_2184_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2151_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2151_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
v___jp_2192_:
{
lean_object* v___x_2197_; 
v___x_2197_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___redArg(v___y_2193_, v___y_2195_, v___y_2194_, v___y_2196_);
lean_dec(v___y_2196_);
lean_dec(v___y_2193_);
v___y_2149_ = v___x_2197_;
goto v___jp_2148_;
}
v___jp_2198_:
{
uint8_t v___x_2203_; 
v___x_2203_ = lean_nat_dec_le(v___y_2202_, v___y_2200_);
if (v___x_2203_ == 0)
{
lean_dec(v___y_2200_);
lean_inc(v___y_2202_);
v___y_2193_ = v___y_2199_;
v___y_2194_ = v___y_2202_;
v___y_2195_ = v___y_2201_;
v___y_2196_ = v___y_2202_;
goto v___jp_2192_;
}
else
{
v___y_2193_ = v___y_2199_;
v___y_2194_ = v___y_2202_;
v___y_2195_ = v___y_2201_;
v___y_2196_ = v___y_2200_;
goto v___jp_2192_;
}
}
v___jp_2204_:
{
lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2206_ = lean_array_get_size(v___y_2205_);
v___x_2207_ = lean_nat_dec_eq(v___x_2206_, v___x_2119_);
if (v___x_2207_ == 0)
{
lean_object* v___x_2208_; lean_object* v___x_2209_; uint8_t v___x_2210_; 
v___x_2208_ = lean_unsigned_to_nat(1u);
v___x_2209_ = lean_nat_sub(v___x_2206_, v___x_2208_);
v___x_2210_ = lean_nat_dec_le(v___x_2119_, v___x_2209_);
if (v___x_2210_ == 0)
{
lean_inc(v___x_2209_);
v___y_2199_ = v___x_2206_;
v___y_2200_ = v___x_2209_;
v___y_2201_ = v___y_2205_;
v___y_2202_ = v___x_2209_;
goto v___jp_2198_;
}
else
{
v___y_2199_ = v___x_2206_;
v___y_2200_ = v___x_2209_;
v___y_2201_ = v___y_2205_;
v___y_2202_ = v___x_2119_;
goto v___jp_2198_;
}
}
else
{
v___y_2149_ = v___y_2205_;
goto v___jp_2148_;
}
}
}
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2285_; 
lean_dec(v___x_2137_);
lean_del_object(v___x_2134_);
lean_dec_ref(v_buckets_2132_);
lean_dec(v_size_2131_);
v_a_2278_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2280_ = v___x_2138_;
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2138_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2281_ == 0)
{
v___x_2283_ = v___x_2280_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_a_2278_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
else
{
lean_object* v___x_2287_; 
lean_del_object(v___x_2134_);
lean_dec_ref(v_buckets_2132_);
lean_dec(v_size_2131_);
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 0, v_a_2114_);
v___x_2287_ = v___x_2128_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2114_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_dec(v_a_2114_);
v_a_2291_ = lean_ctor_get(v___x_2125_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2125_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2125_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2125_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
else
{
uint8_t v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2302_; 
lean_dec(v_a_2114_);
lean_dec_ref(v_ctx_2091_);
v___x_2299_ = 0;
v___x_2300_ = lean_box(v___x_2299_);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 0, v___x_2300_);
v___x_2302_ = v___x_2116_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v___x_2300_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
else
{
lean_dec_ref(v_ctx_2091_);
return v___x_2113_;
}
}
}
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_dec_ref(v_ctx_2091_);
v_a_2306_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2103_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2103_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mbtc___boxed(lean_object* v_ctx_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l_Lean_Meta_Grind_mbtc(v_ctx_2314_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_, v_a_2321_, v_a_2322_, v_a_2323_, v_a_2324_);
lean_dec(v_a_2324_);
lean_dec_ref(v_a_2323_);
lean_dec(v_a_2322_);
lean_dec_ref(v_a_2321_);
lean_dec(v_a_2320_);
lean_dec_ref(v_a_2319_);
lean_dec(v_a_2318_);
lean_dec_ref(v_a_2317_);
lean_dec(v_a_2316_);
lean_dec(v_a_2315_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0(lean_object* v_cls_2327_, lean_object* v_msg_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_){
_start:
{
lean_object* v___x_2340_; 
v___x_2340_ = l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___redArg(v_cls_2327_, v_msg_2328_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_);
return v___x_2340_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0___boxed(lean_object* v_cls_2341_, lean_object* v_msg_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_){
_start:
{
lean_object* v_res_2354_; 
v_res_2354_ = l_Lean_addTrace___at___00Lean_Meta_Grind_mbtc_spec__0(v_cls_2341_, v_msg_2342_, v___y_2343_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
lean_dec(v___y_2350_);
lean_dec_ref(v___y_2349_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v___y_2346_);
lean_dec_ref(v___y_2345_);
lean_dec(v___y_2344_);
lean_dec(v___y_2343_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1(lean_object* v_00_u03b2_2355_, lean_object* v_m_2356_, lean_object* v_a_2357_, lean_object* v_b_2358_){
_start:
{
lean_object* v___x_2359_; 
v___x_2359_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1___redArg(v_m_2356_, v_a_2357_, v_b_2358_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2(lean_object* v_00_u03b2_2360_, lean_object* v_m_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v___x_2363_; 
v___x_2363_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2___redArg(v_m_2361_, v_a_2362_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2___boxed(lean_object* v_00_u03b2_2364_, lean_object* v_m_2365_, lean_object* v_a_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2(v_00_u03b2_2364_, v_m_2365_, v_a_2366_);
lean_dec_ref(v_a_2366_);
lean_dec_ref(v_m_2365_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4(lean_object* v_ctx_2368_, lean_object* v_val_2369_, lean_object* v___x_2370_, lean_object* v___x_2371_, lean_object* v_as_2372_, lean_object* v_as_x27_2373_, lean_object* v_b_2374_, lean_object* v_a_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
lean_object* v___x_2387_; 
v___x_2387_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4___redArg(v_ctx_2368_, v_val_2369_, v___x_2370_, v___x_2371_, v_as_x27_2373_, v_b_2374_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4___boxed(lean_object** _args){
lean_object* v_ctx_2388_ = _args[0];
lean_object* v_val_2389_ = _args[1];
lean_object* v___x_2390_ = _args[2];
lean_object* v___x_2391_ = _args[3];
lean_object* v_as_2392_ = _args[4];
lean_object* v_as_x27_2393_ = _args[5];
lean_object* v_b_2394_ = _args[6];
lean_object* v_a_2395_ = _args[7];
lean_object* v___y_2396_ = _args[8];
lean_object* v___y_2397_ = _args[9];
lean_object* v___y_2398_ = _args[10];
lean_object* v___y_2399_ = _args[11];
lean_object* v___y_2400_ = _args[12];
lean_object* v___y_2401_ = _args[13];
lean_object* v___y_2402_ = _args[14];
lean_object* v___y_2403_ = _args[15];
lean_object* v___y_2404_ = _args[16];
lean_object* v___y_2405_ = _args[17];
lean_object* v___y_2406_ = _args[18];
_start:
{
lean_object* v_res_2407_; 
v_res_2407_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_mbtc_spec__4(v_ctx_2388_, v_val_2389_, v___x_2390_, v___x_2391_, v_as_2392_, v_as_x27_2393_, v_b_2394_, v_a_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec(v_as_x27_2393_);
lean_dec(v_as_2392_);
return v_res_2407_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5(lean_object* v_00_u03b2_2408_, lean_object* v_m_2409_, lean_object* v_a_2410_, lean_object* v_b_2411_){
_start:
{
lean_object* v___x_2412_; 
v___x_2412_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5___redArg(v_m_2409_, v_a_2410_, v_b_2411_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10(lean_object* v_n_2413_, lean_object* v_as_2414_, lean_object* v_lo_2415_, lean_object* v_hi_2416_, lean_object* v_w_2417_, lean_object* v_hlo_2418_, lean_object* v_hhi_2419_){
_start:
{
lean_object* v___x_2420_; 
v___x_2420_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___redArg(v_n_2413_, v_as_2414_, v_lo_2415_, v_hi_2416_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10___boxed(lean_object* v_n_2421_, lean_object* v_as_2422_, lean_object* v_lo_2423_, lean_object* v_hi_2424_, lean_object* v_w_2425_, lean_object* v_hlo_2426_, lean_object* v_hhi_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10(v_n_2421_, v_as_2422_, v_lo_2423_, v_hi_2424_, v_w_2425_, v_hlo_2426_, v_hhi_2427_);
lean_dec(v_hi_2424_);
lean_dec(v_n_2421_);
return v_res_2428_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2(lean_object* v_00_u03b2_2429_, lean_object* v_a_2430_, lean_object* v_x_2431_){
_start:
{
uint8_t v___x_2432_; 
v___x_2432_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2___redArg(v_a_2430_, v_x_2431_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2433_, lean_object* v_a_2434_, lean_object* v_x_2435_){
_start:
{
uint8_t v_res_2436_; lean_object* v_r_2437_; 
v_res_2436_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__2(v_00_u03b2_2433_, v_a_2434_, v_x_2435_);
lean_dec(v_x_2435_);
lean_dec_ref(v_a_2434_);
v_r_2437_ = lean_box(v_res_2436_);
return v_r_2437_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3(lean_object* v_00_u03b2_2438_, lean_object* v_data_2439_){
_start:
{
lean_object* v___x_2440_; 
v___x_2440_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3___redArg(v_data_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5(lean_object* v_00_u03b2_2441_, lean_object* v_a_2442_, lean_object* v_x_2443_){
_start:
{
lean_object* v___x_2444_; 
v___x_2444_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5___redArg(v_a_2442_, v_x_2443_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2445_, lean_object* v_a_2446_, lean_object* v_x_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Grind_mbtc_spec__2_spec__5(v_00_u03b2_2445_, v_a_2446_, v_x_2447_);
lean_dec(v_x_2447_);
lean_dec_ref(v_a_2446_);
return v_res_2448_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9(lean_object* v_00_u03b2_2449_, lean_object* v_a_2450_, lean_object* v_x_2451_){
_start:
{
uint8_t v___x_2452_; 
v___x_2452_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9___redArg(v_a_2450_, v_x_2451_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9___boxed(lean_object* v_00_u03b2_2453_, lean_object* v_a_2454_, lean_object* v_x_2455_){
_start:
{
uint8_t v_res_2456_; lean_object* v_r_2457_; 
v_res_2456_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__9(v_00_u03b2_2453_, v_a_2454_, v_x_2455_);
lean_dec(v_x_2455_);
lean_dec_ref(v_a_2454_);
v_r_2457_ = lean_box(v_res_2456_);
return v_r_2457_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10(lean_object* v_00_u03b2_2458_, lean_object* v_data_2459_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10___redArg(v_data_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__11(lean_object* v_00_u03b2_2461_, lean_object* v_a_2462_, lean_object* v_b_2463_, lean_object* v_x_2464_){
_start:
{
lean_object* v___x_2465_; 
v___x_2465_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__11___redArg(v_a_2462_, v_b_2463_, v_x_2464_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20(lean_object* v_n_2466_, lean_object* v_lo_2467_, lean_object* v_hi_2468_, lean_object* v_hhi_2469_, lean_object* v_pivot_2470_, lean_object* v_as_2471_, lean_object* v_i_2472_, lean_object* v_k_2473_, lean_object* v_ilo_2474_, lean_object* v_ik_2475_, lean_object* v_w_2476_){
_start:
{
lean_object* v___x_2477_; 
v___x_2477_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20___redArg(v_hi_2468_, v_pivot_2470_, v_as_2471_, v_i_2472_, v_k_2473_);
return v___x_2477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20___boxed(lean_object* v_n_2478_, lean_object* v_lo_2479_, lean_object* v_hi_2480_, lean_object* v_hhi_2481_, lean_object* v_pivot_2482_, lean_object* v_as_2483_, lean_object* v_i_2484_, lean_object* v_k_2485_, lean_object* v_ilo_2486_, lean_object* v_ik_2487_, lean_object* v_w_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Grind_mbtc_spec__10_spec__20(v_n_2478_, v_lo_2479_, v_hi_2480_, v_hhi_2481_, v_pivot_2482_, v_as_2483_, v_i_2484_, v_k_2485_, v_ilo_2486_, v_ik_2487_, v_w_2488_);
lean_dec_ref(v_pivot_2482_);
lean_dec(v_hi_2480_);
lean_dec(v_lo_2479_);
lean_dec(v_n_2478_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_2490_, lean_object* v_i_2491_, lean_object* v_source_2492_, lean_object* v_target_2493_){
_start:
{
lean_object* v___x_2494_; 
v___x_2494_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4___redArg(v_i_2491_, v_source_2492_, v_target_2493_);
return v___x_2494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12(lean_object* v_00_u03b2_2495_, lean_object* v_i_2496_, lean_object* v_source_2497_, lean_object* v_target_2498_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12___redArg(v_i_2496_, v_source_2497_, v_target_2498_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4_spec__16(lean_object* v_00_u03b2_2500_, lean_object* v_x_2501_, lean_object* v_x_2502_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Meta_Grind_mbtc_spec__1_spec__3_spec__4_spec__16___redArg(v_x_2501_, v_x_2502_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12_spec__21(lean_object* v_00_u03b2_2504_, lean_object* v_x_2505_, lean_object* v_x_2506_){
_start:
{
lean_object* v___x_2507_; 
v___x_2507_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_mbtc_spec__5_spec__10_spec__12_spec__21___redArg(v_x_2505_, v_x_2506_);
return v___x_2507_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_CastLike(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_MBTC(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_CastLike(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark = _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_mainMark);
l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark = _init_l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_MBTC_0__Lean_Meta_Grind_otherMark);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_MBTC(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_CastLike(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_MBTC(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_CastLike(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_MBTC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_MBTC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_MBTC(builtin);
}
#ifdef __cplusplus
}
#endif

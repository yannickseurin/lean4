// Lean compiler output
// Module: Lean.Compiler.LCNF.Probing
// Imports: public import Lean.Compiler.LCNF.PhaseExt
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_size(uint8_t, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_getJps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_getJps___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_getJps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "probe"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(210, 226, 36, 16, 11, 213, 189, 181)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(60, 150, 55, 23, 179, 120, 143, 48)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Probing"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Probe"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_instMonadEIO___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0);
v___x_3_ = l_StateRefT_x27_instMonad___redArg(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg(lean_object* v_f_8_, lean_object* v_data_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_){
_start:
{
lean_object* v___x_15_; lean_object* v_toApplicative_16_; lean_object* v_toFunctor_17_; lean_object* v_toSeq_18_; lean_object* v_toSeqLeft_19_; lean_object* v_toSeqRight_20_; lean_object* v___f_21_; lean_object* v___f_22_; lean_object* v___f_23_; lean_object* v___f_24_; lean_object* v___x_25_; lean_object* v___f_26_; lean_object* v___f_27_; lean_object* v___f_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v_toApplicative_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_65_; 
v___x_15_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_16_ = lean_ctor_get(v___x_15_, 0);
v_toFunctor_17_ = lean_ctor_get(v_toApplicative_16_, 0);
v_toSeq_18_ = lean_ctor_get(v_toApplicative_16_, 2);
v_toSeqLeft_19_ = lean_ctor_get(v_toApplicative_16_, 3);
v_toSeqRight_20_ = lean_ctor_get(v_toApplicative_16_, 4);
v___f_21_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_22_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_17_, 2);
v___f_23_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_23_, 0, v_toFunctor_17_);
v___f_24_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_24_, 0, v_toFunctor_17_);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___f_23_);
lean_ctor_set(v___x_25_, 1, v___f_24_);
lean_inc(v_toSeqRight_20_);
v___f_26_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_26_, 0, v_toSeqRight_20_);
lean_inc(v_toSeqLeft_19_);
v___f_27_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_27_, 0, v_toSeqLeft_19_);
lean_inc(v_toSeq_18_);
v___f_28_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_28_, 0, v_toSeq_18_);
v___x_29_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_29_, 0, v___x_25_);
lean_ctor_set(v___x_29_, 1, v___f_21_);
lean_ctor_set(v___x_29_, 2, v___f_28_);
lean_ctor_set(v___x_29_, 3, v___f_27_);
lean_ctor_set(v___x_29_, 4, v___f_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___f_22_);
v___x_31_ = l_StateRefT_x27_instMonad___redArg(v___x_30_);
v_toApplicative_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; 
v_unused_66_ = lean_ctor_get(v___x_31_, 1);
lean_dec(v_unused_66_);
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_65_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_toApplicative_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_65_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v_toFunctor_36_; lean_object* v_toSeq_37_; lean_object* v_toSeqLeft_38_; lean_object* v_toSeqRight_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_63_; 
v_toFunctor_36_ = lean_ctor_get(v_toApplicative_32_, 0);
v_toSeq_37_ = lean_ctor_get(v_toApplicative_32_, 2);
v_toSeqLeft_38_ = lean_ctor_get(v_toApplicative_32_, 3);
v_toSeqRight_39_ = lean_ctor_get(v_toApplicative_32_, 4);
v_isSharedCheck_63_ = !lean_is_exclusive(v_toApplicative_32_);
if (v_isSharedCheck_63_ == 0)
{
lean_object* v_unused_64_; 
v_unused_64_ = lean_ctor_get(v_toApplicative_32_, 1);
lean_dec(v_unused_64_);
v___x_41_ = v_toApplicative_32_;
v_isShared_42_ = v_isSharedCheck_63_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_toSeqRight_39_);
lean_inc(v_toSeqLeft_38_);
lean_inc(v_toSeq_37_);
lean_inc(v_toFunctor_36_);
lean_dec(v_toApplicative_32_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_63_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___f_43_; lean_object* v___f_44_; lean_object* v___f_45_; lean_object* v___f_46_; lean_object* v___x_47_; lean_object* v___f_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___x_52_; 
v___f_43_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_44_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_36_);
v___f_45_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_45_, 0, v_toFunctor_36_);
v___f_46_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_46_, 0, v_toFunctor_36_);
v___x_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_47_, 0, v___f_45_);
lean_ctor_set(v___x_47_, 1, v___f_46_);
v___f_48_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_48_, 0, v_toSeqRight_39_);
v___f_49_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_49_, 0, v_toSeqLeft_38_);
v___f_50_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_50_, 0, v_toSeq_37_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 4, v___f_48_);
lean_ctor_set(v___x_41_, 3, v___f_49_);
lean_ctor_set(v___x_41_, 2, v___f_50_);
lean_ctor_set(v___x_41_, 1, v___f_43_);
lean_ctor_set(v___x_41_, 0, v___x_47_);
v___x_52_ = v___x_41_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v___x_47_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v___f_43_);
lean_ctor_set(v_reuseFailAlloc_62_, 2, v___f_50_);
lean_ctor_set(v_reuseFailAlloc_62_, 3, v___f_49_);
lean_ctor_set(v_reuseFailAlloc_62_, 4, v___f_48_);
v___x_52_ = v_reuseFailAlloc_62_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_54_; 
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 1, v___f_44_);
lean_ctor_set(v___x_34_, 0, v___x_52_);
v___x_54_ = v___x_34_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v___x_52_);
lean_ctor_set(v_reuseFailAlloc_61_, 1, v___f_44_);
v___x_54_ = v_reuseFailAlloc_61_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
size_t v_sz_55_; size_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_35__overap_59_; lean_object* v___x_60_; 
v_sz_55_ = lean_array_size(v_data_9_);
v___x_56_ = ((size_t)0ULL);
v___x_57_ = l_unsafeCast___redArg(v_data_9_);
v___x_58_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_54_, v_f_8_, v_sz_55_, v___x_56_, v___x_57_);
v___x_35__overap_59_ = l_unsafeCast___redArg(v___x_58_);
lean_dec(v___x_58_);
lean_inc(v_a_13_);
lean_inc_ref(v_a_12_);
lean_inc(v_a_11_);
lean_inc_ref(v_a_10_);
v___x_60_ = lean_apply_5(v___x_35__overap_59_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, lean_box(0));
return v___x_60_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___boxed(lean_object* v_f_67_, lean_object* v_data_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Compiler_LCNF_Probe_map___redArg(v_f_67_, v_data_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec_ref(v_data_68_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map(lean_object* v_00_u03b1_75_, lean_object* v_00_u03b2_76_, lean_object* v_f_77_, lean_object* v_data_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v___x_84_; lean_object* v_toApplicative_85_; lean_object* v_toFunctor_86_; lean_object* v_toSeq_87_; lean_object* v_toSeqLeft_88_; lean_object* v_toSeqRight_89_; lean_object* v___f_90_; lean_object* v___f_91_; lean_object* v___f_92_; lean_object* v___f_93_; lean_object* v___x_94_; lean_object* v___f_95_; lean_object* v___f_96_; lean_object* v___f_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v_toApplicative_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_134_; 
v___x_84_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_85_ = lean_ctor_get(v___x_84_, 0);
v_toFunctor_86_ = lean_ctor_get(v_toApplicative_85_, 0);
v_toSeq_87_ = lean_ctor_get(v_toApplicative_85_, 2);
v_toSeqLeft_88_ = lean_ctor_get(v_toApplicative_85_, 3);
v_toSeqRight_89_ = lean_ctor_get(v_toApplicative_85_, 4);
v___f_90_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_91_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_86_, 2);
v___f_92_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_92_, 0, v_toFunctor_86_);
v___f_93_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_93_, 0, v_toFunctor_86_);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v___f_92_);
lean_ctor_set(v___x_94_, 1, v___f_93_);
lean_inc(v_toSeqRight_89_);
v___f_95_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_95_, 0, v_toSeqRight_89_);
lean_inc(v_toSeqLeft_88_);
v___f_96_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_96_, 0, v_toSeqLeft_88_);
lean_inc(v_toSeq_87_);
v___f_97_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_97_, 0, v_toSeq_87_);
v___x_98_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_98_, 0, v___x_94_);
lean_ctor_set(v___x_98_, 1, v___f_90_);
lean_ctor_set(v___x_98_, 2, v___f_97_);
lean_ctor_set(v___x_98_, 3, v___f_96_);
lean_ctor_set(v___x_98_, 4, v___f_95_);
v___x_99_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set(v___x_99_, 1, v___f_91_);
v___x_100_ = l_StateRefT_x27_instMonad___redArg(v___x_99_);
v_toApplicative_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_134_ == 0)
{
lean_object* v_unused_135_; 
v_unused_135_ = lean_ctor_get(v___x_100_, 1);
lean_dec(v_unused_135_);
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_134_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_toApplicative_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_134_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v_toFunctor_105_; lean_object* v_toSeq_106_; lean_object* v_toSeqLeft_107_; lean_object* v_toSeqRight_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_132_; 
v_toFunctor_105_ = lean_ctor_get(v_toApplicative_101_, 0);
v_toSeq_106_ = lean_ctor_get(v_toApplicative_101_, 2);
v_toSeqLeft_107_ = lean_ctor_get(v_toApplicative_101_, 3);
v_toSeqRight_108_ = lean_ctor_get(v_toApplicative_101_, 4);
v_isSharedCheck_132_ = !lean_is_exclusive(v_toApplicative_101_);
if (v_isSharedCheck_132_ == 0)
{
lean_object* v_unused_133_; 
v_unused_133_ = lean_ctor_get(v_toApplicative_101_, 1);
lean_dec(v_unused_133_);
v___x_110_ = v_toApplicative_101_;
v_isShared_111_ = v_isSharedCheck_132_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_toSeqRight_108_);
lean_inc(v_toSeqLeft_107_);
lean_inc(v_toSeq_106_);
lean_inc(v_toFunctor_105_);
lean_dec(v_toApplicative_101_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_132_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___f_114_; lean_object* v___f_115_; lean_object* v___x_116_; lean_object* v___f_117_; lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___x_121_; 
v___f_112_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_113_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_105_);
v___f_114_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_114_, 0, v_toFunctor_105_);
v___f_115_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_115_, 0, v_toFunctor_105_);
v___x_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_116_, 0, v___f_114_);
lean_ctor_set(v___x_116_, 1, v___f_115_);
v___f_117_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_117_, 0, v_toSeqRight_108_);
v___f_118_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_118_, 0, v_toSeqLeft_107_);
v___f_119_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_119_, 0, v_toSeq_106_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 4, v___f_117_);
lean_ctor_set(v___x_110_, 3, v___f_118_);
lean_ctor_set(v___x_110_, 2, v___f_119_);
lean_ctor_set(v___x_110_, 1, v___f_112_);
lean_ctor_set(v___x_110_, 0, v___x_116_);
v___x_121_ = v___x_110_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_116_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v___f_112_);
lean_ctor_set(v_reuseFailAlloc_131_, 2, v___f_119_);
lean_ctor_set(v_reuseFailAlloc_131_, 3, v___f_118_);
lean_ctor_set(v_reuseFailAlloc_131_, 4, v___f_117_);
v___x_121_ = v_reuseFailAlloc_131_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
lean_object* v___x_123_; 
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v___f_113_);
lean_ctor_set(v___x_103_, 0, v___x_121_);
v___x_123_ = v___x_103_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_121_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v___f_113_);
v___x_123_ = v_reuseFailAlloc_130_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
size_t v_sz_124_; size_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_64__overap_128_; lean_object* v___x_129_; 
v_sz_124_ = lean_array_size(v_data_78_);
v___x_125_ = ((size_t)0ULL);
v___x_126_ = l_unsafeCast___redArg(v_data_78_);
v___x_127_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_123_, v_f_77_, v_sz_124_, v___x_125_, v___x_126_);
v___x_64__overap_128_ = l_unsafeCast___redArg(v___x_127_);
lean_dec(v___x_127_);
lean_inc(v_a_82_);
lean_inc_ref(v_a_81_);
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
v___x_129_ = lean_apply_5(v___x_64__overap_128_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, lean_box(0));
return v___x_129_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___boxed(lean_object* v_00_u03b1_136_, lean_object* v_00_u03b2_137_, lean_object* v_f_138_, lean_object* v_data_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Compiler_LCNF_Probe_map(v_00_u03b1_136_, v_00_u03b2_137_, v_f_138_, v_data_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
lean_dec_ref(v_data_139_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(lean_object* v_f_146_, lean_object* v_acc_147_, lean_object* v_a_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v___x_154_; 
lean_inc(v___y_152_);
lean_inc_ref(v___y_151_);
lean_inc(v___y_150_);
lean_inc_ref(v___y_149_);
lean_inc(v_a_148_);
v___x_154_ = lean_apply_6(v_f_146_, v_a_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, lean_box(0));
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_167_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_167_ == 0)
{
v___x_157_ = v___x_154_;
v_isShared_158_ = v_isSharedCheck_167_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_a_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_167_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
uint8_t v___x_159_; 
v___x_159_ = lean_unbox(v_a_155_);
lean_dec(v_a_155_);
if (v___x_159_ == 0)
{
lean_object* v___x_161_; 
lean_dec(v_a_148_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v_acc_147_);
v___x_161_ = v___x_157_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_acc_147_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
else
{
lean_object* v___x_163_; lean_object* v___x_165_; 
v___x_163_ = lean_array_push(v_acc_147_, v_a_148_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v___x_163_);
v___x_165_ = v___x_157_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
else
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
lean_dec(v_a_148_);
lean_dec_ref(v_acc_147_);
v_a_168_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v___x_154_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_154_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_168_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed(lean_object* v_f_176_, lean_object* v_acc_177_, lean_object* v_a_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(v_f_176_, v_acc_177_, v_a_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
lean_dec(v___y_180_);
lean_dec_ref(v___y_179_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg(lean_object* v_f_187_, lean_object* v_data_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___x_194_; lean_object* v_toApplicative_195_; lean_object* v_toFunctor_196_; lean_object* v_toSeq_197_; lean_object* v_toSeqLeft_198_; lean_object* v_toSeqRight_199_; lean_object* v___f_200_; lean_object* v___f_201_; lean_object* v___f_202_; lean_object* v___f_203_; lean_object* v___x_204_; lean_object* v___f_205_; lean_object* v___f_206_; lean_object* v___f_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v_toApplicative_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_254_; 
v___x_194_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_195_ = lean_ctor_get(v___x_194_, 0);
v_toFunctor_196_ = lean_ctor_get(v_toApplicative_195_, 0);
v_toSeq_197_ = lean_ctor_get(v_toApplicative_195_, 2);
v_toSeqLeft_198_ = lean_ctor_get(v_toApplicative_195_, 3);
v_toSeqRight_199_ = lean_ctor_get(v_toApplicative_195_, 4);
v___f_200_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_201_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_196_, 2);
v___f_202_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_202_, 0, v_toFunctor_196_);
v___f_203_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_203_, 0, v_toFunctor_196_);
v___x_204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_204_, 0, v___f_202_);
lean_ctor_set(v___x_204_, 1, v___f_203_);
lean_inc(v_toSeqRight_199_);
v___f_205_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_205_, 0, v_toSeqRight_199_);
lean_inc(v_toSeqLeft_198_);
v___f_206_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_206_, 0, v_toSeqLeft_198_);
lean_inc(v_toSeq_197_);
v___f_207_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_207_, 0, v_toSeq_197_);
v___x_208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_208_, 0, v___x_204_);
lean_ctor_set(v___x_208_, 1, v___f_200_);
lean_ctor_set(v___x_208_, 2, v___f_207_);
lean_ctor_set(v___x_208_, 3, v___f_206_);
lean_ctor_set(v___x_208_, 4, v___f_205_);
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
lean_ctor_set(v___x_209_, 1, v___f_201_);
v___x_210_ = l_StateRefT_x27_instMonad___redArg(v___x_209_);
v_toApplicative_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_254_ == 0)
{
lean_object* v_unused_255_; 
v_unused_255_ = lean_ctor_get(v___x_210_, 1);
lean_dec(v_unused_255_);
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_254_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_toApplicative_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_254_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v_toFunctor_215_; lean_object* v_toSeq_216_; lean_object* v_toSeqLeft_217_; lean_object* v_toSeqRight_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_252_; 
v_toFunctor_215_ = lean_ctor_get(v_toApplicative_211_, 0);
v_toSeq_216_ = lean_ctor_get(v_toApplicative_211_, 2);
v_toSeqLeft_217_ = lean_ctor_get(v_toApplicative_211_, 3);
v_toSeqRight_218_ = lean_ctor_get(v_toApplicative_211_, 4);
v_isSharedCheck_252_ = !lean_is_exclusive(v_toApplicative_211_);
if (v_isSharedCheck_252_ == 0)
{
lean_object* v_unused_253_; 
v_unused_253_ = lean_ctor_get(v_toApplicative_211_, 1);
lean_dec(v_unused_253_);
v___x_220_ = v_toApplicative_211_;
v_isShared_221_ = v_isSharedCheck_252_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_toSeqRight_218_);
lean_inc(v_toSeqLeft_217_);
lean_inc(v_toSeq_216_);
lean_inc(v_toFunctor_215_);
lean_dec(v_toApplicative_211_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_252_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___f_224_; lean_object* v___f_225_; lean_object* v___x_226_; lean_object* v___f_227_; lean_object* v___f_228_; lean_object* v___f_229_; lean_object* v___x_231_; 
v___f_222_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_223_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_215_);
v___f_224_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_224_, 0, v_toFunctor_215_);
v___f_225_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_225_, 0, v_toFunctor_215_);
v___x_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_226_, 0, v___f_224_);
lean_ctor_set(v___x_226_, 1, v___f_225_);
v___f_227_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_227_, 0, v_toSeqRight_218_);
v___f_228_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_228_, 0, v_toSeqLeft_217_);
v___f_229_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_229_, 0, v_toSeq_216_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 4, v___f_227_);
lean_ctor_set(v___x_220_, 3, v___f_228_);
lean_ctor_set(v___x_220_, 2, v___f_229_);
lean_ctor_set(v___x_220_, 1, v___f_222_);
lean_ctor_set(v___x_220_, 0, v___x_226_);
v___x_231_ = v___x_220_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v___f_222_);
lean_ctor_set(v_reuseFailAlloc_251_, 2, v___f_229_);
lean_ctor_set(v_reuseFailAlloc_251_, 3, v___f_228_);
lean_ctor_set(v_reuseFailAlloc_251_, 4, v___f_227_);
v___x_231_ = v_reuseFailAlloc_251_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_233_; 
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v___f_223_);
lean_ctor_set(v___x_213_, 0, v___x_231_);
v___x_233_ = v___x_213_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v___f_223_);
v___x_233_ = v_reuseFailAlloc_250_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; 
v___x_234_ = lean_unsigned_to_nat(0u);
v___x_235_ = lean_array_get_size(v_data_188_);
v___x_236_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0));
v___x_237_ = lean_nat_dec_lt(v___x_234_, v___x_235_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; 
lean_dec_ref(v___x_233_);
lean_dec_ref(v_data_188_);
lean_dec_ref(v_f_187_);
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_236_);
return v___x_238_;
}
else
{
lean_object* v___f_239_; uint8_t v___x_240_; 
v___f_239_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_239_, 0, v_f_187_);
v___x_240_ = lean_nat_dec_le(v___x_235_, v___x_235_);
if (v___x_240_ == 0)
{
if (v___x_237_ == 0)
{
lean_object* v___x_241_; 
lean_dec_ref(v___f_239_);
lean_dec_ref(v___x_233_);
lean_dec_ref(v_data_188_);
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_236_);
return v___x_241_;
}
else
{
size_t v___x_242_; size_t v___x_243_; lean_object* v___x_348__overap_244_; lean_object* v___x_245_; 
v___x_242_ = ((size_t)0ULL);
v___x_243_ = lean_usize_of_nat(v___x_235_);
v___x_348__overap_244_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_233_, v___f_239_, v_data_188_, v___x_242_, v___x_243_, v___x_236_);
lean_inc(v_a_192_);
lean_inc_ref(v_a_191_);
lean_inc(v_a_190_);
lean_inc_ref(v_a_189_);
v___x_245_ = lean_apply_5(v___x_348__overap_244_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, lean_box(0));
return v___x_245_;
}
}
else
{
size_t v___x_246_; size_t v___x_247_; lean_object* v___x_352__overap_248_; lean_object* v___x_249_; 
v___x_246_ = ((size_t)0ULL);
v___x_247_ = lean_usize_of_nat(v___x_235_);
v___x_352__overap_248_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_233_, v___f_239_, v_data_188_, v___x_246_, v___x_247_, v___x_236_);
lean_inc(v_a_192_);
lean_inc_ref(v_a_191_);
lean_inc(v_a_190_);
lean_inc_ref(v_a_189_);
v___x_249_ = lean_apply_5(v___x_352__overap_248_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, lean_box(0));
return v___x_249_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___boxed(lean_object* v_f_256_, lean_object* v_data_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_Compiler_LCNF_Probe_filter___redArg(v_f_256_, v_data_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_);
lean_dec(v_a_261_);
lean_dec_ref(v_a_260_);
lean_dec(v_a_259_);
lean_dec_ref(v_a_258_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter(lean_object* v_00_u03b1_264_, lean_object* v_f_265_, lean_object* v_data_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
lean_object* v___x_272_; lean_object* v_toApplicative_273_; lean_object* v_toFunctor_274_; lean_object* v_toSeq_275_; lean_object* v_toSeqLeft_276_; lean_object* v_toSeqRight_277_; lean_object* v___f_278_; lean_object* v___f_279_; lean_object* v___f_280_; lean_object* v___f_281_; lean_object* v___x_282_; lean_object* v___f_283_; lean_object* v___f_284_; lean_object* v___f_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v_toApplicative_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_332_; 
v___x_272_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_273_ = lean_ctor_get(v___x_272_, 0);
v_toFunctor_274_ = lean_ctor_get(v_toApplicative_273_, 0);
v_toSeq_275_ = lean_ctor_get(v_toApplicative_273_, 2);
v_toSeqLeft_276_ = lean_ctor_get(v_toApplicative_273_, 3);
v_toSeqRight_277_ = lean_ctor_get(v_toApplicative_273_, 4);
v___f_278_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_279_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_274_, 2);
v___f_280_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_280_, 0, v_toFunctor_274_);
v___f_281_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_281_, 0, v_toFunctor_274_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___f_280_);
lean_ctor_set(v___x_282_, 1, v___f_281_);
lean_inc(v_toSeqRight_277_);
v___f_283_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_283_, 0, v_toSeqRight_277_);
lean_inc(v_toSeqLeft_276_);
v___f_284_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_284_, 0, v_toSeqLeft_276_);
lean_inc(v_toSeq_275_);
v___f_285_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_285_, 0, v_toSeq_275_);
v___x_286_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_286_, 0, v___x_282_);
lean_ctor_set(v___x_286_, 1, v___f_278_);
lean_ctor_set(v___x_286_, 2, v___f_285_);
lean_ctor_set(v___x_286_, 3, v___f_284_);
lean_ctor_set(v___x_286_, 4, v___f_283_);
v___x_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___f_279_);
v___x_288_ = l_StateRefT_x27_instMonad___redArg(v___x_287_);
v_toApplicative_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; 
v_unused_333_ = lean_ctor_get(v___x_288_, 1);
lean_dec(v_unused_333_);
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_332_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_toApplicative_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_332_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v_toFunctor_293_; lean_object* v_toSeq_294_; lean_object* v_toSeqLeft_295_; lean_object* v_toSeqRight_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_330_; 
v_toFunctor_293_ = lean_ctor_get(v_toApplicative_289_, 0);
v_toSeq_294_ = lean_ctor_get(v_toApplicative_289_, 2);
v_toSeqLeft_295_ = lean_ctor_get(v_toApplicative_289_, 3);
v_toSeqRight_296_ = lean_ctor_get(v_toApplicative_289_, 4);
v_isSharedCheck_330_ = !lean_is_exclusive(v_toApplicative_289_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; 
v_unused_331_ = lean_ctor_get(v_toApplicative_289_, 1);
lean_dec(v_unused_331_);
v___x_298_ = v_toApplicative_289_;
v_isShared_299_ = v_isSharedCheck_330_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_toSeqRight_296_);
lean_inc(v_toSeqLeft_295_);
lean_inc(v_toSeq_294_);
lean_inc(v_toFunctor_293_);
lean_dec(v_toApplicative_289_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_330_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___f_300_; lean_object* v___f_301_; lean_object* v___f_302_; lean_object* v___f_303_; lean_object* v___x_304_; lean_object* v___f_305_; lean_object* v___f_306_; lean_object* v___f_307_; lean_object* v___x_309_; 
v___f_300_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_301_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_293_);
v___f_302_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_302_, 0, v_toFunctor_293_);
v___f_303_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_303_, 0, v_toFunctor_293_);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v___f_302_);
lean_ctor_set(v___x_304_, 1, v___f_303_);
v___f_305_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_305_, 0, v_toSeqRight_296_);
v___f_306_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_306_, 0, v_toSeqLeft_295_);
v___f_307_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_307_, 0, v_toSeq_294_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 4, v___f_305_);
lean_ctor_set(v___x_298_, 3, v___f_306_);
lean_ctor_set(v___x_298_, 2, v___f_307_);
lean_ctor_set(v___x_298_, 1, v___f_300_);
lean_ctor_set(v___x_298_, 0, v___x_304_);
v___x_309_ = v___x_298_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_304_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v___f_300_);
lean_ctor_set(v_reuseFailAlloc_329_, 2, v___f_307_);
lean_ctor_set(v_reuseFailAlloc_329_, 3, v___f_306_);
lean_ctor_set(v_reuseFailAlloc_329_, 4, v___f_305_);
v___x_309_ = v_reuseFailAlloc_329_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_311_; 
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v___f_301_);
lean_ctor_set(v___x_291_, 0, v___x_309_);
v___x_311_ = v___x_291_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v___f_301_);
v___x_311_ = v_reuseFailAlloc_328_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_312_ = lean_unsigned_to_nat(0u);
v___x_313_ = lean_array_get_size(v_data_266_);
v___x_314_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0));
v___x_315_ = lean_nat_dec_lt(v___x_312_, v___x_313_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; 
lean_dec_ref(v___x_311_);
lean_dec_ref(v_data_266_);
lean_dec_ref(v_f_265_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_314_);
return v___x_316_;
}
else
{
lean_object* v___f_317_; uint8_t v___x_318_; 
v___f_317_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_317_, 0, v_f_265_);
v___x_318_ = lean_nat_dec_le(v___x_313_, v___x_313_);
if (v___x_318_ == 0)
{
if (v___x_315_ == 0)
{
lean_object* v___x_319_; 
lean_dec_ref(v___f_317_);
lean_dec_ref(v___x_311_);
lean_dec_ref(v_data_266_);
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_314_);
return v___x_319_;
}
else
{
size_t v___x_320_; size_t v___x_321_; lean_object* v___x_436__overap_322_; lean_object* v___x_323_; 
v___x_320_ = ((size_t)0ULL);
v___x_321_ = lean_usize_of_nat(v___x_313_);
v___x_436__overap_322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_311_, v___f_317_, v_data_266_, v___x_320_, v___x_321_, v___x_314_);
lean_inc(v_a_270_);
lean_inc_ref(v_a_269_);
lean_inc(v_a_268_);
lean_inc_ref(v_a_267_);
v___x_323_ = lean_apply_5(v___x_436__overap_322_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, lean_box(0));
return v___x_323_;
}
}
else
{
size_t v___x_324_; size_t v___x_325_; lean_object* v___x_439__overap_326_; lean_object* v___x_327_; 
v___x_324_ = ((size_t)0ULL);
v___x_325_ = lean_usize_of_nat(v___x_313_);
v___x_439__overap_326_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_311_, v___f_317_, v_data_266_, v___x_324_, v___x_325_, v___x_314_);
lean_inc(v_a_270_);
lean_inc_ref(v_a_269_);
lean_inc(v_a_268_);
lean_inc_ref(v_a_267_);
v___x_327_ = lean_apply_5(v___x_439__overap_326_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, lean_box(0));
return v___x_327_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___boxed(lean_object* v_00_u03b1_334_, lean_object* v_f_335_, lean_object* v_data_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_Compiler_LCNF_Probe_filter(v_00_u03b1_334_, v_f_335_, v_data_336_, v_a_337_, v_a_338_, v_a_339_, v_a_340_);
lean_dec(v_a_340_);
lean_dec_ref(v_a_339_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
return v_res_342_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(lean_object* v_inst_343_, lean_object* v_x1_344_, lean_object* v_x2_345_){
_start:
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_apply_2(v_inst_343_, v_x1_344_, v_x2_345_);
v___x_347_ = lean_unbox(v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed(lean_object* v_inst_348_, lean_object* v_x1_349_, lean_object* v_x2_350_){
_start:
{
uint8_t v_res_351_; lean_object* v_r_352_; 
v_res_351_ = l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(v_inst_348_, v_x1_349_, v_x2_350_);
v_r_352_ = lean_box(v_res_351_);
return v_r_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg(lean_object* v_inst_353_, lean_object* v_data_354_){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_356_ = lean_array_get_size(v_data_354_);
v___x_357_ = lean_unsigned_to_nat(0u);
v___x_358_ = lean_nat_dec_eq(v___x_356_, v___x_357_);
if (v___x_358_ == 0)
{
lean_object* v___f_359_; lean_object* v___y_361_; lean_object* v___y_362_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___y_368_; uint8_t v___x_370_; 
v___f_359_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_359_, 0, v_inst_353_);
v___x_365_ = lean_unsigned_to_nat(1u);
v___x_366_ = lean_nat_sub(v___x_356_, v___x_365_);
v___x_370_ = lean_nat_dec_le(v___x_357_, v___x_366_);
if (v___x_370_ == 0)
{
lean_inc(v___x_366_);
v___y_368_ = v___x_366_;
goto v___jp_367_;
}
else
{
v___y_368_ = v___x_357_;
goto v___jp_367_;
}
v___jp_360_:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_359_, v___x_356_, v_data_354_, v___y_361_, v___y_362_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_362_);
v___x_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
v___jp_367_:
{
uint8_t v___x_369_; 
v___x_369_ = lean_nat_dec_le(v___y_368_, v___x_366_);
if (v___x_369_ == 0)
{
lean_dec(v___x_366_);
lean_inc(v___y_368_);
v___y_361_ = v___y_368_;
v___y_362_ = v___y_368_;
goto v___jp_360_;
}
else
{
v___y_361_ = v___y_368_;
v___y_362_ = v___x_366_;
goto v___jp_360_;
}
}
}
else
{
lean_object* v___x_371_; 
lean_dec_ref(v_inst_353_);
v___x_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_371_, 0, v_data_354_);
return v___x_371_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___boxed(lean_object* v_inst_372_, lean_object* v_data_373_, lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_Compiler_LCNF_Probe_sorted___redArg(v_inst_372_, v_data_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted(lean_object* v_00_u03b1_376_, lean_object* v_inst_377_, lean_object* v_inst_378_, lean_object* v_inst_379_, lean_object* v_data_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_386_ = lean_array_get_size(v_data_380_);
v___x_387_ = lean_unsigned_to_nat(0u);
v___x_388_ = lean_nat_dec_eq(v___x_386_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___f_389_; lean_object* v___y_391_; lean_object* v___y_392_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___y_398_; uint8_t v___x_400_; 
v___f_389_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_389_, 0, v_inst_379_);
v___x_395_ = lean_unsigned_to_nat(1u);
v___x_396_ = lean_nat_sub(v___x_386_, v___x_395_);
v___x_400_ = lean_nat_dec_le(v___x_387_, v___x_396_);
if (v___x_400_ == 0)
{
lean_inc(v___x_396_);
v___y_398_ = v___x_396_;
goto v___jp_397_;
}
else
{
v___y_398_ = v___x_387_;
goto v___jp_397_;
}
v___jp_390_:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_389_, v___x_386_, v_data_380_, v___y_391_, v___y_392_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_392_);
v___x_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
return v___x_394_;
}
v___jp_397_:
{
uint8_t v___x_399_; 
v___x_399_ = lean_nat_dec_le(v___y_398_, v___x_396_);
if (v___x_399_ == 0)
{
lean_dec(v___x_396_);
lean_inc(v___y_398_);
v___y_391_ = v___y_398_;
v___y_392_ = v___y_398_;
goto v___jp_390_;
}
else
{
v___y_391_ = v___y_398_;
v___y_392_ = v___x_396_;
goto v___jp_390_;
}
}
}
else
{
lean_object* v___x_401_; 
lean_dec_ref(v_inst_379_);
v___x_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_401_, 0, v_data_380_);
return v___x_401_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___boxed(lean_object* v_00_u03b1_402_, lean_object* v_inst_403_, lean_object* v_inst_404_, lean_object* v_inst_405_, lean_object* v_data_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lean_Compiler_LCNF_Probe_sorted(v_00_u03b1_402_, v_inst_403_, v_inst_404_, v_inst_405_, v_data_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec(v_inst_403_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(uint8_t v_pu_413_, lean_object* v_x_414_){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = l_Lean_Compiler_LCNF_Decl_size(v_pu_413_, v_x_414_);
v___x_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
lean_ctor_set(v___x_416_, 1, v_x_414_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed(lean_object* v_pu_417_, lean_object* v_x_418_){
_start:
{
uint8_t v_pu_boxed_419_; lean_object* v_res_420_; 
v_pu_boxed_419_ = lean_unbox(v_pu_417_);
v_res_420_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(v_pu_boxed_419_, v_x_418_);
return v_res_420_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(lean_object* v_x_421_, lean_object* v_x_422_){
_start:
{
lean_object* v_fst_423_; lean_object* v_snd_424_; lean_object* v_fst_425_; lean_object* v_snd_426_; uint8_t v___x_427_; 
v_fst_423_ = lean_ctor_get(v_x_421_, 0);
v_snd_424_ = lean_ctor_get(v_x_421_, 1);
v_fst_425_ = lean_ctor_get(v_x_422_, 0);
v_snd_426_ = lean_ctor_get(v_x_422_, 1);
v___x_427_ = lean_nat_dec_eq(v_fst_423_, v_fst_425_);
if (v___x_427_ == 0)
{
uint8_t v___x_428_; 
v___x_428_ = lean_nat_dec_lt(v_fst_423_, v_fst_425_);
return v___x_428_;
}
else
{
lean_object* v_toSignature_429_; lean_object* v_toSignature_430_; lean_object* v_name_431_; lean_object* v_name_432_; uint8_t v___x_433_; 
v_toSignature_429_ = lean_ctor_get(v_snd_424_, 0);
v_toSignature_430_ = lean_ctor_get(v_snd_426_, 0);
v_name_431_ = lean_ctor_get(v_toSignature_429_, 0);
v_name_432_ = lean_ctor_get(v_toSignature_430_, 0);
v___x_433_ = l_Lean_Name_lt(v_name_431_, v_name_432_);
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed(lean_object* v_x_434_, lean_object* v_x_435_){
_start:
{
uint8_t v_res_436_; lean_object* v_r_437_; 
v_res_436_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(v_x_434_, v_x_435_);
lean_dec_ref(v_x_435_);
lean_dec_ref(v_x_434_);
v_r_437_ = lean_box(v_res_436_);
return v_r_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(uint8_t v_pu_458_, lean_object* v_decls_459_){
_start:
{
lean_object* v___x_461_; lean_object* v___f_462_; lean_object* v___x_463_; size_t v_sz_464_; size_t v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v_decls_468_; lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_461_ = lean_box(v_pu_458_);
v___f_462_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_462_, 0, v___x_461_);
v___x_463_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v_sz_464_ = lean_array_size(v_decls_459_);
v___x_465_ = ((size_t)0ULL);
v___x_466_ = l_unsafeCast___redArg(v_decls_459_);
v___x_467_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_463_, v___f_462_, v_sz_464_, v___x_465_, v___x_466_);
v_decls_468_ = l_unsafeCast___redArg(v___x_467_);
lean_dec(v___x_467_);
v___x_469_ = lean_array_get_size(v_decls_468_);
v___x_470_ = lean_unsigned_to_nat(0u);
v___x_471_ = lean_nat_dec_eq(v___x_469_, v___x_470_);
if (v___x_471_ == 0)
{
lean_object* v___f_472_; lean_object* v___y_474_; lean_object* v___y_475_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___y_481_; uint8_t v___x_483_; 
v___f_472_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10));
v___x_478_ = lean_unsigned_to_nat(1u);
v___x_479_ = lean_nat_sub(v___x_469_, v___x_478_);
v___x_483_ = lean_nat_dec_le(v___x_470_, v___x_479_);
if (v___x_483_ == 0)
{
lean_inc(v___x_479_);
v___y_481_ = v___x_479_;
goto v___jp_480_;
}
else
{
v___y_481_ = v___x_470_;
goto v___jp_480_;
}
v___jp_473_:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_472_, v___x_469_, v_decls_468_, v___y_474_, v___y_475_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_475_);
v___x_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
return v___x_477_;
}
v___jp_480_:
{
uint8_t v___x_482_; 
v___x_482_ = lean_nat_dec_le(v___y_481_, v___x_479_);
if (v___x_482_ == 0)
{
lean_dec(v___x_479_);
lean_inc(v___y_481_);
v___y_474_ = v___y_481_;
v___y_475_ = v___y_481_;
goto v___jp_473_;
}
else
{
v___y_474_ = v___y_481_;
v___y_475_ = v___x_479_;
goto v___jp_473_;
}
}
}
else
{
lean_object* v___x_484_; 
v___x_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_484_, 0, v_decls_468_);
return v___x_484_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___boxed(lean_object* v_pu_485_, lean_object* v_decls_486_, lean_object* v_a_487_){
_start:
{
uint8_t v_pu_boxed_488_; lean_object* v_res_489_; 
v_pu_boxed_488_ = lean_unbox(v_pu_485_);
v_res_489_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(v_pu_boxed_488_, v_decls_486_);
lean_dec_ref(v_decls_486_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize(uint8_t v_pu_490_, lean_object* v_decls_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v___x_497_; lean_object* v___f_498_; lean_object* v___x_499_; size_t v_sz_500_; size_t v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v_decls_504_; lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_497_ = lean_box(v_pu_490_);
v___f_498_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_498_, 0, v___x_497_);
v___x_499_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v_sz_500_ = lean_array_size(v_decls_491_);
v___x_501_ = ((size_t)0ULL);
v___x_502_ = l_unsafeCast___redArg(v_decls_491_);
v___x_503_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_499_, v___f_498_, v_sz_500_, v___x_501_, v___x_502_);
v_decls_504_ = l_unsafeCast___redArg(v___x_503_);
lean_dec(v___x_503_);
v___x_505_ = lean_array_get_size(v_decls_504_);
v___x_506_ = lean_unsigned_to_nat(0u);
v___x_507_ = lean_nat_dec_eq(v___x_505_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___f_508_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___y_517_; uint8_t v___x_519_; 
v___f_508_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10));
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = lean_nat_sub(v___x_505_, v___x_514_);
v___x_519_ = lean_nat_dec_le(v___x_506_, v___x_515_);
if (v___x_519_ == 0)
{
lean_inc(v___x_515_);
v___y_517_ = v___x_515_;
goto v___jp_516_;
}
else
{
v___y_517_ = v___x_506_;
goto v___jp_516_;
}
v___jp_509_:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_508_, v___x_505_, v_decls_504_, v___y_510_, v___y_511_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_511_);
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
v___jp_516_:
{
uint8_t v___x_518_; 
v___x_518_ = lean_nat_dec_le(v___y_517_, v___x_515_);
if (v___x_518_ == 0)
{
lean_dec(v___x_515_);
lean_inc(v___y_517_);
v___y_510_ = v___y_517_;
v___y_511_ = v___y_517_;
goto v___jp_509_;
}
else
{
v___y_510_ = v___y_517_;
v___y_511_ = v___x_515_;
goto v___jp_509_;
}
}
}
else
{
lean_object* v___x_520_; 
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v_decls_504_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___boxed(lean_object* v_pu_521_, lean_object* v_decls_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_){
_start:
{
uint8_t v_pu_boxed_528_; lean_object* v_res_529_; 
v_pu_boxed_528_ = lean_unbox(v_pu_521_);
v_res_529_ = l_Lean_Compiler_LCNF_Probe_sortedBySize(v_pu_boxed_528_, v_decls_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
lean_dec_ref(v_decls_522_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(lean_object* v_inst_530_, lean_object* v_inst_531_, lean_object* v_a_532_, lean_object* v_x_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v___x_540_; 
lean_inc(v_a_532_);
lean_inc_ref(v_inst_531_);
lean_inc_ref(v_inst_530_);
v___x_540_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_530_, v_inst_531_, v___y_534_, v_a_532_);
if (lean_obj_tag(v___x_540_) == 1)
{
lean_object* v_val_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_552_; 
v_val_541_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_552_ == 0)
{
v___x_543_ = v___x_540_;
v_isShared_544_ = v_isSharedCheck_552_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_val_541_);
lean_dec(v___x_540_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_552_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_545_ = lean_unsigned_to_nat(1u);
v___x_546_ = lean_nat_add(v_val_541_, v___x_545_);
lean_dec(v_val_541_);
v___x_547_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_530_, v_inst_531_, v___y_534_, v_a_532_, v___x_546_);
if (v_isShared_544_ == 0)
{
lean_ctor_set(v___x_543_, 0, v___x_547_);
v___x_549_ = v___x_543_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_551_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_550_; 
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
}
else
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
lean_dec(v___x_540_);
v___x_553_ = lean_unsigned_to_nat(1u);
v___x_554_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_530_, v_inst_531_, v___y_534_, v_a_532_, v___x_553_);
v___x_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
return v___x_556_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed(lean_object* v_inst_557_, lean_object* v_inst_558_, lean_object* v_a_559_, lean_object* v_x_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(v_inst_557_, v_inst_558_, v_a_559_, v_x_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1(lean_object* v_x1_568_, lean_object* v_x2_569_, lean_object* v_x3_570_){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_571_, 0, v_x2_569_);
lean_ctor_set(v___x_571_, 1, v_x3_570_);
v___x_572_ = lean_array_push(v_x1_568_, v___x_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2(lean_object* v___x_573_, lean_object* v___f_574_, lean_object* v_acc_575_, lean_object* v_l_576_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_573_, v___f_574_, v_acc_575_, v_l_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg(lean_object* v_inst_582_, lean_object* v_inst_583_, lean_object* v_data_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_){
_start:
{
lean_object* v___x_590_; lean_object* v_toApplicative_591_; lean_object* v_toFunctor_592_; lean_object* v_toSeq_593_; lean_object* v_toSeqLeft_594_; lean_object* v_toSeqRight_595_; lean_object* v___f_596_; lean_object* v___f_597_; lean_object* v___f_598_; lean_object* v___f_599_; lean_object* v___x_600_; lean_object* v___f_601_; lean_object* v___f_602_; lean_object* v___f_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v_toApplicative_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_677_; 
v___x_590_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_591_ = lean_ctor_get(v___x_590_, 0);
v_toFunctor_592_ = lean_ctor_get(v_toApplicative_591_, 0);
v_toSeq_593_ = lean_ctor_get(v_toApplicative_591_, 2);
v_toSeqLeft_594_ = lean_ctor_get(v_toApplicative_591_, 3);
v_toSeqRight_595_ = lean_ctor_get(v_toApplicative_591_, 4);
v___f_596_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_597_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_592_, 2);
v___f_598_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_598_, 0, v_toFunctor_592_);
v___f_599_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_599_, 0, v_toFunctor_592_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___f_598_);
lean_ctor_set(v___x_600_, 1, v___f_599_);
lean_inc(v_toSeqRight_595_);
v___f_601_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_601_, 0, v_toSeqRight_595_);
lean_inc(v_toSeqLeft_594_);
v___f_602_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_602_, 0, v_toSeqLeft_594_);
lean_inc(v_toSeq_593_);
v___f_603_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_603_, 0, v_toSeq_593_);
v___x_604_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_604_, 0, v___x_600_);
lean_ctor_set(v___x_604_, 1, v___f_596_);
lean_ctor_set(v___x_604_, 2, v___f_603_);
lean_ctor_set(v___x_604_, 3, v___f_602_);
lean_ctor_set(v___x_604_, 4, v___f_601_);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
lean_ctor_set(v___x_605_, 1, v___f_597_);
v___x_606_ = l_StateRefT_x27_instMonad___redArg(v___x_605_);
v_toApplicative_607_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_677_ == 0)
{
lean_object* v_unused_678_; 
v_unused_678_ = lean_ctor_get(v___x_606_, 1);
lean_dec(v_unused_678_);
v___x_609_ = v___x_606_;
v_isShared_610_ = v_isSharedCheck_677_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_toApplicative_607_);
lean_dec(v___x_606_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_677_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v_toFunctor_611_; lean_object* v_toSeq_612_; lean_object* v_toSeqLeft_613_; lean_object* v_toSeqRight_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_675_; 
v_toFunctor_611_ = lean_ctor_get(v_toApplicative_607_, 0);
v_toSeq_612_ = lean_ctor_get(v_toApplicative_607_, 2);
v_toSeqLeft_613_ = lean_ctor_get(v_toApplicative_607_, 3);
v_toSeqRight_614_ = lean_ctor_get(v_toApplicative_607_, 4);
v_isSharedCheck_675_ = !lean_is_exclusive(v_toApplicative_607_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; 
v_unused_676_ = lean_ctor_get(v_toApplicative_607_, 1);
lean_dec(v_unused_676_);
v___x_616_ = v_toApplicative_607_;
v_isShared_617_ = v_isSharedCheck_675_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_toSeqRight_614_);
lean_inc(v_toSeqLeft_613_);
lean_inc(v_toSeq_612_);
lean_inc(v_toFunctor_611_);
lean_dec(v_toApplicative_607_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_675_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___f_618_; lean_object* v___f_619_; lean_object* v___f_620_; lean_object* v___f_621_; lean_object* v___f_622_; lean_object* v___x_623_; lean_object* v___f_624_; lean_object* v___f_625_; lean_object* v___f_626_; lean_object* v___x_628_; 
v___f_618_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_618_, 0, v_inst_582_);
lean_closure_set(v___f_618_, 1, v_inst_583_);
v___f_619_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_620_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_611_);
v___f_621_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_621_, 0, v_toFunctor_611_);
v___f_622_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_622_, 0, v_toFunctor_611_);
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v___f_621_);
lean_ctor_set(v___x_623_, 1, v___f_622_);
v___f_624_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_624_, 0, v_toSeqRight_614_);
v___f_625_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_625_, 0, v_toSeqLeft_613_);
v___f_626_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_626_, 0, v_toSeq_612_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 4, v___f_624_);
lean_ctor_set(v___x_616_, 3, v___f_625_);
lean_ctor_set(v___x_616_, 2, v___f_626_);
lean_ctor_set(v___x_616_, 1, v___f_619_);
lean_ctor_set(v___x_616_, 0, v___x_623_);
v___x_628_ = v___x_616_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v___f_619_);
lean_ctor_set(v_reuseFailAlloc_674_, 2, v___f_626_);
lean_ctor_set(v_reuseFailAlloc_674_, 3, v___f_625_);
lean_ctor_set(v_reuseFailAlloc_674_, 4, v___f_624_);
v___x_628_ = v_reuseFailAlloc_674_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_630_; 
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 1, v___f_620_);
lean_ctor_set(v___x_609_, 0, v___x_628_);
v___x_630_ = v___x_609_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v___f_620_);
v___x_630_ = v_reuseFailAlloc_673_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v_map_640_; size_t v_sz_641_; size_t v___x_642_; lean_object* v___x_720__overap_643_; lean_object* v___x_644_; 
v___x_631_ = lean_array_get_size(v_data_584_);
v___x_632_ = lean_unsigned_to_nat(0u);
v___x_633_ = lean_unsigned_to_nat(4u);
v___x_634_ = lean_nat_mul(v___x_631_, v___x_633_);
v___x_635_ = lean_unsigned_to_nat(3u);
v___x_636_ = lean_nat_div(v___x_634_, v___x_635_);
lean_dec(v___x_634_);
v___x_637_ = l_Nat_nextPowerOfTwo(v___x_636_);
lean_dec(v___x_636_);
v___x_638_ = lean_box(0);
v___x_639_ = lean_mk_array(v___x_637_, v___x_638_);
v_map_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_map_640_, 0, v___x_632_);
lean_ctor_set(v_map_640_, 1, v___x_639_);
v_sz_641_ = lean_array_size(v_data_584_);
v___x_642_ = ((size_t)0ULL);
v___x_720__overap_643_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_630_, v_data_584_, v___f_618_, v_sz_641_, v___x_642_, v_map_640_);
lean_inc(v_a_588_);
lean_inc_ref(v_a_587_);
lean_inc(v_a_586_);
lean_inc_ref(v_a_585_);
v___x_644_ = lean_apply_5(v___x_720__overap_643_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, lean_box(0));
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_664_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_664_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_664_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_664_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v_size_649_; lean_object* v_buckets_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; uint8_t v___x_654_; 
v_size_649_ = lean_ctor_get(v_a_645_, 0);
lean_inc(v_size_649_);
v_buckets_650_ = lean_ctor_get(v_a_645_, 1);
lean_inc_ref(v_buckets_650_);
lean_dec(v_a_645_);
v___x_651_ = lean_mk_empty_array_with_capacity(v_size_649_);
lean_dec(v_size_649_);
v___x_652_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v___x_653_ = lean_array_get_size(v_buckets_650_);
v___x_654_ = lean_nat_dec_lt(v___x_632_, v___x_653_);
if (v___x_654_ == 0)
{
lean_object* v___x_656_; 
lean_dec_ref(v_buckets_650_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v___x_651_);
v___x_656_ = v___x_647_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
else
{
lean_object* v___f_658_; size_t v___x_659_; lean_object* v___x_660_; lean_object* v___x_662_; 
v___f_658_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1));
v___x_659_ = lean_usize_of_nat(v___x_653_);
v___x_660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_652_, v___f_658_, v_buckets_650_, v___x_642_, v___x_659_, v___x_651_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v___x_660_);
v___x_662_ = v___x_647_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v___x_660_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
v_a_665_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_644_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_644_);
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___boxed(lean_object* v_inst_679_, lean_object* v_inst_680_, lean_object* v_data_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_679_, v_inst_680_, v_data_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
lean_dec(v_a_683_);
lean_dec_ref(v_a_682_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique(lean_object* v_00_u03b1_688_, lean_object* v_inst_689_, lean_object* v_inst_690_, lean_object* v_inst_691_, lean_object* v_data_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_690_, v_inst_691_, v_data_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___boxed(lean_object* v_00_u03b1_699_, lean_object* v_inst_700_, lean_object* v_inst_701_, lean_object* v_inst_702_, lean_object* v_data_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lean_Compiler_LCNF_Probe_countUnique(v_00_u03b1_699_, v_inst_700_, v_inst_701_, v_inst_702_, v_data_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
lean_dec_ref(v_inst_700_);
return v_res_709_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(lean_object* v_l_710_, lean_object* v_r_711_){
_start:
{
lean_object* v_snd_712_; lean_object* v_snd_713_; uint8_t v___x_714_; 
v_snd_712_ = lean_ctor_get(v_l_710_, 1);
v_snd_713_ = lean_ctor_get(v_r_711_, 1);
v___x_714_ = lean_nat_dec_lt(v_snd_712_, v_snd_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed(lean_object* v_l_715_, lean_object* v_r_716_){
_start:
{
uint8_t v_res_717_; lean_object* v_r_718_; 
v_res_717_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(v_l_715_, v_r_716_);
lean_dec_ref(v_r_716_);
lean_dec_ref(v_l_715_);
v_r_718_ = lean_box(v_res_717_);
return v_r_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(lean_object* v_inst_720_, lean_object* v_inst_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_){
_start:
{
lean_object* v___f_728_; lean_object* v___x_729_; 
v___f_728_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0));
v___x_729_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_720_, v_inst_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v___x_731_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___x_737_; uint8_t v___x_738_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_730_);
v___x_731_ = lean_array_get_size(v_a_730_);
v___x_737_ = lean_unsigned_to_nat(0u);
v___x_738_ = lean_nat_dec_eq(v___x_731_, v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___y_742_; uint8_t v___x_744_; 
lean_dec_ref_known(v___x_729_, 1);
v___x_739_ = lean_unsigned_to_nat(1u);
v___x_740_ = lean_nat_sub(v___x_731_, v___x_739_);
v___x_744_ = lean_nat_dec_le(v___x_737_, v___x_740_);
if (v___x_744_ == 0)
{
lean_inc(v___x_740_);
v___y_742_ = v___x_740_;
goto v___jp_741_;
}
else
{
v___y_742_ = v___x_737_;
goto v___jp_741_;
}
v___jp_741_:
{
uint8_t v___x_743_; 
v___x_743_ = lean_nat_dec_le(v___y_742_, v___x_740_);
if (v___x_743_ == 0)
{
lean_dec(v___x_740_);
lean_inc(v___y_742_);
v___y_733_ = v___y_742_;
v___y_734_ = v___y_742_;
goto v___jp_732_;
}
else
{
v___y_733_ = v___y_742_;
v___y_734_ = v___x_740_;
goto v___jp_732_;
}
}
}
else
{
lean_dec(v_a_730_);
return v___x_729_;
}
v___jp_732_:
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_728_, v___x_731_, v_a_730_, v___y_733_, v___y_734_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_734_);
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
return v___x_736_;
}
}
else
{
return v___x_729_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___boxed(lean_object* v_inst_745_, lean_object* v_inst_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(v_inst_745_, v_inst_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
lean_dec(v_a_751_);
lean_dec_ref(v_a_750_);
lean_dec(v_a_749_);
lean_dec_ref(v_a_748_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted(lean_object* v_00_u03b1_754_, lean_object* v_inst_755_, lean_object* v_inst_756_, lean_object* v_inst_757_, lean_object* v_inst_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v___f_765_; lean_object* v___x_766_; 
v___f_765_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0));
v___x_766_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_756_, v_inst_757_, v_a_759_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___x_774_; uint8_t v___x_775_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
v___x_768_ = lean_array_get_size(v_a_767_);
v___x_774_ = lean_unsigned_to_nat(0u);
v___x_775_ = lean_nat_dec_eq(v___x_768_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___y_779_; uint8_t v___x_781_; 
lean_dec_ref_known(v___x_766_, 1);
v___x_776_ = lean_unsigned_to_nat(1u);
v___x_777_ = lean_nat_sub(v___x_768_, v___x_776_);
v___x_781_ = lean_nat_dec_le(v___x_774_, v___x_777_);
if (v___x_781_ == 0)
{
lean_inc(v___x_777_);
v___y_779_ = v___x_777_;
goto v___jp_778_;
}
else
{
v___y_779_ = v___x_774_;
goto v___jp_778_;
}
v___jp_778_:
{
uint8_t v___x_780_; 
v___x_780_ = lean_nat_dec_le(v___y_779_, v___x_777_);
if (v___x_780_ == 0)
{
lean_dec(v___x_777_);
lean_inc(v___y_779_);
v___y_770_ = v___y_779_;
v___y_771_ = v___y_779_;
goto v___jp_769_;
}
else
{
v___y_770_ = v___y_779_;
v___y_771_ = v___x_777_;
goto v___jp_769_;
}
}
}
else
{
lean_dec(v_a_767_);
return v___x_766_;
}
v___jp_769_:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_765_, v___x_768_, v_a_767_, v___y_770_, v___y_771_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_771_);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
else
{
return v___x_766_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___boxed(lean_object* v_00_u03b1_782_, lean_object* v_inst_783_, lean_object* v_inst_784_, lean_object* v_inst_785_, lean_object* v_inst_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted(v_00_u03b1_782_, v_inst_783_, v_inst_784_, v_inst_785_, v_inst_786_, v_a_787_, v_a_788_, v_a_789_, v_a_790_, v_a_791_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
lean_dec(v_inst_786_);
lean_dec_ref(v_inst_783_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(uint8_t v_pu_794_, lean_object* v_c_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_){
_start:
{
switch(lean_obj_tag(v_c_795_))
{
case 0:
{
lean_object* v_decl_802_; lean_object* v_k_803_; lean_object* v___x_804_; lean_object* v_value_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v_decl_802_ = lean_ctor_get(v_c_795_, 0);
lean_inc_ref(v_decl_802_);
v_k_803_ = lean_ctor_get(v_c_795_, 1);
lean_inc_ref(v_k_803_);
lean_dec_ref_known(v_c_795_, 2);
v___x_804_ = lean_st_ref_take(v_a_796_);
v_value_805_ = lean_ctor_get(v_decl_802_, 3);
lean_inc(v_value_805_);
lean_dec_ref(v_decl_802_);
v___x_806_ = lean_array_push(v___x_804_, v_value_805_);
v___x_807_ = lean_st_ref_put(v_a_796_, v___x_806_);
v_c_795_ = v_k_803_;
goto _start;
}
case 1:
{
lean_object* v_decl_809_; lean_object* v_k_810_; lean_object* v_value_811_; lean_object* v___x_812_; 
v_decl_809_ = lean_ctor_get(v_c_795_, 0);
lean_inc_ref(v_decl_809_);
v_k_810_ = lean_ctor_get(v_c_795_, 1);
lean_inc_ref(v_k_810_);
lean_dec_ref_known(v_c_795_, 2);
v_value_811_ = lean_ctor_get(v_decl_809_, 4);
lean_inc_ref(v_value_811_);
lean_dec_ref(v_decl_809_);
v___x_812_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_794_, v_value_811_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_dec_ref_known(v___x_812_, 1);
v_c_795_ = v_k_810_;
goto _start;
}
else
{
lean_dec_ref(v_k_810_);
return v___x_812_;
}
}
case 2:
{
lean_object* v_decl_814_; lean_object* v_k_815_; lean_object* v_value_816_; lean_object* v___x_817_; 
v_decl_814_ = lean_ctor_get(v_c_795_, 0);
lean_inc_ref(v_decl_814_);
v_k_815_ = lean_ctor_get(v_c_795_, 1);
lean_inc_ref(v_k_815_);
lean_dec_ref_known(v_c_795_, 2);
v_value_816_ = lean_ctor_get(v_decl_814_, 4);
lean_inc_ref(v_value_816_);
lean_dec_ref(v_decl_814_);
v___x_817_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_794_, v_value_816_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_dec_ref_known(v___x_817_, 1);
v_c_795_ = v_k_815_;
goto _start;
}
else
{
lean_dec_ref(v_k_815_);
return v___x_817_;
}
}
case 4:
{
lean_object* v_cases_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_841_; 
v_cases_819_ = lean_ctor_get(v_c_795_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v_c_795_);
if (v_isSharedCheck_841_ == 0)
{
v___x_821_ = v_c_795_;
v_isShared_822_ = v_isSharedCheck_841_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_cases_819_);
lean_dec(v_c_795_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_841_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v_alts_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; uint8_t v___x_827_; 
v_alts_823_ = lean_ctor_get(v_cases_819_, 3);
lean_inc_ref(v_alts_823_);
lean_dec_ref(v_cases_819_);
v___x_824_ = lean_unsigned_to_nat(0u);
v___x_825_ = lean_array_get_size(v_alts_823_);
v___x_826_ = lean_box(0);
v___x_827_ = lean_nat_dec_lt(v___x_824_, v___x_825_);
if (v___x_827_ == 0)
{
lean_object* v___x_829_; 
lean_dec_ref(v_alts_823_);
if (v_isShared_822_ == 0)
{
lean_ctor_set_tag(v___x_821_, 0);
lean_ctor_set(v___x_821_, 0, v___x_826_);
v___x_829_ = v___x_821_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_826_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
else
{
uint8_t v___x_831_; 
v___x_831_ = lean_nat_dec_le(v___x_825_, v___x_825_);
if (v___x_831_ == 0)
{
if (v___x_827_ == 0)
{
lean_object* v___x_833_; 
lean_dec_ref(v_alts_823_);
if (v_isShared_822_ == 0)
{
lean_ctor_set_tag(v___x_821_, 0);
lean_ctor_set(v___x_821_, 0, v___x_826_);
v___x_833_ = v___x_821_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_826_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
else
{
size_t v___x_835_; size_t v___x_836_; lean_object* v___x_837_; 
lean_del_object(v___x_821_);
v___x_835_ = ((size_t)0ULL);
v___x_836_ = lean_usize_of_nat(v___x_825_);
v___x_837_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_794_, v_alts_823_, v___x_835_, v___x_836_, v___x_826_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
lean_dec_ref(v_alts_823_);
return v___x_837_;
}
}
else
{
size_t v___x_838_; size_t v___x_839_; lean_object* v___x_840_; 
lean_del_object(v___x_821_);
v___x_838_ = ((size_t)0ULL);
v___x_839_ = lean_usize_of_nat(v___x_825_);
v___x_840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_794_, v_alts_823_, v___x_838_, v___x_839_, v___x_826_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
lean_dec_ref(v_alts_823_);
return v___x_840_;
}
}
}
}
case 7:
{
lean_object* v_k_842_; 
v_k_842_ = lean_ctor_get(v_c_795_, 3);
lean_inc_ref(v_k_842_);
lean_dec_ref_known(v_c_795_, 4);
v_c_795_ = v_k_842_;
goto _start;
}
case 8:
{
lean_object* v_k_844_; 
v_k_844_ = lean_ctor_get(v_c_795_, 3);
lean_inc_ref(v_k_844_);
lean_dec_ref_known(v_c_795_, 4);
v_c_795_ = v_k_844_;
goto _start;
}
case 9:
{
lean_object* v_k_846_; 
v_k_846_ = lean_ctor_get(v_c_795_, 5);
lean_inc_ref(v_k_846_);
lean_dec_ref_known(v_c_795_, 6);
v_c_795_ = v_k_846_;
goto _start;
}
case 10:
{
lean_object* v_k_848_; 
v_k_848_ = lean_ctor_get(v_c_795_, 2);
lean_inc_ref(v_k_848_);
lean_dec_ref_known(v_c_795_, 3);
v_c_795_ = v_k_848_;
goto _start;
}
case 11:
{
lean_object* v_k_850_; 
v_k_850_ = lean_ctor_get(v_c_795_, 2);
lean_inc_ref(v_k_850_);
lean_dec_ref_known(v_c_795_, 3);
v_c_795_ = v_k_850_;
goto _start;
}
case 12:
{
lean_object* v_k_852_; 
v_k_852_ = lean_ctor_get(v_c_795_, 3);
lean_inc_ref(v_k_852_);
lean_dec_ref_known(v_c_795_, 4);
v_c_795_ = v_k_852_;
goto _start;
}
case 13:
{
lean_object* v_k_854_; 
v_k_854_ = lean_ctor_get(v_c_795_, 1);
lean_inc_ref(v_k_854_);
lean_dec_ref_known(v_c_795_, 2);
v_c_795_ = v_k_854_;
goto _start;
}
default: 
{
lean_object* v___x_856_; lean_object* v___x_857_; 
lean_dec_ref(v_c_795_);
v___x_856_ = lean_box(0);
v___x_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
return v___x_857_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(uint8_t v_pu_858_, lean_object* v_as_859_, size_t v_i_860_, size_t v_stop_861_, lean_object* v_b_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v___y_870_; uint8_t v___x_876_; 
v___x_876_ = lean_usize_dec_eq(v_i_860_, v_stop_861_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; 
v___x_877_ = lean_array_uget_borrowed(v_as_859_, v_i_860_);
switch(lean_obj_tag(v___x_877_))
{
case 0:
{
lean_object* v_code_878_; 
v_code_878_ = lean_ctor_get(v___x_877_, 2);
lean_inc_ref(v_code_878_);
v___y_870_ = v_code_878_;
goto v___jp_869_;
}
case 1:
{
lean_object* v_code_879_; 
v_code_879_ = lean_ctor_get(v___x_877_, 1);
lean_inc_ref(v_code_879_);
v___y_870_ = v_code_879_;
goto v___jp_869_;
}
default: 
{
lean_object* v_code_880_; 
v_code_880_ = lean_ctor_get(v___x_877_, 0);
lean_inc_ref(v_code_880_);
v___y_870_ = v_code_880_;
goto v___jp_869_;
}
}
}
else
{
lean_object* v___x_881_; 
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v_b_862_);
return v___x_881_;
}
v___jp_869_:
{
lean_object* v___x_871_; 
v___x_871_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_858_, v___y_870_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; size_t v___x_873_; size_t v___x_874_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v___x_873_ = ((size_t)1ULL);
v___x_874_ = lean_usize_add(v_i_860_, v___x_873_);
v_i_860_ = v___x_874_;
v_b_862_ = v_a_872_;
goto _start;
}
else
{
return v___x_871_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0___boxed(lean_object* v_pu_882_, lean_object* v_as_883_, lean_object* v_i_884_, lean_object* v_stop_885_, lean_object* v_b_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
uint8_t v_pu_boxed_893_; size_t v_i_boxed_894_; size_t v_stop_boxed_895_; lean_object* v_res_896_; 
v_pu_boxed_893_ = lean_unbox(v_pu_882_);
v_i_boxed_894_ = lean_unbox_usize(v_i_884_);
lean_dec(v_i_884_);
v_stop_boxed_895_ = lean_unbox_usize(v_stop_885_);
lean_dec(v_stop_885_);
v_res_896_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_boxed_893_, v_as_883_, v_i_boxed_894_, v_stop_boxed_895_, v_b_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec_ref(v_as_883_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed(lean_object* v_pu_897_, lean_object* v_c_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
uint8_t v_pu_boxed_905_; lean_object* v_res_906_; 
v_pu_boxed_905_ = lean_unbox(v_pu_897_);
v_res_906_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_boxed_905_, v_c_898_, v_a_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_);
lean_dec(v_a_903_);
lean_dec_ref(v_a_902_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
lean_dec(v_a_899_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(lean_object* v_f_907_, lean_object* v_v_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
if (lean_obj_tag(v_v_908_) == 0)
{
lean_object* v_code_915_; lean_object* v___x_916_; 
v_code_915_ = lean_ctor_get(v_v_908_, 0);
lean_inc_ref(v_code_915_);
lean_dec_ref_known(v_v_908_, 1);
lean_inc(v___y_913_);
lean_inc_ref(v___y_912_);
lean_inc(v___y_911_);
lean_inc_ref(v___y_910_);
lean_inc(v___y_909_);
v___x_916_ = lean_apply_7(v_f_907_, v_code_915_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, lean_box(0));
return v___x_916_;
}
else
{
lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_924_; 
lean_dec_ref(v_f_907_);
v_isSharedCheck_924_ = !lean_is_exclusive(v_v_908_);
if (v_isSharedCheck_924_ == 0)
{
lean_object* v_unused_925_; 
v_unused_925_ = lean_ctor_get(v_v_908_, 0);
lean_dec(v_unused_925_);
v___x_918_ = v_v_908_;
v_isShared_919_ = v_isSharedCheck_924_;
goto v_resetjp_917_;
}
else
{
lean_dec(v_v_908_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_924_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; lean_object* v___x_922_; 
v___x_920_ = lean_box(0);
if (v_isShared_919_ == 0)
{
lean_ctor_set_tag(v___x_918_, 0);
lean_ctor_set(v___x_918_, 0, v___x_920_);
v___x_922_ = v___x_918_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___x_920_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg___boxed(lean_object* v_f_926_, lean_object* v_v_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v_f_926_, v_v_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(uint8_t v_pu_935_, lean_object* v_f_936_, lean_object* v_v_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v_f_936_, v_v_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___boxed(lean_object* v_pu_945_, lean_object* v_f_946_, lean_object* v_v_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
uint8_t v_pu_boxed_954_; lean_object* v_res_955_; 
v_pu_boxed_954_ = lean_unbox(v_pu_945_);
v_res_955_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(v_pu_boxed_954_, v_f_946_, v_v_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(uint8_t v_pu_956_, lean_object* v_as_957_, size_t v_i_958_, size_t v_stop_959_, lean_object* v_b_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
uint8_t v___x_967_; 
v___x_967_ = lean_usize_dec_eq(v_i_958_, v_stop_959_);
if (v___x_967_ == 0)
{
lean_object* v___x_968_; lean_object* v_value_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_968_ = lean_array_uget_borrowed(v_as_957_, v_i_958_);
v_value_969_ = lean_ctor_get(v___x_968_, 1);
v___x_970_ = lean_box(v_pu_956_);
v___x_971_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed), 8, 1);
lean_closure_set(v___x_971_, 0, v___x_970_);
lean_inc_ref(v_value_969_);
v___x_972_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v___x_971_, v_value_969_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; size_t v___x_974_; size_t v___x_975_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref_known(v___x_972_, 1);
v___x_974_ = ((size_t)1ULL);
v___x_975_ = lean_usize_add(v_i_958_, v___x_974_);
v_i_958_ = v___x_975_;
v_b_960_ = v_a_973_;
goto _start;
}
else
{
return v___x_972_;
}
}
else
{
lean_object* v___x_977_; 
v___x_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_977_, 0, v_b_960_);
return v___x_977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1___boxed(lean_object* v_pu_978_, lean_object* v_as_979_, lean_object* v_i_980_, lean_object* v_stop_981_, lean_object* v_b_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
uint8_t v_pu_boxed_989_; size_t v_i_boxed_990_; size_t v_stop_boxed_991_; lean_object* v_res_992_; 
v_pu_boxed_989_ = lean_unbox(v_pu_978_);
v_i_boxed_990_ = lean_unbox_usize(v_i_980_);
lean_dec(v_i_980_);
v_stop_boxed_991_ = lean_unbox_usize(v_stop_981_);
lean_dec(v_stop_981_);
v_res_992_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_boxed_989_, v_as_979_, v_i_boxed_990_, v_stop_boxed_991_, v_b_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec_ref(v_as_979_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(uint8_t v_pu_993_, lean_object* v_decls_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; uint8_t v___x_1004_; 
v___x_1001_ = lean_unsigned_to_nat(0u);
v___x_1002_ = lean_array_get_size(v_decls_994_);
v___x_1003_ = lean_box(0);
v___x_1004_ = lean_nat_dec_lt(v___x_1001_, v___x_1002_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; 
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1003_);
return v___x_1005_;
}
else
{
uint8_t v___x_1006_; 
v___x_1006_ = lean_nat_dec_le(v___x_1002_, v___x_1002_);
if (v___x_1006_ == 0)
{
if (v___x_1004_ == 0)
{
lean_object* v___x_1007_; 
v___x_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1003_);
return v___x_1007_;
}
else
{
size_t v___x_1008_; size_t v___x_1009_; lean_object* v___x_1010_; 
v___x_1008_ = ((size_t)0ULL);
v___x_1009_ = lean_usize_of_nat(v___x_1002_);
v___x_1010_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_993_, v_decls_994_, v___x_1008_, v___x_1009_, v___x_1003_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_);
return v___x_1010_;
}
}
else
{
size_t v___x_1011_; size_t v___x_1012_; lean_object* v___x_1013_; 
v___x_1011_ = ((size_t)0ULL);
v___x_1012_ = lean_usize_of_nat(v___x_1002_);
v___x_1013_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_993_, v_decls_994_, v___x_1011_, v___x_1012_, v___x_1003_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_);
return v___x_1013_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start___boxed(lean_object* v_pu_1014_, lean_object* v_decls_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_){
_start:
{
uint8_t v_pu_boxed_1022_; lean_object* v_res_1023_; 
v_pu_boxed_1022_ = lean_unbox(v_pu_1014_);
v_res_1023_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(v_pu_boxed_1022_, v_decls_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
lean_dec(v_a_1020_);
lean_dec_ref(v_a_1019_);
lean_dec(v_a_1018_);
lean_dec_ref(v_a_1017_);
lean_dec(v_a_1016_);
lean_dec_ref(v_decls_1015_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues(uint8_t v_pu_1026_, lean_object* v_decls_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1033_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0));
v___x_1034_ = lean_st_mk_ref(v___x_1033_);
v___x_1035_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(v_pu_1026_, v_decls_1027_, v___x_1034_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1043_; 
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1043_ == 0)
{
lean_object* v_unused_1044_; 
v_unused_1044_ = lean_ctor_get(v___x_1035_, 0);
lean_dec(v_unused_1044_);
v___x_1037_ = v___x_1035_;
v_isShared_1038_ = v_isSharedCheck_1043_;
goto v_resetjp_1036_;
}
else
{
lean_dec(v___x_1035_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1043_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; lean_object* v___x_1041_; 
v___x_1039_ = lean_st_ref_get(v___x_1034_);
lean_dec(v___x_1034_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1039_);
v___x_1041_ = v___x_1037_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1039_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
else
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
lean_dec(v___x_1034_);
v_a_1045_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1035_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1035_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___boxed(lean_object* v_pu_1053_, lean_object* v_decls_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_){
_start:
{
uint8_t v_pu_boxed_1060_; lean_object* v_res_1061_; 
v_pu_boxed_1060_ = lean_unbox(v_pu_1053_);
v_res_1061_ = l_Lean_Compiler_LCNF_Probe_getLetValues(v_pu_boxed_1060_, v_decls_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_);
lean_dec(v_a_1058_);
lean_dec_ref(v_a_1057_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
lean_dec_ref(v_decls_1054_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(uint8_t v_pu_1062_, lean_object* v_code_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_){
_start:
{
switch(lean_obj_tag(v_code_1063_))
{
case 0:
{
lean_object* v_k_1070_; 
v_k_1070_ = lean_ctor_get(v_code_1063_, 1);
lean_inc_ref(v_k_1070_);
lean_dec_ref_known(v_code_1063_, 2);
v_code_1063_ = v_k_1070_;
goto _start;
}
case 1:
{
lean_object* v_decl_1072_; lean_object* v_k_1073_; lean_object* v_value_1074_; lean_object* v___x_1075_; 
v_decl_1072_ = lean_ctor_get(v_code_1063_, 0);
lean_inc_ref(v_decl_1072_);
v_k_1073_ = lean_ctor_get(v_code_1063_, 1);
lean_inc_ref(v_k_1073_);
lean_dec_ref_known(v_code_1063_, 2);
v_value_1074_ = lean_ctor_get(v_decl_1072_, 4);
lean_inc_ref(v_value_1074_);
lean_dec_ref(v_decl_1072_);
v___x_1075_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1062_, v_value_1074_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_dec_ref_known(v___x_1075_, 1);
v_code_1063_ = v_k_1073_;
goto _start;
}
else
{
lean_dec_ref(v_k_1073_);
return v___x_1075_;
}
}
case 2:
{
lean_object* v_decl_1077_; lean_object* v_k_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v_value_1082_; lean_object* v___x_1083_; 
v_decl_1077_ = lean_ctor_get(v_code_1063_, 0);
lean_inc_ref_n(v_decl_1077_, 2);
v_k_1078_ = lean_ctor_get(v_code_1063_, 1);
lean_inc_ref(v_k_1078_);
lean_dec_ref_known(v_code_1063_, 2);
v___x_1079_ = lean_st_ref_take(v_a_1064_);
v___x_1080_ = lean_array_push(v___x_1079_, v_decl_1077_);
v___x_1081_ = lean_st_ref_put(v_a_1064_, v___x_1080_);
v_value_1082_ = lean_ctor_get(v_decl_1077_, 4);
lean_inc_ref(v_value_1082_);
lean_dec_ref(v_decl_1077_);
v___x_1083_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1062_, v_value_1082_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_dec_ref_known(v___x_1083_, 1);
v_code_1063_ = v_k_1078_;
goto _start;
}
else
{
lean_dec_ref(v_k_1078_);
return v___x_1083_;
}
}
case 4:
{
lean_object* v_cases_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1107_; 
v_cases_1085_ = lean_ctor_get(v_code_1063_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v_code_1063_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1087_ = v_code_1063_;
v_isShared_1088_ = v_isSharedCheck_1107_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_cases_1085_);
lean_dec(v_code_1063_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1107_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v_alts_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; 
v_alts_1089_ = lean_ctor_get(v_cases_1085_, 3);
lean_inc_ref(v_alts_1089_);
lean_dec_ref(v_cases_1085_);
v___x_1090_ = lean_unsigned_to_nat(0u);
v___x_1091_ = lean_array_get_size(v_alts_1089_);
v___x_1092_ = lean_box(0);
v___x_1093_ = lean_nat_dec_lt(v___x_1090_, v___x_1091_);
if (v___x_1093_ == 0)
{
lean_object* v___x_1095_; 
lean_dec_ref(v_alts_1089_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set_tag(v___x_1087_, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1092_);
v___x_1095_ = v___x_1087_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1092_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
else
{
uint8_t v___x_1097_; 
v___x_1097_ = lean_nat_dec_le(v___x_1091_, v___x_1091_);
if (v___x_1097_ == 0)
{
if (v___x_1093_ == 0)
{
lean_object* v___x_1099_; 
lean_dec_ref(v_alts_1089_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set_tag(v___x_1087_, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1092_);
v___x_1099_ = v___x_1087_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1092_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
else
{
size_t v___x_1101_; size_t v___x_1102_; lean_object* v___x_1103_; 
lean_del_object(v___x_1087_);
v___x_1101_ = ((size_t)0ULL);
v___x_1102_ = lean_usize_of_nat(v___x_1091_);
v___x_1103_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_1062_, v_alts_1089_, v___x_1101_, v___x_1102_, v___x_1092_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_);
lean_dec_ref(v_alts_1089_);
return v___x_1103_;
}
}
else
{
size_t v___x_1104_; size_t v___x_1105_; lean_object* v___x_1106_; 
lean_del_object(v___x_1087_);
v___x_1104_ = ((size_t)0ULL);
v___x_1105_ = lean_usize_of_nat(v___x_1091_);
v___x_1106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_1062_, v_alts_1089_, v___x_1104_, v___x_1105_, v___x_1092_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_);
lean_dec_ref(v_alts_1089_);
return v___x_1106_;
}
}
}
}
case 7:
{
lean_object* v_k_1108_; 
v_k_1108_ = lean_ctor_get(v_code_1063_, 3);
lean_inc_ref(v_k_1108_);
lean_dec_ref_known(v_code_1063_, 4);
v_code_1063_ = v_k_1108_;
goto _start;
}
case 8:
{
lean_object* v_k_1110_; 
v_k_1110_ = lean_ctor_get(v_code_1063_, 3);
lean_inc_ref(v_k_1110_);
lean_dec_ref_known(v_code_1063_, 4);
v_code_1063_ = v_k_1110_;
goto _start;
}
case 9:
{
lean_object* v_k_1112_; 
v_k_1112_ = lean_ctor_get(v_code_1063_, 5);
lean_inc_ref(v_k_1112_);
lean_dec_ref_known(v_code_1063_, 6);
v_code_1063_ = v_k_1112_;
goto _start;
}
case 10:
{
lean_object* v_k_1114_; 
v_k_1114_ = lean_ctor_get(v_code_1063_, 2);
lean_inc_ref(v_k_1114_);
lean_dec_ref_known(v_code_1063_, 3);
v_code_1063_ = v_k_1114_;
goto _start;
}
case 11:
{
lean_object* v_k_1116_; 
v_k_1116_ = lean_ctor_get(v_code_1063_, 2);
lean_inc_ref(v_k_1116_);
lean_dec_ref_known(v_code_1063_, 3);
v_code_1063_ = v_k_1116_;
goto _start;
}
case 12:
{
lean_object* v_k_1118_; 
v_k_1118_ = lean_ctor_get(v_code_1063_, 3);
lean_inc_ref(v_k_1118_);
lean_dec_ref_known(v_code_1063_, 4);
v_code_1063_ = v_k_1118_;
goto _start;
}
case 13:
{
lean_object* v_k_1120_; 
v_k_1120_ = lean_ctor_get(v_code_1063_, 1);
lean_inc_ref(v_k_1120_);
lean_dec_ref_known(v_code_1063_, 2);
v_code_1063_ = v_k_1120_;
goto _start;
}
default: 
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
lean_dec_ref(v_code_1063_);
v___x_1122_ = lean_box(0);
v___x_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1122_);
return v___x_1123_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(uint8_t v_pu_1124_, lean_object* v_as_1125_, size_t v_i_1126_, size_t v_stop_1127_, lean_object* v_b_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v___y_1136_; uint8_t v___x_1142_; 
v___x_1142_ = lean_usize_dec_eq(v_i_1126_, v_stop_1127_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_array_uget_borrowed(v_as_1125_, v_i_1126_);
switch(lean_obj_tag(v___x_1143_))
{
case 0:
{
lean_object* v_code_1144_; 
v_code_1144_ = lean_ctor_get(v___x_1143_, 2);
lean_inc_ref(v_code_1144_);
v___y_1136_ = v_code_1144_;
goto v___jp_1135_;
}
case 1:
{
lean_object* v_code_1145_; 
v_code_1145_ = lean_ctor_get(v___x_1143_, 1);
lean_inc_ref(v_code_1145_);
v___y_1136_ = v_code_1145_;
goto v___jp_1135_;
}
default: 
{
lean_object* v_code_1146_; 
v_code_1146_ = lean_ctor_get(v___x_1143_, 0);
lean_inc_ref(v_code_1146_);
v___y_1136_ = v_code_1146_;
goto v___jp_1135_;
}
}
}
else
{
lean_object* v___x_1147_; 
v___x_1147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1147_, 0, v_b_1128_);
return v___x_1147_;
}
v___jp_1135_:
{
lean_object* v___x_1137_; 
v___x_1137_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1124_, v___y_1136_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
if (lean_obj_tag(v___x_1137_) == 0)
{
lean_object* v_a_1138_; size_t v___x_1139_; size_t v___x_1140_; 
v_a_1138_ = lean_ctor_get(v___x_1137_, 0);
lean_inc(v_a_1138_);
lean_dec_ref_known(v___x_1137_, 1);
v___x_1139_ = ((size_t)1ULL);
v___x_1140_ = lean_usize_add(v_i_1126_, v___x_1139_);
v_i_1126_ = v___x_1140_;
v_b_1128_ = v_a_1138_;
goto _start;
}
else
{
return v___x_1137_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0___boxed(lean_object* v_pu_1148_, lean_object* v_as_1149_, lean_object* v_i_1150_, lean_object* v_stop_1151_, lean_object* v_b_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
uint8_t v_pu_boxed_1159_; size_t v_i_boxed_1160_; size_t v_stop_boxed_1161_; lean_object* v_res_1162_; 
v_pu_boxed_1159_ = lean_unbox(v_pu_1148_);
v_i_boxed_1160_ = lean_unbox_usize(v_i_1150_);
lean_dec(v_i_1150_);
v_stop_boxed_1161_ = lean_unbox_usize(v_stop_1151_);
lean_dec(v_stop_1151_);
v_res_1162_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_boxed_1159_, v_as_1149_, v_i_boxed_1160_, v_stop_boxed_1161_, v_b_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v_as_1149_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed(lean_object* v_pu_1163_, lean_object* v_code_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_){
_start:
{
uint8_t v_pu_boxed_1171_; lean_object* v_res_1172_; 
v_pu_boxed_1171_ = lean_unbox(v_pu_1163_);
v_res_1172_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_boxed_1171_, v_code_1164_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_);
lean_dec(v_a_1169_);
lean_dec_ref(v_a_1168_);
lean_dec(v_a_1167_);
lean_dec_ref(v_a_1166_);
lean_dec(v_a_1165_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(lean_object* v_f_1173_, lean_object* v_v_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
if (lean_obj_tag(v_v_1174_) == 0)
{
lean_object* v_code_1181_; lean_object* v___x_1182_; 
v_code_1181_ = lean_ctor_get(v_v_1174_, 0);
lean_inc_ref(v_code_1181_);
lean_dec_ref_known(v_v_1174_, 1);
lean_inc(v___y_1179_);
lean_inc_ref(v___y_1178_);
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
lean_inc(v___y_1175_);
v___x_1182_ = lean_apply_7(v_f_1173_, v_code_1181_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, lean_box(0));
return v___x_1182_;
}
else
{
lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1190_; 
lean_dec_ref(v_f_1173_);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_v_1174_);
if (v_isSharedCheck_1190_ == 0)
{
lean_object* v_unused_1191_; 
v_unused_1191_ = lean_ctor_get(v_v_1174_, 0);
lean_dec(v_unused_1191_);
v___x_1184_ = v_v_1174_;
v_isShared_1185_ = v_isSharedCheck_1190_;
goto v_resetjp_1183_;
}
else
{
lean_dec(v_v_1174_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1190_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1186_ = lean_box(0);
if (v_isShared_1185_ == 0)
{
lean_ctor_set_tag(v___x_1184_, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1186_);
v___x_1188_ = v___x_1184_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1186_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg___boxed(lean_object* v_f_1192_, lean_object* v_v_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v_f_1192_, v_v_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec(v___y_1194_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(uint8_t v_pu_1201_, lean_object* v_f_1202_, lean_object* v_v_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v_f_1202_, v_v_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___boxed(lean_object* v_pu_1211_, lean_object* v_f_1212_, lean_object* v_v_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
uint8_t v_pu_boxed_1220_; lean_object* v_res_1221_; 
v_pu_boxed_1220_ = lean_unbox(v_pu_1211_);
v_res_1221_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(v_pu_boxed_1220_, v_f_1212_, v_v_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(uint8_t v_pu_1222_, lean_object* v_as_1223_, size_t v_i_1224_, size_t v_stop_1225_, lean_object* v_b_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
uint8_t v___x_1233_; 
v___x_1233_ = lean_usize_dec_eq(v_i_1224_, v_stop_1225_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; lean_object* v_value_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1234_ = lean_array_uget_borrowed(v_as_1223_, v_i_1224_);
v_value_1235_ = lean_ctor_get(v___x_1234_, 1);
v___x_1236_ = lean_box(v_pu_1222_);
v___x_1237_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed), 8, 1);
lean_closure_set(v___x_1237_, 0, v___x_1236_);
lean_inc_ref(v_value_1235_);
v___x_1238_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v___x_1237_, v_value_1235_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; size_t v___x_1240_; size_t v___x_1241_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1238_, 1);
v___x_1240_ = ((size_t)1ULL);
v___x_1241_ = lean_usize_add(v_i_1224_, v___x_1240_);
v_i_1224_ = v___x_1241_;
v_b_1226_ = v_a_1239_;
goto _start;
}
else
{
return v___x_1238_;
}
}
else
{
lean_object* v___x_1243_; 
v___x_1243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1243_, 0, v_b_1226_);
return v___x_1243_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1___boxed(lean_object* v_pu_1244_, lean_object* v_as_1245_, lean_object* v_i_1246_, lean_object* v_stop_1247_, lean_object* v_b_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
uint8_t v_pu_boxed_1255_; size_t v_i_boxed_1256_; size_t v_stop_boxed_1257_; lean_object* v_res_1258_; 
v_pu_boxed_1255_ = lean_unbox(v_pu_1244_);
v_i_boxed_1256_ = lean_unbox_usize(v_i_1246_);
lean_dec(v_i_1246_);
v_stop_boxed_1257_ = lean_unbox_usize(v_stop_1247_);
lean_dec(v_stop_1247_);
v_res_1258_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_boxed_1255_, v_as_1245_, v_i_boxed_1256_, v_stop_boxed_1257_, v_b_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1249_);
lean_dec_ref(v_as_1245_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(uint8_t v_pu_1259_, lean_object* v_decls_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; uint8_t v___x_1270_; 
v___x_1267_ = lean_unsigned_to_nat(0u);
v___x_1268_ = lean_array_get_size(v_decls_1260_);
v___x_1269_ = lean_box(0);
v___x_1270_ = lean_nat_dec_lt(v___x_1267_, v___x_1268_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; 
v___x_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1269_);
return v___x_1271_;
}
else
{
uint8_t v___x_1272_; 
v___x_1272_ = lean_nat_dec_le(v___x_1268_, v___x_1268_);
if (v___x_1272_ == 0)
{
if (v___x_1270_ == 0)
{
lean_object* v___x_1273_; 
v___x_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1269_);
return v___x_1273_;
}
else
{
size_t v___x_1274_; size_t v___x_1275_; lean_object* v___x_1276_; 
v___x_1274_ = ((size_t)0ULL);
v___x_1275_ = lean_usize_of_nat(v___x_1268_);
v___x_1276_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_1259_, v_decls_1260_, v___x_1274_, v___x_1275_, v___x_1269_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
return v___x_1276_;
}
}
else
{
size_t v___x_1277_; size_t v___x_1278_; lean_object* v___x_1279_; 
v___x_1277_ = ((size_t)0ULL);
v___x_1278_ = lean_usize_of_nat(v___x_1268_);
v___x_1279_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_1259_, v_decls_1260_, v___x_1277_, v___x_1278_, v___x_1269_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
return v___x_1279_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start___boxed(lean_object* v_pu_1280_, lean_object* v_decls_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_){
_start:
{
uint8_t v_pu_boxed_1288_; lean_object* v_res_1289_; 
v_pu_boxed_1288_ = lean_unbox(v_pu_1280_);
v_res_1289_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(v_pu_boxed_1288_, v_decls_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
lean_dec(v_a_1284_);
lean_dec_ref(v_a_1283_);
lean_dec(v_a_1282_);
lean_dec_ref(v_decls_1281_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps(uint8_t v_pu_1292_, lean_object* v_decls_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1299_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_getJps___closed__0));
v___x_1300_ = lean_st_mk_ref(v___x_1299_);
v___x_1301_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(v_pu_1292_, v_decls_1293_, v___x_1300_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1309_; 
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1309_ == 0)
{
lean_object* v_unused_1310_; 
v_unused_1310_ = lean_ctor_get(v___x_1301_, 0);
lean_dec(v_unused_1310_);
v___x_1303_ = v___x_1301_;
v_isShared_1304_ = v_isSharedCheck_1309_;
goto v_resetjp_1302_;
}
else
{
lean_dec(v___x_1301_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1309_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1305_; lean_object* v___x_1307_; 
v___x_1305_ = lean_st_ref_get(v___x_1300_);
lean_dec(v___x_1300_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1305_);
v___x_1307_ = v___x_1303_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1305_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
lean_dec(v___x_1300_);
v_a_1311_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1301_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1301_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1316_; 
if (v_isShared_1314_ == 0)
{
v___x_1316_ = v___x_1313_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1311_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps___boxed(lean_object* v_pu_1319_, lean_object* v_decls_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_){
_start:
{
uint8_t v_pu_boxed_1326_; lean_object* v_res_1327_; 
v_pu_boxed_1326_ = lean_unbox(v_pu_1319_);
v_res_1327_ = l_Lean_Compiler_LCNF_Probe_getJps(v_pu_boxed_1326_, v_decls_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_);
lean_dec(v_a_1324_);
lean_dec_ref(v_a_1323_);
lean_dec(v_a_1322_);
lean_dec_ref(v_a_1321_);
lean_dec_ref(v_decls_1320_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(uint8_t v_pu_1328_, lean_object* v_f_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_){
_start:
{
switch(lean_obj_tag(v_a_1330_))
{
case 0:
{
lean_object* v_decl_1336_; lean_object* v_k_1337_; lean_object* v___x_1338_; 
v_decl_1336_ = lean_ctor_get(v_a_1330_, 0);
lean_inc_ref(v_decl_1336_);
v_k_1337_ = lean_ctor_get(v_a_1330_, 1);
lean_inc_ref(v_k_1337_);
lean_dec_ref_known(v_a_1330_, 2);
lean_inc_ref(v_f_1329_);
lean_inc(v_a_1334_);
lean_inc_ref(v_a_1333_);
lean_inc(v_a_1332_);
lean_inc_ref(v_a_1331_);
v___x_1338_ = lean_apply_6(v_f_1329_, v_decl_1336_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, lean_box(0));
if (lean_obj_tag(v___x_1338_) == 0)
{
lean_object* v_a_1339_; uint8_t v___x_1340_; 
v_a_1339_ = lean_ctor_get(v___x_1338_, 0);
lean_inc(v_a_1339_);
v___x_1340_ = lean_unbox(v_a_1339_);
lean_dec(v_a_1339_);
if (v___x_1340_ == 0)
{
lean_dec_ref_known(v___x_1338_, 1);
v_a_1330_ = v_k_1337_;
goto _start;
}
else
{
lean_dec_ref(v_k_1337_);
lean_dec_ref(v_f_1329_);
return v___x_1338_;
}
}
else
{
lean_dec_ref(v_k_1337_);
lean_dec_ref(v_f_1329_);
return v___x_1338_;
}
}
case 1:
{
lean_object* v_decl_1342_; lean_object* v_k_1343_; lean_object* v_value_1344_; lean_object* v___x_1345_; 
v_decl_1342_ = lean_ctor_get(v_a_1330_, 0);
lean_inc_ref(v_decl_1342_);
v_k_1343_ = lean_ctor_get(v_a_1330_, 1);
lean_inc_ref(v_k_1343_);
lean_dec_ref_known(v_a_1330_, 2);
v_value_1344_ = lean_ctor_get(v_decl_1342_, 4);
lean_inc_ref(v_value_1344_);
lean_dec_ref(v_decl_1342_);
lean_inc_ref(v_f_1329_);
v___x_1345_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1328_, v_f_1329_, v_value_1344_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; uint8_t v___x_1347_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
lean_inc(v_a_1346_);
v___x_1347_ = lean_unbox(v_a_1346_);
lean_dec(v_a_1346_);
if (v___x_1347_ == 0)
{
lean_dec_ref_known(v___x_1345_, 1);
v_a_1330_ = v_k_1343_;
goto _start;
}
else
{
lean_dec_ref(v_k_1343_);
lean_dec_ref(v_f_1329_);
return v___x_1345_;
}
}
else
{
lean_dec_ref(v_k_1343_);
lean_dec_ref(v_f_1329_);
return v___x_1345_;
}
}
case 2:
{
lean_object* v_decl_1349_; lean_object* v_k_1350_; lean_object* v_value_1351_; lean_object* v___x_1352_; 
v_decl_1349_ = lean_ctor_get(v_a_1330_, 0);
lean_inc_ref(v_decl_1349_);
v_k_1350_ = lean_ctor_get(v_a_1330_, 1);
lean_inc_ref(v_k_1350_);
lean_dec_ref_known(v_a_1330_, 2);
v_value_1351_ = lean_ctor_get(v_decl_1349_, 4);
lean_inc_ref(v_value_1351_);
lean_dec_ref(v_decl_1349_);
lean_inc_ref(v_f_1329_);
v___x_1352_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1328_, v_f_1329_, v_value_1351_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; uint8_t v___x_1354_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_a_1353_);
v___x_1354_ = lean_unbox(v_a_1353_);
lean_dec(v_a_1353_);
if (v___x_1354_ == 0)
{
lean_dec_ref_known(v___x_1352_, 1);
v_a_1330_ = v_k_1350_;
goto _start;
}
else
{
lean_dec_ref(v_k_1350_);
lean_dec_ref(v_f_1329_);
return v___x_1352_;
}
}
else
{
lean_dec_ref(v_k_1350_);
lean_dec_ref(v_f_1329_);
return v___x_1352_;
}
}
case 4:
{
lean_object* v_cases_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1375_; 
v_cases_1356_ = lean_ctor_get(v_a_1330_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v_a_1330_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1358_ = v_a_1330_;
v_isShared_1359_ = v_isSharedCheck_1375_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_cases_1356_);
lean_dec(v_a_1330_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1375_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v_alts_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v_alts_1360_ = lean_ctor_get(v_cases_1356_, 3);
lean_inc_ref(v_alts_1360_);
lean_dec_ref(v_cases_1356_);
v___x_1361_ = lean_unsigned_to_nat(0u);
v___x_1362_ = lean_array_get_size(v_alts_1360_);
v___x_1363_ = lean_nat_dec_lt(v___x_1361_, v___x_1362_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; lean_object* v___x_1366_; 
lean_dec_ref(v_alts_1360_);
lean_dec_ref(v_f_1329_);
v___x_1364_ = lean_box(v___x_1363_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set_tag(v___x_1358_, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1364_);
v___x_1366_ = v___x_1358_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1364_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
else
{
if (v___x_1363_ == 0)
{
lean_object* v___x_1368_; lean_object* v___x_1370_; 
lean_dec_ref(v_alts_1360_);
lean_dec_ref(v_f_1329_);
v___x_1368_ = lean_box(v___x_1363_);
if (v_isShared_1359_ == 0)
{
lean_ctor_set_tag(v___x_1358_, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1368_);
v___x_1370_ = v___x_1358_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v___x_1368_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
else
{
size_t v___x_1372_; size_t v___x_1373_; lean_object* v___x_1374_; 
lean_del_object(v___x_1358_);
v___x_1372_ = ((size_t)0ULL);
v___x_1373_ = lean_usize_of_nat(v___x_1362_);
v___x_1374_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(v_pu_1328_, v_f_1329_, v_alts_1360_, v___x_1372_, v___x_1373_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
lean_dec_ref(v_alts_1360_);
return v___x_1374_;
}
}
}
}
case 7:
{
lean_object* v_k_1376_; 
v_k_1376_ = lean_ctor_get(v_a_1330_, 3);
lean_inc_ref(v_k_1376_);
lean_dec_ref_known(v_a_1330_, 4);
v_a_1330_ = v_k_1376_;
goto _start;
}
case 8:
{
lean_object* v_k_1378_; 
v_k_1378_ = lean_ctor_get(v_a_1330_, 3);
lean_inc_ref(v_k_1378_);
lean_dec_ref_known(v_a_1330_, 4);
v_a_1330_ = v_k_1378_;
goto _start;
}
case 9:
{
lean_object* v_k_1380_; 
v_k_1380_ = lean_ctor_get(v_a_1330_, 5);
lean_inc_ref(v_k_1380_);
lean_dec_ref_known(v_a_1330_, 6);
v_a_1330_ = v_k_1380_;
goto _start;
}
case 10:
{
lean_object* v_k_1382_; 
v_k_1382_ = lean_ctor_get(v_a_1330_, 2);
lean_inc_ref(v_k_1382_);
lean_dec_ref_known(v_a_1330_, 3);
v_a_1330_ = v_k_1382_;
goto _start;
}
case 11:
{
lean_object* v_k_1384_; 
v_k_1384_ = lean_ctor_get(v_a_1330_, 2);
lean_inc_ref(v_k_1384_);
lean_dec_ref_known(v_a_1330_, 3);
v_a_1330_ = v_k_1384_;
goto _start;
}
case 12:
{
lean_object* v_k_1386_; 
v_k_1386_ = lean_ctor_get(v_a_1330_, 3);
lean_inc_ref(v_k_1386_);
lean_dec_ref_known(v_a_1330_, 4);
v_a_1330_ = v_k_1386_;
goto _start;
}
case 13:
{
lean_object* v_k_1388_; 
v_k_1388_ = lean_ctor_get(v_a_1330_, 1);
lean_inc_ref(v_k_1388_);
lean_dec_ref_known(v_a_1330_, 2);
v_a_1330_ = v_k_1388_;
goto _start;
}
default: 
{
uint8_t v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec_ref(v_a_1330_);
lean_dec_ref(v_f_1329_);
v___x_1390_ = 0;
v___x_1391_ = lean_box(v___x_1390_);
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
return v___x_1392_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(uint8_t v_pu_1393_, lean_object* v_f_1394_, lean_object* v_as_1395_, size_t v_i_1396_, size_t v_stop_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
uint8_t v___x_1403_; 
v___x_1403_ = lean_usize_dec_eq(v_i_1396_, v_stop_1397_);
if (v___x_1403_ == 0)
{
uint8_t v___x_1404_; lean_object* v___y_1406_; lean_object* v___x_1421_; 
v___x_1404_ = 1;
v___x_1421_ = lean_array_uget_borrowed(v_as_1395_, v_i_1396_);
switch(lean_obj_tag(v___x_1421_))
{
case 0:
{
lean_object* v_code_1422_; 
v_code_1422_ = lean_ctor_get(v___x_1421_, 2);
lean_inc_ref(v_code_1422_);
v___y_1406_ = v_code_1422_;
goto v___jp_1405_;
}
case 1:
{
lean_object* v_code_1423_; 
v_code_1423_ = lean_ctor_get(v___x_1421_, 1);
lean_inc_ref(v_code_1423_);
v___y_1406_ = v_code_1423_;
goto v___jp_1405_;
}
default: 
{
lean_object* v_code_1424_; 
v_code_1424_ = lean_ctor_get(v___x_1421_, 0);
lean_inc_ref(v_code_1424_);
v___y_1406_ = v_code_1424_;
goto v___jp_1405_;
}
}
v___jp_1405_:
{
lean_object* v___x_1407_; 
lean_inc_ref(v_f_1394_);
v___x_1407_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1393_, v_f_1394_, v___y_1406_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1420_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1410_ = v___x_1407_;
v_isShared_1411_ = v_isSharedCheck_1420_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1407_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1420_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
uint8_t v___x_1412_; 
v___x_1412_ = lean_unbox(v_a_1408_);
lean_dec(v_a_1408_);
if (v___x_1412_ == 0)
{
size_t v___x_1413_; size_t v___x_1414_; 
lean_del_object(v___x_1410_);
v___x_1413_ = ((size_t)1ULL);
v___x_1414_ = lean_usize_add(v_i_1396_, v___x_1413_);
v_i_1396_ = v___x_1414_;
goto _start;
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1418_; 
lean_dec_ref(v_f_1394_);
v___x_1416_ = lean_box(v___x_1404_);
if (v_isShared_1411_ == 0)
{
lean_ctor_set(v___x_1410_, 0, v___x_1416_);
v___x_1418_ = v___x_1410_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
else
{
lean_dec_ref(v_f_1394_);
return v___x_1407_;
}
}
}
else
{
uint8_t v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
lean_dec_ref(v_f_1394_);
v___x_1425_ = 0;
v___x_1426_ = lean_box(v___x_1425_);
v___x_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
return v___x_1427_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0___boxed(lean_object* v_pu_1428_, lean_object* v_f_1429_, lean_object* v_as_1430_, lean_object* v_i_1431_, lean_object* v_stop_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
uint8_t v_pu_boxed_1438_; size_t v_i_boxed_1439_; size_t v_stop_boxed_1440_; lean_object* v_res_1441_; 
v_pu_boxed_1438_ = lean_unbox(v_pu_1428_);
v_i_boxed_1439_ = lean_unbox_usize(v_i_1431_);
lean_dec(v_i_1431_);
v_stop_boxed_1440_ = lean_unbox_usize(v_stop_1432_);
lean_dec(v_stop_1432_);
v_res_1441_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(v_pu_boxed_1438_, v_f_1429_, v_as_1430_, v_i_boxed_1439_, v_stop_boxed_1440_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec_ref(v_as_1430_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed(lean_object* v_pu_1442_, lean_object* v_f_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_){
_start:
{
uint8_t v_pu_boxed_1450_; lean_object* v_res_1451_; 
v_pu_boxed_1450_ = lean_unbox(v_pu_1442_);
v_res_1451_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_boxed_1450_, v_f_1443_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_);
lean_dec(v_a_1448_);
lean_dec_ref(v_a_1447_);
lean_dec(v_a_1446_);
lean_dec_ref(v_a_1445_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(lean_object* v_v_1452_, lean_object* v_f_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
if (lean_obj_tag(v_v_1452_) == 0)
{
lean_object* v_code_1459_; lean_object* v___x_1460_; 
v_code_1459_ = lean_ctor_get(v_v_1452_, 0);
lean_inc_ref(v_code_1459_);
lean_dec_ref_known(v_v_1452_, 1);
lean_inc(v___y_1457_);
lean_inc_ref(v___y_1456_);
lean_inc(v___y_1455_);
lean_inc_ref(v___y_1454_);
v___x_1460_ = lean_apply_6(v_f_1453_, v_code_1459_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, lean_box(0));
return v___x_1460_;
}
else
{
lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1469_; 
lean_dec_ref(v_f_1453_);
v_isSharedCheck_1469_ = !lean_is_exclusive(v_v_1452_);
if (v_isSharedCheck_1469_ == 0)
{
lean_object* v_unused_1470_; 
v_unused_1470_ = lean_ctor_get(v_v_1452_, 0);
lean_dec(v_unused_1470_);
v___x_1462_ = v_v_1452_;
v_isShared_1463_ = v_isSharedCheck_1469_;
goto v_resetjp_1461_;
}
else
{
lean_dec(v_v_1452_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1469_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
uint8_t v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1467_; 
v___x_1464_ = 0;
v___x_1465_ = lean_box(v___x_1464_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set_tag(v___x_1462_, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1465_);
v___x_1467_ = v___x_1462_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1465_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg___boxed(lean_object* v_v_1471_, lean_object* v_f_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_v_1471_, v_f_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(uint8_t v_pu_1479_, lean_object* v_v_1480_, lean_object* v_f_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v___x_1487_; 
v___x_1487_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_v_1480_, v_f_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___boxed(lean_object* v_pu_1488_, lean_object* v_v_1489_, lean_object* v_f_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
uint8_t v_pu_boxed_1496_; lean_object* v_res_1497_; 
v_pu_boxed_1496_ = lean_unbox(v_pu_1488_);
v_res_1497_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(v_pu_boxed_1496_, v_v_1489_, v_f_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
return v_res_1497_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(uint8_t v_pu_1498_, lean_object* v_f_1499_, lean_object* v_as_1500_, size_t v_i_1501_, size_t v_stop_1502_, lean_object* v_b_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v_a_1510_; uint8_t v___x_1514_; 
v___x_1514_ = lean_usize_dec_eq(v_i_1501_, v_stop_1502_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; lean_object* v_value_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1515_ = lean_array_uget_borrowed(v_as_1500_, v_i_1501_);
v_value_1516_ = lean_ctor_get(v___x_1515_, 1);
v___x_1517_ = lean_box(v_pu_1498_);
lean_inc_ref(v_f_1499_);
v___x_1518_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed), 8, 2);
lean_closure_set(v___x_1518_, 0, v___x_1517_);
lean_closure_set(v___x_1518_, 1, v_f_1499_);
lean_inc_ref(v_value_1516_);
v___x_1519_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1516_, v___x_1518_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; uint8_t v___x_1521_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v___x_1519_, 1);
v___x_1521_ = lean_unbox(v_a_1520_);
lean_dec(v_a_1520_);
if (v___x_1521_ == 0)
{
v_a_1510_ = v_b_1503_;
goto v___jp_1509_;
}
else
{
lean_object* v___x_1522_; 
lean_inc(v___x_1515_);
v___x_1522_ = lean_array_push(v_b_1503_, v___x_1515_);
v_a_1510_ = v___x_1522_;
goto v___jp_1509_;
}
}
else
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec_ref(v_b_1503_);
lean_dec_ref(v_f_1499_);
v_a_1523_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1519_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1519_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
else
{
lean_object* v___x_1531_; 
lean_dec_ref(v_f_1499_);
v___x_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1531_, 0, v_b_1503_);
return v___x_1531_;
}
v___jp_1509_:
{
size_t v___x_1511_; size_t v___x_1512_; 
v___x_1511_ = ((size_t)1ULL);
v___x_1512_ = lean_usize_add(v_i_1501_, v___x_1511_);
v_i_1501_ = v___x_1512_;
v_b_1503_ = v_a_1510_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1___boxed(lean_object* v_pu_1532_, lean_object* v_f_1533_, lean_object* v_as_1534_, lean_object* v_i_1535_, lean_object* v_stop_1536_, lean_object* v_b_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
uint8_t v_pu_boxed_1543_; size_t v_i_boxed_1544_; size_t v_stop_boxed_1545_; lean_object* v_res_1546_; 
v_pu_boxed_1543_ = lean_unbox(v_pu_1532_);
v_i_boxed_1544_ = lean_unbox_usize(v_i_1535_);
lean_dec(v_i_1535_);
v_stop_boxed_1545_ = lean_unbox_usize(v_stop_1536_);
lean_dec(v_stop_1536_);
v_res_1546_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(v_pu_boxed_1543_, v_f_1533_, v_as_1534_, v_i_boxed_1544_, v_stop_boxed_1545_, v_b_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec_ref(v_as_1534_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet(uint8_t v_pu_1549_, lean_object* v_f_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; uint8_t v___x_1560_; 
v___x_1557_ = lean_unsigned_to_nat(0u);
v___x_1558_ = lean_array_get_size(v_a_1551_);
v___x_1559_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_1560_ = lean_nat_dec_lt(v___x_1557_, v___x_1558_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; 
lean_dec_ref(v_f_1550_);
v___x_1561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1559_);
return v___x_1561_;
}
else
{
size_t v___x_1562_; size_t v___x_1563_; lean_object* v___x_1564_; 
v___x_1562_ = ((size_t)0ULL);
v___x_1563_ = lean_usize_of_nat(v___x_1558_);
v___x_1564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(v_pu_1549_, v_f_1550_, v_a_1551_, v___x_1562_, v___x_1563_, v___x_1559_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_);
return v___x_1564_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___boxed(lean_object* v_pu_1565_, lean_object* v_f_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_){
_start:
{
uint8_t v_pu_boxed_1573_; lean_object* v_res_1574_; 
v_pu_boxed_1573_ = lean_unbox(v_pu_1565_);
v_res_1574_ = l_Lean_Compiler_LCNF_Probe_filterByLet(v_pu_boxed_1573_, v_f_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_);
lean_dec(v_a_1571_);
lean_dec_ref(v_a_1570_);
lean_dec(v_a_1569_);
lean_dec_ref(v_a_1568_);
lean_dec_ref(v_a_1567_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(uint8_t v_pu_1575_, lean_object* v_f_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_){
_start:
{
switch(lean_obj_tag(v_a_1577_))
{
case 0:
{
lean_object* v_k_1583_; 
v_k_1583_ = lean_ctor_get(v_a_1577_, 1);
lean_inc_ref(v_k_1583_);
lean_dec_ref_known(v_a_1577_, 2);
v_a_1577_ = v_k_1583_;
goto _start;
}
case 1:
{
lean_object* v_decl_1585_; lean_object* v_k_1586_; lean_object* v___x_1587_; 
v_decl_1585_ = lean_ctor_get(v_a_1577_, 0);
lean_inc_ref_n(v_decl_1585_, 2);
v_k_1586_ = lean_ctor_get(v_a_1577_, 1);
lean_inc_ref(v_k_1586_);
lean_dec_ref_known(v_a_1577_, 2);
lean_inc_ref(v_f_1576_);
lean_inc(v_a_1581_);
lean_inc_ref(v_a_1580_);
lean_inc(v_a_1579_);
lean_inc_ref(v_a_1578_);
v___x_1587_ = lean_apply_6(v_f_1576_, v_decl_1585_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_, lean_box(0));
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; uint8_t v___x_1589_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_a_1588_);
v___x_1589_ = lean_unbox(v_a_1588_);
lean_dec(v_a_1588_);
if (v___x_1589_ == 0)
{
lean_object* v_value_1590_; lean_object* v___x_1591_; 
lean_dec_ref_known(v___x_1587_, 1);
v_value_1590_ = lean_ctor_get(v_decl_1585_, 4);
lean_inc_ref(v_value_1590_);
lean_dec_ref(v_decl_1585_);
lean_inc_ref(v_f_1576_);
v___x_1591_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_1575_, v_f_1576_, v_value_1590_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; uint8_t v___x_1593_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
lean_inc(v_a_1592_);
v___x_1593_ = lean_unbox(v_a_1592_);
lean_dec(v_a_1592_);
if (v___x_1593_ == 0)
{
lean_dec_ref_known(v___x_1591_, 1);
v_a_1577_ = v_k_1586_;
goto _start;
}
else
{
lean_dec_ref(v_k_1586_);
lean_dec_ref(v_f_1576_);
return v___x_1591_;
}
}
else
{
lean_dec_ref(v_k_1586_);
lean_dec_ref(v_f_1576_);
return v___x_1591_;
}
}
else
{
lean_dec_ref(v_k_1586_);
lean_dec_ref(v_decl_1585_);
lean_dec_ref(v_f_1576_);
return v___x_1587_;
}
}
else
{
lean_dec_ref(v_k_1586_);
lean_dec_ref(v_decl_1585_);
lean_dec_ref(v_f_1576_);
return v___x_1587_;
}
}
case 2:
{
lean_object* v_k_1595_; 
v_k_1595_ = lean_ctor_get(v_a_1577_, 1);
lean_inc_ref(v_k_1595_);
lean_dec_ref_known(v_a_1577_, 2);
v_a_1577_ = v_k_1595_;
goto _start;
}
case 4:
{
lean_object* v_cases_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1616_; 
v_cases_1597_ = lean_ctor_get(v_a_1577_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v_a_1577_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1599_ = v_a_1577_;
v_isShared_1600_ = v_isSharedCheck_1616_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_cases_1597_);
lean_dec(v_a_1577_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1616_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v_alts_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; uint8_t v___x_1604_; 
v_alts_1601_ = lean_ctor_get(v_cases_1597_, 3);
lean_inc_ref(v_alts_1601_);
lean_dec_ref(v_cases_1597_);
v___x_1602_ = lean_unsigned_to_nat(0u);
v___x_1603_ = lean_array_get_size(v_alts_1601_);
v___x_1604_ = lean_nat_dec_lt(v___x_1602_, v___x_1603_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; lean_object* v___x_1607_; 
lean_dec_ref(v_alts_1601_);
lean_dec_ref(v_f_1576_);
v___x_1605_ = lean_box(v___x_1604_);
if (v_isShared_1600_ == 0)
{
lean_ctor_set_tag(v___x_1599_, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1605_);
v___x_1607_ = v___x_1599_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
else
{
if (v___x_1604_ == 0)
{
lean_object* v___x_1609_; lean_object* v___x_1611_; 
lean_dec_ref(v_alts_1601_);
lean_dec_ref(v_f_1576_);
v___x_1609_ = lean_box(v___x_1604_);
if (v_isShared_1600_ == 0)
{
lean_ctor_set_tag(v___x_1599_, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1609_);
v___x_1611_ = v___x_1599_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v___x_1609_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
else
{
size_t v___x_1613_; size_t v___x_1614_; lean_object* v___x_1615_; 
lean_del_object(v___x_1599_);
v___x_1613_ = ((size_t)0ULL);
v___x_1614_ = lean_usize_of_nat(v___x_1603_);
v___x_1615_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(v_pu_1575_, v_f_1576_, v_alts_1601_, v___x_1613_, v___x_1614_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_);
lean_dec_ref(v_alts_1601_);
return v___x_1615_;
}
}
}
}
case 7:
{
lean_object* v_k_1617_; 
v_k_1617_ = lean_ctor_get(v_a_1577_, 3);
lean_inc_ref(v_k_1617_);
lean_dec_ref_known(v_a_1577_, 4);
v_a_1577_ = v_k_1617_;
goto _start;
}
case 8:
{
lean_object* v_k_1619_; 
v_k_1619_ = lean_ctor_get(v_a_1577_, 3);
lean_inc_ref(v_k_1619_);
lean_dec_ref_known(v_a_1577_, 4);
v_a_1577_ = v_k_1619_;
goto _start;
}
case 9:
{
lean_object* v_k_1621_; 
v_k_1621_ = lean_ctor_get(v_a_1577_, 5);
lean_inc_ref(v_k_1621_);
lean_dec_ref_known(v_a_1577_, 6);
v_a_1577_ = v_k_1621_;
goto _start;
}
case 10:
{
lean_object* v_k_1623_; 
v_k_1623_ = lean_ctor_get(v_a_1577_, 2);
lean_inc_ref(v_k_1623_);
lean_dec_ref_known(v_a_1577_, 3);
v_a_1577_ = v_k_1623_;
goto _start;
}
case 11:
{
lean_object* v_k_1625_; 
v_k_1625_ = lean_ctor_get(v_a_1577_, 2);
lean_inc_ref(v_k_1625_);
lean_dec_ref_known(v_a_1577_, 3);
v_a_1577_ = v_k_1625_;
goto _start;
}
case 12:
{
lean_object* v_k_1627_; 
v_k_1627_ = lean_ctor_get(v_a_1577_, 3);
lean_inc_ref(v_k_1627_);
lean_dec_ref_known(v_a_1577_, 4);
v_a_1577_ = v_k_1627_;
goto _start;
}
case 13:
{
lean_object* v_k_1629_; 
v_k_1629_ = lean_ctor_get(v_a_1577_, 1);
lean_inc_ref(v_k_1629_);
lean_dec_ref_known(v_a_1577_, 2);
v_a_1577_ = v_k_1629_;
goto _start;
}
default: 
{
uint8_t v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; 
lean_dec_ref(v_a_1577_);
lean_dec_ref(v_f_1576_);
v___x_1631_ = 0;
v___x_1632_ = lean_box(v___x_1631_);
v___x_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
return v___x_1633_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(uint8_t v_pu_1634_, lean_object* v_f_1635_, lean_object* v_as_1636_, size_t v_i_1637_, size_t v_stop_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_){
_start:
{
uint8_t v___x_1644_; 
v___x_1644_ = lean_usize_dec_eq(v_i_1637_, v_stop_1638_);
if (v___x_1644_ == 0)
{
uint8_t v___x_1645_; lean_object* v___y_1647_; lean_object* v___x_1662_; 
v___x_1645_ = 1;
v___x_1662_ = lean_array_uget_borrowed(v_as_1636_, v_i_1637_);
switch(lean_obj_tag(v___x_1662_))
{
case 0:
{
lean_object* v_code_1663_; 
v_code_1663_ = lean_ctor_get(v___x_1662_, 2);
lean_inc_ref(v_code_1663_);
v___y_1647_ = v_code_1663_;
goto v___jp_1646_;
}
case 1:
{
lean_object* v_code_1664_; 
v_code_1664_ = lean_ctor_get(v___x_1662_, 1);
lean_inc_ref(v_code_1664_);
v___y_1647_ = v_code_1664_;
goto v___jp_1646_;
}
default: 
{
lean_object* v_code_1665_; 
v_code_1665_ = lean_ctor_get(v___x_1662_, 0);
lean_inc_ref(v_code_1665_);
v___y_1647_ = v_code_1665_;
goto v___jp_1646_;
}
}
v___jp_1646_:
{
lean_object* v___x_1648_; 
lean_inc_ref(v_f_1635_);
v___x_1648_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_1634_, v_f_1635_, v___y_1647_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1661_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1661_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1661_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
uint8_t v___x_1653_; 
v___x_1653_ = lean_unbox(v_a_1649_);
lean_dec(v_a_1649_);
if (v___x_1653_ == 0)
{
size_t v___x_1654_; size_t v___x_1655_; 
lean_del_object(v___x_1651_);
v___x_1654_ = ((size_t)1ULL);
v___x_1655_ = lean_usize_add(v_i_1637_, v___x_1654_);
v_i_1637_ = v___x_1655_;
goto _start;
}
else
{
lean_object* v___x_1657_; lean_object* v___x_1659_; 
lean_dec_ref(v_f_1635_);
v___x_1657_ = lean_box(v___x_1645_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 0, v___x_1657_);
v___x_1659_ = v___x_1651_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v___x_1657_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
else
{
lean_dec_ref(v_f_1635_);
return v___x_1648_;
}
}
}
else
{
uint8_t v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
lean_dec_ref(v_f_1635_);
v___x_1666_ = 0;
v___x_1667_ = lean_box(v___x_1666_);
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
return v___x_1668_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0___boxed(lean_object* v_pu_1669_, lean_object* v_f_1670_, lean_object* v_as_1671_, lean_object* v_i_1672_, lean_object* v_stop_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
uint8_t v_pu_boxed_1679_; size_t v_i_boxed_1680_; size_t v_stop_boxed_1681_; lean_object* v_res_1682_; 
v_pu_boxed_1679_ = lean_unbox(v_pu_1669_);
v_i_boxed_1680_ = lean_unbox_usize(v_i_1672_);
lean_dec(v_i_1672_);
v_stop_boxed_1681_ = lean_unbox_usize(v_stop_1673_);
lean_dec(v_stop_1673_);
v_res_1682_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(v_pu_boxed_1679_, v_f_1670_, v_as_1671_, v_i_boxed_1680_, v_stop_boxed_1681_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec_ref(v_as_1671_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed(lean_object* v_pu_1683_, lean_object* v_f_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_, lean_object* v_a_1690_){
_start:
{
uint8_t v_pu_boxed_1691_; lean_object* v_res_1692_; 
v_pu_boxed_1691_ = lean_unbox(v_pu_1683_);
v_res_1692_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_boxed_1691_, v_f_1684_, v_a_1685_, v_a_1686_, v_a_1687_, v_a_1688_, v_a_1689_);
lean_dec(v_a_1689_);
lean_dec_ref(v_a_1688_);
lean_dec(v_a_1687_);
lean_dec_ref(v_a_1686_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(uint8_t v_pu_1693_, lean_object* v_f_1694_, lean_object* v_as_1695_, size_t v_i_1696_, size_t v_stop_1697_, lean_object* v_b_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_a_1705_; uint8_t v___x_1709_; 
v___x_1709_ = lean_usize_dec_eq(v_i_1696_, v_stop_1697_);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; lean_object* v_value_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1710_ = lean_array_uget_borrowed(v_as_1695_, v_i_1696_);
v_value_1711_ = lean_ctor_get(v___x_1710_, 1);
v___x_1712_ = lean_box(v_pu_1693_);
lean_inc_ref(v_f_1694_);
v___x_1713_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed), 8, 2);
lean_closure_set(v___x_1713_, 0, v___x_1712_);
lean_closure_set(v___x_1713_, 1, v_f_1694_);
lean_inc_ref(v_value_1711_);
v___x_1714_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1711_, v___x_1713_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; uint8_t v___x_1716_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc(v_a_1715_);
lean_dec_ref_known(v___x_1714_, 1);
v___x_1716_ = lean_unbox(v_a_1715_);
lean_dec(v_a_1715_);
if (v___x_1716_ == 0)
{
v_a_1705_ = v_b_1698_;
goto v___jp_1704_;
}
else
{
lean_object* v___x_1717_; 
lean_inc(v___x_1710_);
v___x_1717_ = lean_array_push(v_b_1698_, v___x_1710_);
v_a_1705_ = v___x_1717_;
goto v___jp_1704_;
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_dec_ref(v_b_1698_);
lean_dec_ref(v_f_1694_);
v_a_1718_ = lean_ctor_get(v___x_1714_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1714_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1714_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1714_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
else
{
lean_object* v___x_1726_; 
lean_dec_ref(v_f_1694_);
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v_b_1698_);
return v___x_1726_;
}
v___jp_1704_:
{
size_t v___x_1706_; size_t v___x_1707_; 
v___x_1706_ = ((size_t)1ULL);
v___x_1707_ = lean_usize_add(v_i_1696_, v___x_1706_);
v_i_1696_ = v___x_1707_;
v_b_1698_ = v_a_1705_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0___boxed(lean_object* v_pu_1727_, lean_object* v_f_1728_, lean_object* v_as_1729_, lean_object* v_i_1730_, lean_object* v_stop_1731_, lean_object* v_b_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
uint8_t v_pu_boxed_1738_; size_t v_i_boxed_1739_; size_t v_stop_boxed_1740_; lean_object* v_res_1741_; 
v_pu_boxed_1738_ = lean_unbox(v_pu_1727_);
v_i_boxed_1739_ = lean_unbox_usize(v_i_1730_);
lean_dec(v_i_1730_);
v_stop_boxed_1740_ = lean_unbox_usize(v_stop_1731_);
lean_dec(v_stop_1731_);
v_res_1741_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(v_pu_boxed_1738_, v_f_1728_, v_as_1729_, v_i_boxed_1739_, v_stop_boxed_1740_, v_b_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v___y_1734_);
lean_dec_ref(v___y_1733_);
lean_dec_ref(v_as_1729_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun(uint8_t v_pu_1742_, lean_object* v_f_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; uint8_t v___x_1753_; 
v___x_1750_ = lean_unsigned_to_nat(0u);
v___x_1751_ = lean_array_get_size(v_a_1744_);
v___x_1752_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_1753_ = lean_nat_dec_lt(v___x_1750_, v___x_1751_);
if (v___x_1753_ == 0)
{
lean_object* v___x_1754_; 
lean_dec_ref(v_f_1743_);
v___x_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1752_);
return v___x_1754_;
}
else
{
size_t v___x_1755_; size_t v___x_1756_; lean_object* v___x_1757_; 
v___x_1755_ = ((size_t)0ULL);
v___x_1756_ = lean_usize_of_nat(v___x_1751_);
v___x_1757_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(v_pu_1742_, v_f_1743_, v_a_1744_, v___x_1755_, v___x_1756_, v___x_1752_, v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_);
return v___x_1757_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun___boxed(lean_object* v_pu_1758_, lean_object* v_f_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_){
_start:
{
uint8_t v_pu_boxed_1766_; lean_object* v_res_1767_; 
v_pu_boxed_1766_ = lean_unbox(v_pu_1758_);
v_res_1767_ = l_Lean_Compiler_LCNF_Probe_filterByFun(v_pu_boxed_1766_, v_f_1759_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_);
lean_dec(v_a_1764_);
lean_dec_ref(v_a_1763_);
lean_dec(v_a_1762_);
lean_dec_ref(v_a_1761_);
lean_dec_ref(v_a_1760_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(uint8_t v_pu_1768_, lean_object* v_f_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_){
_start:
{
switch(lean_obj_tag(v_a_1770_))
{
case 0:
{
lean_object* v_k_1776_; 
v_k_1776_ = lean_ctor_get(v_a_1770_, 1);
lean_inc_ref(v_k_1776_);
lean_dec_ref_known(v_a_1770_, 2);
v_a_1770_ = v_k_1776_;
goto _start;
}
case 1:
{
lean_object* v_decl_1778_; lean_object* v_k_1779_; lean_object* v_value_1780_; lean_object* v___x_1781_; 
v_decl_1778_ = lean_ctor_get(v_a_1770_, 0);
lean_inc_ref(v_decl_1778_);
v_k_1779_ = lean_ctor_get(v_a_1770_, 1);
lean_inc_ref(v_k_1779_);
lean_dec_ref_known(v_a_1770_, 2);
v_value_1780_ = lean_ctor_get(v_decl_1778_, 4);
lean_inc_ref(v_value_1780_);
lean_dec_ref(v_decl_1778_);
lean_inc_ref(v_f_1769_);
v___x_1781_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1768_, v_f_1769_, v_value_1780_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_object* v_a_1782_; uint8_t v___x_1783_; 
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
lean_inc(v_a_1782_);
v___x_1783_ = lean_unbox(v_a_1782_);
lean_dec(v_a_1782_);
if (v___x_1783_ == 0)
{
lean_dec_ref_known(v___x_1781_, 1);
v_a_1770_ = v_k_1779_;
goto _start;
}
else
{
lean_dec_ref(v_k_1779_);
lean_dec_ref(v_f_1769_);
return v___x_1781_;
}
}
else
{
lean_dec_ref(v_k_1779_);
lean_dec_ref(v_f_1769_);
return v___x_1781_;
}
}
case 2:
{
lean_object* v_decl_1785_; lean_object* v_k_1786_; lean_object* v___x_1787_; 
v_decl_1785_ = lean_ctor_get(v_a_1770_, 0);
lean_inc_ref_n(v_decl_1785_, 2);
v_k_1786_ = lean_ctor_get(v_a_1770_, 1);
lean_inc_ref(v_k_1786_);
lean_dec_ref_known(v_a_1770_, 2);
lean_inc_ref(v_f_1769_);
lean_inc(v_a_1774_);
lean_inc_ref(v_a_1773_);
lean_inc(v_a_1772_);
lean_inc_ref(v_a_1771_);
v___x_1787_ = lean_apply_6(v_f_1769_, v_decl_1785_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, lean_box(0));
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; uint8_t v___x_1789_; 
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_a_1788_);
v___x_1789_ = lean_unbox(v_a_1788_);
lean_dec(v_a_1788_);
if (v___x_1789_ == 0)
{
lean_object* v_value_1790_; lean_object* v___x_1791_; 
lean_dec_ref_known(v___x_1787_, 1);
v_value_1790_ = lean_ctor_get(v_decl_1785_, 4);
lean_inc_ref(v_value_1790_);
lean_dec_ref(v_decl_1785_);
lean_inc_ref(v_f_1769_);
v___x_1791_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1768_, v_f_1769_, v_value_1790_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; uint8_t v___x_1793_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
lean_inc(v_a_1792_);
v___x_1793_ = lean_unbox(v_a_1792_);
lean_dec(v_a_1792_);
if (v___x_1793_ == 0)
{
lean_dec_ref_known(v___x_1791_, 1);
v_a_1770_ = v_k_1786_;
goto _start;
}
else
{
lean_dec_ref(v_k_1786_);
lean_dec_ref(v_f_1769_);
return v___x_1791_;
}
}
else
{
lean_dec_ref(v_k_1786_);
lean_dec_ref(v_f_1769_);
return v___x_1791_;
}
}
else
{
lean_dec_ref(v_k_1786_);
lean_dec_ref(v_decl_1785_);
lean_dec_ref(v_f_1769_);
return v___x_1787_;
}
}
else
{
lean_dec_ref(v_k_1786_);
lean_dec_ref(v_decl_1785_);
lean_dec_ref(v_f_1769_);
return v___x_1787_;
}
}
case 4:
{
lean_object* v_cases_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1814_; 
v_cases_1795_ = lean_ctor_get(v_a_1770_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v_a_1770_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1797_ = v_a_1770_;
v_isShared_1798_ = v_isSharedCheck_1814_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_cases_1795_);
lean_dec(v_a_1770_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1814_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v_alts_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; 
v_alts_1799_ = lean_ctor_get(v_cases_1795_, 3);
lean_inc_ref(v_alts_1799_);
lean_dec_ref(v_cases_1795_);
v___x_1800_ = lean_unsigned_to_nat(0u);
v___x_1801_ = lean_array_get_size(v_alts_1799_);
v___x_1802_ = lean_nat_dec_lt(v___x_1800_, v___x_1801_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; lean_object* v___x_1805_; 
lean_dec_ref(v_alts_1799_);
lean_dec_ref(v_f_1769_);
v___x_1803_ = lean_box(v___x_1802_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set_tag(v___x_1797_, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1803_);
v___x_1805_ = v___x_1797_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v___x_1803_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
else
{
if (v___x_1802_ == 0)
{
lean_object* v___x_1807_; lean_object* v___x_1809_; 
lean_dec_ref(v_alts_1799_);
lean_dec_ref(v_f_1769_);
v___x_1807_ = lean_box(v___x_1802_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set_tag(v___x_1797_, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1807_);
v___x_1809_ = v___x_1797_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
else
{
size_t v___x_1811_; size_t v___x_1812_; lean_object* v___x_1813_; 
lean_del_object(v___x_1797_);
v___x_1811_ = ((size_t)0ULL);
v___x_1812_ = lean_usize_of_nat(v___x_1801_);
v___x_1813_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(v_pu_1768_, v_f_1769_, v_alts_1799_, v___x_1811_, v___x_1812_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
lean_dec_ref(v_alts_1799_);
return v___x_1813_;
}
}
}
}
case 7:
{
lean_object* v_k_1815_; 
v_k_1815_ = lean_ctor_get(v_a_1770_, 3);
lean_inc_ref(v_k_1815_);
lean_dec_ref_known(v_a_1770_, 4);
v_a_1770_ = v_k_1815_;
goto _start;
}
case 8:
{
lean_object* v_k_1817_; 
v_k_1817_ = lean_ctor_get(v_a_1770_, 3);
lean_inc_ref(v_k_1817_);
lean_dec_ref_known(v_a_1770_, 4);
v_a_1770_ = v_k_1817_;
goto _start;
}
case 9:
{
lean_object* v_k_1819_; 
v_k_1819_ = lean_ctor_get(v_a_1770_, 5);
lean_inc_ref(v_k_1819_);
lean_dec_ref_known(v_a_1770_, 6);
v_a_1770_ = v_k_1819_;
goto _start;
}
case 10:
{
lean_object* v_k_1821_; 
v_k_1821_ = lean_ctor_get(v_a_1770_, 2);
lean_inc_ref(v_k_1821_);
lean_dec_ref_known(v_a_1770_, 3);
v_a_1770_ = v_k_1821_;
goto _start;
}
case 11:
{
lean_object* v_k_1823_; 
v_k_1823_ = lean_ctor_get(v_a_1770_, 2);
lean_inc_ref(v_k_1823_);
lean_dec_ref_known(v_a_1770_, 3);
v_a_1770_ = v_k_1823_;
goto _start;
}
case 12:
{
lean_object* v_k_1825_; 
v_k_1825_ = lean_ctor_get(v_a_1770_, 3);
lean_inc_ref(v_k_1825_);
lean_dec_ref_known(v_a_1770_, 4);
v_a_1770_ = v_k_1825_;
goto _start;
}
case 13:
{
lean_object* v_k_1827_; 
v_k_1827_ = lean_ctor_get(v_a_1770_, 1);
lean_inc_ref(v_k_1827_);
lean_dec_ref_known(v_a_1770_, 2);
v_a_1770_ = v_k_1827_;
goto _start;
}
default: 
{
uint8_t v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_dec_ref(v_a_1770_);
lean_dec_ref(v_f_1769_);
v___x_1829_ = 0;
v___x_1830_ = lean_box(v___x_1829_);
v___x_1831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
return v___x_1831_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(uint8_t v_pu_1832_, lean_object* v_f_1833_, lean_object* v_as_1834_, size_t v_i_1835_, size_t v_stop_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
uint8_t v___x_1842_; 
v___x_1842_ = lean_usize_dec_eq(v_i_1835_, v_stop_1836_);
if (v___x_1842_ == 0)
{
uint8_t v___x_1843_; lean_object* v___y_1845_; lean_object* v___x_1860_; 
v___x_1843_ = 1;
v___x_1860_ = lean_array_uget_borrowed(v_as_1834_, v_i_1835_);
switch(lean_obj_tag(v___x_1860_))
{
case 0:
{
lean_object* v_code_1861_; 
v_code_1861_ = lean_ctor_get(v___x_1860_, 2);
lean_inc_ref(v_code_1861_);
v___y_1845_ = v_code_1861_;
goto v___jp_1844_;
}
case 1:
{
lean_object* v_code_1862_; 
v_code_1862_ = lean_ctor_get(v___x_1860_, 1);
lean_inc_ref(v_code_1862_);
v___y_1845_ = v_code_1862_;
goto v___jp_1844_;
}
default: 
{
lean_object* v_code_1863_; 
v_code_1863_ = lean_ctor_get(v___x_1860_, 0);
lean_inc_ref(v_code_1863_);
v___y_1845_ = v_code_1863_;
goto v___jp_1844_;
}
}
v___jp_1844_:
{
lean_object* v___x_1846_; 
lean_inc_ref(v_f_1833_);
v___x_1846_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1832_, v_f_1833_, v___y_1845_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_);
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1859_; 
v_a_1847_ = lean_ctor_get(v___x_1846_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1849_ = v___x_1846_;
v_isShared_1850_ = v_isSharedCheck_1859_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_dec(v___x_1846_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1859_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
uint8_t v___x_1851_; 
v___x_1851_ = lean_unbox(v_a_1847_);
lean_dec(v_a_1847_);
if (v___x_1851_ == 0)
{
size_t v___x_1852_; size_t v___x_1853_; 
lean_del_object(v___x_1849_);
v___x_1852_ = ((size_t)1ULL);
v___x_1853_ = lean_usize_add(v_i_1835_, v___x_1852_);
v_i_1835_ = v___x_1853_;
goto _start;
}
else
{
lean_object* v___x_1855_; lean_object* v___x_1857_; 
lean_dec_ref(v_f_1833_);
v___x_1855_ = lean_box(v___x_1843_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 0, v___x_1855_);
v___x_1857_ = v___x_1849_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___x_1855_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
else
{
lean_dec_ref(v_f_1833_);
return v___x_1846_;
}
}
}
else
{
uint8_t v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
lean_dec_ref(v_f_1833_);
v___x_1864_ = 0;
v___x_1865_ = lean_box(v___x_1864_);
v___x_1866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1865_);
return v___x_1866_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0___boxed(lean_object* v_pu_1867_, lean_object* v_f_1868_, lean_object* v_as_1869_, lean_object* v_i_1870_, lean_object* v_stop_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
uint8_t v_pu_boxed_1877_; size_t v_i_boxed_1878_; size_t v_stop_boxed_1879_; lean_object* v_res_1880_; 
v_pu_boxed_1877_ = lean_unbox(v_pu_1867_);
v_i_boxed_1878_ = lean_unbox_usize(v_i_1870_);
lean_dec(v_i_1870_);
v_stop_boxed_1879_ = lean_unbox_usize(v_stop_1871_);
lean_dec(v_stop_1871_);
v_res_1880_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(v_pu_boxed_1877_, v_f_1868_, v_as_1869_, v_i_boxed_1878_, v_stop_boxed_1879_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec_ref(v_as_1869_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed(lean_object* v_pu_1881_, lean_object* v_f_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_){
_start:
{
uint8_t v_pu_boxed_1889_; lean_object* v_res_1890_; 
v_pu_boxed_1889_ = lean_unbox(v_pu_1881_);
v_res_1890_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_boxed_1889_, v_f_1882_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_);
lean_dec(v_a_1887_);
lean_dec_ref(v_a_1886_);
lean_dec(v_a_1885_);
lean_dec_ref(v_a_1884_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(uint8_t v_pu_1891_, lean_object* v_f_1892_, lean_object* v_as_1893_, size_t v_i_1894_, size_t v_stop_1895_, lean_object* v_b_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_a_1903_; uint8_t v___x_1907_; 
v___x_1907_ = lean_usize_dec_eq(v_i_1894_, v_stop_1895_);
if (v___x_1907_ == 0)
{
lean_object* v___x_1908_; lean_object* v_value_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1908_ = lean_array_uget_borrowed(v_as_1893_, v_i_1894_);
v_value_1909_ = lean_ctor_get(v___x_1908_, 1);
v___x_1910_ = lean_box(v_pu_1891_);
lean_inc_ref(v_f_1892_);
v___x_1911_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed), 8, 2);
lean_closure_set(v___x_1911_, 0, v___x_1910_);
lean_closure_set(v___x_1911_, 1, v_f_1892_);
lean_inc_ref(v_value_1909_);
v___x_1912_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1909_, v___x_1911_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; uint8_t v___x_1914_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
v___x_1914_ = lean_unbox(v_a_1913_);
lean_dec(v_a_1913_);
if (v___x_1914_ == 0)
{
v_a_1903_ = v_b_1896_;
goto v___jp_1902_;
}
else
{
lean_object* v___x_1915_; 
lean_inc(v___x_1908_);
v___x_1915_ = lean_array_push(v_b_1896_, v___x_1908_);
v_a_1903_ = v___x_1915_;
goto v___jp_1902_;
}
}
else
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
lean_dec_ref(v_b_1896_);
lean_dec_ref(v_f_1892_);
v_a_1916_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1912_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1912_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
else
{
lean_object* v___x_1924_; 
lean_dec_ref(v_f_1892_);
v___x_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_b_1896_);
return v___x_1924_;
}
v___jp_1902_:
{
size_t v___x_1904_; size_t v___x_1905_; 
v___x_1904_ = ((size_t)1ULL);
v___x_1905_ = lean_usize_add(v_i_1894_, v___x_1904_);
v_i_1894_ = v___x_1905_;
v_b_1896_ = v_a_1903_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0___boxed(lean_object* v_pu_1925_, lean_object* v_f_1926_, lean_object* v_as_1927_, lean_object* v_i_1928_, lean_object* v_stop_1929_, lean_object* v_b_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_){
_start:
{
uint8_t v_pu_boxed_1936_; size_t v_i_boxed_1937_; size_t v_stop_boxed_1938_; lean_object* v_res_1939_; 
v_pu_boxed_1936_ = lean_unbox(v_pu_1925_);
v_i_boxed_1937_ = lean_unbox_usize(v_i_1928_);
lean_dec(v_i_1928_);
v_stop_boxed_1938_ = lean_unbox_usize(v_stop_1929_);
lean_dec(v_stop_1929_);
v_res_1939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(v_pu_boxed_1936_, v_f_1926_, v_as_1927_, v_i_boxed_1937_, v_stop_boxed_1938_, v_b_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
lean_dec(v___y_1934_);
lean_dec_ref(v___y_1933_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec_ref(v_as_1927_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp(uint8_t v_pu_1940_, lean_object* v_f_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; uint8_t v___x_1951_; 
v___x_1948_ = lean_unsigned_to_nat(0u);
v___x_1949_ = lean_array_get_size(v_a_1942_);
v___x_1950_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_1951_ = lean_nat_dec_lt(v___x_1948_, v___x_1949_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1952_; 
lean_dec_ref(v_f_1941_);
v___x_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1950_);
return v___x_1952_;
}
else
{
size_t v___x_1953_; size_t v___x_1954_; lean_object* v___x_1955_; 
v___x_1953_ = ((size_t)0ULL);
v___x_1954_ = lean_usize_of_nat(v___x_1949_);
v___x_1955_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(v_pu_1940_, v_f_1941_, v_a_1942_, v___x_1953_, v___x_1954_, v___x_1950_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_);
return v___x_1955_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp___boxed(lean_object* v_pu_1956_, lean_object* v_f_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_){
_start:
{
uint8_t v_pu_boxed_1964_; lean_object* v_res_1965_; 
v_pu_boxed_1964_ = lean_unbox(v_pu_1956_);
v_res_1965_ = l_Lean_Compiler_LCNF_Probe_filterByJp(v_pu_boxed_1964_, v_f_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_);
lean_dec(v_a_1962_);
lean_dec_ref(v_a_1961_);
lean_dec(v_a_1960_);
lean_dec_ref(v_a_1959_);
lean_dec_ref(v_a_1958_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(uint8_t v_pu_1966_, lean_object* v_f_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_){
_start:
{
switch(lean_obj_tag(v_a_1968_))
{
case 0:
{
lean_object* v_k_1974_; 
v_k_1974_ = lean_ctor_get(v_a_1968_, 1);
lean_inc_ref(v_k_1974_);
lean_dec_ref_known(v_a_1968_, 2);
v_a_1968_ = v_k_1974_;
goto _start;
}
case 1:
{
lean_object* v_decl_1976_; lean_object* v_k_1977_; lean_object* v___x_1978_; 
v_decl_1976_ = lean_ctor_get(v_a_1968_, 0);
lean_inc_ref_n(v_decl_1976_, 2);
v_k_1977_ = lean_ctor_get(v_a_1968_, 1);
lean_inc_ref(v_k_1977_);
lean_dec_ref_known(v_a_1968_, 2);
lean_inc_ref(v_f_1967_);
lean_inc(v_a_1972_);
lean_inc_ref(v_a_1971_);
lean_inc(v_a_1970_);
lean_inc_ref(v_a_1969_);
v___x_1978_ = lean_apply_6(v_f_1967_, v_decl_1976_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_, lean_box(0));
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; uint8_t v___x_1980_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_a_1979_);
v___x_1980_ = lean_unbox(v_a_1979_);
lean_dec(v_a_1979_);
if (v___x_1980_ == 0)
{
lean_object* v_value_1981_; lean_object* v___x_1982_; 
lean_dec_ref_known(v___x_1978_, 1);
v_value_1981_ = lean_ctor_get(v_decl_1976_, 4);
lean_inc_ref(v_value_1981_);
lean_dec_ref(v_decl_1976_);
lean_inc_ref(v_f_1967_);
v___x_1982_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_1966_, v_f_1967_, v_value_1981_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_);
if (lean_obj_tag(v___x_1982_) == 0)
{
lean_object* v_a_1983_; uint8_t v___x_1984_; 
v_a_1983_ = lean_ctor_get(v___x_1982_, 0);
lean_inc(v_a_1983_);
v___x_1984_ = lean_unbox(v_a_1983_);
lean_dec(v_a_1983_);
if (v___x_1984_ == 0)
{
lean_dec_ref_known(v___x_1982_, 1);
v_a_1968_ = v_k_1977_;
goto _start;
}
else
{
lean_dec_ref(v_k_1977_);
lean_dec_ref(v_f_1967_);
return v___x_1982_;
}
}
else
{
lean_dec_ref(v_k_1977_);
lean_dec_ref(v_f_1967_);
return v___x_1982_;
}
}
else
{
lean_dec_ref(v_k_1977_);
lean_dec_ref(v_decl_1976_);
lean_dec_ref(v_f_1967_);
return v___x_1978_;
}
}
else
{
lean_dec_ref(v_k_1977_);
lean_dec_ref(v_decl_1976_);
lean_dec_ref(v_f_1967_);
return v___x_1978_;
}
}
case 2:
{
lean_object* v_decl_1986_; lean_object* v_k_1987_; lean_object* v___x_1988_; 
v_decl_1986_ = lean_ctor_get(v_a_1968_, 0);
lean_inc_ref_n(v_decl_1986_, 2);
v_k_1987_ = lean_ctor_get(v_a_1968_, 1);
lean_inc_ref(v_k_1987_);
lean_dec_ref_known(v_a_1968_, 2);
lean_inc_ref(v_f_1967_);
lean_inc(v_a_1972_);
lean_inc_ref(v_a_1971_);
lean_inc(v_a_1970_);
lean_inc_ref(v_a_1969_);
v___x_1988_ = lean_apply_6(v_f_1967_, v_decl_1986_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_, lean_box(0));
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; uint8_t v___x_1990_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
v___x_1990_ = lean_unbox(v_a_1989_);
lean_dec(v_a_1989_);
if (v___x_1990_ == 0)
{
lean_object* v_value_1991_; lean_object* v___x_1992_; 
lean_dec_ref_known(v___x_1988_, 1);
v_value_1991_ = lean_ctor_get(v_decl_1986_, 4);
lean_inc_ref(v_value_1991_);
lean_dec_ref(v_decl_1986_);
lean_inc_ref(v_f_1967_);
v___x_1992_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_1966_, v_f_1967_, v_value_1991_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; uint8_t v___x_1994_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_1993_);
v___x_1994_ = lean_unbox(v_a_1993_);
lean_dec(v_a_1993_);
if (v___x_1994_ == 0)
{
lean_dec_ref_known(v___x_1992_, 1);
v_a_1968_ = v_k_1987_;
goto _start;
}
else
{
lean_dec_ref(v_k_1987_);
lean_dec_ref(v_f_1967_);
return v___x_1992_;
}
}
else
{
lean_dec_ref(v_k_1987_);
lean_dec_ref(v_f_1967_);
return v___x_1992_;
}
}
else
{
lean_dec_ref(v_k_1987_);
lean_dec_ref(v_decl_1986_);
lean_dec_ref(v_f_1967_);
return v___x_1988_;
}
}
else
{
lean_dec_ref(v_k_1987_);
lean_dec_ref(v_decl_1986_);
lean_dec_ref(v_f_1967_);
return v___x_1988_;
}
}
case 4:
{
lean_object* v_cases_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2015_; 
v_cases_1996_ = lean_ctor_get(v_a_1968_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_a_1968_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_1998_ = v_a_1968_;
v_isShared_1999_ = v_isSharedCheck_2015_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_cases_1996_);
lean_dec(v_a_1968_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2015_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v_alts_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; 
v_alts_2000_ = lean_ctor_get(v_cases_1996_, 3);
lean_inc_ref(v_alts_2000_);
lean_dec_ref(v_cases_1996_);
v___x_2001_ = lean_unsigned_to_nat(0u);
v___x_2002_ = lean_array_get_size(v_alts_2000_);
v___x_2003_ = lean_nat_dec_lt(v___x_2001_, v___x_2002_);
if (v___x_2003_ == 0)
{
lean_object* v___x_2004_; lean_object* v___x_2006_; 
lean_dec_ref(v_alts_2000_);
lean_dec_ref(v_f_1967_);
v___x_2004_ = lean_box(v___x_2003_);
if (v_isShared_1999_ == 0)
{
lean_ctor_set_tag(v___x_1998_, 0);
lean_ctor_set(v___x_1998_, 0, v___x_2004_);
v___x_2006_ = v___x_1998_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_2004_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
else
{
if (v___x_2003_ == 0)
{
lean_object* v___x_2008_; lean_object* v___x_2010_; 
lean_dec_ref(v_alts_2000_);
lean_dec_ref(v_f_1967_);
v___x_2008_ = lean_box(v___x_2003_);
if (v_isShared_1999_ == 0)
{
lean_ctor_set_tag(v___x_1998_, 0);
lean_ctor_set(v___x_1998_, 0, v___x_2008_);
v___x_2010_ = v___x_1998_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_2008_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
else
{
size_t v___x_2012_; size_t v___x_2013_; lean_object* v___x_2014_; 
lean_del_object(v___x_1998_);
v___x_2012_ = ((size_t)0ULL);
v___x_2013_ = lean_usize_of_nat(v___x_2002_);
v___x_2014_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(v_pu_1966_, v_f_1967_, v_alts_2000_, v___x_2012_, v___x_2013_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_);
lean_dec_ref(v_alts_2000_);
return v___x_2014_;
}
}
}
}
case 7:
{
lean_object* v_k_2016_; 
v_k_2016_ = lean_ctor_get(v_a_1968_, 3);
lean_inc_ref(v_k_2016_);
lean_dec_ref_known(v_a_1968_, 4);
v_a_1968_ = v_k_2016_;
goto _start;
}
case 8:
{
lean_object* v_k_2018_; 
v_k_2018_ = lean_ctor_get(v_a_1968_, 3);
lean_inc_ref(v_k_2018_);
lean_dec_ref_known(v_a_1968_, 4);
v_a_1968_ = v_k_2018_;
goto _start;
}
case 9:
{
lean_object* v_k_2020_; 
v_k_2020_ = lean_ctor_get(v_a_1968_, 5);
lean_inc_ref(v_k_2020_);
lean_dec_ref_known(v_a_1968_, 6);
v_a_1968_ = v_k_2020_;
goto _start;
}
case 10:
{
lean_object* v_k_2022_; 
v_k_2022_ = lean_ctor_get(v_a_1968_, 2);
lean_inc_ref(v_k_2022_);
lean_dec_ref_known(v_a_1968_, 3);
v_a_1968_ = v_k_2022_;
goto _start;
}
case 11:
{
lean_object* v_k_2024_; 
v_k_2024_ = lean_ctor_get(v_a_1968_, 2);
lean_inc_ref(v_k_2024_);
lean_dec_ref_known(v_a_1968_, 3);
v_a_1968_ = v_k_2024_;
goto _start;
}
case 12:
{
lean_object* v_k_2026_; 
v_k_2026_ = lean_ctor_get(v_a_1968_, 3);
lean_inc_ref(v_k_2026_);
lean_dec_ref_known(v_a_1968_, 4);
v_a_1968_ = v_k_2026_;
goto _start;
}
case 13:
{
lean_object* v_k_2028_; 
v_k_2028_ = lean_ctor_get(v_a_1968_, 1);
lean_inc_ref(v_k_2028_);
lean_dec_ref_known(v_a_1968_, 2);
v_a_1968_ = v_k_2028_;
goto _start;
}
default: 
{
uint8_t v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
lean_dec_ref(v_a_1968_);
lean_dec_ref(v_f_1967_);
v___x_2030_ = 0;
v___x_2031_ = lean_box(v___x_2030_);
v___x_2032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2032_, 0, v___x_2031_);
return v___x_2032_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(uint8_t v_pu_2033_, lean_object* v_f_2034_, lean_object* v_as_2035_, size_t v_i_2036_, size_t v_stop_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
uint8_t v___x_2043_; 
v___x_2043_ = lean_usize_dec_eq(v_i_2036_, v_stop_2037_);
if (v___x_2043_ == 0)
{
uint8_t v___x_2044_; lean_object* v___y_2046_; lean_object* v___x_2061_; 
v___x_2044_ = 1;
v___x_2061_ = lean_array_uget_borrowed(v_as_2035_, v_i_2036_);
switch(lean_obj_tag(v___x_2061_))
{
case 0:
{
lean_object* v_code_2062_; 
v_code_2062_ = lean_ctor_get(v___x_2061_, 2);
lean_inc_ref(v_code_2062_);
v___y_2046_ = v_code_2062_;
goto v___jp_2045_;
}
case 1:
{
lean_object* v_code_2063_; 
v_code_2063_ = lean_ctor_get(v___x_2061_, 1);
lean_inc_ref(v_code_2063_);
v___y_2046_ = v_code_2063_;
goto v___jp_2045_;
}
default: 
{
lean_object* v_code_2064_; 
v_code_2064_ = lean_ctor_get(v___x_2061_, 0);
lean_inc_ref(v_code_2064_);
v___y_2046_ = v_code_2064_;
goto v___jp_2045_;
}
}
v___jp_2045_:
{
lean_object* v___x_2047_; 
lean_inc_ref(v_f_2034_);
v___x_2047_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_2033_, v_f_2034_, v___y_2046_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2060_; 
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2050_ = v___x_2047_;
v_isShared_2051_ = v_isSharedCheck_2060_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2047_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2060_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
uint8_t v___x_2052_; 
v___x_2052_ = lean_unbox(v_a_2048_);
lean_dec(v_a_2048_);
if (v___x_2052_ == 0)
{
size_t v___x_2053_; size_t v___x_2054_; 
lean_del_object(v___x_2050_);
v___x_2053_ = ((size_t)1ULL);
v___x_2054_ = lean_usize_add(v_i_2036_, v___x_2053_);
v_i_2036_ = v___x_2054_;
goto _start;
}
else
{
lean_object* v___x_2056_; lean_object* v___x_2058_; 
lean_dec_ref(v_f_2034_);
v___x_2056_ = lean_box(v___x_2044_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2056_);
v___x_2058_ = v___x_2050_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
else
{
lean_dec_ref(v_f_2034_);
return v___x_2047_;
}
}
}
else
{
uint8_t v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
lean_dec_ref(v_f_2034_);
v___x_2065_ = 0;
v___x_2066_ = lean_box(v___x_2065_);
v___x_2067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2066_);
return v___x_2067_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0___boxed(lean_object* v_pu_2068_, lean_object* v_f_2069_, lean_object* v_as_2070_, lean_object* v_i_2071_, lean_object* v_stop_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
uint8_t v_pu_boxed_2078_; size_t v_i_boxed_2079_; size_t v_stop_boxed_2080_; lean_object* v_res_2081_; 
v_pu_boxed_2078_ = lean_unbox(v_pu_2068_);
v_i_boxed_2079_ = lean_unbox_usize(v_i_2071_);
lean_dec(v_i_2071_);
v_stop_boxed_2080_ = lean_unbox_usize(v_stop_2072_);
lean_dec(v_stop_2072_);
v_res_2081_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(v_pu_boxed_2078_, v_f_2069_, v_as_2070_, v_i_boxed_2079_, v_stop_boxed_2080_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec_ref(v_as_2070_);
return v_res_2081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed(lean_object* v_pu_2082_, lean_object* v_f_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_){
_start:
{
uint8_t v_pu_boxed_2090_; lean_object* v_res_2091_; 
v_pu_boxed_2090_ = lean_unbox(v_pu_2082_);
v_res_2091_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_boxed_2090_, v_f_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_);
lean_dec(v_a_2088_);
lean_dec_ref(v_a_2087_);
lean_dec(v_a_2086_);
lean_dec_ref(v_a_2085_);
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(uint8_t v_pu_2092_, lean_object* v_f_2093_, lean_object* v_as_2094_, size_t v_i_2095_, size_t v_stop_2096_, lean_object* v_b_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v_a_2104_; uint8_t v___x_2108_; 
v___x_2108_ = lean_usize_dec_eq(v_i_2095_, v_stop_2096_);
if (v___x_2108_ == 0)
{
lean_object* v___x_2109_; lean_object* v_value_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2109_ = lean_array_uget_borrowed(v_as_2094_, v_i_2095_);
v_value_2110_ = lean_ctor_get(v___x_2109_, 1);
v___x_2111_ = lean_box(v_pu_2092_);
lean_inc_ref(v_f_2093_);
v___x_2112_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed), 8, 2);
lean_closure_set(v___x_2112_, 0, v___x_2111_);
lean_closure_set(v___x_2112_, 1, v_f_2093_);
lean_inc_ref(v_value_2110_);
v___x_2113_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2110_, v___x_2112_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_);
if (lean_obj_tag(v___x_2113_) == 0)
{
lean_object* v_a_2114_; uint8_t v___x_2115_; 
v_a_2114_ = lean_ctor_get(v___x_2113_, 0);
lean_inc(v_a_2114_);
lean_dec_ref_known(v___x_2113_, 1);
v___x_2115_ = lean_unbox(v_a_2114_);
lean_dec(v_a_2114_);
if (v___x_2115_ == 0)
{
v_a_2104_ = v_b_2097_;
goto v___jp_2103_;
}
else
{
lean_object* v___x_2116_; 
lean_inc(v___x_2109_);
v___x_2116_ = lean_array_push(v_b_2097_, v___x_2109_);
v_a_2104_ = v___x_2116_;
goto v___jp_2103_;
}
}
else
{
lean_object* v_a_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2124_; 
lean_dec_ref(v_b_2097_);
lean_dec_ref(v_f_2093_);
v_a_2117_ = lean_ctor_get(v___x_2113_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2119_ = v___x_2113_;
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_a_2117_);
lean_dec(v___x_2113_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2124_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2122_; 
if (v_isShared_2120_ == 0)
{
v___x_2122_ = v___x_2119_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2117_);
v___x_2122_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
return v___x_2122_;
}
}
}
}
else
{
lean_object* v___x_2125_; 
lean_dec_ref(v_f_2093_);
v___x_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2125_, 0, v_b_2097_);
return v___x_2125_;
}
v___jp_2103_:
{
size_t v___x_2105_; size_t v___x_2106_; 
v___x_2105_ = ((size_t)1ULL);
v___x_2106_ = lean_usize_add(v_i_2095_, v___x_2105_);
v_i_2095_ = v___x_2106_;
v_b_2097_ = v_a_2104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0___boxed(lean_object* v_pu_2126_, lean_object* v_f_2127_, lean_object* v_as_2128_, lean_object* v_i_2129_, lean_object* v_stop_2130_, lean_object* v_b_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_){
_start:
{
uint8_t v_pu_boxed_2137_; size_t v_i_boxed_2138_; size_t v_stop_boxed_2139_; lean_object* v_res_2140_; 
v_pu_boxed_2137_ = lean_unbox(v_pu_2126_);
v_i_boxed_2138_ = lean_unbox_usize(v_i_2129_);
lean_dec(v_i_2129_);
v_stop_boxed_2139_ = lean_unbox_usize(v_stop_2130_);
lean_dec(v_stop_2130_);
v_res_2140_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(v_pu_boxed_2137_, v_f_2127_, v_as_2128_, v_i_boxed_2138_, v_stop_boxed_2139_, v_b_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec_ref(v_as_2128_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl(uint8_t v_pu_2141_, lean_object* v_f_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_){
_start:
{
lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; uint8_t v___x_2152_; 
v___x_2149_ = lean_unsigned_to_nat(0u);
v___x_2150_ = lean_array_get_size(v_a_2143_);
v___x_2151_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2152_ = lean_nat_dec_lt(v___x_2149_, v___x_2150_);
if (v___x_2152_ == 0)
{
lean_object* v___x_2153_; 
lean_dec_ref(v_f_2142_);
v___x_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2153_, 0, v___x_2151_);
return v___x_2153_;
}
else
{
size_t v___x_2154_; size_t v___x_2155_; lean_object* v___x_2156_; 
v___x_2154_ = ((size_t)0ULL);
v___x_2155_ = lean_usize_of_nat(v___x_2150_);
v___x_2156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(v_pu_2141_, v_f_2142_, v_a_2143_, v___x_2154_, v___x_2155_, v___x_2151_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_);
return v___x_2156_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl___boxed(lean_object* v_pu_2157_, lean_object* v_f_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_){
_start:
{
uint8_t v_pu_boxed_2165_; lean_object* v_res_2166_; 
v_pu_boxed_2165_ = lean_unbox(v_pu_2157_);
v_res_2166_ = l_Lean_Compiler_LCNF_Probe_filterByFunDecl(v_pu_boxed_2165_, v_f_2158_, v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_);
lean_dec(v_a_2163_);
lean_dec_ref(v_a_2162_);
lean_dec(v_a_2161_);
lean_dec_ref(v_a_2160_);
lean_dec_ref(v_a_2159_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(uint8_t v_pu_2167_, lean_object* v_f_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_){
_start:
{
switch(lean_obj_tag(v_a_2169_))
{
case 0:
{
lean_object* v_k_2175_; 
v_k_2175_ = lean_ctor_get(v_a_2169_, 1);
lean_inc_ref(v_k_2175_);
lean_dec_ref_known(v_a_2169_, 2);
v_a_2169_ = v_k_2175_;
goto _start;
}
case 1:
{
lean_object* v_decl_2177_; lean_object* v_k_2178_; lean_object* v_value_2179_; lean_object* v___x_2180_; 
v_decl_2177_ = lean_ctor_get(v_a_2169_, 0);
lean_inc_ref(v_decl_2177_);
v_k_2178_ = lean_ctor_get(v_a_2169_, 1);
lean_inc_ref(v_k_2178_);
lean_dec_ref_known(v_a_2169_, 2);
v_value_2179_ = lean_ctor_get(v_decl_2177_, 4);
lean_inc_ref(v_value_2179_);
lean_dec_ref(v_decl_2177_);
lean_inc_ref(v_f_2168_);
v___x_2180_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2167_, v_f_2168_, v_value_2179_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v_a_2181_; uint8_t v___x_2182_; 
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_a_2181_);
v___x_2182_ = lean_unbox(v_a_2181_);
lean_dec(v_a_2181_);
if (v___x_2182_ == 0)
{
lean_dec_ref_known(v___x_2180_, 1);
v_a_2169_ = v_k_2178_;
goto _start;
}
else
{
lean_dec_ref(v_k_2178_);
lean_dec_ref(v_f_2168_);
return v___x_2180_;
}
}
else
{
lean_dec_ref(v_k_2178_);
lean_dec_ref(v_f_2168_);
return v___x_2180_;
}
}
case 2:
{
lean_object* v_decl_2184_; lean_object* v_k_2185_; lean_object* v_value_2186_; lean_object* v___x_2187_; 
v_decl_2184_ = lean_ctor_get(v_a_2169_, 0);
lean_inc_ref(v_decl_2184_);
v_k_2185_ = lean_ctor_get(v_a_2169_, 1);
lean_inc_ref(v_k_2185_);
lean_dec_ref_known(v_a_2169_, 2);
v_value_2186_ = lean_ctor_get(v_decl_2184_, 4);
lean_inc_ref(v_value_2186_);
lean_dec_ref(v_decl_2184_);
lean_inc_ref(v_f_2168_);
v___x_2187_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2167_, v_f_2168_, v_value_2186_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v_a_2188_; uint8_t v___x_2189_; 
v_a_2188_ = lean_ctor_get(v___x_2187_, 0);
lean_inc(v_a_2188_);
v___x_2189_ = lean_unbox(v_a_2188_);
lean_dec(v_a_2188_);
if (v___x_2189_ == 0)
{
lean_dec_ref_known(v___x_2187_, 1);
v_a_2169_ = v_k_2185_;
goto _start;
}
else
{
lean_dec_ref(v_k_2185_);
lean_dec_ref(v_f_2168_);
return v___x_2187_;
}
}
else
{
lean_dec_ref(v_k_2185_);
lean_dec_ref(v_f_2168_);
return v___x_2187_;
}
}
case 4:
{
lean_object* v_cases_2191_; lean_object* v___x_2192_; 
v_cases_2191_ = lean_ctor_get(v_a_2169_, 0);
lean_inc_ref_n(v_cases_2191_, 2);
lean_dec_ref_known(v_a_2169_, 1);
lean_inc_ref(v_f_2168_);
lean_inc(v_a_2173_);
lean_inc_ref(v_a_2172_);
lean_inc(v_a_2171_);
lean_inc_ref(v_a_2170_);
v___x_2192_ = lean_apply_6(v_f_2168_, v_cases_2191_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, lean_box(0));
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; uint8_t v___x_2194_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2193_);
v___x_2194_ = lean_unbox(v_a_2193_);
lean_dec(v_a_2193_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2213_; 
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2213_ == 0)
{
lean_object* v_unused_2214_; 
v_unused_2214_ = lean_ctor_get(v___x_2192_, 0);
lean_dec(v_unused_2214_);
v___x_2196_ = v___x_2192_;
v_isShared_2197_ = v_isSharedCheck_2213_;
goto v_resetjp_2195_;
}
else
{
lean_dec(v___x_2192_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2213_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v_alts_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; uint8_t v___x_2201_; 
v_alts_2198_ = lean_ctor_get(v_cases_2191_, 3);
lean_inc_ref(v_alts_2198_);
lean_dec_ref(v_cases_2191_);
v___x_2199_ = lean_unsigned_to_nat(0u);
v___x_2200_ = lean_array_get_size(v_alts_2198_);
v___x_2201_ = lean_nat_dec_lt(v___x_2199_, v___x_2200_);
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; lean_object* v___x_2204_; 
lean_dec_ref(v_alts_2198_);
lean_dec_ref(v_f_2168_);
v___x_2202_ = lean_box(v___x_2201_);
if (v_isShared_2197_ == 0)
{
lean_ctor_set(v___x_2196_, 0, v___x_2202_);
v___x_2204_ = v___x_2196_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v___x_2202_);
v___x_2204_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
return v___x_2204_;
}
}
else
{
if (v___x_2201_ == 0)
{
lean_object* v___x_2206_; lean_object* v___x_2208_; 
lean_dec_ref(v_alts_2198_);
lean_dec_ref(v_f_2168_);
v___x_2206_ = lean_box(v___x_2201_);
if (v_isShared_2197_ == 0)
{
lean_ctor_set(v___x_2196_, 0, v___x_2206_);
v___x_2208_ = v___x_2196_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2206_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
else
{
size_t v___x_2210_; size_t v___x_2211_; lean_object* v___x_2212_; 
lean_del_object(v___x_2196_);
v___x_2210_ = ((size_t)0ULL);
v___x_2211_ = lean_usize_of_nat(v___x_2200_);
v___x_2212_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(v_pu_2167_, v_f_2168_, v_alts_2198_, v___x_2210_, v___x_2211_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
lean_dec_ref(v_alts_2198_);
return v___x_2212_;
}
}
}
}
else
{
lean_dec_ref(v_cases_2191_);
lean_dec_ref(v_f_2168_);
return v___x_2192_;
}
}
else
{
lean_dec_ref(v_cases_2191_);
lean_dec_ref(v_f_2168_);
return v___x_2192_;
}
}
case 7:
{
lean_object* v_k_2215_; 
v_k_2215_ = lean_ctor_get(v_a_2169_, 3);
lean_inc_ref(v_k_2215_);
lean_dec_ref_known(v_a_2169_, 4);
v_a_2169_ = v_k_2215_;
goto _start;
}
case 8:
{
lean_object* v_k_2217_; 
v_k_2217_ = lean_ctor_get(v_a_2169_, 3);
lean_inc_ref(v_k_2217_);
lean_dec_ref_known(v_a_2169_, 4);
v_a_2169_ = v_k_2217_;
goto _start;
}
case 9:
{
lean_object* v_k_2219_; 
v_k_2219_ = lean_ctor_get(v_a_2169_, 5);
lean_inc_ref(v_k_2219_);
lean_dec_ref_known(v_a_2169_, 6);
v_a_2169_ = v_k_2219_;
goto _start;
}
case 10:
{
lean_object* v_k_2221_; 
v_k_2221_ = lean_ctor_get(v_a_2169_, 2);
lean_inc_ref(v_k_2221_);
lean_dec_ref_known(v_a_2169_, 3);
v_a_2169_ = v_k_2221_;
goto _start;
}
case 11:
{
lean_object* v_k_2223_; 
v_k_2223_ = lean_ctor_get(v_a_2169_, 2);
lean_inc_ref(v_k_2223_);
lean_dec_ref_known(v_a_2169_, 3);
v_a_2169_ = v_k_2223_;
goto _start;
}
case 12:
{
lean_object* v_k_2225_; 
v_k_2225_ = lean_ctor_get(v_a_2169_, 3);
lean_inc_ref(v_k_2225_);
lean_dec_ref_known(v_a_2169_, 4);
v_a_2169_ = v_k_2225_;
goto _start;
}
case 13:
{
lean_object* v_k_2227_; 
v_k_2227_ = lean_ctor_get(v_a_2169_, 1);
lean_inc_ref(v_k_2227_);
lean_dec_ref_known(v_a_2169_, 2);
v_a_2169_ = v_k_2227_;
goto _start;
}
default: 
{
uint8_t v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
lean_dec_ref(v_a_2169_);
lean_dec_ref(v_f_2168_);
v___x_2229_ = 0;
v___x_2230_ = lean_box(v___x_2229_);
v___x_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2230_);
return v___x_2231_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(uint8_t v_pu_2232_, lean_object* v_f_2233_, lean_object* v_as_2234_, size_t v_i_2235_, size_t v_stop_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
uint8_t v___x_2242_; 
v___x_2242_ = lean_usize_dec_eq(v_i_2235_, v_stop_2236_);
if (v___x_2242_ == 0)
{
uint8_t v___x_2243_; lean_object* v___y_2245_; lean_object* v___x_2260_; 
v___x_2243_ = 1;
v___x_2260_ = lean_array_uget_borrowed(v_as_2234_, v_i_2235_);
switch(lean_obj_tag(v___x_2260_))
{
case 0:
{
lean_object* v_code_2261_; 
v_code_2261_ = lean_ctor_get(v___x_2260_, 2);
lean_inc_ref(v_code_2261_);
v___y_2245_ = v_code_2261_;
goto v___jp_2244_;
}
case 1:
{
lean_object* v_code_2262_; 
v_code_2262_ = lean_ctor_get(v___x_2260_, 1);
lean_inc_ref(v_code_2262_);
v___y_2245_ = v_code_2262_;
goto v___jp_2244_;
}
default: 
{
lean_object* v_code_2263_; 
v_code_2263_ = lean_ctor_get(v___x_2260_, 0);
lean_inc_ref(v_code_2263_);
v___y_2245_ = v_code_2263_;
goto v___jp_2244_;
}
}
v___jp_2244_:
{
lean_object* v___x_2246_; 
lean_inc_ref(v_f_2233_);
v___x_2246_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2232_, v_f_2233_, v___y_2245_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2259_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2259_ == 0)
{
v___x_2249_ = v___x_2246_;
v_isShared_2250_ = v_isSharedCheck_2259_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_a_2247_);
lean_dec(v___x_2246_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2259_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
uint8_t v___x_2251_; 
v___x_2251_ = lean_unbox(v_a_2247_);
lean_dec(v_a_2247_);
if (v___x_2251_ == 0)
{
size_t v___x_2252_; size_t v___x_2253_; 
lean_del_object(v___x_2249_);
v___x_2252_ = ((size_t)1ULL);
v___x_2253_ = lean_usize_add(v_i_2235_, v___x_2252_);
v_i_2235_ = v___x_2253_;
goto _start;
}
else
{
lean_object* v___x_2255_; lean_object* v___x_2257_; 
lean_dec_ref(v_f_2233_);
v___x_2255_ = lean_box(v___x_2243_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 0, v___x_2255_);
v___x_2257_ = v___x_2249_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v___x_2255_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
}
else
{
lean_dec_ref(v_f_2233_);
return v___x_2246_;
}
}
}
else
{
uint8_t v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
lean_dec_ref(v_f_2233_);
v___x_2264_ = 0;
v___x_2265_ = lean_box(v___x_2264_);
v___x_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
return v___x_2266_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0___boxed(lean_object* v_pu_2267_, lean_object* v_f_2268_, lean_object* v_as_2269_, lean_object* v_i_2270_, lean_object* v_stop_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
uint8_t v_pu_boxed_2277_; size_t v_i_boxed_2278_; size_t v_stop_boxed_2279_; lean_object* v_res_2280_; 
v_pu_boxed_2277_ = lean_unbox(v_pu_2267_);
v_i_boxed_2278_ = lean_unbox_usize(v_i_2270_);
lean_dec(v_i_2270_);
v_stop_boxed_2279_ = lean_unbox_usize(v_stop_2271_);
lean_dec(v_stop_2271_);
v_res_2280_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(v_pu_boxed_2277_, v_f_2268_, v_as_2269_, v_i_boxed_2278_, v_stop_boxed_2279_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec_ref(v_as_2269_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed(lean_object* v_pu_2281_, lean_object* v_f_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_){
_start:
{
uint8_t v_pu_boxed_2289_; lean_object* v_res_2290_; 
v_pu_boxed_2289_ = lean_unbox(v_pu_2281_);
v_res_2290_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_boxed_2289_, v_f_2282_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_);
lean_dec(v_a_2287_);
lean_dec_ref(v_a_2286_);
lean_dec(v_a_2285_);
lean_dec_ref(v_a_2284_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(uint8_t v_pu_2291_, lean_object* v_f_2292_, lean_object* v_as_2293_, size_t v_i_2294_, size_t v_stop_2295_, lean_object* v_b_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v_a_2303_; uint8_t v___x_2307_; 
v___x_2307_ = lean_usize_dec_eq(v_i_2294_, v_stop_2295_);
if (v___x_2307_ == 0)
{
lean_object* v___x_2308_; lean_object* v_value_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2308_ = lean_array_uget_borrowed(v_as_2293_, v_i_2294_);
v_value_2309_ = lean_ctor_get(v___x_2308_, 1);
v___x_2310_ = lean_box(v_pu_2291_);
lean_inc_ref(v_f_2292_);
v___x_2311_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed), 8, 2);
lean_closure_set(v___x_2311_, 0, v___x_2310_);
lean_closure_set(v___x_2311_, 1, v_f_2292_);
lean_inc_ref(v_value_2309_);
v___x_2312_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2309_, v___x_2311_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; uint8_t v___x_2314_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
lean_dec_ref_known(v___x_2312_, 1);
v___x_2314_ = lean_unbox(v_a_2313_);
lean_dec(v_a_2313_);
if (v___x_2314_ == 0)
{
v_a_2303_ = v_b_2296_;
goto v___jp_2302_;
}
else
{
lean_object* v___x_2315_; 
lean_inc(v___x_2308_);
v___x_2315_ = lean_array_push(v_b_2296_, v___x_2308_);
v_a_2303_ = v___x_2315_;
goto v___jp_2302_;
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec_ref(v_b_2296_);
lean_dec_ref(v_f_2292_);
v_a_2316_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2312_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2312_);
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
else
{
lean_object* v___x_2324_; 
lean_dec_ref(v_f_2292_);
v___x_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2324_, 0, v_b_2296_);
return v___x_2324_;
}
v___jp_2302_:
{
size_t v___x_2304_; size_t v___x_2305_; 
v___x_2304_ = ((size_t)1ULL);
v___x_2305_ = lean_usize_add(v_i_2294_, v___x_2304_);
v_i_2294_ = v___x_2305_;
v_b_2296_ = v_a_2303_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0___boxed(lean_object* v_pu_2325_, lean_object* v_f_2326_, lean_object* v_as_2327_, lean_object* v_i_2328_, lean_object* v_stop_2329_, lean_object* v_b_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_){
_start:
{
uint8_t v_pu_boxed_2336_; size_t v_i_boxed_2337_; size_t v_stop_boxed_2338_; lean_object* v_res_2339_; 
v_pu_boxed_2336_ = lean_unbox(v_pu_2325_);
v_i_boxed_2337_ = lean_unbox_usize(v_i_2328_);
lean_dec(v_i_2328_);
v_stop_boxed_2338_ = lean_unbox_usize(v_stop_2329_);
lean_dec(v_stop_2329_);
v_res_2339_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(v_pu_boxed_2336_, v_f_2326_, v_as_2327_, v_i_boxed_2337_, v_stop_boxed_2338_, v_b_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec(v___y_2332_);
lean_dec_ref(v___y_2331_);
lean_dec_ref(v_as_2327_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases(uint8_t v_pu_2340_, lean_object* v_f_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_){
_start:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; uint8_t v___x_2351_; 
v___x_2348_ = lean_unsigned_to_nat(0u);
v___x_2349_ = lean_array_get_size(v_a_2342_);
v___x_2350_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2351_ = lean_nat_dec_lt(v___x_2348_, v___x_2349_);
if (v___x_2351_ == 0)
{
lean_object* v___x_2352_; 
lean_dec_ref(v_f_2341_);
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2350_);
return v___x_2352_;
}
else
{
size_t v___x_2353_; size_t v___x_2354_; lean_object* v___x_2355_; 
v___x_2353_ = ((size_t)0ULL);
v___x_2354_ = lean_usize_of_nat(v___x_2349_);
v___x_2355_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(v_pu_2340_, v_f_2341_, v_a_2342_, v___x_2353_, v___x_2354_, v___x_2350_, v_a_2343_, v_a_2344_, v_a_2345_, v_a_2346_);
return v___x_2355_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases___boxed(lean_object* v_pu_2356_, lean_object* v_f_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_){
_start:
{
uint8_t v_pu_boxed_2364_; lean_object* v_res_2365_; 
v_pu_boxed_2364_ = lean_unbox(v_pu_2356_);
v_res_2365_ = l_Lean_Compiler_LCNF_Probe_filterByCases(v_pu_boxed_2364_, v_f_2357_, v_a_2358_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_);
lean_dec(v_a_2362_);
lean_dec_ref(v_a_2361_);
lean_dec(v_a_2360_);
lean_dec_ref(v_a_2359_);
lean_dec_ref(v_a_2358_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(uint8_t v_pu_2366_, lean_object* v_f_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_){
_start:
{
switch(lean_obj_tag(v_a_2368_))
{
case 0:
{
lean_object* v_k_2374_; 
v_k_2374_ = lean_ctor_get(v_a_2368_, 1);
lean_inc_ref(v_k_2374_);
lean_dec_ref_known(v_a_2368_, 2);
v_a_2368_ = v_k_2374_;
goto _start;
}
case 1:
{
lean_object* v_decl_2376_; lean_object* v_k_2377_; lean_object* v_value_2378_; lean_object* v___x_2379_; 
v_decl_2376_ = lean_ctor_get(v_a_2368_, 0);
lean_inc_ref(v_decl_2376_);
v_k_2377_ = lean_ctor_get(v_a_2368_, 1);
lean_inc_ref(v_k_2377_);
lean_dec_ref_known(v_a_2368_, 2);
v_value_2378_ = lean_ctor_get(v_decl_2376_, 4);
lean_inc_ref(v_value_2378_);
lean_dec_ref(v_decl_2376_);
lean_inc_ref(v_f_2367_);
v___x_2379_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2366_, v_f_2367_, v_value_2378_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; uint8_t v___x_2381_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
v___x_2381_ = lean_unbox(v_a_2380_);
lean_dec(v_a_2380_);
if (v___x_2381_ == 0)
{
lean_dec_ref_known(v___x_2379_, 1);
v_a_2368_ = v_k_2377_;
goto _start;
}
else
{
lean_dec_ref(v_k_2377_);
lean_dec_ref(v_f_2367_);
return v___x_2379_;
}
}
else
{
lean_dec_ref(v_k_2377_);
lean_dec_ref(v_f_2367_);
return v___x_2379_;
}
}
case 2:
{
lean_object* v_decl_2383_; lean_object* v_k_2384_; lean_object* v_value_2385_; lean_object* v___x_2386_; 
v_decl_2383_ = lean_ctor_get(v_a_2368_, 0);
lean_inc_ref(v_decl_2383_);
v_k_2384_ = lean_ctor_get(v_a_2368_, 1);
lean_inc_ref(v_k_2384_);
lean_dec_ref_known(v_a_2368_, 2);
v_value_2385_ = lean_ctor_get(v_decl_2383_, 4);
lean_inc_ref(v_value_2385_);
lean_dec_ref(v_decl_2383_);
lean_inc_ref(v_f_2367_);
v___x_2386_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2366_, v_f_2367_, v_value_2385_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; uint8_t v___x_2388_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
v___x_2388_ = lean_unbox(v_a_2387_);
lean_dec(v_a_2387_);
if (v___x_2388_ == 0)
{
lean_dec_ref_known(v___x_2386_, 1);
v_a_2368_ = v_k_2384_;
goto _start;
}
else
{
lean_dec_ref(v_k_2384_);
lean_dec_ref(v_f_2367_);
return v___x_2386_;
}
}
else
{
lean_dec_ref(v_k_2384_);
lean_dec_ref(v_f_2367_);
return v___x_2386_;
}
}
case 3:
{
lean_object* v_fvarId_2390_; lean_object* v_args_2391_; lean_object* v___x_2392_; 
v_fvarId_2390_ = lean_ctor_get(v_a_2368_, 0);
lean_inc(v_fvarId_2390_);
v_args_2391_ = lean_ctor_get(v_a_2368_, 1);
lean_inc_ref(v_args_2391_);
lean_dec_ref_known(v_a_2368_, 2);
lean_inc(v_a_2372_);
lean_inc_ref(v_a_2371_);
lean_inc(v_a_2370_);
lean_inc_ref(v_a_2369_);
v___x_2392_ = lean_apply_7(v_f_2367_, v_fvarId_2390_, v_args_2391_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_, lean_box(0));
return v___x_2392_;
}
case 4:
{
lean_object* v_cases_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2412_; 
v_cases_2393_ = lean_ctor_get(v_a_2368_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v_a_2368_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2395_ = v_a_2368_;
v_isShared_2396_ = v_isSharedCheck_2412_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_cases_2393_);
lean_dec(v_a_2368_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2412_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v_alts_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; uint8_t v___x_2400_; 
v_alts_2397_ = lean_ctor_get(v_cases_2393_, 3);
lean_inc_ref(v_alts_2397_);
lean_dec_ref(v_cases_2393_);
v___x_2398_ = lean_unsigned_to_nat(0u);
v___x_2399_ = lean_array_get_size(v_alts_2397_);
v___x_2400_ = lean_nat_dec_lt(v___x_2398_, v___x_2399_);
if (v___x_2400_ == 0)
{
lean_object* v___x_2401_; lean_object* v___x_2403_; 
lean_dec_ref(v_alts_2397_);
lean_dec_ref(v_f_2367_);
v___x_2401_ = lean_box(v___x_2400_);
if (v_isShared_2396_ == 0)
{
lean_ctor_set_tag(v___x_2395_, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2401_);
v___x_2403_ = v___x_2395_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v___x_2401_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
else
{
if (v___x_2400_ == 0)
{
lean_object* v___x_2405_; lean_object* v___x_2407_; 
lean_dec_ref(v_alts_2397_);
lean_dec_ref(v_f_2367_);
v___x_2405_ = lean_box(v___x_2400_);
if (v_isShared_2396_ == 0)
{
lean_ctor_set_tag(v___x_2395_, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2405_);
v___x_2407_ = v___x_2395_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v___x_2405_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
else
{
size_t v___x_2409_; size_t v___x_2410_; lean_object* v___x_2411_; 
lean_del_object(v___x_2395_);
v___x_2409_ = ((size_t)0ULL);
v___x_2410_ = lean_usize_of_nat(v___x_2399_);
v___x_2411_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(v_pu_2366_, v_f_2367_, v_alts_2397_, v___x_2409_, v___x_2410_, v_a_2369_, v_a_2370_, v_a_2371_, v_a_2372_);
lean_dec_ref(v_alts_2397_);
return v___x_2411_;
}
}
}
}
case 7:
{
lean_object* v_k_2413_; 
v_k_2413_ = lean_ctor_get(v_a_2368_, 3);
lean_inc_ref(v_k_2413_);
lean_dec_ref_known(v_a_2368_, 4);
v_a_2368_ = v_k_2413_;
goto _start;
}
case 8:
{
lean_object* v_k_2415_; 
v_k_2415_ = lean_ctor_get(v_a_2368_, 3);
lean_inc_ref(v_k_2415_);
lean_dec_ref_known(v_a_2368_, 4);
v_a_2368_ = v_k_2415_;
goto _start;
}
case 9:
{
lean_object* v_k_2417_; 
v_k_2417_ = lean_ctor_get(v_a_2368_, 5);
lean_inc_ref(v_k_2417_);
lean_dec_ref_known(v_a_2368_, 6);
v_a_2368_ = v_k_2417_;
goto _start;
}
case 10:
{
lean_object* v_k_2419_; 
v_k_2419_ = lean_ctor_get(v_a_2368_, 2);
lean_inc_ref(v_k_2419_);
lean_dec_ref_known(v_a_2368_, 3);
v_a_2368_ = v_k_2419_;
goto _start;
}
case 11:
{
lean_object* v_k_2421_; 
v_k_2421_ = lean_ctor_get(v_a_2368_, 2);
lean_inc_ref(v_k_2421_);
lean_dec_ref_known(v_a_2368_, 3);
v_a_2368_ = v_k_2421_;
goto _start;
}
case 12:
{
lean_object* v_k_2423_; 
v_k_2423_ = lean_ctor_get(v_a_2368_, 3);
lean_inc_ref(v_k_2423_);
lean_dec_ref_known(v_a_2368_, 4);
v_a_2368_ = v_k_2423_;
goto _start;
}
case 13:
{
lean_object* v_k_2425_; 
v_k_2425_ = lean_ctor_get(v_a_2368_, 1);
lean_inc_ref(v_k_2425_);
lean_dec_ref_known(v_a_2368_, 2);
v_a_2368_ = v_k_2425_;
goto _start;
}
default: 
{
uint8_t v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
lean_dec_ref(v_a_2368_);
lean_dec_ref(v_f_2367_);
v___x_2427_ = 0;
v___x_2428_ = lean_box(v___x_2427_);
v___x_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2428_);
return v___x_2429_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(uint8_t v_pu_2430_, lean_object* v_f_2431_, lean_object* v_as_2432_, size_t v_i_2433_, size_t v_stop_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
uint8_t v___x_2440_; 
v___x_2440_ = lean_usize_dec_eq(v_i_2433_, v_stop_2434_);
if (v___x_2440_ == 0)
{
uint8_t v___x_2441_; lean_object* v___y_2443_; lean_object* v___x_2458_; 
v___x_2441_ = 1;
v___x_2458_ = lean_array_uget_borrowed(v_as_2432_, v_i_2433_);
switch(lean_obj_tag(v___x_2458_))
{
case 0:
{
lean_object* v_code_2459_; 
v_code_2459_ = lean_ctor_get(v___x_2458_, 2);
lean_inc_ref(v_code_2459_);
v___y_2443_ = v_code_2459_;
goto v___jp_2442_;
}
case 1:
{
lean_object* v_code_2460_; 
v_code_2460_ = lean_ctor_get(v___x_2458_, 1);
lean_inc_ref(v_code_2460_);
v___y_2443_ = v_code_2460_;
goto v___jp_2442_;
}
default: 
{
lean_object* v_code_2461_; 
v_code_2461_ = lean_ctor_get(v___x_2458_, 0);
lean_inc_ref(v_code_2461_);
v___y_2443_ = v_code_2461_;
goto v___jp_2442_;
}
}
v___jp_2442_:
{
lean_object* v___x_2444_; 
lean_inc_ref(v_f_2431_);
v___x_2444_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2430_, v_f_2431_, v___y_2443_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_);
if (lean_obj_tag(v___x_2444_) == 0)
{
lean_object* v_a_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2457_; 
v_a_2445_ = lean_ctor_get(v___x_2444_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2444_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2447_ = v___x_2444_;
v_isShared_2448_ = v_isSharedCheck_2457_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_a_2445_);
lean_dec(v___x_2444_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2457_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
uint8_t v___x_2449_; 
v___x_2449_ = lean_unbox(v_a_2445_);
lean_dec(v_a_2445_);
if (v___x_2449_ == 0)
{
size_t v___x_2450_; size_t v___x_2451_; 
lean_del_object(v___x_2447_);
v___x_2450_ = ((size_t)1ULL);
v___x_2451_ = lean_usize_add(v_i_2433_, v___x_2450_);
v_i_2433_ = v___x_2451_;
goto _start;
}
else
{
lean_object* v___x_2453_; lean_object* v___x_2455_; 
lean_dec_ref(v_f_2431_);
v___x_2453_ = lean_box(v___x_2441_);
if (v_isShared_2448_ == 0)
{
lean_ctor_set(v___x_2447_, 0, v___x_2453_);
v___x_2455_ = v___x_2447_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v___x_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
else
{
lean_dec_ref(v_f_2431_);
return v___x_2444_;
}
}
}
else
{
uint8_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
lean_dec_ref(v_f_2431_);
v___x_2462_ = 0;
v___x_2463_ = lean_box(v___x_2462_);
v___x_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2463_);
return v___x_2464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0___boxed(lean_object* v_pu_2465_, lean_object* v_f_2466_, lean_object* v_as_2467_, lean_object* v_i_2468_, lean_object* v_stop_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_){
_start:
{
uint8_t v_pu_boxed_2475_; size_t v_i_boxed_2476_; size_t v_stop_boxed_2477_; lean_object* v_res_2478_; 
v_pu_boxed_2475_ = lean_unbox(v_pu_2465_);
v_i_boxed_2476_ = lean_unbox_usize(v_i_2468_);
lean_dec(v_i_2468_);
v_stop_boxed_2477_ = lean_unbox_usize(v_stop_2469_);
lean_dec(v_stop_2469_);
v_res_2478_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(v_pu_boxed_2475_, v_f_2466_, v_as_2467_, v_i_boxed_2476_, v_stop_boxed_2477_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec_ref(v_as_2467_);
return v_res_2478_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed(lean_object* v_pu_2479_, lean_object* v_f_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_){
_start:
{
uint8_t v_pu_boxed_2487_; lean_object* v_res_2488_; 
v_pu_boxed_2487_ = lean_unbox(v_pu_2479_);
v_res_2488_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_boxed_2487_, v_f_2480_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_, v_a_2485_);
lean_dec(v_a_2485_);
lean_dec_ref(v_a_2484_);
lean_dec(v_a_2483_);
lean_dec_ref(v_a_2482_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(uint8_t v_pu_2489_, lean_object* v_f_2490_, lean_object* v_as_2491_, size_t v_i_2492_, size_t v_stop_2493_, lean_object* v_b_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
lean_object* v_a_2501_; uint8_t v___x_2505_; 
v___x_2505_ = lean_usize_dec_eq(v_i_2492_, v_stop_2493_);
if (v___x_2505_ == 0)
{
lean_object* v___x_2506_; lean_object* v_value_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2506_ = lean_array_uget_borrowed(v_as_2491_, v_i_2492_);
v_value_2507_ = lean_ctor_get(v___x_2506_, 1);
v___x_2508_ = lean_box(v_pu_2489_);
lean_inc_ref(v_f_2490_);
v___x_2509_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed), 8, 2);
lean_closure_set(v___x_2509_, 0, v___x_2508_);
lean_closure_set(v___x_2509_, 1, v_f_2490_);
lean_inc_ref(v_value_2507_);
v___x_2510_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2507_, v___x_2509_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; uint8_t v___x_2512_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2511_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2512_ = lean_unbox(v_a_2511_);
lean_dec(v_a_2511_);
if (v___x_2512_ == 0)
{
v_a_2501_ = v_b_2494_;
goto v___jp_2500_;
}
else
{
lean_object* v___x_2513_; 
lean_inc(v___x_2506_);
v___x_2513_ = lean_array_push(v_b_2494_, v___x_2506_);
v_a_2501_ = v___x_2513_;
goto v___jp_2500_;
}
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2521_; 
lean_dec_ref(v_b_2494_);
lean_dec_ref(v_f_2490_);
v_a_2514_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2516_ = v___x_2510_;
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v___x_2510_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
lean_object* v___x_2519_; 
if (v_isShared_2517_ == 0)
{
v___x_2519_ = v___x_2516_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_a_2514_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
}
}
else
{
lean_object* v___x_2522_; 
lean_dec_ref(v_f_2490_);
v___x_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2522_, 0, v_b_2494_);
return v___x_2522_;
}
v___jp_2500_:
{
size_t v___x_2502_; size_t v___x_2503_; 
v___x_2502_ = ((size_t)1ULL);
v___x_2503_ = lean_usize_add(v_i_2492_, v___x_2502_);
v_i_2492_ = v___x_2503_;
v_b_2494_ = v_a_2501_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0___boxed(lean_object* v_pu_2523_, lean_object* v_f_2524_, lean_object* v_as_2525_, lean_object* v_i_2526_, lean_object* v_stop_2527_, lean_object* v_b_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
uint8_t v_pu_boxed_2534_; size_t v_i_boxed_2535_; size_t v_stop_boxed_2536_; lean_object* v_res_2537_; 
v_pu_boxed_2534_ = lean_unbox(v_pu_2523_);
v_i_boxed_2535_ = lean_unbox_usize(v_i_2526_);
lean_dec(v_i_2526_);
v_stop_boxed_2536_ = lean_unbox_usize(v_stop_2527_);
lean_dec(v_stop_2527_);
v_res_2537_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(v_pu_boxed_2534_, v_f_2524_, v_as_2525_, v_i_boxed_2535_, v_stop_boxed_2536_, v_b_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec_ref(v_as_2525_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp(uint8_t v_pu_2538_, lean_object* v_f_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; uint8_t v___x_2549_; 
v___x_2546_ = lean_unsigned_to_nat(0u);
v___x_2547_ = lean_array_get_size(v_a_2540_);
v___x_2548_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2549_ = lean_nat_dec_lt(v___x_2546_, v___x_2547_);
if (v___x_2549_ == 0)
{
lean_object* v___x_2550_; 
lean_dec_ref(v_f_2539_);
v___x_2550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2548_);
return v___x_2550_;
}
else
{
size_t v___x_2551_; size_t v___x_2552_; lean_object* v___x_2553_; 
v___x_2551_ = ((size_t)0ULL);
v___x_2552_ = lean_usize_of_nat(v___x_2547_);
v___x_2553_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(v_pu_2538_, v_f_2539_, v_a_2540_, v___x_2551_, v___x_2552_, v___x_2548_, v_a_2541_, v_a_2542_, v_a_2543_, v_a_2544_);
return v___x_2553_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp___boxed(lean_object* v_pu_2554_, lean_object* v_f_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_){
_start:
{
uint8_t v_pu_boxed_2562_; lean_object* v_res_2563_; 
v_pu_boxed_2562_ = lean_unbox(v_pu_2554_);
v_res_2563_ = l_Lean_Compiler_LCNF_Probe_filterByJmp(v_pu_boxed_2562_, v_f_2555_, v_a_2556_, v_a_2557_, v_a_2558_, v_a_2559_, v_a_2560_);
lean_dec(v_a_2560_);
lean_dec_ref(v_a_2559_);
lean_dec(v_a_2558_);
lean_dec_ref(v_a_2557_);
lean_dec_ref(v_a_2556_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(uint8_t v_pu_2564_, lean_object* v_f_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_){
_start:
{
switch(lean_obj_tag(v_a_2566_))
{
case 0:
{
lean_object* v_k_2572_; 
v_k_2572_ = lean_ctor_get(v_a_2566_, 1);
lean_inc_ref(v_k_2572_);
lean_dec_ref_known(v_a_2566_, 2);
v_a_2566_ = v_k_2572_;
goto _start;
}
case 1:
{
lean_object* v_decl_2574_; lean_object* v_k_2575_; lean_object* v_value_2576_; lean_object* v___x_2577_; 
v_decl_2574_ = lean_ctor_get(v_a_2566_, 0);
lean_inc_ref(v_decl_2574_);
v_k_2575_ = lean_ctor_get(v_a_2566_, 1);
lean_inc_ref(v_k_2575_);
lean_dec_ref_known(v_a_2566_, 2);
v_value_2576_ = lean_ctor_get(v_decl_2574_, 4);
lean_inc_ref(v_value_2576_);
lean_dec_ref(v_decl_2574_);
lean_inc_ref(v_f_2565_);
v___x_2577_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2564_, v_f_2565_, v_value_2576_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; uint8_t v___x_2579_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2578_);
v___x_2579_ = lean_unbox(v_a_2578_);
lean_dec(v_a_2578_);
if (v___x_2579_ == 0)
{
lean_dec_ref_known(v___x_2577_, 1);
v_a_2566_ = v_k_2575_;
goto _start;
}
else
{
lean_dec_ref(v_k_2575_);
lean_dec_ref(v_f_2565_);
return v___x_2577_;
}
}
else
{
lean_dec_ref(v_k_2575_);
lean_dec_ref(v_f_2565_);
return v___x_2577_;
}
}
case 2:
{
lean_object* v_decl_2581_; lean_object* v_k_2582_; lean_object* v_value_2583_; lean_object* v___x_2584_; 
v_decl_2581_ = lean_ctor_get(v_a_2566_, 0);
lean_inc_ref(v_decl_2581_);
v_k_2582_ = lean_ctor_get(v_a_2566_, 1);
lean_inc_ref(v_k_2582_);
lean_dec_ref_known(v_a_2566_, 2);
v_value_2583_ = lean_ctor_get(v_decl_2581_, 4);
lean_inc_ref(v_value_2583_);
lean_dec_ref(v_decl_2581_);
lean_inc_ref(v_f_2565_);
v___x_2584_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2564_, v_f_2565_, v_value_2583_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2585_; uint8_t v___x_2586_; 
v_a_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_a_2585_);
v___x_2586_ = lean_unbox(v_a_2585_);
lean_dec(v_a_2585_);
if (v___x_2586_ == 0)
{
lean_dec_ref_known(v___x_2584_, 1);
v_a_2566_ = v_k_2582_;
goto _start;
}
else
{
lean_dec_ref(v_k_2582_);
lean_dec_ref(v_f_2565_);
return v___x_2584_;
}
}
else
{
lean_dec_ref(v_k_2582_);
lean_dec_ref(v_f_2565_);
return v___x_2584_;
}
}
case 4:
{
lean_object* v_cases_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2607_; 
v_cases_2588_ = lean_ctor_get(v_a_2566_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v_a_2566_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2590_ = v_a_2566_;
v_isShared_2591_ = v_isSharedCheck_2607_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_cases_2588_);
lean_dec(v_a_2566_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2607_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v_alts_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; uint8_t v___x_2595_; 
v_alts_2592_ = lean_ctor_get(v_cases_2588_, 3);
lean_inc_ref(v_alts_2592_);
lean_dec_ref(v_cases_2588_);
v___x_2593_ = lean_unsigned_to_nat(0u);
v___x_2594_ = lean_array_get_size(v_alts_2592_);
v___x_2595_ = lean_nat_dec_lt(v___x_2593_, v___x_2594_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; lean_object* v___x_2598_; 
lean_dec_ref(v_alts_2592_);
lean_dec_ref(v_f_2565_);
v___x_2596_ = lean_box(v___x_2595_);
if (v_isShared_2591_ == 0)
{
lean_ctor_set_tag(v___x_2590_, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2596_);
v___x_2598_ = v___x_2590_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2596_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
else
{
if (v___x_2595_ == 0)
{
lean_object* v___x_2600_; lean_object* v___x_2602_; 
lean_dec_ref(v_alts_2592_);
lean_dec_ref(v_f_2565_);
v___x_2600_ = lean_box(v___x_2595_);
if (v_isShared_2591_ == 0)
{
lean_ctor_set_tag(v___x_2590_, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2600_);
v___x_2602_ = v___x_2590_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v___x_2600_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
else
{
size_t v___x_2604_; size_t v___x_2605_; lean_object* v___x_2606_; 
lean_del_object(v___x_2590_);
v___x_2604_ = ((size_t)0ULL);
v___x_2605_ = lean_usize_of_nat(v___x_2594_);
v___x_2606_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(v_pu_2564_, v_f_2565_, v_alts_2592_, v___x_2604_, v___x_2605_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_);
lean_dec_ref(v_alts_2592_);
return v___x_2606_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_2608_; lean_object* v___x_2609_; 
v_fvarId_2608_ = lean_ctor_get(v_a_2566_, 0);
lean_inc(v_fvarId_2608_);
lean_dec_ref_known(v_a_2566_, 1);
lean_inc(v_a_2570_);
lean_inc_ref(v_a_2569_);
lean_inc(v_a_2568_);
lean_inc_ref(v_a_2567_);
v___x_2609_ = lean_apply_6(v_f_2565_, v_fvarId_2608_, v_a_2567_, v_a_2568_, v_a_2569_, v_a_2570_, lean_box(0));
return v___x_2609_;
}
case 7:
{
lean_object* v_k_2610_; 
v_k_2610_ = lean_ctor_get(v_a_2566_, 3);
lean_inc_ref(v_k_2610_);
lean_dec_ref_known(v_a_2566_, 4);
v_a_2566_ = v_k_2610_;
goto _start;
}
case 8:
{
lean_object* v_k_2612_; 
v_k_2612_ = lean_ctor_get(v_a_2566_, 3);
lean_inc_ref(v_k_2612_);
lean_dec_ref_known(v_a_2566_, 4);
v_a_2566_ = v_k_2612_;
goto _start;
}
case 9:
{
lean_object* v_k_2614_; 
v_k_2614_ = lean_ctor_get(v_a_2566_, 5);
lean_inc_ref(v_k_2614_);
lean_dec_ref_known(v_a_2566_, 6);
v_a_2566_ = v_k_2614_;
goto _start;
}
case 10:
{
lean_object* v_k_2616_; 
v_k_2616_ = lean_ctor_get(v_a_2566_, 2);
lean_inc_ref(v_k_2616_);
lean_dec_ref_known(v_a_2566_, 3);
v_a_2566_ = v_k_2616_;
goto _start;
}
case 11:
{
lean_object* v_k_2618_; 
v_k_2618_ = lean_ctor_get(v_a_2566_, 2);
lean_inc_ref(v_k_2618_);
lean_dec_ref_known(v_a_2566_, 3);
v_a_2566_ = v_k_2618_;
goto _start;
}
case 12:
{
lean_object* v_k_2620_; 
v_k_2620_ = lean_ctor_get(v_a_2566_, 3);
lean_inc_ref(v_k_2620_);
lean_dec_ref_known(v_a_2566_, 4);
v_a_2566_ = v_k_2620_;
goto _start;
}
case 13:
{
lean_object* v_k_2622_; 
v_k_2622_ = lean_ctor_get(v_a_2566_, 1);
lean_inc_ref(v_k_2622_);
lean_dec_ref_known(v_a_2566_, 2);
v_a_2566_ = v_k_2622_;
goto _start;
}
default: 
{
uint8_t v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; 
lean_dec_ref(v_a_2566_);
lean_dec_ref(v_f_2565_);
v___x_2624_ = 0;
v___x_2625_ = lean_box(v___x_2624_);
v___x_2626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2625_);
return v___x_2626_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(uint8_t v_pu_2627_, lean_object* v_f_2628_, lean_object* v_as_2629_, size_t v_i_2630_, size_t v_stop_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_){
_start:
{
uint8_t v___x_2637_; 
v___x_2637_ = lean_usize_dec_eq(v_i_2630_, v_stop_2631_);
if (v___x_2637_ == 0)
{
uint8_t v___x_2638_; lean_object* v___y_2640_; lean_object* v___x_2655_; 
v___x_2638_ = 1;
v___x_2655_ = lean_array_uget_borrowed(v_as_2629_, v_i_2630_);
switch(lean_obj_tag(v___x_2655_))
{
case 0:
{
lean_object* v_code_2656_; 
v_code_2656_ = lean_ctor_get(v___x_2655_, 2);
lean_inc_ref(v_code_2656_);
v___y_2640_ = v_code_2656_;
goto v___jp_2639_;
}
case 1:
{
lean_object* v_code_2657_; 
v_code_2657_ = lean_ctor_get(v___x_2655_, 1);
lean_inc_ref(v_code_2657_);
v___y_2640_ = v_code_2657_;
goto v___jp_2639_;
}
default: 
{
lean_object* v_code_2658_; 
v_code_2658_ = lean_ctor_get(v___x_2655_, 0);
lean_inc_ref(v_code_2658_);
v___y_2640_ = v_code_2658_;
goto v___jp_2639_;
}
}
v___jp_2639_:
{
lean_object* v___x_2641_; 
lean_inc_ref(v_f_2628_);
v___x_2641_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2627_, v_f_2628_, v___y_2640_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2654_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2654_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2644_ = v___x_2641_;
v_isShared_2645_ = v_isSharedCheck_2654_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_a_2642_);
lean_dec(v___x_2641_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2654_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
uint8_t v___x_2646_; 
v___x_2646_ = lean_unbox(v_a_2642_);
lean_dec(v_a_2642_);
if (v___x_2646_ == 0)
{
size_t v___x_2647_; size_t v___x_2648_; 
lean_del_object(v___x_2644_);
v___x_2647_ = ((size_t)1ULL);
v___x_2648_ = lean_usize_add(v_i_2630_, v___x_2647_);
v_i_2630_ = v___x_2648_;
goto _start;
}
else
{
lean_object* v___x_2650_; lean_object* v___x_2652_; 
lean_dec_ref(v_f_2628_);
v___x_2650_ = lean_box(v___x_2638_);
if (v_isShared_2645_ == 0)
{
lean_ctor_set(v___x_2644_, 0, v___x_2650_);
v___x_2652_ = v___x_2644_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2650_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
return v___x_2652_;
}
}
}
}
else
{
lean_dec_ref(v_f_2628_);
return v___x_2641_;
}
}
}
else
{
uint8_t v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
lean_dec_ref(v_f_2628_);
v___x_2659_ = 0;
v___x_2660_ = lean_box(v___x_2659_);
v___x_2661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2660_);
return v___x_2661_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0___boxed(lean_object* v_pu_2662_, lean_object* v_f_2663_, lean_object* v_as_2664_, lean_object* v_i_2665_, lean_object* v_stop_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_){
_start:
{
uint8_t v_pu_boxed_2672_; size_t v_i_boxed_2673_; size_t v_stop_boxed_2674_; lean_object* v_res_2675_; 
v_pu_boxed_2672_ = lean_unbox(v_pu_2662_);
v_i_boxed_2673_ = lean_unbox_usize(v_i_2665_);
lean_dec(v_i_2665_);
v_stop_boxed_2674_ = lean_unbox_usize(v_stop_2666_);
lean_dec(v_stop_2666_);
v_res_2675_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(v_pu_boxed_2672_, v_f_2663_, v_as_2664_, v_i_boxed_2673_, v_stop_boxed_2674_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
lean_dec(v___y_2670_);
lean_dec_ref(v___y_2669_);
lean_dec(v___y_2668_);
lean_dec_ref(v___y_2667_);
lean_dec_ref(v_as_2664_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed(lean_object* v_pu_2676_, lean_object* v_f_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_){
_start:
{
uint8_t v_pu_boxed_2684_; lean_object* v_res_2685_; 
v_pu_boxed_2684_ = lean_unbox(v_pu_2676_);
v_res_2685_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_boxed_2684_, v_f_2677_, v_a_2678_, v_a_2679_, v_a_2680_, v_a_2681_, v_a_2682_);
lean_dec(v_a_2682_);
lean_dec_ref(v_a_2681_);
lean_dec(v_a_2680_);
lean_dec_ref(v_a_2679_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(uint8_t v_pu_2686_, lean_object* v_f_2687_, lean_object* v_as_2688_, size_t v_i_2689_, size_t v_stop_2690_, lean_object* v_b_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_){
_start:
{
lean_object* v_a_2698_; uint8_t v___x_2702_; 
v___x_2702_ = lean_usize_dec_eq(v_i_2689_, v_stop_2690_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; lean_object* v_value_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2703_ = lean_array_uget_borrowed(v_as_2688_, v_i_2689_);
v_value_2704_ = lean_ctor_get(v___x_2703_, 1);
v___x_2705_ = lean_box(v_pu_2686_);
lean_inc_ref(v_f_2687_);
v___x_2706_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed), 8, 2);
lean_closure_set(v___x_2706_, 0, v___x_2705_);
lean_closure_set(v___x_2706_, 1, v_f_2687_);
lean_inc_ref(v_value_2704_);
v___x_2707_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2704_, v___x_2706_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v_a_2708_; uint8_t v___x_2709_; 
v_a_2708_ = lean_ctor_get(v___x_2707_, 0);
lean_inc(v_a_2708_);
lean_dec_ref_known(v___x_2707_, 1);
v___x_2709_ = lean_unbox(v_a_2708_);
lean_dec(v_a_2708_);
if (v___x_2709_ == 0)
{
v_a_2698_ = v_b_2691_;
goto v___jp_2697_;
}
else
{
lean_object* v___x_2710_; 
lean_inc(v___x_2703_);
v___x_2710_ = lean_array_push(v_b_2691_, v___x_2703_);
v_a_2698_ = v___x_2710_;
goto v___jp_2697_;
}
}
else
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2718_; 
lean_dec_ref(v_b_2691_);
lean_dec_ref(v_f_2687_);
v_a_2711_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2713_ = v___x_2707_;
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2707_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2716_; 
if (v_isShared_2714_ == 0)
{
v___x_2716_ = v___x_2713_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_a_2711_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
else
{
lean_object* v___x_2719_; 
lean_dec_ref(v_f_2687_);
v___x_2719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2719_, 0, v_b_2691_);
return v___x_2719_;
}
v___jp_2697_:
{
size_t v___x_2699_; size_t v___x_2700_; 
v___x_2699_ = ((size_t)1ULL);
v___x_2700_ = lean_usize_add(v_i_2689_, v___x_2699_);
v_i_2689_ = v___x_2700_;
v_b_2691_ = v_a_2698_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0___boxed(lean_object* v_pu_2720_, lean_object* v_f_2721_, lean_object* v_as_2722_, lean_object* v_i_2723_, lean_object* v_stop_2724_, lean_object* v_b_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
uint8_t v_pu_boxed_2731_; size_t v_i_boxed_2732_; size_t v_stop_boxed_2733_; lean_object* v_res_2734_; 
v_pu_boxed_2731_ = lean_unbox(v_pu_2720_);
v_i_boxed_2732_ = lean_unbox_usize(v_i_2723_);
lean_dec(v_i_2723_);
v_stop_boxed_2733_ = lean_unbox_usize(v_stop_2724_);
lean_dec(v_stop_2724_);
v_res_2734_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(v_pu_boxed_2731_, v_f_2721_, v_as_2722_, v_i_boxed_2732_, v_stop_boxed_2733_, v_b_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
lean_dec(v___y_2729_);
lean_dec_ref(v___y_2728_);
lean_dec(v___y_2727_);
lean_dec_ref(v___y_2726_);
lean_dec_ref(v_as_2722_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn(uint8_t v_pu_2735_, lean_object* v_f_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; uint8_t v___x_2746_; 
v___x_2743_ = lean_unsigned_to_nat(0u);
v___x_2744_ = lean_array_get_size(v_a_2737_);
v___x_2745_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2746_ = lean_nat_dec_lt(v___x_2743_, v___x_2744_);
if (v___x_2746_ == 0)
{
lean_object* v___x_2747_; 
lean_dec_ref(v_f_2736_);
v___x_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2745_);
return v___x_2747_;
}
else
{
size_t v___x_2748_; size_t v___x_2749_; lean_object* v___x_2750_; 
v___x_2748_ = ((size_t)0ULL);
v___x_2749_ = lean_usize_of_nat(v___x_2744_);
v___x_2750_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(v_pu_2735_, v_f_2736_, v_a_2737_, v___x_2748_, v___x_2749_, v___x_2745_, v_a_2738_, v_a_2739_, v_a_2740_, v_a_2741_);
return v___x_2750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn___boxed(lean_object* v_pu_2751_, lean_object* v_f_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_){
_start:
{
uint8_t v_pu_boxed_2759_; lean_object* v_res_2760_; 
v_pu_boxed_2759_ = lean_unbox(v_pu_2751_);
v_res_2760_ = l_Lean_Compiler_LCNF_Probe_filterByReturn(v_pu_boxed_2759_, v_f_2752_, v_a_2753_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_);
lean_dec(v_a_2757_);
lean_dec_ref(v_a_2756_);
lean_dec(v_a_2755_);
lean_dec_ref(v_a_2754_);
lean_dec_ref(v_a_2753_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(uint8_t v_pu_2761_, lean_object* v_f_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_){
_start:
{
switch(lean_obj_tag(v_a_2763_))
{
case 0:
{
lean_object* v_k_2769_; 
v_k_2769_ = lean_ctor_get(v_a_2763_, 1);
lean_inc_ref(v_k_2769_);
lean_dec_ref_known(v_a_2763_, 2);
v_a_2763_ = v_k_2769_;
goto _start;
}
case 1:
{
lean_object* v_decl_2771_; lean_object* v_k_2772_; lean_object* v_value_2773_; lean_object* v___x_2774_; 
v_decl_2771_ = lean_ctor_get(v_a_2763_, 0);
lean_inc_ref(v_decl_2771_);
v_k_2772_ = lean_ctor_get(v_a_2763_, 1);
lean_inc_ref(v_k_2772_);
lean_dec_ref_known(v_a_2763_, 2);
v_value_2773_ = lean_ctor_get(v_decl_2771_, 4);
lean_inc_ref(v_value_2773_);
lean_dec_ref(v_decl_2771_);
lean_inc_ref(v_f_2762_);
v___x_2774_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2761_, v_f_2762_, v_value_2773_, v_a_2764_, v_a_2765_, v_a_2766_, v_a_2767_);
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v_a_2775_; uint8_t v___x_2776_; 
v_a_2775_ = lean_ctor_get(v___x_2774_, 0);
lean_inc(v_a_2775_);
v___x_2776_ = lean_unbox(v_a_2775_);
lean_dec(v_a_2775_);
if (v___x_2776_ == 0)
{
lean_dec_ref_known(v___x_2774_, 1);
v_a_2763_ = v_k_2772_;
goto _start;
}
else
{
lean_dec_ref(v_k_2772_);
lean_dec_ref(v_f_2762_);
return v___x_2774_;
}
}
else
{
lean_dec_ref(v_k_2772_);
lean_dec_ref(v_f_2762_);
return v___x_2774_;
}
}
case 2:
{
lean_object* v_decl_2778_; lean_object* v_k_2779_; lean_object* v_value_2780_; lean_object* v___x_2781_; 
v_decl_2778_ = lean_ctor_get(v_a_2763_, 0);
lean_inc_ref(v_decl_2778_);
v_k_2779_ = lean_ctor_get(v_a_2763_, 1);
lean_inc_ref(v_k_2779_);
lean_dec_ref_known(v_a_2763_, 2);
v_value_2780_ = lean_ctor_get(v_decl_2778_, 4);
lean_inc_ref(v_value_2780_);
lean_dec_ref(v_decl_2778_);
lean_inc_ref(v_f_2762_);
v___x_2781_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2761_, v_f_2762_, v_value_2780_, v_a_2764_, v_a_2765_, v_a_2766_, v_a_2767_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; uint8_t v___x_2783_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_a_2782_);
v___x_2783_ = lean_unbox(v_a_2782_);
lean_dec(v_a_2782_);
if (v___x_2783_ == 0)
{
lean_dec_ref_known(v___x_2781_, 1);
v_a_2763_ = v_k_2779_;
goto _start;
}
else
{
lean_dec_ref(v_k_2779_);
lean_dec_ref(v_f_2762_);
return v___x_2781_;
}
}
else
{
lean_dec_ref(v_k_2779_);
lean_dec_ref(v_f_2762_);
return v___x_2781_;
}
}
case 4:
{
lean_object* v_cases_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2804_; 
v_cases_2785_ = lean_ctor_get(v_a_2763_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v_a_2763_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2787_ = v_a_2763_;
v_isShared_2788_ = v_isSharedCheck_2804_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_cases_2785_);
lean_dec(v_a_2763_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2804_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v_alts_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; 
v_alts_2789_ = lean_ctor_get(v_cases_2785_, 3);
lean_inc_ref(v_alts_2789_);
lean_dec_ref(v_cases_2785_);
v___x_2790_ = lean_unsigned_to_nat(0u);
v___x_2791_ = lean_array_get_size(v_alts_2789_);
v___x_2792_ = lean_nat_dec_lt(v___x_2790_, v___x_2791_);
if (v___x_2792_ == 0)
{
lean_object* v___x_2793_; lean_object* v___x_2795_; 
lean_dec_ref(v_alts_2789_);
lean_dec_ref(v_f_2762_);
v___x_2793_ = lean_box(v___x_2792_);
if (v_isShared_2788_ == 0)
{
lean_ctor_set_tag(v___x_2787_, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2793_);
v___x_2795_ = v___x_2787_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v___x_2793_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
else
{
if (v___x_2792_ == 0)
{
lean_object* v___x_2797_; lean_object* v___x_2799_; 
lean_dec_ref(v_alts_2789_);
lean_dec_ref(v_f_2762_);
v___x_2797_ = lean_box(v___x_2792_);
if (v_isShared_2788_ == 0)
{
lean_ctor_set_tag(v___x_2787_, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2797_);
v___x_2799_ = v___x_2787_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v___x_2797_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
else
{
size_t v___x_2801_; size_t v___x_2802_; lean_object* v___x_2803_; 
lean_del_object(v___x_2787_);
v___x_2801_ = ((size_t)0ULL);
v___x_2802_ = lean_usize_of_nat(v___x_2791_);
v___x_2803_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(v_pu_2761_, v_f_2762_, v_alts_2789_, v___x_2801_, v___x_2802_, v_a_2764_, v_a_2765_, v_a_2766_, v_a_2767_);
lean_dec_ref(v_alts_2789_);
return v___x_2803_;
}
}
}
}
case 6:
{
lean_object* v_type_2805_; lean_object* v___x_2806_; 
v_type_2805_ = lean_ctor_get(v_a_2763_, 0);
lean_inc_ref(v_type_2805_);
lean_dec_ref_known(v_a_2763_, 1);
lean_inc(v_a_2767_);
lean_inc_ref(v_a_2766_);
lean_inc(v_a_2765_);
lean_inc_ref(v_a_2764_);
v___x_2806_ = lean_apply_6(v_f_2762_, v_type_2805_, v_a_2764_, v_a_2765_, v_a_2766_, v_a_2767_, lean_box(0));
return v___x_2806_;
}
case 7:
{
lean_object* v_k_2807_; 
v_k_2807_ = lean_ctor_get(v_a_2763_, 3);
lean_inc_ref(v_k_2807_);
lean_dec_ref_known(v_a_2763_, 4);
v_a_2763_ = v_k_2807_;
goto _start;
}
case 8:
{
lean_object* v_k_2809_; 
v_k_2809_ = lean_ctor_get(v_a_2763_, 3);
lean_inc_ref(v_k_2809_);
lean_dec_ref_known(v_a_2763_, 4);
v_a_2763_ = v_k_2809_;
goto _start;
}
case 9:
{
lean_object* v_k_2811_; 
v_k_2811_ = lean_ctor_get(v_a_2763_, 5);
lean_inc_ref(v_k_2811_);
lean_dec_ref_known(v_a_2763_, 6);
v_a_2763_ = v_k_2811_;
goto _start;
}
case 10:
{
lean_object* v_k_2813_; 
v_k_2813_ = lean_ctor_get(v_a_2763_, 2);
lean_inc_ref(v_k_2813_);
lean_dec_ref_known(v_a_2763_, 3);
v_a_2763_ = v_k_2813_;
goto _start;
}
case 11:
{
lean_object* v_k_2815_; 
v_k_2815_ = lean_ctor_get(v_a_2763_, 2);
lean_inc_ref(v_k_2815_);
lean_dec_ref_known(v_a_2763_, 3);
v_a_2763_ = v_k_2815_;
goto _start;
}
case 12:
{
lean_object* v_k_2817_; 
v_k_2817_ = lean_ctor_get(v_a_2763_, 3);
lean_inc_ref(v_k_2817_);
lean_dec_ref_known(v_a_2763_, 4);
v_a_2763_ = v_k_2817_;
goto _start;
}
case 13:
{
lean_object* v_k_2819_; 
v_k_2819_ = lean_ctor_get(v_a_2763_, 1);
lean_inc_ref(v_k_2819_);
lean_dec_ref_known(v_a_2763_, 2);
v_a_2763_ = v_k_2819_;
goto _start;
}
default: 
{
uint8_t v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
lean_dec_ref(v_a_2763_);
lean_dec_ref(v_f_2762_);
v___x_2821_ = 0;
v___x_2822_ = lean_box(v___x_2821_);
v___x_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2822_);
return v___x_2823_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(uint8_t v_pu_2824_, lean_object* v_f_2825_, lean_object* v_as_2826_, size_t v_i_2827_, size_t v_stop_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
uint8_t v___x_2834_; 
v___x_2834_ = lean_usize_dec_eq(v_i_2827_, v_stop_2828_);
if (v___x_2834_ == 0)
{
uint8_t v___x_2835_; lean_object* v___y_2837_; lean_object* v___x_2852_; 
v___x_2835_ = 1;
v___x_2852_ = lean_array_uget_borrowed(v_as_2826_, v_i_2827_);
switch(lean_obj_tag(v___x_2852_))
{
case 0:
{
lean_object* v_code_2853_; 
v_code_2853_ = lean_ctor_get(v___x_2852_, 2);
lean_inc_ref(v_code_2853_);
v___y_2837_ = v_code_2853_;
goto v___jp_2836_;
}
case 1:
{
lean_object* v_code_2854_; 
v_code_2854_ = lean_ctor_get(v___x_2852_, 1);
lean_inc_ref(v_code_2854_);
v___y_2837_ = v_code_2854_;
goto v___jp_2836_;
}
default: 
{
lean_object* v_code_2855_; 
v_code_2855_ = lean_ctor_get(v___x_2852_, 0);
lean_inc_ref(v_code_2855_);
v___y_2837_ = v_code_2855_;
goto v___jp_2836_;
}
}
v___jp_2836_:
{
lean_object* v___x_2838_; 
lean_inc_ref(v_f_2825_);
v___x_2838_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2824_, v_f_2825_, v___y_2837_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2838_) == 0)
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2851_; 
v_a_2839_ = lean_ctor_get(v___x_2838_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2838_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2841_ = v___x_2838_;
v_isShared_2842_ = v_isSharedCheck_2851_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2838_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2851_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
uint8_t v___x_2843_; 
v___x_2843_ = lean_unbox(v_a_2839_);
lean_dec(v_a_2839_);
if (v___x_2843_ == 0)
{
size_t v___x_2844_; size_t v___x_2845_; 
lean_del_object(v___x_2841_);
v___x_2844_ = ((size_t)1ULL);
v___x_2845_ = lean_usize_add(v_i_2827_, v___x_2844_);
v_i_2827_ = v___x_2845_;
goto _start;
}
else
{
lean_object* v___x_2847_; lean_object* v___x_2849_; 
lean_dec_ref(v_f_2825_);
v___x_2847_ = lean_box(v___x_2835_);
if (v_isShared_2842_ == 0)
{
lean_ctor_set(v___x_2841_, 0, v___x_2847_);
v___x_2849_ = v___x_2841_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v___x_2847_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
else
{
lean_dec_ref(v_f_2825_);
return v___x_2838_;
}
}
}
else
{
uint8_t v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
lean_dec_ref(v_f_2825_);
v___x_2856_ = 0;
v___x_2857_ = lean_box(v___x_2856_);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
return v___x_2858_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0___boxed(lean_object* v_pu_2859_, lean_object* v_f_2860_, lean_object* v_as_2861_, lean_object* v_i_2862_, lean_object* v_stop_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
uint8_t v_pu_boxed_2869_; size_t v_i_boxed_2870_; size_t v_stop_boxed_2871_; lean_object* v_res_2872_; 
v_pu_boxed_2869_ = lean_unbox(v_pu_2859_);
v_i_boxed_2870_ = lean_unbox_usize(v_i_2862_);
lean_dec(v_i_2862_);
v_stop_boxed_2871_ = lean_unbox_usize(v_stop_2863_);
lean_dec(v_stop_2863_);
v_res_2872_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(v_pu_boxed_2869_, v_f_2860_, v_as_2861_, v_i_boxed_2870_, v_stop_boxed_2871_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec_ref(v_as_2861_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed(lean_object* v_pu_2873_, lean_object* v_f_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_){
_start:
{
uint8_t v_pu_boxed_2881_; lean_object* v_res_2882_; 
v_pu_boxed_2881_ = lean_unbox(v_pu_2873_);
v_res_2882_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_boxed_2881_, v_f_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_);
lean_dec(v_a_2879_);
lean_dec_ref(v_a_2878_);
lean_dec(v_a_2877_);
lean_dec_ref(v_a_2876_);
return v_res_2882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(uint8_t v_pu_2883_, lean_object* v_f_2884_, lean_object* v_as_2885_, size_t v_i_2886_, size_t v_stop_2887_, lean_object* v_b_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v_a_2895_; uint8_t v___x_2899_; 
v___x_2899_ = lean_usize_dec_eq(v_i_2886_, v_stop_2887_);
if (v___x_2899_ == 0)
{
lean_object* v___x_2900_; lean_object* v_value_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2900_ = lean_array_uget_borrowed(v_as_2885_, v_i_2886_);
v_value_2901_ = lean_ctor_get(v___x_2900_, 1);
v___x_2902_ = lean_box(v_pu_2883_);
lean_inc_ref(v_f_2884_);
v___x_2903_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed), 8, 2);
lean_closure_set(v___x_2903_, 0, v___x_2902_);
lean_closure_set(v___x_2903_, 1, v_f_2884_);
lean_inc_ref(v_value_2901_);
v___x_2904_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2901_, v___x_2903_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_object* v_a_2905_; uint8_t v___x_2906_; 
v_a_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_a_2905_);
lean_dec_ref_known(v___x_2904_, 1);
v___x_2906_ = lean_unbox(v_a_2905_);
lean_dec(v_a_2905_);
if (v___x_2906_ == 0)
{
v_a_2895_ = v_b_2888_;
goto v___jp_2894_;
}
else
{
lean_object* v___x_2907_; 
lean_inc(v___x_2900_);
v___x_2907_ = lean_array_push(v_b_2888_, v___x_2900_);
v_a_2895_ = v___x_2907_;
goto v___jp_2894_;
}
}
else
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
lean_dec_ref(v_b_2888_);
lean_dec_ref(v_f_2884_);
v_a_2908_ = lean_ctor_get(v___x_2904_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2904_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2904_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
else
{
lean_object* v___x_2916_; 
lean_dec_ref(v_f_2884_);
v___x_2916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2916_, 0, v_b_2888_);
return v___x_2916_;
}
v___jp_2894_:
{
size_t v___x_2896_; size_t v___x_2897_; 
v___x_2896_ = ((size_t)1ULL);
v___x_2897_ = lean_usize_add(v_i_2886_, v___x_2896_);
v_i_2886_ = v___x_2897_;
v_b_2888_ = v_a_2895_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0___boxed(lean_object* v_pu_2917_, lean_object* v_f_2918_, lean_object* v_as_2919_, lean_object* v_i_2920_, lean_object* v_stop_2921_, lean_object* v_b_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
uint8_t v_pu_boxed_2928_; size_t v_i_boxed_2929_; size_t v_stop_boxed_2930_; lean_object* v_res_2931_; 
v_pu_boxed_2928_ = lean_unbox(v_pu_2917_);
v_i_boxed_2929_ = lean_unbox_usize(v_i_2920_);
lean_dec(v_i_2920_);
v_stop_boxed_2930_ = lean_unbox_usize(v_stop_2921_);
lean_dec(v_stop_2921_);
v_res_2931_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(v_pu_boxed_2928_, v_f_2918_, v_as_2919_, v_i_boxed_2929_, v_stop_boxed_2930_, v_b_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec_ref(v_as_2919_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach(uint8_t v_pu_2932_, lean_object* v_f_2933_, lean_object* v_a_2934_, lean_object* v_a_2935_, lean_object* v_a_2936_, lean_object* v_a_2937_, lean_object* v_a_2938_){
_start:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; uint8_t v___x_2943_; 
v___x_2940_ = lean_unsigned_to_nat(0u);
v___x_2941_ = lean_array_get_size(v_a_2934_);
v___x_2942_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2943_ = lean_nat_dec_lt(v___x_2940_, v___x_2941_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; 
lean_dec_ref(v_f_2933_);
v___x_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2942_);
return v___x_2944_;
}
else
{
size_t v___x_2945_; size_t v___x_2946_; lean_object* v___x_2947_; 
v___x_2945_ = ((size_t)0ULL);
v___x_2946_ = lean_usize_of_nat(v___x_2941_);
v___x_2947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(v_pu_2932_, v_f_2933_, v_a_2934_, v___x_2945_, v___x_2946_, v___x_2942_, v_a_2935_, v_a_2936_, v_a_2937_, v_a_2938_);
return v___x_2947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach___boxed(lean_object* v_pu_2948_, lean_object* v_f_2949_, lean_object* v_a_2950_, lean_object* v_a_2951_, lean_object* v_a_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_){
_start:
{
uint8_t v_pu_boxed_2956_; lean_object* v_res_2957_; 
v_pu_boxed_2956_ = lean_unbox(v_pu_2948_);
v_res_2957_ = l_Lean_Compiler_LCNF_Probe_filterByUnreach(v_pu_boxed_2956_, v_f_2949_, v_a_2950_, v_a_2951_, v_a_2952_, v_a_2953_, v_a_2954_);
lean_dec(v_a_2954_);
lean_dec_ref(v_a_2953_);
lean_dec(v_a_2952_);
lean_dec_ref(v_a_2951_);
lean_dec_ref(v_a_2950_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(lean_object* v_decl_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
lean_object* v_toSignature_2964_; lean_object* v_name_2965_; lean_object* v___x_2966_; 
v_toSignature_2964_ = lean_ctor_get(v_decl_2958_, 0);
v_name_2965_ = lean_ctor_get(v_toSignature_2964_, 0);
lean_inc(v_name_2965_);
v___x_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2966_, 0, v_name_2965_);
return v___x_2966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed(lean_object* v_decl_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v_res_2973_; 
v_res_2973_ = l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(v_decl_2967_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_);
lean_dec(v___y_2971_);
lean_dec_ref(v___y_2970_);
lean_dec(v___y_2969_);
lean_dec_ref(v___y_2968_);
lean_dec_ref(v_decl_2967_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg(lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_){
_start:
{
lean_object* v___x_2981_; lean_object* v_toApplicative_2982_; lean_object* v_toFunctor_2983_; lean_object* v_toSeq_2984_; lean_object* v_toSeqLeft_2985_; lean_object* v_toSeqRight_2986_; lean_object* v___f_2987_; lean_object* v___f_2988_; lean_object* v___f_2989_; lean_object* v___f_2990_; lean_object* v___x_2991_; lean_object* v___f_2992_; lean_object* v___f_2993_; lean_object* v___f_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v_toApplicative_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3032_; 
v___x_2981_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_2982_ = lean_ctor_get(v___x_2981_, 0);
v_toFunctor_2983_ = lean_ctor_get(v_toApplicative_2982_, 0);
v_toSeq_2984_ = lean_ctor_get(v_toApplicative_2982_, 2);
v_toSeqLeft_2985_ = lean_ctor_get(v_toApplicative_2982_, 3);
v_toSeqRight_2986_ = lean_ctor_get(v_toApplicative_2982_, 4);
v___f_2987_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_2988_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2983_, 2);
v___f_2989_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2989_, 0, v_toFunctor_2983_);
v___f_2990_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2990_, 0, v_toFunctor_2983_);
v___x_2991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2991_, 0, v___f_2989_);
lean_ctor_set(v___x_2991_, 1, v___f_2990_);
lean_inc(v_toSeqRight_2986_);
v___f_2992_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2992_, 0, v_toSeqRight_2986_);
lean_inc(v_toSeqLeft_2985_);
v___f_2993_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2993_, 0, v_toSeqLeft_2985_);
lean_inc(v_toSeq_2984_);
v___f_2994_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2994_, 0, v_toSeq_2984_);
v___x_2995_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2995_, 0, v___x_2991_);
lean_ctor_set(v___x_2995_, 1, v___f_2987_);
lean_ctor_set(v___x_2995_, 2, v___f_2994_);
lean_ctor_set(v___x_2995_, 3, v___f_2993_);
lean_ctor_set(v___x_2995_, 4, v___f_2992_);
v___x_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2995_);
lean_ctor_set(v___x_2996_, 1, v___f_2988_);
v___x_2997_ = l_StateRefT_x27_instMonad___redArg(v___x_2996_);
v_toApplicative_2998_ = lean_ctor_get(v___x_2997_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3032_ == 0)
{
lean_object* v_unused_3033_; 
v_unused_3033_ = lean_ctor_get(v___x_2997_, 1);
lean_dec(v_unused_3033_);
v___x_3000_ = v___x_2997_;
v_isShared_3001_ = v_isSharedCheck_3032_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_toApplicative_2998_);
lean_dec(v___x_2997_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3032_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v_toFunctor_3002_; lean_object* v_toSeq_3003_; lean_object* v_toSeqLeft_3004_; lean_object* v_toSeqRight_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3030_; 
v_toFunctor_3002_ = lean_ctor_get(v_toApplicative_2998_, 0);
v_toSeq_3003_ = lean_ctor_get(v_toApplicative_2998_, 2);
v_toSeqLeft_3004_ = lean_ctor_get(v_toApplicative_2998_, 3);
v_toSeqRight_3005_ = lean_ctor_get(v_toApplicative_2998_, 4);
v_isSharedCheck_3030_ = !lean_is_exclusive(v_toApplicative_2998_);
if (v_isSharedCheck_3030_ == 0)
{
lean_object* v_unused_3031_; 
v_unused_3031_ = lean_ctor_get(v_toApplicative_2998_, 1);
lean_dec(v_unused_3031_);
v___x_3007_ = v_toApplicative_2998_;
v_isShared_3008_ = v_isSharedCheck_3030_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_toSeqRight_3005_);
lean_inc(v_toSeqLeft_3004_);
lean_inc(v_toSeq_3003_);
lean_inc(v_toFunctor_3002_);
lean_dec(v_toApplicative_2998_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3030_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___f_3009_; lean_object* v___f_3010_; lean_object* v___f_3011_; lean_object* v___f_3012_; lean_object* v___f_3013_; lean_object* v___x_3014_; lean_object* v___f_3015_; lean_object* v___f_3016_; lean_object* v___f_3017_; lean_object* v___x_3019_; 
v___f_3009_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0));
v___f_3010_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_3011_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_3002_);
v___f_3012_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3012_, 0, v_toFunctor_3002_);
v___f_3013_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3013_, 0, v_toFunctor_3002_);
v___x_3014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3014_, 0, v___f_3012_);
lean_ctor_set(v___x_3014_, 1, v___f_3013_);
v___f_3015_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3015_, 0, v_toSeqRight_3005_);
v___f_3016_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3016_, 0, v_toSeqLeft_3004_);
v___f_3017_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3017_, 0, v_toSeq_3003_);
if (v_isShared_3008_ == 0)
{
lean_ctor_set(v___x_3007_, 4, v___f_3015_);
lean_ctor_set(v___x_3007_, 3, v___f_3016_);
lean_ctor_set(v___x_3007_, 2, v___f_3017_);
lean_ctor_set(v___x_3007_, 1, v___f_3010_);
lean_ctor_set(v___x_3007_, 0, v___x_3014_);
v___x_3019_ = v___x_3007_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3014_);
lean_ctor_set(v_reuseFailAlloc_3029_, 1, v___f_3010_);
lean_ctor_set(v_reuseFailAlloc_3029_, 2, v___f_3017_);
lean_ctor_set(v_reuseFailAlloc_3029_, 3, v___f_3016_);
lean_ctor_set(v_reuseFailAlloc_3029_, 4, v___f_3015_);
v___x_3019_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
lean_object* v___x_3021_; 
if (v_isShared_3001_ == 0)
{
lean_ctor_set(v___x_3000_, 1, v___f_3011_);
lean_ctor_set(v___x_3000_, 0, v___x_3019_);
v___x_3021_ = v___x_3000_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v___x_3019_);
lean_ctor_set(v_reuseFailAlloc_3028_, 1, v___f_3011_);
v___x_3021_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
size_t v_sz_3022_; size_t v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_155__overap_3026_; lean_object* v___x_3027_; 
v_sz_3022_ = lean_array_size(v_a_2975_);
v___x_3023_ = ((size_t)0ULL);
v___x_3024_ = l_unsafeCast___redArg(v_a_2975_);
v___x_3025_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3021_, v___f_3009_, v_sz_3022_, v___x_3023_, v___x_3024_);
v___x_155__overap_3026_ = l_unsafeCast___redArg(v___x_3025_);
lean_dec(v___x_3025_);
lean_inc(v_a_2979_);
lean_inc_ref(v_a_2978_);
lean_inc(v_a_2977_);
lean_inc_ref(v_a_2976_);
v___x_3027_ = lean_apply_5(v___x_155__overap_3026_, v_a_2976_, v_a_2977_, v_a_2978_, v_a_2979_, lean_box(0));
return v___x_3027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___boxed(lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_){
_start:
{
lean_object* v_res_3040_; 
v_res_3040_ = l_Lean_Compiler_LCNF_Probe_declNames___redArg(v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_);
lean_dec(v_a_3038_);
lean_dec_ref(v_a_3037_);
lean_dec(v_a_3036_);
lean_dec_ref(v_a_3035_);
lean_dec_ref(v_a_3034_);
return v_res_3040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames(uint8_t v_pu_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_){
_start:
{
lean_object* v___x_3048_; lean_object* v_toApplicative_3049_; lean_object* v_toFunctor_3050_; lean_object* v_toSeq_3051_; lean_object* v_toSeqLeft_3052_; lean_object* v_toSeqRight_3053_; lean_object* v___f_3054_; lean_object* v___f_3055_; lean_object* v___f_3056_; lean_object* v___f_3057_; lean_object* v___x_3058_; lean_object* v___f_3059_; lean_object* v___f_3060_; lean_object* v___f_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v_toApplicative_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3099_; 
v___x_3048_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3049_ = lean_ctor_get(v___x_3048_, 0);
v_toFunctor_3050_ = lean_ctor_get(v_toApplicative_3049_, 0);
v_toSeq_3051_ = lean_ctor_get(v_toApplicative_3049_, 2);
v_toSeqLeft_3052_ = lean_ctor_get(v_toApplicative_3049_, 3);
v_toSeqRight_3053_ = lean_ctor_get(v_toApplicative_3049_, 4);
v___f_3054_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_3055_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3050_, 2);
v___f_3056_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3056_, 0, v_toFunctor_3050_);
v___f_3057_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3057_, 0, v_toFunctor_3050_);
v___x_3058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___f_3056_);
lean_ctor_set(v___x_3058_, 1, v___f_3057_);
lean_inc(v_toSeqRight_3053_);
v___f_3059_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3059_, 0, v_toSeqRight_3053_);
lean_inc(v_toSeqLeft_3052_);
v___f_3060_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3060_, 0, v_toSeqLeft_3052_);
lean_inc(v_toSeq_3051_);
v___f_3061_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3061_, 0, v_toSeq_3051_);
v___x_3062_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3058_);
lean_ctor_set(v___x_3062_, 1, v___f_3054_);
lean_ctor_set(v___x_3062_, 2, v___f_3061_);
lean_ctor_set(v___x_3062_, 3, v___f_3060_);
lean_ctor_set(v___x_3062_, 4, v___f_3059_);
v___x_3063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3062_);
lean_ctor_set(v___x_3063_, 1, v___f_3055_);
v___x_3064_ = l_StateRefT_x27_instMonad___redArg(v___x_3063_);
v_toApplicative_3065_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3099_ == 0)
{
lean_object* v_unused_3100_; 
v_unused_3100_ = lean_ctor_get(v___x_3064_, 1);
lean_dec(v_unused_3100_);
v___x_3067_ = v___x_3064_;
v_isShared_3068_ = v_isSharedCheck_3099_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_toApplicative_3065_);
lean_dec(v___x_3064_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3099_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v_toFunctor_3069_; lean_object* v_toSeq_3070_; lean_object* v_toSeqLeft_3071_; lean_object* v_toSeqRight_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3097_; 
v_toFunctor_3069_ = lean_ctor_get(v_toApplicative_3065_, 0);
v_toSeq_3070_ = lean_ctor_get(v_toApplicative_3065_, 2);
v_toSeqLeft_3071_ = lean_ctor_get(v_toApplicative_3065_, 3);
v_toSeqRight_3072_ = lean_ctor_get(v_toApplicative_3065_, 4);
v_isSharedCheck_3097_ = !lean_is_exclusive(v_toApplicative_3065_);
if (v_isSharedCheck_3097_ == 0)
{
lean_object* v_unused_3098_; 
v_unused_3098_ = lean_ctor_get(v_toApplicative_3065_, 1);
lean_dec(v_unused_3098_);
v___x_3074_ = v_toApplicative_3065_;
v_isShared_3075_ = v_isSharedCheck_3097_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_toSeqRight_3072_);
lean_inc(v_toSeqLeft_3071_);
lean_inc(v_toSeq_3070_);
lean_inc(v_toFunctor_3069_);
lean_dec(v_toApplicative_3065_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3097_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___f_3076_; lean_object* v___f_3077_; lean_object* v___f_3078_; lean_object* v___f_3079_; lean_object* v___f_3080_; lean_object* v___x_3081_; lean_object* v___f_3082_; lean_object* v___f_3083_; lean_object* v___f_3084_; lean_object* v___x_3086_; 
v___f_3076_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0));
v___f_3077_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_3078_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_3069_);
v___f_3079_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3079_, 0, v_toFunctor_3069_);
v___f_3080_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3080_, 0, v_toFunctor_3069_);
v___x_3081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3081_, 0, v___f_3079_);
lean_ctor_set(v___x_3081_, 1, v___f_3080_);
v___f_3082_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3082_, 0, v_toSeqRight_3072_);
v___f_3083_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3083_, 0, v_toSeqLeft_3071_);
v___f_3084_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3084_, 0, v_toSeq_3070_);
if (v_isShared_3075_ == 0)
{
lean_ctor_set(v___x_3074_, 4, v___f_3082_);
lean_ctor_set(v___x_3074_, 3, v___f_3083_);
lean_ctor_set(v___x_3074_, 2, v___f_3084_);
lean_ctor_set(v___x_3074_, 1, v___f_3077_);
lean_ctor_set(v___x_3074_, 0, v___x_3081_);
v___x_3086_ = v___x_3074_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v___x_3081_);
lean_ctor_set(v_reuseFailAlloc_3096_, 1, v___f_3077_);
lean_ctor_set(v_reuseFailAlloc_3096_, 2, v___f_3084_);
lean_ctor_set(v_reuseFailAlloc_3096_, 3, v___f_3083_);
lean_ctor_set(v_reuseFailAlloc_3096_, 4, v___f_3082_);
v___x_3086_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
lean_object* v___x_3088_; 
if (v_isShared_3068_ == 0)
{
lean_ctor_set(v___x_3067_, 1, v___f_3078_);
lean_ctor_set(v___x_3067_, 0, v___x_3086_);
v___x_3088_ = v___x_3067_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v___x_3086_);
lean_ctor_set(v_reuseFailAlloc_3095_, 1, v___f_3078_);
v___x_3088_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
size_t v_sz_3089_; size_t v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_192__overap_3093_; lean_object* v___x_3094_; 
v_sz_3089_ = lean_array_size(v_a_3042_);
v___x_3090_ = ((size_t)0ULL);
v___x_3091_ = l_unsafeCast___redArg(v_a_3042_);
v___x_3092_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3088_, v___f_3076_, v_sz_3089_, v___x_3090_, v___x_3091_);
v___x_192__overap_3093_ = l_unsafeCast___redArg(v___x_3092_);
lean_dec(v___x_3092_);
lean_inc(v_a_3046_);
lean_inc_ref(v_a_3045_);
lean_inc(v_a_3044_);
lean_inc_ref(v_a_3043_);
v___x_3094_ = lean_apply_5(v___x_192__overap_3093_, v_a_3043_, v_a_3044_, v_a_3045_, v_a_3046_, lean_box(0));
return v___x_3094_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___boxed(lean_object* v_pu_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_){
_start:
{
uint8_t v_pu_boxed_3108_; lean_object* v_res_3109_; 
v_pu_boxed_3108_ = lean_unbox(v_pu_3101_);
v_res_3109_ = l_Lean_Compiler_LCNF_Probe_declNames(v_pu_boxed_3108_, v_a_3102_, v_a_3103_, v_a_3104_, v_a_3105_, v_a_3106_);
lean_dec(v_a_3106_);
lean_dec_ref(v_a_3105_);
lean_dec(v_a_3104_);
lean_dec_ref(v_a_3103_);
lean_dec_ref(v_a_3102_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(lean_object* v_inst_3110_, lean_object* v_x_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3117_ = lean_apply_1(v_inst_3110_, v_x_3111_);
v___x_3118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3117_);
return v___x_3118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed(lean_object* v_inst_3119_, lean_object* v_x_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(v_inst_3119_, v_x_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg(lean_object* v_inst_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_){
_start:
{
lean_object* v___x_3134_; lean_object* v_toApplicative_3135_; lean_object* v_toFunctor_3136_; lean_object* v_toSeq_3137_; lean_object* v_toSeqLeft_3138_; lean_object* v_toSeqRight_3139_; lean_object* v___f_3140_; lean_object* v___f_3141_; lean_object* v___f_3142_; lean_object* v___f_3143_; lean_object* v___x_3144_; lean_object* v___f_3145_; lean_object* v___f_3146_; lean_object* v___f_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v_toApplicative_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3185_; 
v___x_3134_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3135_ = lean_ctor_get(v___x_3134_, 0);
v_toFunctor_3136_ = lean_ctor_get(v_toApplicative_3135_, 0);
v_toSeq_3137_ = lean_ctor_get(v_toApplicative_3135_, 2);
v_toSeqLeft_3138_ = lean_ctor_get(v_toApplicative_3135_, 3);
v_toSeqRight_3139_ = lean_ctor_get(v_toApplicative_3135_, 4);
v___f_3140_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_3141_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3136_, 2);
v___f_3142_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3142_, 0, v_toFunctor_3136_);
v___f_3143_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3143_, 0, v_toFunctor_3136_);
v___x_3144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___f_3142_);
lean_ctor_set(v___x_3144_, 1, v___f_3143_);
lean_inc(v_toSeqRight_3139_);
v___f_3145_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3145_, 0, v_toSeqRight_3139_);
lean_inc(v_toSeqLeft_3138_);
v___f_3146_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3146_, 0, v_toSeqLeft_3138_);
lean_inc(v_toSeq_3137_);
v___f_3147_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3147_, 0, v_toSeq_3137_);
v___x_3148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3144_);
lean_ctor_set(v___x_3148_, 1, v___f_3140_);
lean_ctor_set(v___x_3148_, 2, v___f_3147_);
lean_ctor_set(v___x_3148_, 3, v___f_3146_);
lean_ctor_set(v___x_3148_, 4, v___f_3145_);
v___x_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
lean_ctor_set(v___x_3149_, 1, v___f_3141_);
v___x_3150_ = l_StateRefT_x27_instMonad___redArg(v___x_3149_);
v_toApplicative_3151_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3185_ == 0)
{
lean_object* v_unused_3186_; 
v_unused_3186_ = lean_ctor_get(v___x_3150_, 1);
lean_dec(v_unused_3186_);
v___x_3153_ = v___x_3150_;
v_isShared_3154_ = v_isSharedCheck_3185_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_toApplicative_3151_);
lean_dec(v___x_3150_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3185_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v_toFunctor_3155_; lean_object* v_toSeq_3156_; lean_object* v_toSeqLeft_3157_; lean_object* v_toSeqRight_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3183_; 
v_toFunctor_3155_ = lean_ctor_get(v_toApplicative_3151_, 0);
v_toSeq_3156_ = lean_ctor_get(v_toApplicative_3151_, 2);
v_toSeqLeft_3157_ = lean_ctor_get(v_toApplicative_3151_, 3);
v_toSeqRight_3158_ = lean_ctor_get(v_toApplicative_3151_, 4);
v_isSharedCheck_3183_ = !lean_is_exclusive(v_toApplicative_3151_);
if (v_isSharedCheck_3183_ == 0)
{
lean_object* v_unused_3184_; 
v_unused_3184_ = lean_ctor_get(v_toApplicative_3151_, 1);
lean_dec(v_unused_3184_);
v___x_3160_ = v_toApplicative_3151_;
v_isShared_3161_ = v_isSharedCheck_3183_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_toSeqRight_3158_);
lean_inc(v_toSeqLeft_3157_);
lean_inc(v_toSeq_3156_);
lean_inc(v_toFunctor_3155_);
lean_dec(v_toApplicative_3151_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3183_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v___f_3162_; lean_object* v___f_3163_; lean_object* v___f_3164_; lean_object* v___f_3165_; lean_object* v___f_3166_; lean_object* v___x_3167_; lean_object* v___f_3168_; lean_object* v___f_3169_; lean_object* v___f_3170_; lean_object* v___x_3172_; 
v___f_3162_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3162_, 0, v_inst_3127_);
v___f_3163_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_3164_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_3155_);
v___f_3165_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3165_, 0, v_toFunctor_3155_);
v___f_3166_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3166_, 0, v_toFunctor_3155_);
v___x_3167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___f_3165_);
lean_ctor_set(v___x_3167_, 1, v___f_3166_);
v___f_3168_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3168_, 0, v_toSeqRight_3158_);
v___f_3169_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3169_, 0, v_toSeqLeft_3157_);
v___f_3170_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3170_, 0, v_toSeq_3156_);
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 4, v___f_3168_);
lean_ctor_set(v___x_3160_, 3, v___f_3169_);
lean_ctor_set(v___x_3160_, 2, v___f_3170_);
lean_ctor_set(v___x_3160_, 1, v___f_3163_);
lean_ctor_set(v___x_3160_, 0, v___x_3167_);
v___x_3172_ = v___x_3160_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v___x_3167_);
lean_ctor_set(v_reuseFailAlloc_3182_, 1, v___f_3163_);
lean_ctor_set(v_reuseFailAlloc_3182_, 2, v___f_3170_);
lean_ctor_set(v_reuseFailAlloc_3182_, 3, v___f_3169_);
lean_ctor_set(v_reuseFailAlloc_3182_, 4, v___f_3168_);
v___x_3172_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
lean_object* v___x_3174_; 
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 1, v___f_3164_);
lean_ctor_set(v___x_3153_, 0, v___x_3172_);
v___x_3174_ = v___x_3153_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3172_);
lean_ctor_set(v_reuseFailAlloc_3181_, 1, v___f_3164_);
v___x_3174_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
size_t v_sz_3175_; size_t v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_157__overap_3179_; lean_object* v___x_3180_; 
v_sz_3175_ = lean_array_size(v_a_3128_);
v___x_3176_ = ((size_t)0ULL);
v___x_3177_ = l_unsafeCast___redArg(v_a_3128_);
v___x_3178_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3174_, v___f_3162_, v_sz_3175_, v___x_3176_, v___x_3177_);
v___x_157__overap_3179_ = l_unsafeCast___redArg(v___x_3178_);
lean_dec(v___x_3178_);
lean_inc(v_a_3132_);
lean_inc_ref(v_a_3131_);
lean_inc(v_a_3130_);
lean_inc_ref(v_a_3129_);
v___x_3180_ = lean_apply_5(v___x_157__overap_3179_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_, lean_box(0));
return v___x_3180_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___boxed(lean_object* v_inst_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_){
_start:
{
lean_object* v_res_3194_; 
v_res_3194_ = l_Lean_Compiler_LCNF_Probe_toString___redArg(v_inst_3187_, v_a_3188_, v_a_3189_, v_a_3190_, v_a_3191_, v_a_3192_);
lean_dec(v_a_3192_);
lean_dec_ref(v_a_3191_);
lean_dec(v_a_3190_);
lean_dec_ref(v_a_3189_);
lean_dec_ref(v_a_3188_);
return v_res_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString(lean_object* v_00_u03b1_3195_, lean_object* v_inst_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_){
_start:
{
lean_object* v___x_3203_; lean_object* v_toApplicative_3204_; lean_object* v_toFunctor_3205_; lean_object* v_toSeq_3206_; lean_object* v_toSeqLeft_3207_; lean_object* v_toSeqRight_3208_; lean_object* v___f_3209_; lean_object* v___f_3210_; lean_object* v___f_3211_; lean_object* v___f_3212_; lean_object* v___x_3213_; lean_object* v___f_3214_; lean_object* v___f_3215_; lean_object* v___f_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v_toApplicative_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3254_; 
v___x_3203_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3204_ = lean_ctor_get(v___x_3203_, 0);
v_toFunctor_3205_ = lean_ctor_get(v_toApplicative_3204_, 0);
v_toSeq_3206_ = lean_ctor_get(v_toApplicative_3204_, 2);
v_toSeqLeft_3207_ = lean_ctor_get(v_toApplicative_3204_, 3);
v_toSeqRight_3208_ = lean_ctor_get(v_toApplicative_3204_, 4);
v___f_3209_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_3210_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3205_, 2);
v___f_3211_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3211_, 0, v_toFunctor_3205_);
v___f_3212_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3212_, 0, v_toFunctor_3205_);
v___x_3213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3213_, 0, v___f_3211_);
lean_ctor_set(v___x_3213_, 1, v___f_3212_);
lean_inc(v_toSeqRight_3208_);
v___f_3214_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3214_, 0, v_toSeqRight_3208_);
lean_inc(v_toSeqLeft_3207_);
v___f_3215_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3215_, 0, v_toSeqLeft_3207_);
lean_inc(v_toSeq_3206_);
v___f_3216_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3216_, 0, v_toSeq_3206_);
v___x_3217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3213_);
lean_ctor_set(v___x_3217_, 1, v___f_3209_);
lean_ctor_set(v___x_3217_, 2, v___f_3216_);
lean_ctor_set(v___x_3217_, 3, v___f_3215_);
lean_ctor_set(v___x_3217_, 4, v___f_3214_);
v___x_3218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3217_);
lean_ctor_set(v___x_3218_, 1, v___f_3210_);
v___x_3219_ = l_StateRefT_x27_instMonad___redArg(v___x_3218_);
v_toApplicative_3220_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3254_ == 0)
{
lean_object* v_unused_3255_; 
v_unused_3255_ = lean_ctor_get(v___x_3219_, 1);
lean_dec(v_unused_3255_);
v___x_3222_ = v___x_3219_;
v_isShared_3223_ = v_isSharedCheck_3254_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_toApplicative_3220_);
lean_dec(v___x_3219_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3254_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v_toFunctor_3224_; lean_object* v_toSeq_3225_; lean_object* v_toSeqLeft_3226_; lean_object* v_toSeqRight_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3252_; 
v_toFunctor_3224_ = lean_ctor_get(v_toApplicative_3220_, 0);
v_toSeq_3225_ = lean_ctor_get(v_toApplicative_3220_, 2);
v_toSeqLeft_3226_ = lean_ctor_get(v_toApplicative_3220_, 3);
v_toSeqRight_3227_ = lean_ctor_get(v_toApplicative_3220_, 4);
v_isSharedCheck_3252_ = !lean_is_exclusive(v_toApplicative_3220_);
if (v_isSharedCheck_3252_ == 0)
{
lean_object* v_unused_3253_; 
v_unused_3253_ = lean_ctor_get(v_toApplicative_3220_, 1);
lean_dec(v_unused_3253_);
v___x_3229_ = v_toApplicative_3220_;
v_isShared_3230_ = v_isSharedCheck_3252_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_toSeqRight_3227_);
lean_inc(v_toSeqLeft_3226_);
lean_inc(v_toSeq_3225_);
lean_inc(v_toFunctor_3224_);
lean_dec(v_toApplicative_3220_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3252_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___f_3231_; lean_object* v___f_3232_; lean_object* v___f_3233_; lean_object* v___f_3234_; lean_object* v___f_3235_; lean_object* v___x_3236_; lean_object* v___f_3237_; lean_object* v___f_3238_; lean_object* v___f_3239_; lean_object* v___x_3241_; 
v___f_3231_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3231_, 0, v_inst_3196_);
v___f_3232_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_3233_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_3224_);
v___f_3234_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3234_, 0, v_toFunctor_3224_);
v___f_3235_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3235_, 0, v_toFunctor_3224_);
v___x_3236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3236_, 0, v___f_3234_);
lean_ctor_set(v___x_3236_, 1, v___f_3235_);
v___f_3237_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3237_, 0, v_toSeqRight_3227_);
v___f_3238_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3238_, 0, v_toSeqLeft_3226_);
v___f_3239_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3239_, 0, v_toSeq_3225_);
if (v_isShared_3230_ == 0)
{
lean_ctor_set(v___x_3229_, 4, v___f_3237_);
lean_ctor_set(v___x_3229_, 3, v___f_3238_);
lean_ctor_set(v___x_3229_, 2, v___f_3239_);
lean_ctor_set(v___x_3229_, 1, v___f_3232_);
lean_ctor_set(v___x_3229_, 0, v___x_3236_);
v___x_3241_ = v___x_3229_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v___x_3236_);
lean_ctor_set(v_reuseFailAlloc_3251_, 1, v___f_3232_);
lean_ctor_set(v_reuseFailAlloc_3251_, 2, v___f_3239_);
lean_ctor_set(v_reuseFailAlloc_3251_, 3, v___f_3238_);
lean_ctor_set(v_reuseFailAlloc_3251_, 4, v___f_3237_);
v___x_3241_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
lean_object* v___x_3243_; 
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 1, v___f_3233_);
lean_ctor_set(v___x_3222_, 0, v___x_3241_);
v___x_3243_ = v___x_3222_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3241_);
lean_ctor_set(v_reuseFailAlloc_3250_, 1, v___f_3233_);
v___x_3243_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
size_t v_sz_3244_; size_t v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_197__overap_3248_; lean_object* v___x_3249_; 
v_sz_3244_ = lean_array_size(v_a_3197_);
v___x_3245_ = ((size_t)0ULL);
v___x_3246_ = l_unsafeCast___redArg(v_a_3197_);
v___x_3247_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3243_, v___f_3231_, v_sz_3244_, v___x_3245_, v___x_3246_);
v___x_197__overap_3248_ = l_unsafeCast___redArg(v___x_3247_);
lean_dec(v___x_3247_);
lean_inc(v_a_3201_);
lean_inc_ref(v_a_3200_);
lean_inc(v_a_3199_);
lean_inc_ref(v_a_3198_);
v___x_3249_ = lean_apply_5(v___x_197__overap_3248_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_, lean_box(0));
return v___x_3249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___boxed(lean_object* v_00_u03b1_3256_, lean_object* v_inst_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_, lean_object* v_a_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_){
_start:
{
lean_object* v_res_3264_; 
v_res_3264_ = l_Lean_Compiler_LCNF_Probe_toString(v_00_u03b1_3256_, v_inst_3257_, v_a_3258_, v_a_3259_, v_a_3260_, v_a_3261_, v_a_3262_);
lean_dec(v_a_3262_);
lean_dec_ref(v_a_3261_);
lean_dec(v_a_3260_);
lean_dec_ref(v_a_3259_);
lean_dec_ref(v_a_3258_);
return v_res_3264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg(lean_object* v_data_3265_){
_start:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3267_ = lean_array_get_size(v_data_3265_);
v___x_3268_ = lean_unsigned_to_nat(1u);
v___x_3269_ = lean_mk_empty_array_with_capacity(v___x_3268_);
v___x_3270_ = lean_array_push(v___x_3269_, v___x_3267_);
v___x_3271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3270_);
return v___x_3271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg___boxed(lean_object* v_data_3272_, lean_object* v_a_3273_){
_start:
{
lean_object* v_res_3274_; 
v_res_3274_ = l_Lean_Compiler_LCNF_Probe_count___redArg(v_data_3272_);
lean_dec_ref(v_data_3272_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count(lean_object* v_00_u03b1_3275_, lean_object* v_data_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_){
_start:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___x_3282_ = lean_array_get_size(v_data_3276_);
v___x_3283_ = lean_unsigned_to_nat(1u);
v___x_3284_ = lean_mk_empty_array_with_capacity(v___x_3283_);
v___x_3285_ = lean_array_push(v___x_3284_, v___x_3282_);
v___x_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3285_);
return v___x_3286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___boxed(lean_object* v_00_u03b1_3287_, lean_object* v_data_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_){
_start:
{
lean_object* v_res_3294_; 
v_res_3294_ = l_Lean_Compiler_LCNF_Probe_count(v_00_u03b1_3287_, v_data_3288_, v_a_3289_, v_a_3290_, v_a_3291_, v_a_3292_);
lean_dec(v_a_3292_);
lean_dec_ref(v_a_3291_);
lean_dec(v_a_3290_);
lean_dec_ref(v_a_3289_);
lean_dec_ref(v_data_3288_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg(lean_object* v_data_3296_){
_start:
{
lean_object* v___y_3299_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; uint8_t v___x_3307_; 
v___x_3304_ = lean_unsigned_to_nat(0u);
v___x_3305_ = lean_array_get_size(v_data_3296_);
v___x_3306_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v___x_3307_ = lean_nat_dec_lt(v___x_3304_, v___x_3305_);
if (v___x_3307_ == 0)
{
lean_dec_ref(v_data_3296_);
v___y_3299_ = v___x_3304_;
goto v___jp_3298_;
}
else
{
lean_object* v___f_3308_; uint8_t v___x_3309_; 
v___f_3308_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0));
v___x_3309_ = lean_nat_dec_le(v___x_3305_, v___x_3305_);
if (v___x_3309_ == 0)
{
if (v___x_3307_ == 0)
{
lean_dec_ref(v_data_3296_);
v___y_3299_ = v___x_3304_;
goto v___jp_3298_;
}
else
{
size_t v___x_3310_; size_t v___x_3311_; lean_object* v___x_3312_; 
v___x_3310_ = ((size_t)0ULL);
v___x_3311_ = lean_usize_of_nat(v___x_3305_);
v___x_3312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3306_, v___f_3308_, v_data_3296_, v___x_3310_, v___x_3311_, v___x_3304_);
v___y_3299_ = v___x_3312_;
goto v___jp_3298_;
}
}
else
{
size_t v___x_3313_; size_t v___x_3314_; lean_object* v___x_3315_; 
v___x_3313_ = ((size_t)0ULL);
v___x_3314_ = lean_usize_of_nat(v___x_3305_);
v___x_3315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3306_, v___f_3308_, v_data_3296_, v___x_3313_, v___x_3314_, v___x_3304_);
v___y_3299_ = v___x_3315_;
goto v___jp_3298_;
}
}
v___jp_3298_:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; 
v___x_3300_ = lean_unsigned_to_nat(1u);
v___x_3301_ = lean_mk_empty_array_with_capacity(v___x_3300_);
v___x_3302_ = lean_array_push(v___x_3301_, v___y_3299_);
v___x_3303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3302_);
return v___x_3303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___boxed(lean_object* v_data_3316_, lean_object* v_a_3317_){
_start:
{
lean_object* v_res_3318_; 
v_res_3318_ = l_Lean_Compiler_LCNF_Probe_sum___redArg(v_data_3316_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum(lean_object* v_data_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_){
_start:
{
lean_object* v___y_3326_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; uint8_t v___x_3334_; 
v___x_3331_ = lean_unsigned_to_nat(0u);
v___x_3332_ = lean_array_get_size(v_data_3319_);
v___x_3333_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v___x_3334_ = lean_nat_dec_lt(v___x_3331_, v___x_3332_);
if (v___x_3334_ == 0)
{
lean_dec_ref(v_data_3319_);
v___y_3326_ = v___x_3331_;
goto v___jp_3325_;
}
else
{
lean_object* v___f_3335_; uint8_t v___x_3336_; 
v___f_3335_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0));
v___x_3336_ = lean_nat_dec_le(v___x_3332_, v___x_3332_);
if (v___x_3336_ == 0)
{
if (v___x_3334_ == 0)
{
lean_dec_ref(v_data_3319_);
v___y_3326_ = v___x_3331_;
goto v___jp_3325_;
}
else
{
size_t v___x_3337_; size_t v___x_3338_; lean_object* v___x_3339_; 
v___x_3337_ = ((size_t)0ULL);
v___x_3338_ = lean_usize_of_nat(v___x_3332_);
v___x_3339_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3333_, v___f_3335_, v_data_3319_, v___x_3337_, v___x_3338_, v___x_3331_);
v___y_3326_ = v___x_3339_;
goto v___jp_3325_;
}
}
else
{
size_t v___x_3340_; size_t v___x_3341_; lean_object* v___x_3342_; 
v___x_3340_ = ((size_t)0ULL);
v___x_3341_ = lean_usize_of_nat(v___x_3332_);
v___x_3342_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3333_, v___f_3335_, v_data_3319_, v___x_3340_, v___x_3341_, v___x_3331_);
v___y_3326_ = v___x_3342_;
goto v___jp_3325_;
}
}
v___jp_3325_:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; 
v___x_3327_ = lean_unsigned_to_nat(1u);
v___x_3328_ = lean_mk_empty_array_with_capacity(v___x_3327_);
v___x_3329_ = lean_array_push(v___x_3328_, v___y_3326_);
v___x_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3330_, 0, v___x_3329_);
return v___x_3330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___boxed(lean_object* v_data_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_){
_start:
{
lean_object* v_res_3349_; 
v_res_3349_ = l_Lean_Compiler_LCNF_Probe_sum(v_data_3343_, v_a_3344_, v_a_3345_, v_a_3346_, v_a_3347_);
lean_dec(v_a_3347_);
lean_dec_ref(v_a_3346_);
lean_dec(v_a_3345_);
lean_dec_ref(v_a_3344_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg(lean_object* v_n_3350_, lean_object* v_data_3351_){
_start:
{
lean_object* v_lower_3354_; lean_object* v_upper_3355_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; 
v___x_3359_ = lean_array_get_size(v_data_3351_);
v___x_3360_ = lean_nat_sub(v___x_3359_, v_n_3350_);
v___x_3361_ = lean_unsigned_to_nat(0u);
v___x_3362_ = lean_nat_dec_le(v___x_3360_, v___x_3361_);
if (v___x_3362_ == 0)
{
v_lower_3354_ = v___x_3360_;
v_upper_3355_ = v___x_3359_;
goto v___jp_3353_;
}
else
{
lean_dec(v___x_3360_);
v_lower_3354_ = v___x_3361_;
v_upper_3355_ = v___x_3359_;
goto v___jp_3353_;
}
v___jp_3353_:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3356_ = l_Array_toSubarray___redArg(v_data_3351_, v_lower_3354_, v_upper_3355_);
v___x_3357_ = l_Subarray_copy___redArg(v___x_3356_);
v___x_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3357_);
return v___x_3358_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg___boxed(lean_object* v_n_3363_, lean_object* v_data_3364_, lean_object* v_a_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l_Lean_Compiler_LCNF_Probe_tail___redArg(v_n_3363_, v_data_3364_);
lean_dec(v_n_3363_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail(lean_object* v_00_u03b1_3367_, lean_object* v_n_3368_, lean_object* v_data_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_){
_start:
{
lean_object* v_lower_3376_; lean_object* v_upper_3377_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; uint8_t v___x_3384_; 
v___x_3381_ = lean_array_get_size(v_data_3369_);
v___x_3382_ = lean_nat_sub(v___x_3381_, v_n_3368_);
v___x_3383_ = lean_unsigned_to_nat(0u);
v___x_3384_ = lean_nat_dec_le(v___x_3382_, v___x_3383_);
if (v___x_3384_ == 0)
{
v_lower_3376_ = v___x_3382_;
v_upper_3377_ = v___x_3381_;
goto v___jp_3375_;
}
else
{
lean_dec(v___x_3382_);
v_lower_3376_ = v___x_3383_;
v_upper_3377_ = v___x_3381_;
goto v___jp_3375_;
}
v___jp_3375_:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3378_ = l_Array_toSubarray___redArg(v_data_3369_, v_lower_3376_, v_upper_3377_);
v___x_3379_ = l_Subarray_copy___redArg(v___x_3378_);
v___x_3380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3379_);
return v___x_3380_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___boxed(lean_object* v_00_u03b1_3385_, lean_object* v_n_3386_, lean_object* v_data_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_){
_start:
{
lean_object* v_res_3393_; 
v_res_3393_ = l_Lean_Compiler_LCNF_Probe_tail(v_00_u03b1_3385_, v_n_3386_, v_data_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_);
lean_dec(v_a_3391_);
lean_dec_ref(v_a_3390_);
lean_dec(v_a_3389_);
lean_dec_ref(v_a_3388_);
lean_dec(v_n_3386_);
return v_res_3393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg(lean_object* v_n_3394_, lean_object* v_data_3395_){
_start:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3397_ = lean_unsigned_to_nat(0u);
v___x_3398_ = l_Array_toSubarray___redArg(v_data_3395_, v___x_3397_, v_n_3394_);
v___x_3399_ = l_Subarray_copy___redArg(v___x_3398_);
v___x_3400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3399_);
return v___x_3400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg___boxed(lean_object* v_n_3401_, lean_object* v_data_3402_, lean_object* v_a_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l_Lean_Compiler_LCNF_Probe_head___redArg(v_n_3401_, v_data_3402_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head(lean_object* v_00_u03b1_3405_, lean_object* v_n_3406_, lean_object* v_data_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_){
_start:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3413_ = lean_unsigned_to_nat(0u);
v___x_3414_ = l_Array_toSubarray___redArg(v_data_3407_, v___x_3413_, v_n_3406_);
v___x_3415_ = l_Subarray_copy___redArg(v___x_3414_);
v___x_3416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3415_);
return v___x_3416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___boxed(lean_object* v_00_u03b1_3417_, lean_object* v_n_3418_, lean_object* v_data_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_, lean_object* v_a_3424_){
_start:
{
lean_object* v_res_3425_; 
v_res_3425_ = l_Lean_Compiler_LCNF_Probe_head(v_00_u03b1_3417_, v_n_3418_, v_data_3419_, v_a_3420_, v_a_3421_, v_a_3422_, v_a_3423_);
lean_dec(v_a_3423_);
lean_dec_ref(v_a_3422_);
lean_dec(v_a_3421_);
lean_dec_ref(v_a_3420_);
return v_res_3425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(lean_object* v_probe_3431_, lean_object* v___x_3432_, lean_object* v_inst_3433_, lean_object* v___x_3434_, lean_object* v___x_3435_, lean_object* v_toMonadRef_3436_, lean_object* v___f_3437_, lean_object* v_decls_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_){
_start:
{
lean_object* v___x_3444_; 
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
lean_inc(v___y_3440_);
lean_inc_ref(v___y_3439_);
lean_inc_ref(v_decls_3438_);
v___x_3444_ = lean_apply_6(v_probe_3431_, v_decls_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_, lean_box(0));
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v_toCold_3445_; lean_object* v_options_3446_; uint8_t v_hasTrace_3447_; 
v_toCold_3445_ = lean_ctor_get(v___y_3441_, 0);
v_options_3446_ = lean_ctor_get(v_toCold_3445_, 2);
v_hasTrace_3447_ = lean_ctor_get_uint8(v_options_3446_, sizeof(void*)*1);
if (v_hasTrace_3447_ == 0)
{
lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3454_; 
lean_dec_ref(v___f_3437_);
lean_dec_ref(v_toMonadRef_3436_);
lean_dec_ref(v___x_3435_);
lean_dec_ref(v___x_3434_);
lean_dec_ref(v_inst_3433_);
lean_dec_ref(v___x_3432_);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3454_ == 0)
{
lean_object* v_unused_3455_; 
v_unused_3455_ = lean_ctor_get(v___x_3444_, 0);
lean_dec(v_unused_3455_);
v___x_3449_ = v___x_3444_;
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
else
{
lean_dec(v___x_3444_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3452_; 
if (v_isShared_3450_ == 0)
{
lean_ctor_set(v___x_3449_, 0, v_decls_3438_);
v___x_3452_ = v___x_3449_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_decls_3438_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
else
{
lean_object* v_a_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3493_; 
v_a_3456_ = lean_ctor_get(v___x_3444_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3458_ = v___x_3444_;
v_isShared_3459_ = v_isSharedCheck_3493_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_a_3456_);
lean_dec(v___x_3444_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3493_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v_inheritedTraceOptions_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; uint8_t v___x_3465_; 
v_inheritedTraceOptions_3460_ = lean_ctor_get(v_toCold_3445_, 11);
v___x_3461_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0));
v___x_3462_ = l_Lean_Name_mkStr2(v___x_3461_, v___x_3432_);
v___x_3463_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2));
lean_inc(v___x_3462_);
v___x_3464_ = l_Lean_Name_append(v___x_3463_, v___x_3462_);
v___x_3465_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3460_, v_options_3446_, v___x_3464_);
lean_dec(v___x_3464_);
if (v___x_3465_ == 0)
{
lean_object* v___x_3467_; 
lean_dec(v___x_3462_);
lean_dec(v_a_3456_);
lean_dec_ref(v___f_3437_);
lean_dec_ref(v_toMonadRef_3436_);
lean_dec_ref(v___x_3435_);
lean_dec_ref(v___x_3434_);
lean_dec_ref(v_inst_3433_);
if (v_isShared_3459_ == 0)
{
lean_ctor_set(v___x_3458_, 0, v_decls_3438_);
v___x_3467_ = v___x_3458_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_decls_3438_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
else
{
lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_961__overap_3475_; lean_object* v___x_3476_; 
lean_del_object(v___x_3458_);
v___x_3469_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3));
v___x_3470_ = lean_array_to_list(v_a_3456_);
v___x_3471_ = l_List_toString___redArg(v_inst_3433_, v___x_3470_);
v___x_3472_ = lean_string_append(v___x_3469_, v___x_3471_);
lean_dec_ref(v___x_3471_);
v___x_3473_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3472_);
v___x_3474_ = l_Lean_MessageData_ofFormat(v___x_3473_);
v___x_961__overap_3475_ = l_Lean_addTrace___redArg(v___x_3434_, v___x_3435_, v_toMonadRef_3436_, v___f_3437_, v___x_3462_, v___x_3474_);
lean_inc(v___y_3442_);
lean_inc_ref(v___y_3441_);
lean_inc(v___y_3440_);
lean_inc_ref(v___y_3439_);
v___x_3476_ = lean_apply_5(v___x_961__overap_3475_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_, lean_box(0));
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3483_; 
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3483_ == 0)
{
lean_object* v_unused_3484_; 
v_unused_3484_ = lean_ctor_get(v___x_3476_, 0);
lean_dec(v_unused_3484_);
v___x_3478_ = v___x_3476_;
v_isShared_3479_ = v_isSharedCheck_3483_;
goto v_resetjp_3477_;
}
else
{
lean_dec(v___x_3476_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3483_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3481_; 
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 0, v_decls_3438_);
v___x_3481_ = v___x_3478_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_decls_3438_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
lean_dec_ref(v_decls_3438_);
v_a_3485_ = lean_ctor_get(v___x_3476_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3476_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3476_);
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
}
}
}
else
{
lean_object* v_a_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3501_; 
lean_dec_ref(v_decls_3438_);
lean_dec_ref(v___f_3437_);
lean_dec_ref(v_toMonadRef_3436_);
lean_dec_ref(v___x_3435_);
lean_dec_ref(v___x_3434_);
lean_dec_ref(v_inst_3433_);
lean_dec_ref(v___x_3432_);
v_a_3494_ = lean_ctor_get(v___x_3444_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3496_ = v___x_3444_;
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_a_3494_);
lean_dec(v___x_3444_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3499_; 
if (v_isShared_3497_ == 0)
{
v___x_3499_ = v___x_3496_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v_a_3494_);
v___x_3499_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
return v___x_3499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed(lean_object* v_probe_3502_, lean_object* v___x_3503_, lean_object* v_inst_3504_, lean_object* v___x_3505_, lean_object* v___x_3506_, lean_object* v_toMonadRef_3507_, lean_object* v___f_3508_, lean_object* v_decls_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_){
_start:
{
lean_object* v_res_3515_; 
v_res_3515_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(v_probe_3502_, v___x_3503_, v_inst_3504_, v___x_3505_, v___x_3506_, v_toMonadRef_3507_, v___f_3508_, v_decls_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
return v_res_3515_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2(void){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3518_ = l_Lean_Core_instMonadTraceCoreM;
v___x_3519_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1));
v___x_3520_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_3519_, v___x_3518_);
return v___x_3520_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3(void){
_start:
{
lean_object* v___x_3521_; lean_object* v___f_3522_; lean_object* v___x_3523_; 
v___x_3521_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2);
v___f_3522_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0));
v___x_3523_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_3522_, v___x_3521_);
return v___x_3523_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6(void){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3526_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_3527_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1));
v___x_3528_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5));
v___x_3529_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_3528_, v___x_3527_, v___x_3526_);
return v___x_3529_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7(void){
_start:
{
lean_object* v___x_3530_; lean_object* v___f_3531_; lean_object* v___f_3532_; lean_object* v___x_3533_; 
v___x_3530_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6);
v___f_3531_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0));
v___f_3532_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4));
v___x_3533_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_3532_, v___f_3531_, v___x_3530_);
return v___x_3533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg(lean_object* v_inst_3538_, uint8_t v_phase_3539_, lean_object* v_probe_3540_){
_start:
{
lean_object* v___x_3541_; lean_object* v_toApplicative_3542_; lean_object* v_toFunctor_3543_; lean_object* v_toSeq_3544_; lean_object* v_toSeqLeft_3545_; lean_object* v_toSeqRight_3546_; lean_object* v___f_3547_; lean_object* v___f_3548_; lean_object* v___f_3549_; lean_object* v___f_3550_; lean_object* v___x_3551_; lean_object* v___f_3552_; lean_object* v___f_3553_; lean_object* v___f_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v_toApplicative_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3595_; 
v___x_3541_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3542_ = lean_ctor_get(v___x_3541_, 0);
v_toFunctor_3543_ = lean_ctor_get(v_toApplicative_3542_, 0);
v_toSeq_3544_ = lean_ctor_get(v_toApplicative_3542_, 2);
v_toSeqLeft_3545_ = lean_ctor_get(v_toApplicative_3542_, 3);
v_toSeqRight_3546_ = lean_ctor_get(v_toApplicative_3542_, 4);
v___f_3547_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_3548_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3543_, 2);
v___f_3549_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3549_, 0, v_toFunctor_3543_);
v___f_3550_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3550_, 0, v_toFunctor_3543_);
v___x_3551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3551_, 0, v___f_3549_);
lean_ctor_set(v___x_3551_, 1, v___f_3550_);
lean_inc(v_toSeqRight_3546_);
v___f_3552_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3552_, 0, v_toSeqRight_3546_);
lean_inc(v_toSeqLeft_3545_);
v___f_3553_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3553_, 0, v_toSeqLeft_3545_);
lean_inc(v_toSeq_3544_);
v___f_3554_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3554_, 0, v_toSeq_3544_);
v___x_3555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3551_);
lean_ctor_set(v___x_3555_, 1, v___f_3547_);
lean_ctor_set(v___x_3555_, 2, v___f_3554_);
lean_ctor_set(v___x_3555_, 3, v___f_3553_);
lean_ctor_set(v___x_3555_, 4, v___f_3552_);
v___x_3556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3555_);
lean_ctor_set(v___x_3556_, 1, v___f_3548_);
v___x_3557_ = l_StateRefT_x27_instMonad___redArg(v___x_3556_);
v_toApplicative_3558_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3595_ == 0)
{
lean_object* v_unused_3596_; 
v_unused_3596_ = lean_ctor_get(v___x_3557_, 1);
lean_dec(v_unused_3596_);
v___x_3560_ = v___x_3557_;
v_isShared_3561_ = v_isSharedCheck_3595_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_toApplicative_3558_);
lean_dec(v___x_3557_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3595_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v_toFunctor_3562_; lean_object* v_toSeq_3563_; lean_object* v_toSeqLeft_3564_; lean_object* v_toSeqRight_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3593_; 
v_toFunctor_3562_ = lean_ctor_get(v_toApplicative_3558_, 0);
v_toSeq_3563_ = lean_ctor_get(v_toApplicative_3558_, 2);
v_toSeqLeft_3564_ = lean_ctor_get(v_toApplicative_3558_, 3);
v_toSeqRight_3565_ = lean_ctor_get(v_toApplicative_3558_, 4);
v_isSharedCheck_3593_ = !lean_is_exclusive(v_toApplicative_3558_);
if (v_isSharedCheck_3593_ == 0)
{
lean_object* v_unused_3594_; 
v_unused_3594_ = lean_ctor_get(v_toApplicative_3558_, 1);
lean_dec(v_unused_3594_);
v___x_3567_ = v_toApplicative_3558_;
v_isShared_3568_ = v_isSharedCheck_3593_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_toSeqRight_3565_);
lean_inc(v_toSeqLeft_3564_);
lean_inc(v_toSeq_3563_);
lean_inc(v_toFunctor_3562_);
lean_dec(v_toApplicative_3558_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3593_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___f_3569_; lean_object* v___f_3570_; lean_object* v___f_3571_; lean_object* v___f_3572_; lean_object* v___x_3573_; lean_object* v___f_3574_; lean_object* v___f_3575_; lean_object* v___f_3576_; lean_object* v___x_3578_; 
v___f_3569_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_3570_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_3562_);
v___f_3571_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3571_, 0, v_toFunctor_3562_);
v___f_3572_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3572_, 0, v_toFunctor_3562_);
v___x_3573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3573_, 0, v___f_3571_);
lean_ctor_set(v___x_3573_, 1, v___f_3572_);
v___f_3574_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3574_, 0, v_toSeqRight_3565_);
v___f_3575_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3575_, 0, v_toSeqLeft_3564_);
v___f_3576_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3576_, 0, v_toSeq_3563_);
if (v_isShared_3568_ == 0)
{
lean_ctor_set(v___x_3567_, 4, v___f_3574_);
lean_ctor_set(v___x_3567_, 3, v___f_3575_);
lean_ctor_set(v___x_3567_, 2, v___f_3576_);
lean_ctor_set(v___x_3567_, 1, v___f_3569_);
lean_ctor_set(v___x_3567_, 0, v___x_3573_);
v___x_3578_ = v___x_3567_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v___x_3573_);
lean_ctor_set(v_reuseFailAlloc_3592_, 1, v___f_3569_);
lean_ctor_set(v_reuseFailAlloc_3592_, 2, v___f_3576_);
lean_ctor_set(v_reuseFailAlloc_3592_, 3, v___f_3575_);
lean_ctor_set(v_reuseFailAlloc_3592_, 4, v___f_3574_);
v___x_3578_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
lean_object* v___x_3580_; 
if (v_isShared_3561_ == 0)
{
lean_ctor_set(v___x_3560_, 1, v___f_3570_);
lean_ctor_set(v___x_3560_, 0, v___x_3578_);
v___x_3580_ = v___x_3560_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v___x_3578_);
lean_ctor_set(v_reuseFailAlloc_3591_, 1, v___f_3570_);
v___x_3580_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v_toMonadRef_3583_; lean_object* v___f_3584_; lean_object* v___x_3585_; uint8_t v___x_3586_; lean_object* v___x_3587_; lean_object* v___f_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3581_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3);
v___x_3582_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7);
v_toMonadRef_3583_ = lean_ctor_get(v___x_3582_, 0);
v___f_3584_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8));
v___x_3585_ = lean_unsigned_to_nat(0u);
v___x_3586_ = 0;
v___x_3587_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9));
lean_inc_ref(v_toMonadRef_3583_);
v___f_3588_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_3588_, 0, v_probe_3540_);
lean_closure_set(v___f_3588_, 1, v___x_3587_);
lean_closure_set(v___f_3588_, 2, v_inst_3538_);
lean_closure_set(v___f_3588_, 3, v___x_3580_);
lean_closure_set(v___f_3588_, 4, v___x_3581_);
lean_closure_set(v___f_3588_, 5, v_toMonadRef_3583_);
lean_closure_set(v___f_3588_, 6, v___f_3584_);
v___x_3589_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10));
v___x_3590_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_3590_, 0, v___x_3585_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
lean_ctor_set(v___x_3590_, 2, v___f_3588_);
lean_ctor_set_uint8(v___x_3590_, sizeof(void*)*3, v_phase_3539_);
lean_ctor_set_uint8(v___x_3590_, sizeof(void*)*3 + 1, v_phase_3539_);
lean_ctor_set_uint8(v___x_3590_, sizeof(void*)*3 + 2, v___x_3586_);
return v___x_3590_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___boxed(lean_object* v_inst_3597_, lean_object* v_phase_3598_, lean_object* v_probe_3599_){
_start:
{
uint8_t v_phase_boxed_3600_; lean_object* v_res_3601_; 
v_phase_boxed_3600_ = lean_unbox(v_phase_3598_);
v_res_3601_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg(v_inst_3597_, v_phase_boxed_3600_, v_probe_3599_);
return v_res_3601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass(lean_object* v_00_u03b2_3602_, lean_object* v_inst_3603_, uint8_t v_phase_3604_, lean_object* v_probe_3605_){
_start:
{
lean_object* v___x_3606_; 
v___x_3606_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg(v_inst_3603_, v_phase_3604_, v_probe_3605_);
return v___x_3606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___boxed(lean_object* v_00_u03b2_3607_, lean_object* v_inst_3608_, lean_object* v_phase_3609_, lean_object* v_probe_3610_){
_start:
{
uint8_t v_phase_boxed_3611_; lean_object* v_res_3612_; 
v_phase_boxed_3611_ = lean_unbox(v_phase_3609_);
v_res_3612_ = l_Lean_Compiler_LCNF_Probe_toPass(v_00_u03b2_3607_, v_inst_3608_, v_phase_boxed_3611_, v_probe_3610_);
return v_res_3612_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; 
v___x_3616_ = lean_box(0);
v___x_3617_ = l_unsafeCast___redArg(v___x_3616_);
return v___x_3617_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3619_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3620_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3621_ = l_Lean_Name_str___override(v___x_3620_, v___x_3619_);
return v___x_3621_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3623_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3624_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3625_ = l_Lean_Name_str___override(v___x_3624_, v___x_3623_);
return v___x_3625_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3626_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0));
v___x_3627_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3628_ = l_Lean_Name_str___override(v___x_3627_, v___x_3626_);
return v___x_3628_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3630_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3631_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3632_ = l_Lean_Name_str___override(v___x_3631_, v___x_3630_);
return v___x_3632_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3634_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3635_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3636_ = l_Lean_Name_str___override(v___x_3635_, v___x_3634_);
return v___x_3636_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3637_ = lean_unsigned_to_nat(0u);
v___x_3638_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3639_ = l_Lean_Name_num___override(v___x_3638_, v___x_3637_);
return v___x_3639_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3640_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3641_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3642_ = l_Lean_Name_str___override(v___x_3641_, v___x_3640_);
return v___x_3642_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3643_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0));
v___x_3644_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3645_ = l_Lean_Name_str___override(v___x_3644_, v___x_3643_);
return v___x_3645_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v___x_3646_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3647_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3648_ = l_Lean_Name_str___override(v___x_3647_, v___x_3646_);
return v___x_3648_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3650_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3651_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3652_ = l_Lean_Name_str___override(v___x_3651_, v___x_3650_);
return v___x_3652_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___x_3654_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3655_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3656_ = l_Lean_Name_str___override(v___x_3655_, v___x_3654_);
return v___x_3656_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; 
v___x_3658_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3659_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3660_ = l_Lean_Name_str___override(v___x_3659_, v___x_3658_);
return v___x_3660_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3661_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3662_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3663_ = l_Lean_Name_str___override(v___x_3662_, v___x_3661_);
return v___x_3663_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3664_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0));
v___x_3665_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3666_ = l_Lean_Name_str___override(v___x_3665_, v___x_3664_);
return v___x_3666_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3667_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3668_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3669_ = l_Lean_Name_str___override(v___x_3668_, v___x_3667_);
return v___x_3669_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3670_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3671_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3672_ = l_Lean_Name_str___override(v___x_3671_, v___x_3670_);
return v___x_3672_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3673_ = lean_unsigned_to_nat(4008565020u);
v___x_3674_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3675_ = l_Lean_Name_num___override(v___x_3674_, v___x_3673_);
return v___x_3675_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; 
v___x_3677_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3678_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3679_ = l_Lean_Name_str___override(v___x_3678_, v___x_3677_);
return v___x_3679_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3681_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3682_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3683_ = l_Lean_Name_str___override(v___x_3682_, v___x_3681_);
return v___x_3683_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3684_ = lean_unsigned_to_nat(2u);
v___x_3685_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3686_ = l_Lean_Name_num___override(v___x_3685_, v___x_3684_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3688_; uint8_t v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v___x_3688_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3689_ = 1;
v___x_3690_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__30_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3691_ = l_Lean_registerTraceClass(v___x_3688_, v___x_3689_, v___x_3690_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2____boxed(lean_object* v_a_3692_){
_start:
{
lean_object* v_res_3693_; 
v_res_3693_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_();
return v_res_3693_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Probing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Probing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Probing(builtin);
}
#ifdef __cplusplus
}
#endif

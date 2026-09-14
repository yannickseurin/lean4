// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Prover.Bitblast
// Imports: public import Lean.Meta.Tactic.BVDecide.Prover.Basic public import Lean.Meta.Tactic.BVDecide.TacticContext import Lean.Meta.Native
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_Sat_AIG_toGraphviz_invEdgeStyle(uint8_t);
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_nativeEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_IO_lazyPure___redArg(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
uint64_t l_Std_Tactic_BVDecide_instHashableBVBit_hash(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Std_Sat_AIG_Decl_relabel___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Std_Sat_AIG_toCNF(lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVLogicalExpr_bitblast(lean_object*);
static const lean_string_object l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "compiler"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "extract_closed"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 100, 103, 244, 164, 70, 204, 201)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(157, 223, 55, 216, 54, 195, 10, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Compiling proof certificate term"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Compiling and evaluating reflection proof term"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Compiling expr term"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sat"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(174, 199, 37, 233, 64, 174, 173, 134)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BVDecide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "BVLogicalExpr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__8_value),LEAN_SCALAR_PTR_LITERAL(170, 137, 185, 0, 130, 201, 136, 210)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__13_value),LEAN_SCALAR_PTR_LITERAL(33, 50, 202, 5, 86, 233, 189, 240)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "unsat_of_verifyBVExpr_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 119, .m_capacity = 119, .m_length = 118, .m_data = "Tactic `bv_decide` failed: The LRAT certificate could not be verified; evaluating the following term returned `false`:"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Reflect"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "verifyBVExpr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__19_value),LEAN_SCALAR_PTR_LITERAL(98, 197, 94, 16, 136, 54, 174, 95)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15_value),LEAN_SCALAR_PTR_LITERAL(39, 247, 82, 233, 7, 29, 35, 28)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__25_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__26_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__28_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Obtaining external proof certificate"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Converting AIG to CNF"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3_spec__17(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__0;
static lean_once_cell_t l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__0;
static lean_once_cell_t l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__1;
static lean_once_cell_t l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__2;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg();
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addFalse___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__23___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35_spec__36___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__34___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addGate___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__25___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___closed__0;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Preparing LRAT reflection term"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Bitblasting BVLogicalExpr to AIG"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27_spec__31___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " -> "};
static const lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__0 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__0_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__1 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__1_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__2 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " [label=\""};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__0 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__0_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__1 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__1_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "\", shape=box];"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__2 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__2_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__3 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__3_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__4 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__4_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__5 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__5_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "\", shape=doublecircle];"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__6 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__6_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 21, .m_data = " ∧\",shape=trapezium];"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__7 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__7_value;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__0;
static lean_once_cell_t l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__1;
static const lean_string_object l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Digraph AIG {"};
static const lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__2 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__2_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__3 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(lean_object*);
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "SAT solver found a counter example."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "SAT solver found a proof."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__4_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "aig.gv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__12___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__14(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__14___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__2_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__4_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "AIG has "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " nodes."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addFalse___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addFalse___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addGate___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addGate___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27_spec__31(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__34(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35_spec__36(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(lean_object* v_o_4_, lean_object* v_k_5_, uint8_t v_v_6_){
_start:
{
lean_object* v_map_7_; uint8_t v_hasTrace_8_; lean_object* v___x_10_; uint8_t v_isShared_11_; uint8_t v_isSharedCheck_22_; 
v_map_7_ = lean_ctor_get(v_o_4_, 0);
v_hasTrace_8_ = lean_ctor_get_uint8(v_o_4_, sizeof(void*)*1);
v_isSharedCheck_22_ = !lean_is_exclusive(v_o_4_);
if (v_isSharedCheck_22_ == 0)
{
v___x_10_ = v_o_4_;
v_isShared_11_ = v_isSharedCheck_22_;
goto v_resetjp_9_;
}
else
{
lean_inc(v_map_7_);
lean_dec(v_o_4_);
v___x_10_ = lean_box(0);
v_isShared_11_ = v_isSharedCheck_22_;
goto v_resetjp_9_;
}
v_resetjp_9_:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_12_, 0, v_v_6_);
lean_inc(v_k_5_);
v___x_13_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_5_, v___x_12_, v_map_7_);
if (v_hasTrace_8_ == 0)
{
lean_object* v___x_14_; uint8_t v___x_15_; lean_object* v___x_17_; 
v___x_14_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
v___x_15_ = l_Lean_Name_isPrefixOf(v___x_14_, v_k_5_);
lean_dec(v_k_5_);
if (v_isShared_11_ == 0)
{
lean_ctor_set(v___x_10_, 0, v___x_13_);
v___x_17_ = v___x_10_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_13_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
lean_ctor_set_uint8(v___x_17_, sizeof(void*)*1, v___x_15_);
return v___x_17_;
}
}
else
{
lean_object* v___x_20_; 
lean_dec(v_k_5_);
if (v_isShared_11_ == 0)
{
lean_ctor_set(v___x_10_, 0, v___x_13_);
v___x_20_ = v___x_10_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v___x_13_);
lean_ctor_set_uint8(v_reuseFailAlloc_21_, sizeof(void*)*1, v_hasTrace_8_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___boxed(lean_object* v_o_23_, lean_object* v_k_24_, lean_object* v_v_25_){
_start:
{
uint8_t v_v_boxed_26_; lean_object* v_res_27_; 
v_v_boxed_26_ = lean_unbox(v_v_25_);
v_res_27_ = l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_o_23_, v_k_24_, v_v_boxed_26_);
return v_res_27_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(lean_object* v_opts_28_, lean_object* v_opt_29_){
_start:
{
lean_object* v_name_30_; lean_object* v_defValue_31_; lean_object* v_map_32_; lean_object* v___x_33_; 
v_name_30_ = lean_ctor_get(v_opt_29_, 0);
v_defValue_31_ = lean_ctor_get(v_opt_29_, 1);
v_map_32_ = lean_ctor_get(v_opts_28_, 0);
v___x_33_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_32_, v_name_30_);
if (lean_obj_tag(v___x_33_) == 0)
{
uint8_t v___x_34_; 
v___x_34_ = lean_unbox(v_defValue_31_);
return v___x_34_;
}
else
{
lean_object* v_val_35_; 
v_val_35_ = lean_ctor_get(v___x_33_, 0);
lean_inc(v_val_35_);
lean_dec_ref_known(v___x_33_, 1);
if (lean_obj_tag(v_val_35_) == 1)
{
uint8_t v_v_36_; 
v_v_36_ = lean_ctor_get_uint8(v_val_35_, 0);
lean_dec_ref_known(v_val_35_, 0);
return v_v_36_;
}
else
{
uint8_t v___x_37_; 
lean_dec(v_val_35_);
v___x_37_ = lean_unbox(v_defValue_31_);
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___boxed(lean_object* v_opts_38_, lean_object* v_opt_39_){
_start:
{
uint8_t v_res_40_; lean_object* v_r_41_; 
v_res_40_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_38_, v_opt_39_);
lean_dec_ref(v_opt_39_);
lean_dec_ref(v_opts_38_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(lean_object* v_opts_42_, lean_object* v_opt_43_){
_start:
{
lean_object* v_name_44_; lean_object* v_defValue_45_; lean_object* v_map_46_; lean_object* v___x_47_; 
v_name_44_ = lean_ctor_get(v_opt_43_, 0);
v_defValue_45_ = lean_ctor_get(v_opt_43_, 1);
v_map_46_ = lean_ctor_get(v_opts_42_, 0);
v___x_47_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_46_, v_name_44_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_inc(v_defValue_45_);
return v_defValue_45_;
}
else
{
lean_object* v_val_48_; 
v_val_48_ = lean_ctor_get(v___x_47_, 0);
lean_inc(v_val_48_);
lean_dec_ref_known(v___x_47_, 1);
if (lean_obj_tag(v_val_48_) == 3)
{
lean_object* v_v_49_; 
v_v_49_ = lean_ctor_get(v_val_48_, 0);
lean_inc(v_v_49_);
lean_dec_ref_known(v_val_48_, 1);
return v_v_49_;
}
else
{
lean_dec(v_val_48_);
lean_inc(v_defValue_45_);
return v_defValue_45_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2___boxed(lean_object* v_opts_50_, lean_object* v_opt_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_50_, v_opt_51_);
lean_dec_ref(v_opt_51_);
lean_dec_ref(v_opts_50_);
return v_res_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(lean_object* v_name_63_, lean_object* v_value_64_, lean_object* v_type_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
lean_object* v_toCold_69_; lean_object* v_currRecDepth_70_; lean_object* v_ref_71_; uint8_t v_suppressElabErrors_72_; lean_object* v_fileName_73_; lean_object* v_fileMap_74_; lean_object* v_options_75_; lean_object* v_currNamespace_76_; lean_object* v_openDecls_77_; lean_object* v_initHeartbeats_78_; lean_object* v_maxHeartbeats_79_; lean_object* v_quotContext_80_; lean_object* v_currMacroScope_81_; lean_object* v_cancelTk_x3f_82_; lean_object* v_inheritedTraceOptions_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; uint8_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; lean_object* v_fileName_98_; lean_object* v_fileMap_99_; lean_object* v_currNamespace_100_; lean_object* v_openDecls_101_; lean_object* v_initHeartbeats_102_; lean_object* v_maxHeartbeats_103_; lean_object* v_quotContext_104_; lean_object* v_currMacroScope_105_; lean_object* v_cancelTk_x3f_106_; lean_object* v_inheritedTraceOptions_107_; lean_object* v_currRecDepth_108_; lean_object* v_ref_109_; uint8_t v_suppressElabErrors_110_; lean_object* v___y_111_; lean_object* v___x_117_; uint8_t v___y_119_; lean_object* v_env_140_; uint8_t v___x_141_; 
v_toCold_69_ = lean_ctor_get(v_a_66_, 0);
v_currRecDepth_70_ = lean_ctor_get(v_a_66_, 1);
v_ref_71_ = lean_ctor_get(v_a_66_, 2);
v_suppressElabErrors_72_ = lean_ctor_get_uint8(v_a_66_, sizeof(void*)*3 + 1);
v_fileName_73_ = lean_ctor_get(v_toCold_69_, 0);
v_fileMap_74_ = lean_ctor_get(v_toCold_69_, 1);
v_options_75_ = lean_ctor_get(v_toCold_69_, 2);
v_currNamespace_76_ = lean_ctor_get(v_toCold_69_, 4);
v_openDecls_77_ = lean_ctor_get(v_toCold_69_, 5);
v_initHeartbeats_78_ = lean_ctor_get(v_toCold_69_, 6);
v_maxHeartbeats_79_ = lean_ctor_get(v_toCold_69_, 7);
v_quotContext_80_ = lean_ctor_get(v_toCold_69_, 8);
v_currMacroScope_81_ = lean_ctor_get(v_toCold_69_, 9);
v_cancelTk_x3f_82_ = lean_ctor_get(v_toCold_69_, 10);
v_inheritedTraceOptions_83_ = lean_ctor_get(v_toCold_69_, 11);
v___x_84_ = lean_box(0);
lean_inc(v_name_63_);
v___x_85_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_85_, 0, v_name_63_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
lean_ctor_set(v___x_85_, 2, v_type_65_);
v___x_86_ = lean_box(1);
v___x_87_ = 1;
v___x_88_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_88_, 0, v_name_63_);
lean_ctor_set(v___x_88_, 1, v___x_84_);
v___x_89_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_89_, 0, v___x_85_);
lean_ctor_set(v___x_89_, 1, v_value_64_);
lean_ctor_set(v___x_89_, 2, v___x_86_);
lean_ctor_set(v___x_89_, 3, v___x_88_);
lean_ctor_set_uint8(v___x_89_, sizeof(void*)*4, v___x_87_);
v___x_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
v___x_91_ = 1;
v___x_92_ = 0;
v___x_93_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2));
lean_inc_ref(v_options_75_);
v___x_94_ = l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_options_75_, v___x_93_, v___x_92_);
v___x_95_ = l_Lean_diagnostics;
v___x_96_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___x_94_, v___x_95_);
v___x_117_ = lean_st_ref_get(v_a_67_);
v_env_140_ = lean_ctor_get(v___x_117_, 0);
lean_inc_ref(v_env_140_);
lean_dec(v___x_117_);
v___x_141_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_140_);
lean_dec_ref(v_env_140_);
if (v___x_96_ == 0)
{
if (v___x_141_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_83_);
lean_inc(v_cancelTk_x3f_82_);
lean_inc(v_currMacroScope_81_);
lean_inc(v_quotContext_80_);
lean_inc(v_maxHeartbeats_79_);
lean_inc(v_initHeartbeats_78_);
lean_inc(v_openDecls_77_);
lean_inc(v_currNamespace_76_);
lean_inc_ref(v_fileMap_74_);
lean_inc_ref(v_fileName_73_);
v_fileName_98_ = v_fileName_73_;
v_fileMap_99_ = v_fileMap_74_;
v_currNamespace_100_ = v_currNamespace_76_;
v_openDecls_101_ = v_openDecls_77_;
v_initHeartbeats_102_ = v_initHeartbeats_78_;
v_maxHeartbeats_103_ = v_maxHeartbeats_79_;
v_quotContext_104_ = v_quotContext_80_;
v_currMacroScope_105_ = v_currMacroScope_81_;
v_cancelTk_x3f_106_ = v_cancelTk_x3f_82_;
v_inheritedTraceOptions_107_ = v_inheritedTraceOptions_83_;
v_currRecDepth_108_ = v_currRecDepth_70_;
v_ref_109_ = v_ref_71_;
v_suppressElabErrors_110_ = v_suppressElabErrors_72_;
v___y_111_ = v_a_67_;
goto v___jp_97_;
}
else
{
v___y_119_ = v___x_96_;
goto v___jp_118_;
}
}
else
{
v___y_119_ = v___x_141_;
goto v___jp_118_;
}
v___jp_97_:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_112_ = l_Lean_maxRecDepth;
v___x_113_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v___x_94_, v___x_112_);
v___x_114_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_114_, 0, v_fileName_98_);
lean_ctor_set(v___x_114_, 1, v_fileMap_99_);
lean_ctor_set(v___x_114_, 2, v___x_94_);
lean_ctor_set(v___x_114_, 3, v___x_113_);
lean_ctor_set(v___x_114_, 4, v_currNamespace_100_);
lean_ctor_set(v___x_114_, 5, v_openDecls_101_);
lean_ctor_set(v___x_114_, 6, v_initHeartbeats_102_);
lean_ctor_set(v___x_114_, 7, v_maxHeartbeats_103_);
lean_ctor_set(v___x_114_, 8, v_quotContext_104_);
lean_ctor_set(v___x_114_, 9, v_currMacroScope_105_);
lean_ctor_set(v___x_114_, 10, v_cancelTk_x3f_106_);
lean_ctor_set(v___x_114_, 11, v_inheritedTraceOptions_107_);
lean_inc(v_ref_109_);
lean_inc(v_currRecDepth_108_);
v___x_115_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v_currRecDepth_108_);
lean_ctor_set(v___x_115_, 2, v_ref_109_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*3, v___x_96_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*3 + 1, v_suppressElabErrors_110_);
v___x_116_ = l_Lean_addAndCompile(v___x_90_, v___x_91_, v___x_92_, v___x_115_, v___y_111_);
lean_dec_ref_known(v___x_115_, 3);
return v___x_116_;
}
v___jp_118_:
{
if (v___y_119_ == 0)
{
lean_object* v___x_120_; lean_object* v_env_121_; lean_object* v_nextMacroScope_122_; lean_object* v_ngen_123_; lean_object* v_auxDeclNGen_124_; lean_object* v_traceState_125_; lean_object* v_messages_126_; lean_object* v_infoState_127_; lean_object* v_snapshotTasks_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_138_; 
v___x_120_ = lean_st_ref_take(v_a_67_);
v_env_121_ = lean_ctor_get(v___x_120_, 0);
v_nextMacroScope_122_ = lean_ctor_get(v___x_120_, 1);
v_ngen_123_ = lean_ctor_get(v___x_120_, 2);
v_auxDeclNGen_124_ = lean_ctor_get(v___x_120_, 3);
v_traceState_125_ = lean_ctor_get(v___x_120_, 4);
v_messages_126_ = lean_ctor_get(v___x_120_, 6);
v_infoState_127_ = lean_ctor_get(v___x_120_, 7);
v_snapshotTasks_128_ = lean_ctor_get(v___x_120_, 8);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_138_ == 0)
{
lean_object* v_unused_139_; 
v_unused_139_ = lean_ctor_get(v___x_120_, 5);
lean_dec(v_unused_139_);
v___x_130_ = v___x_120_;
v_isShared_131_ = v_isSharedCheck_138_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_snapshotTasks_128_);
lean_inc(v_infoState_127_);
lean_inc(v_messages_126_);
lean_inc(v_traceState_125_);
lean_inc(v_auxDeclNGen_124_);
lean_inc(v_ngen_123_);
lean_inc(v_nextMacroScope_122_);
lean_inc(v_env_121_);
lean_dec(v___x_120_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_138_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_135_; 
v___x_132_ = l_Lean_Kernel_enableDiag(v_env_121_, v___x_96_);
v___x_133_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 5, v___x_133_);
lean_ctor_set(v___x_130_, 0, v___x_132_);
v___x_135_ = v___x_130_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_132_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_nextMacroScope_122_);
lean_ctor_set(v_reuseFailAlloc_137_, 2, v_ngen_123_);
lean_ctor_set(v_reuseFailAlloc_137_, 3, v_auxDeclNGen_124_);
lean_ctor_set(v_reuseFailAlloc_137_, 4, v_traceState_125_);
lean_ctor_set(v_reuseFailAlloc_137_, 5, v___x_133_);
lean_ctor_set(v_reuseFailAlloc_137_, 6, v_messages_126_);
lean_ctor_set(v_reuseFailAlloc_137_, 7, v_infoState_127_);
lean_ctor_set(v_reuseFailAlloc_137_, 8, v_snapshotTasks_128_);
v___x_135_ = v_reuseFailAlloc_137_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_136_; 
v___x_136_ = lean_st_ref_put(v_a_67_, v___x_135_);
lean_inc_ref(v_inheritedTraceOptions_83_);
lean_inc(v_cancelTk_x3f_82_);
lean_inc(v_currMacroScope_81_);
lean_inc(v_quotContext_80_);
lean_inc(v_maxHeartbeats_79_);
lean_inc(v_initHeartbeats_78_);
lean_inc(v_openDecls_77_);
lean_inc(v_currNamespace_76_);
lean_inc_ref(v_fileMap_74_);
lean_inc_ref(v_fileName_73_);
v_fileName_98_ = v_fileName_73_;
v_fileMap_99_ = v_fileMap_74_;
v_currNamespace_100_ = v_currNamespace_76_;
v_openDecls_101_ = v_openDecls_77_;
v_initHeartbeats_102_ = v_initHeartbeats_78_;
v_maxHeartbeats_103_ = v_maxHeartbeats_79_;
v_quotContext_104_ = v_quotContext_80_;
v_currMacroScope_105_ = v_currMacroScope_81_;
v_cancelTk_x3f_106_ = v_cancelTk_x3f_82_;
v_inheritedTraceOptions_107_ = v_inheritedTraceOptions_83_;
v_currRecDepth_108_ = v_currRecDepth_70_;
v_ref_109_ = v_ref_71_;
v_suppressElabErrors_110_ = v_suppressElabErrors_72_;
v___y_111_ = v_a_67_;
goto v___jp_97_;
}
}
}
else
{
lean_inc_ref(v_inheritedTraceOptions_83_);
lean_inc(v_cancelTk_x3f_82_);
lean_inc(v_currMacroScope_81_);
lean_inc(v_quotContext_80_);
lean_inc(v_maxHeartbeats_79_);
lean_inc(v_initHeartbeats_78_);
lean_inc(v_openDecls_77_);
lean_inc(v_currNamespace_76_);
lean_inc_ref(v_fileMap_74_);
lean_inc_ref(v_fileName_73_);
v_fileName_98_ = v_fileName_73_;
v_fileMap_99_ = v_fileMap_74_;
v_currNamespace_100_ = v_currNamespace_76_;
v_openDecls_101_ = v_openDecls_77_;
v_initHeartbeats_102_ = v_initHeartbeats_78_;
v_maxHeartbeats_103_ = v_maxHeartbeats_79_;
v_quotContext_104_ = v_quotContext_80_;
v_currMacroScope_105_ = v_currMacroScope_81_;
v_cancelTk_x3f_106_ = v_cancelTk_x3f_82_;
v_inheritedTraceOptions_107_ = v_inheritedTraceOptions_83_;
v_currRecDepth_108_ = v_currRecDepth_70_;
v_ref_109_ = v_ref_71_;
v_suppressElabErrors_110_ = v_suppressElabErrors_72_;
v___y_111_ = v_a_67_;
goto v___jp_97_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___boxed(lean_object* v_name_142_, lean_object* v_value_143_, lean_object* v_type_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_name_142_, v_value_143_, v_type_144_, v_a_145_, v_a_146_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
return v_res_148_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = lean_unsigned_to_nat(32u);
v___x_150_ = lean_mk_empty_array_with_capacity(v___x_149_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
return v___x_151_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_152_ = ((size_t)5ULL);
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_unsigned_to_nat(32u);
v___x_155_ = lean_mk_empty_array_with_capacity(v___x_154_);
v___x_156_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0);
v___x_157_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_155_);
lean_ctor_set(v___x_157_, 2, v___x_153_);
lean_ctor_set(v___x_157_, 3, v___x_153_);
lean_ctor_set_usize(v___x_157_, 4, v___x_152_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(lean_object* v___y_158_){
_start:
{
lean_object* v___x_160_; lean_object* v_traceState_161_; lean_object* v_traces_162_; lean_object* v___x_163_; lean_object* v_traceState_164_; lean_object* v_env_165_; lean_object* v_nextMacroScope_166_; lean_object* v_ngen_167_; lean_object* v_auxDeclNGen_168_; lean_object* v_cache_169_; lean_object* v_messages_170_; lean_object* v_infoState_171_; lean_object* v_snapshotTasks_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_191_; 
v___x_160_ = lean_st_ref_get(v___y_158_);
v_traceState_161_ = lean_ctor_get(v___x_160_, 4);
lean_inc_ref(v_traceState_161_);
lean_dec(v___x_160_);
v_traces_162_ = lean_ctor_get(v_traceState_161_, 0);
lean_inc_ref(v_traces_162_);
lean_dec_ref(v_traceState_161_);
v___x_163_ = lean_st_ref_take(v___y_158_);
v_traceState_164_ = lean_ctor_get(v___x_163_, 4);
v_env_165_ = lean_ctor_get(v___x_163_, 0);
v_nextMacroScope_166_ = lean_ctor_get(v___x_163_, 1);
v_ngen_167_ = lean_ctor_get(v___x_163_, 2);
v_auxDeclNGen_168_ = lean_ctor_get(v___x_163_, 3);
v_cache_169_ = lean_ctor_get(v___x_163_, 5);
v_messages_170_ = lean_ctor_get(v___x_163_, 6);
v_infoState_171_ = lean_ctor_get(v___x_163_, 7);
v_snapshotTasks_172_ = lean_ctor_get(v___x_163_, 8);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_191_ == 0)
{
v___x_174_ = v___x_163_;
v_isShared_175_ = v_isSharedCheck_191_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_snapshotTasks_172_);
lean_inc(v_infoState_171_);
lean_inc(v_messages_170_);
lean_inc(v_cache_169_);
lean_inc(v_traceState_164_);
lean_inc(v_auxDeclNGen_168_);
lean_inc(v_ngen_167_);
lean_inc(v_nextMacroScope_166_);
lean_inc(v_env_165_);
lean_dec(v___x_163_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_191_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
uint64_t v_tid_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_189_; 
v_tid_176_ = lean_ctor_get_uint64(v_traceState_164_, sizeof(void*)*1);
v_isSharedCheck_189_ = !lean_is_exclusive(v_traceState_164_);
if (v_isSharedCheck_189_ == 0)
{
lean_object* v_unused_190_; 
v_unused_190_ = lean_ctor_get(v_traceState_164_, 0);
lean_dec(v_unused_190_);
v___x_178_ = v_traceState_164_;
v_isShared_179_ = v_isSharedCheck_189_;
goto v_resetjp_177_;
}
else
{
lean_dec(v_traceState_164_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_189_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_180_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 0, v___x_180_);
v___x_182_ = v___x_178_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_180_);
lean_ctor_set_uint64(v_reuseFailAlloc_188_, sizeof(void*)*1, v_tid_176_);
v___x_182_ = v_reuseFailAlloc_188_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_184_; 
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 4, v___x_182_);
v___x_184_ = v___x_174_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_env_165_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_nextMacroScope_166_);
lean_ctor_set(v_reuseFailAlloc_187_, 2, v_ngen_167_);
lean_ctor_set(v_reuseFailAlloc_187_, 3, v_auxDeclNGen_168_);
lean_ctor_set(v_reuseFailAlloc_187_, 4, v___x_182_);
lean_ctor_set(v_reuseFailAlloc_187_, 5, v_cache_169_);
lean_ctor_set(v_reuseFailAlloc_187_, 6, v_messages_170_);
lean_ctor_set(v_reuseFailAlloc_187_, 7, v_infoState_171_);
lean_ctor_set(v_reuseFailAlloc_187_, 8, v_snapshotTasks_172_);
v___x_184_ = v_reuseFailAlloc_187_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_st_ref_put(v___y_158_, v___x_184_);
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v_traces_162_);
return v___x_186_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___boxed(lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_192_);
lean_dec(v___y_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0(lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_198_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___boxed(lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0(v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
return v_res_206_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__1));
v___x_211_ = l_Lean_MessageData_ofFormat(v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0(lean_object* v_x_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2);
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___boxed(lean_object* v_x_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0(v_x_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec_ref(v_x_220_);
return v_res_226_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__1));
v___x_231_ = l_Lean_MessageData_ofFormat(v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1(lean_object* v_x_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2);
v___x_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___boxed(lean_object* v_x_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1(v_x_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec_ref(v_x_240_);
return v_res_246_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__1));
v___x_251_ = l_Lean_MessageData_ofFormat(v___x_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2(lean_object* v_x_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2);
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___boxed(lean_object* v_x_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2(v_x_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec_ref(v_x_260_);
return v_res_266_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__3(lean_object* v_e_267_){
_start:
{
if (lean_obj_tag(v_e_267_) == 0)
{
uint8_t v___x_268_; 
v___x_268_ = 2;
return v___x_268_;
}
else
{
lean_object* v_a_269_; uint8_t v___x_270_; 
v_a_269_ = lean_ctor_get(v_e_267_, 0);
v___x_270_ = l_Lean_Expr_hasSyntheticSorry(v_a_269_);
if (v___x_270_ == 0)
{
uint8_t v___x_271_; 
v___x_271_ = 0;
return v___x_271_;
}
else
{
uint8_t v___x_272_; 
v___x_272_ = 1;
return v___x_272_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__3___boxed(lean_object* v_e_273_){
_start:
{
uint8_t v_res_274_; lean_object* v_r_275_; 
v_res_274_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__3(v_e_273_);
lean_dec_ref(v_e_273_);
v_r_275_ = lean_box(v_res_274_);
return v_r_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__5(lean_object* v_msgData_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v___x_282_; lean_object* v_env_283_; lean_object* v___x_284_; lean_object* v_toCold_285_; lean_object* v_mctx_286_; lean_object* v_lctx_287_; lean_object* v_options_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_282_ = lean_st_ref_get(v___y_280_);
v_env_283_ = lean_ctor_get(v___x_282_, 0);
lean_inc_ref(v_env_283_);
lean_dec(v___x_282_);
v___x_284_ = lean_st_ref_get(v___y_278_);
v_toCold_285_ = lean_ctor_get(v___y_279_, 0);
v_mctx_286_ = lean_ctor_get(v___x_284_, 0);
lean_inc_ref(v_mctx_286_);
lean_dec(v___x_284_);
v_lctx_287_ = lean_ctor_get(v___y_277_, 2);
v_options_288_ = lean_ctor_get(v_toCold_285_, 2);
lean_inc_ref(v_options_288_);
lean_inc_ref(v_lctx_287_);
v___x_289_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_289_, 0, v_env_283_);
lean_ctor_set(v___x_289_, 1, v_mctx_286_);
lean_ctor_set(v___x_289_, 2, v_lctx_287_);
lean_ctor_set(v___x_289_, 3, v_options_288_);
v___x_290_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v_msgData_276_);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__5___boxed(lean_object* v_msgData_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__5(v_msgData_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1_spec__2(size_t v_sz_299_, size_t v_i_300_, lean_object* v_bs_301_){
_start:
{
uint8_t v___x_302_; 
v___x_302_ = lean_usize_dec_lt(v_i_300_, v_sz_299_);
if (v___x_302_ == 0)
{
lean_object* v___x_303_; 
v___x_303_ = l_unsafeCast___redArg(v_bs_301_);
lean_dec_ref(v_bs_301_);
return v___x_303_;
}
else
{
lean_object* v_v_304_; lean_object* v___x_305_; lean_object* v_msg_306_; lean_object* v___x_307_; lean_object* v_bs_x27_308_; size_t v___x_309_; size_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v_v_304_ = lean_array_uget_borrowed(v_bs_301_, v_i_300_);
v___x_305_ = l_unsafeCast___redArg(v_v_304_);
v_msg_306_ = lean_ctor_get(v___x_305_, 1);
lean_inc_ref(v_msg_306_);
lean_dec(v___x_305_);
v___x_307_ = lean_unsigned_to_nat(0u);
v_bs_x27_308_ = lean_array_uset(v_bs_301_, v_i_300_, v___x_307_);
v___x_309_ = ((size_t)1ULL);
v___x_310_ = lean_usize_add(v_i_300_, v___x_309_);
v___x_311_ = l_unsafeCast___redArg(v_msg_306_);
lean_dec_ref(v_msg_306_);
v___x_312_ = lean_array_uset(v_bs_x27_308_, v_i_300_, v___x_311_);
v_i_300_ = v___x_310_;
v_bs_301_ = v___x_312_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_314_, lean_object* v_i_315_, lean_object* v_bs_316_){
_start:
{
size_t v_sz_boxed_317_; size_t v_i_boxed_318_; lean_object* v_res_319_; 
v_sz_boxed_317_ = lean_unbox_usize(v_sz_314_);
lean_dec(v_sz_314_);
v_i_boxed_318_ = lean_unbox_usize(v_i_315_);
lean_dec(v_i_315_);
v_res_319_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1_spec__2(v_sz_boxed_317_, v_i_boxed_318_, v_bs_316_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(lean_object* v_oldTraces_320_, lean_object* v_data_321_, lean_object* v_ref_322_, lean_object* v_msg_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_){
_start:
{
lean_object* v_toCold_329_; lean_object* v_currRecDepth_330_; lean_object* v_ref_331_; uint8_t v_diag_332_; uint8_t v_suppressElabErrors_333_; lean_object* v_ref_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v_traceState_337_; lean_object* v_traces_338_; lean_object* v___x_339_; size_t v_sz_340_; size_t v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_msg_345_; lean_object* v___x_346_; lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_384_; 
v_toCold_329_ = lean_ctor_get(v___y_326_, 0);
v_currRecDepth_330_ = lean_ctor_get(v___y_326_, 1);
v_ref_331_ = lean_ctor_get(v___y_326_, 2);
v_diag_332_ = lean_ctor_get_uint8(v___y_326_, sizeof(void*)*3);
v_suppressElabErrors_333_ = lean_ctor_get_uint8(v___y_326_, sizeof(void*)*3 + 1);
v_ref_334_ = l_Lean_replaceRef(v_ref_322_, v_ref_331_);
lean_inc(v_currRecDepth_330_);
lean_inc_ref(v_toCold_329_);
v___x_335_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_335_, 0, v_toCold_329_);
lean_ctor_set(v___x_335_, 1, v_currRecDepth_330_);
lean_ctor_set(v___x_335_, 2, v_ref_334_);
lean_ctor_set_uint8(v___x_335_, sizeof(void*)*3, v_diag_332_);
lean_ctor_set_uint8(v___x_335_, sizeof(void*)*3 + 1, v_suppressElabErrors_333_);
v___x_336_ = lean_st_ref_get(v___y_327_);
v_traceState_337_ = lean_ctor_get(v___x_336_, 4);
lean_inc_ref(v_traceState_337_);
lean_dec(v___x_336_);
v_traces_338_ = lean_ctor_get(v_traceState_337_, 0);
lean_inc_ref(v_traces_338_);
lean_dec_ref(v_traceState_337_);
v___x_339_ = l_Lean_PersistentArray_toArray___redArg(v_traces_338_);
lean_dec_ref(v_traces_338_);
v_sz_340_ = lean_array_size(v___x_339_);
v___x_341_ = ((size_t)0ULL);
v___x_342_ = l_unsafeCast___redArg(v___x_339_);
lean_dec_ref(v___x_339_);
v___x_343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1_spec__2(v_sz_340_, v___x_341_, v___x_342_);
v___x_344_ = l_unsafeCast___redArg(v___x_343_);
lean_dec_ref(v___x_343_);
v_msg_345_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_345_, 0, v_data_321_);
lean_ctor_set(v_msg_345_, 1, v_msg_323_);
lean_ctor_set(v_msg_345_, 2, v___x_344_);
v___x_346_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__5(v_msg_345_, v___y_324_, v___y_325_, v___x_335_, v___y_327_);
lean_dec_ref_known(v___x_335_, 3);
v_a_347_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_384_ == 0)
{
v___x_349_ = v___x_346_;
v_isShared_350_ = v_isSharedCheck_384_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_346_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_384_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v_traceState_352_; lean_object* v_env_353_; lean_object* v_nextMacroScope_354_; lean_object* v_ngen_355_; lean_object* v_auxDeclNGen_356_; lean_object* v_cache_357_; lean_object* v_messages_358_; lean_object* v_infoState_359_; lean_object* v_snapshotTasks_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_383_; 
v___x_351_ = lean_st_ref_take(v___y_327_);
v_traceState_352_ = lean_ctor_get(v___x_351_, 4);
v_env_353_ = lean_ctor_get(v___x_351_, 0);
v_nextMacroScope_354_ = lean_ctor_get(v___x_351_, 1);
v_ngen_355_ = lean_ctor_get(v___x_351_, 2);
v_auxDeclNGen_356_ = lean_ctor_get(v___x_351_, 3);
v_cache_357_ = lean_ctor_get(v___x_351_, 5);
v_messages_358_ = lean_ctor_get(v___x_351_, 6);
v_infoState_359_ = lean_ctor_get(v___x_351_, 7);
v_snapshotTasks_360_ = lean_ctor_get(v___x_351_, 8);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_383_ == 0)
{
v___x_362_ = v___x_351_;
v_isShared_363_ = v_isSharedCheck_383_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_snapshotTasks_360_);
lean_inc(v_infoState_359_);
lean_inc(v_messages_358_);
lean_inc(v_cache_357_);
lean_inc(v_traceState_352_);
lean_inc(v_auxDeclNGen_356_);
lean_inc(v_ngen_355_);
lean_inc(v_nextMacroScope_354_);
lean_inc(v_env_353_);
lean_dec(v___x_351_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_383_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
uint64_t v_tid_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_381_; 
v_tid_364_ = lean_ctor_get_uint64(v_traceState_352_, sizeof(void*)*1);
v_isSharedCheck_381_ = !lean_is_exclusive(v_traceState_352_);
if (v_isSharedCheck_381_ == 0)
{
lean_object* v_unused_382_; 
v_unused_382_ = lean_ctor_get(v_traceState_352_, 0);
lean_dec(v_unused_382_);
v___x_366_ = v_traceState_352_;
v_isShared_367_ = v_isSharedCheck_381_;
goto v_resetjp_365_;
}
else
{
lean_dec(v_traceState_352_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_381_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_368_ = lean_box(0);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v_ref_322_);
lean_ctor_set(v___x_369_, 1, v_a_347_);
v___x_370_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_320_, v___x_369_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 0, v___x_370_);
v___x_372_ = v___x_366_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_370_);
lean_ctor_set_uint64(v_reuseFailAlloc_380_, sizeof(void*)*1, v_tid_364_);
v___x_372_ = v_reuseFailAlloc_380_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
lean_object* v___x_374_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 4, v___x_372_);
v___x_374_ = v___x_362_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_env_353_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v_nextMacroScope_354_);
lean_ctor_set(v_reuseFailAlloc_379_, 2, v_ngen_355_);
lean_ctor_set(v_reuseFailAlloc_379_, 3, v_auxDeclNGen_356_);
lean_ctor_set(v_reuseFailAlloc_379_, 4, v___x_372_);
lean_ctor_set(v_reuseFailAlloc_379_, 5, v_cache_357_);
lean_ctor_set(v_reuseFailAlloc_379_, 6, v_messages_358_);
lean_ctor_set(v_reuseFailAlloc_379_, 7, v_infoState_359_);
lean_ctor_set(v_reuseFailAlloc_379_, 8, v_snapshotTasks_360_);
v___x_374_ = v_reuseFailAlloc_379_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_375_ = lean_st_ref_put(v___y_327_, v___x_374_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_368_);
v___x_377_ = v___x_349_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_368_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1___boxed(lean_object* v_oldTraces_385_, lean_object* v_data_386_, lean_object* v_ref_387_, lean_object* v_msg_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(v_oldTraces_385_, v_data_386_, v_ref_387_, v_msg_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(lean_object* v_x_395_){
_start:
{
if (lean_obj_tag(v_x_395_) == 0)
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
v_a_397_ = lean_ctor_get(v_x_395_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v_x_395_);
if (v_isSharedCheck_404_ == 0)
{
v___x_399_ = v_x_395_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v_x_395_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
lean_ctor_set_tag(v___x_399_, 1);
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_397_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
else
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_412_; 
v_a_405_ = lean_ctor_get(v_x_395_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v_x_395_);
if (v_isSharedCheck_412_ == 0)
{
v___x_407_ = v_x_395_;
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v_x_395_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_412_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_410_; 
if (v_isShared_408_ == 0)
{
lean_ctor_set_tag(v___x_407_, 0);
v___x_410_ = v___x_407_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_405_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg___boxed(lean_object* v_x_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_x_413_);
return v_res_415_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0(void){
_start:
{
lean_object* v___x_416_; double v___x_417_; 
v___x_416_ = lean_unsigned_to_nat(0u);
v___x_417_ = lean_float_of_nat(v___x_416_);
return v___x_417_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__1));
v___x_420_ = l_Lean_stringToMessageData(v___x_419_);
return v___x_420_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3(void){
_start:
{
lean_object* v___x_421_; double v___x_422_; 
v___x_421_ = lean_unsigned_to_nat(1000u);
v___x_422_ = lean_float_of_nat(v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(lean_object* v_cls_423_, uint8_t v_collapsed_424_, lean_object* v_tag_425_, lean_object* v_opts_426_, uint8_t v_clsEnabled_427_, lean_object* v_oldTraces_428_, lean_object* v_msg_429_, lean_object* v_resStartStop_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_fst_436_; lean_object* v_snd_437_; lean_object* v___y_439_; lean_object* v___y_440_; lean_object* v_data_441_; lean_object* v_fst_452_; lean_object* v_snd_453_; lean_object* v___x_454_; uint8_t v___x_455_; lean_object* v___y_457_; lean_object* v_a_458_; uint8_t v___y_473_; double v___y_504_; 
v_fst_436_ = lean_ctor_get(v_resStartStop_430_, 0);
lean_inc(v_fst_436_);
v_snd_437_ = lean_ctor_get(v_resStartStop_430_, 1);
lean_inc(v_snd_437_);
lean_dec_ref(v_resStartStop_430_);
v_fst_452_ = lean_ctor_get(v_snd_437_, 0);
lean_inc(v_fst_452_);
v_snd_453_ = lean_ctor_get(v_snd_437_, 1);
lean_inc(v_snd_453_);
lean_dec(v_snd_437_);
v___x_454_ = l_Lean_trace_profiler;
v___x_455_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_426_, v___x_454_);
if (v___x_455_ == 0)
{
v___y_473_ = v___x_455_;
goto v___jp_472_;
}
else
{
lean_object* v___x_509_; uint8_t v___x_510_; 
v___x_509_ = l_Lean_trace_profiler_useHeartbeats;
v___x_510_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_426_, v___x_509_);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; lean_object* v___x_512_; double v___x_513_; double v___x_514_; double v___x_515_; 
v___x_511_ = l_Lean_trace_profiler_threshold;
v___x_512_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_426_, v___x_511_);
v___x_513_ = lean_float_of_nat(v___x_512_);
v___x_514_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3);
v___x_515_ = lean_float_div(v___x_513_, v___x_514_);
v___y_504_ = v___x_515_;
goto v___jp_503_;
}
else
{
lean_object* v___x_516_; lean_object* v___x_517_; double v___x_518_; 
v___x_516_ = l_Lean_trace_profiler_threshold;
v___x_517_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_426_, v___x_516_);
v___x_518_ = lean_float_of_nat(v___x_517_);
v___y_504_ = v___x_518_;
goto v___jp_503_;
}
}
v___jp_438_:
{
lean_object* v___x_442_; 
lean_inc(v___y_439_);
v___x_442_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(v_oldTraces_428_, v_data_441_, v___y_439_, v___y_440_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v___x_443_; 
lean_dec_ref_known(v___x_442_, 1);
v___x_443_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_436_);
return v___x_443_;
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
lean_dec(v_fst_436_);
v_a_444_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_442_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_442_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
v___jp_456_:
{
uint8_t v_result_459_; lean_object* v___x_460_; lean_object* v___x_461_; double v___x_462_; lean_object* v_data_463_; 
v_result_459_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__3(v_fst_436_);
v___x_460_ = lean_box(v_result_459_);
v___x_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
v___x_462_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0);
lean_inc_ref(v_tag_425_);
lean_inc_ref(v___x_461_);
lean_inc(v_cls_423_);
v_data_463_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_463_, 0, v_cls_423_);
lean_ctor_set(v_data_463_, 1, v___x_461_);
lean_ctor_set(v_data_463_, 2, v_tag_425_);
lean_ctor_set_float(v_data_463_, sizeof(void*)*3, v___x_462_);
lean_ctor_set_float(v_data_463_, sizeof(void*)*3 + 8, v___x_462_);
lean_ctor_set_uint8(v_data_463_, sizeof(void*)*3 + 16, v_collapsed_424_);
if (v___x_455_ == 0)
{
lean_dec_ref_known(v___x_461_, 1);
lean_dec(v_snd_453_);
lean_dec(v_fst_452_);
lean_dec_ref(v_tag_425_);
lean_dec(v_cls_423_);
v___y_439_ = v___y_457_;
v___y_440_ = v_a_458_;
v_data_441_ = v_data_463_;
goto v___jp_438_;
}
else
{
lean_object* v_data_464_; double v___x_465_; double v___x_466_; 
lean_dec_ref_known(v_data_463_, 3);
v_data_464_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_464_, 0, v_cls_423_);
lean_ctor_set(v_data_464_, 1, v___x_461_);
lean_ctor_set(v_data_464_, 2, v_tag_425_);
v___x_465_ = lean_unbox_float(v_fst_452_);
lean_dec(v_fst_452_);
lean_ctor_set_float(v_data_464_, sizeof(void*)*3, v___x_465_);
v___x_466_ = lean_unbox_float(v_snd_453_);
lean_dec(v_snd_453_);
lean_ctor_set_float(v_data_464_, sizeof(void*)*3 + 8, v___x_466_);
lean_ctor_set_uint8(v_data_464_, sizeof(void*)*3 + 16, v_collapsed_424_);
v___y_439_ = v___y_457_;
v___y_440_ = v_a_458_;
v_data_441_ = v_data_464_;
goto v___jp_438_;
}
}
v___jp_467_:
{
lean_object* v_ref_468_; lean_object* v___x_469_; 
v_ref_468_ = lean_ctor_get(v___y_433_, 2);
lean_inc(v___y_434_);
lean_inc_ref(v___y_433_);
lean_inc(v___y_432_);
lean_inc_ref(v___y_431_);
lean_inc(v_fst_436_);
v___x_469_ = lean_apply_6(v_msg_429_, v_fst_436_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, lean_box(0));
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_a_470_);
lean_dec_ref_known(v___x_469_, 1);
v___y_457_ = v_ref_468_;
v_a_458_ = v_a_470_;
goto v___jp_456_;
}
else
{
lean_object* v___x_471_; 
lean_dec_ref_known(v___x_469_, 1);
v___x_471_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2);
v___y_457_ = v_ref_468_;
v_a_458_ = v___x_471_;
goto v___jp_456_;
}
}
v___jp_472_:
{
if (v_clsEnabled_427_ == 0)
{
if (v___y_473_ == 0)
{
lean_object* v___x_474_; lean_object* v_traceState_475_; lean_object* v_env_476_; lean_object* v_nextMacroScope_477_; lean_object* v_ngen_478_; lean_object* v_auxDeclNGen_479_; lean_object* v_cache_480_; lean_object* v_messages_481_; lean_object* v_infoState_482_; lean_object* v_snapshotTasks_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_502_; 
lean_dec(v_snd_453_);
lean_dec(v_fst_452_);
lean_dec_ref(v_msg_429_);
lean_dec_ref(v_tag_425_);
lean_dec(v_cls_423_);
v___x_474_ = lean_st_ref_take(v___y_434_);
v_traceState_475_ = lean_ctor_get(v___x_474_, 4);
v_env_476_ = lean_ctor_get(v___x_474_, 0);
v_nextMacroScope_477_ = lean_ctor_get(v___x_474_, 1);
v_ngen_478_ = lean_ctor_get(v___x_474_, 2);
v_auxDeclNGen_479_ = lean_ctor_get(v___x_474_, 3);
v_cache_480_ = lean_ctor_get(v___x_474_, 5);
v_messages_481_ = lean_ctor_get(v___x_474_, 6);
v_infoState_482_ = lean_ctor_get(v___x_474_, 7);
v_snapshotTasks_483_ = lean_ctor_get(v___x_474_, 8);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_502_ == 0)
{
v___x_485_ = v___x_474_;
v_isShared_486_ = v_isSharedCheck_502_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_snapshotTasks_483_);
lean_inc(v_infoState_482_);
lean_inc(v_messages_481_);
lean_inc(v_cache_480_);
lean_inc(v_traceState_475_);
lean_inc(v_auxDeclNGen_479_);
lean_inc(v_ngen_478_);
lean_inc(v_nextMacroScope_477_);
lean_inc(v_env_476_);
lean_dec(v___x_474_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_502_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
uint64_t v_tid_487_; lean_object* v_traces_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_501_; 
v_tid_487_ = lean_ctor_get_uint64(v_traceState_475_, sizeof(void*)*1);
v_traces_488_ = lean_ctor_get(v_traceState_475_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v_traceState_475_);
if (v_isSharedCheck_501_ == 0)
{
v___x_490_ = v_traceState_475_;
v_isShared_491_ = v_isSharedCheck_501_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_traces_488_);
lean_dec(v_traceState_475_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_501_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_492_; lean_object* v___x_494_; 
v___x_492_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_428_, v_traces_488_);
lean_dec_ref(v_traces_488_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_492_);
v___x_494_ = v___x_490_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_492_);
lean_ctor_set_uint64(v_reuseFailAlloc_500_, sizeof(void*)*1, v_tid_487_);
v___x_494_ = v_reuseFailAlloc_500_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_496_; 
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 4, v___x_494_);
v___x_496_ = v___x_485_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_env_476_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_nextMacroScope_477_);
lean_ctor_set(v_reuseFailAlloc_499_, 2, v_ngen_478_);
lean_ctor_set(v_reuseFailAlloc_499_, 3, v_auxDeclNGen_479_);
lean_ctor_set(v_reuseFailAlloc_499_, 4, v___x_494_);
lean_ctor_set(v_reuseFailAlloc_499_, 5, v_cache_480_);
lean_ctor_set(v_reuseFailAlloc_499_, 6, v_messages_481_);
lean_ctor_set(v_reuseFailAlloc_499_, 7, v_infoState_482_);
lean_ctor_set(v_reuseFailAlloc_499_, 8, v_snapshotTasks_483_);
v___x_496_ = v_reuseFailAlloc_499_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = lean_st_ref_put(v___y_434_, v___x_496_);
v___x_498_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_436_);
return v___x_498_;
}
}
}
}
}
else
{
goto v___jp_467_;
}
}
else
{
goto v___jp_467_;
}
}
v___jp_503_:
{
double v___x_505_; double v___x_506_; double v___x_507_; uint8_t v___x_508_; 
v___x_505_ = lean_unbox_float(v_snd_453_);
v___x_506_ = lean_unbox_float(v_fst_452_);
v___x_507_ = lean_float_sub(v___x_505_, v___x_506_);
v___x_508_ = lean_float_decLt(v___y_504_, v___x_507_);
v___y_473_ = v___x_508_;
goto v___jp_472_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___boxed(lean_object* v_cls_519_, lean_object* v_collapsed_520_, lean_object* v_tag_521_, lean_object* v_opts_522_, lean_object* v_clsEnabled_523_, lean_object* v_oldTraces_524_, lean_object* v_msg_525_, lean_object* v_resStartStop_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
uint8_t v_collapsed_boxed_532_; uint8_t v_clsEnabled_boxed_533_; lean_object* v_res_534_; 
v_collapsed_boxed_532_ = lean_unbox(v_collapsed_520_);
v_clsEnabled_boxed_533_ = lean_unbox(v_clsEnabled_523_);
v_res_534_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_cls_519_, v_collapsed_boxed_532_, v_tag_521_, v_opts_522_, v_clsEnabled_boxed_533_, v_oldTraces_524_, v_msg_525_, v_resStartStop_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec_ref(v_opts_522_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg(lean_object* v_msg_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_ref_541_; lean_object* v___x_542_; lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_551_; 
v_ref_541_ = lean_ctor_get(v___y_538_, 2);
v___x_542_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__5(v_msg_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
v_a_543_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_551_ == 0)
{
v___x_545_ = v___x_542_;
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_542_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_551_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_547_; lean_object* v___x_549_; 
lean_inc(v_ref_541_);
v___x_547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_547_, 0, v_ref_541_);
lean_ctor_set(v___x_547_, 1, v_a_543_);
if (v_isShared_546_ == 0)
{
lean_ctor_set_tag(v___x_545_, 1);
lean_ctor_set(v___x_545_, 0, v___x_547_);
v___x_549_ = v___x_545_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg___boxed(lean_object* v_msg_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg(v_msg_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
return v_res_558_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__7(lean_object* v_e_559_){
_start:
{
if (lean_obj_tag(v_e_559_) == 0)
{
uint8_t v___x_560_; 
v___x_560_ = 2;
return v___x_560_;
}
else
{
uint8_t v___x_561_; 
v___x_561_ = 0;
return v___x_561_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__7___boxed(lean_object* v_e_562_){
_start:
{
uint8_t v_res_563_; lean_object* v_r_564_; 
v_res_563_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__7(v_e_562_);
lean_dec_ref(v_e_562_);
v_r_564_ = lean_box(v_res_563_);
return v_r_564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(lean_object* v_cls_565_, uint8_t v_collapsed_566_, lean_object* v_tag_567_, lean_object* v_opts_568_, uint8_t v_clsEnabled_569_, lean_object* v_oldTraces_570_, lean_object* v_msg_571_, lean_object* v_resStartStop_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v_fst_578_; lean_object* v_snd_579_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v_data_583_; lean_object* v_fst_586_; lean_object* v_snd_587_; lean_object* v___x_588_; uint8_t v___x_589_; lean_object* v___y_591_; lean_object* v_a_592_; uint8_t v___y_607_; double v___y_638_; 
v_fst_578_ = lean_ctor_get(v_resStartStop_572_, 0);
lean_inc(v_fst_578_);
v_snd_579_ = lean_ctor_get(v_resStartStop_572_, 1);
lean_inc(v_snd_579_);
lean_dec_ref(v_resStartStop_572_);
v_fst_586_ = lean_ctor_get(v_snd_579_, 0);
lean_inc(v_fst_586_);
v_snd_587_ = lean_ctor_get(v_snd_579_, 1);
lean_inc(v_snd_587_);
lean_dec(v_snd_579_);
v___x_588_ = l_Lean_trace_profiler;
v___x_589_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_568_, v___x_588_);
if (v___x_589_ == 0)
{
v___y_607_ = v___x_589_;
goto v___jp_606_;
}
else
{
lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_643_ = l_Lean_trace_profiler_useHeartbeats;
v___x_644_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_568_, v___x_643_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; lean_object* v___x_646_; double v___x_647_; double v___x_648_; double v___x_649_; 
v___x_645_ = l_Lean_trace_profiler_threshold;
v___x_646_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_568_, v___x_645_);
v___x_647_ = lean_float_of_nat(v___x_646_);
v___x_648_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3);
v___x_649_ = lean_float_div(v___x_647_, v___x_648_);
v___y_638_ = v___x_649_;
goto v___jp_637_;
}
else
{
lean_object* v___x_650_; lean_object* v___x_651_; double v___x_652_; 
v___x_650_ = l_Lean_trace_profiler_threshold;
v___x_651_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_568_, v___x_650_);
v___x_652_ = lean_float_of_nat(v___x_651_);
v___y_638_ = v___x_652_;
goto v___jp_637_;
}
}
v___jp_580_:
{
lean_object* v___x_584_; 
lean_inc(v___y_582_);
v___x_584_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(v_oldTraces_570_, v_data_583_, v___y_582_, v___y_581_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v___x_585_; 
lean_dec_ref_known(v___x_584_, 1);
v___x_585_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_578_);
return v___x_585_;
}
else
{
lean_dec(v_fst_578_);
return v___x_584_;
}
}
v___jp_590_:
{
uint8_t v_result_593_; lean_object* v___x_594_; lean_object* v___x_595_; double v___x_596_; lean_object* v_data_597_; 
v_result_593_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__7(v_fst_578_);
v___x_594_ = lean_box(v_result_593_);
v___x_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
v___x_596_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0);
lean_inc_ref(v_tag_567_);
lean_inc_ref(v___x_595_);
lean_inc(v_cls_565_);
v_data_597_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_597_, 0, v_cls_565_);
lean_ctor_set(v_data_597_, 1, v___x_595_);
lean_ctor_set(v_data_597_, 2, v_tag_567_);
lean_ctor_set_float(v_data_597_, sizeof(void*)*3, v___x_596_);
lean_ctor_set_float(v_data_597_, sizeof(void*)*3 + 8, v___x_596_);
lean_ctor_set_uint8(v_data_597_, sizeof(void*)*3 + 16, v_collapsed_566_);
if (v___x_589_ == 0)
{
lean_dec_ref_known(v___x_595_, 1);
lean_dec(v_snd_587_);
lean_dec(v_fst_586_);
lean_dec_ref(v_tag_567_);
lean_dec(v_cls_565_);
v___y_581_ = v_a_592_;
v___y_582_ = v___y_591_;
v_data_583_ = v_data_597_;
goto v___jp_580_;
}
else
{
lean_object* v_data_598_; double v___x_599_; double v___x_600_; 
lean_dec_ref_known(v_data_597_, 3);
v_data_598_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_598_, 0, v_cls_565_);
lean_ctor_set(v_data_598_, 1, v___x_595_);
lean_ctor_set(v_data_598_, 2, v_tag_567_);
v___x_599_ = lean_unbox_float(v_fst_586_);
lean_dec(v_fst_586_);
lean_ctor_set_float(v_data_598_, sizeof(void*)*3, v___x_599_);
v___x_600_ = lean_unbox_float(v_snd_587_);
lean_dec(v_snd_587_);
lean_ctor_set_float(v_data_598_, sizeof(void*)*3 + 8, v___x_600_);
lean_ctor_set_uint8(v_data_598_, sizeof(void*)*3 + 16, v_collapsed_566_);
v___y_581_ = v_a_592_;
v___y_582_ = v___y_591_;
v_data_583_ = v_data_598_;
goto v___jp_580_;
}
}
v___jp_601_:
{
lean_object* v_ref_602_; lean_object* v___x_603_; 
v_ref_602_ = lean_ctor_get(v___y_575_, 2);
lean_inc(v___y_576_);
lean_inc_ref(v___y_575_);
lean_inc(v___y_574_);
lean_inc_ref(v___y_573_);
lean_inc(v_fst_578_);
v___x_603_ = lean_apply_6(v_msg_571_, v_fst_578_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, lean_box(0));
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_603_, 1);
v___y_591_ = v_ref_602_;
v_a_592_ = v_a_604_;
goto v___jp_590_;
}
else
{
lean_object* v___x_605_; 
lean_dec_ref_known(v___x_603_, 1);
v___x_605_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2);
v___y_591_ = v_ref_602_;
v_a_592_ = v___x_605_;
goto v___jp_590_;
}
}
v___jp_606_:
{
if (v_clsEnabled_569_ == 0)
{
if (v___y_607_ == 0)
{
lean_object* v___x_608_; lean_object* v_traceState_609_; lean_object* v_env_610_; lean_object* v_nextMacroScope_611_; lean_object* v_ngen_612_; lean_object* v_auxDeclNGen_613_; lean_object* v_cache_614_; lean_object* v_messages_615_; lean_object* v_infoState_616_; lean_object* v_snapshotTasks_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_636_; 
lean_dec(v_snd_587_);
lean_dec(v_fst_586_);
lean_dec_ref(v_msg_571_);
lean_dec_ref(v_tag_567_);
lean_dec(v_cls_565_);
v___x_608_ = lean_st_ref_take(v___y_576_);
v_traceState_609_ = lean_ctor_get(v___x_608_, 4);
v_env_610_ = lean_ctor_get(v___x_608_, 0);
v_nextMacroScope_611_ = lean_ctor_get(v___x_608_, 1);
v_ngen_612_ = lean_ctor_get(v___x_608_, 2);
v_auxDeclNGen_613_ = lean_ctor_get(v___x_608_, 3);
v_cache_614_ = lean_ctor_get(v___x_608_, 5);
v_messages_615_ = lean_ctor_get(v___x_608_, 6);
v_infoState_616_ = lean_ctor_get(v___x_608_, 7);
v_snapshotTasks_617_ = lean_ctor_get(v___x_608_, 8);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_636_ == 0)
{
v___x_619_ = v___x_608_;
v_isShared_620_ = v_isSharedCheck_636_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_snapshotTasks_617_);
lean_inc(v_infoState_616_);
lean_inc(v_messages_615_);
lean_inc(v_cache_614_);
lean_inc(v_traceState_609_);
lean_inc(v_auxDeclNGen_613_);
lean_inc(v_ngen_612_);
lean_inc(v_nextMacroScope_611_);
lean_inc(v_env_610_);
lean_dec(v___x_608_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_636_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
uint64_t v_tid_621_; lean_object* v_traces_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_635_; 
v_tid_621_ = lean_ctor_get_uint64(v_traceState_609_, sizeof(void*)*1);
v_traces_622_ = lean_ctor_get(v_traceState_609_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v_traceState_609_);
if (v_isSharedCheck_635_ == 0)
{
v___x_624_ = v_traceState_609_;
v_isShared_625_ = v_isSharedCheck_635_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_traces_622_);
lean_dec(v_traceState_609_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_635_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_626_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_570_, v_traces_622_);
lean_dec_ref(v_traces_622_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 0, v___x_626_);
v___x_628_ = v___x_624_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_626_);
lean_ctor_set_uint64(v_reuseFailAlloc_634_, sizeof(void*)*1, v_tid_621_);
v___x_628_ = v_reuseFailAlloc_634_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_630_; 
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 4, v___x_628_);
v___x_630_ = v___x_619_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_env_610_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_nextMacroScope_611_);
lean_ctor_set(v_reuseFailAlloc_633_, 2, v_ngen_612_);
lean_ctor_set(v_reuseFailAlloc_633_, 3, v_auxDeclNGen_613_);
lean_ctor_set(v_reuseFailAlloc_633_, 4, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_633_, 5, v_cache_614_);
lean_ctor_set(v_reuseFailAlloc_633_, 6, v_messages_615_);
lean_ctor_set(v_reuseFailAlloc_633_, 7, v_infoState_616_);
lean_ctor_set(v_reuseFailAlloc_633_, 8, v_snapshotTasks_617_);
v___x_630_ = v_reuseFailAlloc_633_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_st_ref_put(v___y_576_, v___x_630_);
v___x_632_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_578_);
return v___x_632_;
}
}
}
}
}
else
{
goto v___jp_601_;
}
}
else
{
goto v___jp_601_;
}
}
v___jp_637_:
{
double v___x_639_; double v___x_640_; double v___x_641_; uint8_t v___x_642_; 
v___x_639_ = lean_unbox_float(v_snd_587_);
v___x_640_ = lean_unbox_float(v_fst_586_);
v___x_641_ = lean_float_sub(v___x_639_, v___x_640_);
v___x_642_ = lean_float_decLt(v___y_638_, v___x_641_);
v___y_607_ = v___x_642_;
goto v___jp_606_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___boxed(lean_object* v_cls_653_, lean_object* v_collapsed_654_, lean_object* v_tag_655_, lean_object* v_opts_656_, lean_object* v_clsEnabled_657_, lean_object* v_oldTraces_658_, lean_object* v_msg_659_, lean_object* v_resStartStop_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
uint8_t v_collapsed_boxed_666_; uint8_t v_clsEnabled_boxed_667_; lean_object* v_res_668_; 
v_collapsed_boxed_666_ = lean_unbox(v_collapsed_654_);
v_clsEnabled_boxed_667_ = lean_unbox(v_clsEnabled_657_);
v_res_668_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(v_cls_653_, v_collapsed_boxed_666_, v_tag_655_, v_opts_656_, v_clsEnabled_boxed_667_, v_oldTraces_658_, v_msg_659_, v_resStartStop_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec_ref(v_opts_656_);
return v_res_668_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = lean_box(0);
v___x_687_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9));
v___x_688_ = l_Lean_mkConst(v___x_687_, v___x_686_);
return v___x_688_;
}
}
static double _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12(void){
_start:
{
lean_object* v___x_690_; double v___x_691_; 
v___x_690_ = lean_unsigned_to_nat(1000000000u);
v___x_691_ = lean_float_of_nat(v___x_690_);
return v___x_691_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17(void){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__16));
v___x_698_ = l_Lean_stringToMessageData(v___x_697_);
return v___x_698_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_707_ = lean_box(0);
v___x_708_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20));
v___x_709_ = l_Lean_mkConst(v___x_708_, v___x_707_);
return v___x_709_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_716_ = lean_box(0);
v___x_717_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22));
v___x_718_ = l_Lean_mkConst(v___x_717_, v___x_716_);
return v___x_718_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3));
v___x_720_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
v___x_721_ = l_Lean_Name_append(v___x_720_, v___x_719_);
return v___x_721_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27(void){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_725_ = lean_box(0);
v___x_726_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__26));
v___x_727_ = l_Lean_mkConst(v___x_726_, v___x_725_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(lean_object* v_cert_729_, lean_object* v_ctx_730_, lean_object* v_reflectionResult_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_toCold_737_; lean_object* v_options_738_; lean_object* v_exprDef_739_; lean_object* v_certDef_740_; lean_object* v_expr_741_; lean_object* v_ref_742_; lean_object* v_inheritedTraceOptions_743_; uint8_t v_hasTrace_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___f_747_; lean_object* v___f_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___y_756_; lean_object* v___y_757_; uint8_t v___y_758_; lean_object* v___y_759_; lean_object* v_a_760_; lean_object* v___y_773_; lean_object* v___y_774_; uint8_t v___y_775_; lean_object* v___y_776_; lean_object* v_a_777_; lean_object* v___y_780_; lean_object* v___y_781_; uint8_t v___y_782_; lean_object* v___y_783_; lean_object* v_a_784_; lean_object* v___y_787_; lean_object* v___y_788_; uint8_t v___y_789_; lean_object* v___y_790_; lean_object* v_a_791_; lean_object* v___y_801_; lean_object* v___y_802_; uint8_t v___y_803_; lean_object* v___y_804_; lean_object* v_a_805_; lean_object* v___y_808_; lean_object* v___y_809_; uint8_t v___y_810_; lean_object* v___y_811_; lean_object* v_a_812_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; uint8_t v___y_821_; lean_object* v___y_867_; lean_object* v___y_938_; uint8_t v___y_939_; lean_object* v___y_940_; lean_object* v___y_941_; lean_object* v_a_942_; uint8_t v___y_955_; lean_object* v___y_956_; lean_object* v___y_957_; lean_object* v___y_958_; lean_object* v_a_959_; uint8_t v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v___y_1014_; 
v_toCold_737_ = lean_ctor_get(v_a_734_, 0);
v_options_738_ = lean_ctor_get(v_toCold_737_, 2);
v_exprDef_739_ = lean_ctor_get(v_ctx_730_, 0);
lean_inc(v_exprDef_739_);
v_certDef_740_ = lean_ctor_get(v_ctx_730_, 1);
lean_inc(v_certDef_740_);
lean_dec_ref(v_ctx_730_);
v_expr_741_ = lean_ctor_get(v_reflectionResult_731_, 3);
lean_inc_ref(v_expr_741_);
lean_dec_ref(v_reflectionResult_731_);
v_ref_742_ = lean_ctor_get(v_a_734_, 2);
v_inheritedTraceOptions_743_ = lean_ctor_get(v_toCold_737_, 11);
v_hasTrace_744_ = lean_ctor_get_uint8(v_options_738_, sizeof(void*)*1);
v___x_745_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1));
v___x_746_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3));
v___f_747_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__4));
v___f_748_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__5));
v___x_749_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6));
v___x_750_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7));
v___x_751_ = lean_box(0);
v___x_752_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10);
v___x_753_ = 1;
v___x_754_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
if (v_hasTrace_744_ == 0)
{
lean_object* v___x_1031_; 
lean_inc(v_exprDef_739_);
v___x_1031_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_exprDef_739_, v_expr_741_, v___x_752_, v_a_734_, v_a_735_);
v___y_1014_ = v___x_1031_;
goto v___jp_1013_;
}
else
{
lean_object* v___f_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v_a_1038_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v_a_1053_; 
v___f_1032_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__28));
v___x_1033_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_1034_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_743_, v_options_738_, v___x_1033_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1103_; uint8_t v___x_1104_; 
v___x_1103_ = l_Lean_trace_profiler;
v___x_1104_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_738_, v___x_1103_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; 
lean_inc(v_exprDef_739_);
v___x_1105_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_exprDef_739_, v_expr_741_, v___x_752_, v_a_734_, v_a_735_);
v___y_1014_ = v___x_1105_;
goto v___jp_1013_;
}
else
{
goto v___jp_1062_;
}
}
else
{
goto v___jp_1062_;
}
v___jp_1035_:
{
lean_object* v___x_1039_; double v___x_1040_; double v___x_1041_; double v___x_1042_; double v___x_1043_; double v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1039_ = lean_io_mono_nanos_now();
v___x_1040_ = lean_float_of_nat(v___y_1036_);
v___x_1041_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_1042_ = lean_float_div(v___x_1040_, v___x_1041_);
v___x_1043_ = lean_float_of_nat(v___x_1039_);
v___x_1044_ = lean_float_div(v___x_1043_, v___x_1041_);
v___x_1045_ = lean_box_float(v___x_1042_);
v___x_1046_ = lean_box_float(v___x_1044_);
v___x_1047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1045_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
v___x_1048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1048_, 0, v_a_1038_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(v___x_746_, v___x_753_, v___x_754_, v_options_738_, v___x_1034_, v___y_1037_, v___f_1032_, v___x_1048_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
v___y_1014_ = v___x_1049_;
goto v___jp_1013_;
}
v___jp_1050_:
{
lean_object* v___x_1054_; double v___x_1055_; double v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1054_ = lean_io_get_num_heartbeats();
v___x_1055_ = lean_float_of_nat(v___y_1051_);
v___x_1056_ = lean_float_of_nat(v___x_1054_);
v___x_1057_ = lean_box_float(v___x_1055_);
v___x_1058_ = lean_box_float(v___x_1056_);
v___x_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1057_);
lean_ctor_set(v___x_1059_, 1, v___x_1058_);
v___x_1060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1060_, 0, v_a_1053_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(v___x_746_, v___x_753_, v___x_754_, v_options_738_, v___x_1034_, v___y_1052_, v___f_1032_, v___x_1060_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
v___y_1014_ = v___x_1061_;
goto v___jp_1013_;
}
v___jp_1062_:
{
lean_object* v___x_1063_; lean_object* v_a_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v___x_1063_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_735_);
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1064_);
lean_dec_ref(v___x_1063_);
v___x_1065_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1066_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_738_, v___x_1065_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = lean_io_mono_nanos_now();
lean_inc(v_exprDef_739_);
v___x_1068_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_exprDef_739_, v_expr_741_, v___x_752_, v_a_734_, v_a_735_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1068_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1068_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
lean_ctor_set_tag(v___x_1071_, 1);
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
v___y_1036_ = v___x_1067_;
v___y_1037_ = v_a_1064_;
v_a_1038_ = v___x_1074_;
goto v___jp_1035_;
}
}
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
v_a_1077_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1068_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1068_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
lean_ctor_set_tag(v___x_1079_, 0);
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
v___y_1036_ = v___x_1067_;
v___y_1037_ = v_a_1064_;
v_a_1038_ = v___x_1082_;
goto v___jp_1035_;
}
}
}
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1085_ = lean_io_get_num_heartbeats();
lean_inc(v_exprDef_739_);
v___x_1086_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_exprDef_739_, v_expr_741_, v___x_752_, v_a_734_, v_a_735_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
lean_ctor_set_tag(v___x_1089_, 1);
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
v___y_1051_ = v___x_1085_;
v___y_1052_ = v_a_1064_;
v_a_1053_ = v___x_1092_;
goto v___jp_1050_;
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
v_a_1095_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1086_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1086_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 0);
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
v___y_1051_ = v___x_1085_;
v___y_1052_ = v_a_1064_;
v_a_1053_ = v___x_1100_;
goto v___jp_1050_;
}
}
}
}
}
}
v___jp_755_:
{
lean_object* v___x_761_; double v___x_762_; double v___x_763_; double v___x_764_; double v___x_765_; double v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_761_ = lean_io_mono_nanos_now();
v___x_762_ = lean_float_of_nat(v___y_757_);
v___x_763_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_764_ = lean_float_div(v___x_762_, v___x_763_);
v___x_765_ = lean_float_of_nat(v___x_761_);
v___x_766_ = lean_float_div(v___x_765_, v___x_763_);
v___x_767_ = lean_box_float(v___x_764_);
v___x_768_ = lean_box_float(v___x_766_);
v___x_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_769_, 0, v___x_767_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v_a_760_);
lean_ctor_set(v___x_770_, 1, v___x_769_);
v___x_771_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___x_746_, v___x_753_, v___x_754_, v___y_756_, v___y_758_, v___y_759_, v___f_748_, v___x_770_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
return v___x_771_;
}
v___jp_772_:
{
lean_object* v___x_778_; 
v___x_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_778_, 0, v_a_777_);
v___y_756_ = v___y_773_;
v___y_757_ = v___y_774_;
v___y_758_ = v___y_775_;
v___y_759_ = v___y_776_;
v_a_760_ = v___x_778_;
goto v___jp_755_;
}
v___jp_779_:
{
lean_object* v___x_785_; 
v___x_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_785_, 0, v_a_784_);
v___y_756_ = v___y_780_;
v___y_757_ = v___y_781_;
v___y_758_ = v___y_782_;
v___y_759_ = v___y_783_;
v_a_760_ = v___x_785_;
goto v___jp_755_;
}
v___jp_786_:
{
lean_object* v___x_792_; double v___x_793_; double v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_792_ = lean_io_get_num_heartbeats();
v___x_793_ = lean_float_of_nat(v___y_788_);
v___x_794_ = lean_float_of_nat(v___x_792_);
v___x_795_ = lean_box_float(v___x_793_);
v___x_796_ = lean_box_float(v___x_794_);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_795_);
lean_ctor_set(v___x_797_, 1, v___x_796_);
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v_a_791_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___x_746_, v___x_753_, v___x_754_, v___y_787_, v___y_789_, v___y_790_, v___f_748_, v___x_798_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
return v___x_799_;
}
v___jp_800_:
{
lean_object* v___x_806_; 
v___x_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_806_, 0, v_a_805_);
v___y_787_ = v___y_801_;
v___y_788_ = v___y_802_;
v___y_789_ = v___y_803_;
v___y_790_ = v___y_804_;
v_a_791_ = v___x_806_;
goto v___jp_786_;
}
v___jp_807_:
{
lean_object* v___x_813_; 
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v_a_812_);
v___y_787_ = v___y_808_;
v___y_788_ = v___y_809_;
v___y_789_ = v___y_810_;
v___y_790_ = v___y_811_;
v_a_791_ = v___x_813_;
goto v___jp_786_;
}
v___jp_814_:
{
lean_object* v___x_822_; lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_865_; 
v___x_822_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_735_);
v_a_823_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_865_ == 0)
{
v___x_825_ = v___x_822_;
v_isShared_826_ = v_isSharedCheck_865_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_822_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_865_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; uint8_t v___x_828_; 
v___x_827_ = l_Lean_trace_profiler_useHeartbeats;
v___x_828_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_817_, v___x_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_829_ = lean_io_mono_nanos_now();
v___x_830_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14));
lean_inc(v___y_820_);
if (v_isShared_826_ == 0)
{
lean_ctor_set_tag(v___x_825_, 1);
lean_ctor_set(v___x_825_, 0, v___y_820_);
v___x_832_ = v___x_825_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___y_820_);
v___x_832_ = v_reuseFailAlloc_846_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_833_; 
lean_inc_ref(v___y_818_);
v___x_833_ = l_Lean_Meta_nativeEqTrue(v___x_830_, v___y_818_, v___x_832_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
lean_dec_ref(v___x_832_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_a_834_; 
v_a_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_a_834_);
lean_dec_ref_known(v___x_833_, 1);
if (lean_obj_tag(v_a_834_) == 0)
{
lean_object* v_prf_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
lean_dec_ref(v___y_818_);
v_prf_835_ = lean_ctor_get(v_a_834_, 0);
lean_inc_ref(v_prf_835_);
lean_dec_ref_known(v_a_834_, 1);
v___x_836_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15));
lean_inc_ref(v___y_819_);
v___x_837_ = l_Lean_Name_mkStr5(v___x_749_, v___x_745_, v___x_750_, v___y_819_, v___x_836_);
v___x_838_ = l_Lean_mkConst(v___x_837_, v___x_751_);
v___x_839_ = l_Lean_mkApp3(v___x_838_, v___y_816_, v___y_815_, v_prf_835_);
v___y_780_ = v___y_817_;
v___y_781_ = v___x_829_;
v___y_782_ = v___y_821_;
v___y_783_ = v_a_823_;
v_a_784_ = v___x_839_;
goto v___jp_779_;
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v_a_844_; 
lean_dec_ref(v___y_816_);
lean_dec_ref(v___y_815_);
v___x_840_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17);
v___x_841_ = l_Lean_indentExpr(v___y_818_);
v___x_842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_840_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
v___x_843_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg(v___x_842_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
v_a_844_ = lean_ctor_get(v___x_843_, 0);
lean_inc(v_a_844_);
lean_dec_ref(v___x_843_);
v___y_773_ = v___y_817_;
v___y_774_ = v___x_829_;
v___y_775_ = v___y_821_;
v___y_776_ = v_a_823_;
v_a_777_ = v_a_844_;
goto v___jp_772_;
}
}
else
{
lean_object* v_a_845_; 
lean_dec_ref(v___y_818_);
lean_dec_ref(v___y_816_);
lean_dec_ref(v___y_815_);
v_a_845_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_a_845_);
lean_dec_ref_known(v___x_833_, 1);
v___y_773_ = v___y_817_;
v___y_774_ = v___x_829_;
v___y_775_ = v___y_821_;
v___y_776_ = v_a_823_;
v_a_777_ = v_a_845_;
goto v___jp_772_;
}
}
}
else
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_847_ = lean_io_get_num_heartbeats();
v___x_848_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14));
lean_inc(v___y_820_);
if (v_isShared_826_ == 0)
{
lean_ctor_set_tag(v___x_825_, 1);
lean_ctor_set(v___x_825_, 0, v___y_820_);
v___x_850_ = v___x_825_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v___y_820_);
v___x_850_ = v_reuseFailAlloc_864_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
lean_object* v___x_851_; 
lean_inc_ref(v___y_818_);
v___x_851_ = l_Lean_Meta_nativeEqTrue(v___x_848_, v___y_818_, v___x_850_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
lean_dec_ref(v___x_850_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_851_, 1);
if (lean_obj_tag(v_a_852_) == 0)
{
lean_object* v_prf_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
lean_dec_ref(v___y_818_);
v_prf_853_ = lean_ctor_get(v_a_852_, 0);
lean_inc_ref(v_prf_853_);
lean_dec_ref_known(v_a_852_, 1);
v___x_854_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15));
lean_inc_ref(v___y_819_);
v___x_855_ = l_Lean_Name_mkStr5(v___x_749_, v___x_745_, v___x_750_, v___y_819_, v___x_854_);
v___x_856_ = l_Lean_mkConst(v___x_855_, v___x_751_);
v___x_857_ = l_Lean_mkApp3(v___x_856_, v___y_816_, v___y_815_, v_prf_853_);
v___y_808_ = v___y_817_;
v___y_809_ = v___x_847_;
v___y_810_ = v___y_821_;
v___y_811_ = v_a_823_;
v_a_812_ = v___x_857_;
goto v___jp_807_;
}
else
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v_a_862_; 
lean_dec_ref(v___y_816_);
lean_dec_ref(v___y_815_);
v___x_858_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17);
v___x_859_ = l_Lean_indentExpr(v___y_818_);
v___x_860_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_860_, 0, v___x_858_);
lean_ctor_set(v___x_860_, 1, v___x_859_);
v___x_861_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg(v___x_860_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref(v___x_861_);
v___y_801_ = v___y_817_;
v___y_802_ = v___x_847_;
v___y_803_ = v___y_821_;
v___y_804_ = v_a_823_;
v_a_805_ = v_a_862_;
goto v___jp_800_;
}
}
else
{
lean_object* v_a_863_; 
lean_dec_ref(v___y_818_);
lean_dec_ref(v___y_816_);
lean_dec_ref(v___y_815_);
v_a_863_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_851_, 1);
v___y_801_ = v___y_817_;
v___y_802_ = v___x_847_;
v___y_803_ = v___y_821_;
v___y_804_ = v_a_823_;
v_a_805_ = v_a_863_;
goto v___jp_800_;
}
}
}
}
}
v___jp_866_:
{
if (lean_obj_tag(v___y_867_) == 0)
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
lean_dec_ref_known(v___y_867_, 1);
v___x_868_ = l_Lean_mkConst(v_exprDef_739_, v___x_751_);
v___x_869_ = l_Lean_mkConst(v_certDef_740_, v___x_751_);
v___x_870_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18));
v___x_871_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21);
lean_inc_ref(v___x_869_);
lean_inc_ref(v___x_868_);
v___x_872_ = l_Lean_mkAppB(v___x_871_, v___x_868_, v___x_869_);
if (v_hasTrace_744_ == 0)
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_873_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14));
lean_inc(v_ref_742_);
v___x_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_874_, 0, v_ref_742_);
lean_inc_ref(v___x_872_);
v___x_875_ = l_Lean_Meta_nativeEqTrue(v___x_873_, v___x_872_, v___x_874_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
lean_dec_ref_known(v___x_874_, 1);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_890_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_890_ == 0)
{
v___x_878_ = v___x_875_;
v_isShared_879_ = v_isSharedCheck_890_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_875_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_890_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
if (lean_obj_tag(v_a_876_) == 0)
{
lean_object* v_prf_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
lean_dec_ref(v___x_872_);
v_prf_880_ = lean_ctor_get(v_a_876_, 0);
lean_inc_ref(v_prf_880_);
lean_dec_ref_known(v_a_876_, 1);
v___x_881_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23);
v___x_882_ = l_Lean_mkApp3(v___x_881_, v___x_868_, v___x_869_, v_prf_880_);
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 0, v___x_882_);
v___x_884_ = v___x_878_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_882_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
else
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
lean_del_object(v___x_878_);
lean_dec_ref(v___x_869_);
lean_dec_ref(v___x_868_);
v___x_886_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17);
v___x_887_ = l_Lean_indentExpr(v___x_872_);
v___x_888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_886_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
v___x_889_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg(v___x_888_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
return v___x_889_;
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_dec_ref(v___x_872_);
lean_dec_ref(v___x_869_);
lean_dec_ref(v___x_868_);
v_a_891_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_875_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_875_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
else
{
lean_object* v___x_899_; uint8_t v___x_900_; 
v___x_899_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_900_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_743_, v_options_738_, v___x_899_);
if (v___x_900_ == 0)
{
lean_object* v___x_901_; uint8_t v___x_902_; 
v___x_901_ = l_Lean_trace_profiler;
v___x_902_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_738_, v___x_901_);
if (v___x_902_ == 0)
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_903_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14));
lean_inc(v_ref_742_);
v___x_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_904_, 0, v_ref_742_);
lean_inc_ref(v___x_872_);
v___x_905_ = l_Lean_Meta_nativeEqTrue(v___x_903_, v___x_872_, v___x_904_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
lean_dec_ref_known(v___x_904_, 1);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_920_; 
v_a_906_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_920_ == 0)
{
v___x_908_ = v___x_905_;
v_isShared_909_ = v_isSharedCheck_920_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_905_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_920_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
if (lean_obj_tag(v_a_906_) == 0)
{
lean_object* v_prf_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_914_; 
lean_dec_ref(v___x_872_);
v_prf_910_ = lean_ctor_get(v_a_906_, 0);
lean_inc_ref(v_prf_910_);
lean_dec_ref_known(v_a_906_, 1);
v___x_911_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23);
v___x_912_ = l_Lean_mkApp3(v___x_911_, v___x_868_, v___x_869_, v_prf_910_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___x_912_);
v___x_914_ = v___x_908_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_912_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
else
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
lean_del_object(v___x_908_);
lean_dec_ref(v___x_869_);
lean_dec_ref(v___x_868_);
v___x_916_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17);
v___x_917_ = l_Lean_indentExpr(v___x_872_);
v___x_918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg(v___x_918_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
return v___x_919_;
}
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
lean_dec_ref(v___x_872_);
lean_dec_ref(v___x_869_);
lean_dec_ref(v___x_868_);
v_a_921_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_905_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_905_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
else
{
v___y_815_ = v___x_869_;
v___y_816_ = v___x_868_;
v___y_817_ = v_options_738_;
v___y_818_ = v___x_872_;
v___y_819_ = v___x_870_;
v___y_820_ = v_ref_742_;
v___y_821_ = v___x_900_;
goto v___jp_814_;
}
}
else
{
v___y_815_ = v___x_869_;
v___y_816_ = v___x_868_;
v___y_817_ = v_options_738_;
v___y_818_ = v___x_872_;
v___y_819_ = v___x_870_;
v___y_820_ = v_ref_742_;
v___y_821_ = v___x_900_;
goto v___jp_814_;
}
}
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec(v_certDef_740_);
lean_dec(v_exprDef_739_);
v_a_929_ = lean_ctor_get(v___y_867_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___y_867_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___y_867_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___y_867_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
v___jp_937_:
{
lean_object* v___x_943_; double v___x_944_; double v___x_945_; double v___x_946_; double v___x_947_; double v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_943_ = lean_io_mono_nanos_now();
v___x_944_ = lean_float_of_nat(v___y_938_);
v___x_945_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_946_ = lean_float_div(v___x_944_, v___x_945_);
v___x_947_ = lean_float_of_nat(v___x_943_);
v___x_948_ = lean_float_div(v___x_947_, v___x_945_);
v___x_949_ = lean_box_float(v___x_946_);
v___x_950_ = lean_box_float(v___x_948_);
v___x_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_949_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_952_, 0, v_a_942_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(v___x_746_, v___x_753_, v___x_754_, v___y_940_, v___y_939_, v___y_941_, v___f_747_, v___x_952_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
v___y_867_ = v___x_953_;
goto v___jp_866_;
}
v___jp_954_:
{
lean_object* v___x_960_; double v___x_961_; double v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_960_ = lean_io_get_num_heartbeats();
v___x_961_ = lean_float_of_nat(v___y_957_);
v___x_962_ = lean_float_of_nat(v___x_960_);
v___x_963_ = lean_box_float(v___x_961_);
v___x_964_ = lean_box_float(v___x_962_);
v___x_965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_966_, 0, v_a_959_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(v___x_746_, v___x_753_, v___x_754_, v___y_956_, v___y_955_, v___y_958_, v___f_747_, v___x_966_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
v___y_867_ = v___x_967_;
goto v___jp_866_;
}
v___jp_968_:
{
lean_object* v___x_973_; lean_object* v_a_974_; lean_object* v___x_975_; uint8_t v___x_976_; 
v___x_973_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_735_);
v_a_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_a_974_);
lean_dec_ref(v___x_973_);
v___x_975_ = l_Lean_trace_profiler_useHeartbeats;
v___x_976_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_970_, v___x_975_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = lean_io_mono_nanos_now();
lean_inc(v_certDef_740_);
v___x_978_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_certDef_740_, v___y_972_, v___y_971_, v_a_734_, v_a_735_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_978_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_978_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
lean_ctor_set_tag(v___x_981_, 1);
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
v___y_938_ = v___x_977_;
v___y_939_ = v___y_969_;
v___y_940_ = v___y_970_;
v___y_941_ = v_a_974_;
v_a_942_ = v___x_984_;
goto v___jp_937_;
}
}
}
else
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
v_a_987_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_978_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_978_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
lean_ctor_set_tag(v___x_989_, 0);
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
v___y_938_ = v___x_977_;
v___y_939_ = v___y_969_;
v___y_940_ = v___y_970_;
v___y_941_ = v_a_974_;
v_a_942_ = v___x_992_;
goto v___jp_937_;
}
}
}
}
else
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_io_get_num_heartbeats();
lean_inc(v_certDef_740_);
v___x_996_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_certDef_740_, v___y_972_, v___y_971_, v_a_734_, v_a_735_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_996_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_996_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
lean_ctor_set_tag(v___x_999_, 1);
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
v___y_955_ = v___y_969_;
v___y_956_ = v___y_970_;
v___y_957_ = v___x_995_;
v___y_958_ = v_a_974_;
v_a_959_ = v___x_1002_;
goto v___jp_954_;
}
}
}
else
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1012_; 
v_a_1005_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1007_ = v___x_996_;
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_996_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set_tag(v___x_1007_, 0);
v___x_1010_ = v___x_1007_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_a_1005_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
v___y_955_ = v___y_969_;
v___y_956_ = v___y_970_;
v___y_957_ = v___x_995_;
v___y_958_ = v_a_974_;
v_a_959_ = v___x_1010_;
goto v___jp_954_;
}
}
}
}
}
v___jp_1013_:
{
if (lean_obj_tag(v___y_1014_) == 0)
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
lean_dec_ref_known(v___y_1014_, 1);
v___x_1015_ = l_Lean_mkStrLit(v_cert_729_);
v___x_1016_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27);
if (v_hasTrace_744_ == 0)
{
lean_object* v___x_1017_; 
lean_inc(v_certDef_740_);
v___x_1017_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_certDef_740_, v___x_1015_, v___x_1016_, v_a_734_, v_a_735_);
v___y_867_ = v___x_1017_;
goto v___jp_866_;
}
else
{
lean_object* v___x_1018_; uint8_t v___x_1019_; 
v___x_1018_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_1019_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_743_, v_options_738_, v___x_1018_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; uint8_t v___x_1021_; 
v___x_1020_ = l_Lean_trace_profiler;
v___x_1021_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_738_, v___x_1020_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1022_; 
lean_inc(v_certDef_740_);
v___x_1022_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_certDef_740_, v___x_1015_, v___x_1016_, v_a_734_, v_a_735_);
v___y_867_ = v___x_1022_;
goto v___jp_866_;
}
else
{
v___y_969_ = v___x_1019_;
v___y_970_ = v_options_738_;
v___y_971_ = v___x_1016_;
v___y_972_ = v___x_1015_;
goto v___jp_968_;
}
}
else
{
v___y_969_ = v___x_1019_;
v___y_970_ = v_options_738_;
v___y_971_ = v___x_1016_;
v___y_972_ = v___x_1015_;
goto v___jp_968_;
}
}
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
lean_dec(v_certDef_740_);
lean_dec(v_exprDef_739_);
lean_dec_ref(v_cert_729_);
v_a_1023_ = lean_ctor_get(v___y_1014_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___y_1014_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v___y_1014_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___y_1014_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_a_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___boxed(lean_object* v_cert_1106_, lean_object* v_ctx_1107_, lean_object* v_reflectionResult_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v_cert_1106_, v_ctx_1107_, v_reflectionResult_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_);
lean_dec(v_a_1112_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1110_);
lean_dec_ref(v_a_1109_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2(lean_object* v_00_u03b1_1115_, lean_object* v_x_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_x_1116_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1123_, lean_object* v_x_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2(v_00_u03b1_1123_, v_x_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2(lean_object* v_00_u03b1_1131_, lean_object* v_msg_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___redArg(v_msg_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___boxed(lean_object* v_00_u03b1_1139_, lean_object* v_msg_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2(v_00_u03b1_1139_, v_msg_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0(lean_object* v_bvExpr_1147_, lean_object* v_x_1148_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Std_Tactic_BVDecide_BVLogicalExpr_bitblast(v_bvExpr_1147_);
return v___x_1149_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__1));
v___x_1154_ = l_Lean_MessageData_ofFormat(v___x_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1(lean_object* v_x_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2);
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___boxed(lean_object* v_x_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1(v_x_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec_ref(v_x_1163_);
return v_res_1169_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__1));
v___x_1174_ = l_Lean_MessageData_ofFormat(v___x_1173_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2(lean_object* v_x_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2);
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___boxed(lean_object* v_x_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2(v_x_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec_ref(v_x_1183_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3_spec__17(lean_object* v_r_1190_, size_t v_sz_1191_, size_t v_i_1192_, lean_object* v_bs_1193_){
_start:
{
uint8_t v___x_1194_; 
v___x_1194_ = lean_usize_dec_lt(v_i_1192_, v_sz_1191_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; 
lean_dec_ref(v_r_1190_);
v___x_1195_ = l_unsafeCast___redArg(v_bs_1193_);
lean_dec_ref(v_bs_1193_);
return v___x_1195_;
}
else
{
lean_object* v_v_1196_; lean_object* v___x_1197_; lean_object* v_bs_x27_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; size_t v___x_1201_; size_t v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v_v_1196_ = lean_array_uget(v_bs_1193_, v_i_1192_);
v___x_1197_ = lean_unsigned_to_nat(0u);
v_bs_x27_1198_ = lean_array_uset(v_bs_1193_, v_i_1192_, v___x_1197_);
v___x_1199_ = l_unsafeCast___redArg(v_v_1196_);
lean_dec(v_v_1196_);
lean_inc_ref(v_r_1190_);
v___x_1200_ = l_Std_Sat_AIG_Decl_relabel___redArg(v_r_1190_, v___x_1199_);
v___x_1201_ = ((size_t)1ULL);
v___x_1202_ = lean_usize_add(v_i_1192_, v___x_1201_);
v___x_1203_ = l_unsafeCast___redArg(v___x_1200_);
lean_dec(v___x_1200_);
v___x_1204_ = lean_array_uset(v_bs_x27_1198_, v_i_1192_, v___x_1203_);
v_i_1192_ = v___x_1202_;
v_bs_1193_ = v___x_1204_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3_spec__17___boxed(lean_object* v_r_1206_, lean_object* v_sz_1207_, lean_object* v_i_1208_, lean_object* v_bs_1209_){
_start:
{
size_t v_sz_boxed_1210_; size_t v_i_boxed_1211_; lean_object* v_res_1212_; 
v_sz_boxed_1210_ = lean_unbox_usize(v_sz_1207_);
lean_dec(v_sz_1207_);
v_i_boxed_1211_ = lean_unbox_usize(v_i_1208_);
lean_dec(v_i_1208_);
v_res_1212_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3_spec__17(v_r_1206_, v_sz_boxed_1210_, v_i_boxed_1211_, v_bs_1209_);
return v_res_1212_;
}
}
static lean_object* _init_l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1213_ = lean_box(0);
v___x_1214_ = lean_unsigned_to_nat(16u);
v___x_1215_ = lean_mk_array(v___x_1214_, v___x_1213_);
return v___x_1215_;
}
}
static lean_object* _init_l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v_cache_1218_; 
v___x_1216_ = lean_obj_once(&l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__0, &l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__0_once, _init_l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__0);
v___x_1217_ = lean_unsigned_to_nat(0u);
v_cache_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_cache_1218_, 0, v___x_1217_);
lean_ctor_set(v_cache_1218_, 1, v___x_1216_);
return v_cache_1218_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3(lean_object* v_r_1219_, lean_object* v_aig_1220_){
_start:
{
lean_object* v_decls_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1234_; 
v_decls_1221_ = lean_ctor_get(v_aig_1220_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v_aig_1220_);
if (v_isSharedCheck_1234_ == 0)
{
lean_object* v_unused_1235_; 
v_unused_1235_ = lean_ctor_get(v_aig_1220_, 1);
lean_dec(v_unused_1235_);
v___x_1223_ = v_aig_1220_;
v_isShared_1224_ = v_isSharedCheck_1234_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_decls_1221_);
lean_dec(v_aig_1220_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1234_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
size_t v_sz_1225_; size_t v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_decls_1229_; lean_object* v_cache_1230_; lean_object* v___x_1232_; 
v_sz_1225_ = lean_array_size(v_decls_1221_);
v___x_1226_ = ((size_t)0ULL);
v___x_1227_ = l_unsafeCast___redArg(v_decls_1221_);
lean_dec_ref(v_decls_1221_);
v___x_1228_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3_spec__17(v_r_1219_, v_sz_1225_, v___x_1226_, v___x_1227_);
v_decls_1229_ = l_unsafeCast___redArg(v___x_1228_);
lean_dec_ref(v___x_1228_);
v_cache_1230_ = lean_obj_once(&l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__1, &l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__1_once, _init_l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3___closed__1);
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 1, v_cache_1230_);
lean_ctor_set(v___x_1223_, 0, v_decls_1229_);
v___x_1232_ = v___x_1223_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_decls_1229_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v_cache_1230_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15___redArg(lean_object* v_a_1236_, lean_object* v_x_1237_){
_start:
{
if (lean_obj_tag(v_x_1237_) == 0)
{
lean_object* v___x_1238_; 
v___x_1238_ = lean_box(0);
return v___x_1238_;
}
else
{
lean_object* v_key_1239_; lean_object* v_value_1240_; lean_object* v_tail_1241_; uint8_t v___x_1242_; 
v_key_1239_ = lean_ctor_get(v_x_1237_, 0);
v_value_1240_ = lean_ctor_get(v_x_1237_, 1);
v_tail_1241_ = lean_ctor_get(v_x_1237_, 2);
v___x_1242_ = l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq(v_key_1239_, v_a_1236_);
if (v___x_1242_ == 0)
{
v_x_1237_ = v_tail_1241_;
goto _start;
}
else
{
lean_object* v___x_1244_; 
lean_inc(v_value_1240_);
v___x_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1244_, 0, v_value_1240_);
return v___x_1244_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15___redArg___boxed(lean_object* v_a_1245_, lean_object* v_x_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15___redArg(v_a_1245_, v_x_1246_);
lean_dec(v_x_1246_);
lean_dec_ref(v_a_1245_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___redArg(lean_object* v_m_1248_, lean_object* v_a_1249_){
_start:
{
lean_object* v_buckets_1250_; lean_object* v___x_1251_; uint64_t v___x_1252_; uint64_t v___x_1253_; uint64_t v___x_1254_; uint64_t v_fold_1255_; uint64_t v___x_1256_; uint64_t v___x_1257_; uint64_t v___x_1258_; size_t v___x_1259_; size_t v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; size_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v_buckets_1250_ = lean_ctor_get(v_m_1248_, 1);
v___x_1251_ = lean_array_get_size(v_buckets_1250_);
v___x_1252_ = l_Std_Tactic_BVDecide_instHashableBVBit_hash(v_a_1249_);
v___x_1253_ = 32ULL;
v___x_1254_ = lean_uint64_shift_right(v___x_1252_, v___x_1253_);
v_fold_1255_ = lean_uint64_xor(v___x_1252_, v___x_1254_);
v___x_1256_ = 16ULL;
v___x_1257_ = lean_uint64_shift_right(v_fold_1255_, v___x_1256_);
v___x_1258_ = lean_uint64_xor(v_fold_1255_, v___x_1257_);
v___x_1259_ = lean_uint64_to_usize(v___x_1258_);
v___x_1260_ = lean_usize_of_nat(v___x_1251_);
v___x_1261_ = ((size_t)1ULL);
v___x_1262_ = lean_usize_sub(v___x_1260_, v___x_1261_);
v___x_1263_ = lean_usize_land(v___x_1259_, v___x_1262_);
v___x_1264_ = lean_array_uget_borrowed(v_buckets_1250_, v___x_1263_);
v___x_1265_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15___redArg(v_a_1249_, v___x_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_m_1266_, lean_object* v_a_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___redArg(v_m_1266_, v_a_1267_);
lean_dec_ref(v_a_1267_);
lean_dec_ref(v_m_1266_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0___lam__0(lean_object* v_map_1269_, lean_object* v_x_1270_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___redArg(v_map_1269_, v_x_1270_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v___x_1272_; 
v___x_1272_ = lean_unsigned_to_nat(0u);
return v___x_1272_;
}
else
{
lean_object* v_val_1273_; 
v_val_1273_ = lean_ctor_get(v___x_1271_, 0);
lean_inc(v_val_1273_);
lean_dec_ref_known(v___x_1271_, 1);
return v_val_1273_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0___lam__0___boxed(lean_object* v_map_1274_, lean_object* v_x_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0___lam__0(v_map_1274_, v_x_1275_);
lean_dec_ref(v_x_1275_);
lean_dec_ref(v_map_1274_);
return v_res_1276_;
}
}
static lean_object* _init_l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__0(void){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1277_ = lean_box(0);
v___x_1278_ = lean_unsigned_to_nat(16u);
v___x_1279_ = lean_mk_array(v___x_1278_, v___x_1277_);
return v___x_1279_;
}
}
static lean_object* _init_l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__1(void){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1280_ = lean_obj_once(&l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__0, &l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__0_once, _init_l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__0);
v___x_1281_ = lean_unsigned_to_nat(0u);
v___x_1282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
lean_ctor_set(v___x_1282_, 1, v___x_1280_);
return v___x_1282_;
}
}
static lean_object* _init_l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__2(void){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1283_ = lean_obj_once(&l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__1, &l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__1_once, _init_l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__1);
v___x_1284_ = lean_unsigned_to_nat(0u);
v___x_1285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
lean_ctor_set(v___x_1285_, 1, v___x_1283_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg(){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = lean_obj_once(&l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__2, &l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__2_once, _init_l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___closed__2);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg___boxed(lean_object* v___dummy_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg();
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addFalse___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__23___redArg(lean_object* v_state_1290_){
_start:
{
lean_object* v_max_1291_; lean_object* v_map_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1299_; 
v_max_1291_ = lean_ctor_get(v_state_1290_, 0);
v_map_1292_ = lean_ctor_get(v_state_1290_, 1);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_state_1290_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1294_ = v_state_1290_;
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_map_1292_);
lean_inc(v_max_1291_);
lean_dec(v_state_1290_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1299_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1297_; 
if (v_isShared_1295_ == 0)
{
v___x_1297_ = v___x_1294_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_max_1291_);
lean_ctor_set(v_reuseFailAlloc_1298_, 1, v_map_1292_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32___redArg(lean_object* v_a_1300_, lean_object* v_x_1301_){
_start:
{
if (lean_obj_tag(v_x_1301_) == 0)
{
uint8_t v___x_1302_; 
v___x_1302_ = 0;
return v___x_1302_;
}
else
{
lean_object* v_key_1303_; lean_object* v_tail_1304_; uint8_t v___x_1305_; 
v_key_1303_ = lean_ctor_get(v_x_1301_, 0);
v_tail_1304_ = lean_ctor_get(v_x_1301_, 2);
v___x_1305_ = l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq(v_key_1303_, v_a_1300_);
if (v___x_1305_ == 0)
{
v_x_1301_ = v_tail_1304_;
goto _start;
}
else
{
return v___x_1305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32___redArg___boxed(lean_object* v_a_1307_, lean_object* v_x_1308_){
_start:
{
uint8_t v_res_1309_; lean_object* v_r_1310_; 
v_res_1309_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32___redArg(v_a_1307_, v_x_1308_);
lean_dec(v_x_1308_);
lean_dec_ref(v_a_1307_);
v_r_1310_ = lean_box(v_res_1309_);
return v_r_1310_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35_spec__36___redArg(lean_object* v_x_1311_, lean_object* v_x_1312_){
_start:
{
if (lean_obj_tag(v_x_1312_) == 0)
{
return v_x_1311_;
}
else
{
lean_object* v_key_1313_; lean_object* v_value_1314_; lean_object* v_tail_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1338_; 
v_key_1313_ = lean_ctor_get(v_x_1312_, 0);
v_value_1314_ = lean_ctor_get(v_x_1312_, 1);
v_tail_1315_ = lean_ctor_get(v_x_1312_, 2);
v_isSharedCheck_1338_ = !lean_is_exclusive(v_x_1312_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1317_ = v_x_1312_;
v_isShared_1318_ = v_isSharedCheck_1338_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_tail_1315_);
lean_inc(v_value_1314_);
lean_inc(v_key_1313_);
lean_dec(v_x_1312_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1338_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1319_; uint64_t v___x_1320_; uint64_t v___x_1321_; uint64_t v___x_1322_; uint64_t v_fold_1323_; uint64_t v___x_1324_; uint64_t v___x_1325_; uint64_t v___x_1326_; size_t v___x_1327_; size_t v___x_1328_; size_t v___x_1329_; size_t v___x_1330_; size_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1334_; 
v___x_1319_ = lean_array_get_size(v_x_1311_);
v___x_1320_ = l_Std_Tactic_BVDecide_instHashableBVBit_hash(v_key_1313_);
v___x_1321_ = 32ULL;
v___x_1322_ = lean_uint64_shift_right(v___x_1320_, v___x_1321_);
v_fold_1323_ = lean_uint64_xor(v___x_1320_, v___x_1322_);
v___x_1324_ = 16ULL;
v___x_1325_ = lean_uint64_shift_right(v_fold_1323_, v___x_1324_);
v___x_1326_ = lean_uint64_xor(v_fold_1323_, v___x_1325_);
v___x_1327_ = lean_uint64_to_usize(v___x_1326_);
v___x_1328_ = lean_usize_of_nat(v___x_1319_);
v___x_1329_ = ((size_t)1ULL);
v___x_1330_ = lean_usize_sub(v___x_1328_, v___x_1329_);
v___x_1331_ = lean_usize_land(v___x_1327_, v___x_1330_);
v___x_1332_ = lean_array_uget_borrowed(v_x_1311_, v___x_1331_);
lean_inc(v___x_1332_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 2, v___x_1332_);
v___x_1334_ = v___x_1317_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_key_1313_);
lean_ctor_set(v_reuseFailAlloc_1337_, 1, v_value_1314_);
lean_ctor_set(v_reuseFailAlloc_1337_, 2, v___x_1332_);
v___x_1334_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
lean_object* v___x_1335_; 
v___x_1335_ = lean_array_uset(v_x_1311_, v___x_1331_, v___x_1334_);
v_x_1311_ = v___x_1335_;
v_x_1312_ = v_tail_1315_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35___redArg(lean_object* v_i_1339_, lean_object* v_source_1340_, lean_object* v_target_1341_){
_start:
{
lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1342_ = lean_array_get_size(v_source_1340_);
v___x_1343_ = lean_nat_dec_lt(v_i_1339_, v___x_1342_);
if (v___x_1343_ == 0)
{
lean_dec_ref(v_source_1340_);
lean_dec(v_i_1339_);
return v_target_1341_;
}
else
{
lean_object* v_es_1344_; lean_object* v___x_1345_; lean_object* v_source_1346_; lean_object* v_target_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v_es_1344_ = lean_array_fget(v_source_1340_, v_i_1339_);
v___x_1345_ = lean_box(0);
v_source_1346_ = lean_array_fset(v_source_1340_, v_i_1339_, v___x_1345_);
v_target_1347_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35_spec__36___redArg(v_target_1341_, v_es_1344_);
v___x_1348_ = lean_unsigned_to_nat(1u);
v___x_1349_ = lean_nat_add(v_i_1339_, v___x_1348_);
lean_dec(v_i_1339_);
v_i_1339_ = v___x_1349_;
v_source_1340_ = v_source_1346_;
v_target_1341_ = v_target_1347_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33___redArg(lean_object* v_data_1351_){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v_nbuckets_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1352_ = lean_array_get_size(v_data_1351_);
v___x_1353_ = lean_unsigned_to_nat(2u);
v_nbuckets_1354_ = lean_nat_mul(v___x_1352_, v___x_1353_);
v___x_1355_ = lean_unsigned_to_nat(0u);
v___x_1356_ = lean_box(0);
v___x_1357_ = lean_mk_array(v_nbuckets_1354_, v___x_1356_);
v___x_1358_ = lean_array_propagate_mark(v_data_1351_, v___x_1357_);
v___x_1359_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35___redArg(v___x_1355_, v_data_1351_, v___x_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__34___redArg(lean_object* v_a_1360_, lean_object* v_b_1361_, lean_object* v_x_1362_){
_start:
{
if (lean_obj_tag(v_x_1362_) == 0)
{
lean_dec(v_b_1361_);
lean_dec_ref(v_a_1360_);
return v_x_1362_;
}
else
{
lean_object* v_key_1363_; lean_object* v_value_1364_; lean_object* v_tail_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1377_; 
v_key_1363_ = lean_ctor_get(v_x_1362_, 0);
v_value_1364_ = lean_ctor_get(v_x_1362_, 1);
v_tail_1365_ = lean_ctor_get(v_x_1362_, 2);
v_isSharedCheck_1377_ = !lean_is_exclusive(v_x_1362_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1367_ = v_x_1362_;
v_isShared_1368_ = v_isSharedCheck_1377_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_tail_1365_);
lean_inc(v_value_1364_);
lean_inc(v_key_1363_);
lean_dec(v_x_1362_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1377_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
uint8_t v___x_1369_; 
v___x_1369_ = l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq(v_key_1363_, v_a_1360_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; lean_object* v___x_1372_; 
v___x_1370_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__34___redArg(v_a_1360_, v_b_1361_, v_tail_1365_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 2, v___x_1370_);
v___x_1372_ = v___x_1367_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_key_1363_);
lean_ctor_set(v_reuseFailAlloc_1373_, 1, v_value_1364_);
lean_ctor_set(v_reuseFailAlloc_1373_, 2, v___x_1370_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
else
{
lean_object* v___x_1375_; 
lean_dec(v_value_1364_);
lean_dec(v_key_1363_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 1, v_b_1361_);
lean_ctor_set(v___x_1367_, 0, v_a_1360_);
v___x_1375_ = v___x_1367_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_a_1360_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_b_1361_);
lean_ctor_set(v_reuseFailAlloc_1376_, 2, v_tail_1365_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29___redArg(lean_object* v_m_1378_, lean_object* v_a_1379_, lean_object* v_b_1380_){
_start:
{
lean_object* v_size_1381_; lean_object* v_buckets_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1425_; 
v_size_1381_ = lean_ctor_get(v_m_1378_, 0);
v_buckets_1382_ = lean_ctor_get(v_m_1378_, 1);
v_isSharedCheck_1425_ = !lean_is_exclusive(v_m_1378_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1384_ = v_m_1378_;
v_isShared_1385_ = v_isSharedCheck_1425_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_buckets_1382_);
lean_inc(v_size_1381_);
lean_dec(v_m_1378_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1425_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; uint64_t v___x_1387_; uint64_t v___x_1388_; uint64_t v___x_1389_; uint64_t v_fold_1390_; uint64_t v___x_1391_; uint64_t v___x_1392_; uint64_t v___x_1393_; size_t v___x_1394_; size_t v___x_1395_; size_t v___x_1396_; size_t v___x_1397_; size_t v___x_1398_; lean_object* v_bkt_1399_; uint8_t v___x_1400_; 
v___x_1386_ = lean_array_get_size(v_buckets_1382_);
v___x_1387_ = l_Std_Tactic_BVDecide_instHashableBVBit_hash(v_a_1379_);
v___x_1388_ = 32ULL;
v___x_1389_ = lean_uint64_shift_right(v___x_1387_, v___x_1388_);
v_fold_1390_ = lean_uint64_xor(v___x_1387_, v___x_1389_);
v___x_1391_ = 16ULL;
v___x_1392_ = lean_uint64_shift_right(v_fold_1390_, v___x_1391_);
v___x_1393_ = lean_uint64_xor(v_fold_1390_, v___x_1392_);
v___x_1394_ = lean_uint64_to_usize(v___x_1393_);
v___x_1395_ = lean_usize_of_nat(v___x_1386_);
v___x_1396_ = ((size_t)1ULL);
v___x_1397_ = lean_usize_sub(v___x_1395_, v___x_1396_);
v___x_1398_ = lean_usize_land(v___x_1394_, v___x_1397_);
v_bkt_1399_ = lean_array_uget_borrowed(v_buckets_1382_, v___x_1398_);
v___x_1400_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32___redArg(v_a_1379_, v_bkt_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; lean_object* v_size_x27_1402_; lean_object* v___x_1403_; lean_object* v_buckets_x27_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v___x_1401_ = lean_unsigned_to_nat(1u);
v_size_x27_1402_ = lean_nat_add(v_size_1381_, v___x_1401_);
lean_dec(v_size_1381_);
lean_inc(v_bkt_1399_);
v___x_1403_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1403_, 0, v_a_1379_);
lean_ctor_set(v___x_1403_, 1, v_b_1380_);
lean_ctor_set(v___x_1403_, 2, v_bkt_1399_);
v_buckets_x27_1404_ = lean_array_uset(v_buckets_1382_, v___x_1398_, v___x_1403_);
v___x_1405_ = lean_unsigned_to_nat(4u);
v___x_1406_ = lean_nat_mul(v_size_x27_1402_, v___x_1405_);
v___x_1407_ = lean_unsigned_to_nat(3u);
v___x_1408_ = lean_nat_div(v___x_1406_, v___x_1407_);
lean_dec(v___x_1406_);
v___x_1409_ = lean_array_get_size(v_buckets_x27_1404_);
v___x_1410_ = lean_nat_dec_le(v___x_1408_, v___x_1409_);
lean_dec(v___x_1408_);
if (v___x_1410_ == 0)
{
lean_object* v_val_1411_; lean_object* v___x_1413_; 
v_val_1411_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33___redArg(v_buckets_x27_1404_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 1, v_val_1411_);
lean_ctor_set(v___x_1384_, 0, v_size_x27_1402_);
v___x_1413_ = v___x_1384_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_size_x27_1402_);
lean_ctor_set(v_reuseFailAlloc_1414_, 1, v_val_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
else
{
lean_object* v___x_1416_; 
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 1, v_buckets_x27_1404_);
lean_ctor_set(v___x_1384_, 0, v_size_x27_1402_);
v___x_1416_ = v___x_1384_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_size_x27_1402_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v_buckets_x27_1404_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
else
{
lean_object* v___x_1418_; lean_object* v_buckets_x27_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1423_; 
lean_inc(v_bkt_1399_);
v___x_1418_ = lean_box(0);
v_buckets_x27_1419_ = lean_array_uset(v_buckets_1382_, v___x_1398_, v___x_1418_);
v___x_1420_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__34___redArg(v_a_1379_, v_b_1380_, v_bkt_1399_);
v___x_1421_ = lean_array_uset(v_buckets_x27_1419_, v___x_1398_, v___x_1420_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 1, v___x_1421_);
v___x_1423_ = v___x_1384_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v_size_1381_);
lean_ctor_set(v_reuseFailAlloc_1424_, 1, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24___redArg(lean_object* v_state_1426_, lean_object* v_a_1427_){
_start:
{
lean_object* v_max_1428_; lean_object* v_map_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1443_; 
v_max_1428_ = lean_ctor_get(v_state_1426_, 0);
v_map_1429_ = lean_ctor_get(v_state_1426_, 1);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_state_1426_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1431_ = v_state_1426_;
v_isShared_1432_ = v_isSharedCheck_1443_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_map_1429_);
lean_inc(v_max_1428_);
lean_dec(v_state_1426_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1443_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1433_; 
v___x_1433_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___redArg(v_map_1429_, v_a_1427_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1438_; 
v___x_1434_ = lean_unsigned_to_nat(1u);
v___x_1435_ = lean_nat_add(v_max_1428_, v___x_1434_);
v___x_1436_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29___redArg(v_map_1429_, v_a_1427_, v_max_1428_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 1, v___x_1436_);
lean_ctor_set(v___x_1431_, 0, v___x_1435_);
v___x_1438_ = v___x_1431_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1435_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v___x_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
else
{
lean_object* v___x_1441_; 
lean_dec_ref_known(v___x_1433_, 1);
lean_dec_ref(v_a_1427_);
if (v_isShared_1432_ == 0)
{
v___x_1441_ = v___x_1431_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_max_1428_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v_map_1429_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addGate___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__25___redArg(lean_object* v_state_1444_){
_start:
{
lean_object* v_max_1445_; lean_object* v_map_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
v_max_1445_ = lean_ctor_get(v_state_1444_, 0);
v_map_1446_ = lean_ctor_get(v_state_1444_, 1);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_state_1444_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v_state_1444_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_map_1446_);
lean_inc(v_max_1445_);
lean_dec(v_state_1444_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_max_1445_);
lean_ctor_set(v_reuseFailAlloc_1452_, 1, v_map_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18(lean_object* v_decls_1454_, lean_object* v_idx_1455_, lean_object* v_state_1456_){
_start:
{
lean_object* v___x_1457_; uint8_t v___x_1458_; 
v___x_1457_ = lean_array_get_size(v_decls_1454_);
v___x_1458_ = lean_nat_dec_lt(v_idx_1455_, v___x_1457_);
if (v___x_1458_ == 0)
{
lean_dec(v_idx_1455_);
return v_state_1456_;
}
else
{
lean_object* v_decl_1459_; 
v_decl_1459_ = lean_array_fget_borrowed(v_decls_1454_, v_idx_1455_);
switch(lean_obj_tag(v_decl_1459_))
{
case 0:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1460_ = lean_unsigned_to_nat(1u);
v___x_1461_ = lean_nat_add(v_idx_1455_, v___x_1460_);
lean_dec(v_idx_1455_);
v___x_1462_ = l_Std_Sat_AIG_RelabelNat_State_addFalse___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__23___redArg(v_state_1456_);
v_idx_1455_ = v___x_1461_;
v_state_1456_ = v___x_1462_;
goto _start;
}
case 1:
{
lean_object* v_idx_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v_idx_1464_ = lean_ctor_get(v_decl_1459_, 0);
v___x_1465_ = lean_unsigned_to_nat(1u);
v___x_1466_ = lean_nat_add(v_idx_1455_, v___x_1465_);
lean_dec(v_idx_1455_);
lean_inc(v_idx_1464_);
v___x_1467_ = l_Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24___redArg(v_state_1456_, v_idx_1464_);
v_idx_1455_ = v___x_1466_;
v_state_1456_ = v___x_1467_;
goto _start;
}
default: 
{
lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1469_ = lean_unsigned_to_nat(1u);
v___x_1470_ = lean_nat_add(v_idx_1455_, v___x_1469_);
lean_dec(v_idx_1455_);
v___x_1471_ = l_Std_Sat_AIG_RelabelNat_State_addGate___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__25___redArg(v_state_1456_);
v_idx_1455_ = v___x_1470_;
v_state_1456_ = v___x_1471_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18___boxed(lean_object* v_decls_1473_, lean_object* v_idx_1474_, lean_object* v_state_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l_Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18(v_decls_1473_, v_idx_1474_, v_state_1475_);
lean_dec_ref(v_decls_1473_);
return v_res_1476_;
}
}
static lean_object* _init_l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___closed__0(void){
_start:
{
lean_object* v___x_1477_; 
v___x_1477_ = l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___redArg();
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13(lean_object* v_aig_1478_){
_start:
{
lean_object* v_decls_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v_decls_1479_ = lean_ctor_get(v_aig_1478_, 0);
v___x_1480_ = lean_unsigned_to_nat(0u);
v___x_1481_ = lean_obj_once(&l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___closed__0, &l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___closed__0_once, _init_l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___closed__0);
v___x_1482_ = l_Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18(v_decls_1479_, v___x_1480_, v___x_1481_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___boxed(lean_object* v_aig_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13(v_aig_1483_);
lean_dec_ref(v_aig_1483_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1(lean_object* v_aig_1485_){
_start:
{
lean_object* v___x_1486_; lean_object* v_map_1487_; 
v___x_1486_ = l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13(v_aig_1485_);
v_map_1487_ = lean_ctor_get(v___x_1486_, 1);
lean_inc_ref(v_map_1487_);
lean_dec_ref(v___x_1486_);
return v_map_1487_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1___boxed(lean_object* v_aig_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l_Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1(v_aig_1488_);
lean_dec_ref(v_aig_1488_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0(lean_object* v_aig_1490_){
_start:
{
lean_object* v_map_1491_; lean_object* v___f_1492_; lean_object* v_aig_1493_; lean_object* v___x_1494_; 
v_map_1491_ = l_Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1(v_aig_1490_);
lean_inc_ref(v_map_1491_);
v___f_1492_ = lean_alloc_closure((void*)(l_Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1492_, 0, v_map_1491_);
v_aig_1493_ = l_Std_Sat_AIG_relabel___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__3(v___f_1492_, v_aig_1490_);
v___x_1494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1494_, 0, v_aig_1493_);
lean_ctor_set(v___x_1494_, 1, v_map_1491_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(lean_object* v_entry_1495_){
_start:
{
lean_object* v_aig_1496_; lean_object* v_ref_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1523_; 
v_aig_1496_ = lean_ctor_get(v_entry_1495_, 0);
v_ref_1497_ = lean_ctor_get(v_entry_1495_, 1);
v_isSharedCheck_1523_ = !lean_is_exclusive(v_entry_1495_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1499_ = v_entry_1495_;
v_isShared_1500_ = v_isSharedCheck_1523_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_ref_1497_);
lean_inc(v_aig_1496_);
lean_dec(v_entry_1495_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1523_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v_res_1501_; lean_object* v_fst_1502_; lean_object* v_snd_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1522_; 
v_res_1501_ = l_Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0(v_aig_1496_);
v_fst_1502_ = lean_ctor_get(v_res_1501_, 0);
v_snd_1503_ = lean_ctor_get(v_res_1501_, 1);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_res_1501_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1505_ = v_res_1501_;
v_isShared_1506_ = v_isSharedCheck_1522_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_snd_1503_);
lean_inc(v_fst_1502_);
lean_dec(v_res_1501_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1522_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v_gate_1507_; uint8_t v_invert_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1521_; 
v_gate_1507_ = lean_ctor_get(v_ref_1497_, 0);
v_invert_1508_ = lean_ctor_get_uint8(v_ref_1497_, sizeof(void*)*1);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_ref_1497_);
if (v_isSharedCheck_1521_ == 0)
{
v___x_1510_ = v_ref_1497_;
v_isShared_1511_ = v_isSharedCheck_1521_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_gate_1507_);
lean_dec(v_ref_1497_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1521_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_gate_1507_);
lean_ctor_set_uint8(v_reuseFailAlloc_1520_, sizeof(void*)*1, v_invert_1508_);
v___x_1513_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
lean_object* v_entry_1515_; 
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 1, v___x_1513_);
lean_ctor_set(v___x_1499_, 0, v_fst_1502_);
v_entry_1515_ = v___x_1499_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_fst_1502_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v___x_1513_);
v_entry_1515_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
lean_object* v___x_1517_; 
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 0, v_entry_1515_);
v___x_1517_ = v___x_1505_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_entry_1515_);
lean_ctor_set(v_reuseFailAlloc_1518_, 1, v_snd_1503_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__3(lean_object* v_a_1524_, lean_object* v_x_1525_){
_start:
{
lean_object* v___x_1526_; lean_object* v_fst_1527_; lean_object* v_snd_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1536_; 
v___x_1526_ = l_Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(v_a_1524_);
v_fst_1527_ = lean_ctor_get(v___x_1526_, 0);
v_snd_1528_ = lean_ctor_get(v___x_1526_, 1);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1530_ = v___x_1526_;
v_isShared_1531_ = v_isSharedCheck_1536_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_snd_1528_);
lean_inc(v_fst_1527_);
lean_dec(v___x_1526_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1536_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1532_ = l_Std_Sat_AIG_toCNF(v_fst_1527_);
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1532_);
v___x_1534_ = v___x_1530_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1532_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v_snd_1528_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__2(void){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__1));
v___x_1541_ = l_Lean_MessageData_ofFormat(v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8(lean_object* v_x_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__2);
v___x_1549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___boxed(lean_object* v_x_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8(v_x_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec_ref(v_x_1550_);
return v_res_1556_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__2(void){
_start:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1560_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__1));
v___x_1561_ = l_Lean_MessageData_ofFormat(v___x_1560_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4(lean_object* v_x_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___closed__2);
v___x_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___boxed(lean_object* v_x_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4(v_x_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec_ref(v_x_1570_);
return v_res_1576_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___redArg(lean_object* v_a_1577_, lean_object* v_x_1578_){
_start:
{
if (lean_obj_tag(v_x_1578_) == 0)
{
uint8_t v___x_1579_; 
v___x_1579_ = 0;
return v___x_1579_;
}
else
{
lean_object* v_key_1580_; lean_object* v_tail_1581_; uint8_t v___x_1582_; 
v_key_1580_ = lean_ctor_get(v_x_1578_, 0);
v_tail_1581_ = lean_ctor_get(v_x_1578_, 2);
v___x_1582_ = lean_nat_dec_eq(v_key_1580_, v_a_1577_);
if (v___x_1582_ == 0)
{
v_x_1578_ = v_tail_1581_;
goto _start;
}
else
{
return v___x_1582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___redArg___boxed(lean_object* v_a_1584_, lean_object* v_x_1585_){
_start:
{
uint8_t v_res_1586_; lean_object* v_r_1587_; 
v_res_1586_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___redArg(v_a_1584_, v_x_1585_);
lean_dec(v_x_1585_);
lean_dec(v_a_1584_);
v_r_1587_ = lean_box(v_res_1586_);
return v_r_1587_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12___redArg(lean_object* v___x_1588_, lean_object* v_m_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v_buckets_1591_; lean_object* v___x_1592_; uint64_t v___x_1593_; uint64_t v___x_1594_; uint64_t v___x_1595_; uint64_t v_fold_1596_; uint64_t v___x_1597_; uint64_t v___x_1598_; uint64_t v___x_1599_; size_t v___x_1600_; size_t v___x_1601_; size_t v___x_1602_; size_t v___x_1603_; size_t v___x_1604_; lean_object* v___x_1605_; uint8_t v___x_1606_; 
v_buckets_1591_ = lean_ctor_get(v_m_1589_, 1);
v___x_1592_ = lean_array_get_size(v_buckets_1591_);
v___x_1593_ = lean_uint64_of_nat(v_a_1590_);
v___x_1594_ = 32ULL;
v___x_1595_ = lean_uint64_shift_right(v___x_1593_, v___x_1594_);
v_fold_1596_ = lean_uint64_xor(v___x_1593_, v___x_1595_);
v___x_1597_ = 16ULL;
v___x_1598_ = lean_uint64_shift_right(v_fold_1596_, v___x_1597_);
v___x_1599_ = lean_uint64_xor(v_fold_1596_, v___x_1598_);
v___x_1600_ = lean_uint64_to_usize(v___x_1599_);
v___x_1601_ = lean_usize_of_nat(v___x_1592_);
v___x_1602_ = ((size_t)1ULL);
v___x_1603_ = lean_usize_sub(v___x_1601_, v___x_1602_);
v___x_1604_ = lean_usize_land(v___x_1600_, v___x_1603_);
v___x_1605_ = lean_array_uget_borrowed(v_buckets_1591_, v___x_1604_);
v___x_1606_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___redArg(v_a_1590_, v___x_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12___redArg___boxed(lean_object* v___x_1607_, lean_object* v_m_1608_, lean_object* v_a_1609_){
_start:
{
uint8_t v_res_1610_; lean_object* v_r_1611_; 
v_res_1610_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12___redArg(v___x_1607_, v_m_1608_, v_a_1609_);
lean_dec(v_a_1609_);
lean_dec_ref(v_m_1608_);
lean_dec(v___x_1607_);
v_r_1611_ = lean_box(v_res_1610_);
return v_r_1611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27_spec__31___redArg(lean_object* v_x_1612_, lean_object* v_x_1613_){
_start:
{
if (lean_obj_tag(v_x_1613_) == 0)
{
return v_x_1612_;
}
else
{
lean_object* v_key_1614_; lean_object* v_value_1615_; lean_object* v_tail_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1639_; 
v_key_1614_ = lean_ctor_get(v_x_1613_, 0);
v_value_1615_ = lean_ctor_get(v_x_1613_, 1);
v_tail_1616_ = lean_ctor_get(v_x_1613_, 2);
v_isSharedCheck_1639_ = !lean_is_exclusive(v_x_1613_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1618_ = v_x_1613_;
v_isShared_1619_ = v_isSharedCheck_1639_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_tail_1616_);
lean_inc(v_value_1615_);
lean_inc(v_key_1614_);
lean_dec(v_x_1613_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1639_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1620_; uint64_t v___x_1621_; uint64_t v___x_1622_; uint64_t v___x_1623_; uint64_t v_fold_1624_; uint64_t v___x_1625_; uint64_t v___x_1626_; uint64_t v___x_1627_; size_t v___x_1628_; size_t v___x_1629_; size_t v___x_1630_; size_t v___x_1631_; size_t v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1635_; 
v___x_1620_ = lean_array_get_size(v_x_1612_);
v___x_1621_ = lean_uint64_of_nat(v_key_1614_);
v___x_1622_ = 32ULL;
v___x_1623_ = lean_uint64_shift_right(v___x_1621_, v___x_1622_);
v_fold_1624_ = lean_uint64_xor(v___x_1621_, v___x_1623_);
v___x_1625_ = 16ULL;
v___x_1626_ = lean_uint64_shift_right(v_fold_1624_, v___x_1625_);
v___x_1627_ = lean_uint64_xor(v_fold_1624_, v___x_1626_);
v___x_1628_ = lean_uint64_to_usize(v___x_1627_);
v___x_1629_ = lean_usize_of_nat(v___x_1620_);
v___x_1630_ = ((size_t)1ULL);
v___x_1631_ = lean_usize_sub(v___x_1629_, v___x_1630_);
v___x_1632_ = lean_usize_land(v___x_1628_, v___x_1631_);
v___x_1633_ = lean_array_uget_borrowed(v_x_1612_, v___x_1632_);
lean_inc(v___x_1633_);
if (v_isShared_1619_ == 0)
{
lean_ctor_set(v___x_1618_, 2, v___x_1633_);
v___x_1635_ = v___x_1618_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_key_1614_);
lean_ctor_set(v_reuseFailAlloc_1638_, 1, v_value_1615_);
lean_ctor_set(v_reuseFailAlloc_1638_, 2, v___x_1633_);
v___x_1635_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
lean_object* v___x_1636_; 
v___x_1636_ = lean_array_uset(v_x_1612_, v___x_1632_, v___x_1635_);
v_x_1612_ = v___x_1636_;
v_x_1613_ = v_tail_1616_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27___redArg(lean_object* v_i_1640_, lean_object* v_source_1641_, lean_object* v_target_1642_){
_start:
{
lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1643_ = lean_array_get_size(v_source_1641_);
v___x_1644_ = lean_nat_dec_lt(v_i_1640_, v___x_1643_);
if (v___x_1644_ == 0)
{
lean_dec_ref(v_source_1641_);
lean_dec(v_i_1640_);
return v_target_1642_;
}
else
{
lean_object* v_es_1645_; lean_object* v___x_1646_; lean_object* v_source_1647_; lean_object* v_target_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v_es_1645_ = lean_array_fget(v_source_1641_, v_i_1640_);
v___x_1646_ = lean_box(0);
v_source_1647_ = lean_array_fset(v_source_1641_, v_i_1640_, v___x_1646_);
v_target_1648_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27_spec__31___redArg(v_target_1642_, v_es_1645_);
v___x_1649_ = lean_unsigned_to_nat(1u);
v___x_1650_ = lean_nat_add(v_i_1640_, v___x_1649_);
lean_dec(v_i_1640_);
v_i_1640_ = v___x_1650_;
v_source_1641_ = v_source_1647_;
v_target_1642_ = v_target_1648_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22___redArg(lean_object* v___x_1652_, lean_object* v_data_1653_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v_nbuckets_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1654_ = lean_array_get_size(v_data_1653_);
v___x_1655_ = lean_unsigned_to_nat(2u);
v_nbuckets_1656_ = lean_nat_mul(v___x_1654_, v___x_1655_);
v___x_1657_ = lean_unsigned_to_nat(0u);
v___x_1658_ = lean_box(0);
v___x_1659_ = lean_mk_array(v_nbuckets_1656_, v___x_1658_);
v___x_1660_ = lean_array_propagate_mark(v_data_1653_, v___x_1659_);
v___x_1661_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27___redArg(v___x_1657_, v_data_1653_, v___x_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22___redArg___boxed(lean_object* v___x_1662_, lean_object* v_data_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22___redArg(v___x_1662_, v_data_1663_);
lean_dec(v___x_1662_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13___redArg(lean_object* v___x_1665_, lean_object* v_m_1666_, lean_object* v_a_1667_, lean_object* v_b_1668_){
_start:
{
lean_object* v_size_1669_; lean_object* v_buckets_1670_; lean_object* v___x_1671_; uint64_t v___x_1672_; uint64_t v___x_1673_; uint64_t v___x_1674_; uint64_t v_fold_1675_; uint64_t v___x_1676_; uint64_t v___x_1677_; uint64_t v___x_1678_; size_t v___x_1679_; size_t v___x_1680_; size_t v___x_1681_; size_t v___x_1682_; size_t v___x_1683_; lean_object* v_bkt_1684_; uint8_t v___x_1685_; 
v_size_1669_ = lean_ctor_get(v_m_1666_, 0);
v_buckets_1670_ = lean_ctor_get(v_m_1666_, 1);
v___x_1671_ = lean_array_get_size(v_buckets_1670_);
v___x_1672_ = lean_uint64_of_nat(v_a_1667_);
v___x_1673_ = 32ULL;
v___x_1674_ = lean_uint64_shift_right(v___x_1672_, v___x_1673_);
v_fold_1675_ = lean_uint64_xor(v___x_1672_, v___x_1674_);
v___x_1676_ = 16ULL;
v___x_1677_ = lean_uint64_shift_right(v_fold_1675_, v___x_1676_);
v___x_1678_ = lean_uint64_xor(v_fold_1675_, v___x_1677_);
v___x_1679_ = lean_uint64_to_usize(v___x_1678_);
v___x_1680_ = lean_usize_of_nat(v___x_1671_);
v___x_1681_ = ((size_t)1ULL);
v___x_1682_ = lean_usize_sub(v___x_1680_, v___x_1681_);
v___x_1683_ = lean_usize_land(v___x_1679_, v___x_1682_);
v_bkt_1684_ = lean_array_uget_borrowed(v_buckets_1670_, v___x_1683_);
v___x_1685_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___redArg(v_a_1667_, v_bkt_1684_);
if (v___x_1685_ == 0)
{
lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1706_; 
lean_inc_ref(v_buckets_1670_);
lean_inc(v_size_1669_);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_m_1666_);
if (v_isSharedCheck_1706_ == 0)
{
lean_object* v_unused_1707_; lean_object* v_unused_1708_; 
v_unused_1707_ = lean_ctor_get(v_m_1666_, 1);
lean_dec(v_unused_1707_);
v_unused_1708_ = lean_ctor_get(v_m_1666_, 0);
lean_dec(v_unused_1708_);
v___x_1687_ = v_m_1666_;
v_isShared_1688_ = v_isSharedCheck_1706_;
goto v_resetjp_1686_;
}
else
{
lean_dec(v_m_1666_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1706_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1689_; lean_object* v_size_x27_1690_; lean_object* v___x_1691_; lean_object* v_buckets_x27_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v___x_1689_ = lean_unsigned_to_nat(1u);
v_size_x27_1690_ = lean_nat_add(v_size_1669_, v___x_1689_);
lean_dec(v_size_1669_);
lean_inc(v_bkt_1684_);
v___x_1691_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1691_, 0, v_a_1667_);
lean_ctor_set(v___x_1691_, 1, v_b_1668_);
lean_ctor_set(v___x_1691_, 2, v_bkt_1684_);
v_buckets_x27_1692_ = lean_array_uset(v_buckets_1670_, v___x_1683_, v___x_1691_);
v___x_1693_ = lean_unsigned_to_nat(4u);
v___x_1694_ = lean_nat_mul(v_size_x27_1690_, v___x_1693_);
v___x_1695_ = lean_unsigned_to_nat(3u);
v___x_1696_ = lean_nat_div(v___x_1694_, v___x_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_array_get_size(v_buckets_x27_1692_);
v___x_1698_ = lean_nat_dec_le(v___x_1696_, v___x_1697_);
lean_dec(v___x_1696_);
if (v___x_1698_ == 0)
{
lean_object* v_val_1699_; lean_object* v___x_1701_; 
v_val_1699_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22___redArg(v___x_1665_, v_buckets_x27_1692_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 1, v_val_1699_);
lean_ctor_set(v___x_1687_, 0, v_size_x27_1690_);
v___x_1701_ = v___x_1687_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_size_x27_1690_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v_val_1699_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
else
{
lean_object* v___x_1704_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 1, v_buckets_x27_1692_);
lean_ctor_set(v___x_1687_, 0, v_size_x27_1690_);
v___x_1704_ = v___x_1687_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_size_x27_1690_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v_buckets_x27_1692_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
else
{
lean_dec(v_b_1668_);
lean_dec(v_a_1667_);
return v_m_1666_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13___redArg___boxed(lean_object* v___x_1709_, lean_object* v_m_1710_, lean_object* v_a_1711_, lean_object* v_b_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13___redArg(v___x_1709_, v_m_1710_, v_a_1711_, v_b_1712_);
lean_dec(v___x_1709_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg(lean_object* v_acc_1717_, lean_object* v_decls_1718_, lean_object* v_idx_1719_, lean_object* v_a_1720_){
_start:
{
lean_object* v___x_1721_; uint8_t v___x_1722_; 
v___x_1721_ = lean_array_get_size(v_decls_1718_);
v___x_1722_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12___redArg(v___x_1721_, v_a_1720_, v_idx_1719_);
if (v___x_1722_ == 0)
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1723_ = lean_box(0);
lean_inc(v_idx_1719_);
v___x_1724_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13___redArg(v___x_1721_, v_a_1720_, v_idx_1719_, v___x_1723_);
v___x_1725_ = lean_array_fget_borrowed(v_decls_1718_, v_idx_1719_);
if (lean_obj_tag(v___x_1725_) == 2)
{
lean_object* v_l_1726_; lean_object* v_r_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___y_1731_; uint8_t v___y_1732_; uint8_t v___y_1733_; uint8_t v___y_1757_; lean_object* v___x_1763_; lean_object* v___x_1764_; uint8_t v___x_1765_; 
v_l_1726_ = lean_ctor_get(v___x_1725_, 0);
v_r_1727_ = lean_ctor_get(v___x_1725_, 1);
v___x_1728_ = lean_unsigned_to_nat(1u);
v___x_1729_ = lean_nat_shiftr(v_l_1726_, v___x_1728_);
v___x_1763_ = lean_nat_land(v___x_1728_, v_l_1726_);
v___x_1764_ = lean_unsigned_to_nat(0u);
v___x_1765_ = lean_nat_dec_eq(v___x_1763_, v___x_1764_);
lean_dec(v___x_1763_);
if (v___x_1765_ == 0)
{
uint8_t v___x_1766_; 
v___x_1766_ = 1;
v___y_1757_ = v___x_1766_;
goto v___jp_1756_;
}
else
{
v___y_1757_ = v___x_1722_;
goto v___jp_1756_;
}
v___jp_1730_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v_fst_1753_; lean_object* v_snd_1754_; 
v___x_1734_ = l_Nat_reprFast(v_idx_1719_);
v___x_1735_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__0));
lean_inc_ref(v___x_1734_);
v___x_1736_ = lean_string_append(v___x_1734_, v___x_1735_);
lean_inc(v___x_1729_);
v___x_1737_ = l_Nat_reprFast(v___x_1729_);
v___x_1738_ = lean_string_append(v___x_1736_, v___x_1737_);
lean_dec_ref(v___x_1737_);
v___x_1739_ = l_Std_Sat_AIG_toGraphviz_invEdgeStyle(v___y_1732_);
v___x_1740_ = lean_string_append(v___x_1738_, v___x_1739_);
lean_dec_ref(v___x_1739_);
v___x_1741_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__1));
v___x_1742_ = lean_string_append(v___x_1740_, v___x_1741_);
v___x_1743_ = lean_string_append(v___x_1742_, v___x_1734_);
lean_dec_ref(v___x_1734_);
v___x_1744_ = lean_string_append(v___x_1743_, v___x_1735_);
lean_inc(v___y_1731_);
v___x_1745_ = l_Nat_reprFast(v___y_1731_);
v___x_1746_ = lean_string_append(v___x_1744_, v___x_1745_);
lean_dec_ref(v___x_1745_);
v___x_1747_ = l_Std_Sat_AIG_toGraphviz_invEdgeStyle(v___y_1733_);
v___x_1748_ = lean_string_append(v___x_1746_, v___x_1747_);
lean_dec_ref(v___x_1747_);
v___x_1749_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___closed__2));
v___x_1750_ = lean_string_append(v___x_1748_, v___x_1749_);
v___x_1751_ = lean_string_append(v_acc_1717_, v___x_1750_);
lean_dec_ref(v___x_1750_);
v___x_1752_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg(v___x_1751_, v_decls_1718_, v___x_1729_, v___x_1724_);
v_fst_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_fst_1753_);
v_snd_1754_ = lean_ctor_get(v___x_1752_, 1);
lean_inc(v_snd_1754_);
lean_dec_ref(v___x_1752_);
v_acc_1717_ = v_fst_1753_;
v_idx_1719_ = v___y_1731_;
v_a_1720_ = v_snd_1754_;
goto _start;
}
v___jp_1756_:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; uint8_t v___x_1761_; 
v___x_1758_ = lean_nat_shiftr(v_r_1727_, v___x_1728_);
v___x_1759_ = lean_nat_land(v___x_1728_, v_r_1727_);
v___x_1760_ = lean_unsigned_to_nat(0u);
v___x_1761_ = lean_nat_dec_eq(v___x_1759_, v___x_1760_);
lean_dec(v___x_1759_);
if (v___x_1761_ == 0)
{
uint8_t v___x_1762_; 
v___x_1762_ = 1;
v___y_1731_ = v___x_1758_;
v___y_1732_ = v___y_1757_;
v___y_1733_ = v___x_1762_;
goto v___jp_1730_;
}
else
{
v___y_1731_ = v___x_1758_;
v___y_1732_ = v___y_1757_;
v___y_1733_ = v___x_1722_;
goto v___jp_1730_;
}
}
}
else
{
lean_object* v___x_1767_; 
lean_dec(v_idx_1719_);
v___x_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1767_, 0, v_acc_1717_);
lean_ctor_set(v___x_1767_, 1, v___x_1724_);
return v___x_1767_;
}
}
else
{
lean_object* v___x_1768_; 
lean_dec(v_idx_1719_);
v___x_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1768_, 0, v_acc_1717_);
lean_ctor_set(v___x_1768_, 1, v_a_1720_);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg___boxed(lean_object* v_acc_1769_, lean_object* v_decls_1770_, lean_object* v_idx_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg(v_acc_1769_, v_decls_1770_, v_idx_1771_, v_a_1772_);
lean_dec_ref(v_decls_1770_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7(lean_object* v_decls_1782_, lean_object* v_idx_1783_){
_start:
{
lean_object* v___x_1784_; 
v___x_1784_ = lean_array_fget_borrowed(v_decls_1782_, v_idx_1783_);
switch(lean_obj_tag(v___x_1784_))
{
case 0:
{
lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1785_ = l_Nat_reprFast(v_idx_1783_);
v___x_1786_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__0));
v___x_1787_ = lean_string_append(v___x_1785_, v___x_1786_);
v___x_1788_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__1));
v___x_1789_ = lean_string_append(v___x_1787_, v___x_1788_);
v___x_1790_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__2));
v___x_1791_ = lean_string_append(v___x_1789_, v___x_1790_);
return v___x_1791_;
}
case 1:
{
lean_object* v_idx_1792_; lean_object* v_var_1793_; lean_object* v_idx_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v_idx_1792_ = lean_ctor_get(v___x_1784_, 0);
v_var_1793_ = lean_ctor_get(v_idx_1792_, 0);
v_idx_1794_ = lean_ctor_get(v_idx_1792_, 2);
v___x_1795_ = l_Nat_reprFast(v_idx_1783_);
v___x_1796_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__0));
v___x_1797_ = lean_string_append(v___x_1795_, v___x_1796_);
v___x_1798_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__3));
lean_inc(v_var_1793_);
v___x_1799_ = l_Nat_reprFast(v_var_1793_);
v___x_1800_ = lean_string_append(v___x_1798_, v___x_1799_);
lean_dec_ref(v___x_1799_);
v___x_1801_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__4));
v___x_1802_ = lean_string_append(v___x_1800_, v___x_1801_);
lean_inc(v_idx_1794_);
v___x_1803_ = l_Nat_reprFast(v_idx_1794_);
v___x_1804_ = lean_string_append(v___x_1802_, v___x_1803_);
lean_dec_ref(v___x_1803_);
v___x_1805_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__5));
v___x_1806_ = lean_string_append(v___x_1804_, v___x_1805_);
v___x_1807_ = lean_string_append(v___x_1797_, v___x_1806_);
lean_dec_ref(v___x_1806_);
v___x_1808_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__6));
v___x_1809_ = lean_string_append(v___x_1807_, v___x_1808_);
return v___x_1809_;
}
default: 
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1810_ = l_Nat_reprFast(v_idx_1783_);
v___x_1811_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__0));
lean_inc_ref(v___x_1810_);
v___x_1812_ = lean_string_append(v___x_1810_, v___x_1811_);
v___x_1813_ = lean_string_append(v___x_1812_, v___x_1810_);
lean_dec_ref(v___x_1810_);
v___x_1814_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___closed__7));
v___x_1815_ = lean_string_append(v___x_1813_, v___x_1814_);
return v___x_1815_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7___boxed(lean_object* v_decls_1816_, lean_object* v_idx_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7(v_decls_1816_, v_idx_1817_);
lean_dec_ref(v_decls_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__9(lean_object* v_decls_1819_, lean_object* v_x_1820_, lean_object* v_x_1821_){
_start:
{
if (lean_obj_tag(v_x_1821_) == 0)
{
return v_x_1820_;
}
else
{
lean_object* v_key_1822_; lean_object* v_tail_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v_key_1822_ = lean_ctor_get(v_x_1821_, 0);
lean_inc(v_key_1822_);
v_tail_1823_ = lean_ctor_get(v_x_1821_, 2);
lean_inc(v_tail_1823_);
lean_dec_ref_known(v_x_1821_, 3);
v___x_1824_ = l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__7(v_decls_1819_, v_key_1822_);
v___x_1825_ = lean_string_append(v_x_1820_, v___x_1824_);
lean_dec_ref(v___x_1824_);
v_x_1820_ = v___x_1825_;
v_x_1821_ = v_tail_1823_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__9___boxed(lean_object* v_decls_1827_, lean_object* v_x_1828_, lean_object* v_x_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__9(v_decls_1827_, v_x_1828_, v_x_1829_);
lean_dec_ref(v_decls_1827_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__10(lean_object* v_decls_1831_, lean_object* v_as_1832_, size_t v_i_1833_, size_t v_stop_1834_, lean_object* v_b_1835_){
_start:
{
uint8_t v___x_1836_; 
v___x_1836_ = lean_usize_dec_eq(v_i_1833_, v_stop_1834_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; lean_object* v___x_1838_; size_t v___x_1839_; size_t v___x_1840_; 
v___x_1837_ = lean_array_uget_borrowed(v_as_1832_, v_i_1833_);
lean_inc(v___x_1837_);
v___x_1838_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__9(v_decls_1831_, v_b_1835_, v___x_1837_);
v___x_1839_ = ((size_t)1ULL);
v___x_1840_ = lean_usize_add(v_i_1833_, v___x_1839_);
v_i_1833_ = v___x_1840_;
v_b_1835_ = v___x_1838_;
goto _start;
}
else
{
return v_b_1835_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__10___boxed(lean_object* v_decls_1842_, lean_object* v_as_1843_, lean_object* v_i_1844_, lean_object* v_stop_1845_, lean_object* v_b_1846_){
_start:
{
size_t v_i_boxed_1847_; size_t v_stop_boxed_1848_; lean_object* v_res_1849_; 
v_i_boxed_1847_ = lean_unbox_usize(v_i_1844_);
lean_dec(v_i_1844_);
v_stop_boxed_1848_ = lean_unbox_usize(v_stop_1845_);
lean_dec(v_stop_1845_);
v_res_1849_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__10(v_decls_1842_, v_as_1843_, v_i_boxed_1847_, v_stop_boxed_1848_, v_b_1846_);
lean_dec_ref(v_as_1843_);
lean_dec_ref(v_decls_1842_);
return v_res_1849_;
}
}
static lean_object* _init_l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1850_ = lean_box(0);
v___x_1851_ = lean_unsigned_to_nat(16u);
v___x_1852_ = lean_mk_array(v___x_1851_, v___x_1850_);
return v___x_1852_;
}
}
static lean_object* _init_l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1853_ = lean_obj_once(&l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__0, &l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__0_once, _init_l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__0);
v___x_1854_ = lean_unsigned_to_nat(0u);
v___x_1855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1854_);
lean_ctor_set(v___x_1855_, 1, v___x_1853_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(lean_object* v_entry_1858_){
_start:
{
lean_object* v_aig_1859_; lean_object* v_ref_1860_; lean_object* v_decls_1861_; lean_object* v_gate_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v_fst_1867_; lean_object* v_snd_1868_; lean_object* v___y_1870_; lean_object* v_buckets_1876_; lean_object* v___x_1877_; uint8_t v___x_1878_; 
v_aig_1859_ = lean_ctor_get(v_entry_1858_, 0);
lean_inc_ref(v_aig_1859_);
v_ref_1860_ = lean_ctor_get(v_entry_1858_, 1);
lean_inc_ref(v_ref_1860_);
lean_dec_ref(v_entry_1858_);
v_decls_1861_ = lean_ctor_get(v_aig_1859_, 0);
lean_inc_ref(v_decls_1861_);
lean_dec_ref(v_aig_1859_);
v_gate_1862_ = lean_ctor_get(v_ref_1860_, 0);
lean_inc(v_gate_1862_);
lean_dec_ref(v_ref_1860_);
v___x_1863_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
v___x_1864_ = lean_unsigned_to_nat(0u);
v___x_1865_ = lean_obj_once(&l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__1, &l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__1_once, _init_l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__1);
v___x_1866_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg(v___x_1863_, v_decls_1861_, v_gate_1862_, v___x_1865_);
v_fst_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_fst_1867_);
v_snd_1868_ = lean_ctor_get(v___x_1866_, 1);
lean_inc(v_snd_1868_);
lean_dec_ref(v___x_1866_);
v_buckets_1876_ = lean_ctor_get(v_snd_1868_, 1);
lean_inc_ref(v_buckets_1876_);
lean_dec(v_snd_1868_);
v___x_1877_ = lean_array_get_size(v_buckets_1876_);
v___x_1878_ = lean_nat_dec_lt(v___x_1864_, v___x_1877_);
if (v___x_1878_ == 0)
{
lean_dec_ref(v_buckets_1876_);
lean_dec_ref(v_decls_1861_);
v___y_1870_ = v___x_1863_;
goto v___jp_1869_;
}
else
{
size_t v___x_1879_; size_t v___x_1880_; lean_object* v___x_1881_; 
v___x_1879_ = ((size_t)0ULL);
v___x_1880_ = lean_usize_of_nat(v___x_1877_);
v___x_1881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__10(v_decls_1861_, v_buckets_1876_, v___x_1879_, v___x_1880_, v___x_1863_);
lean_dec_ref(v_buckets_1876_);
lean_dec_ref(v_decls_1861_);
v___y_1870_ = v___x_1881_;
goto v___jp_1869_;
}
v___jp_1869_:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1871_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__2));
v___x_1872_ = lean_string_append(v___x_1871_, v___y_1870_);
lean_dec_ref(v___y_1870_);
v___x_1873_ = lean_string_append(v___x_1872_, v_fst_1867_);
lean_dec(v_fst_1867_);
v___x_1874_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___closed__3));
v___x_1875_ = lean_string_append(v___x_1873_, v___x_1874_);
return v___x_1875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(lean_object* v_cls_1884_, lean_object* v_msg_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v_ref_1891_; lean_object* v___x_1892_; lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1937_; 
v_ref_1891_ = lean_ctor_get(v___y_1888_, 2);
v___x_1892_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__5(v_msg_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1895_ = v___x_1892_;
v_isShared_1896_ = v_isSharedCheck_1937_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1892_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1937_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1897_; lean_object* v_traceState_1898_; lean_object* v_env_1899_; lean_object* v_nextMacroScope_1900_; lean_object* v_ngen_1901_; lean_object* v_auxDeclNGen_1902_; lean_object* v_cache_1903_; lean_object* v_messages_1904_; lean_object* v_infoState_1905_; lean_object* v_snapshotTasks_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1936_; 
v___x_1897_ = lean_st_ref_take(v___y_1889_);
v_traceState_1898_ = lean_ctor_get(v___x_1897_, 4);
v_env_1899_ = lean_ctor_get(v___x_1897_, 0);
v_nextMacroScope_1900_ = lean_ctor_get(v___x_1897_, 1);
v_ngen_1901_ = lean_ctor_get(v___x_1897_, 2);
v_auxDeclNGen_1902_ = lean_ctor_get(v___x_1897_, 3);
v_cache_1903_ = lean_ctor_get(v___x_1897_, 5);
v_messages_1904_ = lean_ctor_get(v___x_1897_, 6);
v_infoState_1905_ = lean_ctor_get(v___x_1897_, 7);
v_snapshotTasks_1906_ = lean_ctor_get(v___x_1897_, 8);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1908_ = v___x_1897_;
v_isShared_1909_ = v_isSharedCheck_1936_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_snapshotTasks_1906_);
lean_inc(v_infoState_1905_);
lean_inc(v_messages_1904_);
lean_inc(v_cache_1903_);
lean_inc(v_traceState_1898_);
lean_inc(v_auxDeclNGen_1902_);
lean_inc(v_ngen_1901_);
lean_inc(v_nextMacroScope_1900_);
lean_inc(v_env_1899_);
lean_dec(v___x_1897_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1936_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
uint64_t v_tid_1910_; lean_object* v_traces_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1935_; 
v_tid_1910_ = lean_ctor_get_uint64(v_traceState_1898_, sizeof(void*)*1);
v_traces_1911_ = lean_ctor_get(v_traceState_1898_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_traceState_1898_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1913_ = v_traceState_1898_;
v_isShared_1914_ = v_isSharedCheck_1935_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_traces_1911_);
lean_dec(v_traceState_1898_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1935_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; double v___x_1917_; uint8_t v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1926_; 
v___x_1915_ = lean_box(0);
v___x_1916_ = lean_box(0);
v___x_1917_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0);
v___x_1918_ = 0;
v___x_1919_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
v___x_1920_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1920_, 0, v_cls_1884_);
lean_ctor_set(v___x_1920_, 1, v___x_1916_);
lean_ctor_set(v___x_1920_, 2, v___x_1919_);
lean_ctor_set_float(v___x_1920_, sizeof(void*)*3, v___x_1917_);
lean_ctor_set_float(v___x_1920_, sizeof(void*)*3 + 8, v___x_1917_);
lean_ctor_set_uint8(v___x_1920_, sizeof(void*)*3 + 16, v___x_1918_);
v___x_1921_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___closed__0));
v___x_1922_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1920_);
lean_ctor_set(v___x_1922_, 1, v_a_1893_);
lean_ctor_set(v___x_1922_, 2, v___x_1921_);
lean_inc(v_ref_1891_);
v___x_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1923_, 0, v_ref_1891_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
v___x_1924_ = l_Lean_PersistentArray_push___redArg(v_traces_1911_, v___x_1923_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 0, v___x_1924_);
v___x_1926_ = v___x_1913_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1924_);
lean_ctor_set_uint64(v_reuseFailAlloc_1934_, sizeof(void*)*1, v_tid_1910_);
v___x_1926_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
lean_object* v___x_1928_; 
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 4, v___x_1926_);
v___x_1928_ = v___x_1908_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_env_1899_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_nextMacroScope_1900_);
lean_ctor_set(v_reuseFailAlloc_1933_, 2, v_ngen_1901_);
lean_ctor_set(v_reuseFailAlloc_1933_, 3, v_auxDeclNGen_1902_);
lean_ctor_set(v_reuseFailAlloc_1933_, 4, v___x_1926_);
lean_ctor_set(v_reuseFailAlloc_1933_, 5, v_cache_1903_);
lean_ctor_set(v_reuseFailAlloc_1933_, 6, v_messages_1904_);
lean_ctor_set(v_reuseFailAlloc_1933_, 7, v_infoState_1905_);
lean_ctor_set(v_reuseFailAlloc_1933_, 8, v_snapshotTasks_1906_);
v___x_1928_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1931_; 
v___x_1929_ = lean_st_ref_put(v___y_1889_, v___x_1928_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v___x_1915_);
v___x_1931_ = v___x_1895_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1915_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___boxed(lean_object* v_cls_1938_, lean_object* v_msg_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v_cls_1938_, v_msg_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
return v_res_1945_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2_spec__3(lean_object* v_e_1946_){
_start:
{
if (lean_obj_tag(v_e_1946_) == 0)
{
uint8_t v___x_1947_; 
v___x_1947_ = 2;
return v___x_1947_;
}
else
{
uint8_t v___x_1948_; 
v___x_1948_ = 0;
return v___x_1948_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2_spec__3___boxed(lean_object* v_e_1949_){
_start:
{
uint8_t v_res_1950_; lean_object* v_r_1951_; 
v_res_1950_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2_spec__3(v_e_1949_);
lean_dec_ref(v_e_1949_);
v_r_1951_ = lean_box(v_res_1950_);
return v_r_1951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(lean_object* v_cls_1952_, uint8_t v_collapsed_1953_, lean_object* v_tag_1954_, lean_object* v_opts_1955_, uint8_t v_clsEnabled_1956_, lean_object* v_oldTraces_1957_, lean_object* v_msg_1958_, lean_object* v_resStartStop_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_){
_start:
{
lean_object* v_fst_1965_; lean_object* v_snd_1966_; lean_object* v___y_1968_; lean_object* v___y_1969_; lean_object* v_data_1970_; lean_object* v_fst_1981_; lean_object* v_snd_1982_; lean_object* v___x_1983_; uint8_t v___x_1984_; lean_object* v___y_1986_; lean_object* v_a_1987_; uint8_t v___y_2002_; double v___y_2033_; 
v_fst_1965_ = lean_ctor_get(v_resStartStop_1959_, 0);
lean_inc(v_fst_1965_);
v_snd_1966_ = lean_ctor_get(v_resStartStop_1959_, 1);
lean_inc(v_snd_1966_);
lean_dec_ref(v_resStartStop_1959_);
v_fst_1981_ = lean_ctor_get(v_snd_1966_, 0);
lean_inc(v_fst_1981_);
v_snd_1982_ = lean_ctor_get(v_snd_1966_, 1);
lean_inc(v_snd_1982_);
lean_dec(v_snd_1966_);
v___x_1983_ = l_Lean_trace_profiler;
v___x_1984_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_1955_, v___x_1983_);
if (v___x_1984_ == 0)
{
v___y_2002_ = v___x_1984_;
goto v___jp_2001_;
}
else
{
lean_object* v___x_2038_; uint8_t v___x_2039_; 
v___x_2038_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2039_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_1955_, v___x_2038_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; lean_object* v___x_2041_; double v___x_2042_; double v___x_2043_; double v___x_2044_; 
v___x_2040_ = l_Lean_trace_profiler_threshold;
v___x_2041_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_1955_, v___x_2040_);
v___x_2042_ = lean_float_of_nat(v___x_2041_);
v___x_2043_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3);
v___x_2044_ = lean_float_div(v___x_2042_, v___x_2043_);
v___y_2033_ = v___x_2044_;
goto v___jp_2032_;
}
else
{
lean_object* v___x_2045_; lean_object* v___x_2046_; double v___x_2047_; 
v___x_2045_ = l_Lean_trace_profiler_threshold;
v___x_2046_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_1955_, v___x_2045_);
v___x_2047_ = lean_float_of_nat(v___x_2046_);
v___y_2033_ = v___x_2047_;
goto v___jp_2032_;
}
}
v___jp_1967_:
{
lean_object* v___x_1971_; 
lean_inc(v___y_1969_);
v___x_1971_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(v_oldTraces_1957_, v_data_1970_, v___y_1969_, v___y_1968_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v___x_1972_; 
lean_dec_ref_known(v___x_1971_, 1);
v___x_1972_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_1965_);
return v___x_1972_;
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
lean_dec(v_fst_1965_);
v_a_1973_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1971_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1971_);
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
v___jp_1985_:
{
uint8_t v_result_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; double v___x_1991_; lean_object* v_data_1992_; 
v_result_1988_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2_spec__3(v_fst_1965_);
v___x_1989_ = lean_box(v_result_1988_);
v___x_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1989_);
v___x_1991_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0);
lean_inc_ref(v_tag_1954_);
lean_inc_ref(v___x_1990_);
lean_inc(v_cls_1952_);
v_data_1992_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1992_, 0, v_cls_1952_);
lean_ctor_set(v_data_1992_, 1, v___x_1990_);
lean_ctor_set(v_data_1992_, 2, v_tag_1954_);
lean_ctor_set_float(v_data_1992_, sizeof(void*)*3, v___x_1991_);
lean_ctor_set_float(v_data_1992_, sizeof(void*)*3 + 8, v___x_1991_);
lean_ctor_set_uint8(v_data_1992_, sizeof(void*)*3 + 16, v_collapsed_1953_);
if (v___x_1984_ == 0)
{
lean_dec_ref_known(v___x_1990_, 1);
lean_dec(v_snd_1982_);
lean_dec(v_fst_1981_);
lean_dec_ref(v_tag_1954_);
lean_dec(v_cls_1952_);
v___y_1968_ = v_a_1987_;
v___y_1969_ = v___y_1986_;
v_data_1970_ = v_data_1992_;
goto v___jp_1967_;
}
else
{
lean_object* v_data_1993_; double v___x_1994_; double v___x_1995_; 
lean_dec_ref_known(v_data_1992_, 3);
v_data_1993_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1993_, 0, v_cls_1952_);
lean_ctor_set(v_data_1993_, 1, v___x_1990_);
lean_ctor_set(v_data_1993_, 2, v_tag_1954_);
v___x_1994_ = lean_unbox_float(v_fst_1981_);
lean_dec(v_fst_1981_);
lean_ctor_set_float(v_data_1993_, sizeof(void*)*3, v___x_1994_);
v___x_1995_ = lean_unbox_float(v_snd_1982_);
lean_dec(v_snd_1982_);
lean_ctor_set_float(v_data_1993_, sizeof(void*)*3 + 8, v___x_1995_);
lean_ctor_set_uint8(v_data_1993_, sizeof(void*)*3 + 16, v_collapsed_1953_);
v___y_1968_ = v_a_1987_;
v___y_1969_ = v___y_1986_;
v_data_1970_ = v_data_1993_;
goto v___jp_1967_;
}
}
v___jp_1996_:
{
lean_object* v_ref_1997_; lean_object* v___x_1998_; 
v_ref_1997_ = lean_ctor_get(v___y_1962_, 2);
lean_inc(v___y_1963_);
lean_inc_ref(v___y_1962_);
lean_inc(v___y_1961_);
lean_inc_ref(v___y_1960_);
lean_inc(v_fst_1965_);
v___x_1998_ = lean_apply_6(v_msg_1958_, v_fst_1965_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, lean_box(0));
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1998_, 1);
v___y_1986_ = v_ref_1997_;
v_a_1987_ = v_a_1999_;
goto v___jp_1985_;
}
else
{
lean_object* v___x_2000_; 
lean_dec_ref_known(v___x_1998_, 1);
v___x_2000_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2);
v___y_1986_ = v_ref_1997_;
v_a_1987_ = v___x_2000_;
goto v___jp_1985_;
}
}
v___jp_2001_:
{
if (v_clsEnabled_1956_ == 0)
{
if (v___y_2002_ == 0)
{
lean_object* v___x_2003_; lean_object* v_traceState_2004_; lean_object* v_env_2005_; lean_object* v_nextMacroScope_2006_; lean_object* v_ngen_2007_; lean_object* v_auxDeclNGen_2008_; lean_object* v_cache_2009_; lean_object* v_messages_2010_; lean_object* v_infoState_2011_; lean_object* v_snapshotTasks_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2031_; 
lean_dec(v_snd_1982_);
lean_dec(v_fst_1981_);
lean_dec_ref(v_msg_1958_);
lean_dec_ref(v_tag_1954_);
lean_dec(v_cls_1952_);
v___x_2003_ = lean_st_ref_take(v___y_1963_);
v_traceState_2004_ = lean_ctor_get(v___x_2003_, 4);
v_env_2005_ = lean_ctor_get(v___x_2003_, 0);
v_nextMacroScope_2006_ = lean_ctor_get(v___x_2003_, 1);
v_ngen_2007_ = lean_ctor_get(v___x_2003_, 2);
v_auxDeclNGen_2008_ = lean_ctor_get(v___x_2003_, 3);
v_cache_2009_ = lean_ctor_get(v___x_2003_, 5);
v_messages_2010_ = lean_ctor_get(v___x_2003_, 6);
v_infoState_2011_ = lean_ctor_get(v___x_2003_, 7);
v_snapshotTasks_2012_ = lean_ctor_get(v___x_2003_, 8);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2014_ = v___x_2003_;
v_isShared_2015_ = v_isSharedCheck_2031_;
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
v_isShared_2015_ = v_isSharedCheck_2031_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
uint64_t v_tid_2016_; lean_object* v_traces_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2030_; 
v_tid_2016_ = lean_ctor_get_uint64(v_traceState_2004_, sizeof(void*)*1);
v_traces_2017_ = lean_ctor_get(v_traceState_2004_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v_traceState_2004_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2019_ = v_traceState_2004_;
v_isShared_2020_ = v_isSharedCheck_2030_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_traces_2017_);
lean_dec(v_traceState_2004_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2030_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2021_; lean_object* v___x_2023_; 
v___x_2021_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1957_, v_traces_2017_);
lean_dec_ref(v_traces_2017_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2021_);
v___x_2023_ = v___x_2019_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2021_);
lean_ctor_set_uint64(v_reuseFailAlloc_2029_, sizeof(void*)*1, v_tid_2016_);
v___x_2023_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
lean_object* v___x_2025_; 
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 4, v___x_2023_);
v___x_2025_ = v___x_2014_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_env_2005_);
lean_ctor_set(v_reuseFailAlloc_2028_, 1, v_nextMacroScope_2006_);
lean_ctor_set(v_reuseFailAlloc_2028_, 2, v_ngen_2007_);
lean_ctor_set(v_reuseFailAlloc_2028_, 3, v_auxDeclNGen_2008_);
lean_ctor_set(v_reuseFailAlloc_2028_, 4, v___x_2023_);
lean_ctor_set(v_reuseFailAlloc_2028_, 5, v_cache_2009_);
lean_ctor_set(v_reuseFailAlloc_2028_, 6, v_messages_2010_);
lean_ctor_set(v_reuseFailAlloc_2028_, 7, v_infoState_2011_);
lean_ctor_set(v_reuseFailAlloc_2028_, 8, v_snapshotTasks_2012_);
v___x_2025_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = lean_st_ref_put(v___y_1963_, v___x_2025_);
v___x_2027_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_1965_);
return v___x_2027_;
}
}
}
}
}
else
{
goto v___jp_1996_;
}
}
else
{
goto v___jp_1996_;
}
}
v___jp_2032_:
{
double v___x_2034_; double v___x_2035_; double v___x_2036_; uint8_t v___x_2037_; 
v___x_2034_ = lean_unbox_float(v_snd_1982_);
v___x_2035_ = lean_unbox_float(v_fst_1981_);
v___x_2036_ = lean_float_sub(v___x_2034_, v___x_2035_);
v___x_2037_ = lean_float_decLt(v___y_2033_, v___x_2036_);
v___y_2002_ = v___x_2037_;
goto v___jp_2001_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___boxed(lean_object* v_cls_2048_, lean_object* v_collapsed_2049_, lean_object* v_tag_2050_, lean_object* v_opts_2051_, lean_object* v_clsEnabled_2052_, lean_object* v_oldTraces_2053_, lean_object* v_msg_2054_, lean_object* v_resStartStop_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
uint8_t v_collapsed_boxed_2061_; uint8_t v_clsEnabled_boxed_2062_; lean_object* v_res_2063_; 
v_collapsed_boxed_2061_ = lean_unbox(v_collapsed_2049_);
v_clsEnabled_boxed_2062_ = lean_unbox(v_clsEnabled_2052_);
v_res_2063_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v_cls_2048_, v_collapsed_boxed_2061_, v_tag_2050_, v_opts_2051_, v_clsEnabled_boxed_2062_, v_oldTraces_2053_, v_msg_2054_, v_resStartStop_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
lean_dec(v___y_2059_);
lean_dec_ref(v___y_2058_);
lean_dec(v___y_2057_);
lean_dec_ref(v___y_2056_);
lean_dec_ref(v_opts_2051_);
return v_res_2063_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5(lean_object* v_e_2064_){
_start:
{
if (lean_obj_tag(v_e_2064_) == 0)
{
uint8_t v___x_2065_; 
v___x_2065_ = 2;
return v___x_2065_;
}
else
{
uint8_t v___x_2066_; 
v___x_2066_ = 0;
return v___x_2066_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5___boxed(lean_object* v_e_2067_){
_start:
{
uint8_t v_res_2068_; lean_object* v_r_2069_; 
v_res_2068_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5(v_e_2067_);
lean_dec_ref(v_e_2067_);
v_r_2069_ = lean_box(v_res_2068_);
return v_r_2069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(lean_object* v_cls_2070_, uint8_t v_collapsed_2071_, lean_object* v_tag_2072_, lean_object* v_opts_2073_, uint8_t v_clsEnabled_2074_, lean_object* v_oldTraces_2075_, lean_object* v_msg_2076_, lean_object* v_resStartStop_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
lean_object* v_fst_2083_; lean_object* v_snd_2084_; lean_object* v___y_2086_; lean_object* v___y_2087_; lean_object* v_data_2088_; lean_object* v_fst_2099_; lean_object* v_snd_2100_; lean_object* v___x_2101_; uint8_t v___x_2102_; lean_object* v___y_2104_; lean_object* v_a_2105_; uint8_t v___y_2120_; double v___y_2151_; 
v_fst_2083_ = lean_ctor_get(v_resStartStop_2077_, 0);
lean_inc(v_fst_2083_);
v_snd_2084_ = lean_ctor_get(v_resStartStop_2077_, 1);
lean_inc(v_snd_2084_);
lean_dec_ref(v_resStartStop_2077_);
v_fst_2099_ = lean_ctor_get(v_snd_2084_, 0);
lean_inc(v_fst_2099_);
v_snd_2100_ = lean_ctor_get(v_snd_2084_, 1);
lean_inc(v_snd_2100_);
lean_dec(v_snd_2084_);
v___x_2101_ = l_Lean_trace_profiler;
v___x_2102_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_2073_, v___x_2101_);
if (v___x_2102_ == 0)
{
v___y_2120_ = v___x_2102_;
goto v___jp_2119_;
}
else
{
lean_object* v___x_2156_; uint8_t v___x_2157_; 
v___x_2156_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2157_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_2073_, v___x_2156_);
if (v___x_2157_ == 0)
{
lean_object* v___x_2158_; lean_object* v___x_2159_; double v___x_2160_; double v___x_2161_; double v___x_2162_; 
v___x_2158_ = l_Lean_trace_profiler_threshold;
v___x_2159_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_2073_, v___x_2158_);
v___x_2160_ = lean_float_of_nat(v___x_2159_);
v___x_2161_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3);
v___x_2162_ = lean_float_div(v___x_2160_, v___x_2161_);
v___y_2151_ = v___x_2162_;
goto v___jp_2150_;
}
else
{
lean_object* v___x_2163_; lean_object* v___x_2164_; double v___x_2165_; 
v___x_2163_ = l_Lean_trace_profiler_threshold;
v___x_2164_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_2073_, v___x_2163_);
v___x_2165_ = lean_float_of_nat(v___x_2164_);
v___y_2151_ = v___x_2165_;
goto v___jp_2150_;
}
}
v___jp_2085_:
{
lean_object* v___x_2089_; 
lean_inc(v___y_2086_);
v___x_2089_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(v_oldTraces_2075_, v_data_2088_, v___y_2086_, v___y_2087_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v___x_2090_; 
lean_dec_ref_known(v___x_2089_, 1);
v___x_2090_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_2083_);
return v___x_2090_;
}
else
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2098_; 
lean_dec(v_fst_2083_);
v_a_2091_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2093_ = v___x_2089_;
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_2089_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2091_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
v___jp_2103_:
{
uint8_t v_result_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; double v___x_2109_; lean_object* v_data_2110_; 
v_result_2106_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5(v_fst_2083_);
v___x_2107_ = lean_box(v_result_2106_);
v___x_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
v___x_2109_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0);
lean_inc_ref(v_tag_2072_);
lean_inc_ref(v___x_2108_);
lean_inc(v_cls_2070_);
v_data_2110_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2110_, 0, v_cls_2070_);
lean_ctor_set(v_data_2110_, 1, v___x_2108_);
lean_ctor_set(v_data_2110_, 2, v_tag_2072_);
lean_ctor_set_float(v_data_2110_, sizeof(void*)*3, v___x_2109_);
lean_ctor_set_float(v_data_2110_, sizeof(void*)*3 + 8, v___x_2109_);
lean_ctor_set_uint8(v_data_2110_, sizeof(void*)*3 + 16, v_collapsed_2071_);
if (v___x_2102_ == 0)
{
lean_dec_ref_known(v___x_2108_, 1);
lean_dec(v_snd_2100_);
lean_dec(v_fst_2099_);
lean_dec_ref(v_tag_2072_);
lean_dec(v_cls_2070_);
v___y_2086_ = v___y_2104_;
v___y_2087_ = v_a_2105_;
v_data_2088_ = v_data_2110_;
goto v___jp_2085_;
}
else
{
lean_object* v_data_2111_; double v___x_2112_; double v___x_2113_; 
lean_dec_ref_known(v_data_2110_, 3);
v_data_2111_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2111_, 0, v_cls_2070_);
lean_ctor_set(v_data_2111_, 1, v___x_2108_);
lean_ctor_set(v_data_2111_, 2, v_tag_2072_);
v___x_2112_ = lean_unbox_float(v_fst_2099_);
lean_dec(v_fst_2099_);
lean_ctor_set_float(v_data_2111_, sizeof(void*)*3, v___x_2112_);
v___x_2113_ = lean_unbox_float(v_snd_2100_);
lean_dec(v_snd_2100_);
lean_ctor_set_float(v_data_2111_, sizeof(void*)*3 + 8, v___x_2113_);
lean_ctor_set_uint8(v_data_2111_, sizeof(void*)*3 + 16, v_collapsed_2071_);
v___y_2086_ = v___y_2104_;
v___y_2087_ = v_a_2105_;
v_data_2088_ = v_data_2111_;
goto v___jp_2085_;
}
}
v___jp_2114_:
{
lean_object* v_ref_2115_; lean_object* v___x_2116_; 
v_ref_2115_ = lean_ctor_get(v___y_2080_, 2);
lean_inc(v___y_2081_);
lean_inc_ref(v___y_2080_);
lean_inc(v___y_2079_);
lean_inc_ref(v___y_2078_);
lean_inc(v_fst_2083_);
v___x_2116_ = lean_apply_6(v_msg_2076_, v_fst_2083_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, lean_box(0));
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; 
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2117_);
lean_dec_ref_known(v___x_2116_, 1);
v___y_2104_ = v_ref_2115_;
v_a_2105_ = v_a_2117_;
goto v___jp_2103_;
}
else
{
lean_object* v___x_2118_; 
lean_dec_ref_known(v___x_2116_, 1);
v___x_2118_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2);
v___y_2104_ = v_ref_2115_;
v_a_2105_ = v___x_2118_;
goto v___jp_2103_;
}
}
v___jp_2119_:
{
if (v_clsEnabled_2074_ == 0)
{
if (v___y_2120_ == 0)
{
lean_object* v___x_2121_; lean_object* v_traceState_2122_; lean_object* v_env_2123_; lean_object* v_nextMacroScope_2124_; lean_object* v_ngen_2125_; lean_object* v_auxDeclNGen_2126_; lean_object* v_cache_2127_; lean_object* v_messages_2128_; lean_object* v_infoState_2129_; lean_object* v_snapshotTasks_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2149_; 
lean_dec(v_snd_2100_);
lean_dec(v_fst_2099_);
lean_dec_ref(v_msg_2076_);
lean_dec_ref(v_tag_2072_);
lean_dec(v_cls_2070_);
v___x_2121_ = lean_st_ref_take(v___y_2081_);
v_traceState_2122_ = lean_ctor_get(v___x_2121_, 4);
v_env_2123_ = lean_ctor_get(v___x_2121_, 0);
v_nextMacroScope_2124_ = lean_ctor_get(v___x_2121_, 1);
v_ngen_2125_ = lean_ctor_get(v___x_2121_, 2);
v_auxDeclNGen_2126_ = lean_ctor_get(v___x_2121_, 3);
v_cache_2127_ = lean_ctor_get(v___x_2121_, 5);
v_messages_2128_ = lean_ctor_get(v___x_2121_, 6);
v_infoState_2129_ = lean_ctor_get(v___x_2121_, 7);
v_snapshotTasks_2130_ = lean_ctor_get(v___x_2121_, 8);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2132_ = v___x_2121_;
v_isShared_2133_ = v_isSharedCheck_2149_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_snapshotTasks_2130_);
lean_inc(v_infoState_2129_);
lean_inc(v_messages_2128_);
lean_inc(v_cache_2127_);
lean_inc(v_traceState_2122_);
lean_inc(v_auxDeclNGen_2126_);
lean_inc(v_ngen_2125_);
lean_inc(v_nextMacroScope_2124_);
lean_inc(v_env_2123_);
lean_dec(v___x_2121_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2149_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
uint64_t v_tid_2134_; lean_object* v_traces_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2148_; 
v_tid_2134_ = lean_ctor_get_uint64(v_traceState_2122_, sizeof(void*)*1);
v_traces_2135_ = lean_ctor_get(v_traceState_2122_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v_traceState_2122_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2137_ = v_traceState_2122_;
v_isShared_2138_ = v_isSharedCheck_2148_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_traces_2135_);
lean_dec(v_traceState_2122_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2148_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2139_; lean_object* v___x_2141_; 
v___x_2139_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2075_, v_traces_2135_);
lean_dec_ref(v_traces_2135_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set(v___x_2137_, 0, v___x_2139_);
v___x_2141_ = v___x_2137_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2139_);
lean_ctor_set_uint64(v_reuseFailAlloc_2147_, sizeof(void*)*1, v_tid_2134_);
v___x_2141_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
lean_object* v___x_2143_; 
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 4, v___x_2141_);
v___x_2143_ = v___x_2132_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_env_2123_);
lean_ctor_set(v_reuseFailAlloc_2146_, 1, v_nextMacroScope_2124_);
lean_ctor_set(v_reuseFailAlloc_2146_, 2, v_ngen_2125_);
lean_ctor_set(v_reuseFailAlloc_2146_, 3, v_auxDeclNGen_2126_);
lean_ctor_set(v_reuseFailAlloc_2146_, 4, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2146_, 5, v_cache_2127_);
lean_ctor_set(v_reuseFailAlloc_2146_, 6, v_messages_2128_);
lean_ctor_set(v_reuseFailAlloc_2146_, 7, v_infoState_2129_);
lean_ctor_set(v_reuseFailAlloc_2146_, 8, v_snapshotTasks_2130_);
v___x_2143_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = lean_st_ref_put(v___y_2081_, v___x_2143_);
v___x_2145_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_2083_);
return v___x_2145_;
}
}
}
}
}
else
{
goto v___jp_2114_;
}
}
else
{
goto v___jp_2114_;
}
}
v___jp_2150_:
{
double v___x_2152_; double v___x_2153_; double v___x_2154_; uint8_t v___x_2155_; 
v___x_2152_ = lean_unbox_float(v_snd_2100_);
v___x_2153_ = lean_unbox_float(v_fst_2099_);
v___x_2154_ = lean_float_sub(v___x_2152_, v___x_2153_);
v___x_2155_ = lean_float_decLt(v___y_2151_, v___x_2154_);
v___y_2120_ = v___x_2155_;
goto v___jp_2119_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___boxed(lean_object* v_cls_2166_, lean_object* v_collapsed_2167_, lean_object* v_tag_2168_, lean_object* v_opts_2169_, lean_object* v_clsEnabled_2170_, lean_object* v_oldTraces_2171_, lean_object* v_msg_2172_, lean_object* v_resStartStop_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
uint8_t v_collapsed_boxed_2179_; uint8_t v_clsEnabled_boxed_2180_; lean_object* v_res_2181_; 
v_collapsed_boxed_2179_ = lean_unbox(v_collapsed_2167_);
v_clsEnabled_boxed_2180_ = lean_unbox(v_clsEnabled_2170_);
v_res_2181_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v_cls_2166_, v_collapsed_boxed_2179_, v_tag_2168_, v_opts_2169_, v_clsEnabled_boxed_2180_, v_oldTraces_2171_, v_msg_2172_, v_resStartStop_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
lean_dec_ref(v_opts_2169_);
return v_res_2181_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1(void){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2183_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__0));
v___x_2184_ = l_Lean_stringToMessageData(v___x_2183_);
return v___x_2184_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3(void){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2186_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__2));
v___x_2187_ = l_Lean_stringToMessageData(v___x_2186_);
return v___x_2187_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6(void){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2190_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__5));
v___x_2191_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__4));
v___x_2192_ = l_System_FilePath_join(v___x_2191_, v___x_2190_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6(lean_object* v_ctx_2193_, lean_object* v___x_2194_, lean_object* v_atomsAssignment_2195_, lean_object* v_goal_2196_, lean_object* v_unusedHypotheses_2197_, lean_object* v_reflectionResult_2198_, uint8_t v___x_2199_, lean_object* v___x_2200_, lean_object* v___f_2201_, lean_object* v___x_2202_, lean_object* v___f_2203_, lean_object* v___f_2204_, lean_object* v___x_2205_, lean_object* v___x_2206_, lean_object* v_a_2207_, lean_object* v_____r_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
lean_object* v___y_2215_; lean_object* v___y_2216_; lean_object* v___y_2222_; lean_object* v___y_2223_; lean_object* v___y_2224_; lean_object* v___y_2225_; lean_object* v___y_2226_; lean_object* v___y_2247_; lean_object* v___y_2248_; lean_object* v___y_2249_; lean_object* v___y_2250_; lean_object* v___y_2251_; lean_object* v___y_2252_; lean_object* v___y_2253_; lean_object* v___y_2302_; lean_object* v___y_2303_; lean_object* v___y_2304_; lean_object* v___y_2305_; lean_object* v___y_2306_; lean_object* v___y_2307_; lean_object* v___y_2308_; lean_object* v___y_2309_; lean_object* v___y_2310_; uint8_t v___y_2311_; lean_object* v_a_2312_; lean_object* v___y_2325_; lean_object* v___y_2326_; lean_object* v___y_2327_; lean_object* v___y_2328_; lean_object* v___y_2329_; lean_object* v___y_2330_; lean_object* v___y_2331_; lean_object* v___y_2332_; uint8_t v___y_2333_; lean_object* v___y_2334_; lean_object* v_a_2335_; lean_object* v___y_2345_; lean_object* v___y_2346_; uint8_t v___y_2347_; uint8_t v___y_2348_; lean_object* v___y_2349_; uint8_t v___y_2350_; lean_object* v___y_2351_; lean_object* v___y_2352_; lean_object* v___y_2353_; lean_object* v___y_2354_; lean_object* v___y_2355_; lean_object* v___y_2356_; lean_object* v___y_2357_; uint8_t v___y_2358_; lean_object* v___y_2359_; lean_object* v_config_2399_; lean_object* v_solver_2400_; lean_object* v_lratPath_2401_; lean_object* v_timeout_2402_; uint8_t v_trimProofs_2403_; uint8_t v_binaryProofs_2404_; uint8_t v_graphviz_2405_; uint8_t v_solverMode_2406_; lean_object* v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v_a_2413_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v___y_2432_; lean_object* v___y_2433_; lean_object* v___y_2434_; lean_object* v___y_2435_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2448_; lean_object* v___y_2449_; lean_object* v___y_2450_; uint8_t v___y_2451_; lean_object* v___y_2452_; lean_object* v___y_2453_; lean_object* v___y_2454_; lean_object* v_a_2455_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___y_2468_; lean_object* v___y_2469_; lean_object* v___y_2470_; uint8_t v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v_a_2474_; lean_object* v___y_2487_; lean_object* v___y_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; uint8_t v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v_toCold_2554_; lean_object* v_ref_2555_; lean_object* v___y_2556_; 
v_config_2399_ = lean_ctor_get(v_ctx_2193_, 5);
v_solver_2400_ = lean_ctor_get(v_ctx_2193_, 3);
v_lratPath_2401_ = lean_ctor_get(v_ctx_2193_, 4);
v_timeout_2402_ = lean_ctor_get(v_config_2399_, 0);
v_trimProofs_2403_ = lean_ctor_get_uint8(v_config_2399_, sizeof(void*)*2);
v_binaryProofs_2404_ = lean_ctor_get_uint8(v_config_2399_, sizeof(void*)*2 + 1);
v_graphviz_2405_ = lean_ctor_get_uint8(v_config_2399_, sizeof(void*)*2 + 8);
v_solverMode_2406_ = lean_ctor_get_uint8(v_config_2399_, sizeof(void*)*2 + 10);
if (v_graphviz_2405_ == 0)
{
lean_object* v_toCold_2595_; lean_object* v_ref_2596_; 
lean_dec_ref(v_a_2207_);
v_toCold_2595_ = lean_ctor_get(v___y_2211_, 0);
v_ref_2596_ = lean_ctor_get(v___y_2211_, 2);
v___y_2551_ = v___y_2209_;
v___y_2552_ = v___y_2210_;
v___y_2553_ = v___y_2211_;
v_toCold_2554_ = v_toCold_2595_;
v_ref_2555_ = v_ref_2596_;
v___y_2556_ = v___y_2212_;
goto v___jp_2550_;
}
else
{
lean_object* v_toCold_2597_; lean_object* v_ref_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
v_toCold_2597_ = lean_ctor_get(v___y_2211_, 0);
v_ref_2598_ = lean_ctor_get(v___y_2211_, 2);
v___x_2599_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6);
v___x_2600_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(v_a_2207_);
v___x_2601_ = l_IO_FS_writeFile(v___x_2599_, v___x_2600_);
lean_dec_ref(v___x_2600_);
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_dec_ref_known(v___x_2601_, 1);
v___y_2551_ = v___y_2209_;
v___y_2552_ = v___y_2210_;
v___y_2553_ = v___y_2211_;
v_toCold_2554_ = v_toCold_2597_;
v_ref_2555_ = v_ref_2598_;
v___y_2556_ = v___y_2212_;
goto v___jp_2550_;
}
else
{
lean_object* v_a_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2613_; 
lean_dec_ref(v___x_2206_);
lean_dec_ref(v___x_2205_);
lean_dec_ref(v___f_2204_);
lean_dec_ref(v___f_2203_);
lean_dec_ref(v___f_2201_);
lean_dec_ref(v___x_2200_);
lean_dec_ref(v_reflectionResult_2198_);
lean_dec_ref(v_unusedHypotheses_2197_);
lean_dec(v_goal_2196_);
lean_dec_ref(v_ctx_2193_);
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2601_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2604_ = v___x_2601_;
v_isShared_2605_ = v_isSharedCheck_2613_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_a_2602_);
lean_dec(v___x_2601_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2613_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2611_; 
v___x_2606_ = lean_io_error_to_string(v_a_2602_);
v___x_2607_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2606_);
v___x_2608_ = l_Lean_MessageData_ofFormat(v___x_2607_);
lean_inc(v_ref_2598_);
v___x_2609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2609_, 0, v_ref_2598_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 0, v___x_2609_);
v___x_2611_ = v___x_2604_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v___x_2609_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
}
v___jp_2214_:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2217_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v___y_2216_, v___y_2215_, v___x_2194_, v_atomsAssignment_2195_);
lean_dec_ref(v___y_2215_);
v___x_2218_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2218_, 0, v_goal_2196_);
lean_ctor_set(v___x_2218_, 1, v_unusedHypotheses_2197_);
lean_ctor_set(v___x_2218_, 2, v___x_2217_);
v___x_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2218_);
v___x_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2219_);
return v___x_2220_;
}
v___jp_2221_:
{
lean_object* v___x_2227_; 
lean_inc_ref(v___y_2222_);
v___x_2227_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v___y_2222_, v_ctx_2193_, v_reflectionResult_2198_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2237_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2230_ = v___x_2227_;
v_isShared_2231_ = v_isSharedCheck_2237_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_a_2228_);
lean_dec(v___x_2227_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2237_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2235_; 
v___x_2232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2232_, 0, v_a_2228_);
lean_ctor_set(v___x_2232_, 1, v___y_2222_);
v___x_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 0, v___x_2233_);
v___x_2235_ = v___x_2230_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v___x_2233_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
else
{
lean_object* v_a_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2245_; 
lean_dec_ref(v___y_2222_);
v_a_2238_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2240_ = v___x_2227_;
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_a_2238_);
lean_dec(v___x_2227_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2245_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2243_; 
if (v_isShared_2241_ == 0)
{
v___x_2243_ = v___x_2240_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_a_2238_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
}
}
v___jp_2246_:
{
if (lean_obj_tag(v___y_2253_) == 0)
{
lean_object* v_a_2254_; 
v_a_2254_ = lean_ctor_get(v___y_2253_, 0);
lean_inc(v_a_2254_);
lean_dec_ref_known(v___y_2253_, 1);
if (lean_obj_tag(v_a_2254_) == 0)
{
lean_object* v_toCold_2255_; lean_object* v_options_2256_; uint8_t v_hasTrace_2257_; 
lean_dec_ref(v_reflectionResult_2198_);
lean_dec_ref(v_ctx_2193_);
v_toCold_2255_ = lean_ctor_get(v___y_2251_, 0);
v_options_2256_ = lean_ctor_get(v_toCold_2255_, 2);
v_hasTrace_2257_ = lean_ctor_get_uint8(v_options_2256_, sizeof(void*)*1);
if (v_hasTrace_2257_ == 0)
{
lean_object* v_a_2258_; 
lean_dec(v___y_2248_);
v_a_2258_ = lean_ctor_get(v_a_2254_, 0);
lean_inc(v_a_2258_);
lean_dec_ref_known(v_a_2254_, 1);
v___y_2215_ = v_a_2258_;
v___y_2216_ = v___y_2252_;
goto v___jp_2214_;
}
else
{
lean_object* v_a_2259_; lean_object* v_inheritedTraceOptions_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; uint8_t v___x_2263_; 
v_a_2259_ = lean_ctor_get(v_a_2254_, 0);
lean_inc(v_a_2259_);
lean_dec_ref_known(v_a_2254_, 1);
v_inheritedTraceOptions_2260_ = lean_ctor_get(v_toCold_2255_, 11);
v___x_2261_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_2248_);
v___x_2262_ = l_Lean_Name_append(v___x_2261_, v___y_2248_);
v___x_2263_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2260_, v_options_2256_, v___x_2262_);
lean_dec(v___x_2262_);
if (v___x_2263_ == 0)
{
lean_dec(v___y_2248_);
v___y_2215_ = v_a_2259_;
v___y_2216_ = v___y_2252_;
goto v___jp_2214_;
}
else
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1);
v___x_2265_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___y_2248_, v___x_2264_, v___y_2250_, v___y_2247_, v___y_2251_, v___y_2249_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_dec_ref_known(v___x_2265_, 1);
v___y_2215_ = v_a_2259_;
v___y_2216_ = v___y_2252_;
goto v___jp_2214_;
}
else
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2273_; 
lean_dec(v_a_2259_);
lean_dec_ref(v___y_2252_);
lean_dec_ref(v_unusedHypotheses_2197_);
lean_dec(v_goal_2196_);
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2268_ = v___x_2265_;
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2265_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2273_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
if (v_isShared_2269_ == 0)
{
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v_a_2266_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_2274_; lean_object* v_options_2275_; uint8_t v_hasTrace_2276_; 
lean_dec_ref(v___y_2252_);
lean_dec_ref(v_unusedHypotheses_2197_);
lean_dec(v_goal_2196_);
v_toCold_2274_ = lean_ctor_get(v___y_2251_, 0);
v_options_2275_ = lean_ctor_get(v_toCold_2274_, 2);
v_hasTrace_2276_ = lean_ctor_get_uint8(v_options_2275_, sizeof(void*)*1);
if (v_hasTrace_2276_ == 0)
{
lean_object* v_a_2277_; 
lean_dec(v___y_2248_);
v_a_2277_ = lean_ctor_get(v_a_2254_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v_a_2254_, 1);
v___y_2222_ = v_a_2277_;
v___y_2223_ = v___y_2250_;
v___y_2224_ = v___y_2247_;
v___y_2225_ = v___y_2251_;
v___y_2226_ = v___y_2249_;
goto v___jp_2221_;
}
else
{
lean_object* v_a_2278_; lean_object* v_inheritedTraceOptions_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; uint8_t v___x_2282_; 
v_a_2278_ = lean_ctor_get(v_a_2254_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v_a_2254_, 1);
v_inheritedTraceOptions_2279_ = lean_ctor_get(v_toCold_2274_, 11);
v___x_2280_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_2248_);
v___x_2281_ = l_Lean_Name_append(v___x_2280_, v___y_2248_);
v___x_2282_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2279_, v_options_2275_, v___x_2281_);
lean_dec(v___x_2281_);
if (v___x_2282_ == 0)
{
lean_dec(v___y_2248_);
v___y_2222_ = v_a_2278_;
v___y_2223_ = v___y_2250_;
v___y_2224_ = v___y_2247_;
v___y_2225_ = v___y_2251_;
v___y_2226_ = v___y_2249_;
goto v___jp_2221_;
}
else
{
lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2283_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3);
v___x_2284_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___y_2248_, v___x_2283_, v___y_2250_, v___y_2247_, v___y_2251_, v___y_2249_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_dec_ref_known(v___x_2284_, 1);
v___y_2222_ = v_a_2278_;
v___y_2223_ = v___y_2250_;
v___y_2224_ = v___y_2247_;
v___y_2225_ = v___y_2251_;
v___y_2226_ = v___y_2249_;
goto v___jp_2221_;
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
lean_dec(v_a_2278_);
lean_dec_ref(v_reflectionResult_2198_);
lean_dec_ref(v_ctx_2193_);
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2248_);
lean_dec_ref(v_reflectionResult_2198_);
lean_dec_ref(v_unusedHypotheses_2197_);
lean_dec(v_goal_2196_);
lean_dec_ref(v_ctx_2193_);
v_a_2293_ = lean_ctor_get(v___y_2253_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___y_2253_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___y_2253_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___y_2253_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
v___jp_2301_:
{
lean_object* v___x_2313_; double v___x_2314_; double v___x_2315_; double v___x_2316_; double v___x_2317_; double v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2313_ = lean_io_mono_nanos_now();
v___x_2314_ = lean_float_of_nat(v___y_2304_);
v___x_2315_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_2316_ = lean_float_div(v___x_2314_, v___x_2315_);
v___x_2317_ = lean_float_of_nat(v___x_2313_);
v___x_2318_ = lean_float_div(v___x_2317_, v___x_2315_);
v___x_2319_ = lean_box_float(v___x_2316_);
v___x_2320_ = lean_box_float(v___x_2318_);
v___x_2321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2319_);
lean_ctor_set(v___x_2321_, 1, v___x_2320_);
v___x_2322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2322_, 0, v_a_2312_);
lean_ctor_set(v___x_2322_, 1, v___x_2321_);
lean_inc(v___y_2306_);
v___x_2323_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_2306_, v___x_2199_, v___x_2200_, v___y_2305_, v___y_2311_, v___y_2302_, v___f_2201_, v___x_2322_, v___y_2308_, v___y_2303_, v___y_2310_, v___y_2307_);
v___y_2247_ = v___y_2303_;
v___y_2248_ = v___y_2306_;
v___y_2249_ = v___y_2307_;
v___y_2250_ = v___y_2308_;
v___y_2251_ = v___y_2310_;
v___y_2252_ = v___y_2309_;
v___y_2253_ = v___x_2323_;
goto v___jp_2246_;
}
v___jp_2324_:
{
lean_object* v___x_2336_; double v___x_2337_; double v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2336_ = lean_io_get_num_heartbeats();
v___x_2337_ = lean_float_of_nat(v___y_2334_);
v___x_2338_ = lean_float_of_nat(v___x_2336_);
v___x_2339_ = lean_box_float(v___x_2337_);
v___x_2340_ = lean_box_float(v___x_2338_);
v___x_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2339_);
lean_ctor_set(v___x_2341_, 1, v___x_2340_);
v___x_2342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2342_, 0, v_a_2335_);
lean_ctor_set(v___x_2342_, 1, v___x_2341_);
lean_inc(v___y_2328_);
v___x_2343_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_2328_, v___x_2199_, v___x_2200_, v___y_2327_, v___y_2333_, v___y_2325_, v___f_2201_, v___x_2342_, v___y_2330_, v___y_2326_, v___y_2332_, v___y_2329_);
v___y_2247_ = v___y_2326_;
v___y_2248_ = v___y_2328_;
v___y_2249_ = v___y_2329_;
v___y_2250_ = v___y_2330_;
v___y_2251_ = v___y_2332_;
v___y_2252_ = v___y_2331_;
v___y_2253_ = v___x_2343_;
goto v___jp_2246_;
}
v___jp_2344_:
{
lean_object* v___x_2360_; lean_object* v_a_2361_; uint8_t v___x_2362_; 
v___x_2360_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_2346_);
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
lean_inc(v_a_2361_);
lean_dec_ref(v___x_2360_);
v___x_2362_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_2345_, v___x_2202_);
if (v___x_2362_ == 0)
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = lean_io_mono_nanos_now();
v___x_2364_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_2356_, v___y_2359_, v___y_2353_, v___y_2347_, v___y_2357_, v___y_2348_, v___y_2350_, v___y_2352_, v___y_2346_);
if (lean_obj_tag(v___x_2364_) == 0)
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
v_a_2365_ = lean_ctor_get(v___x_2364_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2364_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2364_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2364_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 1);
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
v___y_2302_ = v_a_2361_;
v___y_2303_ = v___y_2354_;
v___y_2304_ = v___x_2363_;
v___y_2305_ = v___y_2345_;
v___y_2306_ = v___y_2355_;
v___y_2307_ = v___y_2346_;
v___y_2308_ = v___y_2349_;
v___y_2309_ = v___y_2351_;
v___y_2310_ = v___y_2352_;
v___y_2311_ = v___y_2358_;
v_a_2312_ = v___x_2370_;
goto v___jp_2301_;
}
}
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2380_; 
v_a_2373_ = lean_ctor_get(v___x_2364_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2364_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2375_ = v___x_2364_;
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2364_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2378_; 
if (v_isShared_2376_ == 0)
{
lean_ctor_set_tag(v___x_2375_, 0);
v___x_2378_ = v___x_2375_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2373_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
v___y_2302_ = v_a_2361_;
v___y_2303_ = v___y_2354_;
v___y_2304_ = v___x_2363_;
v___y_2305_ = v___y_2345_;
v___y_2306_ = v___y_2355_;
v___y_2307_ = v___y_2346_;
v___y_2308_ = v___y_2349_;
v___y_2309_ = v___y_2351_;
v___y_2310_ = v___y_2352_;
v___y_2311_ = v___y_2358_;
v_a_2312_ = v___x_2378_;
goto v___jp_2301_;
}
}
}
}
else
{
lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2381_ = lean_io_get_num_heartbeats();
v___x_2382_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_2356_, v___y_2359_, v___y_2353_, v___y_2347_, v___y_2357_, v___y_2348_, v___y_2350_, v___y_2352_, v___y_2346_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2382_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2382_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
lean_ctor_set_tag(v___x_2385_, 1);
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
v___y_2325_ = v_a_2361_;
v___y_2326_ = v___y_2354_;
v___y_2327_ = v___y_2345_;
v___y_2328_ = v___y_2355_;
v___y_2329_ = v___y_2346_;
v___y_2330_ = v___y_2349_;
v___y_2331_ = v___y_2351_;
v___y_2332_ = v___y_2352_;
v___y_2333_ = v___y_2358_;
v___y_2334_ = v___x_2381_;
v_a_2335_ = v___x_2388_;
goto v___jp_2324_;
}
}
}
else
{
lean_object* v_a_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2398_; 
v_a_2391_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2393_ = v___x_2382_;
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_a_2391_);
lean_dec(v___x_2382_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2398_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2396_; 
if (v_isShared_2394_ == 0)
{
lean_ctor_set_tag(v___x_2393_, 0);
v___x_2396_ = v___x_2393_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2391_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
v___y_2325_ = v_a_2361_;
v___y_2326_ = v___y_2354_;
v___y_2327_ = v___y_2345_;
v___y_2328_ = v___y_2355_;
v___y_2329_ = v___y_2346_;
v___y_2330_ = v___y_2349_;
v___y_2331_ = v___y_2351_;
v___y_2332_ = v___y_2352_;
v___y_2333_ = v___y_2358_;
v___y_2334_ = v___x_2381_;
v_a_2335_ = v___x_2396_;
goto v___jp_2324_;
}
}
}
}
}
v___jp_2407_:
{
lean_object* v_toCold_2414_; lean_object* v_options_2415_; uint8_t v_hasTrace_2416_; 
v_toCold_2414_ = lean_ctor_get(v___y_2412_, 0);
v_options_2415_ = lean_ctor_get(v_toCold_2414_, 2);
v_hasTrace_2416_ = lean_ctor_get_uint8(v_options_2415_, sizeof(void*)*1);
if (v_hasTrace_2416_ == 0)
{
lean_object* v_fst_2417_; lean_object* v_snd_2418_; lean_object* v___x_2419_; 
lean_dec_ref(v___f_2201_);
lean_dec_ref(v___x_2200_);
v_fst_2417_ = lean_ctor_get(v_a_2413_, 0);
lean_inc(v_fst_2417_);
v_snd_2418_ = lean_ctor_get(v_a_2413_, 1);
lean_inc(v_snd_2418_);
lean_dec_ref(v_a_2413_);
lean_inc(v_timeout_2402_);
lean_inc_ref(v_lratPath_2401_);
lean_inc_ref(v_solver_2400_);
v___x_2419_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_2417_, v_solver_2400_, v_lratPath_2401_, v_trimProofs_2403_, v_timeout_2402_, v_binaryProofs_2404_, v_solverMode_2406_, v___y_2412_, v___y_2410_);
v___y_2247_ = v___y_2408_;
v___y_2248_ = v___y_2409_;
v___y_2249_ = v___y_2410_;
v___y_2250_ = v___y_2411_;
v___y_2251_ = v___y_2412_;
v___y_2252_ = v_snd_2418_;
v___y_2253_ = v___x_2419_;
goto v___jp_2246_;
}
else
{
lean_object* v_fst_2420_; lean_object* v_snd_2421_; lean_object* v_inheritedTraceOptions_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; uint8_t v___x_2425_; 
v_fst_2420_ = lean_ctor_get(v_a_2413_, 0);
lean_inc(v_fst_2420_);
v_snd_2421_ = lean_ctor_get(v_a_2413_, 1);
lean_inc(v_snd_2421_);
lean_dec_ref(v_a_2413_);
v_inheritedTraceOptions_2422_ = lean_ctor_get(v_toCold_2414_, 11);
v___x_2423_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_2409_);
v___x_2424_ = l_Lean_Name_append(v___x_2423_, v___y_2409_);
v___x_2425_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2422_, v_options_2415_, v___x_2424_);
lean_dec(v___x_2424_);
if (v___x_2425_ == 0)
{
lean_object* v___x_2426_; uint8_t v___x_2427_; 
v___x_2426_ = l_Lean_trace_profiler;
v___x_2427_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_2415_, v___x_2426_);
if (v___x_2427_ == 0)
{
lean_object* v___x_2428_; 
lean_dec_ref(v___f_2201_);
lean_dec_ref(v___x_2200_);
lean_inc(v_timeout_2402_);
lean_inc_ref(v_lratPath_2401_);
lean_inc_ref(v_solver_2400_);
v___x_2428_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_2420_, v_solver_2400_, v_lratPath_2401_, v_trimProofs_2403_, v_timeout_2402_, v_binaryProofs_2404_, v_solverMode_2406_, v___y_2412_, v___y_2410_);
v___y_2247_ = v___y_2408_;
v___y_2248_ = v___y_2409_;
v___y_2249_ = v___y_2410_;
v___y_2250_ = v___y_2411_;
v___y_2251_ = v___y_2412_;
v___y_2252_ = v_snd_2421_;
v___y_2253_ = v___x_2428_;
goto v___jp_2246_;
}
else
{
lean_inc_ref(v_solver_2400_);
lean_inc(v_timeout_2402_);
lean_inc_ref(v_lratPath_2401_);
v___y_2345_ = v_options_2415_;
v___y_2346_ = v___y_2410_;
v___y_2347_ = v_trimProofs_2403_;
v___y_2348_ = v_binaryProofs_2404_;
v___y_2349_ = v___y_2411_;
v___y_2350_ = v_solverMode_2406_;
v___y_2351_ = v_snd_2421_;
v___y_2352_ = v___y_2412_;
v___y_2353_ = v_lratPath_2401_;
v___y_2354_ = v___y_2408_;
v___y_2355_ = v___y_2409_;
v___y_2356_ = v_fst_2420_;
v___y_2357_ = v_timeout_2402_;
v___y_2358_ = v___x_2425_;
v___y_2359_ = v_solver_2400_;
goto v___jp_2344_;
}
}
else
{
lean_inc_ref(v_solver_2400_);
lean_inc(v_timeout_2402_);
lean_inc_ref(v_lratPath_2401_);
v___y_2345_ = v_options_2415_;
v___y_2346_ = v___y_2410_;
v___y_2347_ = v_trimProofs_2403_;
v___y_2348_ = v_binaryProofs_2404_;
v___y_2349_ = v___y_2411_;
v___y_2350_ = v_solverMode_2406_;
v___y_2351_ = v_snd_2421_;
v___y_2352_ = v___y_2412_;
v___y_2353_ = v_lratPath_2401_;
v___y_2354_ = v___y_2408_;
v___y_2355_ = v___y_2409_;
v___y_2356_ = v_fst_2420_;
v___y_2357_ = v_timeout_2402_;
v___y_2358_ = v___x_2425_;
v___y_2359_ = v_solver_2400_;
goto v___jp_2344_;
}
}
}
v___jp_2429_:
{
if (lean_obj_tag(v___y_2435_) == 0)
{
lean_object* v_a_2436_; 
v_a_2436_ = lean_ctor_get(v___y_2435_, 0);
lean_inc(v_a_2436_);
lean_dec_ref_known(v___y_2435_, 1);
v___y_2408_ = v___y_2430_;
v___y_2409_ = v___y_2431_;
v___y_2410_ = v___y_2432_;
v___y_2411_ = v___y_2433_;
v___y_2412_ = v___y_2434_;
v_a_2413_ = v_a_2436_;
goto v___jp_2407_;
}
else
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2444_; 
lean_dec(v___y_2431_);
lean_dec_ref(v___f_2201_);
lean_dec_ref(v___x_2200_);
lean_dec_ref(v_reflectionResult_2198_);
lean_dec_ref(v_unusedHypotheses_2197_);
lean_dec(v_goal_2196_);
lean_dec_ref(v_ctx_2193_);
v_a_2437_ = lean_ctor_get(v___y_2435_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___y_2435_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2439_ = v___y_2435_;
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___y_2435_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2442_; 
if (v_isShared_2440_ == 0)
{
v___x_2442_ = v___x_2439_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_a_2437_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
}
v___jp_2445_:
{
lean_object* v___x_2456_; double v___x_2457_; double v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2456_ = lean_io_get_num_heartbeats();
v___x_2457_ = lean_float_of_nat(v___y_2454_);
v___x_2458_ = lean_float_of_nat(v___x_2456_);
v___x_2459_ = lean_box_float(v___x_2457_);
v___x_2460_ = lean_box_float(v___x_2458_);
v___x_2461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2461_, 0, v___x_2459_);
lean_ctor_set(v___x_2461_, 1, v___x_2460_);
v___x_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2462_, 0, v_a_2455_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
lean_inc_ref(v___x_2200_);
lean_inc(v___y_2447_);
v___x_2463_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_2447_, v___x_2199_, v___x_2200_, v___y_2453_, v___y_2451_, v___y_2450_, v___f_2203_, v___x_2462_, v___y_2449_, v___y_2446_, v___y_2452_, v___y_2448_);
v___y_2430_ = v___y_2446_;
v___y_2431_ = v___y_2447_;
v___y_2432_ = v___y_2448_;
v___y_2433_ = v___y_2449_;
v___y_2434_ = v___y_2452_;
v___y_2435_ = v___x_2463_;
goto v___jp_2429_;
}
v___jp_2464_:
{
lean_object* v___x_2475_; double v___x_2476_; double v___x_2477_; double v___x_2478_; double v___x_2479_; double v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2475_ = lean_io_mono_nanos_now();
v___x_2476_ = lean_float_of_nat(v___y_2467_);
v___x_2477_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_2478_ = lean_float_div(v___x_2476_, v___x_2477_);
v___x_2479_ = lean_float_of_nat(v___x_2475_);
v___x_2480_ = lean_float_div(v___x_2479_, v___x_2477_);
v___x_2481_ = lean_box_float(v___x_2478_);
v___x_2482_ = lean_box_float(v___x_2480_);
v___x_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2481_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
v___x_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2484_, 0, v_a_2474_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
lean_inc_ref(v___x_2200_);
lean_inc(v___y_2466_);
v___x_2485_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_2466_, v___x_2199_, v___x_2200_, v___y_2473_, v___y_2471_, v___y_2470_, v___f_2203_, v___x_2484_, v___y_2469_, v___y_2465_, v___y_2472_, v___y_2468_);
v___y_2430_ = v___y_2465_;
v___y_2431_ = v___y_2466_;
v___y_2432_ = v___y_2468_;
v___y_2433_ = v___y_2469_;
v___y_2434_ = v___y_2472_;
v___y_2435_ = v___x_2485_;
goto v___jp_2429_;
}
v___jp_2486_:
{
lean_object* v___x_2495_; lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2549_; 
v___x_2495_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_2489_);
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2498_ = v___x_2495_;
v_isShared_2499_ = v_isSharedCheck_2549_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2495_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2549_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
uint8_t v___x_2500_; 
v___x_2500_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_2494_, v___x_2202_);
if (v___x_2500_ == 0)
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = lean_io_mono_nanos_now();
v___x_2502_ = l_IO_lazyPure___redArg(v___f_2204_);
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
lean_del_object(v___x_2498_);
v_a_2503_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2502_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2502_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
lean_ctor_set_tag(v___x_2505_, 1);
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
v___y_2465_ = v___y_2487_;
v___y_2466_ = v___y_2488_;
v___y_2467_ = v___x_2501_;
v___y_2468_ = v___y_2489_;
v___y_2469_ = v___y_2490_;
v___y_2470_ = v_a_2496_;
v___y_2471_ = v___y_2492_;
v___y_2472_ = v___y_2493_;
v___y_2473_ = v___y_2494_;
v_a_2474_ = v___x_2508_;
goto v___jp_2464_;
}
}
}
else
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2524_; 
v_a_2511_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2513_ = v___x_2502_;
v_isShared_2514_ = v_isSharedCheck_2524_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2502_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2524_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2515_; lean_object* v___x_2517_; 
v___x_2515_ = lean_io_error_to_string(v_a_2511_);
if (v_isShared_2514_ == 0)
{
lean_ctor_set_tag(v___x_2513_, 3);
lean_ctor_set(v___x_2513_, 0, v___x_2515_);
v___x_2517_ = v___x_2513_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v___x_2515_);
v___x_2517_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2521_; 
v___x_2518_ = l_Lean_MessageData_ofFormat(v___x_2517_);
lean_inc(v___y_2491_);
v___x_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___y_2491_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v___x_2519_);
v___x_2521_ = v___x_2498_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v___x_2519_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
v___y_2465_ = v___y_2487_;
v___y_2466_ = v___y_2488_;
v___y_2467_ = v___x_2501_;
v___y_2468_ = v___y_2489_;
v___y_2469_ = v___y_2490_;
v___y_2470_ = v_a_2496_;
v___y_2471_ = v___y_2492_;
v___y_2472_ = v___y_2493_;
v___y_2473_ = v___y_2494_;
v_a_2474_ = v___x_2521_;
goto v___jp_2464_;
}
}
}
}
}
else
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = lean_io_get_num_heartbeats();
v___x_2526_ = l_IO_lazyPure___redArg(v___f_2204_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2534_; 
lean_del_object(v___x_2498_);
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2526_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2529_ = v___x_2526_;
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_a_2527_);
lean_dec(v___x_2526_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2532_; 
if (v_isShared_2530_ == 0)
{
lean_ctor_set_tag(v___x_2529_, 1);
v___x_2532_ = v___x_2529_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_a_2527_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
v___y_2446_ = v___y_2487_;
v___y_2447_ = v___y_2488_;
v___y_2448_ = v___y_2489_;
v___y_2449_ = v___y_2490_;
v___y_2450_ = v_a_2496_;
v___y_2451_ = v___y_2492_;
v___y_2452_ = v___y_2493_;
v___y_2453_ = v___y_2494_;
v___y_2454_ = v___x_2525_;
v_a_2455_ = v___x_2532_;
goto v___jp_2445_;
}
}
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2548_; 
v_a_2535_ = lean_ctor_get(v___x_2526_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2526_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2537_ = v___x_2526_;
v_isShared_2538_ = v_isSharedCheck_2548_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2526_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2548_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2539_; lean_object* v___x_2541_; 
v___x_2539_ = lean_io_error_to_string(v_a_2535_);
if (v_isShared_2538_ == 0)
{
lean_ctor_set_tag(v___x_2537_, 3);
lean_ctor_set(v___x_2537_, 0, v___x_2539_);
v___x_2541_ = v___x_2537_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v___x_2539_);
v___x_2541_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2545_; 
v___x_2542_ = l_Lean_MessageData_ofFormat(v___x_2541_);
lean_inc(v___y_2491_);
v___x_2543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___y_2491_);
lean_ctor_set(v___x_2543_, 1, v___x_2542_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v___x_2543_);
v___x_2545_ = v___x_2498_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v___x_2543_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
v___y_2446_ = v___y_2487_;
v___y_2447_ = v___y_2488_;
v___y_2448_ = v___y_2489_;
v___y_2449_ = v___y_2490_;
v___y_2450_ = v_a_2496_;
v___y_2451_ = v___y_2492_;
v___y_2452_ = v___y_2493_;
v___y_2453_ = v___y_2494_;
v___y_2454_ = v___x_2525_;
v_a_2455_ = v___x_2545_;
goto v___jp_2445_;
}
}
}
}
}
}
}
v___jp_2550_:
{
lean_object* v_options_2557_; lean_object* v_inheritedTraceOptions_2558_; uint8_t v_hasTrace_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v_options_2557_ = lean_ctor_get(v_toCold_2554_, 2);
v_inheritedTraceOptions_2558_ = lean_ctor_get(v_toCold_2554_, 11);
v_hasTrace_2559_ = lean_ctor_get_uint8(v_options_2557_, sizeof(void*)*1);
v___x_2560_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2));
v___x_2561_ = l_Lean_Name_mkStr3(v___x_2205_, v___x_2206_, v___x_2560_);
if (v_hasTrace_2559_ == 0)
{
lean_object* v___x_2562_; 
lean_dec_ref(v___f_2203_);
v___x_2562_ = l_IO_lazyPure___redArg(v___f_2204_);
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_object* v_a_2563_; 
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
lean_inc(v_a_2563_);
lean_dec_ref_known(v___x_2562_, 1);
v___y_2408_ = v___y_2552_;
v___y_2409_ = v___x_2561_;
v___y_2410_ = v___y_2556_;
v___y_2411_ = v___y_2551_;
v___y_2412_ = v___y_2553_;
v_a_2413_ = v_a_2563_;
goto v___jp_2407_;
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2575_; 
lean_dec(v___x_2561_);
lean_dec_ref(v___f_2201_);
lean_dec_ref(v___x_2200_);
lean_dec_ref(v_reflectionResult_2198_);
lean_dec_ref(v_unusedHypotheses_2197_);
lean_dec(v_goal_2196_);
lean_dec_ref(v_ctx_2193_);
v_a_2564_ = lean_ctor_get(v___x_2562_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2566_ = v___x_2562_;
v_isShared_2567_ = v_isSharedCheck_2575_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2562_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2575_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2573_; 
v___x_2568_ = lean_io_error_to_string(v_a_2564_);
v___x_2569_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
v___x_2570_ = l_Lean_MessageData_ofFormat(v___x_2569_);
lean_inc(v_ref_2555_);
v___x_2571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2571_, 0, v_ref_2555_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v___x_2571_);
v___x_2573_ = v___x_2566_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2571_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
else
{
lean_object* v___x_2576_; lean_object* v___x_2577_; uint8_t v___x_2578_; 
v___x_2576_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___x_2561_);
v___x_2577_ = l_Lean_Name_append(v___x_2576_, v___x_2561_);
v___x_2578_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2558_, v_options_2557_, v___x_2577_);
lean_dec(v___x_2577_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; uint8_t v___x_2580_; 
v___x_2579_ = l_Lean_trace_profiler;
v___x_2580_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_2557_, v___x_2579_);
if (v___x_2580_ == 0)
{
lean_object* v___x_2581_; 
lean_dec_ref(v___f_2203_);
v___x_2581_ = l_IO_lazyPure___redArg(v___f_2204_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v_a_2582_; 
v_a_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_a_2582_);
lean_dec_ref_known(v___x_2581_, 1);
v___y_2408_ = v___y_2552_;
v___y_2409_ = v___x_2561_;
v___y_2410_ = v___y_2556_;
v___y_2411_ = v___y_2551_;
v___y_2412_ = v___y_2553_;
v_a_2413_ = v_a_2582_;
goto v___jp_2407_;
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2594_; 
lean_dec(v___x_2561_);
lean_dec_ref(v___f_2201_);
lean_dec_ref(v___x_2200_);
lean_dec_ref(v_reflectionResult_2198_);
lean_dec_ref(v_unusedHypotheses_2197_);
lean_dec(v_goal_2196_);
lean_dec_ref(v_ctx_2193_);
v_a_2583_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2585_ = v___x_2581_;
v_isShared_2586_ = v_isSharedCheck_2594_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2581_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2594_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2592_; 
v___x_2587_ = lean_io_error_to_string(v_a_2583_);
v___x_2588_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2587_);
v___x_2589_ = l_Lean_MessageData_ofFormat(v___x_2588_);
lean_inc(v_ref_2555_);
v___x_2590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2590_, 0, v_ref_2555_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
if (v_isShared_2586_ == 0)
{
lean_ctor_set(v___x_2585_, 0, v___x_2590_);
v___x_2592_ = v___x_2585_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v___x_2590_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
}
}
else
{
v___y_2487_ = v___y_2552_;
v___y_2488_ = v___x_2561_;
v___y_2489_ = v___y_2556_;
v___y_2490_ = v___y_2551_;
v___y_2491_ = v_ref_2555_;
v___y_2492_ = v___x_2578_;
v___y_2493_ = v___y_2553_;
v___y_2494_ = v_options_2557_;
goto v___jp_2486_;
}
}
else
{
v___y_2487_ = v___y_2552_;
v___y_2488_ = v___x_2561_;
v___y_2489_ = v___y_2556_;
v___y_2490_ = v___y_2551_;
v___y_2491_ = v_ref_2555_;
v___y_2492_ = v___x_2578_;
v___y_2493_ = v___y_2553_;
v___y_2494_ = v_options_2557_;
goto v___jp_2486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___boxed(lean_object** _args){
lean_object* v_ctx_2614_ = _args[0];
lean_object* v___x_2615_ = _args[1];
lean_object* v_atomsAssignment_2616_ = _args[2];
lean_object* v_goal_2617_ = _args[3];
lean_object* v_unusedHypotheses_2618_ = _args[4];
lean_object* v_reflectionResult_2619_ = _args[5];
lean_object* v___x_2620_ = _args[6];
lean_object* v___x_2621_ = _args[7];
lean_object* v___f_2622_ = _args[8];
lean_object* v___x_2623_ = _args[9];
lean_object* v___f_2624_ = _args[10];
lean_object* v___f_2625_ = _args[11];
lean_object* v___x_2626_ = _args[12];
lean_object* v___x_2627_ = _args[13];
lean_object* v_a_2628_ = _args[14];
lean_object* v_____r_2629_ = _args[15];
lean_object* v___y_2630_ = _args[16];
lean_object* v___y_2631_ = _args[17];
lean_object* v___y_2632_ = _args[18];
lean_object* v___y_2633_ = _args[19];
lean_object* v___y_2634_ = _args[20];
_start:
{
uint8_t v___x_70650__boxed_2635_; lean_object* v_res_2636_; 
v___x_70650__boxed_2635_ = lean_unbox(v___x_2620_);
v_res_2636_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6(v_ctx_2614_, v___x_2615_, v_atomsAssignment_2616_, v_goal_2617_, v_unusedHypotheses_2618_, v_reflectionResult_2619_, v___x_70650__boxed_2635_, v___x_2621_, v___f_2622_, v___x_2623_, v___f_2624_, v___f_2625_, v___x_2626_, v___x_2627_, v_a_2628_, v_____r_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v___x_2623_);
lean_dec_ref(v_atomsAssignment_2616_);
lean_dec(v___x_2615_);
return v_res_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7(lean_object* v_ctx_2637_, lean_object* v___x_2638_, lean_object* v_atomsAssignment_2639_, lean_object* v_goal_2640_, lean_object* v_unusedHypotheses_2641_, lean_object* v_reflectionResult_2642_, uint8_t v___x_2643_, lean_object* v___x_2644_, lean_object* v___f_2645_, lean_object* v___x_2646_, lean_object* v___f_2647_, lean_object* v___f_2648_, lean_object* v___x_2649_, lean_object* v___x_2650_, lean_object* v_a_2651_, lean_object* v_____r_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2666_; lean_object* v___y_2667_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2696_; lean_object* v___y_2697_; lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v___y_2749_; uint8_t v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; lean_object* v_a_2756_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v___y_2772_; lean_object* v___y_2773_; uint8_t v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v___y_2777_; lean_object* v___y_2778_; lean_object* v_a_2779_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2791_; lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2795_; uint8_t v___y_2796_; uint8_t v___y_2797_; lean_object* v___y_2798_; uint8_t v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2801_; uint8_t v___y_2802_; lean_object* v___y_2803_; lean_object* v_config_2843_; lean_object* v_solver_2844_; lean_object* v_lratPath_2845_; lean_object* v_timeout_2846_; uint8_t v_trimProofs_2847_; uint8_t v_binaryProofs_2848_; uint8_t v_graphviz_2849_; uint8_t v_solverMode_2850_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___y_2855_; lean_object* v___y_2856_; lean_object* v_a_2857_; lean_object* v___y_2874_; lean_object* v___y_2875_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2890_; lean_object* v___y_2891_; lean_object* v___y_2892_; uint8_t v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v_a_2899_; lean_object* v___y_2909_; lean_object* v___y_2910_; lean_object* v___y_2911_; uint8_t v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2914_; lean_object* v___y_2915_; lean_object* v___y_2916_; lean_object* v___y_2917_; lean_object* v_a_2918_; lean_object* v___y_2931_; uint8_t v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v_toCold_2998_; lean_object* v_ref_2999_; lean_object* v___y_3000_; 
v_config_2843_ = lean_ctor_get(v_ctx_2637_, 5);
v_solver_2844_ = lean_ctor_get(v_ctx_2637_, 3);
v_lratPath_2845_ = lean_ctor_get(v_ctx_2637_, 4);
v_timeout_2846_ = lean_ctor_get(v_config_2843_, 0);
v_trimProofs_2847_ = lean_ctor_get_uint8(v_config_2843_, sizeof(void*)*2);
v_binaryProofs_2848_ = lean_ctor_get_uint8(v_config_2843_, sizeof(void*)*2 + 1);
v_graphviz_2849_ = lean_ctor_get_uint8(v_config_2843_, sizeof(void*)*2 + 8);
v_solverMode_2850_ = lean_ctor_get_uint8(v_config_2843_, sizeof(void*)*2 + 10);
if (v_graphviz_2849_ == 0)
{
lean_object* v_toCold_3039_; lean_object* v_ref_3040_; 
lean_dec_ref(v_a_2651_);
v_toCold_3039_ = lean_ctor_get(v___y_2655_, 0);
v_ref_3040_ = lean_ctor_get(v___y_2655_, 2);
v___y_2995_ = v___y_2653_;
v___y_2996_ = v___y_2654_;
v___y_2997_ = v___y_2655_;
v_toCold_2998_ = v_toCold_3039_;
v_ref_2999_ = v_ref_3040_;
v___y_3000_ = v___y_2656_;
goto v___jp_2994_;
}
else
{
lean_object* v_toCold_3041_; lean_object* v_ref_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v_toCold_3041_ = lean_ctor_get(v___y_2655_, 0);
v_ref_3042_ = lean_ctor_get(v___y_2655_, 2);
v___x_3043_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6);
v___x_3044_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(v_a_2651_);
v___x_3045_ = l_IO_FS_writeFile(v___x_3043_, v___x_3044_);
lean_dec_ref(v___x_3044_);
if (lean_obj_tag(v___x_3045_) == 0)
{
lean_dec_ref_known(v___x_3045_, 1);
v___y_2995_ = v___y_2653_;
v___y_2996_ = v___y_2654_;
v___y_2997_ = v___y_2655_;
v_toCold_2998_ = v_toCold_3041_;
v_ref_2999_ = v_ref_3042_;
v___y_3000_ = v___y_2656_;
goto v___jp_2994_;
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3057_; 
lean_dec_ref(v___x_2650_);
lean_dec_ref(v___x_2649_);
lean_dec_ref(v___f_2648_);
lean_dec_ref(v___f_2647_);
lean_dec_ref(v___f_2645_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v_reflectionResult_2642_);
lean_dec_ref(v_unusedHypotheses_2641_);
lean_dec(v_goal_2640_);
lean_dec_ref(v_ctx_2637_);
v_a_3046_ = lean_ctor_get(v___x_3045_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3045_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3048_ = v___x_3045_;
v_isShared_3049_ = v_isSharedCheck_3057_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_dec(v___x_3045_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3057_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3055_; 
v___x_3050_ = lean_io_error_to_string(v_a_3046_);
v___x_3051_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3050_);
v___x_3052_ = l_Lean_MessageData_ofFormat(v___x_3051_);
lean_inc(v_ref_3042_);
v___x_3053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3053_, 0, v_ref_3042_);
lean_ctor_set(v___x_3053_, 1, v___x_3052_);
if (v_isShared_3049_ == 0)
{
lean_ctor_set(v___x_3048_, 0, v___x_3053_);
v___x_3055_ = v___x_3048_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3053_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
v___jp_2658_:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2661_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v___y_2659_, v___y_2660_, v___x_2638_, v_atomsAssignment_2639_);
lean_dec_ref(v___y_2660_);
v___x_2662_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2662_, 0, v_goal_2640_);
lean_ctor_set(v___x_2662_, 1, v_unusedHypotheses_2641_);
lean_ctor_set(v___x_2662_, 2, v___x_2661_);
v___x_2663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2662_);
v___x_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2663_);
return v___x_2664_;
}
v___jp_2665_:
{
lean_object* v___x_2671_; 
lean_inc_ref(v___y_2666_);
v___x_2671_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v___y_2666_, v_ctx_2637_, v_reflectionResult_2642_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2681_; 
v_a_2672_ = lean_ctor_get(v___x_2671_, 0);
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2671_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2674_ = v___x_2671_;
v_isShared_2675_ = v_isSharedCheck_2681_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2671_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2681_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2679_; 
v___x_2676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2676_, 0, v_a_2672_);
lean_ctor_set(v___x_2676_, 1, v___y_2666_);
v___x_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2677_, 0, v___x_2676_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 0, v___x_2677_);
v___x_2679_ = v___x_2674_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v___x_2677_);
v___x_2679_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
return v___x_2679_;
}
}
}
else
{
lean_object* v_a_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2689_; 
lean_dec_ref(v___y_2666_);
v_a_2682_ = lean_ctor_get(v___x_2671_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2671_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2684_ = v___x_2671_;
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_a_2682_);
lean_dec(v___x_2671_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2689_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___x_2687_; 
if (v_isShared_2685_ == 0)
{
v___x_2687_ = v___x_2684_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v_a_2682_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
v___jp_2690_:
{
if (lean_obj_tag(v___y_2697_) == 0)
{
lean_object* v_a_2698_; 
v_a_2698_ = lean_ctor_get(v___y_2697_, 0);
lean_inc(v_a_2698_);
lean_dec_ref_known(v___y_2697_, 1);
if (lean_obj_tag(v_a_2698_) == 0)
{
lean_object* v_toCold_2699_; lean_object* v_options_2700_; uint8_t v_hasTrace_2701_; 
lean_dec_ref(v_reflectionResult_2642_);
lean_dec_ref(v_ctx_2637_);
v_toCold_2699_ = lean_ctor_get(v___y_2695_, 0);
v_options_2700_ = lean_ctor_get(v_toCold_2699_, 2);
v_hasTrace_2701_ = lean_ctor_get_uint8(v_options_2700_, sizeof(void*)*1);
if (v_hasTrace_2701_ == 0)
{
lean_object* v_a_2702_; 
lean_dec(v___y_2693_);
v_a_2702_ = lean_ctor_get(v_a_2698_, 0);
lean_inc(v_a_2702_);
lean_dec_ref_known(v_a_2698_, 1);
v___y_2659_ = v___y_2692_;
v___y_2660_ = v_a_2702_;
goto v___jp_2658_;
}
else
{
lean_object* v_a_2703_; lean_object* v_inheritedTraceOptions_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; uint8_t v___x_2707_; 
v_a_2703_ = lean_ctor_get(v_a_2698_, 0);
lean_inc(v_a_2703_);
lean_dec_ref_known(v_a_2698_, 1);
v_inheritedTraceOptions_2704_ = lean_ctor_get(v_toCold_2699_, 11);
v___x_2705_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_2693_);
v___x_2706_ = l_Lean_Name_append(v___x_2705_, v___y_2693_);
v___x_2707_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2704_, v_options_2700_, v___x_2706_);
lean_dec(v___x_2706_);
if (v___x_2707_ == 0)
{
lean_dec(v___y_2693_);
v___y_2659_ = v___y_2692_;
v___y_2660_ = v_a_2703_;
goto v___jp_2658_;
}
else
{
lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2708_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1);
v___x_2709_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___y_2693_, v___x_2708_, v___y_2691_, v___y_2694_, v___y_2695_, v___y_2696_);
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_dec_ref_known(v___x_2709_, 1);
v___y_2659_ = v___y_2692_;
v___y_2660_ = v_a_2703_;
goto v___jp_2658_;
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_dec(v_a_2703_);
lean_dec_ref(v___y_2692_);
lean_dec_ref(v_unusedHypotheses_2641_);
lean_dec(v_goal_2640_);
v_a_2710_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___x_2709_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_2718_; lean_object* v_options_2719_; uint8_t v_hasTrace_2720_; 
lean_dec_ref(v___y_2692_);
lean_dec_ref(v_unusedHypotheses_2641_);
lean_dec(v_goal_2640_);
v_toCold_2718_ = lean_ctor_get(v___y_2695_, 0);
v_options_2719_ = lean_ctor_get(v_toCold_2718_, 2);
v_hasTrace_2720_ = lean_ctor_get_uint8(v_options_2719_, sizeof(void*)*1);
if (v_hasTrace_2720_ == 0)
{
lean_object* v_a_2721_; 
lean_dec(v___y_2693_);
v_a_2721_ = lean_ctor_get(v_a_2698_, 0);
lean_inc(v_a_2721_);
lean_dec_ref_known(v_a_2698_, 1);
v___y_2666_ = v_a_2721_;
v___y_2667_ = v___y_2691_;
v___y_2668_ = v___y_2694_;
v___y_2669_ = v___y_2695_;
v___y_2670_ = v___y_2696_;
goto v___jp_2665_;
}
else
{
lean_object* v_a_2722_; lean_object* v_inheritedTraceOptions_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; uint8_t v___x_2726_; 
v_a_2722_ = lean_ctor_get(v_a_2698_, 0);
lean_inc(v_a_2722_);
lean_dec_ref_known(v_a_2698_, 1);
v_inheritedTraceOptions_2723_ = lean_ctor_get(v_toCold_2718_, 11);
v___x_2724_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_2693_);
v___x_2725_ = l_Lean_Name_append(v___x_2724_, v___y_2693_);
v___x_2726_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2723_, v_options_2719_, v___x_2725_);
lean_dec(v___x_2725_);
if (v___x_2726_ == 0)
{
lean_dec(v___y_2693_);
v___y_2666_ = v_a_2722_;
v___y_2667_ = v___y_2691_;
v___y_2668_ = v___y_2694_;
v___y_2669_ = v___y_2695_;
v___y_2670_ = v___y_2696_;
goto v___jp_2665_;
}
else
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2727_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3);
v___x_2728_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___y_2693_, v___x_2727_, v___y_2691_, v___y_2694_, v___y_2695_, v___y_2696_);
if (lean_obj_tag(v___x_2728_) == 0)
{
lean_dec_ref_known(v___x_2728_, 1);
v___y_2666_ = v_a_2722_;
v___y_2667_ = v___y_2691_;
v___y_2668_ = v___y_2694_;
v___y_2669_ = v___y_2695_;
v___y_2670_ = v___y_2696_;
goto v___jp_2665_;
}
else
{
lean_object* v_a_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2736_; 
lean_dec(v_a_2722_);
lean_dec_ref(v_reflectionResult_2642_);
lean_dec_ref(v_ctx_2637_);
v_a_2729_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2731_ = v___x_2728_;
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_a_2729_);
lean_dec(v___x_2728_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2736_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2734_; 
if (v_isShared_2732_ == 0)
{
v___x_2734_ = v___x_2731_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v_a_2729_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
return v___x_2734_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec_ref(v_reflectionResult_2642_);
lean_dec_ref(v_unusedHypotheses_2641_);
lean_dec(v_goal_2640_);
lean_dec_ref(v_ctx_2637_);
v_a_2737_ = lean_ctor_get(v___y_2697_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___y_2697_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___y_2697_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___y_2697_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
v___x_2742_ = v___x_2739_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_a_2737_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
v___jp_2745_:
{
lean_object* v___x_2757_; double v___x_2758_; double v___x_2759_; double v___x_2760_; double v___x_2761_; double v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; 
v___x_2757_ = lean_io_mono_nanos_now();
v___x_2758_ = lean_float_of_nat(v___y_2754_);
v___x_2759_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_2760_ = lean_float_div(v___x_2758_, v___x_2759_);
v___x_2761_ = lean_float_of_nat(v___x_2757_);
v___x_2762_ = lean_float_div(v___x_2761_, v___x_2759_);
v___x_2763_ = lean_box_float(v___x_2760_);
v___x_2764_ = lean_box_float(v___x_2762_);
v___x_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2763_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2766_, 0, v_a_2756_);
lean_ctor_set(v___x_2766_, 1, v___x_2765_);
lean_inc(v___y_2751_);
v___x_2767_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_2751_, v___x_2643_, v___x_2644_, v___y_2746_, v___y_2750_, v___y_2747_, v___f_2645_, v___x_2766_, v___y_2748_, v___y_2753_, v___y_2752_, v___y_2755_);
v___y_2691_ = v___y_2748_;
v___y_2692_ = v___y_2749_;
v___y_2693_ = v___y_2751_;
v___y_2694_ = v___y_2753_;
v___y_2695_ = v___y_2752_;
v___y_2696_ = v___y_2755_;
v___y_2697_ = v___x_2767_;
goto v___jp_2690_;
}
v___jp_2768_:
{
lean_object* v___x_2780_; double v___x_2781_; double v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2780_ = lean_io_get_num_heartbeats();
v___x_2781_ = lean_float_of_nat(v___y_2772_);
v___x_2782_ = lean_float_of_nat(v___x_2780_);
v___x_2783_ = lean_box_float(v___x_2781_);
v___x_2784_ = lean_box_float(v___x_2782_);
v___x_2785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2783_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
v___x_2786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2786_, 0, v_a_2779_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
lean_inc(v___y_2775_);
v___x_2787_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_2775_, v___x_2643_, v___x_2644_, v___y_2769_, v___y_2774_, v___y_2770_, v___f_2645_, v___x_2786_, v___y_2771_, v___y_2777_, v___y_2776_, v___y_2778_);
v___y_2691_ = v___y_2771_;
v___y_2692_ = v___y_2773_;
v___y_2693_ = v___y_2775_;
v___y_2694_ = v___y_2777_;
v___y_2695_ = v___y_2776_;
v___y_2696_ = v___y_2778_;
v___y_2697_ = v___x_2787_;
goto v___jp_2690_;
}
v___jp_2788_:
{
lean_object* v___x_2804_; lean_object* v_a_2805_; uint8_t v___x_2806_; 
v___x_2804_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_2798_);
v_a_2805_ = lean_ctor_get(v___x_2804_, 0);
lean_inc(v_a_2805_);
lean_dec_ref(v___x_2804_);
v___x_2806_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_2790_, v___x_2646_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = lean_io_mono_nanos_now();
v___x_2808_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_2800_, v___y_2801_, v___y_2794_, v___y_2797_, v___y_2789_, v___y_2796_, v___y_2799_, v___y_2795_, v___y_2798_);
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2816_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2811_ = v___x_2808_;
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v___x_2808_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
lean_ctor_set_tag(v___x_2811_, 1);
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_a_2809_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
v___y_2746_ = v___y_2790_;
v___y_2747_ = v_a_2805_;
v___y_2748_ = v___y_2791_;
v___y_2749_ = v___y_2792_;
v___y_2750_ = v___y_2802_;
v___y_2751_ = v___y_2793_;
v___y_2752_ = v___y_2795_;
v___y_2753_ = v___y_2803_;
v___y_2754_ = v___x_2807_;
v___y_2755_ = v___y_2798_;
v_a_2756_ = v___x_2814_;
goto v___jp_2745_;
}
}
}
else
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
v_a_2817_ = lean_ctor_get(v___x_2808_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2808_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v___x_2808_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2808_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
lean_ctor_set_tag(v___x_2819_, 0);
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
v___y_2746_ = v___y_2790_;
v___y_2747_ = v_a_2805_;
v___y_2748_ = v___y_2791_;
v___y_2749_ = v___y_2792_;
v___y_2750_ = v___y_2802_;
v___y_2751_ = v___y_2793_;
v___y_2752_ = v___y_2795_;
v___y_2753_ = v___y_2803_;
v___y_2754_ = v___x_2807_;
v___y_2755_ = v___y_2798_;
v_a_2756_ = v___x_2822_;
goto v___jp_2745_;
}
}
}
}
else
{
lean_object* v___x_2825_; lean_object* v___x_2826_; 
v___x_2825_ = lean_io_get_num_heartbeats();
v___x_2826_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_2800_, v___y_2801_, v___y_2794_, v___y_2797_, v___y_2789_, v___y_2796_, v___y_2799_, v___y_2795_, v___y_2798_);
if (lean_obj_tag(v___x_2826_) == 0)
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
v_a_2827_ = lean_ctor_get(v___x_2826_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2826_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2826_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2826_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
lean_ctor_set_tag(v___x_2829_, 1);
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
v___y_2769_ = v___y_2790_;
v___y_2770_ = v_a_2805_;
v___y_2771_ = v___y_2791_;
v___y_2772_ = v___x_2825_;
v___y_2773_ = v___y_2792_;
v___y_2774_ = v___y_2802_;
v___y_2775_ = v___y_2793_;
v___y_2776_ = v___y_2795_;
v___y_2777_ = v___y_2803_;
v___y_2778_ = v___y_2798_;
v_a_2779_ = v___x_2832_;
goto v___jp_2768_;
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
v_a_2835_ = lean_ctor_get(v___x_2826_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2826_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2826_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2826_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
lean_ctor_set_tag(v___x_2837_, 0);
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
v___y_2769_ = v___y_2790_;
v___y_2770_ = v_a_2805_;
v___y_2771_ = v___y_2791_;
v___y_2772_ = v___x_2825_;
v___y_2773_ = v___y_2792_;
v___y_2774_ = v___y_2802_;
v___y_2775_ = v___y_2793_;
v___y_2776_ = v___y_2795_;
v___y_2777_ = v___y_2803_;
v___y_2778_ = v___y_2798_;
v_a_2779_ = v___x_2840_;
goto v___jp_2768_;
}
}
}
}
}
v___jp_2851_:
{
lean_object* v_toCold_2858_; lean_object* v_options_2859_; uint8_t v_hasTrace_2860_; 
v_toCold_2858_ = lean_ctor_get(v___y_2854_, 0);
v_options_2859_ = lean_ctor_get(v_toCold_2858_, 2);
v_hasTrace_2860_ = lean_ctor_get_uint8(v_options_2859_, sizeof(void*)*1);
if (v_hasTrace_2860_ == 0)
{
lean_object* v_fst_2861_; lean_object* v_snd_2862_; lean_object* v___x_2863_; 
lean_dec_ref(v___f_2645_);
lean_dec_ref(v___x_2644_);
v_fst_2861_ = lean_ctor_get(v_a_2857_, 0);
lean_inc(v_fst_2861_);
v_snd_2862_ = lean_ctor_get(v_a_2857_, 1);
lean_inc(v_snd_2862_);
lean_dec_ref(v_a_2857_);
lean_inc(v_timeout_2846_);
lean_inc_ref(v_lratPath_2845_);
lean_inc_ref(v_solver_2844_);
v___x_2863_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_2861_, v_solver_2844_, v_lratPath_2845_, v_trimProofs_2847_, v_timeout_2846_, v_binaryProofs_2848_, v_solverMode_2850_, v___y_2854_, v___y_2856_);
v___y_2691_ = v___y_2852_;
v___y_2692_ = v_snd_2862_;
v___y_2693_ = v___y_2853_;
v___y_2694_ = v___y_2855_;
v___y_2695_ = v___y_2854_;
v___y_2696_ = v___y_2856_;
v___y_2697_ = v___x_2863_;
goto v___jp_2690_;
}
else
{
lean_object* v_fst_2864_; lean_object* v_snd_2865_; lean_object* v_inheritedTraceOptions_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; uint8_t v___x_2869_; 
v_fst_2864_ = lean_ctor_get(v_a_2857_, 0);
lean_inc(v_fst_2864_);
v_snd_2865_ = lean_ctor_get(v_a_2857_, 1);
lean_inc(v_snd_2865_);
lean_dec_ref(v_a_2857_);
v_inheritedTraceOptions_2866_ = lean_ctor_get(v_toCold_2858_, 11);
v___x_2867_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_2853_);
v___x_2868_ = l_Lean_Name_append(v___x_2867_, v___y_2853_);
v___x_2869_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2866_, v_options_2859_, v___x_2868_);
lean_dec(v___x_2868_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2870_; uint8_t v___x_2871_; 
v___x_2870_ = l_Lean_trace_profiler;
v___x_2871_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_2859_, v___x_2870_);
if (v___x_2871_ == 0)
{
lean_object* v___x_2872_; 
lean_dec_ref(v___f_2645_);
lean_dec_ref(v___x_2644_);
lean_inc(v_timeout_2846_);
lean_inc_ref(v_lratPath_2845_);
lean_inc_ref(v_solver_2844_);
v___x_2872_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_2864_, v_solver_2844_, v_lratPath_2845_, v_trimProofs_2847_, v_timeout_2846_, v_binaryProofs_2848_, v_solverMode_2850_, v___y_2854_, v___y_2856_);
v___y_2691_ = v___y_2852_;
v___y_2692_ = v_snd_2865_;
v___y_2693_ = v___y_2853_;
v___y_2694_ = v___y_2855_;
v___y_2695_ = v___y_2854_;
v___y_2696_ = v___y_2856_;
v___y_2697_ = v___x_2872_;
goto v___jp_2690_;
}
else
{
lean_inc_ref(v_solver_2844_);
lean_inc_ref(v_lratPath_2845_);
lean_inc(v_timeout_2846_);
v___y_2789_ = v_timeout_2846_;
v___y_2790_ = v_options_2859_;
v___y_2791_ = v___y_2852_;
v___y_2792_ = v_snd_2865_;
v___y_2793_ = v___y_2853_;
v___y_2794_ = v_lratPath_2845_;
v___y_2795_ = v___y_2854_;
v___y_2796_ = v_binaryProofs_2848_;
v___y_2797_ = v_trimProofs_2847_;
v___y_2798_ = v___y_2856_;
v___y_2799_ = v_solverMode_2850_;
v___y_2800_ = v_fst_2864_;
v___y_2801_ = v_solver_2844_;
v___y_2802_ = v___x_2869_;
v___y_2803_ = v___y_2855_;
goto v___jp_2788_;
}
}
else
{
lean_inc_ref(v_solver_2844_);
lean_inc_ref(v_lratPath_2845_);
lean_inc(v_timeout_2846_);
v___y_2789_ = v_timeout_2846_;
v___y_2790_ = v_options_2859_;
v___y_2791_ = v___y_2852_;
v___y_2792_ = v_snd_2865_;
v___y_2793_ = v___y_2853_;
v___y_2794_ = v_lratPath_2845_;
v___y_2795_ = v___y_2854_;
v___y_2796_ = v_binaryProofs_2848_;
v___y_2797_ = v_trimProofs_2847_;
v___y_2798_ = v___y_2856_;
v___y_2799_ = v_solverMode_2850_;
v___y_2800_ = v_fst_2864_;
v___y_2801_ = v_solver_2844_;
v___y_2802_ = v___x_2869_;
v___y_2803_ = v___y_2855_;
goto v___jp_2788_;
}
}
}
v___jp_2873_:
{
if (lean_obj_tag(v___y_2879_) == 0)
{
lean_object* v_a_2880_; 
v_a_2880_ = lean_ctor_get(v___y_2879_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v___y_2879_, 1);
v___y_2852_ = v___y_2874_;
v___y_2853_ = v___y_2875_;
v___y_2854_ = v___y_2877_;
v___y_2855_ = v___y_2876_;
v___y_2856_ = v___y_2878_;
v_a_2857_ = v_a_2880_;
goto v___jp_2851_;
}
else
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2888_; 
lean_dec(v___y_2875_);
lean_dec_ref(v___f_2645_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v_reflectionResult_2642_);
lean_dec_ref(v_unusedHypotheses_2641_);
lean_dec(v_goal_2640_);
lean_dec_ref(v_ctx_2637_);
v_a_2881_ = lean_ctor_get(v___y_2879_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___y_2879_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2883_ = v___y_2879_;
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v___y_2879_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2886_; 
if (v_isShared_2884_ == 0)
{
v___x_2886_ = v___x_2883_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v_a_2881_);
v___x_2886_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
return v___x_2886_;
}
}
}
}
v___jp_2889_:
{
lean_object* v___x_2900_; double v___x_2901_; double v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2900_ = lean_io_get_num_heartbeats();
v___x_2901_ = lean_float_of_nat(v___y_2892_);
v___x_2902_ = lean_float_of_nat(v___x_2900_);
v___x_2903_ = lean_box_float(v___x_2901_);
v___x_2904_ = lean_box_float(v___x_2902_);
v___x_2905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2903_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
v___x_2906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2906_, 0, v_a_2899_);
lean_ctor_set(v___x_2906_, 1, v___x_2905_);
lean_inc_ref(v___x_2644_);
lean_inc(v___y_2894_);
v___x_2907_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_2894_, v___x_2643_, v___x_2644_, v___y_2898_, v___y_2893_, v___y_2890_, v___f_2647_, v___x_2906_, v___y_2891_, v___y_2896_, v___y_2895_, v___y_2897_);
v___y_2874_ = v___y_2891_;
v___y_2875_ = v___y_2894_;
v___y_2876_ = v___y_2896_;
v___y_2877_ = v___y_2895_;
v___y_2878_ = v___y_2897_;
v___y_2879_ = v___x_2907_;
goto v___jp_2873_;
}
v___jp_2908_:
{
lean_object* v___x_2919_; double v___x_2920_; double v___x_2921_; double v___x_2922_; double v___x_2923_; double v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2919_ = lean_io_mono_nanos_now();
v___x_2920_ = lean_float_of_nat(v___y_2911_);
v___x_2921_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_2922_ = lean_float_div(v___x_2920_, v___x_2921_);
v___x_2923_ = lean_float_of_nat(v___x_2919_);
v___x_2924_ = lean_float_div(v___x_2923_, v___x_2921_);
v___x_2925_ = lean_box_float(v___x_2922_);
v___x_2926_ = lean_box_float(v___x_2924_);
v___x_2927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2925_);
lean_ctor_set(v___x_2927_, 1, v___x_2926_);
v___x_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2928_, 0, v_a_2918_);
lean_ctor_set(v___x_2928_, 1, v___x_2927_);
lean_inc_ref(v___x_2644_);
lean_inc(v___y_2913_);
v___x_2929_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_2913_, v___x_2643_, v___x_2644_, v___y_2917_, v___y_2912_, v___y_2909_, v___f_2647_, v___x_2928_, v___y_2910_, v___y_2915_, v___y_2914_, v___y_2916_);
v___y_2874_ = v___y_2910_;
v___y_2875_ = v___y_2913_;
v___y_2876_ = v___y_2915_;
v___y_2877_ = v___y_2914_;
v___y_2878_ = v___y_2916_;
v___y_2879_ = v___x_2929_;
goto v___jp_2873_;
}
v___jp_2930_:
{
lean_object* v___x_2939_; lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2993_; 
v___x_2939_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_2938_);
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2942_ = v___x_2939_;
v_isShared_2943_ = v_isSharedCheck_2993_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2939_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2993_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
uint8_t v___x_2944_; 
v___x_2944_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_2937_, v___x_2646_);
if (v___x_2944_ == 0)
{
lean_object* v___x_2945_; lean_object* v___x_2946_; 
v___x_2945_ = lean_io_mono_nanos_now();
v___x_2946_ = l_IO_lazyPure___redArg(v___f_2648_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2954_; 
lean_del_object(v___x_2942_);
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2954_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2954_ == 0)
{
v___x_2949_ = v___x_2946_;
v_isShared_2950_ = v_isSharedCheck_2954_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_a_2947_);
lean_dec(v___x_2946_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2954_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v___x_2952_; 
if (v_isShared_2950_ == 0)
{
lean_ctor_set_tag(v___x_2949_, 1);
v___x_2952_ = v___x_2949_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_a_2947_);
v___x_2952_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
v___y_2909_ = v_a_2940_;
v___y_2910_ = v___y_2931_;
v___y_2911_ = v___x_2945_;
v___y_2912_ = v___y_2932_;
v___y_2913_ = v___y_2934_;
v___y_2914_ = v___y_2936_;
v___y_2915_ = v___y_2935_;
v___y_2916_ = v___y_2938_;
v___y_2917_ = v___y_2937_;
v_a_2918_ = v___x_2952_;
goto v___jp_2908_;
}
}
}
else
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2968_; 
v_a_2955_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2957_ = v___x_2946_;
v_isShared_2958_ = v_isSharedCheck_2968_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v___x_2946_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2968_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2959_; lean_object* v___x_2961_; 
v___x_2959_ = lean_io_error_to_string(v_a_2955_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set_tag(v___x_2957_, 3);
lean_ctor_set(v___x_2957_, 0, v___x_2959_);
v___x_2961_ = v___x_2957_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v___x_2959_);
v___x_2961_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2965_; 
v___x_2962_ = l_Lean_MessageData_ofFormat(v___x_2961_);
lean_inc(v___y_2933_);
v___x_2963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2963_, 0, v___y_2933_);
lean_ctor_set(v___x_2963_, 1, v___x_2962_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 0, v___x_2963_);
v___x_2965_ = v___x_2942_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v___x_2963_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
v___y_2909_ = v_a_2940_;
v___y_2910_ = v___y_2931_;
v___y_2911_ = v___x_2945_;
v___y_2912_ = v___y_2932_;
v___y_2913_ = v___y_2934_;
v___y_2914_ = v___y_2936_;
v___y_2915_ = v___y_2935_;
v___y_2916_ = v___y_2938_;
v___y_2917_ = v___y_2937_;
v_a_2918_ = v___x_2965_;
goto v___jp_2908_;
}
}
}
}
}
else
{
lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2969_ = lean_io_get_num_heartbeats();
v___x_2970_ = l_IO_lazyPure___redArg(v___f_2648_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2978_; 
lean_del_object(v___x_2942_);
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_2978_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2973_ = v___x_2970_;
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_dec(v___x_2970_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2976_; 
if (v_isShared_2974_ == 0)
{
lean_ctor_set_tag(v___x_2973_, 1);
v___x_2976_ = v___x_2973_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_a_2971_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
v___y_2890_ = v_a_2940_;
v___y_2891_ = v___y_2931_;
v___y_2892_ = v___x_2969_;
v___y_2893_ = v___y_2932_;
v___y_2894_ = v___y_2934_;
v___y_2895_ = v___y_2936_;
v___y_2896_ = v___y_2935_;
v___y_2897_ = v___y_2938_;
v___y_2898_ = v___y_2937_;
v_a_2899_ = v___x_2976_;
goto v___jp_2889_;
}
}
}
else
{
lean_object* v_a_2979_; lean_object* v___x_2981_; uint8_t v_isShared_2982_; uint8_t v_isSharedCheck_2992_; 
v_a_2979_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2981_ = v___x_2970_;
v_isShared_2982_ = v_isSharedCheck_2992_;
goto v_resetjp_2980_;
}
else
{
lean_inc(v_a_2979_);
lean_dec(v___x_2970_);
v___x_2981_ = lean_box(0);
v_isShared_2982_ = v_isSharedCheck_2992_;
goto v_resetjp_2980_;
}
v_resetjp_2980_:
{
lean_object* v___x_2983_; lean_object* v___x_2985_; 
v___x_2983_ = lean_io_error_to_string(v_a_2979_);
if (v_isShared_2982_ == 0)
{
lean_ctor_set_tag(v___x_2981_, 3);
lean_ctor_set(v___x_2981_, 0, v___x_2983_);
v___x_2985_ = v___x_2981_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2983_);
v___x_2985_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2989_; 
v___x_2986_ = l_Lean_MessageData_ofFormat(v___x_2985_);
lean_inc(v___y_2933_);
v___x_2987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2987_, 0, v___y_2933_);
lean_ctor_set(v___x_2987_, 1, v___x_2986_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 0, v___x_2987_);
v___x_2989_ = v___x_2942_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v___x_2987_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
v___y_2890_ = v_a_2940_;
v___y_2891_ = v___y_2931_;
v___y_2892_ = v___x_2969_;
v___y_2893_ = v___y_2932_;
v___y_2894_ = v___y_2934_;
v___y_2895_ = v___y_2936_;
v___y_2896_ = v___y_2935_;
v___y_2897_ = v___y_2938_;
v___y_2898_ = v___y_2937_;
v_a_2899_ = v___x_2989_;
goto v___jp_2889_;
}
}
}
}
}
}
}
v___jp_2994_:
{
lean_object* v_options_3001_; lean_object* v_inheritedTraceOptions_3002_; uint8_t v_hasTrace_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v_options_3001_ = lean_ctor_get(v_toCold_2998_, 2);
v_inheritedTraceOptions_3002_ = lean_ctor_get(v_toCold_2998_, 11);
v_hasTrace_3003_ = lean_ctor_get_uint8(v_options_3001_, sizeof(void*)*1);
v___x_3004_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2));
v___x_3005_ = l_Lean_Name_mkStr3(v___x_2649_, v___x_2650_, v___x_3004_);
if (v_hasTrace_3003_ == 0)
{
lean_object* v___x_3006_; 
lean_dec_ref(v___f_2647_);
v___x_3006_ = l_IO_lazyPure___redArg(v___f_2648_);
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_object* v_a_3007_; 
v_a_3007_ = lean_ctor_get(v___x_3006_, 0);
lean_inc(v_a_3007_);
lean_dec_ref_known(v___x_3006_, 1);
v___y_2852_ = v___y_2995_;
v___y_2853_ = v___x_3005_;
v___y_2854_ = v___y_2997_;
v___y_2855_ = v___y_2996_;
v___y_2856_ = v___y_3000_;
v_a_2857_ = v_a_3007_;
goto v___jp_2851_;
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3019_; 
lean_dec(v___x_3005_);
lean_dec_ref(v___f_2645_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v_reflectionResult_2642_);
lean_dec_ref(v_unusedHypotheses_2641_);
lean_dec(v_goal_2640_);
lean_dec_ref(v_ctx_2637_);
v_a_3008_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3010_ = v___x_3006_;
v_isShared_3011_ = v_isSharedCheck_3019_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_3006_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3019_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3017_; 
v___x_3012_ = lean_io_error_to_string(v_a_3008_);
v___x_3013_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3012_);
v___x_3014_ = l_Lean_MessageData_ofFormat(v___x_3013_);
lean_inc(v_ref_2999_);
v___x_3015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3015_, 0, v_ref_2999_);
lean_ctor_set(v___x_3015_, 1, v___x_3014_);
if (v_isShared_3011_ == 0)
{
lean_ctor_set(v___x_3010_, 0, v___x_3015_);
v___x_3017_ = v___x_3010_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v___x_3015_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
else
{
lean_object* v___x_3020_; lean_object* v___x_3021_; uint8_t v___x_3022_; 
v___x_3020_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___x_3005_);
v___x_3021_ = l_Lean_Name_append(v___x_3020_, v___x_3005_);
v___x_3022_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3002_, v_options_3001_, v___x_3021_);
lean_dec(v___x_3021_);
if (v___x_3022_ == 0)
{
lean_object* v___x_3023_; uint8_t v___x_3024_; 
v___x_3023_ = l_Lean_trace_profiler;
v___x_3024_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_3001_, v___x_3023_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; 
lean_dec_ref(v___f_2647_);
v___x_3025_ = l_IO_lazyPure___redArg(v___f_2648_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v_a_3026_; 
v_a_3026_ = lean_ctor_get(v___x_3025_, 0);
lean_inc(v_a_3026_);
lean_dec_ref_known(v___x_3025_, 1);
v___y_2852_ = v___y_2995_;
v___y_2853_ = v___x_3005_;
v___y_2854_ = v___y_2997_;
v___y_2855_ = v___y_2996_;
v___y_2856_ = v___y_3000_;
v_a_2857_ = v_a_3026_;
goto v___jp_2851_;
}
else
{
lean_object* v_a_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3038_; 
lean_dec(v___x_3005_);
lean_dec_ref(v___f_2645_);
lean_dec_ref(v___x_2644_);
lean_dec_ref(v_reflectionResult_2642_);
lean_dec_ref(v_unusedHypotheses_2641_);
lean_dec(v_goal_2640_);
lean_dec_ref(v_ctx_2637_);
v_a_3027_ = lean_ctor_get(v___x_3025_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3025_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3029_ = v___x_3025_;
v_isShared_3030_ = v_isSharedCheck_3038_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_a_3027_);
lean_dec(v___x_3025_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3038_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3036_; 
v___x_3031_ = lean_io_error_to_string(v_a_3027_);
v___x_3032_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3031_);
v___x_3033_ = l_Lean_MessageData_ofFormat(v___x_3032_);
lean_inc(v_ref_2999_);
v___x_3034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3034_, 0, v_ref_2999_);
lean_ctor_set(v___x_3034_, 1, v___x_3033_);
if (v_isShared_3030_ == 0)
{
lean_ctor_set(v___x_3029_, 0, v___x_3034_);
v___x_3036_ = v___x_3029_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v___x_3034_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
else
{
v___y_2931_ = v___y_2995_;
v___y_2932_ = v___x_3022_;
v___y_2933_ = v_ref_2999_;
v___y_2934_ = v___x_3005_;
v___y_2935_ = v___y_2996_;
v___y_2936_ = v___y_2997_;
v___y_2937_ = v_options_3001_;
v___y_2938_ = v___y_3000_;
goto v___jp_2930_;
}
}
else
{
v___y_2931_ = v___y_2995_;
v___y_2932_ = v___x_3022_;
v___y_2933_ = v_ref_2999_;
v___y_2934_ = v___x_3005_;
v___y_2935_ = v___y_2996_;
v___y_2936_ = v___y_2997_;
v___y_2937_ = v_options_3001_;
v___y_2938_ = v___y_3000_;
goto v___jp_2930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7___boxed(lean_object** _args){
lean_object* v_ctx_3058_ = _args[0];
lean_object* v___x_3059_ = _args[1];
lean_object* v_atomsAssignment_3060_ = _args[2];
lean_object* v_goal_3061_ = _args[3];
lean_object* v_unusedHypotheses_3062_ = _args[4];
lean_object* v_reflectionResult_3063_ = _args[5];
lean_object* v___x_3064_ = _args[6];
lean_object* v___x_3065_ = _args[7];
lean_object* v___f_3066_ = _args[8];
lean_object* v___x_3067_ = _args[9];
lean_object* v___f_3068_ = _args[10];
lean_object* v___f_3069_ = _args[11];
lean_object* v___x_3070_ = _args[12];
lean_object* v___x_3071_ = _args[13];
lean_object* v_a_3072_ = _args[14];
lean_object* v_____r_3073_ = _args[15];
lean_object* v___y_3074_ = _args[16];
lean_object* v___y_3075_ = _args[17];
lean_object* v___y_3076_ = _args[18];
lean_object* v___y_3077_ = _args[19];
lean_object* v___y_3078_ = _args[20];
_start:
{
uint8_t v___x_71484__boxed_3079_; lean_object* v_res_3080_; 
v___x_71484__boxed_3079_ = lean_unbox(v___x_3064_);
v_res_3080_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7(v_ctx_3058_, v___x_3059_, v_atomsAssignment_3060_, v_goal_3061_, v_unusedHypotheses_3062_, v_reflectionResult_3063_, v___x_71484__boxed_3079_, v___x_3065_, v___f_3066_, v___x_3067_, v___f_3068_, v___f_3069_, v___x_3070_, v___x_3071_, v_a_3072_, v_____r_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_);
lean_dec(v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
lean_dec_ref(v___x_3067_);
lean_dec_ref(v_atomsAssignment_3060_);
lean_dec(v___x_3059_);
return v_res_3080_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__12(lean_object* v_e_3081_){
_start:
{
if (lean_obj_tag(v_e_3081_) == 0)
{
uint8_t v___x_3082_; 
v___x_3082_ = 2;
return v___x_3082_;
}
else
{
uint8_t v___x_3083_; 
v___x_3083_ = 0;
return v___x_3083_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__12___boxed(lean_object* v_e_3084_){
_start:
{
uint8_t v_res_3085_; lean_object* v_r_3086_; 
v_res_3085_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__12(v_e_3084_);
lean_dec_ref(v_e_3084_);
v_r_3086_ = lean_box(v_res_3085_);
return v_r_3086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(lean_object* v_cls_3087_, uint8_t v_collapsed_3088_, lean_object* v_tag_3089_, lean_object* v_opts_3090_, uint8_t v_clsEnabled_3091_, lean_object* v_oldTraces_3092_, lean_object* v_msg_3093_, lean_object* v_resStartStop_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_){
_start:
{
lean_object* v_fst_3100_; lean_object* v_snd_3101_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v_data_3105_; lean_object* v_fst_3116_; lean_object* v_snd_3117_; lean_object* v___x_3118_; uint8_t v___x_3119_; lean_object* v___y_3121_; lean_object* v_a_3122_; uint8_t v___y_3137_; double v___y_3168_; 
v_fst_3100_ = lean_ctor_get(v_resStartStop_3094_, 0);
lean_inc(v_fst_3100_);
v_snd_3101_ = lean_ctor_get(v_resStartStop_3094_, 1);
lean_inc(v_snd_3101_);
lean_dec_ref(v_resStartStop_3094_);
v_fst_3116_ = lean_ctor_get(v_snd_3101_, 0);
lean_inc(v_fst_3116_);
v_snd_3117_ = lean_ctor_get(v_snd_3101_, 1);
lean_inc(v_snd_3117_);
lean_dec(v_snd_3101_);
v___x_3118_ = l_Lean_trace_profiler;
v___x_3119_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_3090_, v___x_3118_);
if (v___x_3119_ == 0)
{
v___y_3137_ = v___x_3119_;
goto v___jp_3136_;
}
else
{
lean_object* v___x_3173_; uint8_t v___x_3174_; 
v___x_3173_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3174_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_3090_, v___x_3173_);
if (v___x_3174_ == 0)
{
lean_object* v___x_3175_; lean_object* v___x_3176_; double v___x_3177_; double v___x_3178_; double v___x_3179_; 
v___x_3175_ = l_Lean_trace_profiler_threshold;
v___x_3176_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_3090_, v___x_3175_);
v___x_3177_ = lean_float_of_nat(v___x_3176_);
v___x_3178_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3);
v___x_3179_ = lean_float_div(v___x_3177_, v___x_3178_);
v___y_3168_ = v___x_3179_;
goto v___jp_3167_;
}
else
{
lean_object* v___x_3180_; lean_object* v___x_3181_; double v___x_3182_; 
v___x_3180_ = l_Lean_trace_profiler_threshold;
v___x_3181_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_3090_, v___x_3180_);
v___x_3182_ = lean_float_of_nat(v___x_3181_);
v___y_3168_ = v___x_3182_;
goto v___jp_3167_;
}
}
v___jp_3102_:
{
lean_object* v___x_3106_; 
lean_inc(v___y_3103_);
v___x_3106_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(v_oldTraces_3092_, v_data_3105_, v___y_3103_, v___y_3104_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v___x_3107_; 
lean_dec_ref_known(v___x_3106_, 1);
v___x_3107_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_3100_);
return v___x_3107_;
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3115_; 
lean_dec(v_fst_3100_);
v_a_3108_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3110_ = v___x_3106_;
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3106_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3115_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___x_3113_; 
if (v_isShared_3111_ == 0)
{
v___x_3113_ = v___x_3110_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_a_3108_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
return v___x_3113_;
}
}
}
}
v___jp_3120_:
{
uint8_t v_result_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; double v___x_3126_; lean_object* v_data_3127_; 
v_result_3123_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__12(v_fst_3100_);
v___x_3124_ = lean_box(v_result_3123_);
v___x_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
v___x_3126_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0);
lean_inc_ref(v_tag_3089_);
lean_inc_ref(v___x_3125_);
lean_inc(v_cls_3087_);
v_data_3127_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3127_, 0, v_cls_3087_);
lean_ctor_set(v_data_3127_, 1, v___x_3125_);
lean_ctor_set(v_data_3127_, 2, v_tag_3089_);
lean_ctor_set_float(v_data_3127_, sizeof(void*)*3, v___x_3126_);
lean_ctor_set_float(v_data_3127_, sizeof(void*)*3 + 8, v___x_3126_);
lean_ctor_set_uint8(v_data_3127_, sizeof(void*)*3 + 16, v_collapsed_3088_);
if (v___x_3119_ == 0)
{
lean_dec_ref_known(v___x_3125_, 1);
lean_dec(v_snd_3117_);
lean_dec(v_fst_3116_);
lean_dec_ref(v_tag_3089_);
lean_dec(v_cls_3087_);
v___y_3103_ = v___y_3121_;
v___y_3104_ = v_a_3122_;
v_data_3105_ = v_data_3127_;
goto v___jp_3102_;
}
else
{
lean_object* v_data_3128_; double v___x_3129_; double v___x_3130_; 
lean_dec_ref_known(v_data_3127_, 3);
v_data_3128_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3128_, 0, v_cls_3087_);
lean_ctor_set(v_data_3128_, 1, v___x_3125_);
lean_ctor_set(v_data_3128_, 2, v_tag_3089_);
v___x_3129_ = lean_unbox_float(v_fst_3116_);
lean_dec(v_fst_3116_);
lean_ctor_set_float(v_data_3128_, sizeof(void*)*3, v___x_3129_);
v___x_3130_ = lean_unbox_float(v_snd_3117_);
lean_dec(v_snd_3117_);
lean_ctor_set_float(v_data_3128_, sizeof(void*)*3 + 8, v___x_3130_);
lean_ctor_set_uint8(v_data_3128_, sizeof(void*)*3 + 16, v_collapsed_3088_);
v___y_3103_ = v___y_3121_;
v___y_3104_ = v_a_3122_;
v_data_3105_ = v_data_3128_;
goto v___jp_3102_;
}
}
v___jp_3131_:
{
lean_object* v_ref_3132_; lean_object* v___x_3133_; 
v_ref_3132_ = lean_ctor_get(v___y_3097_, 2);
lean_inc(v___y_3098_);
lean_inc_ref(v___y_3097_);
lean_inc(v___y_3096_);
lean_inc_ref(v___y_3095_);
lean_inc(v_fst_3100_);
v___x_3133_ = lean_apply_6(v_msg_3093_, v_fst_3100_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, lean_box(0));
if (lean_obj_tag(v___x_3133_) == 0)
{
lean_object* v_a_3134_; 
v_a_3134_ = lean_ctor_get(v___x_3133_, 0);
lean_inc(v_a_3134_);
lean_dec_ref_known(v___x_3133_, 1);
v___y_3121_ = v_ref_3132_;
v_a_3122_ = v_a_3134_;
goto v___jp_3120_;
}
else
{
lean_object* v___x_3135_; 
lean_dec_ref_known(v___x_3133_, 1);
v___x_3135_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2);
v___y_3121_ = v_ref_3132_;
v_a_3122_ = v___x_3135_;
goto v___jp_3120_;
}
}
v___jp_3136_:
{
if (v_clsEnabled_3091_ == 0)
{
if (v___y_3137_ == 0)
{
lean_object* v___x_3138_; lean_object* v_traceState_3139_; lean_object* v_env_3140_; lean_object* v_nextMacroScope_3141_; lean_object* v_ngen_3142_; lean_object* v_auxDeclNGen_3143_; lean_object* v_cache_3144_; lean_object* v_messages_3145_; lean_object* v_infoState_3146_; lean_object* v_snapshotTasks_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3166_; 
lean_dec(v_snd_3117_);
lean_dec(v_fst_3116_);
lean_dec_ref(v_msg_3093_);
lean_dec_ref(v_tag_3089_);
lean_dec(v_cls_3087_);
v___x_3138_ = lean_st_ref_take(v___y_3098_);
v_traceState_3139_ = lean_ctor_get(v___x_3138_, 4);
v_env_3140_ = lean_ctor_get(v___x_3138_, 0);
v_nextMacroScope_3141_ = lean_ctor_get(v___x_3138_, 1);
v_ngen_3142_ = lean_ctor_get(v___x_3138_, 2);
v_auxDeclNGen_3143_ = lean_ctor_get(v___x_3138_, 3);
v_cache_3144_ = lean_ctor_get(v___x_3138_, 5);
v_messages_3145_ = lean_ctor_get(v___x_3138_, 6);
v_infoState_3146_ = lean_ctor_get(v___x_3138_, 7);
v_snapshotTasks_3147_ = lean_ctor_get(v___x_3138_, 8);
v_isSharedCheck_3166_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3166_ == 0)
{
v___x_3149_ = v___x_3138_;
v_isShared_3150_ = v_isSharedCheck_3166_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_snapshotTasks_3147_);
lean_inc(v_infoState_3146_);
lean_inc(v_messages_3145_);
lean_inc(v_cache_3144_);
lean_inc(v_traceState_3139_);
lean_inc(v_auxDeclNGen_3143_);
lean_inc(v_ngen_3142_);
lean_inc(v_nextMacroScope_3141_);
lean_inc(v_env_3140_);
lean_dec(v___x_3138_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3166_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
uint64_t v_tid_3151_; lean_object* v_traces_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3165_; 
v_tid_3151_ = lean_ctor_get_uint64(v_traceState_3139_, sizeof(void*)*1);
v_traces_3152_ = lean_ctor_get(v_traceState_3139_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v_traceState_3139_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3154_ = v_traceState_3139_;
v_isShared_3155_ = v_isSharedCheck_3165_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_traces_3152_);
lean_dec(v_traceState_3139_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3165_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3156_; lean_object* v___x_3158_; 
v___x_3156_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3092_, v_traces_3152_);
lean_dec_ref(v_traces_3152_);
if (v_isShared_3155_ == 0)
{
lean_ctor_set(v___x_3154_, 0, v___x_3156_);
v___x_3158_ = v___x_3154_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v___x_3156_);
lean_ctor_set_uint64(v_reuseFailAlloc_3164_, sizeof(void*)*1, v_tid_3151_);
v___x_3158_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
lean_object* v___x_3160_; 
if (v_isShared_3150_ == 0)
{
lean_ctor_set(v___x_3149_, 4, v___x_3158_);
v___x_3160_ = v___x_3149_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_env_3140_);
lean_ctor_set(v_reuseFailAlloc_3163_, 1, v_nextMacroScope_3141_);
lean_ctor_set(v_reuseFailAlloc_3163_, 2, v_ngen_3142_);
lean_ctor_set(v_reuseFailAlloc_3163_, 3, v_auxDeclNGen_3143_);
lean_ctor_set(v_reuseFailAlloc_3163_, 4, v___x_3158_);
lean_ctor_set(v_reuseFailAlloc_3163_, 5, v_cache_3144_);
lean_ctor_set(v_reuseFailAlloc_3163_, 6, v_messages_3145_);
lean_ctor_set(v_reuseFailAlloc_3163_, 7, v_infoState_3146_);
lean_ctor_set(v_reuseFailAlloc_3163_, 8, v_snapshotTasks_3147_);
v___x_3160_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3161_ = lean_st_ref_put(v___y_3098_, v___x_3160_);
v___x_3162_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_3100_);
return v___x_3162_;
}
}
}
}
}
else
{
goto v___jp_3131_;
}
}
else
{
goto v___jp_3131_;
}
}
v___jp_3167_:
{
double v___x_3169_; double v___x_3170_; double v___x_3171_; uint8_t v___x_3172_; 
v___x_3169_ = lean_unbox_float(v_snd_3117_);
v___x_3170_ = lean_unbox_float(v_fst_3116_);
v___x_3171_ = lean_float_sub(v___x_3169_, v___x_3170_);
v___x_3172_ = lean_float_decLt(v___y_3168_, v___x_3171_);
v___y_3137_ = v___x_3172_;
goto v___jp_3136_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5___boxed(lean_object* v_cls_3183_, lean_object* v_collapsed_3184_, lean_object* v_tag_3185_, lean_object* v_opts_3186_, lean_object* v_clsEnabled_3187_, lean_object* v_oldTraces_3188_, lean_object* v_msg_3189_, lean_object* v_resStartStop_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_){
_start:
{
uint8_t v_collapsed_boxed_3196_; uint8_t v_clsEnabled_boxed_3197_; lean_object* v_res_3198_; 
v_collapsed_boxed_3196_ = lean_unbox(v_collapsed_3184_);
v_clsEnabled_boxed_3197_ = lean_unbox(v_clsEnabled_3187_);
v_res_3198_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v_cls_3183_, v_collapsed_boxed_3196_, v_tag_3185_, v_opts_3186_, v_clsEnabled_boxed_3197_, v_oldTraces_3188_, v_msg_3189_, v_resStartStop_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_);
lean_dec(v___y_3194_);
lean_dec_ref(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3191_);
lean_dec_ref(v_opts_3186_);
return v_res_3198_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__14(lean_object* v_e_3199_){
_start:
{
if (lean_obj_tag(v_e_3199_) == 0)
{
uint8_t v___x_3200_; 
v___x_3200_ = 2;
return v___x_3200_;
}
else
{
uint8_t v___x_3201_; 
v___x_3201_ = 0;
return v___x_3201_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__14___boxed(lean_object* v_e_3202_){
_start:
{
uint8_t v_res_3203_; lean_object* v_r_3204_; 
v_res_3203_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__14(v_e_3202_);
lean_dec_ref(v_e_3202_);
v_r_3204_ = lean_box(v_res_3203_);
return v_r_3204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(lean_object* v_cls_3205_, uint8_t v_collapsed_3206_, lean_object* v_tag_3207_, lean_object* v_opts_3208_, uint8_t v_clsEnabled_3209_, lean_object* v_oldTraces_3210_, lean_object* v_msg_3211_, lean_object* v_resStartStop_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_){
_start:
{
lean_object* v_fst_3218_; lean_object* v_snd_3219_; lean_object* v___y_3221_; lean_object* v___y_3222_; lean_object* v_data_3223_; lean_object* v_fst_3234_; lean_object* v_snd_3235_; lean_object* v___x_3236_; uint8_t v___x_3237_; lean_object* v___y_3239_; lean_object* v_a_3240_; uint8_t v___y_3255_; double v___y_3286_; 
v_fst_3218_ = lean_ctor_get(v_resStartStop_3212_, 0);
lean_inc(v_fst_3218_);
v_snd_3219_ = lean_ctor_get(v_resStartStop_3212_, 1);
lean_inc(v_snd_3219_);
lean_dec_ref(v_resStartStop_3212_);
v_fst_3234_ = lean_ctor_get(v_snd_3219_, 0);
lean_inc(v_fst_3234_);
v_snd_3235_ = lean_ctor_get(v_snd_3219_, 1);
lean_inc(v_snd_3235_);
lean_dec(v_snd_3219_);
v___x_3236_ = l_Lean_trace_profiler;
v___x_3237_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_3208_, v___x_3236_);
if (v___x_3237_ == 0)
{
v___y_3255_ = v___x_3237_;
goto v___jp_3254_;
}
else
{
lean_object* v___x_3291_; uint8_t v___x_3292_; 
v___x_3291_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3292_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_3208_, v___x_3291_);
if (v___x_3292_ == 0)
{
lean_object* v___x_3293_; lean_object* v___x_3294_; double v___x_3295_; double v___x_3296_; double v___x_3297_; 
v___x_3293_ = l_Lean_trace_profiler_threshold;
v___x_3294_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_3208_, v___x_3293_);
v___x_3295_ = lean_float_of_nat(v___x_3294_);
v___x_3296_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3);
v___x_3297_ = lean_float_div(v___x_3295_, v___x_3296_);
v___y_3286_ = v___x_3297_;
goto v___jp_3285_;
}
else
{
lean_object* v___x_3298_; lean_object* v___x_3299_; double v___x_3300_; 
v___x_3298_ = l_Lean_trace_profiler_threshold;
v___x_3299_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_3208_, v___x_3298_);
v___x_3300_ = lean_float_of_nat(v___x_3299_);
v___y_3286_ = v___x_3300_;
goto v___jp_3285_;
}
}
v___jp_3220_:
{
lean_object* v___x_3224_; 
lean_inc(v___y_3221_);
v___x_3224_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(v_oldTraces_3210_, v_data_3223_, v___y_3221_, v___y_3222_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v___x_3225_; 
lean_dec_ref_known(v___x_3224_, 1);
v___x_3225_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_3218_);
return v___x_3225_;
}
else
{
lean_object* v_a_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3233_; 
lean_dec(v_fst_3218_);
v_a_3226_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3228_ = v___x_3224_;
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_a_3226_);
lean_dec(v___x_3224_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3231_; 
if (v_isShared_3229_ == 0)
{
v___x_3231_ = v___x_3228_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v_a_3226_);
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
v___jp_3238_:
{
uint8_t v_result_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; double v___x_3244_; lean_object* v_data_3245_; 
v_result_3241_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__14(v_fst_3218_);
v___x_3242_ = lean_box(v_result_3241_);
v___x_3243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
v___x_3244_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0);
lean_inc_ref(v_tag_3207_);
lean_inc_ref(v___x_3243_);
lean_inc(v_cls_3205_);
v_data_3245_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3245_, 0, v_cls_3205_);
lean_ctor_set(v_data_3245_, 1, v___x_3243_);
lean_ctor_set(v_data_3245_, 2, v_tag_3207_);
lean_ctor_set_float(v_data_3245_, sizeof(void*)*3, v___x_3244_);
lean_ctor_set_float(v_data_3245_, sizeof(void*)*3 + 8, v___x_3244_);
lean_ctor_set_uint8(v_data_3245_, sizeof(void*)*3 + 16, v_collapsed_3206_);
if (v___x_3237_ == 0)
{
lean_dec_ref_known(v___x_3243_, 1);
lean_dec(v_snd_3235_);
lean_dec(v_fst_3234_);
lean_dec_ref(v_tag_3207_);
lean_dec(v_cls_3205_);
v___y_3221_ = v___y_3239_;
v___y_3222_ = v_a_3240_;
v_data_3223_ = v_data_3245_;
goto v___jp_3220_;
}
else
{
lean_object* v_data_3246_; double v___x_3247_; double v___x_3248_; 
lean_dec_ref_known(v_data_3245_, 3);
v_data_3246_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3246_, 0, v_cls_3205_);
lean_ctor_set(v_data_3246_, 1, v___x_3243_);
lean_ctor_set(v_data_3246_, 2, v_tag_3207_);
v___x_3247_ = lean_unbox_float(v_fst_3234_);
lean_dec(v_fst_3234_);
lean_ctor_set_float(v_data_3246_, sizeof(void*)*3, v___x_3247_);
v___x_3248_ = lean_unbox_float(v_snd_3235_);
lean_dec(v_snd_3235_);
lean_ctor_set_float(v_data_3246_, sizeof(void*)*3 + 8, v___x_3248_);
lean_ctor_set_uint8(v_data_3246_, sizeof(void*)*3 + 16, v_collapsed_3206_);
v___y_3221_ = v___y_3239_;
v___y_3222_ = v_a_3240_;
v_data_3223_ = v_data_3246_;
goto v___jp_3220_;
}
}
v___jp_3249_:
{
lean_object* v_ref_3250_; lean_object* v___x_3251_; 
v_ref_3250_ = lean_ctor_get(v___y_3215_, 2);
lean_inc(v___y_3216_);
lean_inc_ref(v___y_3215_);
lean_inc(v___y_3214_);
lean_inc_ref(v___y_3213_);
lean_inc(v_fst_3218_);
v___x_3251_ = lean_apply_6(v_msg_3211_, v_fst_3218_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, lean_box(0));
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3252_);
lean_dec_ref_known(v___x_3251_, 1);
v___y_3239_ = v_ref_3250_;
v_a_3240_ = v_a_3252_;
goto v___jp_3238_;
}
else
{
lean_object* v___x_3253_; 
lean_dec_ref_known(v___x_3251_, 1);
v___x_3253_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2);
v___y_3239_ = v_ref_3250_;
v_a_3240_ = v___x_3253_;
goto v___jp_3238_;
}
}
v___jp_3254_:
{
if (v_clsEnabled_3209_ == 0)
{
if (v___y_3255_ == 0)
{
lean_object* v___x_3256_; lean_object* v_traceState_3257_; lean_object* v_env_3258_; lean_object* v_nextMacroScope_3259_; lean_object* v_ngen_3260_; lean_object* v_auxDeclNGen_3261_; lean_object* v_cache_3262_; lean_object* v_messages_3263_; lean_object* v_infoState_3264_; lean_object* v_snapshotTasks_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3284_; 
lean_dec(v_snd_3235_);
lean_dec(v_fst_3234_);
lean_dec_ref(v_msg_3211_);
lean_dec_ref(v_tag_3207_);
lean_dec(v_cls_3205_);
v___x_3256_ = lean_st_ref_take(v___y_3216_);
v_traceState_3257_ = lean_ctor_get(v___x_3256_, 4);
v_env_3258_ = lean_ctor_get(v___x_3256_, 0);
v_nextMacroScope_3259_ = lean_ctor_get(v___x_3256_, 1);
v_ngen_3260_ = lean_ctor_get(v___x_3256_, 2);
v_auxDeclNGen_3261_ = lean_ctor_get(v___x_3256_, 3);
v_cache_3262_ = lean_ctor_get(v___x_3256_, 5);
v_messages_3263_ = lean_ctor_get(v___x_3256_, 6);
v_infoState_3264_ = lean_ctor_get(v___x_3256_, 7);
v_snapshotTasks_3265_ = lean_ctor_get(v___x_3256_, 8);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3267_ = v___x_3256_;
v_isShared_3268_ = v_isSharedCheck_3284_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_snapshotTasks_3265_);
lean_inc(v_infoState_3264_);
lean_inc(v_messages_3263_);
lean_inc(v_cache_3262_);
lean_inc(v_traceState_3257_);
lean_inc(v_auxDeclNGen_3261_);
lean_inc(v_ngen_3260_);
lean_inc(v_nextMacroScope_3259_);
lean_inc(v_env_3258_);
lean_dec(v___x_3256_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3284_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
uint64_t v_tid_3269_; lean_object* v_traces_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3283_; 
v_tid_3269_ = lean_ctor_get_uint64(v_traceState_3257_, sizeof(void*)*1);
v_traces_3270_ = lean_ctor_get(v_traceState_3257_, 0);
v_isSharedCheck_3283_ = !lean_is_exclusive(v_traceState_3257_);
if (v_isSharedCheck_3283_ == 0)
{
v___x_3272_ = v_traceState_3257_;
v_isShared_3273_ = v_isSharedCheck_3283_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_traces_3270_);
lean_dec(v_traceState_3257_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3283_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3274_; lean_object* v___x_3276_; 
v___x_3274_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3210_, v_traces_3270_);
lean_dec_ref(v_traces_3270_);
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v___x_3274_);
v___x_3276_ = v___x_3272_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v___x_3274_);
lean_ctor_set_uint64(v_reuseFailAlloc_3282_, sizeof(void*)*1, v_tid_3269_);
v___x_3276_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
lean_object* v___x_3278_; 
if (v_isShared_3268_ == 0)
{
lean_ctor_set(v___x_3267_, 4, v___x_3276_);
v___x_3278_ = v___x_3267_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_env_3258_);
lean_ctor_set(v_reuseFailAlloc_3281_, 1, v_nextMacroScope_3259_);
lean_ctor_set(v_reuseFailAlloc_3281_, 2, v_ngen_3260_);
lean_ctor_set(v_reuseFailAlloc_3281_, 3, v_auxDeclNGen_3261_);
lean_ctor_set(v_reuseFailAlloc_3281_, 4, v___x_3276_);
lean_ctor_set(v_reuseFailAlloc_3281_, 5, v_cache_3262_);
lean_ctor_set(v_reuseFailAlloc_3281_, 6, v_messages_3263_);
lean_ctor_set(v_reuseFailAlloc_3281_, 7, v_infoState_3264_);
lean_ctor_set(v_reuseFailAlloc_3281_, 8, v_snapshotTasks_3265_);
v___x_3278_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = lean_st_ref_put(v___y_3216_, v___x_3278_);
v___x_3280_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_3218_);
return v___x_3280_;
}
}
}
}
}
else
{
goto v___jp_3249_;
}
}
else
{
goto v___jp_3249_;
}
}
v___jp_3285_:
{
double v___x_3287_; double v___x_3288_; double v___x_3289_; uint8_t v___x_3290_; 
v___x_3287_ = lean_unbox_float(v_snd_3235_);
v___x_3288_ = lean_unbox_float(v_fst_3234_);
v___x_3289_ = lean_float_sub(v___x_3287_, v___x_3288_);
v___x_3290_ = lean_float_decLt(v___y_3286_, v___x_3289_);
v___y_3255_ = v___x_3290_;
goto v___jp_3254_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6___boxed(lean_object* v_cls_3301_, lean_object* v_collapsed_3302_, lean_object* v_tag_3303_, lean_object* v_opts_3304_, lean_object* v_clsEnabled_3305_, lean_object* v_oldTraces_3306_, lean_object* v_msg_3307_, lean_object* v_resStartStop_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_){
_start:
{
uint8_t v_collapsed_boxed_3314_; uint8_t v_clsEnabled_boxed_3315_; lean_object* v_res_3316_; 
v_collapsed_boxed_3314_ = lean_unbox(v_collapsed_3302_);
v_clsEnabled_boxed_3315_ = lean_unbox(v_clsEnabled_3305_);
v_res_3316_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_3301_, v_collapsed_boxed_3314_, v_tag_3303_, v_opts_3304_, v_clsEnabled_boxed_3315_, v_oldTraces_3306_, v_msg_3307_, v_resStartStop_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec_ref(v_opts_3304_);
return v_res_3316_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6(void){
_start:
{
lean_object* v_cls_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v_cls_3326_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3));
v___x_3327_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
v___x_3328_ = l_Lean_Name_append(v___x_3327_, v_cls_3326_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster(lean_object* v_ctx_3331_, lean_object* v_goal_3332_, lean_object* v_reflectionResult_3333_, lean_object* v_atomsAssignment_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_){
_start:
{
lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; lean_object* v___y_3369_; lean_object* v___y_3370_; lean_object* v_bvExpr_3390_; lean_object* v_unusedHypotheses_3391_; lean_object* v___y_3393_; lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3401_; lean_object* v___y_3402_; lean_object* v___y_3403_; lean_object* v___y_3404_; lean_object* v___y_3405_; lean_object* v___y_3406_; lean_object* v___y_3407_; lean_object* v___y_3408_; lean_object* v_toCold_3456_; lean_object* v_options_3457_; lean_object* v_ref_3458_; lean_object* v_inheritedTraceOptions_3459_; uint8_t v_hasTrace_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___f_3463_; uint8_t v___x_3464_; lean_object* v___x_3465_; 
v_bvExpr_3390_ = lean_ctor_get(v_reflectionResult_3333_, 0);
v_unusedHypotheses_3391_ = lean_ctor_get(v_reflectionResult_3333_, 2);
v_toCold_3456_ = lean_ctor_get(v_a_3337_, 0);
v_options_3457_ = lean_ctor_get(v_toCold_3456_, 2);
v_ref_3458_ = lean_ctor_get(v_a_3337_, 2);
v_inheritedTraceOptions_3459_ = lean_ctor_get(v_toCold_3456_, 11);
v_hasTrace_3460_ = lean_ctor_get_uint8(v_options_3457_, sizeof(void*)*1);
v___x_3461_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0));
v___x_3462_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1));
lean_inc_ref(v_bvExpr_3390_);
v___f_3463_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0), 2, 1);
lean_closure_set(v___f_3463_, 0, v_bvExpr_3390_);
v___x_3464_ = 1;
v___x_3465_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
if (v_hasTrace_3460_ == 0)
{
lean_object* v___f_3466_; lean_object* v___f_3467_; lean_object* v___x_3468_; 
v___f_3466_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__0));
v___f_3467_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__1));
v___x_3468_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_3468_) == 0)
{
lean_object* v_a_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3856_; 
v_a_3469_ = lean_ctor_get(v___x_3468_, 0);
v_isSharedCheck_3856_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3856_ == 0)
{
v___x_3471_ = v___x_3468_;
v_isShared_3472_ = v_isSharedCheck_3856_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_a_3469_);
lean_dec(v___x_3468_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3856_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v_aig_3473_; lean_object* v_config_3474_; lean_object* v_decls_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3854_; 
v_aig_3473_ = lean_ctor_get(v_a_3469_, 0);
lean_inc_ref(v_aig_3473_);
v_config_3474_ = lean_ctor_get(v_ctx_3331_, 5);
v_decls_3475_ = lean_ctor_get(v_aig_3473_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v_aig_3473_);
if (v_isSharedCheck_3854_ == 0)
{
lean_object* v_unused_3855_; 
v_unused_3855_ = lean_ctor_get(v_aig_3473_, 1);
lean_dec(v_unused_3855_);
v___x_3477_ = v_aig_3473_;
v_isShared_3478_ = v_isSharedCheck_3854_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_decls_3475_);
lean_dec(v_aig_3473_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3854_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v_solver_3479_; lean_object* v_lratPath_3480_; lean_object* v_timeout_3481_; uint8_t v_trimProofs_3482_; uint8_t v_binaryProofs_3483_; uint8_t v_graphviz_3484_; uint8_t v_solverMode_3485_; lean_object* v___f_3486_; lean_object* v___x_3487_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3553_; lean_object* v___y_3554_; uint8_t v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v___y_3561_; lean_object* v___y_3562_; lean_object* v_a_3563_; lean_object* v___y_3578_; lean_object* v___y_3579_; lean_object* v___y_3580_; uint8_t v___y_3581_; lean_object* v___y_3582_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v___y_3586_; lean_object* v___y_3587_; lean_object* v_a_3588_; uint8_t v___y_3598_; lean_object* v___y_3599_; lean_object* v___y_3600_; lean_object* v___y_3601_; uint8_t v___y_3602_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v___y_3606_; lean_object* v___y_3607_; uint8_t v___y_3608_; uint8_t v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3611_; lean_object* v___y_3612_; lean_object* v___y_3654_; lean_object* v___y_3655_; lean_object* v___y_3656_; lean_object* v___y_3657_; lean_object* v___y_3658_; lean_object* v_a_3659_; lean_object* v___y_3676_; lean_object* v___y_3677_; lean_object* v___y_3678_; lean_object* v___y_3679_; lean_object* v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3692_; lean_object* v___y_3693_; uint8_t v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v_a_3701_; lean_object* v___y_3714_; lean_object* v___y_3715_; lean_object* v___y_3716_; uint8_t v___y_3717_; lean_object* v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; lean_object* v___y_3722_; lean_object* v_a_3723_; lean_object* v___y_3733_; lean_object* v___y_3734_; uint8_t v___y_3735_; lean_object* v___y_3736_; lean_object* v___y_3737_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v___y_3798_; lean_object* v___y_3799_; lean_object* v___y_3800_; lean_object* v_options_3801_; uint8_t v_hasTrace_3802_; lean_object* v_inheritedTraceOptions_3803_; lean_object* v_ref_3804_; lean_object* v___y_3805_; 
v_solver_3479_ = lean_ctor_get(v_ctx_3331_, 3);
v_lratPath_3480_ = lean_ctor_get(v_ctx_3331_, 4);
v_timeout_3481_ = lean_ctor_get(v_config_3474_, 0);
v_trimProofs_3482_ = lean_ctor_get_uint8(v_config_3474_, sizeof(void*)*2);
v_binaryProofs_3483_ = lean_ctor_get_uint8(v_config_3474_, sizeof(void*)*2 + 1);
v_graphviz_3484_ = lean_ctor_get_uint8(v_config_3474_, sizeof(void*)*2 + 8);
v_solverMode_3485_ = lean_ctor_get_uint8(v_config_3474_, sizeof(void*)*2 + 10);
lean_inc(v_a_3469_);
v___f_3486_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__3), 2, 1);
lean_closure_set(v___f_3486_, 0, v_a_3469_);
v___x_3487_ = lean_array_get_size(v_decls_3475_);
lean_dec_ref(v_decls_3475_);
if (v_graphviz_3484_ == 0)
{
lean_dec(v_a_3469_);
v___y_3798_ = v_a_3335_;
v___y_3799_ = v_a_3336_;
v___y_3800_ = v_a_3337_;
v_options_3801_ = v_options_3457_;
v_hasTrace_3802_ = v_hasTrace_3460_;
v_inheritedTraceOptions_3803_ = v_inheritedTraceOptions_3459_;
v_ref_3804_ = v_ref_3458_;
v___y_3805_ = v_a_3338_;
goto v___jp_3797_;
}
else
{
lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; 
v___x_3839_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6);
v___x_3840_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(v_a_3469_);
v___x_3841_ = l_IO_FS_writeFile(v___x_3839_, v___x_3840_);
lean_dec_ref(v___x_3840_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_dec_ref_known(v___x_3841_, 1);
v___y_3798_ = v_a_3335_;
v___y_3799_ = v_a_3336_;
v___y_3800_ = v_a_3337_;
v_options_3801_ = v_options_3457_;
v_hasTrace_3802_ = v_hasTrace_3460_;
v_inheritedTraceOptions_3803_ = v_inheritedTraceOptions_3459_;
v_ref_3804_ = v_ref_3458_;
v___y_3805_ = v_a_3338_;
goto v___jp_3797_;
}
else
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3853_; 
lean_dec_ref(v___f_3486_);
lean_del_object(v___x_3477_);
lean_del_object(v___x_3471_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3853_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3853_ == 0)
{
v___x_3844_ = v___x_3841_;
v_isShared_3845_ = v_isSharedCheck_3853_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3841_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3853_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3851_; 
v___x_3846_ = lean_io_error_to_string(v_a_3842_);
v___x_3847_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3846_);
v___x_3848_ = l_Lean_MessageData_ofFormat(v___x_3847_);
lean_inc(v_ref_3458_);
v___x_3849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3849_, 0, v_ref_3458_);
lean_ctor_set(v___x_3849_, 1, v___x_3848_);
if (v_isShared_3845_ == 0)
{
lean_ctor_set(v___x_3844_, 0, v___x_3849_);
v___x_3851_ = v___x_3844_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v___x_3849_);
v___x_3851_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
return v___x_3851_;
}
}
}
}
v___jp_3488_:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3495_; 
v___x_3491_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v___y_3490_, v___y_3489_, v___x_3487_, v_atomsAssignment_3334_);
lean_dec_ref(v___y_3489_);
v___x_3492_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3492_, 0, v_goal_3332_);
lean_ctor_set(v___x_3492_, 1, v_unusedHypotheses_3391_);
lean_ctor_set(v___x_3492_, 2, v___x_3491_);
v___x_3493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3492_);
if (v_isShared_3472_ == 0)
{
lean_ctor_set(v___x_3471_, 0, v___x_3493_);
v___x_3495_ = v___x_3471_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v___x_3493_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
v___jp_3497_:
{
if (lean_obj_tag(v___y_3504_) == 0)
{
lean_object* v_a_3505_; 
v_a_3505_ = lean_ctor_get(v___y_3504_, 0);
lean_inc(v_a_3505_);
lean_dec_ref_known(v___y_3504_, 1);
if (lean_obj_tag(v_a_3505_) == 0)
{
lean_object* v_toCold_3506_; lean_object* v_options_3507_; uint8_t v_hasTrace_3508_; 
lean_inc_ref(v_unusedHypotheses_3391_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec_ref(v_ctx_3331_);
v_toCold_3506_ = lean_ctor_get(v___y_3503_, 0);
v_options_3507_ = lean_ctor_get(v_toCold_3506_, 2);
v_hasTrace_3508_ = lean_ctor_get_uint8(v_options_3507_, sizeof(void*)*1);
if (v_hasTrace_3508_ == 0)
{
lean_object* v_a_3509_; 
v_a_3509_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_a_3509_);
lean_dec_ref_known(v_a_3505_, 1);
v___y_3489_ = v_a_3509_;
v___y_3490_ = v___y_3500_;
goto v___jp_3488_;
}
else
{
lean_object* v_a_3510_; lean_object* v_inheritedTraceOptions_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; uint8_t v___x_3514_; 
v_a_3510_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_a_3510_);
lean_dec_ref_known(v_a_3505_, 1);
v_inheritedTraceOptions_3511_ = lean_ctor_get(v_toCold_3506_, 11);
v___x_3512_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_3501_);
v___x_3513_ = l_Lean_Name_append(v___x_3512_, v___y_3501_);
v___x_3514_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3511_, v_options_3507_, v___x_3513_);
lean_dec(v___x_3513_);
if (v___x_3514_ == 0)
{
v___y_3489_ = v_a_3510_;
v___y_3490_ = v___y_3500_;
goto v___jp_3488_;
}
else
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3515_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1);
lean_inc(v___y_3501_);
v___x_3516_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___y_3501_, v___x_3515_, v___y_3499_, v___y_3498_, v___y_3503_, v___y_3502_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_dec_ref_known(v___x_3516_, 1);
v___y_3489_ = v_a_3510_;
v___y_3490_ = v___y_3500_;
goto v___jp_3488_;
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
lean_dec(v_a_3510_);
lean_dec_ref(v___y_3500_);
lean_del_object(v___x_3471_);
lean_dec_ref(v_unusedHypotheses_3391_);
lean_dec(v_goal_3332_);
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3516_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3516_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_3525_; lean_object* v_options_3526_; uint8_t v_hasTrace_3527_; 
lean_dec_ref(v___y_3500_);
lean_del_object(v___x_3471_);
lean_dec(v_goal_3332_);
v_toCold_3525_ = lean_ctor_get(v___y_3503_, 0);
v_options_3526_ = lean_ctor_get(v_toCold_3525_, 2);
v_hasTrace_3527_ = lean_ctor_get_uint8(v_options_3526_, sizeof(void*)*1);
if (v_hasTrace_3527_ == 0)
{
lean_object* v_a_3528_; 
v_a_3528_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_a_3528_);
lean_dec_ref_known(v_a_3505_, 1);
v___y_3341_ = v_a_3528_;
v___y_3342_ = v___y_3499_;
v___y_3343_ = v___y_3498_;
v___y_3344_ = v___y_3503_;
v___y_3345_ = v___y_3502_;
goto v___jp_3340_;
}
else
{
lean_object* v_a_3529_; lean_object* v_inheritedTraceOptions_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; uint8_t v___x_3533_; 
v_a_3529_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v_a_3505_, 1);
v_inheritedTraceOptions_3530_ = lean_ctor_get(v_toCold_3525_, 11);
v___x_3531_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_3501_);
v___x_3532_ = l_Lean_Name_append(v___x_3531_, v___y_3501_);
v___x_3533_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3530_, v_options_3526_, v___x_3532_);
lean_dec(v___x_3532_);
if (v___x_3533_ == 0)
{
v___y_3341_ = v_a_3529_;
v___y_3342_ = v___y_3499_;
v___y_3343_ = v___y_3498_;
v___y_3344_ = v___y_3503_;
v___y_3345_ = v___y_3502_;
goto v___jp_3340_;
}
else
{
lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3534_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3);
lean_inc(v___y_3501_);
v___x_3535_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___y_3501_, v___x_3534_, v___y_3499_, v___y_3498_, v___y_3503_, v___y_3502_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_dec_ref_known(v___x_3535_, 1);
v___y_3341_ = v_a_3529_;
v___y_3342_ = v___y_3499_;
v___y_3343_ = v___y_3498_;
v___y_3344_ = v___y_3503_;
v___y_3345_ = v___y_3502_;
goto v___jp_3340_;
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3543_; 
lean_dec(v_a_3529_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec_ref(v_ctx_3331_);
v_a_3536_ = lean_ctor_get(v___x_3535_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3535_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3538_ = v___x_3535_;
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3535_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3536_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3551_; 
lean_dec_ref(v___y_3500_);
lean_del_object(v___x_3471_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_3544_ = lean_ctor_get(v___y_3504_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v___y_3504_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3546_ = v___y_3504_;
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_a_3544_);
lean_dec(v___y_3504_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3549_; 
if (v_isShared_3547_ == 0)
{
v___x_3549_ = v___x_3546_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_a_3544_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
}
}
}
}
v___jp_3552_:
{
lean_object* v___x_3564_; double v___x_3565_; double v___x_3566_; double v___x_3567_; double v___x_3568_; double v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3573_; 
v___x_3564_ = lean_io_mono_nanos_now();
v___x_3565_ = lean_float_of_nat(v___y_3559_);
v___x_3566_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_3567_ = lean_float_div(v___x_3565_, v___x_3566_);
v___x_3568_ = lean_float_of_nat(v___x_3564_);
v___x_3569_ = lean_float_div(v___x_3568_, v___x_3566_);
v___x_3570_ = lean_box_float(v___x_3567_);
v___x_3571_ = lean_box_float(v___x_3569_);
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 1, v___x_3571_);
lean_ctor_set(v___x_3477_, 0, v___x_3570_);
v___x_3573_ = v___x_3477_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v___x_3570_);
lean_ctor_set(v_reuseFailAlloc_3576_, 1, v___x_3571_);
v___x_3573_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3574_, 0, v_a_3563_);
lean_ctor_set(v___x_3574_, 1, v___x_3573_);
lean_inc(v___y_3558_);
v___x_3575_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_3558_, v___x_3464_, v___x_3465_, v___y_3561_, v___y_3555_, v___y_3557_, v___f_3466_, v___x_3574_, v___y_3554_, v___y_3553_, v___y_3562_, v___y_3560_);
v___y_3498_ = v___y_3553_;
v___y_3499_ = v___y_3554_;
v___y_3500_ = v___y_3556_;
v___y_3501_ = v___y_3558_;
v___y_3502_ = v___y_3560_;
v___y_3503_ = v___y_3562_;
v___y_3504_ = v___x_3575_;
goto v___jp_3497_;
}
}
v___jp_3577_:
{
lean_object* v___x_3589_; double v___x_3590_; double v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3589_ = lean_io_get_num_heartbeats();
v___x_3590_ = lean_float_of_nat(v___y_3580_);
v___x_3591_ = lean_float_of_nat(v___x_3589_);
v___x_3592_ = lean_box_float(v___x_3590_);
v___x_3593_ = lean_box_float(v___x_3591_);
v___x_3594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3592_);
lean_ctor_set(v___x_3594_, 1, v___x_3593_);
v___x_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3595_, 0, v_a_3588_);
lean_ctor_set(v___x_3595_, 1, v___x_3594_);
lean_inc(v___y_3584_);
v___x_3596_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_3584_, v___x_3464_, v___x_3465_, v___y_3586_, v___y_3581_, v___y_3583_, v___f_3466_, v___x_3595_, v___y_3579_, v___y_3578_, v___y_3587_, v___y_3585_);
v___y_3498_ = v___y_3578_;
v___y_3499_ = v___y_3579_;
v___y_3500_ = v___y_3582_;
v___y_3501_ = v___y_3584_;
v___y_3502_ = v___y_3585_;
v___y_3503_ = v___y_3587_;
v___y_3504_ = v___x_3596_;
goto v___jp_3497_;
}
v___jp_3597_:
{
lean_object* v___x_3613_; lean_object* v_a_3614_; lean_object* v___x_3615_; uint8_t v___x_3616_; 
v___x_3613_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_3601_);
v_a_3614_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_a_3614_);
lean_dec_ref(v___x_3613_);
v___x_3615_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3616_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_3611_, v___x_3615_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; lean_object* v___x_3618_; 
v___x_3617_ = lean_io_mono_nanos_now();
v___x_3618_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_3604_, v___y_3607_, v___y_3612_, v___y_3608_, v___y_3606_, v___y_3598_, v___y_3602_, v___y_3603_, v___y_3601_);
if (lean_obj_tag(v___x_3618_) == 0)
{
lean_object* v_a_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3626_; 
v_a_3619_ = lean_ctor_get(v___x_3618_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3621_ = v___x_3618_;
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_a_3619_);
lean_dec(v___x_3618_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3624_; 
if (v_isShared_3622_ == 0)
{
lean_ctor_set_tag(v___x_3621_, 1);
v___x_3624_ = v___x_3621_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3625_; 
v_reuseFailAlloc_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3625_, 0, v_a_3619_);
v___x_3624_ = v_reuseFailAlloc_3625_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
v___y_3553_ = v___y_3605_;
v___y_3554_ = v___y_3599_;
v___y_3555_ = v___y_3609_;
v___y_3556_ = v___y_3610_;
v___y_3557_ = v_a_3614_;
v___y_3558_ = v___y_3600_;
v___y_3559_ = v___x_3617_;
v___y_3560_ = v___y_3601_;
v___y_3561_ = v___y_3611_;
v___y_3562_ = v___y_3603_;
v_a_3563_ = v___x_3624_;
goto v___jp_3552_;
}
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
v_a_3627_ = lean_ctor_get(v___x_3618_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3618_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3618_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
lean_ctor_set_tag(v___x_3629_, 0);
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
v___y_3553_ = v___y_3605_;
v___y_3554_ = v___y_3599_;
v___y_3555_ = v___y_3609_;
v___y_3556_ = v___y_3610_;
v___y_3557_ = v_a_3614_;
v___y_3558_ = v___y_3600_;
v___y_3559_ = v___x_3617_;
v___y_3560_ = v___y_3601_;
v___y_3561_ = v___y_3611_;
v___y_3562_ = v___y_3603_;
v_a_3563_ = v___x_3632_;
goto v___jp_3552_;
}
}
}
}
else
{
lean_object* v___x_3635_; lean_object* v___x_3636_; 
lean_del_object(v___x_3477_);
v___x_3635_ = lean_io_get_num_heartbeats();
v___x_3636_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_3604_, v___y_3607_, v___y_3612_, v___y_3608_, v___y_3606_, v___y_3598_, v___y_3602_, v___y_3603_, v___y_3601_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3644_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3639_ = v___x_3636_;
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3636_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3642_; 
if (v_isShared_3640_ == 0)
{
lean_ctor_set_tag(v___x_3639_, 1);
v___x_3642_ = v___x_3639_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_a_3637_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
v___y_3578_ = v___y_3605_;
v___y_3579_ = v___y_3599_;
v___y_3580_ = v___x_3635_;
v___y_3581_ = v___y_3609_;
v___y_3582_ = v___y_3610_;
v___y_3583_ = v_a_3614_;
v___y_3584_ = v___y_3600_;
v___y_3585_ = v___y_3601_;
v___y_3586_ = v___y_3611_;
v___y_3587_ = v___y_3603_;
v_a_3588_ = v___x_3642_;
goto v___jp_3577_;
}
}
}
else
{
lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
v_a_3645_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3636_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3636_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
lean_ctor_set_tag(v___x_3647_, 0);
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_a_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
v___y_3578_ = v___y_3605_;
v___y_3579_ = v___y_3599_;
v___y_3580_ = v___x_3635_;
v___y_3581_ = v___y_3609_;
v___y_3582_ = v___y_3610_;
v___y_3583_ = v_a_3614_;
v___y_3584_ = v___y_3600_;
v___y_3585_ = v___y_3601_;
v___y_3586_ = v___y_3611_;
v___y_3587_ = v___y_3603_;
v_a_3588_ = v___x_3650_;
goto v___jp_3577_;
}
}
}
}
}
v___jp_3653_:
{
lean_object* v_toCold_3660_; lean_object* v_options_3661_; uint8_t v_hasTrace_3662_; 
v_toCold_3660_ = lean_ctor_get(v___y_3658_, 0);
v_options_3661_ = lean_ctor_get(v_toCold_3660_, 2);
v_hasTrace_3662_ = lean_ctor_get_uint8(v_options_3661_, sizeof(void*)*1);
if (v_hasTrace_3662_ == 0)
{
lean_object* v_fst_3663_; lean_object* v_snd_3664_; lean_object* v___x_3665_; 
lean_del_object(v___x_3477_);
v_fst_3663_ = lean_ctor_get(v_a_3659_, 0);
lean_inc(v_fst_3663_);
v_snd_3664_ = lean_ctor_get(v_a_3659_, 1);
lean_inc(v_snd_3664_);
lean_dec_ref(v_a_3659_);
lean_inc(v_timeout_3481_);
lean_inc_ref(v_lratPath_3480_);
lean_inc_ref(v_solver_3479_);
v___x_3665_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_3663_, v_solver_3479_, v_lratPath_3480_, v_trimProofs_3482_, v_timeout_3481_, v_binaryProofs_3483_, v_solverMode_3485_, v___y_3658_, v___y_3657_);
v___y_3498_ = v___y_3655_;
v___y_3499_ = v___y_3654_;
v___y_3500_ = v_snd_3664_;
v___y_3501_ = v___y_3656_;
v___y_3502_ = v___y_3657_;
v___y_3503_ = v___y_3658_;
v___y_3504_ = v___x_3665_;
goto v___jp_3497_;
}
else
{
lean_object* v_fst_3666_; lean_object* v_snd_3667_; lean_object* v_inheritedTraceOptions_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; uint8_t v___x_3671_; 
v_fst_3666_ = lean_ctor_get(v_a_3659_, 0);
lean_inc(v_fst_3666_);
v_snd_3667_ = lean_ctor_get(v_a_3659_, 1);
lean_inc(v_snd_3667_);
lean_dec_ref(v_a_3659_);
v_inheritedTraceOptions_3668_ = lean_ctor_get(v_toCold_3660_, 11);
v___x_3669_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_3656_);
v___x_3670_ = l_Lean_Name_append(v___x_3669_, v___y_3656_);
v___x_3671_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3668_, v_options_3661_, v___x_3670_);
lean_dec(v___x_3670_);
if (v___x_3671_ == 0)
{
lean_object* v___x_3672_; uint8_t v___x_3673_; 
v___x_3672_ = l_Lean_trace_profiler;
v___x_3673_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_3661_, v___x_3672_);
if (v___x_3673_ == 0)
{
lean_object* v___x_3674_; 
lean_del_object(v___x_3477_);
lean_inc(v_timeout_3481_);
lean_inc_ref(v_lratPath_3480_);
lean_inc_ref(v_solver_3479_);
v___x_3674_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_3666_, v_solver_3479_, v_lratPath_3480_, v_trimProofs_3482_, v_timeout_3481_, v_binaryProofs_3483_, v_solverMode_3485_, v___y_3658_, v___y_3657_);
v___y_3498_ = v___y_3655_;
v___y_3499_ = v___y_3654_;
v___y_3500_ = v_snd_3667_;
v___y_3501_ = v___y_3656_;
v___y_3502_ = v___y_3657_;
v___y_3503_ = v___y_3658_;
v___y_3504_ = v___x_3674_;
goto v___jp_3497_;
}
else
{
lean_inc_ref(v_lratPath_3480_);
lean_inc_ref(v_solver_3479_);
lean_inc(v_timeout_3481_);
v___y_3598_ = v_binaryProofs_3483_;
v___y_3599_ = v___y_3654_;
v___y_3600_ = v___y_3656_;
v___y_3601_ = v___y_3657_;
v___y_3602_ = v_solverMode_3485_;
v___y_3603_ = v___y_3658_;
v___y_3604_ = v_fst_3666_;
v___y_3605_ = v___y_3655_;
v___y_3606_ = v_timeout_3481_;
v___y_3607_ = v_solver_3479_;
v___y_3608_ = v_trimProofs_3482_;
v___y_3609_ = v___x_3671_;
v___y_3610_ = v_snd_3667_;
v___y_3611_ = v_options_3661_;
v___y_3612_ = v_lratPath_3480_;
goto v___jp_3597_;
}
}
else
{
lean_inc_ref(v_lratPath_3480_);
lean_inc_ref(v_solver_3479_);
lean_inc(v_timeout_3481_);
v___y_3598_ = v_binaryProofs_3483_;
v___y_3599_ = v___y_3654_;
v___y_3600_ = v___y_3656_;
v___y_3601_ = v___y_3657_;
v___y_3602_ = v_solverMode_3485_;
v___y_3603_ = v___y_3658_;
v___y_3604_ = v_fst_3666_;
v___y_3605_ = v___y_3655_;
v___y_3606_ = v_timeout_3481_;
v___y_3607_ = v_solver_3479_;
v___y_3608_ = v_trimProofs_3482_;
v___y_3609_ = v___x_3671_;
v___y_3610_ = v_snd_3667_;
v___y_3611_ = v_options_3661_;
v___y_3612_ = v_lratPath_3480_;
goto v___jp_3597_;
}
}
}
v___jp_3675_:
{
if (lean_obj_tag(v___y_3681_) == 0)
{
lean_object* v_a_3682_; 
v_a_3682_ = lean_ctor_get(v___y_3681_, 0);
lean_inc(v_a_3682_);
lean_dec_ref_known(v___y_3681_, 1);
v___y_3654_ = v___y_3677_;
v___y_3655_ = v___y_3676_;
v___y_3656_ = v___y_3678_;
v___y_3657_ = v___y_3679_;
v___y_3658_ = v___y_3680_;
v_a_3659_ = v_a_3682_;
goto v___jp_3653_;
}
else
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
lean_del_object(v___x_3477_);
lean_del_object(v___x_3471_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_3683_ = lean_ctor_get(v___y_3681_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___y_3681_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___y_3681_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___y_3681_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
}
v___jp_3691_:
{
lean_object* v___x_3702_; double v___x_3703_; double v___x_3704_; double v___x_3705_; double v___x_3706_; double v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3702_ = lean_io_mono_nanos_now();
v___x_3703_ = lean_float_of_nat(v___y_3695_);
v___x_3704_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_3705_ = lean_float_div(v___x_3703_, v___x_3704_);
v___x_3706_ = lean_float_of_nat(v___x_3702_);
v___x_3707_ = lean_float_div(v___x_3706_, v___x_3704_);
v___x_3708_ = lean_box_float(v___x_3705_);
v___x_3709_ = lean_box_float(v___x_3707_);
v___x_3710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3710_, 0, v___x_3708_);
lean_ctor_set(v___x_3710_, 1, v___x_3709_);
v___x_3711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3711_, 0, v_a_3701_);
lean_ctor_set(v___x_3711_, 1, v___x_3710_);
lean_inc(v___y_3697_);
v___x_3712_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_3697_, v___x_3464_, v___x_3465_, v___y_3696_, v___y_3694_, v___y_3700_, v___f_3467_, v___x_3711_, v___y_3693_, v___y_3692_, v___y_3699_, v___y_3698_);
v___y_3676_ = v___y_3692_;
v___y_3677_ = v___y_3693_;
v___y_3678_ = v___y_3697_;
v___y_3679_ = v___y_3698_;
v___y_3680_ = v___y_3699_;
v___y_3681_ = v___x_3712_;
goto v___jp_3675_;
}
v___jp_3713_:
{
lean_object* v___x_3724_; double v___x_3725_; double v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
v___x_3724_ = lean_io_get_num_heartbeats();
v___x_3725_ = lean_float_of_nat(v___y_3716_);
v___x_3726_ = lean_float_of_nat(v___x_3724_);
v___x_3727_ = lean_box_float(v___x_3725_);
v___x_3728_ = lean_box_float(v___x_3726_);
v___x_3729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3729_, 0, v___x_3727_);
lean_ctor_set(v___x_3729_, 1, v___x_3728_);
v___x_3730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3730_, 0, v_a_3723_);
lean_ctor_set(v___x_3730_, 1, v___x_3729_);
lean_inc(v___y_3719_);
v___x_3731_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_3719_, v___x_3464_, v___x_3465_, v___y_3718_, v___y_3717_, v___y_3722_, v___f_3467_, v___x_3730_, v___y_3715_, v___y_3714_, v___y_3721_, v___y_3720_);
v___y_3676_ = v___y_3714_;
v___y_3677_ = v___y_3715_;
v___y_3678_ = v___y_3719_;
v___y_3679_ = v___y_3720_;
v___y_3680_ = v___y_3721_;
v___y_3681_ = v___x_3731_;
goto v___jp_3675_;
}
v___jp_3732_:
{
lean_object* v___x_3741_; lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3796_; 
v___x_3741_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_3739_);
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3744_ = v___x_3741_;
v_isShared_3745_ = v_isSharedCheck_3796_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3741_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3796_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3746_; uint8_t v___x_3747_; 
v___x_3746_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3747_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_3737_, v___x_3746_);
if (v___x_3747_ == 0)
{
lean_object* v___x_3748_; lean_object* v___x_3749_; 
v___x_3748_ = lean_io_mono_nanos_now();
v___x_3749_ = l_IO_lazyPure___redArg(v___f_3486_);
if (lean_obj_tag(v___x_3749_) == 0)
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
lean_del_object(v___x_3744_);
v_a_3750_ = lean_ctor_get(v___x_3749_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3749_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3749_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3749_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
lean_ctor_set_tag(v___x_3752_, 1);
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
v___y_3692_ = v___y_3734_;
v___y_3693_ = v___y_3733_;
v___y_3694_ = v___y_3735_;
v___y_3695_ = v___x_3748_;
v___y_3696_ = v___y_3737_;
v___y_3697_ = v___y_3738_;
v___y_3698_ = v___y_3739_;
v___y_3699_ = v___y_3740_;
v___y_3700_ = v_a_3742_;
v_a_3701_ = v___x_3755_;
goto v___jp_3691_;
}
}
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3771_; 
v_a_3758_ = lean_ctor_get(v___x_3749_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3749_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3760_ = v___x_3749_;
v_isShared_3761_ = v_isSharedCheck_3771_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3749_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3771_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3762_; lean_object* v___x_3764_; 
v___x_3762_ = lean_io_error_to_string(v_a_3758_);
if (v_isShared_3761_ == 0)
{
lean_ctor_set_tag(v___x_3760_, 3);
lean_ctor_set(v___x_3760_, 0, v___x_3762_);
v___x_3764_ = v___x_3760_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v___x_3762_);
v___x_3764_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3768_; 
v___x_3765_ = l_Lean_MessageData_ofFormat(v___x_3764_);
lean_inc(v___y_3736_);
v___x_3766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3766_, 0, v___y_3736_);
lean_ctor_set(v___x_3766_, 1, v___x_3765_);
if (v_isShared_3745_ == 0)
{
lean_ctor_set(v___x_3744_, 0, v___x_3766_);
v___x_3768_ = v___x_3744_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v___x_3766_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
v___y_3692_ = v___y_3734_;
v___y_3693_ = v___y_3733_;
v___y_3694_ = v___y_3735_;
v___y_3695_ = v___x_3748_;
v___y_3696_ = v___y_3737_;
v___y_3697_ = v___y_3738_;
v___y_3698_ = v___y_3739_;
v___y_3699_ = v___y_3740_;
v___y_3700_ = v_a_3742_;
v_a_3701_ = v___x_3768_;
goto v___jp_3691_;
}
}
}
}
}
else
{
lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3772_ = lean_io_get_num_heartbeats();
v___x_3773_ = l_IO_lazyPure___redArg(v___f_3486_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v_a_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3781_; 
lean_del_object(v___x_3744_);
v_a_3774_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3781_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3781_ == 0)
{
v___x_3776_ = v___x_3773_;
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_a_3774_);
lean_dec(v___x_3773_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3781_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
lean_object* v___x_3779_; 
if (v_isShared_3777_ == 0)
{
lean_ctor_set_tag(v___x_3776_, 1);
v___x_3779_ = v___x_3776_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v_a_3774_);
v___x_3779_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
v___y_3714_ = v___y_3734_;
v___y_3715_ = v___y_3733_;
v___y_3716_ = v___x_3772_;
v___y_3717_ = v___y_3735_;
v___y_3718_ = v___y_3737_;
v___y_3719_ = v___y_3738_;
v___y_3720_ = v___y_3739_;
v___y_3721_ = v___y_3740_;
v___y_3722_ = v_a_3742_;
v_a_3723_ = v___x_3779_;
goto v___jp_3713_;
}
}
}
else
{
lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3795_; 
v_a_3782_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3784_ = v___x_3773_;
v_isShared_3785_ = v_isSharedCheck_3795_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_dec(v___x_3773_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3795_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3786_; lean_object* v___x_3788_; 
v___x_3786_ = lean_io_error_to_string(v_a_3782_);
if (v_isShared_3785_ == 0)
{
lean_ctor_set_tag(v___x_3784_, 3);
lean_ctor_set(v___x_3784_, 0, v___x_3786_);
v___x_3788_ = v___x_3784_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v___x_3786_);
v___x_3788_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3792_; 
v___x_3789_ = l_Lean_MessageData_ofFormat(v___x_3788_);
lean_inc(v___y_3736_);
v___x_3790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3790_, 0, v___y_3736_);
lean_ctor_set(v___x_3790_, 1, v___x_3789_);
if (v_isShared_3745_ == 0)
{
lean_ctor_set(v___x_3744_, 0, v___x_3790_);
v___x_3792_ = v___x_3744_;
goto v_reusejp_3791_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v___x_3790_);
v___x_3792_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3791_;
}
v_reusejp_3791_:
{
v___y_3714_ = v___y_3734_;
v___y_3715_ = v___y_3733_;
v___y_3716_ = v___x_3772_;
v___y_3717_ = v___y_3735_;
v___y_3718_ = v___y_3737_;
v___y_3719_ = v___y_3738_;
v___y_3720_ = v___y_3739_;
v___y_3721_ = v___y_3740_;
v___y_3722_ = v_a_3742_;
v_a_3723_ = v___x_3792_;
goto v___jp_3713_;
}
}
}
}
}
}
}
v___jp_3797_:
{
lean_object* v___x_3806_; 
v___x_3806_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3));
if (v_hasTrace_3802_ == 0)
{
lean_object* v___x_3807_; 
v___x_3807_ = l_IO_lazyPure___redArg(v___f_3486_);
if (lean_obj_tag(v___x_3807_) == 0)
{
lean_object* v_a_3808_; 
v_a_3808_ = lean_ctor_get(v___x_3807_, 0);
lean_inc(v_a_3808_);
lean_dec_ref_known(v___x_3807_, 1);
v___y_3654_ = v___y_3798_;
v___y_3655_ = v___y_3799_;
v___y_3656_ = v___x_3806_;
v___y_3657_ = v___y_3805_;
v___y_3658_ = v___y_3800_;
v_a_3659_ = v_a_3808_;
goto v___jp_3653_;
}
else
{
lean_object* v_a_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3820_; 
lean_del_object(v___x_3477_);
lean_del_object(v___x_3471_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_3809_ = lean_ctor_get(v___x_3807_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v___x_3807_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3811_ = v___x_3807_;
v_isShared_3812_ = v_isSharedCheck_3820_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_a_3809_);
lean_dec(v___x_3807_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3820_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3818_; 
v___x_3813_ = lean_io_error_to_string(v_a_3809_);
v___x_3814_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3813_);
v___x_3815_ = l_Lean_MessageData_ofFormat(v___x_3814_);
lean_inc(v_ref_3804_);
v___x_3816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3816_, 0, v_ref_3804_);
lean_ctor_set(v___x_3816_, 1, v___x_3815_);
if (v_isShared_3812_ == 0)
{
lean_ctor_set(v___x_3811_, 0, v___x_3816_);
v___x_3818_ = v___x_3811_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v___x_3816_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
else
{
lean_object* v___x_3821_; uint8_t v___x_3822_; 
v___x_3821_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_3822_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3803_, v_options_3801_, v___x_3821_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; uint8_t v___x_3824_; 
v___x_3823_ = l_Lean_trace_profiler;
v___x_3824_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_3801_, v___x_3823_);
if (v___x_3824_ == 0)
{
lean_object* v___x_3825_; 
v___x_3825_ = l_IO_lazyPure___redArg(v___f_3486_);
if (lean_obj_tag(v___x_3825_) == 0)
{
lean_object* v_a_3826_; 
v_a_3826_ = lean_ctor_get(v___x_3825_, 0);
lean_inc(v_a_3826_);
lean_dec_ref_known(v___x_3825_, 1);
v___y_3654_ = v___y_3798_;
v___y_3655_ = v___y_3799_;
v___y_3656_ = v___x_3806_;
v___y_3657_ = v___y_3805_;
v___y_3658_ = v___y_3800_;
v_a_3659_ = v_a_3826_;
goto v___jp_3653_;
}
else
{
lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3838_; 
lean_del_object(v___x_3477_);
lean_del_object(v___x_3471_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_3827_ = lean_ctor_get(v___x_3825_, 0);
v_isSharedCheck_3838_ = !lean_is_exclusive(v___x_3825_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3829_ = v___x_3825_;
v_isShared_3830_ = v_isSharedCheck_3838_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3825_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3838_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3836_; 
v___x_3831_ = lean_io_error_to_string(v_a_3827_);
v___x_3832_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3831_);
v___x_3833_ = l_Lean_MessageData_ofFormat(v___x_3832_);
lean_inc(v_ref_3804_);
v___x_3834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3834_, 0, v_ref_3804_);
lean_ctor_set(v___x_3834_, 1, v___x_3833_);
if (v_isShared_3830_ == 0)
{
lean_ctor_set(v___x_3829_, 0, v___x_3834_);
v___x_3836_ = v___x_3829_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v___x_3834_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
return v___x_3836_;
}
}
}
}
else
{
v___y_3733_ = v___y_3798_;
v___y_3734_ = v___y_3799_;
v___y_3735_ = v___x_3822_;
v___y_3736_ = v_ref_3804_;
v___y_3737_ = v_options_3801_;
v___y_3738_ = v___x_3806_;
v___y_3739_ = v___y_3805_;
v___y_3740_ = v___y_3800_;
goto v___jp_3732_;
}
}
else
{
v___y_3733_ = v___y_3798_;
v___y_3734_ = v___y_3799_;
v___y_3735_ = v___x_3822_;
v___y_3736_ = v_ref_3804_;
v___y_3737_ = v_options_3801_;
v___y_3738_ = v___x_3806_;
v___y_3739_ = v___y_3805_;
v___y_3740_ = v___y_3800_;
goto v___jp_3732_;
}
}
}
}
}
}
else
{
lean_object* v_a_3857_; lean_object* v___x_3859_; uint8_t v_isShared_3860_; uint8_t v_isSharedCheck_3868_; 
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_3857_ = lean_ctor_get(v___x_3468_, 0);
v_isSharedCheck_3868_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3859_ = v___x_3468_;
v_isShared_3860_ = v_isSharedCheck_3868_;
goto v_resetjp_3858_;
}
else
{
lean_inc(v_a_3857_);
lean_dec(v___x_3468_);
v___x_3859_ = lean_box(0);
v_isShared_3860_ = v_isSharedCheck_3868_;
goto v_resetjp_3858_;
}
v_resetjp_3858_:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3866_; 
v___x_3861_ = lean_io_error_to_string(v_a_3857_);
v___x_3862_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3862_, 0, v___x_3861_);
v___x_3863_ = l_Lean_MessageData_ofFormat(v___x_3862_);
lean_inc(v_ref_3458_);
v___x_3864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3864_, 0, v_ref_3458_);
lean_ctor_set(v___x_3864_, 1, v___x_3863_);
if (v_isShared_3860_ == 0)
{
lean_ctor_set(v___x_3859_, 0, v___x_3864_);
v___x_3866_ = v___x_3859_;
goto v_reusejp_3865_;
}
else
{
lean_object* v_reuseFailAlloc_3867_; 
v_reuseFailAlloc_3867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3867_, 0, v___x_3864_);
v___x_3866_ = v_reuseFailAlloc_3867_;
goto v_reusejp_3865_;
}
v_reusejp_3865_:
{
return v___x_3866_;
}
}
}
}
else
{
lean_object* v_cls_3869_; lean_object* v___f_3870_; lean_object* v___f_3871_; lean_object* v___f_3872_; lean_object* v___f_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; uint8_t v___x_3876_; lean_object* v___y_3878_; lean_object* v___y_3879_; lean_object* v_a_3880_; lean_object* v___y_3893_; lean_object* v___y_3894_; lean_object* v_a_3895_; lean_object* v___y_3898_; lean_object* v___y_3899_; lean_object* v___y_3900_; lean_object* v___y_3911_; lean_object* v___y_3912_; lean_object* v___y_3913_; lean_object* v_a_3914_; lean_object* v___y_3933_; lean_object* v___y_3934_; lean_object* v___y_3935_; lean_object* v___y_3936_; lean_object* v___y_3940_; lean_object* v___y_3941_; uint8_t v___y_3942_; lean_object* v___y_3943_; lean_object* v___y_3944_; lean_object* v___y_3945_; lean_object* v_a_3946_; lean_object* v___y_3959_; lean_object* v___y_3960_; uint8_t v___y_3961_; lean_object* v___y_3962_; lean_object* v___y_3963_; lean_object* v___y_3964_; lean_object* v_a_3965_; lean_object* v___y_3975_; uint8_t v___y_3976_; lean_object* v___y_3977_; lean_object* v___y_3978_; uint8_t v___y_3979_; lean_object* v___y_4040_; lean_object* v___y_4041_; lean_object* v_a_4042_; lean_object* v___y_4052_; lean_object* v___y_4053_; lean_object* v_a_4054_; lean_object* v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v___y_4070_; lean_object* v___y_4071_; lean_object* v___y_4072_; lean_object* v_a_4073_; lean_object* v___y_4092_; lean_object* v___y_4093_; lean_object* v___y_4094_; lean_object* v___y_4095_; lean_object* v___y_4099_; uint8_t v___y_4100_; lean_object* v___y_4101_; lean_object* v___y_4102_; lean_object* v___y_4103_; lean_object* v___y_4104_; lean_object* v_a_4105_; lean_object* v___y_4115_; uint8_t v___y_4116_; lean_object* v___y_4117_; lean_object* v___y_4118_; lean_object* v___y_4119_; lean_object* v___y_4120_; lean_object* v_a_4121_; lean_object* v___y_4134_; uint8_t v___y_4135_; lean_object* v___y_4136_; lean_object* v___y_4137_; uint8_t v___y_4138_; 
v_cls_3869_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3));
v___f_3870_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__0));
v___f_3871_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__1));
v___f_3872_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__4));
v___f_3873_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5));
v___x_3874_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
v___x_3875_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6);
v___x_3876_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3459_, v_options_3457_, v___x_3875_);
if (v___x_3876_ == 0)
{
lean_object* v___x_4235_; uint8_t v___x_4236_; 
v___x_4235_ = l_Lean_trace_profiler;
v___x_4236_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_3457_, v___x_4235_);
if (v___x_4236_ == 0)
{
lean_object* v___y_4238_; lean_object* v___y_4239_; lean_object* v___y_4240_; lean_object* v___y_4241_; lean_object* v___y_4242_; uint8_t v___y_4243_; lean_object* v___y_4244_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v_a_4249_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; lean_object* v___y_4265_; uint8_t v___y_4266_; lean_object* v___y_4267_; lean_object* v___y_4268_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4272_; lean_object* v_a_4273_; lean_object* v___y_4283_; lean_object* v___y_4284_; uint8_t v___y_4285_; lean_object* v___y_4286_; lean_object* v___y_4287_; lean_object* v___y_4288_; lean_object* v___y_4289_; lean_object* v___y_4290_; uint8_t v___y_4291_; lean_object* v___y_4292_; uint8_t v___y_4293_; lean_object* v___y_4294_; lean_object* v___y_4295_; uint8_t v___y_4296_; lean_object* v___y_4297_; lean_object* v___y_4298_; lean_object* v___y_4340_; lean_object* v___y_4341_; lean_object* v___y_4342_; lean_object* v___y_4343_; lean_object* v___y_4344_; lean_object* v___y_4345_; lean_object* v_a_4346_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4377_; lean_object* v___y_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___y_4392_; lean_object* v___y_4393_; lean_object* v___y_4394_; uint8_t v___y_4395_; lean_object* v___y_4396_; lean_object* v___y_4397_; lean_object* v___y_4398_; lean_object* v___y_4399_; lean_object* v___y_4400_; lean_object* v___y_4401_; lean_object* v_a_4402_; lean_object* v___y_4412_; lean_object* v___y_4413_; uint8_t v___y_4414_; lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; lean_object* v___y_4419_; lean_object* v___y_4420_; lean_object* v___y_4421_; lean_object* v_a_4422_; lean_object* v___y_4435_; uint8_t v___y_4436_; lean_object* v___y_4437_; lean_object* v___y_4438_; lean_object* v___y_4439_; lean_object* v___y_4440_; lean_object* v___y_4441_; lean_object* v___y_4442_; lean_object* v___y_4443_; lean_object* v___y_4444_; lean_object* v___y_4502_; lean_object* v___y_4503_; lean_object* v___y_4504_; lean_object* v___y_4505_; lean_object* v___y_4506_; lean_object* v_toCold_4507_; lean_object* v_ref_4508_; lean_object* v___y_4509_; lean_object* v___y_4546_; lean_object* v___y_4547_; lean_object* v___y_4548_; lean_object* v___y_4549_; lean_object* v___y_4550_; lean_object* v___y_4551_; lean_object* v___y_4552_; lean_object* v_a_4575_; lean_object* v___y_4597_; lean_object* v___y_4608_; lean_object* v___y_4609_; lean_object* v_a_4610_; lean_object* v___y_4623_; lean_object* v___y_4624_; lean_object* v_a_4625_; 
if (v___x_3876_ == 0)
{
if (v___x_4236_ == 0)
{
lean_object* v___x_4691_; 
v___x_4691_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_4691_) == 0)
{
lean_object* v_a_4692_; 
v_a_4692_ = lean_ctor_get(v___x_4691_, 0);
lean_inc(v_a_4692_);
lean_dec_ref_known(v___x_4691_, 1);
v_a_4575_ = v_a_4692_;
goto v___jp_4574_;
}
else
{
lean_object* v_a_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4704_; 
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4693_ = lean_ctor_get(v___x_4691_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v___x_4691_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4695_ = v___x_4691_;
v_isShared_4696_ = v_isSharedCheck_4704_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_a_4693_);
lean_dec(v___x_4691_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4704_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4702_; 
v___x_4697_ = lean_io_error_to_string(v_a_4693_);
v___x_4698_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4698_, 0, v___x_4697_);
v___x_4699_ = l_Lean_MessageData_ofFormat(v___x_4698_);
lean_inc(v_ref_3458_);
v___x_4700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4700_, 0, v_ref_3458_);
lean_ctor_set(v___x_4700_, 1, v___x_4699_);
if (v_isShared_4696_ == 0)
{
lean_ctor_set(v___x_4695_, 0, v___x_4700_);
v___x_4702_ = v___x_4695_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v___x_4700_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
}
else
{
goto v___jp_4634_;
}
}
else
{
goto v___jp_4634_;
}
v___jp_4237_:
{
lean_object* v___x_4250_; double v___x_4251_; double v___x_4252_; double v___x_4253_; double v___x_4254_; double v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; 
v___x_4250_ = lean_io_mono_nanos_now();
v___x_4251_ = lean_float_of_nat(v___y_4242_);
v___x_4252_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_4253_ = lean_float_div(v___x_4251_, v___x_4252_);
v___x_4254_ = lean_float_of_nat(v___x_4250_);
v___x_4255_ = lean_float_div(v___x_4254_, v___x_4252_);
v___x_4256_ = lean_box_float(v___x_4253_);
v___x_4257_ = lean_box_float(v___x_4255_);
v___x_4258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4258_, 0, v___x_4256_);
lean_ctor_set(v___x_4258_, 1, v___x_4257_);
v___x_4259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4259_, 0, v_a_4249_);
lean_ctor_set(v___x_4259_, 1, v___x_4258_);
lean_inc(v___y_4245_);
v___x_4260_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_4245_, v___x_3464_, v___x_3465_, v___y_4240_, v___y_4243_, v___y_4248_, v___f_3870_, v___x_4259_, v___y_4239_, v___y_4244_, v___y_4247_, v___y_4241_);
v___y_3401_ = v___y_4238_;
v___y_3402_ = v___y_4239_;
v___y_3403_ = v___y_4241_;
v___y_3404_ = v___y_4244_;
v___y_3405_ = v___y_4245_;
v___y_3406_ = v___y_4246_;
v___y_3407_ = v___y_4247_;
v___y_3408_ = v___x_4260_;
goto v___jp_3400_;
}
v___jp_4261_:
{
lean_object* v___x_4274_; double v___x_4275_; double v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
v___x_4274_ = lean_io_get_num_heartbeats();
v___x_4275_ = lean_float_of_nat(v___y_4267_);
v___x_4276_ = lean_float_of_nat(v___x_4274_);
v___x_4277_ = lean_box_float(v___x_4275_);
v___x_4278_ = lean_box_float(v___x_4276_);
v___x_4279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4277_);
lean_ctor_set(v___x_4279_, 1, v___x_4278_);
v___x_4280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4280_, 0, v_a_4273_);
lean_ctor_set(v___x_4280_, 1, v___x_4279_);
lean_inc(v___y_4269_);
v___x_4281_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v___y_4269_, v___x_3464_, v___x_3465_, v___y_4264_, v___y_4266_, v___y_4272_, v___f_3870_, v___x_4280_, v___y_4263_, v___y_4268_, v___y_4271_, v___y_4265_);
v___y_3401_ = v___y_4262_;
v___y_3402_ = v___y_4263_;
v___y_3403_ = v___y_4265_;
v___y_3404_ = v___y_4268_;
v___y_3405_ = v___y_4269_;
v___y_3406_ = v___y_4270_;
v___y_3407_ = v___y_4271_;
v___y_3408_ = v___x_4281_;
goto v___jp_3400_;
}
v___jp_4282_:
{
lean_object* v___x_4299_; lean_object* v_a_4300_; lean_object* v___x_4301_; uint8_t v___x_4302_; 
v___x_4299_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_4286_);
v_a_4300_ = lean_ctor_get(v___x_4299_, 0);
lean_inc(v_a_4300_);
lean_dec_ref(v___x_4299_);
v___x_4301_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4302_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_4290_, v___x_4301_);
if (v___x_4302_ == 0)
{
lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4303_ = lean_io_mono_nanos_now();
v___x_4304_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_4289_, v___y_4295_, v___y_4292_, v___y_4291_, v___y_4287_, v___y_4296_, v___y_4285_, v___y_4298_, v___y_4286_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v_a_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4312_; 
v_a_4305_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4312_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4312_ == 0)
{
v___x_4307_ = v___x_4304_;
v_isShared_4308_ = v_isSharedCheck_4312_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_a_4305_);
lean_dec(v___x_4304_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4312_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v___x_4310_; 
if (v_isShared_4308_ == 0)
{
lean_ctor_set_tag(v___x_4307_, 1);
v___x_4310_ = v___x_4307_;
goto v_reusejp_4309_;
}
else
{
lean_object* v_reuseFailAlloc_4311_; 
v_reuseFailAlloc_4311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4311_, 0, v_a_4305_);
v___x_4310_ = v_reuseFailAlloc_4311_;
goto v_reusejp_4309_;
}
v_reusejp_4309_:
{
v___y_4238_ = v___y_4283_;
v___y_4239_ = v___y_4284_;
v___y_4240_ = v___y_4290_;
v___y_4241_ = v___y_4286_;
v___y_4242_ = v___x_4303_;
v___y_4243_ = v___y_4293_;
v___y_4244_ = v___y_4294_;
v___y_4245_ = v___y_4288_;
v___y_4246_ = v___y_4297_;
v___y_4247_ = v___y_4298_;
v___y_4248_ = v_a_4300_;
v_a_4249_ = v___x_4310_;
goto v___jp_4237_;
}
}
}
else
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4320_; 
v_a_4313_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_4315_ = v___x_4304_;
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v___x_4304_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
lean_object* v___x_4318_; 
if (v_isShared_4316_ == 0)
{
lean_ctor_set_tag(v___x_4315_, 0);
v___x_4318_ = v___x_4315_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4319_; 
v_reuseFailAlloc_4319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4319_, 0, v_a_4313_);
v___x_4318_ = v_reuseFailAlloc_4319_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
v___y_4238_ = v___y_4283_;
v___y_4239_ = v___y_4284_;
v___y_4240_ = v___y_4290_;
v___y_4241_ = v___y_4286_;
v___y_4242_ = v___x_4303_;
v___y_4243_ = v___y_4293_;
v___y_4244_ = v___y_4294_;
v___y_4245_ = v___y_4288_;
v___y_4246_ = v___y_4297_;
v___y_4247_ = v___y_4298_;
v___y_4248_ = v_a_4300_;
v_a_4249_ = v___x_4318_;
goto v___jp_4237_;
}
}
}
}
else
{
lean_object* v___x_4321_; lean_object* v___x_4322_; 
v___x_4321_ = lean_io_get_num_heartbeats();
v___x_4322_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_4289_, v___y_4295_, v___y_4292_, v___y_4291_, v___y_4287_, v___y_4296_, v___y_4285_, v___y_4298_, v___y_4286_);
if (lean_obj_tag(v___x_4322_) == 0)
{
lean_object* v_a_4323_; lean_object* v___x_4325_; uint8_t v_isShared_4326_; uint8_t v_isSharedCheck_4330_; 
v_a_4323_ = lean_ctor_get(v___x_4322_, 0);
v_isSharedCheck_4330_ = !lean_is_exclusive(v___x_4322_);
if (v_isSharedCheck_4330_ == 0)
{
v___x_4325_ = v___x_4322_;
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
else
{
lean_inc(v_a_4323_);
lean_dec(v___x_4322_);
v___x_4325_ = lean_box(0);
v_isShared_4326_ = v_isSharedCheck_4330_;
goto v_resetjp_4324_;
}
v_resetjp_4324_:
{
lean_object* v___x_4328_; 
if (v_isShared_4326_ == 0)
{
lean_ctor_set_tag(v___x_4325_, 1);
v___x_4328_ = v___x_4325_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v_a_4323_);
v___x_4328_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
v___y_4262_ = v___y_4283_;
v___y_4263_ = v___y_4284_;
v___y_4264_ = v___y_4290_;
v___y_4265_ = v___y_4286_;
v___y_4266_ = v___y_4293_;
v___y_4267_ = v___x_4321_;
v___y_4268_ = v___y_4294_;
v___y_4269_ = v___y_4288_;
v___y_4270_ = v___y_4297_;
v___y_4271_ = v___y_4298_;
v___y_4272_ = v_a_4300_;
v_a_4273_ = v___x_4328_;
goto v___jp_4261_;
}
}
}
else
{
lean_object* v_a_4331_; lean_object* v___x_4333_; uint8_t v_isShared_4334_; uint8_t v_isSharedCheck_4338_; 
v_a_4331_ = lean_ctor_get(v___x_4322_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4322_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4333_ = v___x_4322_;
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
else
{
lean_inc(v_a_4331_);
lean_dec(v___x_4322_);
v___x_4333_ = lean_box(0);
v_isShared_4334_ = v_isSharedCheck_4338_;
goto v_resetjp_4332_;
}
v_resetjp_4332_:
{
lean_object* v___x_4336_; 
if (v_isShared_4334_ == 0)
{
lean_ctor_set_tag(v___x_4333_, 0);
v___x_4336_ = v___x_4333_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_a_4331_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
v___y_4262_ = v___y_4283_;
v___y_4263_ = v___y_4284_;
v___y_4264_ = v___y_4290_;
v___y_4265_ = v___y_4286_;
v___y_4266_ = v___y_4293_;
v___y_4267_ = v___x_4321_;
v___y_4268_ = v___y_4294_;
v___y_4269_ = v___y_4288_;
v___y_4270_ = v___y_4297_;
v___y_4271_ = v___y_4298_;
v___y_4272_ = v_a_4300_;
v_a_4273_ = v___x_4336_;
goto v___jp_4261_;
}
}
}
}
}
v___jp_4339_:
{
lean_object* v_toCold_4347_; lean_object* v_options_4348_; uint8_t v_hasTrace_4349_; 
v_toCold_4347_ = lean_ctor_get(v___y_4345_, 0);
v_options_4348_ = lean_ctor_get(v_toCold_4347_, 2);
v_hasTrace_4349_ = lean_ctor_get_uint8(v_options_4348_, sizeof(void*)*1);
if (v_hasTrace_4349_ == 0)
{
lean_object* v_config_4350_; lean_object* v_fst_4351_; lean_object* v_snd_4352_; lean_object* v_solver_4353_; lean_object* v_lratPath_4354_; lean_object* v_timeout_4355_; uint8_t v_trimProofs_4356_; uint8_t v_binaryProofs_4357_; uint8_t v_solverMode_4358_; lean_object* v___x_4359_; 
v_config_4350_ = lean_ctor_get(v_ctx_3331_, 5);
v_fst_4351_ = lean_ctor_get(v_a_4346_, 0);
lean_inc(v_fst_4351_);
v_snd_4352_ = lean_ctor_get(v_a_4346_, 1);
lean_inc(v_snd_4352_);
lean_dec_ref(v_a_4346_);
v_solver_4353_ = lean_ctor_get(v_ctx_3331_, 3);
v_lratPath_4354_ = lean_ctor_get(v_ctx_3331_, 4);
v_timeout_4355_ = lean_ctor_get(v_config_4350_, 0);
v_trimProofs_4356_ = lean_ctor_get_uint8(v_config_4350_, sizeof(void*)*2);
v_binaryProofs_4357_ = lean_ctor_get_uint8(v_config_4350_, sizeof(void*)*2 + 1);
v_solverMode_4358_ = lean_ctor_get_uint8(v_config_4350_, sizeof(void*)*2 + 10);
lean_inc(v_timeout_4355_);
lean_inc_ref(v_lratPath_4354_);
lean_inc_ref(v_solver_4353_);
v___x_4359_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_4351_, v_solver_4353_, v_lratPath_4354_, v_trimProofs_4356_, v_timeout_4355_, v_binaryProofs_4357_, v_solverMode_4358_, v___y_4345_, v___y_4341_);
v___y_3401_ = v_snd_4352_;
v___y_3402_ = v___y_4340_;
v___y_3403_ = v___y_4341_;
v___y_3404_ = v___y_4342_;
v___y_3405_ = v___y_4343_;
v___y_3406_ = v___y_4344_;
v___y_3407_ = v___y_4345_;
v___y_3408_ = v___x_4359_;
goto v___jp_3400_;
}
else
{
lean_object* v_config_4360_; lean_object* v_fst_4361_; lean_object* v_snd_4362_; lean_object* v_solver_4363_; lean_object* v_lratPath_4364_; lean_object* v_timeout_4365_; uint8_t v_trimProofs_4366_; uint8_t v_binaryProofs_4367_; uint8_t v_solverMode_4368_; lean_object* v_inheritedTraceOptions_4369_; lean_object* v___x_4370_; uint8_t v___x_4371_; 
v_config_4360_ = lean_ctor_get(v_ctx_3331_, 5);
v_fst_4361_ = lean_ctor_get(v_a_4346_, 0);
lean_inc(v_fst_4361_);
v_snd_4362_ = lean_ctor_get(v_a_4346_, 1);
lean_inc(v_snd_4362_);
lean_dec_ref(v_a_4346_);
v_solver_4363_ = lean_ctor_get(v_ctx_3331_, 3);
v_lratPath_4364_ = lean_ctor_get(v_ctx_3331_, 4);
v_timeout_4365_ = lean_ctor_get(v_config_4360_, 0);
v_trimProofs_4366_ = lean_ctor_get_uint8(v_config_4360_, sizeof(void*)*2);
v_binaryProofs_4367_ = lean_ctor_get_uint8(v_config_4360_, sizeof(void*)*2 + 1);
v_solverMode_4368_ = lean_ctor_get_uint8(v_config_4360_, sizeof(void*)*2 + 10);
v_inheritedTraceOptions_4369_ = lean_ctor_get(v_toCold_4347_, 11);
lean_inc(v___y_4343_);
v___x_4370_ = l_Lean_Name_append(v___x_3874_, v___y_4343_);
v___x_4371_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4369_, v_options_4348_, v___x_4370_);
lean_dec(v___x_4370_);
if (v___x_4371_ == 0)
{
uint8_t v___x_4372_; 
v___x_4372_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_4348_, v___x_4235_);
if (v___x_4372_ == 0)
{
lean_object* v___x_4373_; 
lean_inc(v_timeout_4365_);
lean_inc_ref(v_lratPath_4364_);
lean_inc_ref(v_solver_4363_);
v___x_4373_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_fst_4361_, v_solver_4363_, v_lratPath_4364_, v_trimProofs_4366_, v_timeout_4365_, v_binaryProofs_4367_, v_solverMode_4368_, v___y_4345_, v___y_4341_);
v___y_3401_ = v_snd_4362_;
v___y_3402_ = v___y_4340_;
v___y_3403_ = v___y_4341_;
v___y_3404_ = v___y_4342_;
v___y_3405_ = v___y_4343_;
v___y_3406_ = v___y_4344_;
v___y_3407_ = v___y_4345_;
v___y_3408_ = v___x_4373_;
goto v___jp_3400_;
}
else
{
lean_inc_ref(v_solver_4363_);
lean_inc_ref(v_lratPath_4364_);
lean_inc(v_timeout_4365_);
v___y_4283_ = v_snd_4362_;
v___y_4284_ = v___y_4340_;
v___y_4285_ = v_solverMode_4368_;
v___y_4286_ = v___y_4341_;
v___y_4287_ = v_timeout_4365_;
v___y_4288_ = v___y_4343_;
v___y_4289_ = v_fst_4361_;
v___y_4290_ = v_options_4348_;
v___y_4291_ = v_trimProofs_4366_;
v___y_4292_ = v_lratPath_4364_;
v___y_4293_ = v___x_4371_;
v___y_4294_ = v___y_4342_;
v___y_4295_ = v_solver_4363_;
v___y_4296_ = v_binaryProofs_4367_;
v___y_4297_ = v___y_4344_;
v___y_4298_ = v___y_4345_;
goto v___jp_4282_;
}
}
else
{
lean_inc_ref(v_solver_4363_);
lean_inc_ref(v_lratPath_4364_);
lean_inc(v_timeout_4365_);
v___y_4283_ = v_snd_4362_;
v___y_4284_ = v___y_4340_;
v___y_4285_ = v_solverMode_4368_;
v___y_4286_ = v___y_4341_;
v___y_4287_ = v_timeout_4365_;
v___y_4288_ = v___y_4343_;
v___y_4289_ = v_fst_4361_;
v___y_4290_ = v_options_4348_;
v___y_4291_ = v_trimProofs_4366_;
v___y_4292_ = v_lratPath_4364_;
v___y_4293_ = v___x_4371_;
v___y_4294_ = v___y_4342_;
v___y_4295_ = v_solver_4363_;
v___y_4296_ = v_binaryProofs_4367_;
v___y_4297_ = v___y_4344_;
v___y_4298_ = v___y_4345_;
goto v___jp_4282_;
}
}
}
v___jp_4374_:
{
if (lean_obj_tag(v___y_4381_) == 0)
{
lean_object* v_a_4382_; 
v_a_4382_ = lean_ctor_get(v___y_4381_, 0);
lean_inc(v_a_4382_);
lean_dec_ref_known(v___y_4381_, 1);
v___y_4340_ = v___y_4375_;
v___y_4341_ = v___y_4376_;
v___y_4342_ = v___y_4377_;
v___y_4343_ = v___y_4378_;
v___y_4344_ = v___y_4379_;
v___y_4345_ = v___y_4380_;
v_a_4346_ = v_a_4382_;
goto v___jp_4339_;
}
else
{
lean_object* v_a_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4390_; 
lean_dec(v___y_4379_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4383_ = lean_ctor_get(v___y_4381_, 0);
v_isSharedCheck_4390_ = !lean_is_exclusive(v___y_4381_);
if (v_isSharedCheck_4390_ == 0)
{
v___x_4385_ = v___y_4381_;
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_a_4383_);
lean_dec(v___y_4381_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4388_; 
if (v_isShared_4386_ == 0)
{
v___x_4388_ = v___x_4385_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v_a_4383_);
v___x_4388_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
return v___x_4388_;
}
}
}
}
v___jp_4391_:
{
lean_object* v___x_4403_; double v___x_4404_; double v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; 
v___x_4403_ = lean_io_get_num_heartbeats();
v___x_4404_ = lean_float_of_nat(v___y_4392_);
v___x_4405_ = lean_float_of_nat(v___x_4403_);
v___x_4406_ = lean_box_float(v___x_4404_);
v___x_4407_ = lean_box_float(v___x_4405_);
v___x_4408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4408_, 0, v___x_4406_);
lean_ctor_set(v___x_4408_, 1, v___x_4407_);
v___x_4409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4409_, 0, v_a_4402_);
lean_ctor_set(v___x_4409_, 1, v___x_4408_);
lean_inc(v___y_4399_);
v___x_4410_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_4399_, v___x_3464_, v___x_3465_, v___y_4398_, v___y_4395_, v___y_4397_, v___f_3871_, v___x_4409_, v___y_4393_, v___y_4396_, v___y_4401_, v___y_4394_);
v___y_4375_ = v___y_4393_;
v___y_4376_ = v___y_4394_;
v___y_4377_ = v___y_4396_;
v___y_4378_ = v___y_4399_;
v___y_4379_ = v___y_4400_;
v___y_4380_ = v___y_4401_;
v___y_4381_ = v___x_4410_;
goto v___jp_4374_;
}
v___jp_4411_:
{
lean_object* v___x_4423_; double v___x_4424_; double v___x_4425_; double v___x_4426_; double v___x_4427_; double v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; 
v___x_4423_ = lean_io_mono_nanos_now();
v___x_4424_ = lean_float_of_nat(v___y_4419_);
v___x_4425_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_4426_ = lean_float_div(v___x_4424_, v___x_4425_);
v___x_4427_ = lean_float_of_nat(v___x_4423_);
v___x_4428_ = lean_float_div(v___x_4427_, v___x_4425_);
v___x_4429_ = lean_box_float(v___x_4426_);
v___x_4430_ = lean_box_float(v___x_4428_);
v___x_4431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4429_);
lean_ctor_set(v___x_4431_, 1, v___x_4430_);
v___x_4432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4432_, 0, v_a_4422_);
lean_ctor_set(v___x_4432_, 1, v___x_4431_);
lean_inc(v___y_4418_);
v___x_4433_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v___y_4418_, v___x_3464_, v___x_3465_, v___y_4417_, v___y_4414_, v___y_4416_, v___f_3871_, v___x_4432_, v___y_4412_, v___y_4415_, v___y_4421_, v___y_4413_);
v___y_4375_ = v___y_4412_;
v___y_4376_ = v___y_4413_;
v___y_4377_ = v___y_4415_;
v___y_4378_ = v___y_4418_;
v___y_4379_ = v___y_4420_;
v___y_4380_ = v___y_4421_;
v___y_4381_ = v___x_4433_;
goto v___jp_4374_;
}
v___jp_4434_:
{
lean_object* v___x_4445_; lean_object* v_a_4446_; lean_object* v___x_4448_; uint8_t v_isShared_4449_; uint8_t v_isSharedCheck_4500_; 
v___x_4445_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_4437_);
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4448_ = v___x_4445_;
v_isShared_4449_ = v_isSharedCheck_4500_;
goto v_resetjp_4447_;
}
else
{
lean_inc(v_a_4446_);
lean_dec(v___x_4445_);
v___x_4448_ = lean_box(0);
v_isShared_4449_ = v_isSharedCheck_4500_;
goto v_resetjp_4447_;
}
v_resetjp_4447_:
{
lean_object* v___x_4450_; uint8_t v___x_4451_; 
v___x_4450_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4451_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v___y_4442_, v___x_4450_);
if (v___x_4451_ == 0)
{
lean_object* v___x_4452_; lean_object* v___x_4453_; 
v___x_4452_ = lean_io_mono_nanos_now();
v___x_4453_ = l_IO_lazyPure___redArg(v___y_4439_);
if (lean_obj_tag(v___x_4453_) == 0)
{
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4461_; 
lean_del_object(v___x_4448_);
v_a_4454_ = lean_ctor_get(v___x_4453_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4453_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4456_ = v___x_4453_;
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v___x_4453_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4459_; 
if (v_isShared_4457_ == 0)
{
lean_ctor_set_tag(v___x_4456_, 1);
v___x_4459_ = v___x_4456_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v_a_4454_);
v___x_4459_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
v___y_4412_ = v___y_4435_;
v___y_4413_ = v___y_4437_;
v___y_4414_ = v___y_4436_;
v___y_4415_ = v___y_4440_;
v___y_4416_ = v_a_4446_;
v___y_4417_ = v___y_4442_;
v___y_4418_ = v___y_4441_;
v___y_4419_ = v___x_4452_;
v___y_4420_ = v___y_4443_;
v___y_4421_ = v___y_4444_;
v_a_4422_ = v___x_4459_;
goto v___jp_4411_;
}
}
}
else
{
lean_object* v_a_4462_; lean_object* v___x_4464_; uint8_t v_isShared_4465_; uint8_t v_isSharedCheck_4475_; 
v_a_4462_ = lean_ctor_get(v___x_4453_, 0);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4453_);
if (v_isSharedCheck_4475_ == 0)
{
v___x_4464_ = v___x_4453_;
v_isShared_4465_ = v_isSharedCheck_4475_;
goto v_resetjp_4463_;
}
else
{
lean_inc(v_a_4462_);
lean_dec(v___x_4453_);
v___x_4464_ = lean_box(0);
v_isShared_4465_ = v_isSharedCheck_4475_;
goto v_resetjp_4463_;
}
v_resetjp_4463_:
{
lean_object* v___x_4466_; lean_object* v___x_4468_; 
v___x_4466_ = lean_io_error_to_string(v_a_4462_);
if (v_isShared_4465_ == 0)
{
lean_ctor_set_tag(v___x_4464_, 3);
lean_ctor_set(v___x_4464_, 0, v___x_4466_);
v___x_4468_ = v___x_4464_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4474_; 
v_reuseFailAlloc_4474_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4474_, 0, v___x_4466_);
v___x_4468_ = v_reuseFailAlloc_4474_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4472_; 
v___x_4469_ = l_Lean_MessageData_ofFormat(v___x_4468_);
lean_inc(v___y_4438_);
v___x_4470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4470_, 0, v___y_4438_);
lean_ctor_set(v___x_4470_, 1, v___x_4469_);
if (v_isShared_4449_ == 0)
{
lean_ctor_set(v___x_4448_, 0, v___x_4470_);
v___x_4472_ = v___x_4448_;
goto v_reusejp_4471_;
}
else
{
lean_object* v_reuseFailAlloc_4473_; 
v_reuseFailAlloc_4473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4473_, 0, v___x_4470_);
v___x_4472_ = v_reuseFailAlloc_4473_;
goto v_reusejp_4471_;
}
v_reusejp_4471_:
{
v___y_4412_ = v___y_4435_;
v___y_4413_ = v___y_4437_;
v___y_4414_ = v___y_4436_;
v___y_4415_ = v___y_4440_;
v___y_4416_ = v_a_4446_;
v___y_4417_ = v___y_4442_;
v___y_4418_ = v___y_4441_;
v___y_4419_ = v___x_4452_;
v___y_4420_ = v___y_4443_;
v___y_4421_ = v___y_4444_;
v_a_4422_ = v___x_4472_;
goto v___jp_4411_;
}
}
}
}
}
else
{
lean_object* v___x_4476_; lean_object* v___x_4477_; 
v___x_4476_ = lean_io_get_num_heartbeats();
v___x_4477_ = l_IO_lazyPure___redArg(v___y_4439_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4485_; 
lean_del_object(v___x_4448_);
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4485_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4485_ == 0)
{
v___x_4480_ = v___x_4477_;
v_isShared_4481_ = v_isSharedCheck_4485_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_a_4478_);
lean_dec(v___x_4477_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4485_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
lean_object* v___x_4483_; 
if (v_isShared_4481_ == 0)
{
lean_ctor_set_tag(v___x_4480_, 1);
v___x_4483_ = v___x_4480_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v_a_4478_);
v___x_4483_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
v___y_4392_ = v___x_4476_;
v___y_4393_ = v___y_4435_;
v___y_4394_ = v___y_4437_;
v___y_4395_ = v___y_4436_;
v___y_4396_ = v___y_4440_;
v___y_4397_ = v_a_4446_;
v___y_4398_ = v___y_4442_;
v___y_4399_ = v___y_4441_;
v___y_4400_ = v___y_4443_;
v___y_4401_ = v___y_4444_;
v_a_4402_ = v___x_4483_;
goto v___jp_4391_;
}
}
}
else
{
lean_object* v_a_4486_; lean_object* v___x_4488_; uint8_t v_isShared_4489_; uint8_t v_isSharedCheck_4499_; 
v_a_4486_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4499_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4499_ == 0)
{
v___x_4488_ = v___x_4477_;
v_isShared_4489_ = v_isSharedCheck_4499_;
goto v_resetjp_4487_;
}
else
{
lean_inc(v_a_4486_);
lean_dec(v___x_4477_);
v___x_4488_ = lean_box(0);
v_isShared_4489_ = v_isSharedCheck_4499_;
goto v_resetjp_4487_;
}
v_resetjp_4487_:
{
lean_object* v___x_4490_; lean_object* v___x_4492_; 
v___x_4490_ = lean_io_error_to_string(v_a_4486_);
if (v_isShared_4489_ == 0)
{
lean_ctor_set_tag(v___x_4488_, 3);
lean_ctor_set(v___x_4488_, 0, v___x_4490_);
v___x_4492_ = v___x_4488_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v___x_4490_);
v___x_4492_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4496_; 
v___x_4493_ = l_Lean_MessageData_ofFormat(v___x_4492_);
lean_inc(v___y_4438_);
v___x_4494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4494_, 0, v___y_4438_);
lean_ctor_set(v___x_4494_, 1, v___x_4493_);
if (v_isShared_4449_ == 0)
{
lean_ctor_set(v___x_4448_, 0, v___x_4494_);
v___x_4496_ = v___x_4448_;
goto v_reusejp_4495_;
}
else
{
lean_object* v_reuseFailAlloc_4497_; 
v_reuseFailAlloc_4497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4497_, 0, v___x_4494_);
v___x_4496_ = v_reuseFailAlloc_4497_;
goto v_reusejp_4495_;
}
v_reusejp_4495_:
{
v___y_4392_ = v___x_4476_;
v___y_4393_ = v___y_4435_;
v___y_4394_ = v___y_4437_;
v___y_4395_ = v___y_4436_;
v___y_4396_ = v___y_4440_;
v___y_4397_ = v_a_4446_;
v___y_4398_ = v___y_4442_;
v___y_4399_ = v___y_4441_;
v___y_4400_ = v___y_4443_;
v___y_4401_ = v___y_4444_;
v_a_4402_ = v___x_4496_;
goto v___jp_4391_;
}
}
}
}
}
}
}
v___jp_4501_:
{
lean_object* v_options_4510_; lean_object* v_inheritedTraceOptions_4511_; uint8_t v_hasTrace_4512_; lean_object* v___x_4513_; 
v_options_4510_ = lean_ctor_get(v_toCold_4507_, 2);
v_inheritedTraceOptions_4511_ = lean_ctor_get(v_toCold_4507_, 11);
v_hasTrace_4512_ = lean_ctor_get_uint8(v_options_4510_, sizeof(void*)*1);
v___x_4513_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3));
if (v_hasTrace_4512_ == 0)
{
lean_object* v___x_4514_; 
v___x_4514_ = l_IO_lazyPure___redArg(v___y_4502_);
if (lean_obj_tag(v___x_4514_) == 0)
{
lean_object* v_a_4515_; 
v_a_4515_ = lean_ctor_get(v___x_4514_, 0);
lean_inc(v_a_4515_);
lean_dec_ref_known(v___x_4514_, 1);
v___y_4340_ = v___y_4504_;
v___y_4341_ = v___y_4509_;
v___y_4342_ = v___y_4505_;
v___y_4343_ = v___x_4513_;
v___y_4344_ = v___y_4503_;
v___y_4345_ = v___y_4506_;
v_a_4346_ = v_a_4515_;
goto v___jp_4339_;
}
else
{
lean_object* v_a_4516_; lean_object* v___x_4518_; uint8_t v_isShared_4519_; uint8_t v_isSharedCheck_4527_; 
lean_dec(v___y_4503_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4516_ = lean_ctor_get(v___x_4514_, 0);
v_isSharedCheck_4527_ = !lean_is_exclusive(v___x_4514_);
if (v_isSharedCheck_4527_ == 0)
{
v___x_4518_ = v___x_4514_;
v_isShared_4519_ = v_isSharedCheck_4527_;
goto v_resetjp_4517_;
}
else
{
lean_inc(v_a_4516_);
lean_dec(v___x_4514_);
v___x_4518_ = lean_box(0);
v_isShared_4519_ = v_isSharedCheck_4527_;
goto v_resetjp_4517_;
}
v_resetjp_4517_:
{
lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4525_; 
v___x_4520_ = lean_io_error_to_string(v_a_4516_);
v___x_4521_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4520_);
v___x_4522_ = l_Lean_MessageData_ofFormat(v___x_4521_);
lean_inc(v_ref_4508_);
v___x_4523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4523_, 0, v_ref_4508_);
lean_ctor_set(v___x_4523_, 1, v___x_4522_);
if (v_isShared_4519_ == 0)
{
lean_ctor_set(v___x_4518_, 0, v___x_4523_);
v___x_4525_ = v___x_4518_;
goto v_reusejp_4524_;
}
else
{
lean_object* v_reuseFailAlloc_4526_; 
v_reuseFailAlloc_4526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4526_, 0, v___x_4523_);
v___x_4525_ = v_reuseFailAlloc_4526_;
goto v_reusejp_4524_;
}
v_reusejp_4524_:
{
return v___x_4525_;
}
}
}
}
else
{
lean_object* v___x_4528_; uint8_t v___x_4529_; 
v___x_4528_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_4529_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4511_, v_options_4510_, v___x_4528_);
if (v___x_4529_ == 0)
{
uint8_t v___x_4530_; 
v___x_4530_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_4510_, v___x_4235_);
if (v___x_4530_ == 0)
{
lean_object* v___x_4531_; 
v___x_4531_ = l_IO_lazyPure___redArg(v___y_4502_);
if (lean_obj_tag(v___x_4531_) == 0)
{
lean_object* v_a_4532_; 
v_a_4532_ = lean_ctor_get(v___x_4531_, 0);
lean_inc(v_a_4532_);
lean_dec_ref_known(v___x_4531_, 1);
v___y_4340_ = v___y_4504_;
v___y_4341_ = v___y_4509_;
v___y_4342_ = v___y_4505_;
v___y_4343_ = v___x_4513_;
v___y_4344_ = v___y_4503_;
v___y_4345_ = v___y_4506_;
v_a_4346_ = v_a_4532_;
goto v___jp_4339_;
}
else
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4544_; 
lean_dec(v___y_4503_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4533_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4544_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4544_ == 0)
{
v___x_4535_ = v___x_4531_;
v_isShared_4536_ = v_isSharedCheck_4544_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v___x_4531_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4544_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4542_; 
v___x_4537_ = lean_io_error_to_string(v_a_4533_);
v___x_4538_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4538_, 0, v___x_4537_);
v___x_4539_ = l_Lean_MessageData_ofFormat(v___x_4538_);
lean_inc(v_ref_4508_);
v___x_4540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4540_, 0, v_ref_4508_);
lean_ctor_set(v___x_4540_, 1, v___x_4539_);
if (v_isShared_4536_ == 0)
{
lean_ctor_set(v___x_4535_, 0, v___x_4540_);
v___x_4542_ = v___x_4535_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4543_; 
v_reuseFailAlloc_4543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4543_, 0, v___x_4540_);
v___x_4542_ = v_reuseFailAlloc_4543_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
return v___x_4542_;
}
}
}
}
else
{
v___y_4435_ = v___y_4504_;
v___y_4436_ = v___x_4529_;
v___y_4437_ = v___y_4509_;
v___y_4438_ = v_ref_4508_;
v___y_4439_ = v___y_4502_;
v___y_4440_ = v___y_4505_;
v___y_4441_ = v___x_4513_;
v___y_4442_ = v_options_4510_;
v___y_4443_ = v___y_4503_;
v___y_4444_ = v___y_4506_;
goto v___jp_4434_;
}
}
else
{
v___y_4435_ = v___y_4504_;
v___y_4436_ = v___x_4529_;
v___y_4437_ = v___y_4509_;
v___y_4438_ = v_ref_4508_;
v___y_4439_ = v___y_4502_;
v___y_4440_ = v___y_4505_;
v___y_4441_ = v___x_4513_;
v___y_4442_ = v_options_4510_;
v___y_4443_ = v___y_4503_;
v___y_4444_ = v___y_4506_;
goto v___jp_4434_;
}
}
}
v___jp_4545_:
{
lean_object* v_config_4553_; uint8_t v_graphviz_4554_; 
v_config_4553_ = lean_ctor_get(v_ctx_3331_, 5);
v_graphviz_4554_ = lean_ctor_get_uint8(v_config_4553_, sizeof(void*)*2 + 8);
if (v_graphviz_4554_ == 0)
{
lean_object* v_toCold_4555_; lean_object* v_ref_4556_; 
lean_dec_ref(v___y_4546_);
v_toCold_4555_ = lean_ctor_get(v___y_4551_, 0);
v_ref_4556_ = lean_ctor_get(v___y_4551_, 2);
v___y_4502_ = v___y_4547_;
v___y_4503_ = v___y_4548_;
v___y_4504_ = v___y_4549_;
v___y_4505_ = v___y_4550_;
v___y_4506_ = v___y_4551_;
v_toCold_4507_ = v_toCold_4555_;
v_ref_4508_ = v_ref_4556_;
v___y_4509_ = v___y_4552_;
goto v___jp_4501_;
}
else
{
lean_object* v_toCold_4557_; lean_object* v_ref_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; 
v_toCold_4557_ = lean_ctor_get(v___y_4551_, 0);
v_ref_4558_ = lean_ctor_get(v___y_4551_, 2);
v___x_4559_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__6);
v___x_4560_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(v___y_4546_);
v___x_4561_ = l_IO_FS_writeFile(v___x_4559_, v___x_4560_);
lean_dec_ref(v___x_4560_);
if (lean_obj_tag(v___x_4561_) == 0)
{
lean_dec_ref_known(v___x_4561_, 1);
v___y_4502_ = v___y_4547_;
v___y_4503_ = v___y_4548_;
v___y_4504_ = v___y_4549_;
v___y_4505_ = v___y_4550_;
v___y_4506_ = v___y_4551_;
v_toCold_4507_ = v_toCold_4557_;
v_ref_4508_ = v_ref_4558_;
v___y_4509_ = v___y_4552_;
goto v___jp_4501_;
}
else
{
lean_object* v_a_4562_; lean_object* v___x_4564_; uint8_t v_isShared_4565_; uint8_t v_isSharedCheck_4573_; 
lean_dec(v___y_4548_);
lean_dec_ref(v___y_4547_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4562_ = lean_ctor_get(v___x_4561_, 0);
v_isSharedCheck_4573_ = !lean_is_exclusive(v___x_4561_);
if (v_isSharedCheck_4573_ == 0)
{
v___x_4564_ = v___x_4561_;
v_isShared_4565_ = v_isSharedCheck_4573_;
goto v_resetjp_4563_;
}
else
{
lean_inc(v_a_4562_);
lean_dec(v___x_4561_);
v___x_4564_ = lean_box(0);
v_isShared_4565_ = v_isSharedCheck_4573_;
goto v_resetjp_4563_;
}
v_resetjp_4563_:
{
lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4571_; 
v___x_4566_ = lean_io_error_to_string(v_a_4562_);
v___x_4567_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4567_, 0, v___x_4566_);
v___x_4568_ = l_Lean_MessageData_ofFormat(v___x_4567_);
lean_inc(v_ref_4558_);
v___x_4569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4569_, 0, v_ref_4558_);
lean_ctor_set(v___x_4569_, 1, v___x_4568_);
if (v_isShared_4565_ == 0)
{
lean_ctor_set(v___x_4564_, 0, v___x_4569_);
v___x_4571_ = v___x_4564_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v___x_4569_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
return v___x_4571_;
}
}
}
}
}
v___jp_4574_:
{
lean_object* v_aig_4576_; lean_object* v_decls_4577_; lean_object* v___f_4578_; lean_object* v___x_4579_; 
v_aig_4576_ = lean_ctor_get(v_a_4575_, 0);
v_decls_4577_ = lean_ctor_get(v_aig_4576_, 0);
lean_inc_ref(v_a_4575_);
v___f_4578_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__3), 2, 1);
lean_closure_set(v___f_4578_, 0, v_a_4575_);
v___x_4579_ = lean_array_get_size(v_decls_4577_);
if (v___x_3876_ == 0)
{
v___y_4546_ = v_a_4575_;
v___y_4547_ = v___f_4578_;
v___y_4548_ = v___x_4579_;
v___y_4549_ = v_a_3335_;
v___y_4550_ = v_a_3336_;
v___y_4551_ = v_a_3337_;
v___y_4552_ = v_a_3338_;
goto v___jp_4545_;
}
else
{
lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4580_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7));
v___x_4581_ = l_Nat_reprFast(v___x_4579_);
v___x_4582_ = lean_string_append(v___x_4580_, v___x_4581_);
lean_dec_ref(v___x_4581_);
v___x_4583_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8));
v___x_4584_ = lean_string_append(v___x_4582_, v___x_4583_);
v___x_4585_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4585_, 0, v___x_4584_);
v___x_4586_ = l_Lean_MessageData_ofFormat(v___x_4585_);
v___x_4587_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v_cls_3869_, v___x_4586_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
if (lean_obj_tag(v___x_4587_) == 0)
{
lean_dec_ref_known(v___x_4587_, 1);
v___y_4546_ = v_a_4575_;
v___y_4547_ = v___f_4578_;
v___y_4548_ = v___x_4579_;
v___y_4549_ = v_a_3335_;
v___y_4550_ = v_a_3336_;
v___y_4551_ = v_a_3337_;
v___y_4552_ = v_a_3338_;
goto v___jp_4545_;
}
else
{
lean_object* v_a_4588_; lean_object* v___x_4590_; uint8_t v_isShared_4591_; uint8_t v_isSharedCheck_4595_; 
lean_dec_ref(v___f_4578_);
lean_dec_ref(v_a_4575_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4588_ = lean_ctor_get(v___x_4587_, 0);
v_isSharedCheck_4595_ = !lean_is_exclusive(v___x_4587_);
if (v_isSharedCheck_4595_ == 0)
{
v___x_4590_ = v___x_4587_;
v_isShared_4591_ = v_isSharedCheck_4595_;
goto v_resetjp_4589_;
}
else
{
lean_inc(v_a_4588_);
lean_dec(v___x_4587_);
v___x_4590_ = lean_box(0);
v_isShared_4591_ = v_isSharedCheck_4595_;
goto v_resetjp_4589_;
}
v_resetjp_4589_:
{
lean_object* v___x_4593_; 
if (v_isShared_4591_ == 0)
{
v___x_4593_ = v___x_4590_;
goto v_reusejp_4592_;
}
else
{
lean_object* v_reuseFailAlloc_4594_; 
v_reuseFailAlloc_4594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4594_, 0, v_a_4588_);
v___x_4593_ = v_reuseFailAlloc_4594_;
goto v_reusejp_4592_;
}
v_reusejp_4592_:
{
return v___x_4593_;
}
}
}
}
}
v___jp_4596_:
{
if (lean_obj_tag(v___y_4597_) == 0)
{
lean_object* v_a_4598_; 
v_a_4598_ = lean_ctor_get(v___y_4597_, 0);
lean_inc(v_a_4598_);
lean_dec_ref_known(v___y_4597_, 1);
v_a_4575_ = v_a_4598_;
goto v___jp_4574_;
}
else
{
lean_object* v_a_4599_; lean_object* v___x_4601_; uint8_t v_isShared_4602_; uint8_t v_isSharedCheck_4606_; 
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4599_ = lean_ctor_get(v___y_4597_, 0);
v_isSharedCheck_4606_ = !lean_is_exclusive(v___y_4597_);
if (v_isSharedCheck_4606_ == 0)
{
v___x_4601_ = v___y_4597_;
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
else
{
lean_inc(v_a_4599_);
lean_dec(v___y_4597_);
v___x_4601_ = lean_box(0);
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
v_resetjp_4600_:
{
lean_object* v___x_4604_; 
if (v_isShared_4602_ == 0)
{
v___x_4604_ = v___x_4601_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v_a_4599_);
v___x_4604_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
return v___x_4604_;
}
}
}
}
v___jp_4607_:
{
lean_object* v___x_4611_; double v___x_4612_; double v___x_4613_; double v___x_4614_; double v___x_4615_; double v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; 
v___x_4611_ = lean_io_mono_nanos_now();
v___x_4612_ = lean_float_of_nat(v___y_4608_);
v___x_4613_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_4614_ = lean_float_div(v___x_4612_, v___x_4613_);
v___x_4615_ = lean_float_of_nat(v___x_4611_);
v___x_4616_ = lean_float_div(v___x_4615_, v___x_4613_);
v___x_4617_ = lean_box_float(v___x_4614_);
v___x_4618_ = lean_box_float(v___x_4616_);
v___x_4619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4619_, 0, v___x_4617_);
lean_ctor_set(v___x_4619_, 1, v___x_4618_);
v___x_4620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4620_, 0, v_a_4610_);
lean_ctor_set(v___x_4620_, 1, v___x_4619_);
v___x_4621_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_3869_, v___x_3464_, v___x_3465_, v_options_3457_, v___x_3876_, v___y_4609_, v___f_3873_, v___x_4620_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_4597_ = v___x_4621_;
goto v___jp_4596_;
}
v___jp_4622_:
{
lean_object* v___x_4626_; double v___x_4627_; double v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; 
v___x_4626_ = lean_io_get_num_heartbeats();
v___x_4627_ = lean_float_of_nat(v___y_4623_);
v___x_4628_ = lean_float_of_nat(v___x_4626_);
v___x_4629_ = lean_box_float(v___x_4627_);
v___x_4630_ = lean_box_float(v___x_4628_);
v___x_4631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4631_, 0, v___x_4629_);
lean_ctor_set(v___x_4631_, 1, v___x_4630_);
v___x_4632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4632_, 0, v_a_4625_);
lean_ctor_set(v___x_4632_, 1, v___x_4631_);
v___x_4633_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_3869_, v___x_3464_, v___x_3465_, v_options_3457_, v___x_3876_, v___y_4624_, v___f_3873_, v___x_4632_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_4597_ = v___x_4633_;
goto v___jp_4596_;
}
v___jp_4634_:
{
lean_object* v___x_4635_; lean_object* v_a_4636_; lean_object* v___x_4638_; uint8_t v_isShared_4639_; uint8_t v_isSharedCheck_4690_; 
v___x_4635_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_3338_);
v_a_4636_ = lean_ctor_get(v___x_4635_, 0);
v_isSharedCheck_4690_ = !lean_is_exclusive(v___x_4635_);
if (v_isSharedCheck_4690_ == 0)
{
v___x_4638_ = v___x_4635_;
v_isShared_4639_ = v_isSharedCheck_4690_;
goto v_resetjp_4637_;
}
else
{
lean_inc(v_a_4636_);
lean_dec(v___x_4635_);
v___x_4638_ = lean_box(0);
v_isShared_4639_ = v_isSharedCheck_4690_;
goto v_resetjp_4637_;
}
v_resetjp_4637_:
{
lean_object* v___x_4640_; uint8_t v___x_4641_; 
v___x_4640_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4641_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_3457_, v___x_4640_);
if (v___x_4641_ == 0)
{
lean_object* v___x_4642_; lean_object* v___x_4643_; 
v___x_4642_ = lean_io_mono_nanos_now();
v___x_4643_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_4643_) == 0)
{
lean_object* v_a_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4651_; 
lean_del_object(v___x_4638_);
v_a_4644_ = lean_ctor_get(v___x_4643_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v___x_4643_);
if (v_isSharedCheck_4651_ == 0)
{
v___x_4646_ = v___x_4643_;
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_a_4644_);
lean_dec(v___x_4643_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4649_; 
if (v_isShared_4647_ == 0)
{
lean_ctor_set_tag(v___x_4646_, 1);
v___x_4649_ = v___x_4646_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v_a_4644_);
v___x_4649_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
v___y_4608_ = v___x_4642_;
v___y_4609_ = v_a_4636_;
v_a_4610_ = v___x_4649_;
goto v___jp_4607_;
}
}
}
else
{
lean_object* v_a_4652_; lean_object* v___x_4654_; uint8_t v_isShared_4655_; uint8_t v_isSharedCheck_4665_; 
v_a_4652_ = lean_ctor_get(v___x_4643_, 0);
v_isSharedCheck_4665_ = !lean_is_exclusive(v___x_4643_);
if (v_isSharedCheck_4665_ == 0)
{
v___x_4654_ = v___x_4643_;
v_isShared_4655_ = v_isSharedCheck_4665_;
goto v_resetjp_4653_;
}
else
{
lean_inc(v_a_4652_);
lean_dec(v___x_4643_);
v___x_4654_ = lean_box(0);
v_isShared_4655_ = v_isSharedCheck_4665_;
goto v_resetjp_4653_;
}
v_resetjp_4653_:
{
lean_object* v___x_4656_; lean_object* v___x_4658_; 
v___x_4656_ = lean_io_error_to_string(v_a_4652_);
if (v_isShared_4655_ == 0)
{
lean_ctor_set_tag(v___x_4654_, 3);
lean_ctor_set(v___x_4654_, 0, v___x_4656_);
v___x_4658_ = v___x_4654_;
goto v_reusejp_4657_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v___x_4656_);
v___x_4658_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4657_;
}
v_reusejp_4657_:
{
lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4662_; 
v___x_4659_ = l_Lean_MessageData_ofFormat(v___x_4658_);
lean_inc(v_ref_3458_);
v___x_4660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4660_, 0, v_ref_3458_);
lean_ctor_set(v___x_4660_, 1, v___x_4659_);
if (v_isShared_4639_ == 0)
{
lean_ctor_set(v___x_4638_, 0, v___x_4660_);
v___x_4662_ = v___x_4638_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v___x_4660_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
v___y_4608_ = v___x_4642_;
v___y_4609_ = v_a_4636_;
v_a_4610_ = v___x_4662_;
goto v___jp_4607_;
}
}
}
}
}
else
{
lean_object* v___x_4666_; lean_object* v___x_4667_; 
v___x_4666_ = lean_io_get_num_heartbeats();
v___x_4667_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_4667_) == 0)
{
lean_object* v_a_4668_; lean_object* v___x_4670_; uint8_t v_isShared_4671_; uint8_t v_isSharedCheck_4675_; 
lean_del_object(v___x_4638_);
v_a_4668_ = lean_ctor_get(v___x_4667_, 0);
v_isSharedCheck_4675_ = !lean_is_exclusive(v___x_4667_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4670_ = v___x_4667_;
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
else
{
lean_inc(v_a_4668_);
lean_dec(v___x_4667_);
v___x_4670_ = lean_box(0);
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
v_resetjp_4669_:
{
lean_object* v___x_4673_; 
if (v_isShared_4671_ == 0)
{
lean_ctor_set_tag(v___x_4670_, 1);
v___x_4673_ = v___x_4670_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v_a_4668_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
v___y_4623_ = v___x_4666_;
v___y_4624_ = v_a_4636_;
v_a_4625_ = v___x_4673_;
goto v___jp_4622_;
}
}
}
else
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4689_; 
v_a_4676_ = lean_ctor_get(v___x_4667_, 0);
v_isSharedCheck_4689_ = !lean_is_exclusive(v___x_4667_);
if (v_isSharedCheck_4689_ == 0)
{
v___x_4678_ = v___x_4667_;
v_isShared_4679_ = v_isSharedCheck_4689_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4667_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4689_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4680_; lean_object* v___x_4682_; 
v___x_4680_ = lean_io_error_to_string(v_a_4676_);
if (v_isShared_4679_ == 0)
{
lean_ctor_set_tag(v___x_4678_, 3);
lean_ctor_set(v___x_4678_, 0, v___x_4680_);
v___x_4682_ = v___x_4678_;
goto v_reusejp_4681_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v___x_4680_);
v___x_4682_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4681_;
}
v_reusejp_4681_:
{
lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4686_; 
v___x_4683_ = l_Lean_MessageData_ofFormat(v___x_4682_);
lean_inc(v_ref_3458_);
v___x_4684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4684_, 0, v_ref_3458_);
lean_ctor_set(v___x_4684_, 1, v___x_4683_);
if (v_isShared_4639_ == 0)
{
lean_ctor_set(v___x_4638_, 0, v___x_4684_);
v___x_4686_ = v___x_4638_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v___x_4684_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
v___y_4623_ = v___x_4666_;
v___y_4624_ = v_a_4636_;
v_a_4625_ = v___x_4686_;
goto v___jp_4622_;
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
lean_inc_ref(v_unusedHypotheses_3391_);
goto v___jp_4198_;
}
}
else
{
lean_inc_ref(v_unusedHypotheses_3391_);
goto v___jp_4198_;
}
v___jp_3877_:
{
lean_object* v___x_3881_; double v___x_3882_; double v___x_3883_; double v___x_3884_; double v___x_3885_; double v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; 
v___x_3881_ = lean_io_mono_nanos_now();
v___x_3882_ = lean_float_of_nat(v___y_3878_);
v___x_3883_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_3884_ = lean_float_div(v___x_3882_, v___x_3883_);
v___x_3885_ = lean_float_of_nat(v___x_3881_);
v___x_3886_ = lean_float_div(v___x_3885_, v___x_3883_);
v___x_3887_ = lean_box_float(v___x_3884_);
v___x_3888_ = lean_box_float(v___x_3886_);
v___x_3889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3887_);
lean_ctor_set(v___x_3889_, 1, v___x_3888_);
v___x_3890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3890_, 0, v_a_3880_);
lean_ctor_set(v___x_3890_, 1, v___x_3889_);
v___x_3891_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v_cls_3869_, v___x_3464_, v___x_3465_, v_options_3457_, v___x_3876_, v___y_3879_, v___f_3872_, v___x_3890_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
return v___x_3891_;
}
v___jp_3892_:
{
lean_object* v___x_3896_; 
v___x_3896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3896_, 0, v_a_3895_);
v___y_3878_ = v___y_3893_;
v___y_3879_ = v___y_3894_;
v_a_3880_ = v___x_3896_;
goto v___jp_3877_;
}
v___jp_3897_:
{
if (lean_obj_tag(v___y_3900_) == 0)
{
lean_object* v_a_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3908_; 
v_a_3901_ = lean_ctor_get(v___y_3900_, 0);
v_isSharedCheck_3908_ = !lean_is_exclusive(v___y_3900_);
if (v_isSharedCheck_3908_ == 0)
{
v___x_3903_ = v___y_3900_;
v_isShared_3904_ = v_isSharedCheck_3908_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_a_3901_);
lean_dec(v___y_3900_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3908_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v___x_3906_; 
if (v_isShared_3904_ == 0)
{
lean_ctor_set_tag(v___x_3903_, 1);
v___x_3906_ = v___x_3903_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v_a_3901_);
v___x_3906_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
v___y_3878_ = v___y_3898_;
v___y_3879_ = v___y_3899_;
v_a_3880_ = v___x_3906_;
goto v___jp_3877_;
}
}
}
else
{
lean_object* v_a_3909_; 
v_a_3909_ = lean_ctor_get(v___y_3900_, 0);
lean_inc(v_a_3909_);
lean_dec_ref_known(v___y_3900_, 1);
v___y_3893_ = v___y_3898_;
v___y_3894_ = v___y_3899_;
v_a_3895_ = v_a_3909_;
goto v___jp_3892_;
}
}
v___jp_3910_:
{
lean_object* v_aig_3915_; lean_object* v_decls_3916_; lean_object* v___f_3917_; lean_object* v___x_3918_; 
v_aig_3915_ = lean_ctor_get(v_a_3914_, 0);
v_decls_3916_ = lean_ctor_get(v_aig_3915_, 0);
lean_inc_ref(v_a_3914_);
v___f_3917_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__3), 2, 1);
lean_closure_set(v___f_3917_, 0, v_a_3914_);
v___x_3918_ = lean_array_get_size(v_decls_3916_);
if (v___x_3876_ == 0)
{
lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3919_ = lean_box(0);
v___x_3920_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6(v_ctx_3331_, v___x_3918_, v_atomsAssignment_3334_, v_goal_3332_, v_unusedHypotheses_3391_, v_reflectionResult_3333_, v___x_3464_, v___x_3465_, v___f_3870_, v___y_3911_, v___f_3871_, v___f_3917_, v___x_3461_, v___x_3462_, v_a_3914_, v___x_3919_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_3898_ = v___y_3912_;
v___y_3899_ = v___y_3913_;
v___y_3900_ = v___x_3920_;
goto v___jp_3897_;
}
else
{
lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; 
v___x_3921_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7));
v___x_3922_ = l_Nat_reprFast(v___x_3918_);
v___x_3923_ = lean_string_append(v___x_3921_, v___x_3922_);
lean_dec_ref(v___x_3922_);
v___x_3924_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8));
v___x_3925_ = lean_string_append(v___x_3923_, v___x_3924_);
v___x_3926_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3926_, 0, v___x_3925_);
v___x_3927_ = l_Lean_MessageData_ofFormat(v___x_3926_);
v___x_3928_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v_cls_3869_, v___x_3927_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v_a_3929_; lean_object* v___x_3930_; 
v_a_3929_ = lean_ctor_get(v___x_3928_, 0);
lean_inc(v_a_3929_);
lean_dec_ref_known(v___x_3928_, 1);
v___x_3930_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6(v_ctx_3331_, v___x_3918_, v_atomsAssignment_3334_, v_goal_3332_, v_unusedHypotheses_3391_, v_reflectionResult_3333_, v___x_3464_, v___x_3465_, v___f_3870_, v___y_3911_, v___f_3871_, v___f_3917_, v___x_3461_, v___x_3462_, v_a_3914_, v_a_3929_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_3898_ = v___y_3912_;
v___y_3899_ = v___y_3913_;
v___y_3900_ = v___x_3930_;
goto v___jp_3897_;
}
else
{
lean_object* v_a_3931_; 
lean_dec_ref(v___f_3917_);
lean_dec_ref(v_a_3914_);
lean_dec_ref(v_unusedHypotheses_3391_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_3931_ = lean_ctor_get(v___x_3928_, 0);
lean_inc(v_a_3931_);
lean_dec_ref_known(v___x_3928_, 1);
v___y_3893_ = v___y_3912_;
v___y_3894_ = v___y_3913_;
v_a_3895_ = v_a_3931_;
goto v___jp_3892_;
}
}
}
v___jp_3932_:
{
if (lean_obj_tag(v___y_3936_) == 0)
{
lean_object* v_a_3937_; 
v_a_3937_ = lean_ctor_get(v___y_3936_, 0);
lean_inc(v_a_3937_);
lean_dec_ref_known(v___y_3936_, 1);
v___y_3911_ = v___y_3933_;
v___y_3912_ = v___y_3934_;
v___y_3913_ = v___y_3935_;
v_a_3914_ = v_a_3937_;
goto v___jp_3910_;
}
else
{
lean_object* v_a_3938_; 
lean_dec_ref(v_unusedHypotheses_3391_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_3938_ = lean_ctor_get(v___y_3936_, 0);
lean_inc(v_a_3938_);
lean_dec_ref_known(v___y_3936_, 1);
v___y_3893_ = v___y_3934_;
v___y_3894_ = v___y_3935_;
v_a_3895_ = v_a_3938_;
goto v___jp_3892_;
}
}
v___jp_3939_:
{
lean_object* v___x_3947_; double v___x_3948_; double v___x_3949_; double v___x_3950_; double v___x_3951_; double v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; 
v___x_3947_ = lean_io_mono_nanos_now();
v___x_3948_ = lean_float_of_nat(v___y_3943_);
v___x_3949_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_3950_ = lean_float_div(v___x_3948_, v___x_3949_);
v___x_3951_ = lean_float_of_nat(v___x_3947_);
v___x_3952_ = lean_float_div(v___x_3951_, v___x_3949_);
v___x_3953_ = lean_box_float(v___x_3950_);
v___x_3954_ = lean_box_float(v___x_3952_);
v___x_3955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3955_, 0, v___x_3953_);
lean_ctor_set(v___x_3955_, 1, v___x_3954_);
v___x_3956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3956_, 0, v_a_3946_);
lean_ctor_set(v___x_3956_, 1, v___x_3955_);
v___x_3957_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_3869_, v___x_3464_, v___x_3465_, v_options_3457_, v___y_3942_, v___y_3941_, v___f_3873_, v___x_3956_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_3933_ = v___y_3940_;
v___y_3934_ = v___y_3944_;
v___y_3935_ = v___y_3945_;
v___y_3936_ = v___x_3957_;
goto v___jp_3932_;
}
v___jp_3958_:
{
lean_object* v___x_3966_; double v___x_3967_; double v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; 
v___x_3966_ = lean_io_get_num_heartbeats();
v___x_3967_ = lean_float_of_nat(v___y_3964_);
v___x_3968_ = lean_float_of_nat(v___x_3966_);
v___x_3969_ = lean_box_float(v___x_3967_);
v___x_3970_ = lean_box_float(v___x_3968_);
v___x_3971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3969_);
lean_ctor_set(v___x_3971_, 1, v___x_3970_);
v___x_3972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3972_, 0, v_a_3965_);
lean_ctor_set(v___x_3972_, 1, v___x_3971_);
v___x_3973_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_3869_, v___x_3464_, v___x_3465_, v_options_3457_, v___y_3961_, v___y_3960_, v___f_3873_, v___x_3972_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_3933_ = v___y_3959_;
v___y_3934_ = v___y_3962_;
v___y_3935_ = v___y_3963_;
v___y_3936_ = v___x_3973_;
goto v___jp_3932_;
}
v___jp_3974_:
{
lean_object* v___x_3980_; 
v___x_3980_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_3338_);
if (v___y_3979_ == 0)
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_4009_; 
v_a_3981_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_3983_ = v___x_3980_;
v_isShared_3984_ = v_isSharedCheck_4009_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3980_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_4009_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3985_; lean_object* v___x_3986_; 
v___x_3985_ = lean_io_mono_nanos_now();
v___x_3986_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_3986_) == 0)
{
lean_object* v_a_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_3994_; 
lean_del_object(v___x_3983_);
v_a_3987_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_3994_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_3994_ == 0)
{
v___x_3989_ = v___x_3986_;
v_isShared_3990_ = v_isSharedCheck_3994_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_a_3987_);
lean_dec(v___x_3986_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_3994_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v___x_3992_; 
if (v_isShared_3990_ == 0)
{
lean_ctor_set_tag(v___x_3989_, 1);
v___x_3992_ = v___x_3989_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v_a_3987_);
v___x_3992_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
v___y_3940_ = v___y_3975_;
v___y_3941_ = v_a_3981_;
v___y_3942_ = v___y_3976_;
v___y_3943_ = v___x_3985_;
v___y_3944_ = v___y_3977_;
v___y_3945_ = v___y_3978_;
v_a_3946_ = v___x_3992_;
goto v___jp_3939_;
}
}
}
else
{
lean_object* v_a_3995_; lean_object* v___x_3997_; uint8_t v_isShared_3998_; uint8_t v_isSharedCheck_4008_; 
v_a_3995_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_4008_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_4008_ == 0)
{
v___x_3997_ = v___x_3986_;
v_isShared_3998_ = v_isSharedCheck_4008_;
goto v_resetjp_3996_;
}
else
{
lean_inc(v_a_3995_);
lean_dec(v___x_3986_);
v___x_3997_ = lean_box(0);
v_isShared_3998_ = v_isSharedCheck_4008_;
goto v_resetjp_3996_;
}
v_resetjp_3996_:
{
lean_object* v___x_3999_; lean_object* v___x_4001_; 
v___x_3999_ = lean_io_error_to_string(v_a_3995_);
if (v_isShared_3998_ == 0)
{
lean_ctor_set_tag(v___x_3997_, 3);
lean_ctor_set(v___x_3997_, 0, v___x_3999_);
v___x_4001_ = v___x_3997_;
goto v_reusejp_4000_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v___x_3999_);
v___x_4001_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4000_;
}
v_reusejp_4000_:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4005_; 
v___x_4002_ = l_Lean_MessageData_ofFormat(v___x_4001_);
lean_inc(v_ref_3458_);
v___x_4003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4003_, 0, v_ref_3458_);
lean_ctor_set(v___x_4003_, 1, v___x_4002_);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v___x_4003_);
v___x_4005_ = v___x_3983_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v___x_4003_);
v___x_4005_ = v_reuseFailAlloc_4006_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
v___y_3940_ = v___y_3975_;
v___y_3941_ = v_a_3981_;
v___y_3942_ = v___y_3976_;
v___y_3943_ = v___x_3985_;
v___y_3944_ = v___y_3977_;
v___y_3945_ = v___y_3978_;
v_a_3946_ = v___x_4005_;
goto v___jp_3939_;
}
}
}
}
}
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4038_; 
v_a_4010_ = lean_ctor_get(v___x_3980_, 0);
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_3980_);
if (v_isSharedCheck_4038_ == 0)
{
v___x_4012_ = v___x_3980_;
v_isShared_4013_ = v_isSharedCheck_4038_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_3980_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4038_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4014_; lean_object* v___x_4015_; 
v___x_4014_ = lean_io_get_num_heartbeats();
v___x_4015_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_4015_) == 0)
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4023_; 
lean_del_object(v___x_4012_);
v_a_4016_ = lean_ctor_get(v___x_4015_, 0);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_4015_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_4018_ = v___x_4015_;
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v___x_4015_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4021_; 
if (v_isShared_4019_ == 0)
{
lean_ctor_set_tag(v___x_4018_, 1);
v___x_4021_ = v___x_4018_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v_a_4016_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
v___y_3959_ = v___y_3975_;
v___y_3960_ = v_a_4010_;
v___y_3961_ = v___y_3976_;
v___y_3962_ = v___y_3977_;
v___y_3963_ = v___y_3978_;
v___y_3964_ = v___x_4014_;
v_a_3965_ = v___x_4021_;
goto v___jp_3958_;
}
}
}
else
{
lean_object* v_a_4024_; lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4037_; 
v_a_4024_ = lean_ctor_get(v___x_4015_, 0);
v_isSharedCheck_4037_ = !lean_is_exclusive(v___x_4015_);
if (v_isSharedCheck_4037_ == 0)
{
v___x_4026_ = v___x_4015_;
v_isShared_4027_ = v_isSharedCheck_4037_;
goto v_resetjp_4025_;
}
else
{
lean_inc(v_a_4024_);
lean_dec(v___x_4015_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4037_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
lean_object* v___x_4028_; lean_object* v___x_4030_; 
v___x_4028_ = lean_io_error_to_string(v_a_4024_);
if (v_isShared_4027_ == 0)
{
lean_ctor_set_tag(v___x_4026_, 3);
lean_ctor_set(v___x_4026_, 0, v___x_4028_);
v___x_4030_ = v___x_4026_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v___x_4028_);
v___x_4030_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4034_; 
v___x_4031_ = l_Lean_MessageData_ofFormat(v___x_4030_);
lean_inc(v_ref_3458_);
v___x_4032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4032_, 0, v_ref_3458_);
lean_ctor_set(v___x_4032_, 1, v___x_4031_);
if (v_isShared_4013_ == 0)
{
lean_ctor_set(v___x_4012_, 0, v___x_4032_);
v___x_4034_ = v___x_4012_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v___x_4032_);
v___x_4034_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
v___y_3959_ = v___y_3975_;
v___y_3960_ = v_a_4010_;
v___y_3961_ = v___y_3976_;
v___y_3962_ = v___y_3977_;
v___y_3963_ = v___y_3978_;
v___y_3964_ = v___x_4014_;
v_a_3965_ = v___x_4034_;
goto v___jp_3958_;
}
}
}
}
}
}
}
v___jp_4039_:
{
lean_object* v___x_4043_; double v___x_4044_; double v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; 
v___x_4043_ = lean_io_get_num_heartbeats();
v___x_4044_ = lean_float_of_nat(v___y_4041_);
v___x_4045_ = lean_float_of_nat(v___x_4043_);
v___x_4046_ = lean_box_float(v___x_4044_);
v___x_4047_ = lean_box_float(v___x_4045_);
v___x_4048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4046_);
lean_ctor_set(v___x_4048_, 1, v___x_4047_);
v___x_4049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4049_, 0, v_a_4042_);
lean_ctor_set(v___x_4049_, 1, v___x_4048_);
v___x_4050_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v_cls_3869_, v___x_3464_, v___x_3465_, v_options_3457_, v___x_3876_, v___y_4040_, v___f_3872_, v___x_4049_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
return v___x_4050_;
}
v___jp_4051_:
{
lean_object* v___x_4055_; 
v___x_4055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4055_, 0, v_a_4054_);
v___y_4040_ = v___y_4052_;
v___y_4041_ = v___y_4053_;
v_a_4042_ = v___x_4055_;
goto v___jp_4039_;
}
v___jp_4056_:
{
if (lean_obj_tag(v___y_4059_) == 0)
{
lean_object* v_a_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4067_; 
v_a_4060_ = lean_ctor_get(v___y_4059_, 0);
v_isSharedCheck_4067_ = !lean_is_exclusive(v___y_4059_);
if (v_isSharedCheck_4067_ == 0)
{
v___x_4062_ = v___y_4059_;
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_a_4060_);
lean_dec(v___y_4059_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4065_; 
if (v_isShared_4063_ == 0)
{
lean_ctor_set_tag(v___x_4062_, 1);
v___x_4065_ = v___x_4062_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v_a_4060_);
v___x_4065_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
v___y_4040_ = v___y_4057_;
v___y_4041_ = v___y_4058_;
v_a_4042_ = v___x_4065_;
goto v___jp_4039_;
}
}
}
else
{
lean_object* v_a_4068_; 
v_a_4068_ = lean_ctor_get(v___y_4059_, 0);
lean_inc(v_a_4068_);
lean_dec_ref_known(v___y_4059_, 1);
v___y_4052_ = v___y_4057_;
v___y_4053_ = v___y_4058_;
v_a_4054_ = v_a_4068_;
goto v___jp_4051_;
}
}
v___jp_4069_:
{
lean_object* v_aig_4074_; lean_object* v_decls_4075_; lean_object* v___f_4076_; lean_object* v___x_4077_; 
v_aig_4074_ = lean_ctor_get(v_a_4073_, 0);
v_decls_4075_ = lean_ctor_get(v_aig_4074_, 0);
lean_inc_ref(v_a_4073_);
v___f_4076_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__3), 2, 1);
lean_closure_set(v___f_4076_, 0, v_a_4073_);
v___x_4077_ = lean_array_get_size(v_decls_4075_);
if (v___x_3876_ == 0)
{
lean_object* v___x_4078_; lean_object* v___x_4079_; 
v___x_4078_ = lean_box(0);
v___x_4079_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7(v_ctx_3331_, v___x_4077_, v_atomsAssignment_3334_, v_goal_3332_, v_unusedHypotheses_3391_, v_reflectionResult_3333_, v___x_3464_, v___x_3465_, v___f_3870_, v___y_4070_, v___f_3871_, v___f_4076_, v___x_3461_, v___x_3462_, v_a_4073_, v___x_4078_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_4057_ = v___y_4071_;
v___y_4058_ = v___y_4072_;
v___y_4059_ = v___x_4079_;
goto v___jp_4056_;
}
else
{
lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4080_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7));
v___x_4081_ = l_Nat_reprFast(v___x_4077_);
v___x_4082_ = lean_string_append(v___x_4080_, v___x_4081_);
lean_dec_ref(v___x_4081_);
v___x_4083_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8));
v___x_4084_ = lean_string_append(v___x_4082_, v___x_4083_);
v___x_4085_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4085_, 0, v___x_4084_);
v___x_4086_ = l_Lean_MessageData_ofFormat(v___x_4085_);
v___x_4087_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v_cls_3869_, v___x_4086_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
if (lean_obj_tag(v___x_4087_) == 0)
{
lean_object* v_a_4088_; lean_object* v___x_4089_; 
v_a_4088_ = lean_ctor_get(v___x_4087_, 0);
lean_inc(v_a_4088_);
lean_dec_ref_known(v___x_4087_, 1);
v___x_4089_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7(v_ctx_3331_, v___x_4077_, v_atomsAssignment_3334_, v_goal_3332_, v_unusedHypotheses_3391_, v_reflectionResult_3333_, v___x_3464_, v___x_3465_, v___f_3870_, v___y_4070_, v___f_3871_, v___f_4076_, v___x_3461_, v___x_3462_, v_a_4073_, v_a_4088_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_4057_ = v___y_4071_;
v___y_4058_ = v___y_4072_;
v___y_4059_ = v___x_4089_;
goto v___jp_4056_;
}
else
{
lean_object* v_a_4090_; 
lean_dec_ref(v___f_4076_);
lean_dec_ref(v_a_4073_);
lean_dec_ref(v_unusedHypotheses_3391_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4090_ = lean_ctor_get(v___x_4087_, 0);
lean_inc(v_a_4090_);
lean_dec_ref_known(v___x_4087_, 1);
v___y_4052_ = v___y_4071_;
v___y_4053_ = v___y_4072_;
v_a_4054_ = v_a_4090_;
goto v___jp_4051_;
}
}
}
v___jp_4091_:
{
if (lean_obj_tag(v___y_4095_) == 0)
{
lean_object* v_a_4096_; 
v_a_4096_ = lean_ctor_get(v___y_4095_, 0);
lean_inc(v_a_4096_);
lean_dec_ref_known(v___y_4095_, 1);
v___y_4070_ = v___y_4092_;
v___y_4071_ = v___y_4093_;
v___y_4072_ = v___y_4094_;
v_a_4073_ = v_a_4096_;
goto v___jp_4069_;
}
else
{
lean_object* v_a_4097_; 
lean_dec_ref(v_unusedHypotheses_3391_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4097_ = lean_ctor_get(v___y_4095_, 0);
lean_inc(v_a_4097_);
lean_dec_ref_known(v___y_4095_, 1);
v___y_4052_ = v___y_4093_;
v___y_4053_ = v___y_4094_;
v_a_4054_ = v_a_4097_;
goto v___jp_4051_;
}
}
v___jp_4098_:
{
lean_object* v___x_4106_; double v___x_4107_; double v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4106_ = lean_io_get_num_heartbeats();
v___x_4107_ = lean_float_of_nat(v___y_4101_);
v___x_4108_ = lean_float_of_nat(v___x_4106_);
v___x_4109_ = lean_box_float(v___x_4107_);
v___x_4110_ = lean_box_float(v___x_4108_);
v___x_4111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4109_);
lean_ctor_set(v___x_4111_, 1, v___x_4110_);
v___x_4112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4112_, 0, v_a_4105_);
lean_ctor_set(v___x_4112_, 1, v___x_4111_);
v___x_4113_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_3869_, v___x_3464_, v___x_3465_, v_options_3457_, v___y_4100_, v___y_4104_, v___f_3873_, v___x_4112_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_4092_ = v___y_4099_;
v___y_4093_ = v___y_4102_;
v___y_4094_ = v___y_4103_;
v___y_4095_ = v___x_4113_;
goto v___jp_4091_;
}
v___jp_4114_:
{
lean_object* v___x_4122_; double v___x_4123_; double v___x_4124_; double v___x_4125_; double v___x_4126_; double v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; 
v___x_4122_ = lean_io_mono_nanos_now();
v___x_4123_ = lean_float_of_nat(v___y_4119_);
v___x_4124_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_4125_ = lean_float_div(v___x_4123_, v___x_4124_);
v___x_4126_ = lean_float_of_nat(v___x_4122_);
v___x_4127_ = lean_float_div(v___x_4126_, v___x_4124_);
v___x_4128_ = lean_box_float(v___x_4125_);
v___x_4129_ = lean_box_float(v___x_4127_);
v___x_4130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4128_);
lean_ctor_set(v___x_4130_, 1, v___x_4129_);
v___x_4131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4131_, 0, v_a_4121_);
lean_ctor_set(v___x_4131_, 1, v___x_4130_);
v___x_4132_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_3869_, v___x_3464_, v___x_3465_, v_options_3457_, v___y_4116_, v___y_4120_, v___f_3873_, v___x_4131_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_);
v___y_4092_ = v___y_4115_;
v___y_4093_ = v___y_4117_;
v___y_4094_ = v___y_4118_;
v___y_4095_ = v___x_4132_;
goto v___jp_4091_;
}
v___jp_4133_:
{
lean_object* v___x_4139_; 
v___x_4139_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_3338_);
if (v___y_4138_ == 0)
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4168_; 
v_a_4140_ = lean_ctor_get(v___x_4139_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4142_ = v___x_4139_;
v_isShared_4143_ = v_isSharedCheck_4168_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v___x_4139_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4168_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; 
v___x_4144_ = lean_io_mono_nanos_now();
v___x_4145_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_4145_) == 0)
{
lean_object* v_a_4146_; lean_object* v___x_4148_; uint8_t v_isShared_4149_; uint8_t v_isSharedCheck_4153_; 
lean_del_object(v___x_4142_);
v_a_4146_ = lean_ctor_get(v___x_4145_, 0);
v_isSharedCheck_4153_ = !lean_is_exclusive(v___x_4145_);
if (v_isSharedCheck_4153_ == 0)
{
v___x_4148_ = v___x_4145_;
v_isShared_4149_ = v_isSharedCheck_4153_;
goto v_resetjp_4147_;
}
else
{
lean_inc(v_a_4146_);
lean_dec(v___x_4145_);
v___x_4148_ = lean_box(0);
v_isShared_4149_ = v_isSharedCheck_4153_;
goto v_resetjp_4147_;
}
v_resetjp_4147_:
{
lean_object* v___x_4151_; 
if (v_isShared_4149_ == 0)
{
lean_ctor_set_tag(v___x_4148_, 1);
v___x_4151_ = v___x_4148_;
goto v_reusejp_4150_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v_a_4146_);
v___x_4151_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4150_;
}
v_reusejp_4150_:
{
v___y_4115_ = v___y_4134_;
v___y_4116_ = v___y_4135_;
v___y_4117_ = v___y_4136_;
v___y_4118_ = v___y_4137_;
v___y_4119_ = v___x_4144_;
v___y_4120_ = v_a_4140_;
v_a_4121_ = v___x_4151_;
goto v___jp_4114_;
}
}
}
else
{
lean_object* v_a_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4167_; 
v_a_4154_ = lean_ctor_get(v___x_4145_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v___x_4145_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4156_ = v___x_4145_;
v_isShared_4157_ = v_isSharedCheck_4167_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_a_4154_);
lean_dec(v___x_4145_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4167_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v___x_4158_; lean_object* v___x_4160_; 
v___x_4158_ = lean_io_error_to_string(v_a_4154_);
if (v_isShared_4157_ == 0)
{
lean_ctor_set_tag(v___x_4156_, 3);
lean_ctor_set(v___x_4156_, 0, v___x_4158_);
v___x_4160_ = v___x_4156_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v___x_4158_);
v___x_4160_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4164_; 
v___x_4161_ = l_Lean_MessageData_ofFormat(v___x_4160_);
lean_inc(v_ref_3458_);
v___x_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4162_, 0, v_ref_3458_);
lean_ctor_set(v___x_4162_, 1, v___x_4161_);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v___x_4162_);
v___x_4164_ = v___x_4142_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v___x_4162_);
v___x_4164_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
v___y_4115_ = v___y_4134_;
v___y_4116_ = v___y_4135_;
v___y_4117_ = v___y_4136_;
v___y_4118_ = v___y_4137_;
v___y_4119_ = v___x_4144_;
v___y_4120_ = v_a_4140_;
v_a_4121_ = v___x_4164_;
goto v___jp_4114_;
}
}
}
}
}
}
else
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4197_; 
v_a_4169_ = lean_ctor_get(v___x_4139_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4171_ = v___x_4139_;
v_isShared_4172_ = v_isSharedCheck_4197_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v___x_4139_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4197_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
lean_object* v___x_4173_; lean_object* v___x_4174_; 
v___x_4173_ = lean_io_get_num_heartbeats();
v___x_4174_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_4174_) == 0)
{
lean_object* v_a_4175_; lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4182_; 
lean_del_object(v___x_4171_);
v_a_4175_ = lean_ctor_get(v___x_4174_, 0);
v_isSharedCheck_4182_ = !lean_is_exclusive(v___x_4174_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4177_ = v___x_4174_;
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
else
{
lean_inc(v_a_4175_);
lean_dec(v___x_4174_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4180_; 
if (v_isShared_4178_ == 0)
{
lean_ctor_set_tag(v___x_4177_, 1);
v___x_4180_ = v___x_4177_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_a_4175_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
v___y_4099_ = v___y_4134_;
v___y_4100_ = v___y_4135_;
v___y_4101_ = v___x_4173_;
v___y_4102_ = v___y_4136_;
v___y_4103_ = v___y_4137_;
v___y_4104_ = v_a_4169_;
v_a_4105_ = v___x_4180_;
goto v___jp_4098_;
}
}
}
else
{
lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4196_; 
v_a_4183_ = lean_ctor_get(v___x_4174_, 0);
v_isSharedCheck_4196_ = !lean_is_exclusive(v___x_4174_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4185_ = v___x_4174_;
v_isShared_4186_ = v_isSharedCheck_4196_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v___x_4174_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4196_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v___x_4187_; lean_object* v___x_4189_; 
v___x_4187_ = lean_io_error_to_string(v_a_4183_);
if (v_isShared_4186_ == 0)
{
lean_ctor_set_tag(v___x_4185_, 3);
lean_ctor_set(v___x_4185_, 0, v___x_4187_);
v___x_4189_ = v___x_4185_;
goto v_reusejp_4188_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v___x_4187_);
v___x_4189_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4188_;
}
v_reusejp_4188_:
{
lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4193_; 
v___x_4190_ = l_Lean_MessageData_ofFormat(v___x_4189_);
lean_inc(v_ref_3458_);
v___x_4191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4191_, 0, v_ref_3458_);
lean_ctor_set(v___x_4191_, 1, v___x_4190_);
if (v_isShared_4172_ == 0)
{
lean_ctor_set(v___x_4171_, 0, v___x_4191_);
v___x_4193_ = v___x_4171_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v___x_4191_);
v___x_4193_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
v___y_4099_ = v___y_4134_;
v___y_4100_ = v___y_4135_;
v___y_4101_ = v___x_4173_;
v___y_4102_ = v___y_4136_;
v___y_4103_ = v___y_4137_;
v___y_4104_ = v_a_4169_;
v_a_4105_ = v___x_4193_;
goto v___jp_4098_;
}
}
}
}
}
}
}
v___jp_4198_:
{
lean_object* v___x_4199_; lean_object* v_a_4200_; lean_object* v___x_4201_; uint8_t v___x_4202_; 
v___x_4199_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_3338_);
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
lean_inc(v_a_4200_);
lean_dec_ref(v___x_4199_);
v___x_4201_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4202_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_3457_, v___x_4201_);
if (v___x_4202_ == 0)
{
lean_object* v___x_4203_; 
v___x_4203_ = lean_io_mono_nanos_now();
if (v___x_3876_ == 0)
{
lean_object* v___x_4204_; uint8_t v___x_4205_; 
v___x_4204_ = l_Lean_trace_profiler;
v___x_4205_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_3457_, v___x_4204_);
if (v___x_4205_ == 0)
{
lean_object* v___x_4206_; 
v___x_4206_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_object* v_a_4207_; 
v_a_4207_ = lean_ctor_get(v___x_4206_, 0);
lean_inc(v_a_4207_);
lean_dec_ref_known(v___x_4206_, 1);
v___y_3911_ = v___x_4201_;
v___y_3912_ = v___x_4203_;
v___y_3913_ = v_a_4200_;
v_a_3914_ = v_a_4207_;
goto v___jp_3910_;
}
else
{
lean_object* v_a_4208_; lean_object* v___x_4210_; uint8_t v_isShared_4211_; uint8_t v_isSharedCheck_4218_; 
lean_dec_ref(v_unusedHypotheses_3391_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4208_ = lean_ctor_get(v___x_4206_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v___x_4206_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4210_ = v___x_4206_;
v_isShared_4211_ = v_isSharedCheck_4218_;
goto v_resetjp_4209_;
}
else
{
lean_inc(v_a_4208_);
lean_dec(v___x_4206_);
v___x_4210_ = lean_box(0);
v_isShared_4211_ = v_isSharedCheck_4218_;
goto v_resetjp_4209_;
}
v_resetjp_4209_:
{
lean_object* v___x_4212_; lean_object* v___x_4214_; 
v___x_4212_ = lean_io_error_to_string(v_a_4208_);
if (v_isShared_4211_ == 0)
{
lean_ctor_set_tag(v___x_4210_, 3);
lean_ctor_set(v___x_4210_, 0, v___x_4212_);
v___x_4214_ = v___x_4210_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v___x_4212_);
v___x_4214_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
lean_object* v___x_4215_; lean_object* v___x_4216_; 
v___x_4215_ = l_Lean_MessageData_ofFormat(v___x_4214_);
lean_inc(v_ref_3458_);
v___x_4216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4216_, 0, v_ref_3458_);
lean_ctor_set(v___x_4216_, 1, v___x_4215_);
v___y_3893_ = v___x_4203_;
v___y_3894_ = v_a_4200_;
v_a_3895_ = v___x_4216_;
goto v___jp_3892_;
}
}
}
}
else
{
v___y_3975_ = v___x_4201_;
v___y_3976_ = v___x_3876_;
v___y_3977_ = v___x_4203_;
v___y_3978_ = v_a_4200_;
v___y_3979_ = v___x_4202_;
goto v___jp_3974_;
}
}
else
{
v___y_3975_ = v___x_4201_;
v___y_3976_ = v___x_3876_;
v___y_3977_ = v___x_4203_;
v___y_3978_ = v_a_4200_;
v___y_3979_ = v___x_4202_;
goto v___jp_3974_;
}
}
else
{
lean_object* v___x_4219_; 
v___x_4219_ = lean_io_get_num_heartbeats();
if (v___x_3876_ == 0)
{
lean_object* v___x_4220_; uint8_t v___x_4221_; 
v___x_4220_ = l_Lean_trace_profiler;
v___x_4221_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_3457_, v___x_4220_);
if (v___x_4221_ == 0)
{
lean_object* v___x_4222_; 
v___x_4222_ = l_IO_lazyPure___redArg(v___f_3463_);
if (lean_obj_tag(v___x_4222_) == 0)
{
lean_object* v_a_4223_; 
v_a_4223_ = lean_ctor_get(v___x_4222_, 0);
lean_inc(v_a_4223_);
lean_dec_ref_known(v___x_4222_, 1);
v___y_4070_ = v___x_4201_;
v___y_4071_ = v_a_4200_;
v___y_4072_ = v___x_4219_;
v_a_4073_ = v_a_4223_;
goto v___jp_4069_;
}
else
{
lean_object* v_a_4224_; lean_object* v___x_4226_; uint8_t v_isShared_4227_; uint8_t v_isSharedCheck_4234_; 
lean_dec_ref(v_unusedHypotheses_3391_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_4224_ = lean_ctor_get(v___x_4222_, 0);
v_isSharedCheck_4234_ = !lean_is_exclusive(v___x_4222_);
if (v_isSharedCheck_4234_ == 0)
{
v___x_4226_ = v___x_4222_;
v_isShared_4227_ = v_isSharedCheck_4234_;
goto v_resetjp_4225_;
}
else
{
lean_inc(v_a_4224_);
lean_dec(v___x_4222_);
v___x_4226_ = lean_box(0);
v_isShared_4227_ = v_isSharedCheck_4234_;
goto v_resetjp_4225_;
}
v_resetjp_4225_:
{
lean_object* v___x_4228_; lean_object* v___x_4230_; 
v___x_4228_ = lean_io_error_to_string(v_a_4224_);
if (v_isShared_4227_ == 0)
{
lean_ctor_set_tag(v___x_4226_, 3);
lean_ctor_set(v___x_4226_, 0, v___x_4228_);
v___x_4230_ = v___x_4226_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v___x_4228_);
v___x_4230_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; 
v___x_4231_ = l_Lean_MessageData_ofFormat(v___x_4230_);
lean_inc(v_ref_3458_);
v___x_4232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4232_, 0, v_ref_3458_);
lean_ctor_set(v___x_4232_, 1, v___x_4231_);
v___y_4052_ = v_a_4200_;
v___y_4053_ = v___x_4219_;
v_a_4054_ = v___x_4232_;
goto v___jp_4051_;
}
}
}
}
else
{
v___y_4134_ = v___x_4201_;
v___y_4135_ = v___x_3876_;
v___y_4136_ = v_a_4200_;
v___y_4137_ = v___x_4219_;
v___y_4138_ = v___x_4202_;
goto v___jp_4133_;
}
}
else
{
v___y_4134_ = v___x_4201_;
v___y_4135_ = v___x_3876_;
v___y_4136_ = v_a_4200_;
v___y_4137_ = v___x_4219_;
v___y_4138_ = v___x_4202_;
goto v___jp_4133_;
}
}
}
}
v___jp_3340_:
{
lean_object* v___x_3346_; 
lean_inc_ref(v___y_3341_);
v___x_3346_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v___y_3341_, v_ctx_3331_, v_reflectionResult_3333_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3356_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3349_ = v___x_3346_;
v_isShared_3350_ = v_isSharedCheck_3356_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3346_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3356_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3354_; 
v___x_3351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3351_, 0, v_a_3347_);
lean_ctor_set(v___x_3351_, 1, v___y_3341_);
v___x_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
if (v_isShared_3350_ == 0)
{
lean_ctor_set(v___x_3349_, 0, v___x_3352_);
v___x_3354_ = v___x_3349_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v___x_3352_);
v___x_3354_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
return v___x_3354_;
}
}
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3364_; 
lean_dec_ref(v___y_3341_);
v_a_3357_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3359_ = v___x_3346_;
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3346_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3362_; 
if (v_isShared_3360_ == 0)
{
v___x_3362_ = v___x_3359_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_a_3357_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
}
v___jp_3365_:
{
lean_object* v___x_3371_; 
lean_inc_ref(v___y_3366_);
v___x_3371_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v___y_3366_, v_ctx_3331_, v_reflectionResult_3333_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3381_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3374_ = v___x_3371_;
v_isShared_3375_ = v_isSharedCheck_3381_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3371_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3381_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3379_; 
v___x_3376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3376_, 0, v_a_3372_);
lean_ctor_set(v___x_3376_, 1, v___y_3366_);
v___x_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3376_);
if (v_isShared_3375_ == 0)
{
lean_ctor_set(v___x_3374_, 0, v___x_3377_);
v___x_3379_ = v___x_3374_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v___x_3377_);
v___x_3379_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
return v___x_3379_;
}
}
}
else
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3389_; 
lean_dec_ref(v___y_3366_);
v_a_3382_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3389_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3389_ == 0)
{
v___x_3384_ = v___x_3371_;
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3371_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3389_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3387_; 
if (v_isShared_3385_ == 0)
{
v___x_3387_ = v___x_3384_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v_a_3382_);
v___x_3387_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
return v___x_3387_;
}
}
}
}
v___jp_3392_:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3396_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v___y_3393_, v___y_3394_, v___y_3395_, v_atomsAssignment_3334_);
lean_dec(v___y_3395_);
lean_dec_ref(v___y_3394_);
v___x_3397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3397_, 0, v_goal_3332_);
lean_ctor_set(v___x_3397_, 1, v_unusedHypotheses_3391_);
lean_ctor_set(v___x_3397_, 2, v___x_3396_);
v___x_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3397_);
v___x_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
return v___x_3399_;
}
v___jp_3400_:
{
if (lean_obj_tag(v___y_3408_) == 0)
{
lean_object* v_a_3409_; 
v_a_3409_ = lean_ctor_get(v___y_3408_, 0);
lean_inc(v_a_3409_);
lean_dec_ref_known(v___y_3408_, 1);
if (lean_obj_tag(v_a_3409_) == 0)
{
lean_object* v_toCold_3410_; lean_object* v_options_3411_; uint8_t v_hasTrace_3412_; 
lean_inc_ref(v_unusedHypotheses_3391_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec_ref(v_ctx_3331_);
v_toCold_3410_ = lean_ctor_get(v___y_3407_, 0);
v_options_3411_ = lean_ctor_get(v_toCold_3410_, 2);
v_hasTrace_3412_ = lean_ctor_get_uint8(v_options_3411_, sizeof(void*)*1);
if (v_hasTrace_3412_ == 0)
{
lean_object* v_a_3413_; 
v_a_3413_ = lean_ctor_get(v_a_3409_, 0);
lean_inc(v_a_3413_);
lean_dec_ref_known(v_a_3409_, 1);
v___y_3393_ = v___y_3401_;
v___y_3394_ = v_a_3413_;
v___y_3395_ = v___y_3406_;
goto v___jp_3392_;
}
else
{
lean_object* v_a_3414_; lean_object* v_inheritedTraceOptions_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; uint8_t v___x_3418_; 
v_a_3414_ = lean_ctor_get(v_a_3409_, 0);
lean_inc(v_a_3414_);
lean_dec_ref_known(v_a_3409_, 1);
v_inheritedTraceOptions_3415_ = lean_ctor_get(v_toCold_3410_, 11);
v___x_3416_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_3405_);
v___x_3417_ = l_Lean_Name_append(v___x_3416_, v___y_3405_);
v___x_3418_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3415_, v_options_3411_, v___x_3417_);
lean_dec(v___x_3417_);
if (v___x_3418_ == 0)
{
v___y_3393_ = v___y_3401_;
v___y_3394_ = v_a_3414_;
v___y_3395_ = v___y_3406_;
goto v___jp_3392_;
}
else
{
lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3419_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__1);
lean_inc(v___y_3405_);
v___x_3420_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___y_3405_, v___x_3419_, v___y_3402_, v___y_3404_, v___y_3407_, v___y_3403_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_dec_ref_known(v___x_3420_, 1);
v___y_3393_ = v___y_3401_;
v___y_3394_ = v_a_3414_;
v___y_3395_ = v___y_3406_;
goto v___jp_3392_;
}
else
{
lean_object* v_a_3421_; lean_object* v___x_3423_; uint8_t v_isShared_3424_; uint8_t v_isSharedCheck_3428_; 
lean_dec(v_a_3414_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3401_);
lean_dec_ref(v_unusedHypotheses_3391_);
lean_dec(v_goal_3332_);
v_a_3421_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3428_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3423_ = v___x_3420_;
v_isShared_3424_ = v_isSharedCheck_3428_;
goto v_resetjp_3422_;
}
else
{
lean_inc(v_a_3421_);
lean_dec(v___x_3420_);
v___x_3423_ = lean_box(0);
v_isShared_3424_ = v_isSharedCheck_3428_;
goto v_resetjp_3422_;
}
v_resetjp_3422_:
{
lean_object* v___x_3426_; 
if (v_isShared_3424_ == 0)
{
v___x_3426_ = v___x_3423_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v_a_3421_);
v___x_3426_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
return v___x_3426_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_3429_; lean_object* v_options_3430_; uint8_t v_hasTrace_3431_; 
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3401_);
lean_dec(v_goal_3332_);
v_toCold_3429_ = lean_ctor_get(v___y_3407_, 0);
v_options_3430_ = lean_ctor_get(v_toCold_3429_, 2);
v_hasTrace_3431_ = lean_ctor_get_uint8(v_options_3430_, sizeof(void*)*1);
if (v_hasTrace_3431_ == 0)
{
lean_object* v_a_3432_; 
v_a_3432_ = lean_ctor_get(v_a_3409_, 0);
lean_inc(v_a_3432_);
lean_dec_ref_known(v_a_3409_, 1);
v___y_3366_ = v_a_3432_;
v___y_3367_ = v___y_3402_;
v___y_3368_ = v___y_3404_;
v___y_3369_ = v___y_3407_;
v___y_3370_ = v___y_3403_;
goto v___jp_3365_;
}
else
{
lean_object* v_a_3433_; lean_object* v_inheritedTraceOptions_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; uint8_t v___x_3437_; 
v_a_3433_ = lean_ctor_get(v_a_3409_, 0);
lean_inc(v_a_3433_);
lean_dec_ref_known(v_a_3409_, 1);
v_inheritedTraceOptions_3434_ = lean_ctor_get(v_toCold_3429_, 11);
v___x_3435_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___closed__1));
lean_inc(v___y_3405_);
v___x_3436_ = l_Lean_Name_append(v___x_3435_, v___y_3405_);
v___x_3437_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3434_, v_options_3430_, v___x_3436_);
lean_dec(v___x_3436_);
if (v___x_3437_ == 0)
{
v___y_3366_ = v_a_3433_;
v___y_3367_ = v___y_3402_;
v___y_3368_ = v___y_3404_;
v___y_3369_ = v___y_3407_;
v___y_3370_ = v___y_3403_;
goto v___jp_3365_;
}
else
{
lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3438_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__3);
lean_inc(v___y_3405_);
v___x_3439_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___y_3405_, v___x_3438_, v___y_3402_, v___y_3404_, v___y_3407_, v___y_3403_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_dec_ref_known(v___x_3439_, 1);
v___y_3366_ = v_a_3433_;
v___y_3367_ = v___y_3402_;
v___y_3368_ = v___y_3404_;
v___y_3369_ = v___y_3407_;
v___y_3370_ = v___y_3403_;
goto v___jp_3365_;
}
else
{
lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3447_; 
lean_dec(v_a_3433_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec_ref(v_ctx_3331_);
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3442_ = v___x_3439_;
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v___x_3439_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3445_; 
if (v_isShared_3443_ == 0)
{
v___x_3445_ = v___x_3442_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3440_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3448_; lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3455_; 
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3401_);
lean_dec_ref(v_reflectionResult_3333_);
lean_dec(v_goal_3332_);
lean_dec_ref(v_ctx_3331_);
v_a_3448_ = lean_ctor_get(v___y_3408_, 0);
v_isSharedCheck_3455_ = !lean_is_exclusive(v___y_3408_);
if (v_isSharedCheck_3455_ == 0)
{
v___x_3450_ = v___y_3408_;
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
else
{
lean_inc(v_a_3448_);
lean_dec(v___y_3408_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3453_; 
if (v_isShared_3451_ == 0)
{
v___x_3453_ = v___x_3450_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v_a_3448_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
return v___x_3453_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___boxed(lean_object* v_ctx_4705_, lean_object* v_goal_4706_, lean_object* v_reflectionResult_4707_, lean_object* v_atomsAssignment_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_a_4711_, lean_object* v_a_4712_, lean_object* v_a_4713_){
_start:
{
lean_object* v_res_4714_; 
v_res_4714_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster(v_ctx_4705_, v_goal_4706_, v_reflectionResult_4707_, v_atomsAssignment_4708_, v_a_4709_, v_a_4710_, v_a_4711_, v_a_4712_);
lean_dec(v_a_4712_);
lean_dec_ref(v_a_4711_);
lean_dec(v_a_4710_);
lean_dec_ref(v_a_4709_);
lean_dec_ref(v_atomsAssignment_4708_);
return v_res_4714_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8(lean_object* v_acc_4715_, lean_object* v_decls_4716_, lean_object* v_hinv_4717_, lean_object* v_idx_4718_, lean_object* v_hidx_4719_, lean_object* v_a_4720_){
_start:
{
lean_object* v___x_4721_; 
v___x_4721_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___redArg(v_acc_4715_, v_decls_4716_, v_idx_4718_, v_a_4720_);
return v___x_4721_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8___boxed(lean_object* v_acc_4722_, lean_object* v_decls_4723_, lean_object* v_hinv_4724_, lean_object* v_idx_4725_, lean_object* v_hidx_4726_, lean_object* v_a_4727_){
_start:
{
lean_object* v_res_4728_; 
v_res_4728_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8(v_acc_4722_, v_decls_4723_, v_hinv_4724_, v_idx_4725_, v_hidx_4726_, v_a_4727_);
lean_dec_ref(v_decls_4723_);
return v_res_4728_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_4729_, lean_object* v_m_4730_, lean_object* v_a_4731_){
_start:
{
lean_object* v___x_4732_; 
v___x_4732_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___redArg(v_m_4730_, v_a_4731_);
return v___x_4732_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_4733_, lean_object* v_m_4734_, lean_object* v_a_4735_){
_start:
{
lean_object* v_res_4736_; 
v_res_4736_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2(v_00_u03b2_4733_, v_m_4734_, v_a_4735_);
lean_dec_ref(v_a_4735_);
lean_dec_ref(v_m_4734_);
return v_res_4736_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12(lean_object* v___x_4737_, lean_object* v_00_u03b2_4738_, lean_object* v_m_4739_, lean_object* v_a_4740_){
_start:
{
uint8_t v___x_4741_; 
v___x_4741_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12___redArg(v___x_4737_, v_m_4739_, v_a_4740_);
return v___x_4741_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12___boxed(lean_object* v___x_4742_, lean_object* v_00_u03b2_4743_, lean_object* v_m_4744_, lean_object* v_a_4745_){
_start:
{
uint8_t v_res_4746_; lean_object* v_r_4747_; 
v_res_4746_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12(v___x_4742_, v_00_u03b2_4743_, v_m_4744_, v_a_4745_);
lean_dec(v_a_4745_);
lean_dec_ref(v_m_4744_);
lean_dec(v___x_4742_);
v_r_4747_ = lean_box(v_res_4746_);
return v_r_4747_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13(lean_object* v___x_4748_, lean_object* v_00_u03b2_4749_, lean_object* v_m_4750_, lean_object* v_a_4751_, lean_object* v_b_4752_){
_start:
{
lean_object* v___x_4753_; 
v___x_4753_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13___redArg(v___x_4748_, v_m_4750_, v_a_4751_, v_b_4752_);
return v___x_4753_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13___boxed(lean_object* v___x_4754_, lean_object* v_00_u03b2_4755_, lean_object* v_m_4756_, lean_object* v_a_4757_, lean_object* v_b_4758_){
_start:
{
lean_object* v_res_4759_; 
v_res_4759_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13(v___x_4754_, v_00_u03b2_4755_, v_m_4756_, v_a_4757_, v_b_4758_);
lean_dec(v___x_4754_);
return v_res_4759_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17(lean_object* v_decls_4760_){
_start:
{
lean_object* v___x_4761_; 
v___x_4761_ = lean_obj_once(&l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___closed__0, &l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___closed__0_once, _init_l_Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13___closed__0);
return v___x_4761_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17___boxed(lean_object* v_decls_4762_){
_start:
{
lean_object* v_res_4763_; 
v_res_4763_ = l_Std_Sat_AIG_RelabelNat_State_empty___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__17(v_decls_4762_);
lean_dec_ref(v_decls_4762_);
return v_res_4763_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15(lean_object* v_00_u03b2_4764_, lean_object* v_a_4765_, lean_object* v_x_4766_){
_start:
{
lean_object* v___x_4767_; 
v___x_4767_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15___redArg(v_a_4765_, v_x_4766_);
return v___x_4767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15___boxed(lean_object* v_00_u03b2_4768_, lean_object* v_a_4769_, lean_object* v_x_4770_){
_start:
{
lean_object* v_res_4771_; 
v_res_4771_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__2_spec__15(v_00_u03b2_4768_, v_a_4769_, v_x_4770_);
lean_dec(v_x_4770_);
lean_dec_ref(v_a_4769_);
return v_res_4771_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20(lean_object* v___x_4772_, lean_object* v_00_u03b2_4773_, lean_object* v_a_4774_, lean_object* v_x_4775_){
_start:
{
uint8_t v___x_4776_; 
v___x_4776_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___redArg(v_a_4774_, v_x_4775_);
return v___x_4776_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20___boxed(lean_object* v___x_4777_, lean_object* v_00_u03b2_4778_, lean_object* v_a_4779_, lean_object* v_x_4780_){
_start:
{
uint8_t v_res_4781_; lean_object* v_r_4782_; 
v_res_4781_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__12_spec__20(v___x_4777_, v_00_u03b2_4778_, v_a_4779_, v_x_4780_);
lean_dec(v_x_4780_);
lean_dec(v_a_4779_);
lean_dec(v___x_4777_);
v_r_4782_ = lean_box(v_res_4781_);
return v_r_4782_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22(lean_object* v___x_4783_, lean_object* v_00_u03b2_4784_, lean_object* v_data_4785_){
_start:
{
lean_object* v___x_4786_; 
v___x_4786_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22___redArg(v___x_4783_, v_data_4785_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22___boxed(lean_object* v___x_4787_, lean_object* v_00_u03b2_4788_, lean_object* v_data_4789_){
_start:
{
lean_object* v_res_4790_; 
v_res_4790_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22(v___x_4787_, v_00_u03b2_4788_, v_data_4789_);
lean_dec(v___x_4787_);
return v_res_4790_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addFalse___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__23(lean_object* v_idx_4791_, lean_object* v_decls_4792_, lean_object* v_hidx_4793_, lean_object* v_state_4794_, lean_object* v_h_4795_){
_start:
{
lean_object* v___x_4796_; 
v___x_4796_ = l_Std_Sat_AIG_RelabelNat_State_addFalse___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__23___redArg(v_state_4794_);
return v___x_4796_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addFalse___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__23___boxed(lean_object* v_idx_4797_, lean_object* v_decls_4798_, lean_object* v_hidx_4799_, lean_object* v_state_4800_, lean_object* v_h_4801_){
_start:
{
lean_object* v_res_4802_; 
v_res_4802_ = l_Std_Sat_AIG_RelabelNat_State_addFalse___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__23(v_idx_4797_, v_decls_4798_, v_hidx_4799_, v_state_4800_, v_h_4801_);
lean_dec_ref(v_decls_4798_);
lean_dec(v_idx_4797_);
return v_res_4802_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addGate___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__25(lean_object* v_idx_4803_, lean_object* v_decls_4804_, lean_object* v_hidx_4805_, lean_object* v_state_4806_, lean_object* v_lhs_4807_, lean_object* v_rhs_4808_, lean_object* v_h_4809_){
_start:
{
lean_object* v___x_4810_; 
v___x_4810_ = l_Std_Sat_AIG_RelabelNat_State_addGate___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__25___redArg(v_state_4806_);
return v___x_4810_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addGate___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__25___boxed(lean_object* v_idx_4811_, lean_object* v_decls_4812_, lean_object* v_hidx_4813_, lean_object* v_state_4814_, lean_object* v_lhs_4815_, lean_object* v_rhs_4816_, lean_object* v_h_4817_){
_start:
{
lean_object* v_res_4818_; 
v_res_4818_ = l_Std_Sat_AIG_RelabelNat_State_addGate___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__25(v_idx_4811_, v_decls_4812_, v_hidx_4813_, v_state_4814_, v_lhs_4815_, v_rhs_4816_, v_h_4817_);
lean_dec(v_rhs_4816_);
lean_dec(v_lhs_4815_);
lean_dec_ref(v_decls_4812_);
lean_dec(v_idx_4811_);
return v_res_4818_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27(lean_object* v___x_4819_, lean_object* v_00_u03b2_4820_, lean_object* v_i_4821_, lean_object* v_source_4822_, lean_object* v_target_4823_){
_start:
{
lean_object* v___x_4824_; 
v___x_4824_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27___redArg(v_i_4821_, v_source_4822_, v_target_4823_);
return v___x_4824_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27___boxed(lean_object* v___x_4825_, lean_object* v_00_u03b2_4826_, lean_object* v_i_4827_, lean_object* v_source_4828_, lean_object* v_target_4829_){
_start:
{
lean_object* v_res_4830_; 
v_res_4830_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27(v___x_4825_, v_00_u03b2_4826_, v_i_4827_, v_source_4828_, v_target_4829_);
lean_dec(v___x_4825_);
return v_res_4830_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24(lean_object* v_idx_4831_, lean_object* v_decls_4832_, lean_object* v_hidx_4833_, lean_object* v_state_4834_, lean_object* v_a_4835_, lean_object* v_h_4836_){
_start:
{
lean_object* v___x_4837_; 
v___x_4837_ = l_Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24___redArg(v_state_4834_, v_a_4835_);
return v___x_4837_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24___boxed(lean_object* v_idx_4838_, lean_object* v_decls_4839_, lean_object* v_hidx_4840_, lean_object* v_state_4841_, lean_object* v_a_4842_, lean_object* v_h_4843_){
_start:
{
lean_object* v_res_4844_; 
v_res_4844_ = l_Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24(v_idx_4838_, v_decls_4839_, v_hidx_4840_, v_state_4841_, v_a_4842_, v_h_4843_);
lean_dec_ref(v_decls_4839_);
lean_dec(v_idx_4838_);
return v_res_4844_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27_spec__31(lean_object* v_00_u03b2_4845_, lean_object* v_x_4846_, lean_object* v_x_4847_){
_start:
{
lean_object* v___x_4848_; 
v___x_4848_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4_spec__8_spec__13_spec__22_spec__27_spec__31___redArg(v_x_4846_, v_x_4847_);
return v___x_4848_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29(lean_object* v_00_u03b2_4849_, lean_object* v_m_4850_, lean_object* v_a_4851_, lean_object* v_b_4852_){
_start:
{
lean_object* v___x_4853_; 
v___x_4853_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29___redArg(v_m_4850_, v_a_4851_, v_b_4852_);
return v___x_4853_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32(lean_object* v_00_u03b2_4854_, lean_object* v_a_4855_, lean_object* v_x_4856_){
_start:
{
uint8_t v___x_4857_; 
v___x_4857_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32___redArg(v_a_4855_, v_x_4856_);
return v___x_4857_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32___boxed(lean_object* v_00_u03b2_4858_, lean_object* v_a_4859_, lean_object* v_x_4860_){
_start:
{
uint8_t v_res_4861_; lean_object* v_r_4862_; 
v_res_4861_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__32(v_00_u03b2_4858_, v_a_4859_, v_x_4860_);
lean_dec(v_x_4860_);
lean_dec_ref(v_a_4859_);
v_r_4862_ = lean_box(v_res_4861_);
return v_r_4862_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33(lean_object* v_00_u03b2_4863_, lean_object* v_data_4864_){
_start:
{
lean_object* v___x_4865_; 
v___x_4865_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33___redArg(v_data_4864_);
return v___x_4865_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__34(lean_object* v_00_u03b2_4866_, lean_object* v_a_4867_, lean_object* v_b_4868_, lean_object* v_x_4869_){
_start:
{
lean_object* v___x_4870_; 
v___x_4870_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__34___redArg(v_a_4867_, v_b_4868_, v_x_4869_);
return v___x_4870_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35(lean_object* v_00_u03b2_4871_, lean_object* v_i_4872_, lean_object* v_source_4873_, lean_object* v_target_4874_){
_start:
{
lean_object* v___x_4875_; 
v___x_4875_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35___redArg(v_i_4872_, v_source_4873_, v_target_4874_);
return v___x_4875_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35_spec__36(lean_object* v_00_u03b2_4876_, lean_object* v_x_4877_, lean_object* v_x_4878_){
_start:
{
lean_object* v___x_4879_; 
v___x_4879_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_Sat_AIG_RelabelNat_State_addAtom___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux_go___at___00Std_Sat_AIG_RelabelNat_State_ofAIGAux___at___00Std_Sat_AIG_RelabelNat_State_ofAIG___at___00Std_Sat_AIG_relabelNat_x27___at___00Std_Sat_AIG_Entrypoint_relabelNat_x27___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0_spec__1_spec__13_spec__18_spec__24_spec__29_spec__33_spec__35_spec__36___redArg(v_x_4877_, v_x_4878_);
return v___x_4879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0(lean_object* v_x_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_){
_start:
{
lean_object* v___x_4886_; lean_object* v___x_4887_; 
v___x_4886_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___closed__2);
v___x_4887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4887_, 0, v___x_4886_);
return v___x_4887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0___boxed(lean_object* v_x_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_){
_start:
{
lean_object* v_res_4894_; 
v_res_4894_ = l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0(v_x_4888_, v___y_4889_, v___y_4890_, v___y_4891_, v___y_4892_);
lean_dec(v___y_4892_);
lean_dec_ref(v___y_4891_);
lean_dec(v___y_4890_);
lean_dec_ref(v___y_4889_);
lean_dec_ref(v_x_4888_);
return v_res_4894_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0_spec__0(lean_object* v_e_4895_){
_start:
{
if (lean_obj_tag(v_e_4895_) == 0)
{
uint8_t v___x_4896_; 
v___x_4896_ = 2;
return v___x_4896_;
}
else
{
uint8_t v___x_4897_; 
v___x_4897_ = 0;
return v___x_4897_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0_spec__0___boxed(lean_object* v_e_4898_){
_start:
{
uint8_t v_res_4899_; lean_object* v_r_4900_; 
v_res_4899_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0_spec__0(v_e_4898_);
lean_dec_ref(v_e_4898_);
v_r_4900_ = lean_box(v_res_4899_);
return v_r_4900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0(lean_object* v_cls_4901_, uint8_t v_collapsed_4902_, lean_object* v_tag_4903_, lean_object* v_opts_4904_, uint8_t v_clsEnabled_4905_, lean_object* v_oldTraces_4906_, lean_object* v_msg_4907_, lean_object* v_resStartStop_4908_, lean_object* v___y_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_){
_start:
{
lean_object* v_fst_4914_; lean_object* v_snd_4915_; lean_object* v___y_4917_; lean_object* v___y_4918_; lean_object* v_data_4919_; lean_object* v_fst_4930_; lean_object* v_snd_4931_; lean_object* v___x_4932_; uint8_t v___x_4933_; lean_object* v___y_4935_; lean_object* v_a_4936_; uint8_t v___y_4951_; double v___y_4982_; 
v_fst_4914_ = lean_ctor_get(v_resStartStop_4908_, 0);
lean_inc(v_fst_4914_);
v_snd_4915_ = lean_ctor_get(v_resStartStop_4908_, 1);
lean_inc(v_snd_4915_);
lean_dec_ref(v_resStartStop_4908_);
v_fst_4930_ = lean_ctor_get(v_snd_4915_, 0);
lean_inc(v_fst_4930_);
v_snd_4931_ = lean_ctor_get(v_snd_4915_, 1);
lean_inc(v_snd_4931_);
lean_dec(v_snd_4915_);
v___x_4932_ = l_Lean_trace_profiler;
v___x_4933_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_4904_, v___x_4932_);
if (v___x_4933_ == 0)
{
v___y_4951_ = v___x_4933_;
goto v___jp_4950_;
}
else
{
lean_object* v___x_4987_; uint8_t v___x_4988_; 
v___x_4987_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4988_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_opts_4904_, v___x_4987_);
if (v___x_4988_ == 0)
{
lean_object* v___x_4989_; lean_object* v___x_4990_; double v___x_4991_; double v___x_4992_; double v___x_4993_; 
v___x_4989_ = l_Lean_trace_profiler_threshold;
v___x_4990_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_4904_, v___x_4989_);
v___x_4991_ = lean_float_of_nat(v___x_4990_);
v___x_4992_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__3);
v___x_4993_ = lean_float_div(v___x_4991_, v___x_4992_);
v___y_4982_ = v___x_4993_;
goto v___jp_4981_;
}
else
{
lean_object* v___x_4994_; lean_object* v___x_4995_; double v___x_4996_; 
v___x_4994_ = l_Lean_trace_profiler_threshold;
v___x_4995_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__2(v_opts_4904_, v___x_4994_);
v___x_4996_ = lean_float_of_nat(v___x_4995_);
v___y_4982_ = v___x_4996_;
goto v___jp_4981_;
}
}
v___jp_4916_:
{
lean_object* v___x_4920_; 
lean_inc(v___y_4917_);
v___x_4920_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__1(v_oldTraces_4906_, v_data_4919_, v___y_4917_, v___y_4918_, v___y_4909_, v___y_4910_, v___y_4911_, v___y_4912_);
if (lean_obj_tag(v___x_4920_) == 0)
{
lean_object* v___x_4921_; 
lean_dec_ref_known(v___x_4920_, 1);
v___x_4921_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_4914_);
return v___x_4921_;
}
else
{
lean_object* v_a_4922_; lean_object* v___x_4924_; uint8_t v_isShared_4925_; uint8_t v_isSharedCheck_4929_; 
lean_dec(v_fst_4914_);
v_a_4922_ = lean_ctor_get(v___x_4920_, 0);
v_isSharedCheck_4929_ = !lean_is_exclusive(v___x_4920_);
if (v_isSharedCheck_4929_ == 0)
{
v___x_4924_ = v___x_4920_;
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
else
{
lean_inc(v_a_4922_);
lean_dec(v___x_4920_);
v___x_4924_ = lean_box(0);
v_isShared_4925_ = v_isSharedCheck_4929_;
goto v_resetjp_4923_;
}
v_resetjp_4923_:
{
lean_object* v___x_4927_; 
if (v_isShared_4925_ == 0)
{
v___x_4927_ = v___x_4924_;
goto v_reusejp_4926_;
}
else
{
lean_object* v_reuseFailAlloc_4928_; 
v_reuseFailAlloc_4928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4928_, 0, v_a_4922_);
v___x_4927_ = v_reuseFailAlloc_4928_;
goto v_reusejp_4926_;
}
v_reusejp_4926_:
{
return v___x_4927_;
}
}
}
}
v___jp_4934_:
{
uint8_t v_result_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; double v___x_4940_; lean_object* v_data_4941_; 
v_result_4937_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0_spec__0(v_fst_4914_);
v___x_4938_ = lean_box(v_result_4937_);
v___x_4939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4939_, 0, v___x_4938_);
v___x_4940_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__0);
lean_inc_ref(v_tag_4903_);
lean_inc_ref(v___x_4939_);
lean_inc(v_cls_4901_);
v_data_4941_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_4941_, 0, v_cls_4901_);
lean_ctor_set(v_data_4941_, 1, v___x_4939_);
lean_ctor_set(v_data_4941_, 2, v_tag_4903_);
lean_ctor_set_float(v_data_4941_, sizeof(void*)*3, v___x_4940_);
lean_ctor_set_float(v_data_4941_, sizeof(void*)*3 + 8, v___x_4940_);
lean_ctor_set_uint8(v_data_4941_, sizeof(void*)*3 + 16, v_collapsed_4902_);
if (v___x_4933_ == 0)
{
lean_dec_ref_known(v___x_4939_, 1);
lean_dec(v_snd_4931_);
lean_dec(v_fst_4930_);
lean_dec_ref(v_tag_4903_);
lean_dec(v_cls_4901_);
v___y_4917_ = v___y_4935_;
v___y_4918_ = v_a_4936_;
v_data_4919_ = v_data_4941_;
goto v___jp_4916_;
}
else
{
lean_object* v_data_4942_; double v___x_4943_; double v___x_4944_; 
lean_dec_ref_known(v_data_4941_, 3);
v_data_4942_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_4942_, 0, v_cls_4901_);
lean_ctor_set(v_data_4942_, 1, v___x_4939_);
lean_ctor_set(v_data_4942_, 2, v_tag_4903_);
v___x_4943_ = lean_unbox_float(v_fst_4930_);
lean_dec(v_fst_4930_);
lean_ctor_set_float(v_data_4942_, sizeof(void*)*3, v___x_4943_);
v___x_4944_ = lean_unbox_float(v_snd_4931_);
lean_dec(v_snd_4931_);
lean_ctor_set_float(v_data_4942_, sizeof(void*)*3 + 8, v___x_4944_);
lean_ctor_set_uint8(v_data_4942_, sizeof(void*)*3 + 16, v_collapsed_4902_);
v___y_4917_ = v___y_4935_;
v___y_4918_ = v_a_4936_;
v_data_4919_ = v_data_4942_;
goto v___jp_4916_;
}
}
v___jp_4945_:
{
lean_object* v_ref_4946_; lean_object* v___x_4947_; 
v_ref_4946_ = lean_ctor_get(v___y_4911_, 2);
lean_inc(v___y_4912_);
lean_inc_ref(v___y_4911_);
lean_inc(v___y_4910_);
lean_inc_ref(v___y_4909_);
lean_inc(v_fst_4914_);
v___x_4947_ = lean_apply_6(v_msg_4907_, v_fst_4914_, v___y_4909_, v___y_4910_, v___y_4911_, v___y_4912_, lean_box(0));
if (lean_obj_tag(v___x_4947_) == 0)
{
lean_object* v_a_4948_; 
v_a_4948_ = lean_ctor_get(v___x_4947_, 0);
lean_inc(v_a_4948_);
lean_dec_ref_known(v___x_4947_, 1);
v___y_4935_ = v_ref_4946_;
v_a_4936_ = v_a_4948_;
goto v___jp_4934_;
}
else
{
lean_object* v___x_4949_; 
lean_dec_ref_known(v___x_4947_, 1);
v___x_4949_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___closed__2);
v___y_4935_ = v_ref_4946_;
v_a_4936_ = v___x_4949_;
goto v___jp_4934_;
}
}
v___jp_4950_:
{
if (v_clsEnabled_4905_ == 0)
{
if (v___y_4951_ == 0)
{
lean_object* v___x_4952_; lean_object* v_traceState_4953_; lean_object* v_env_4954_; lean_object* v_nextMacroScope_4955_; lean_object* v_ngen_4956_; lean_object* v_auxDeclNGen_4957_; lean_object* v_cache_4958_; lean_object* v_messages_4959_; lean_object* v_infoState_4960_; lean_object* v_snapshotTasks_4961_; lean_object* v___x_4963_; uint8_t v_isShared_4964_; uint8_t v_isSharedCheck_4980_; 
lean_dec(v_snd_4931_);
lean_dec(v_fst_4930_);
lean_dec_ref(v_msg_4907_);
lean_dec_ref(v_tag_4903_);
lean_dec(v_cls_4901_);
v___x_4952_ = lean_st_ref_take(v___y_4912_);
v_traceState_4953_ = lean_ctor_get(v___x_4952_, 4);
v_env_4954_ = lean_ctor_get(v___x_4952_, 0);
v_nextMacroScope_4955_ = lean_ctor_get(v___x_4952_, 1);
v_ngen_4956_ = lean_ctor_get(v___x_4952_, 2);
v_auxDeclNGen_4957_ = lean_ctor_get(v___x_4952_, 3);
v_cache_4958_ = lean_ctor_get(v___x_4952_, 5);
v_messages_4959_ = lean_ctor_get(v___x_4952_, 6);
v_infoState_4960_ = lean_ctor_get(v___x_4952_, 7);
v_snapshotTasks_4961_ = lean_ctor_get(v___x_4952_, 8);
v_isSharedCheck_4980_ = !lean_is_exclusive(v___x_4952_);
if (v_isSharedCheck_4980_ == 0)
{
v___x_4963_ = v___x_4952_;
v_isShared_4964_ = v_isSharedCheck_4980_;
goto v_resetjp_4962_;
}
else
{
lean_inc(v_snapshotTasks_4961_);
lean_inc(v_infoState_4960_);
lean_inc(v_messages_4959_);
lean_inc(v_cache_4958_);
lean_inc(v_traceState_4953_);
lean_inc(v_auxDeclNGen_4957_);
lean_inc(v_ngen_4956_);
lean_inc(v_nextMacroScope_4955_);
lean_inc(v_env_4954_);
lean_dec(v___x_4952_);
v___x_4963_ = lean_box(0);
v_isShared_4964_ = v_isSharedCheck_4980_;
goto v_resetjp_4962_;
}
v_resetjp_4962_:
{
uint64_t v_tid_4965_; lean_object* v_traces_4966_; lean_object* v___x_4968_; uint8_t v_isShared_4969_; uint8_t v_isSharedCheck_4979_; 
v_tid_4965_ = lean_ctor_get_uint64(v_traceState_4953_, sizeof(void*)*1);
v_traces_4966_ = lean_ctor_get(v_traceState_4953_, 0);
v_isSharedCheck_4979_ = !lean_is_exclusive(v_traceState_4953_);
if (v_isSharedCheck_4979_ == 0)
{
v___x_4968_ = v_traceState_4953_;
v_isShared_4969_ = v_isSharedCheck_4979_;
goto v_resetjp_4967_;
}
else
{
lean_inc(v_traces_4966_);
lean_dec(v_traceState_4953_);
v___x_4968_ = lean_box(0);
v_isShared_4969_ = v_isSharedCheck_4979_;
goto v_resetjp_4967_;
}
v_resetjp_4967_:
{
lean_object* v___x_4970_; lean_object* v___x_4972_; 
v___x_4970_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_4906_, v_traces_4966_);
lean_dec_ref(v_traces_4966_);
if (v_isShared_4969_ == 0)
{
lean_ctor_set(v___x_4968_, 0, v___x_4970_);
v___x_4972_ = v___x_4968_;
goto v_reusejp_4971_;
}
else
{
lean_object* v_reuseFailAlloc_4978_; 
v_reuseFailAlloc_4978_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4978_, 0, v___x_4970_);
lean_ctor_set_uint64(v_reuseFailAlloc_4978_, sizeof(void*)*1, v_tid_4965_);
v___x_4972_ = v_reuseFailAlloc_4978_;
goto v_reusejp_4971_;
}
v_reusejp_4971_:
{
lean_object* v___x_4974_; 
if (v_isShared_4964_ == 0)
{
lean_ctor_set(v___x_4963_, 4, v___x_4972_);
v___x_4974_ = v___x_4963_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4977_; 
v_reuseFailAlloc_4977_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4977_, 0, v_env_4954_);
lean_ctor_set(v_reuseFailAlloc_4977_, 1, v_nextMacroScope_4955_);
lean_ctor_set(v_reuseFailAlloc_4977_, 2, v_ngen_4956_);
lean_ctor_set(v_reuseFailAlloc_4977_, 3, v_auxDeclNGen_4957_);
lean_ctor_set(v_reuseFailAlloc_4977_, 4, v___x_4972_);
lean_ctor_set(v_reuseFailAlloc_4977_, 5, v_cache_4958_);
lean_ctor_set(v_reuseFailAlloc_4977_, 6, v_messages_4959_);
lean_ctor_set(v_reuseFailAlloc_4977_, 7, v_infoState_4960_);
lean_ctor_set(v_reuseFailAlloc_4977_, 8, v_snapshotTasks_4961_);
v___x_4974_ = v_reuseFailAlloc_4977_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
lean_object* v___x_4975_; lean_object* v___x_4976_; 
v___x_4975_ = lean_st_ref_put(v___y_4912_, v___x_4974_);
v___x_4976_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1_spec__2___redArg(v_fst_4914_);
return v___x_4976_;
}
}
}
}
}
else
{
goto v___jp_4945_;
}
}
else
{
goto v___jp_4945_;
}
}
v___jp_4981_:
{
double v___x_4983_; double v___x_4984_; double v___x_4985_; uint8_t v___x_4986_; 
v___x_4983_ = lean_unbox_float(v_snd_4931_);
v___x_4984_ = lean_unbox_float(v_fst_4930_);
v___x_4985_ = lean_float_sub(v___x_4983_, v___x_4984_);
v___x_4986_ = lean_float_decLt(v___y_4982_, v___x_4985_);
v___y_4951_ = v___x_4986_;
goto v___jp_4950_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___boxed(lean_object* v_cls_4997_, lean_object* v_collapsed_4998_, lean_object* v_tag_4999_, lean_object* v_opts_5000_, lean_object* v_clsEnabled_5001_, lean_object* v_oldTraces_5002_, lean_object* v_msg_5003_, lean_object* v_resStartStop_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_){
_start:
{
uint8_t v_collapsed_boxed_5010_; uint8_t v_clsEnabled_boxed_5011_; lean_object* v_res_5012_; 
v_collapsed_boxed_5010_ = lean_unbox(v_collapsed_4998_);
v_clsEnabled_boxed_5011_ = lean_unbox(v_clsEnabled_5001_);
v_res_5012_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0(v_cls_4997_, v_collapsed_boxed_5010_, v_tag_4999_, v_opts_5000_, v_clsEnabled_boxed_5011_, v_oldTraces_5002_, v_msg_5003_, v_resStartStop_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
lean_dec(v___y_5006_);
lean_dec_ref(v___y_5005_);
lean_dec_ref(v_opts_5000_);
return v_res_5012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg(lean_object* v_ctx_5014_, lean_object* v_reflectionResult_5015_, lean_object* v_a_5016_, lean_object* v_a_5017_, lean_object* v_a_5018_, lean_object* v_a_5019_){
_start:
{
lean_object* v_toCold_5021_; lean_object* v_options_5022_; uint8_t v_hasTrace_5023_; 
v_toCold_5021_ = lean_ctor_get(v_a_5018_, 0);
v_options_5022_ = lean_ctor_get(v_toCold_5021_, 2);
v_hasTrace_5023_ = lean_ctor_get_uint8(v_options_5022_, sizeof(void*)*1);
if (v_hasTrace_5023_ == 0)
{
lean_object* v_config_5024_; lean_object* v_lratPath_5025_; uint8_t v_trimProofs_5026_; lean_object* v___x_5027_; 
v_config_5024_ = lean_ctor_get(v_ctx_5014_, 5);
v_lratPath_5025_ = lean_ctor_get(v_ctx_5014_, 4);
v_trimProofs_5026_ = lean_ctor_get_uint8(v_config_5024_, sizeof(void*)*2);
v___x_5027_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_5025_, v_trimProofs_5026_, v_a_5018_, v_a_5019_);
if (lean_obj_tag(v___x_5027_) == 0)
{
lean_object* v_a_5028_; lean_object* v___x_5029_; 
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
lean_inc(v_a_5028_);
lean_dec_ref_known(v___x_5027_, 1);
v___x_5029_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v_a_5028_, v_ctx_5014_, v_reflectionResult_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_);
if (lean_obj_tag(v___x_5029_) == 0)
{
lean_object* v_a_5030_; lean_object* v___x_5032_; uint8_t v_isShared_5033_; uint8_t v_isSharedCheck_5040_; 
v_a_5030_ = lean_ctor_get(v___x_5029_, 0);
v_isSharedCheck_5040_ = !lean_is_exclusive(v___x_5029_);
if (v_isSharedCheck_5040_ == 0)
{
v___x_5032_ = v___x_5029_;
v_isShared_5033_ = v_isSharedCheck_5040_;
goto v_resetjp_5031_;
}
else
{
lean_inc(v_a_5030_);
lean_dec(v___x_5029_);
v___x_5032_ = lean_box(0);
v_isShared_5033_ = v_isSharedCheck_5040_;
goto v_resetjp_5031_;
}
v_resetjp_5031_:
{
lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5038_; 
v___x_5034_ = lean_box(0);
v___x_5035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5035_, 0, v_a_5030_);
lean_ctor_set(v___x_5035_, 1, v___x_5034_);
v___x_5036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5036_, 0, v___x_5035_);
if (v_isShared_5033_ == 0)
{
lean_ctor_set(v___x_5032_, 0, v___x_5036_);
v___x_5038_ = v___x_5032_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v___x_5036_);
v___x_5038_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
return v___x_5038_;
}
}
}
else
{
lean_object* v_a_5041_; lean_object* v___x_5043_; uint8_t v_isShared_5044_; uint8_t v_isSharedCheck_5048_; 
v_a_5041_ = lean_ctor_get(v___x_5029_, 0);
v_isSharedCheck_5048_ = !lean_is_exclusive(v___x_5029_);
if (v_isSharedCheck_5048_ == 0)
{
v___x_5043_ = v___x_5029_;
v_isShared_5044_ = v_isSharedCheck_5048_;
goto v_resetjp_5042_;
}
else
{
lean_inc(v_a_5041_);
lean_dec(v___x_5029_);
v___x_5043_ = lean_box(0);
v_isShared_5044_ = v_isSharedCheck_5048_;
goto v_resetjp_5042_;
}
v_resetjp_5042_:
{
lean_object* v___x_5046_; 
if (v_isShared_5044_ == 0)
{
v___x_5046_ = v___x_5043_;
goto v_reusejp_5045_;
}
else
{
lean_object* v_reuseFailAlloc_5047_; 
v_reuseFailAlloc_5047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5047_, 0, v_a_5041_);
v___x_5046_ = v_reuseFailAlloc_5047_;
goto v_reusejp_5045_;
}
v_reusejp_5045_:
{
return v___x_5046_;
}
}
}
}
else
{
lean_object* v_a_5049_; lean_object* v___x_5051_; uint8_t v_isShared_5052_; uint8_t v_isSharedCheck_5056_; 
lean_dec_ref(v_reflectionResult_5015_);
lean_dec_ref(v_ctx_5014_);
v_a_5049_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5056_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5056_ == 0)
{
v___x_5051_ = v___x_5027_;
v_isShared_5052_ = v_isSharedCheck_5056_;
goto v_resetjp_5050_;
}
else
{
lean_inc(v_a_5049_);
lean_dec(v___x_5027_);
v___x_5051_ = lean_box(0);
v_isShared_5052_ = v_isSharedCheck_5056_;
goto v_resetjp_5050_;
}
v_resetjp_5050_:
{
lean_object* v___x_5054_; 
if (v_isShared_5052_ == 0)
{
v___x_5054_ = v___x_5051_;
goto v_reusejp_5053_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v_a_5049_);
v___x_5054_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5053_;
}
v_reusejp_5053_:
{
return v___x_5054_;
}
}
}
}
else
{
lean_object* v_config_5057_; lean_object* v_lratPath_5058_; uint8_t v_trimProofs_5059_; lean_object* v_inheritedTraceOptions_5060_; lean_object* v___f_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; uint8_t v___x_5065_; lean_object* v___y_5067_; lean_object* v___y_5068_; lean_object* v_a_5069_; lean_object* v___y_5082_; lean_object* v___y_5083_; lean_object* v_a_5084_; lean_object* v___y_5087_; lean_object* v___y_5088_; lean_object* v_a_5089_; lean_object* v___y_5099_; lean_object* v___y_5100_; lean_object* v_a_5101_; 
v_config_5057_ = lean_ctor_get(v_ctx_5014_, 5);
v_lratPath_5058_ = lean_ctor_get(v_ctx_5014_, 4);
v_trimProofs_5059_ = lean_ctor_get_uint8(v_config_5057_, sizeof(void*)*2);
v_inheritedTraceOptions_5060_ = lean_ctor_get(v_toCold_5021_, 11);
v___f_5061_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__0));
v___x_5062_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3));
v___x_5063_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
v___x_5064_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_5065_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5060_, v_options_5022_, v___x_5064_);
if (v___x_5065_ == 0)
{
lean_object* v___x_5154_; uint8_t v___x_5155_; 
v___x_5154_ = l_Lean_trace_profiler;
v___x_5155_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_5022_, v___x_5154_);
if (v___x_5155_ == 0)
{
lean_object* v___x_5156_; 
v___x_5156_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_5058_, v_trimProofs_5059_, v_a_5018_, v_a_5019_);
if (lean_obj_tag(v___x_5156_) == 0)
{
lean_object* v_a_5157_; lean_object* v___x_5158_; 
v_a_5157_ = lean_ctor_get(v___x_5156_, 0);
lean_inc(v_a_5157_);
lean_dec_ref_known(v___x_5156_, 1);
v___x_5158_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v_a_5157_, v_ctx_5014_, v_reflectionResult_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_);
if (lean_obj_tag(v___x_5158_) == 0)
{
lean_object* v_a_5159_; lean_object* v___x_5161_; uint8_t v_isShared_5162_; uint8_t v_isSharedCheck_5169_; 
v_a_5159_ = lean_ctor_get(v___x_5158_, 0);
v_isSharedCheck_5169_ = !lean_is_exclusive(v___x_5158_);
if (v_isSharedCheck_5169_ == 0)
{
v___x_5161_ = v___x_5158_;
v_isShared_5162_ = v_isSharedCheck_5169_;
goto v_resetjp_5160_;
}
else
{
lean_inc(v_a_5159_);
lean_dec(v___x_5158_);
v___x_5161_ = lean_box(0);
v_isShared_5162_ = v_isSharedCheck_5169_;
goto v_resetjp_5160_;
}
v_resetjp_5160_:
{
lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5167_; 
v___x_5163_ = lean_box(0);
v___x_5164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5164_, 0, v_a_5159_);
lean_ctor_set(v___x_5164_, 1, v___x_5163_);
v___x_5165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5165_, 0, v___x_5164_);
if (v_isShared_5162_ == 0)
{
lean_ctor_set(v___x_5161_, 0, v___x_5165_);
v___x_5167_ = v___x_5161_;
goto v_reusejp_5166_;
}
else
{
lean_object* v_reuseFailAlloc_5168_; 
v_reuseFailAlloc_5168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5168_, 0, v___x_5165_);
v___x_5167_ = v_reuseFailAlloc_5168_;
goto v_reusejp_5166_;
}
v_reusejp_5166_:
{
return v___x_5167_;
}
}
}
else
{
lean_object* v_a_5170_; lean_object* v___x_5172_; uint8_t v_isShared_5173_; uint8_t v_isSharedCheck_5177_; 
v_a_5170_ = lean_ctor_get(v___x_5158_, 0);
v_isSharedCheck_5177_ = !lean_is_exclusive(v___x_5158_);
if (v_isSharedCheck_5177_ == 0)
{
v___x_5172_ = v___x_5158_;
v_isShared_5173_ = v_isSharedCheck_5177_;
goto v_resetjp_5171_;
}
else
{
lean_inc(v_a_5170_);
lean_dec(v___x_5158_);
v___x_5172_ = lean_box(0);
v_isShared_5173_ = v_isSharedCheck_5177_;
goto v_resetjp_5171_;
}
v_resetjp_5171_:
{
lean_object* v___x_5175_; 
if (v_isShared_5173_ == 0)
{
v___x_5175_ = v___x_5172_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5176_; 
v_reuseFailAlloc_5176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5176_, 0, v_a_5170_);
v___x_5175_ = v_reuseFailAlloc_5176_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
return v___x_5175_;
}
}
}
}
else
{
lean_object* v_a_5178_; lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5185_; 
lean_dec_ref(v_reflectionResult_5015_);
lean_dec_ref(v_ctx_5014_);
v_a_5178_ = lean_ctor_get(v___x_5156_, 0);
v_isSharedCheck_5185_ = !lean_is_exclusive(v___x_5156_);
if (v_isSharedCheck_5185_ == 0)
{
v___x_5180_ = v___x_5156_;
v_isShared_5181_ = v_isSharedCheck_5185_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_a_5178_);
lean_dec(v___x_5156_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5185_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
lean_object* v___x_5183_; 
if (v_isShared_5181_ == 0)
{
v___x_5183_ = v___x_5180_;
goto v_reusejp_5182_;
}
else
{
lean_object* v_reuseFailAlloc_5184_; 
v_reuseFailAlloc_5184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5184_, 0, v_a_5178_);
v___x_5183_ = v_reuseFailAlloc_5184_;
goto v_reusejp_5182_;
}
v_reusejp_5182_:
{
return v___x_5183_;
}
}
}
}
else
{
goto v___jp_5103_;
}
}
else
{
goto v___jp_5103_;
}
v___jp_5066_:
{
lean_object* v___x_5070_; double v___x_5071_; double v___x_5072_; double v___x_5073_; double v___x_5074_; double v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; 
v___x_5070_ = lean_io_mono_nanos_now();
v___x_5071_ = lean_float_of_nat(v___y_5068_);
v___x_5072_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_5073_ = lean_float_div(v___x_5071_, v___x_5072_);
v___x_5074_ = lean_float_of_nat(v___x_5070_);
v___x_5075_ = lean_float_div(v___x_5074_, v___x_5072_);
v___x_5076_ = lean_box_float(v___x_5073_);
v___x_5077_ = lean_box_float(v___x_5075_);
v___x_5078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5078_, 0, v___x_5076_);
lean_ctor_set(v___x_5078_, 1, v___x_5077_);
v___x_5079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5079_, 0, v_a_5069_);
lean_ctor_set(v___x_5079_, 1, v___x_5078_);
v___x_5080_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0(v___x_5062_, v_hasTrace_5023_, v___x_5063_, v_options_5022_, v___x_5065_, v___y_5067_, v___f_5061_, v___x_5079_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_);
return v___x_5080_;
}
v___jp_5081_:
{
lean_object* v___x_5085_; 
v___x_5085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5085_, 0, v_a_5084_);
v___y_5067_ = v___y_5082_;
v___y_5068_ = v___y_5083_;
v_a_5069_ = v___x_5085_;
goto v___jp_5066_;
}
v___jp_5086_:
{
lean_object* v___x_5090_; double v___x_5091_; double v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; 
v___x_5090_ = lean_io_get_num_heartbeats();
v___x_5091_ = lean_float_of_nat(v___y_5087_);
v___x_5092_ = lean_float_of_nat(v___x_5090_);
v___x_5093_ = lean_box_float(v___x_5091_);
v___x_5094_ = lean_box_float(v___x_5092_);
v___x_5095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5095_, 0, v___x_5093_);
lean_ctor_set(v___x_5095_, 1, v___x_5094_);
v___x_5096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5096_, 0, v_a_5089_);
lean_ctor_set(v___x_5096_, 1, v___x_5095_);
v___x_5097_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0(v___x_5062_, v_hasTrace_5023_, v___x_5063_, v_options_5022_, v___x_5065_, v___y_5088_, v___f_5061_, v___x_5096_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_);
return v___x_5097_;
}
v___jp_5098_:
{
lean_object* v___x_5102_; 
v___x_5102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5102_, 0, v_a_5101_);
v___y_5087_ = v___y_5099_;
v___y_5088_ = v___y_5100_;
v_a_5089_ = v___x_5102_;
goto v___jp_5086_;
}
v___jp_5103_:
{
lean_object* v___x_5104_; lean_object* v_a_5105_; lean_object* v___x_5106_; uint8_t v___x_5107_; 
v___x_5104_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_5019_);
v_a_5105_ = lean_ctor_get(v___x_5104_, 0);
lean_inc(v_a_5105_);
lean_dec_ref(v___x_5104_);
v___x_5106_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5107_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_5022_, v___x_5106_);
if (v___x_5107_ == 0)
{
lean_object* v___x_5108_; lean_object* v___x_5109_; 
v___x_5108_ = lean_io_mono_nanos_now();
v___x_5109_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_5058_, v_trimProofs_5059_, v_a_5018_, v_a_5019_);
if (lean_obj_tag(v___x_5109_) == 0)
{
lean_object* v_a_5110_; lean_object* v___x_5112_; uint8_t v_isShared_5113_; uint8_t v_isSharedCheck_5129_; 
v_a_5110_ = lean_ctor_get(v___x_5109_, 0);
v_isSharedCheck_5129_ = !lean_is_exclusive(v___x_5109_);
if (v_isSharedCheck_5129_ == 0)
{
v___x_5112_ = v___x_5109_;
v_isShared_5113_ = v_isSharedCheck_5129_;
goto v_resetjp_5111_;
}
else
{
lean_inc(v_a_5110_);
lean_dec(v___x_5109_);
v___x_5112_ = lean_box(0);
v_isShared_5113_ = v_isSharedCheck_5129_;
goto v_resetjp_5111_;
}
v_resetjp_5111_:
{
lean_object* v___x_5114_; 
v___x_5114_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v_a_5110_, v_ctx_5014_, v_reflectionResult_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_);
if (lean_obj_tag(v___x_5114_) == 0)
{
lean_object* v_a_5115_; lean_object* v___x_5117_; uint8_t v_isShared_5118_; uint8_t v_isSharedCheck_5127_; 
v_a_5115_ = lean_ctor_get(v___x_5114_, 0);
v_isSharedCheck_5127_ = !lean_is_exclusive(v___x_5114_);
if (v_isSharedCheck_5127_ == 0)
{
v___x_5117_ = v___x_5114_;
v_isShared_5118_ = v_isSharedCheck_5127_;
goto v_resetjp_5116_;
}
else
{
lean_inc(v_a_5115_);
lean_dec(v___x_5114_);
v___x_5117_ = lean_box(0);
v_isShared_5118_ = v_isSharedCheck_5127_;
goto v_resetjp_5116_;
}
v_resetjp_5116_:
{
lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5122_; 
v___x_5119_ = lean_box(0);
v___x_5120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5120_, 0, v_a_5115_);
lean_ctor_set(v___x_5120_, 1, v___x_5119_);
if (v_isShared_5118_ == 0)
{
lean_ctor_set_tag(v___x_5117_, 1);
lean_ctor_set(v___x_5117_, 0, v___x_5120_);
v___x_5122_ = v___x_5117_;
goto v_reusejp_5121_;
}
else
{
lean_object* v_reuseFailAlloc_5126_; 
v_reuseFailAlloc_5126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5126_, 0, v___x_5120_);
v___x_5122_ = v_reuseFailAlloc_5126_;
goto v_reusejp_5121_;
}
v_reusejp_5121_:
{
lean_object* v___x_5124_; 
if (v_isShared_5113_ == 0)
{
lean_ctor_set_tag(v___x_5112_, 1);
lean_ctor_set(v___x_5112_, 0, v___x_5122_);
v___x_5124_ = v___x_5112_;
goto v_reusejp_5123_;
}
else
{
lean_object* v_reuseFailAlloc_5125_; 
v_reuseFailAlloc_5125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5125_, 0, v___x_5122_);
v___x_5124_ = v_reuseFailAlloc_5125_;
goto v_reusejp_5123_;
}
v_reusejp_5123_:
{
v___y_5067_ = v_a_5105_;
v___y_5068_ = v___x_5108_;
v_a_5069_ = v___x_5124_;
goto v___jp_5066_;
}
}
}
}
else
{
lean_object* v_a_5128_; 
lean_del_object(v___x_5112_);
v_a_5128_ = lean_ctor_get(v___x_5114_, 0);
lean_inc(v_a_5128_);
lean_dec_ref_known(v___x_5114_, 1);
v___y_5082_ = v_a_5105_;
v___y_5083_ = v___x_5108_;
v_a_5084_ = v_a_5128_;
goto v___jp_5081_;
}
}
}
else
{
lean_object* v_a_5130_; 
lean_dec_ref(v_reflectionResult_5015_);
lean_dec_ref(v_ctx_5014_);
v_a_5130_ = lean_ctor_get(v___x_5109_, 0);
lean_inc(v_a_5130_);
lean_dec_ref_known(v___x_5109_, 1);
v___y_5082_ = v_a_5105_;
v___y_5083_ = v___x_5108_;
v_a_5084_ = v_a_5130_;
goto v___jp_5081_;
}
}
else
{
lean_object* v___x_5131_; lean_object* v___x_5132_; 
v___x_5131_ = lean_io_get_num_heartbeats();
v___x_5132_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_5058_, v_trimProofs_5059_, v_a_5018_, v_a_5019_);
if (lean_obj_tag(v___x_5132_) == 0)
{
lean_object* v_a_5133_; lean_object* v___x_5135_; uint8_t v_isShared_5136_; uint8_t v_isSharedCheck_5152_; 
v_a_5133_ = lean_ctor_get(v___x_5132_, 0);
v_isSharedCheck_5152_ = !lean_is_exclusive(v___x_5132_);
if (v_isSharedCheck_5152_ == 0)
{
v___x_5135_ = v___x_5132_;
v_isShared_5136_ = v_isSharedCheck_5152_;
goto v_resetjp_5134_;
}
else
{
lean_inc(v_a_5133_);
lean_dec(v___x_5132_);
v___x_5135_ = lean_box(0);
v_isShared_5136_ = v_isSharedCheck_5152_;
goto v_resetjp_5134_;
}
v_resetjp_5134_:
{
lean_object* v___x_5137_; 
v___x_5137_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v_a_5133_, v_ctx_5014_, v_reflectionResult_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_);
if (lean_obj_tag(v___x_5137_) == 0)
{
lean_object* v_a_5138_; lean_object* v___x_5140_; uint8_t v_isShared_5141_; uint8_t v_isSharedCheck_5150_; 
v_a_5138_ = lean_ctor_get(v___x_5137_, 0);
v_isSharedCheck_5150_ = !lean_is_exclusive(v___x_5137_);
if (v_isSharedCheck_5150_ == 0)
{
v___x_5140_ = v___x_5137_;
v_isShared_5141_ = v_isSharedCheck_5150_;
goto v_resetjp_5139_;
}
else
{
lean_inc(v_a_5138_);
lean_dec(v___x_5137_);
v___x_5140_ = lean_box(0);
v_isShared_5141_ = v_isSharedCheck_5150_;
goto v_resetjp_5139_;
}
v_resetjp_5139_:
{
lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5145_; 
v___x_5142_ = lean_box(0);
v___x_5143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5143_, 0, v_a_5138_);
lean_ctor_set(v___x_5143_, 1, v___x_5142_);
if (v_isShared_5141_ == 0)
{
lean_ctor_set_tag(v___x_5140_, 1);
lean_ctor_set(v___x_5140_, 0, v___x_5143_);
v___x_5145_ = v___x_5140_;
goto v_reusejp_5144_;
}
else
{
lean_object* v_reuseFailAlloc_5149_; 
v_reuseFailAlloc_5149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5149_, 0, v___x_5143_);
v___x_5145_ = v_reuseFailAlloc_5149_;
goto v_reusejp_5144_;
}
v_reusejp_5144_:
{
lean_object* v___x_5147_; 
if (v_isShared_5136_ == 0)
{
lean_ctor_set_tag(v___x_5135_, 1);
lean_ctor_set(v___x_5135_, 0, v___x_5145_);
v___x_5147_ = v___x_5135_;
goto v_reusejp_5146_;
}
else
{
lean_object* v_reuseFailAlloc_5148_; 
v_reuseFailAlloc_5148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5148_, 0, v___x_5145_);
v___x_5147_ = v_reuseFailAlloc_5148_;
goto v_reusejp_5146_;
}
v_reusejp_5146_:
{
v___y_5087_ = v___x_5131_;
v___y_5088_ = v_a_5105_;
v_a_5089_ = v___x_5147_;
goto v___jp_5086_;
}
}
}
}
else
{
lean_object* v_a_5151_; 
lean_del_object(v___x_5135_);
v_a_5151_ = lean_ctor_get(v___x_5137_, 0);
lean_inc(v_a_5151_);
lean_dec_ref_known(v___x_5137_, 1);
v___y_5099_ = v___x_5131_;
v___y_5100_ = v_a_5105_;
v_a_5101_ = v_a_5151_;
goto v___jp_5098_;
}
}
}
else
{
lean_object* v_a_5153_; 
lean_dec_ref(v_reflectionResult_5015_);
lean_dec_ref(v_ctx_5014_);
v_a_5153_ = lean_ctor_get(v___x_5132_, 0);
lean_inc(v_a_5153_);
lean_dec_ref_known(v___x_5132_, 1);
v___y_5099_ = v___x_5131_;
v___y_5100_ = v_a_5105_;
v_a_5101_ = v_a_5153_;
goto v___jp_5098_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___boxed(lean_object* v_ctx_5186_, lean_object* v_reflectionResult_5187_, lean_object* v_a_5188_, lean_object* v_a_5189_, lean_object* v_a_5190_, lean_object* v_a_5191_, lean_object* v_a_5192_){
_start:
{
lean_object* v_res_5193_; 
v_res_5193_ = l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg(v_ctx_5186_, v_reflectionResult_5187_, v_a_5188_, v_a_5189_, v_a_5190_, v_a_5191_);
lean_dec(v_a_5191_);
lean_dec_ref(v_a_5190_);
lean_dec(v_a_5189_);
lean_dec_ref(v_a_5188_);
return v_res_5193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker(lean_object* v_ctx_5194_, lean_object* v_x_5195_, lean_object* v_reflectionResult_5196_, lean_object* v_x_5197_, lean_object* v_a_5198_, lean_object* v_a_5199_, lean_object* v_a_5200_, lean_object* v_a_5201_){
_start:
{
lean_object* v___x_5203_; 
v___x_5203_ = l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg(v_ctx_5194_, v_reflectionResult_5196_, v_a_5198_, v_a_5199_, v_a_5200_, v_a_5201_);
return v___x_5203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___boxed(lean_object* v_ctx_5204_, lean_object* v_x_5205_, lean_object* v_reflectionResult_5206_, lean_object* v_x_5207_, lean_object* v_a_5208_, lean_object* v_a_5209_, lean_object* v_a_5210_, lean_object* v_a_5211_, lean_object* v_a_5212_){
_start:
{
lean_object* v_res_5213_; 
v_res_5213_ = l_Lean_Meta_Tactic_BVDecide_lratChecker(v_ctx_5204_, v_x_5205_, v_reflectionResult_5206_, v_x_5207_, v_a_5208_, v_a_5209_, v_a_5210_, v_a_5211_);
lean_dec(v_a_5211_);
lean_dec_ref(v_a_5210_);
lean_dec(v_a_5209_);
lean_dec_ref(v_a_5208_);
lean_dec_ref(v_x_5207_);
lean_dec(v_x_5205_);
return v_res_5213_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_TacticContext(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Native(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_TacticContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_TacticContext(uint8_t builtin);
lean_object* initialize_Lean_Meta_Native(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_TacticContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.LRAT.Cert
// Imports: public import Std.Tactic.BVDecide.LRAT.Checker public import Lean.CoreM public import Std.Tactic.BVDecide.Syntax import Lean.Meta.Tactic.BVDecide.LRAT.Trim import Std.Tactic.BVDecide.LRAT.Parser import Lean.Meta.Tactic.BVDecide.External
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
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_instToExprNat;
extern lean_object* l_Lean_instToLevel;
lean_object* l_Lean_instToExprArrayOfToLevel___redArg(lean_object*, lean_object*);
lean_object* l_Lean_instToExprProdOfToLevel___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instToExprInt;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* l_Std_Tactic_BVDecide_LRAT_parseLRATProof(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_io_mono_nanos_now();
lean_object* l_IO_lazyPure___redArg(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_LRAT_trim(lean_object*);
lean_object* l_Std_Tactic_BVDecide_LRAT_lratProofToString(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Sat_CNF_dimacs(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_External_satQuery(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* lean_io_create_tempfile();
lean_object* lean_io_remove_file(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BVDecide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LRAT"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Action"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "addEmpty"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(93, 190, 57, 97, 43, 82, 204, 195)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(252, 170, 87, 126, 210, 40, 34, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__17_value),LEAN_SCALAR_PTR_LITERAL(104, 109, 74, 91, 62, 109, 218, 23)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__20;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__21_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__22_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__23_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__21_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__25_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__26_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__21_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__30_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__29_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__30_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "addRup"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__33 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__33_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(93, 190, 57, 97, 43, 82, 204, 195)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(252, 170, 87, 126, 210, 40, 34, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__33_value),LEAN_SCALAR_PTR_LITERAL(165, 250, 224, 102, 206, 35, 100, 254)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__35;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__37;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__38;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "addRat"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__39 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__39_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(93, 190, 57, 97, 43, 82, 204, 195)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(252, 170, 87, 126, 210, 40, 34, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__39_value),LEAN_SCALAR_PTR_LITERAL(126, 188, 16, 206, 14, 241, 53, 87)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__41;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__42 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__42_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__42_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__43 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__43_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__44;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__45 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__45_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__46 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__46_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__45_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__47_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__46_value),LEAN_SCALAR_PTR_LITERAL(117, 121, 37, 123, 104, 28, 189, 89)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__47 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__47_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__48;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__49;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__45_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__50 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__50_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__51;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__53;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__54;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__55 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__55_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__42_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__56_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__55_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__56 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__56_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__57;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__58 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__58_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__59_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__42_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__59_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__58_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__59 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__59_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__60;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "del"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__61 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__61_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(93, 190, 57, 97, 43, 82, 204, 195)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__16_value),LEAN_SCALAR_PTR_LITERAL(252, 170, 87, 126, 210, 40, 34, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value_aux_4),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__61_value),LEAN_SCALAR_PTR_LITERAL(104, 230, 17, 1, 168, 25, 208, 83)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__63;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "IntAction"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(93, 190, 57, 97, 43, 82, 204, 195)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__3_value),LEAN_SCALAR_PTR_LITERAL(90, 57, 146, 191, 99, 77, 0, 56)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Trimming LRAT proof"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Parsing LRAT file"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__6___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__0_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sat"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__2_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__3_value),LEAN_SCALAR_PTR_LITERAL(174, 199, 37, 233, 64, 174, 173, 134)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LRAT proof has "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__8_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " steps after trimming"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = " steps before trimming"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__11_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "SAT solver produced invalid LRAT: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Running SAT solver"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Obtaining LRAT certificate"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Serializing SAT problem to DIMACS file"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_runExternal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_runExternal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___closed__1_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_runExternal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_runExternal___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_box(0);
v___x_5_ = l_unsafeCast___redArg(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_box(0);
v___x_7_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__2);
v___x_8_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__4(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_9_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3);
v___x_10_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__1));
v___x_11_ = l_Lean_mkConst(v___x_10_, v___x_9_);
return v___x_11_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__7(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = lean_box(0);
v___x_16_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__6));
v___x_17_ = l_Lean_mkConst(v___x_16_, v___x_15_);
return v___x_17_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__8(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v_beta_20_; 
v___x_18_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__7, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__7_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__7);
v___x_19_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__4);
v_beta_20_ = l_Lean_Expr_app___override(v___x_19_, v___x_18_);
return v_beta_20_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v_alpha_26_; 
v___x_24_ = lean_box(0);
v___x_25_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__10));
v_alpha_26_ = l_Lean_mkConst(v___x_25_, v___x_24_);
return v_alpha_26_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3);
v___x_41_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__2);
v___x_42_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
lean_ctor_set(v___x_42_, 1, v___x_40_);
return v___x_42_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__20(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19);
v___x_44_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__18));
v___x_45_ = l_Lean_mkConst(v___x_44_, v___x_43_);
return v___x_45_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3);
v___x_52_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__23));
v___x_53_ = l_Lean_mkConst(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3);
v___x_59_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__26));
v___x_60_ = l_Lean_mkConst(v___x_59_, v___x_58_);
return v___x_60_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28(void){
_start:
{
lean_object* v_alpha_61_; lean_object* v___x_62_; lean_object* v_nil_63_; 
v_alpha_61_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11);
v___x_62_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27);
v_nil_63_ = l_Lean_Expr_app___override(v___x_62_, v_alpha_61_);
return v_nil_63_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__3);
v___x_69_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__30));
v___x_70_ = l_Lean_mkConst(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32(void){
_start:
{
lean_object* v_alpha_71_; lean_object* v___x_72_; lean_object* v_cons_73_; 
v_alpha_71_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11);
v___x_72_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31);
v_cons_73_ = l_Lean_Expr_app___override(v___x_72_, v_alpha_71_);
return v_cons_73_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__35(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19);
v___x_83_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__34));
v___x_84_ = l_Lean_mkConst(v___x_83_, v___x_82_);
return v___x_84_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v_type_87_; 
v___x_85_ = lean_box(0);
v___x_86_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__6));
v_type_87_ = l_Lean_Expr_const___override(v___x_86_, v___x_85_);
return v_type_87_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__37(void){
_start:
{
lean_object* v_type_88_; lean_object* v___x_89_; lean_object* v_nil_90_; 
v_type_88_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36);
v___x_89_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27);
v_nil_90_ = l_Lean_Expr_app___override(v___x_89_, v_type_88_);
return v_nil_90_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__38(void){
_start:
{
lean_object* v_type_91_; lean_object* v___x_92_; lean_object* v_cons_93_; 
v_type_91_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36);
v___x_92_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31);
v_cons_93_ = l_Lean_Expr_app___override(v___x_92_, v_type_91_);
return v_cons_93_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__41(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19);
v___x_103_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__40));
v___x_104_ = l_Lean_mkConst(v___x_103_, v___x_102_);
return v___x_104_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__44(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v_00_u03b2Type_110_; 
v___x_108_ = lean_box(0);
v___x_109_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__43));
v_00_u03b2Type_110_ = l_Lean_mkConst(v___x_109_, v___x_108_);
return v_00_u03b2Type_110_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__48(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_116_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19);
v___x_117_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__47));
v___x_118_ = l_Lean_mkConst(v___x_117_, v___x_116_);
return v___x_118_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__49(void){
_start:
{
lean_object* v_alpha_119_; lean_object* v___x_120_; lean_object* v_00_u03b2Type_121_; 
v_alpha_119_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11);
v___x_120_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__4, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__4_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__4);
v_00_u03b2Type_121_ = l_Lean_Expr_app___override(v___x_120_, v_alpha_119_);
return v_00_u03b2Type_121_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__51(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19);
v___x_125_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__50));
v___x_126_ = l_Lean_mkConst(v___x_125_, v___x_124_);
return v___x_126_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52(void){
_start:
{
lean_object* v_00_u03b2Type_127_; lean_object* v_alpha_128_; lean_object* v___x_129_; lean_object* v_type_130_; 
v_00_u03b2Type_127_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__49, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__49_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__49);
v_alpha_128_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11);
v___x_129_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__51, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__51_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__51);
v_type_130_ = l_Lean_mkAppB(v___x_129_, v_alpha_128_, v_00_u03b2Type_127_);
return v_type_130_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__53(void){
_start:
{
lean_object* v_type_131_; lean_object* v___x_132_; lean_object* v_nil_133_; 
v_type_131_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52);
v___x_132_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__27);
v_nil_133_ = l_Lean_Expr_app___override(v___x_132_, v_type_131_);
return v_nil_133_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__54(void){
_start:
{
lean_object* v_type_134_; lean_object* v___x_135_; lean_object* v_cons_136_; 
v_type_134_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52);
v___x_135_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__31);
v_cons_136_ = l_Lean_Expr_app___override(v___x_135_, v_type_134_);
return v_cons_136_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__57(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_141_ = lean_box(0);
v___x_142_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__56));
v___x_143_ = l_Lean_mkConst(v___x_142_, v___x_141_);
return v___x_143_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__60(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_box(0);
v___x_149_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__59));
v___x_150_ = l_Lean_mkConst(v___x_149_, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__63(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__19);
v___x_160_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__62));
v___x_161_ = l_Lean_mkConst(v___x_160_, v___x_159_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0(lean_object* v___x_162_, lean_object* v___x_163_, lean_object* v___x_164_, lean_object* v_action_165_){
_start:
{
lean_object* v_beta_166_; lean_object* v_alpha_167_; 
v_beta_166_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__8, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__8);
v_alpha_167_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__11);
switch(lean_obj_tag(v_action_165_))
{
case 0:
{
lean_object* v_id_168_; lean_object* v_rupHints_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v_nil_173_; lean_object* v_cons_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec_ref(v___x_164_);
lean_dec_ref(v___x_163_);
v_id_168_ = lean_ctor_get(v_action_165_, 0);
lean_inc(v_id_168_);
v_rupHints_169_ = lean_ctor_get(v_action_165_, 1);
lean_inc_ref(v_rupHints_169_);
lean_dec_ref_known(v_action_165_, 2);
v___x_170_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__20, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__20_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__20);
v___x_171_ = l_Lean_mkNatLit(v_id_168_);
v___x_172_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24);
v_nil_173_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28);
v_cons_174_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32);
v___x_175_ = lean_array_to_list(v_rupHints_169_);
v___x_176_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_box(0), v___x_162_, v_nil_173_, v_cons_174_, v___x_175_);
v___x_177_ = l_Lean_mkAppB(v___x_172_, v_alpha_167_, v___x_176_);
v___x_178_ = l_Lean_mkApp4(v___x_170_, v_beta_166_, v_alpha_167_, v___x_171_, v___x_177_);
return v___x_178_;
}
case 1:
{
lean_object* v_id_179_; lean_object* v_c_180_; lean_object* v_rupHints_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v_type_184_; lean_object* v___x_185_; lean_object* v_nil_186_; lean_object* v_cons_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v_nil_191_; lean_object* v_cons_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
lean_dec_ref(v___x_164_);
v_id_179_ = lean_ctor_get(v_action_165_, 0);
lean_inc(v_id_179_);
v_c_180_ = lean_ctor_get(v_action_165_, 1);
lean_inc(v_c_180_);
v_rupHints_181_ = lean_ctor_get(v_action_165_, 2);
lean_inc_ref(v_rupHints_181_);
lean_dec_ref_known(v_action_165_, 3);
v___x_182_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__35, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__35_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__35);
v___x_183_ = l_Lean_mkNatLit(v_id_179_);
v_type_184_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36);
v___x_185_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24);
v_nil_186_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__37, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__37_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__37);
v_cons_187_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__38, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__38_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__38);
v___x_188_ = lean_array_to_list(v_c_180_);
v___x_189_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_box(0), v___x_163_, v_nil_186_, v_cons_187_, v___x_188_);
v___x_190_ = l_Lean_mkAppB(v___x_185_, v_type_184_, v___x_189_);
v_nil_191_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28);
v_cons_192_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32);
v___x_193_ = lean_array_to_list(v_rupHints_181_);
v___x_194_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_box(0), v___x_162_, v_nil_191_, v_cons_192_, v___x_193_);
v___x_195_ = l_Lean_mkAppB(v___x_185_, v_alpha_167_, v___x_194_);
v___x_196_ = l_Lean_mkApp5(v___x_182_, v_beta_166_, v_alpha_167_, v___x_183_, v___x_190_, v___x_195_);
return v___x_196_;
}
case 2:
{
lean_object* v_id_197_; lean_object* v_c_198_; lean_object* v_pivot_199_; lean_object* v_rupHints_200_; lean_object* v_ratHints_201_; lean_object* v___x_202_; lean_object* v_fst_203_; lean_object* v_snd_204_; lean_object* v_type_205_; lean_object* v_nil_206_; lean_object* v_cons_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v_00_u03b2Type_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___y_217_; uint8_t v___x_231_; 
v_id_197_ = lean_ctor_get(v_action_165_, 0);
lean_inc(v_id_197_);
v_c_198_ = lean_ctor_get(v_action_165_, 1);
lean_inc(v_c_198_);
v_pivot_199_ = lean_ctor_get(v_action_165_, 2);
lean_inc_ref(v_pivot_199_);
v_rupHints_200_ = lean_ctor_get(v_action_165_, 3);
lean_inc_ref(v_rupHints_200_);
v_ratHints_201_ = lean_ctor_get(v_action_165_, 4);
lean_inc_ref(v_ratHints_201_);
lean_dec_ref_known(v_action_165_, 5);
v___x_202_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24);
v_fst_203_ = lean_ctor_get(v_pivot_199_, 0);
lean_inc(v_fst_203_);
v_snd_204_ = lean_ctor_get(v_pivot_199_, 1);
lean_inc(v_snd_204_);
lean_dec_ref(v_pivot_199_);
v_type_205_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__36);
v_nil_206_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__37, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__37_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__37);
v_cons_207_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__38, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__38_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__38);
v___x_208_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__41, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__41_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__41);
v___x_209_ = l_Lean_mkNatLit(v_id_197_);
v___x_210_ = lean_array_to_list(v_c_198_);
v___x_211_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_box(0), v___x_163_, v_nil_206_, v_cons_207_, v___x_210_);
v___x_212_ = l_Lean_mkAppB(v___x_202_, v_type_205_, v___x_211_);
v_00_u03b2Type_213_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__44, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__44_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__44);
v___x_214_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__48, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__48_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__48);
v___x_215_ = l_Lean_mkNatLit(v_fst_203_);
v___x_231_ = lean_unbox(v_snd_204_);
lean_dec(v_snd_204_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; 
v___x_232_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__57, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__57_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__57);
v___y_217_ = v___x_232_;
goto v___jp_216_;
}
else
{
lean_object* v___x_233_; 
v___x_233_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__60, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__60_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__60);
v___y_217_ = v___x_233_;
goto v___jp_216_;
}
v___jp_216_:
{
lean_object* v___x_218_; lean_object* v_nil_219_; lean_object* v_cons_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v_type_224_; lean_object* v_nil_225_; lean_object* v_cons_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
lean_inc_ref(v___y_217_);
v___x_218_ = l_Lean_mkApp4(v___x_214_, v_alpha_167_, v_00_u03b2Type_213_, v___x_215_, v___y_217_);
v_nil_219_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28);
v_cons_220_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32);
v___x_221_ = lean_array_to_list(v_rupHints_200_);
v___x_222_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_box(0), v___x_162_, v_nil_219_, v_cons_220_, v___x_221_);
v___x_223_ = l_Lean_mkAppB(v___x_202_, v_alpha_167_, v___x_222_);
v_type_224_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__52);
v_nil_225_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__53, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__53_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__53);
v_cons_226_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__54, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__54_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__54);
v___x_227_ = lean_array_to_list(v_ratHints_201_);
v___x_228_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_box(0), v___x_164_, v_nil_225_, v_cons_226_, v___x_227_);
v___x_229_ = l_Lean_mkAppB(v___x_202_, v_type_224_, v___x_228_);
v___x_230_ = l_Lean_mkApp7(v___x_208_, v_beta_166_, v_alpha_167_, v___x_209_, v___x_212_, v___x_218_, v___x_223_, v___x_229_);
return v___x_230_;
}
}
default: 
{
lean_object* v_ids_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v_nil_237_; lean_object* v_cons_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec_ref(v___x_164_);
lean_dec_ref(v___x_163_);
v_ids_234_ = lean_ctor_get(v_action_165_, 0);
lean_inc_ref(v_ids_234_);
lean_dec_ref_known(v_action_165_, 1);
v___x_235_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__63, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__63_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__63);
v___x_236_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__24);
v_nil_237_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__28);
v_cons_238_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0___closed__32);
v___x_239_ = lean_array_to_list(v_ids_234_);
v___x_240_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_box(0), v___x_162_, v_nil_237_, v_cons_238_, v___x_239_);
v___x_241_ = l_Lean_mkAppB(v___x_236_, v_alpha_167_, v___x_240_);
v___x_242_ = l_Lean_mkApp3(v___x_235_, v_beta_166_, v_alpha_167_, v___x_241_);
return v___x_242_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__0(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = l_Lean_instToExprNat;
v___x_244_ = l_Lean_instToLevel;
v___x_245_ = l_Lean_instToExprArrayOfToLevel___redArg(v___x_244_, v___x_243_);
return v___x_245_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__1(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_246_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__0);
v___x_247_ = l_Lean_instToExprNat;
v___x_248_ = l_Lean_instToLevel;
v___x_249_ = l_Lean_instToExprProdOfToLevel___redArg(v___x_248_, v___x_248_, v___x_247_, v___x_246_);
return v___x_249_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__2(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___f_253_; 
v___x_250_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__1);
v___x_251_ = l_Lean_instToExprInt;
v___x_252_ = l_Lean_instToExprNat;
v___f_253_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___lam__0), 4, 3);
lean_closure_set(v___f_253_, 0, v___x_252_);
lean_closure_set(v___f_253_, 1, v___x_251_);
lean_closure_set(v___f_253_, 2, v___x_250_);
return v___f_253_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__5(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_261_ = lean_box(0);
v___x_262_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__4));
v___x_263_ = l_Lean_mkConst(v___x_262_, v___x_261_);
return v___x_263_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__6(void){
_start:
{
lean_object* v___x_264_; lean_object* v___f_265_; lean_object* v___x_266_; 
v___x_264_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__5, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__5_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__5);
v___f_265_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__2);
v___x_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_266_, 0, v___f_265_);
lean_ctor_set(v___x_266_, 1, v___x_264_);
return v___x_266_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction(void){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction___closed__6);
return v___x_267_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = lean_unsigned_to_nat(32u);
v___x_269_ = lean_mk_empty_array_with_capacity(v___x_268_);
v___x_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_271_ = ((size_t)5ULL);
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = lean_unsigned_to_nat(32u);
v___x_274_ = lean_mk_empty_array_with_capacity(v___x_273_);
v___x_275_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__0);
v___x_276_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_274_);
lean_ctor_set(v___x_276_, 2, v___x_272_);
lean_ctor_set(v___x_276_, 3, v___x_272_);
lean_ctor_set_usize(v___x_276_, 4, v___x_271_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg(lean_object* v___y_277_){
_start:
{
lean_object* v___x_279_; lean_object* v_traceState_280_; lean_object* v_traces_281_; lean_object* v___x_282_; lean_object* v_traceState_283_; lean_object* v_env_284_; lean_object* v_nextMacroScope_285_; lean_object* v_ngen_286_; lean_object* v_auxDeclNGen_287_; lean_object* v_cache_288_; lean_object* v_messages_289_; lean_object* v_infoState_290_; lean_object* v_snapshotTasks_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_310_; 
v___x_279_ = lean_st_ref_get(v___y_277_);
v_traceState_280_ = lean_ctor_get(v___x_279_, 4);
lean_inc_ref(v_traceState_280_);
lean_dec(v___x_279_);
v_traces_281_ = lean_ctor_get(v_traceState_280_, 0);
lean_inc_ref(v_traces_281_);
lean_dec_ref(v_traceState_280_);
v___x_282_ = lean_st_ref_take(v___y_277_);
v_traceState_283_ = lean_ctor_get(v___x_282_, 4);
v_env_284_ = lean_ctor_get(v___x_282_, 0);
v_nextMacroScope_285_ = lean_ctor_get(v___x_282_, 1);
v_ngen_286_ = lean_ctor_get(v___x_282_, 2);
v_auxDeclNGen_287_ = lean_ctor_get(v___x_282_, 3);
v_cache_288_ = lean_ctor_get(v___x_282_, 5);
v_messages_289_ = lean_ctor_get(v___x_282_, 6);
v_infoState_290_ = lean_ctor_get(v___x_282_, 7);
v_snapshotTasks_291_ = lean_ctor_get(v___x_282_, 8);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_310_ == 0)
{
v___x_293_ = v___x_282_;
v_isShared_294_ = v_isSharedCheck_310_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_snapshotTasks_291_);
lean_inc(v_infoState_290_);
lean_inc(v_messages_289_);
lean_inc(v_cache_288_);
lean_inc(v_traceState_283_);
lean_inc(v_auxDeclNGen_287_);
lean_inc(v_ngen_286_);
lean_inc(v_nextMacroScope_285_);
lean_inc(v_env_284_);
lean_dec(v___x_282_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_310_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
uint64_t v_tid_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_308_; 
v_tid_295_ = lean_ctor_get_uint64(v_traceState_283_, sizeof(void*)*1);
v_isSharedCheck_308_ = !lean_is_exclusive(v_traceState_283_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v_traceState_283_, 0);
lean_dec(v_unused_309_);
v___x_297_ = v_traceState_283_;
v_isShared_298_ = v_isSharedCheck_308_;
goto v_resetjp_296_;
}
else
{
lean_dec(v_traceState_283_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_308_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___closed__1);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_299_);
v___x_301_ = v___x_297_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_299_);
lean_ctor_set_uint64(v_reuseFailAlloc_307_, sizeof(void*)*1, v_tid_295_);
v___x_301_ = v_reuseFailAlloc_307_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_303_; 
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 4, v___x_301_);
v___x_303_ = v___x_293_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_env_284_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v_nextMacroScope_285_);
lean_ctor_set(v_reuseFailAlloc_306_, 2, v_ngen_286_);
lean_ctor_set(v_reuseFailAlloc_306_, 3, v_auxDeclNGen_287_);
lean_ctor_set(v_reuseFailAlloc_306_, 4, v___x_301_);
lean_ctor_set(v_reuseFailAlloc_306_, 5, v_cache_288_);
lean_ctor_set(v_reuseFailAlloc_306_, 6, v_messages_289_);
lean_ctor_set(v_reuseFailAlloc_306_, 7, v_infoState_290_);
lean_ctor_set(v_reuseFailAlloc_306_, 8, v_snapshotTasks_291_);
v___x_303_ = v_reuseFailAlloc_306_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_st_ref_put(v___y_277_, v___x_303_);
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v_traces_281_);
return v___x_305_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg___boxed(lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg(v___y_311_);
lean_dec(v___y_311_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1(lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg(v___y_315_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___boxed(lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1(v___y_318_, v___y_319_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
return v_res_321_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(lean_object* v_opts_322_, lean_object* v_opt_323_){
_start:
{
lean_object* v_name_324_; lean_object* v_defValue_325_; lean_object* v_map_326_; lean_object* v___x_327_; 
v_name_324_ = lean_ctor_get(v_opt_323_, 0);
v_defValue_325_ = lean_ctor_get(v_opt_323_, 1);
v_map_326_ = lean_ctor_get(v_opts_322_, 0);
v___x_327_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_326_, v_name_324_);
if (lean_obj_tag(v___x_327_) == 0)
{
uint8_t v___x_328_; 
v___x_328_ = lean_unbox(v_defValue_325_);
return v___x_328_;
}
else
{
lean_object* v_val_329_; 
v_val_329_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_val_329_);
lean_dec_ref_known(v___x_327_, 1);
if (lean_obj_tag(v_val_329_) == 1)
{
uint8_t v_v_330_; 
v_v_330_ = lean_ctor_get_uint8(v_val_329_, 0);
lean_dec_ref_known(v_val_329_, 0);
return v_v_330_;
}
else
{
uint8_t v___x_331_; 
lean_dec(v_val_329_);
v___x_331_ = lean_unbox(v_defValue_325_);
return v___x_331_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2___boxed(lean_object* v_opts_332_, lean_object* v_opt_333_){
_start:
{
uint8_t v_res_334_; lean_object* v_r_335_; 
v_res_334_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_opts_332_, v_opt_333_);
lean_dec_ref(v_opt_333_);
lean_dec_ref(v_opts_332_);
v_r_335_ = lean_box(v_res_334_);
return v_r_335_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg(lean_object* v_e_336_){
_start:
{
if (lean_obj_tag(v_e_336_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_346_; 
v_a_338_ = lean_ctor_get(v_e_336_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v_e_336_);
if (v_isSharedCheck_346_ == 0)
{
v___x_340_ = v_e_336_;
v_isShared_341_ = v_isSharedCheck_346_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v_e_336_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_346_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_342_ = lean_mk_io_user_error(v_a_338_);
if (v_isShared_341_ == 0)
{
lean_ctor_set_tag(v___x_340_, 1);
lean_ctor_set(v___x_340_, 0, v___x_342_);
v___x_344_ = v___x_340_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_342_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
v_a_347_ = lean_ctor_get(v_e_336_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v_e_336_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v_e_336_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v_e_336_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
lean_ctor_set_tag(v___x_349_, 0);
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg___boxed(lean_object* v_e_355_, lean_object* v_a_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg(v_e_355_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4(lean_object* v_00_u03b1_358_, lean_object* v_e_359_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg(v_e_359_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___boxed(lean_object* v_00_u03b1_362_, lean_object* v_e_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4(v_00_u03b1_362_, v_e_363_);
return v_res_365_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__2(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__1));
v___x_370_ = l_Lean_MessageData_ofFormat(v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0(lean_object* v_x_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__2, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___closed__2);
v___x_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0___boxed(lean_object* v_x_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__0(v_x_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec_ref(v_x_377_);
return v_res_381_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__2(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__1));
v___x_386_ = l_Lean_MessageData_ofFormat(v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1(lean_object* v_x_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__2, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___closed__2);
v___x_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1___boxed(lean_object* v_x_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__1(v_x_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec_ref(v_x_393_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__2(lean_object* v_a_398_, lean_object* v_x_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Std_Tactic_BVDecide_LRAT_parseLRATProof(v_a_398_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__3(lean_object* v_a_401_, lean_object* v_x_402_){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = l_Lean_Meta_Tactic_BVDecide_LRAT_trim(v_a_401_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__3___boxed(lean_object* v_a_404_, lean_object* v_x_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__3(v_a_404_, v_x_405_);
lean_dec_ref(v_a_404_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(lean_object* v_x_407_){
_start:
{
if (lean_obj_tag(v_x_407_) == 0)
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
v_a_409_ = lean_ctor_get(v_x_407_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v_x_407_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v_x_407_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v_x_407_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 1);
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v_x_407_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v_x_407_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v_x_407_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v_x_407_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
lean_ctor_set_tag(v___x_419_, 0);
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
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
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg___boxed(lean_object* v_x_425_, lean_object* v___y_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_x_425_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4_spec__6(size_t v_sz_428_, size_t v_i_429_, lean_object* v_bs_430_){
_start:
{
uint8_t v___x_431_; 
v___x_431_ = lean_usize_dec_lt(v_i_429_, v_sz_428_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
v___x_432_ = l_unsafeCast___redArg(v_bs_430_);
lean_dec_ref(v_bs_430_);
return v___x_432_;
}
else
{
lean_object* v_v_433_; lean_object* v___x_434_; lean_object* v_msg_435_; lean_object* v___x_436_; lean_object* v_bs_x27_437_; size_t v___x_438_; size_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v_v_433_ = lean_array_uget_borrowed(v_bs_430_, v_i_429_);
v___x_434_ = l_unsafeCast___redArg(v_v_433_);
v_msg_435_ = lean_ctor_get(v___x_434_, 1);
lean_inc_ref(v_msg_435_);
lean_dec(v___x_434_);
v___x_436_ = lean_unsigned_to_nat(0u);
v_bs_x27_437_ = lean_array_uset(v_bs_430_, v_i_429_, v___x_436_);
v___x_438_ = ((size_t)1ULL);
v___x_439_ = lean_usize_add(v_i_429_, v___x_438_);
v___x_440_ = l_unsafeCast___redArg(v_msg_435_);
lean_dec_ref(v_msg_435_);
v___x_441_ = lean_array_uset(v_bs_x27_437_, v_i_429_, v___x_440_);
v_i_429_ = v___x_439_;
v_bs_430_ = v___x_441_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4_spec__6___boxed(lean_object* v_sz_443_, lean_object* v_i_444_, lean_object* v_bs_445_){
_start:
{
size_t v_sz_boxed_446_; size_t v_i_boxed_447_; lean_object* v_res_448_; 
v_sz_boxed_446_ = lean_unbox_usize(v_sz_443_);
lean_dec(v_sz_443_);
v_i_boxed_447_ = lean_unbox_usize(v_i_444_);
lean_dec(v_i_444_);
v_res_448_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4_spec__6(v_sz_boxed_446_, v_i_boxed_447_, v_bs_445_);
return v_res_448_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_449_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__0);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_452_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__1);
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
lean_ctor_set(v___x_454_, 2, v___x_453_);
lean_ctor_set(v___x_454_, 3, v___x_453_);
lean_ctor_set(v___x_454_, 4, v___x_452_);
lean_ctor_set(v___x_454_, 5, v___x_452_);
lean_ctor_set(v___x_454_, 6, v___x_452_);
lean_ctor_set(v___x_454_, 7, v___x_452_);
lean_ctor_set(v___x_454_, 8, v___x_452_);
lean_ctor_set(v___x_454_, 9, v___x_452_);
lean_ctor_set(v___x_454_, 10, v___x_452_);
return v___x_454_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_455_ = lean_unsigned_to_nat(32u);
v___x_456_ = lean_mk_empty_array_with_capacity(v___x_455_);
v___x_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_458_ = ((size_t)5ULL);
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = lean_unsigned_to_nat(32u);
v___x_461_ = lean_mk_empty_array_with_capacity(v___x_460_);
v___x_462_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__3);
v___x_463_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_463_, 0, v___x_462_);
lean_ctor_set(v___x_463_, 1, v___x_461_);
lean_ctor_set(v___x_463_, 2, v___x_459_);
lean_ctor_set(v___x_463_, 3, v___x_459_);
lean_ctor_set_usize(v___x_463_, 4, v___x_458_);
return v___x_463_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_464_ = lean_box(1);
v___x_465_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__4);
v___x_466_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__1);
v___x_467_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
lean_ctor_set(v___x_467_, 1, v___x_465_);
lean_ctor_set(v___x_467_, 2, v___x_464_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0(lean_object* v_msgData_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v___x_472_; lean_object* v_toCold_473_; lean_object* v_env_474_; lean_object* v_options_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_472_ = lean_st_ref_get(v___y_470_);
v_toCold_473_ = lean_ctor_get(v___y_469_, 0);
v_env_474_ = lean_ctor_get(v___x_472_, 0);
lean_inc_ref(v_env_474_);
lean_dec(v___x_472_);
v_options_475_ = lean_ctor_get(v_toCold_473_, 2);
v___x_476_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__2);
v___x_477_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_475_);
v___x_478_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_478_, 0, v_env_474_);
lean_ctor_set(v___x_478_, 1, v___x_476_);
lean_ctor_set(v___x_478_, 2, v___x_477_);
lean_ctor_set(v___x_478_, 3, v_options_475_);
v___x_479_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
lean_ctor_set(v___x_479_, 1, v_msgData_468_);
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0___boxed(lean_object* v_msgData_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0(v_msgData_481_, v___y_482_, v___y_483_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4(lean_object* v_oldTraces_486_, lean_object* v_data_487_, lean_object* v_ref_488_, lean_object* v_msg_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
lean_object* v_toCold_493_; lean_object* v_currRecDepth_494_; lean_object* v_ref_495_; uint8_t v_diag_496_; uint8_t v_suppressElabErrors_497_; lean_object* v_ref_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v_traceState_501_; lean_object* v_traces_502_; lean_object* v___x_503_; size_t v_sz_504_; size_t v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v_msg_509_; lean_object* v___x_510_; lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_548_; 
v_toCold_493_ = lean_ctor_get(v___y_490_, 0);
v_currRecDepth_494_ = lean_ctor_get(v___y_490_, 1);
v_ref_495_ = lean_ctor_get(v___y_490_, 2);
v_diag_496_ = lean_ctor_get_uint8(v___y_490_, sizeof(void*)*3);
v_suppressElabErrors_497_ = lean_ctor_get_uint8(v___y_490_, sizeof(void*)*3 + 1);
v_ref_498_ = l_Lean_replaceRef(v_ref_488_, v_ref_495_);
lean_inc(v_currRecDepth_494_);
lean_inc_ref(v_toCold_493_);
v___x_499_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_499_, 0, v_toCold_493_);
lean_ctor_set(v___x_499_, 1, v_currRecDepth_494_);
lean_ctor_set(v___x_499_, 2, v_ref_498_);
lean_ctor_set_uint8(v___x_499_, sizeof(void*)*3, v_diag_496_);
lean_ctor_set_uint8(v___x_499_, sizeof(void*)*3 + 1, v_suppressElabErrors_497_);
v___x_500_ = lean_st_ref_get(v___y_491_);
v_traceState_501_ = lean_ctor_get(v___x_500_, 4);
lean_inc_ref(v_traceState_501_);
lean_dec(v___x_500_);
v_traces_502_ = lean_ctor_get(v_traceState_501_, 0);
lean_inc_ref(v_traces_502_);
lean_dec_ref(v_traceState_501_);
v___x_503_ = l_Lean_PersistentArray_toArray___redArg(v_traces_502_);
lean_dec_ref(v_traces_502_);
v_sz_504_ = lean_array_size(v___x_503_);
v___x_505_ = ((size_t)0ULL);
v___x_506_ = l_unsafeCast___redArg(v___x_503_);
lean_dec_ref(v___x_503_);
v___x_507_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4_spec__6(v_sz_504_, v___x_505_, v___x_506_);
v___x_508_ = l_unsafeCast___redArg(v___x_507_);
lean_dec_ref(v___x_507_);
v_msg_509_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_509_, 0, v_data_487_);
lean_ctor_set(v_msg_509_, 1, v_msg_489_);
lean_ctor_set(v_msg_509_, 2, v___x_508_);
v___x_510_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0(v_msg_509_, v___x_499_, v___y_491_);
lean_dec_ref_known(v___x_499_, 3);
v_a_511_ = lean_ctor_get(v___x_510_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_548_ == 0)
{
v___x_513_ = v___x_510_;
v_isShared_514_ = v_isSharedCheck_548_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_510_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_548_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_515_; lean_object* v_traceState_516_; lean_object* v_env_517_; lean_object* v_nextMacroScope_518_; lean_object* v_ngen_519_; lean_object* v_auxDeclNGen_520_; lean_object* v_cache_521_; lean_object* v_messages_522_; lean_object* v_infoState_523_; lean_object* v_snapshotTasks_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_547_; 
v___x_515_ = lean_st_ref_take(v___y_491_);
v_traceState_516_ = lean_ctor_get(v___x_515_, 4);
v_env_517_ = lean_ctor_get(v___x_515_, 0);
v_nextMacroScope_518_ = lean_ctor_get(v___x_515_, 1);
v_ngen_519_ = lean_ctor_get(v___x_515_, 2);
v_auxDeclNGen_520_ = lean_ctor_get(v___x_515_, 3);
v_cache_521_ = lean_ctor_get(v___x_515_, 5);
v_messages_522_ = lean_ctor_get(v___x_515_, 6);
v_infoState_523_ = lean_ctor_get(v___x_515_, 7);
v_snapshotTasks_524_ = lean_ctor_get(v___x_515_, 8);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_547_ == 0)
{
v___x_526_ = v___x_515_;
v_isShared_527_ = v_isSharedCheck_547_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_snapshotTasks_524_);
lean_inc(v_infoState_523_);
lean_inc(v_messages_522_);
lean_inc(v_cache_521_);
lean_inc(v_traceState_516_);
lean_inc(v_auxDeclNGen_520_);
lean_inc(v_ngen_519_);
lean_inc(v_nextMacroScope_518_);
lean_inc(v_env_517_);
lean_dec(v___x_515_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_547_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
uint64_t v_tid_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_545_; 
v_tid_528_ = lean_ctor_get_uint64(v_traceState_516_, sizeof(void*)*1);
v_isSharedCheck_545_ = !lean_is_exclusive(v_traceState_516_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; 
v_unused_546_ = lean_ctor_get(v_traceState_516_, 0);
lean_dec(v_unused_546_);
v___x_530_ = v_traceState_516_;
v_isShared_531_ = v_isSharedCheck_545_;
goto v_resetjp_529_;
}
else
{
lean_dec(v_traceState_516_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_545_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_532_ = lean_box(0);
v___x_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_533_, 0, v_ref_488_);
lean_ctor_set(v___x_533_, 1, v_a_511_);
v___x_534_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_486_, v___x_533_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 0, v___x_534_);
v___x_536_ = v___x_530_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_534_);
lean_ctor_set_uint64(v_reuseFailAlloc_544_, sizeof(void*)*1, v_tid_528_);
v___x_536_ = v_reuseFailAlloc_544_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
lean_object* v___x_538_; 
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 4, v___x_536_);
v___x_538_ = v___x_526_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_env_517_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_nextMacroScope_518_);
lean_ctor_set(v_reuseFailAlloc_543_, 2, v_ngen_519_);
lean_ctor_set(v_reuseFailAlloc_543_, 3, v_auxDeclNGen_520_);
lean_ctor_set(v_reuseFailAlloc_543_, 4, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_543_, 5, v_cache_521_);
lean_ctor_set(v_reuseFailAlloc_543_, 6, v_messages_522_);
lean_ctor_set(v_reuseFailAlloc_543_, 7, v_infoState_523_);
lean_ctor_set(v_reuseFailAlloc_543_, 8, v_snapshotTasks_524_);
v___x_538_ = v_reuseFailAlloc_543_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_539_ = lean_st_ref_put(v___y_491_, v___x_538_);
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 0, v___x_532_);
v___x_541_ = v___x_513_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v___x_532_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4___boxed(lean_object* v_oldTraces_549_, lean_object* v_data_550_, lean_object* v_ref_551_, lean_object* v_msg_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4(v_oldTraces_549_, v_data_550_, v_ref_551_, v_msg_552_, v___y_553_, v___y_554_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
return v_res_556_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__6(lean_object* v_e_557_){
_start:
{
if (lean_obj_tag(v_e_557_) == 0)
{
uint8_t v___x_558_; 
v___x_558_ = 2;
return v___x_558_;
}
else
{
uint8_t v___x_559_; 
v___x_559_ = 0;
return v___x_559_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__6___boxed(lean_object* v_e_560_){
_start:
{
uint8_t v_res_561_; lean_object* v_r_562_; 
v_res_561_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__6(v_e_560_);
lean_dec_ref(v_e_560_);
v_r_562_ = lean_box(v_res_561_);
return v_r_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(lean_object* v_opts_563_, lean_object* v_opt_564_){
_start:
{
lean_object* v_name_565_; lean_object* v_defValue_566_; lean_object* v_map_567_; lean_object* v___x_568_; 
v_name_565_ = lean_ctor_get(v_opt_564_, 0);
v_defValue_566_ = lean_ctor_get(v_opt_564_, 1);
v_map_567_ = lean_ctor_get(v_opts_563_, 0);
v___x_568_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_567_, v_name_565_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_inc(v_defValue_566_);
return v_defValue_566_;
}
else
{
lean_object* v_val_569_; 
v_val_569_ = lean_ctor_get(v___x_568_, 0);
lean_inc(v_val_569_);
lean_dec_ref_known(v___x_568_, 1);
if (lean_obj_tag(v_val_569_) == 3)
{
lean_object* v_v_570_; 
v_v_570_ = lean_ctor_get(v_val_569_, 0);
lean_inc(v_v_570_);
lean_dec_ref_known(v_val_569_, 1);
return v_v_570_;
}
else
{
lean_dec(v_val_569_);
lean_inc(v_defValue_566_);
return v_defValue_566_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7___boxed(lean_object* v_opts_571_, lean_object* v_opt_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(v_opts_571_, v_opt_572_);
lean_dec_ref(v_opt_572_);
lean_dec_ref(v_opts_571_);
return v_res_573_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0(void){
_start:
{
lean_object* v___x_574_; double v___x_575_; 
v___x_574_ = lean_unsigned_to_nat(0u);
v___x_575_ = lean_float_of_nat(v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__1));
v___x_578_ = l_Lean_stringToMessageData(v___x_577_);
return v___x_578_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3(void){
_start:
{
lean_object* v___x_579_; double v___x_580_; 
v___x_579_ = lean_unsigned_to_nat(1000u);
v___x_580_ = lean_float_of_nat(v___x_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3(lean_object* v_cls_581_, uint8_t v_collapsed_582_, lean_object* v_tag_583_, lean_object* v_opts_584_, uint8_t v_clsEnabled_585_, lean_object* v_oldTraces_586_, lean_object* v_msg_587_, lean_object* v_resStartStop_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v_fst_592_; lean_object* v_snd_593_; lean_object* v___y_595_; lean_object* v___y_596_; lean_object* v_data_597_; lean_object* v_fst_608_; lean_object* v_snd_609_; lean_object* v___x_610_; uint8_t v___x_611_; lean_object* v___y_613_; lean_object* v_a_614_; uint8_t v___y_629_; double v___y_660_; 
v_fst_592_ = lean_ctor_get(v_resStartStop_588_, 0);
lean_inc(v_fst_592_);
v_snd_593_ = lean_ctor_get(v_resStartStop_588_, 1);
lean_inc(v_snd_593_);
lean_dec_ref(v_resStartStop_588_);
v_fst_608_ = lean_ctor_get(v_snd_593_, 0);
lean_inc(v_fst_608_);
v_snd_609_ = lean_ctor_get(v_snd_593_, 1);
lean_inc(v_snd_609_);
lean_dec(v_snd_593_);
v___x_610_ = l_Lean_trace_profiler;
v___x_611_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_opts_584_, v___x_610_);
if (v___x_611_ == 0)
{
v___y_629_ = v___x_611_;
goto v___jp_628_;
}
else
{
lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_665_ = l_Lean_trace_profiler_useHeartbeats;
v___x_666_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_opts_584_, v___x_665_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; double v___x_669_; double v___x_670_; double v___x_671_; 
v___x_667_ = l_Lean_trace_profiler_threshold;
v___x_668_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(v_opts_584_, v___x_667_);
v___x_669_ = lean_float_of_nat(v___x_668_);
v___x_670_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3);
v___x_671_ = lean_float_div(v___x_669_, v___x_670_);
v___y_660_ = v___x_671_;
goto v___jp_659_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; double v___x_674_; 
v___x_672_ = l_Lean_trace_profiler_threshold;
v___x_673_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(v_opts_584_, v___x_672_);
v___x_674_ = lean_float_of_nat(v___x_673_);
v___y_660_ = v___x_674_;
goto v___jp_659_;
}
}
v___jp_594_:
{
lean_object* v___x_598_; 
lean_inc(v___y_595_);
v___x_598_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4(v_oldTraces_586_, v_data_597_, v___y_595_, v___y_596_, v___y_589_, v___y_590_);
if (lean_obj_tag(v___x_598_) == 0)
{
lean_object* v___x_599_; 
lean_dec_ref_known(v___x_598_, 1);
v___x_599_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_fst_592_);
return v___x_599_;
}
else
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
lean_dec(v_fst_592_);
v_a_600_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_598_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_598_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
v___jp_612_:
{
uint8_t v_result_615_; lean_object* v___x_616_; lean_object* v___x_617_; double v___x_618_; lean_object* v_data_619_; 
v_result_615_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__6(v_fst_592_);
v___x_616_ = lean_box(v_result_615_);
v___x_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
v___x_618_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0);
lean_inc_ref(v_tag_583_);
lean_inc_ref(v___x_617_);
lean_inc(v_cls_581_);
v_data_619_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_619_, 0, v_cls_581_);
lean_ctor_set(v_data_619_, 1, v___x_617_);
lean_ctor_set(v_data_619_, 2, v_tag_583_);
lean_ctor_set_float(v_data_619_, sizeof(void*)*3, v___x_618_);
lean_ctor_set_float(v_data_619_, sizeof(void*)*3 + 8, v___x_618_);
lean_ctor_set_uint8(v_data_619_, sizeof(void*)*3 + 16, v_collapsed_582_);
if (v___x_611_ == 0)
{
lean_dec_ref_known(v___x_617_, 1);
lean_dec(v_snd_609_);
lean_dec(v_fst_608_);
lean_dec_ref(v_tag_583_);
lean_dec(v_cls_581_);
v___y_595_ = v___y_613_;
v___y_596_ = v_a_614_;
v_data_597_ = v_data_619_;
goto v___jp_594_;
}
else
{
lean_object* v_data_620_; double v___x_621_; double v___x_622_; 
lean_dec_ref_known(v_data_619_, 3);
v_data_620_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_620_, 0, v_cls_581_);
lean_ctor_set(v_data_620_, 1, v___x_617_);
lean_ctor_set(v_data_620_, 2, v_tag_583_);
v___x_621_ = lean_unbox_float(v_fst_608_);
lean_dec(v_fst_608_);
lean_ctor_set_float(v_data_620_, sizeof(void*)*3, v___x_621_);
v___x_622_ = lean_unbox_float(v_snd_609_);
lean_dec(v_snd_609_);
lean_ctor_set_float(v_data_620_, sizeof(void*)*3 + 8, v___x_622_);
lean_ctor_set_uint8(v_data_620_, sizeof(void*)*3 + 16, v_collapsed_582_);
v___y_595_ = v___y_613_;
v___y_596_ = v_a_614_;
v_data_597_ = v_data_620_;
goto v___jp_594_;
}
}
v___jp_623_:
{
lean_object* v_ref_624_; lean_object* v___x_625_; 
v_ref_624_ = lean_ctor_get(v___y_589_, 2);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v_fst_592_);
v___x_625_ = lean_apply_4(v_msg_587_, v_fst_592_, v___y_589_, v___y_590_, lean_box(0));
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_626_; 
v_a_626_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_a_626_);
lean_dec_ref_known(v___x_625_, 1);
v___y_613_ = v_ref_624_;
v_a_614_ = v_a_626_;
goto v___jp_612_;
}
else
{
lean_object* v___x_627_; 
lean_dec_ref_known(v___x_625_, 1);
v___x_627_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2);
v___y_613_ = v_ref_624_;
v_a_614_ = v___x_627_;
goto v___jp_612_;
}
}
v___jp_628_:
{
if (v_clsEnabled_585_ == 0)
{
if (v___y_629_ == 0)
{
lean_object* v___x_630_; lean_object* v_traceState_631_; lean_object* v_env_632_; lean_object* v_nextMacroScope_633_; lean_object* v_ngen_634_; lean_object* v_auxDeclNGen_635_; lean_object* v_cache_636_; lean_object* v_messages_637_; lean_object* v_infoState_638_; lean_object* v_snapshotTasks_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_658_; 
lean_dec(v_snd_609_);
lean_dec(v_fst_608_);
lean_dec_ref(v_msg_587_);
lean_dec_ref(v_tag_583_);
lean_dec(v_cls_581_);
v___x_630_ = lean_st_ref_take(v___y_590_);
v_traceState_631_ = lean_ctor_get(v___x_630_, 4);
v_env_632_ = lean_ctor_get(v___x_630_, 0);
v_nextMacroScope_633_ = lean_ctor_get(v___x_630_, 1);
v_ngen_634_ = lean_ctor_get(v___x_630_, 2);
v_auxDeclNGen_635_ = lean_ctor_get(v___x_630_, 3);
v_cache_636_ = lean_ctor_get(v___x_630_, 5);
v_messages_637_ = lean_ctor_get(v___x_630_, 6);
v_infoState_638_ = lean_ctor_get(v___x_630_, 7);
v_snapshotTasks_639_ = lean_ctor_get(v___x_630_, 8);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_658_ == 0)
{
v___x_641_ = v___x_630_;
v_isShared_642_ = v_isSharedCheck_658_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_snapshotTasks_639_);
lean_inc(v_infoState_638_);
lean_inc(v_messages_637_);
lean_inc(v_cache_636_);
lean_inc(v_traceState_631_);
lean_inc(v_auxDeclNGen_635_);
lean_inc(v_ngen_634_);
lean_inc(v_nextMacroScope_633_);
lean_inc(v_env_632_);
lean_dec(v___x_630_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_658_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
uint64_t v_tid_643_; lean_object* v_traces_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_657_; 
v_tid_643_ = lean_ctor_get_uint64(v_traceState_631_, sizeof(void*)*1);
v_traces_644_ = lean_ctor_get(v_traceState_631_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v_traceState_631_);
if (v_isSharedCheck_657_ == 0)
{
v___x_646_ = v_traceState_631_;
v_isShared_647_ = v_isSharedCheck_657_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_traces_644_);
lean_dec(v_traceState_631_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_657_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_648_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_586_, v_traces_644_);
lean_dec_ref(v_traces_644_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v___x_648_);
v___x_650_ = v___x_646_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_648_);
lean_ctor_set_uint64(v_reuseFailAlloc_656_, sizeof(void*)*1, v_tid_643_);
v___x_650_ = v_reuseFailAlloc_656_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_652_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 4, v___x_650_);
v___x_652_ = v___x_641_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_env_632_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v_nextMacroScope_633_);
lean_ctor_set(v_reuseFailAlloc_655_, 2, v_ngen_634_);
lean_ctor_set(v_reuseFailAlloc_655_, 3, v_auxDeclNGen_635_);
lean_ctor_set(v_reuseFailAlloc_655_, 4, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_655_, 5, v_cache_636_);
lean_ctor_set(v_reuseFailAlloc_655_, 6, v_messages_637_);
lean_ctor_set(v_reuseFailAlloc_655_, 7, v_infoState_638_);
lean_ctor_set(v_reuseFailAlloc_655_, 8, v_snapshotTasks_639_);
v___x_652_ = v_reuseFailAlloc_655_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_st_ref_put(v___y_590_, v___x_652_);
v___x_654_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_fst_592_);
return v___x_654_;
}
}
}
}
}
else
{
goto v___jp_623_;
}
}
else
{
goto v___jp_623_;
}
}
v___jp_659_:
{
double v___x_661_; double v___x_662_; double v___x_663_; uint8_t v___x_664_; 
v___x_661_ = lean_unbox_float(v_snd_609_);
v___x_662_ = lean_unbox_float(v_fst_608_);
v___x_663_ = lean_float_sub(v___x_661_, v___x_662_);
v___x_664_ = lean_float_decLt(v___y_660_, v___x_663_);
v___y_629_ = v___x_664_;
goto v___jp_628_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___boxed(lean_object* v_cls_675_, lean_object* v_collapsed_676_, lean_object* v_tag_677_, lean_object* v_opts_678_, lean_object* v_clsEnabled_679_, lean_object* v_oldTraces_680_, lean_object* v_msg_681_, lean_object* v_resStartStop_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
uint8_t v_collapsed_boxed_686_; uint8_t v_clsEnabled_boxed_687_; lean_object* v_res_688_; 
v_collapsed_boxed_686_ = lean_unbox(v_collapsed_676_);
v_clsEnabled_boxed_687_ = lean_unbox(v_clsEnabled_679_);
v_res_688_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3(v_cls_675_, v_collapsed_boxed_686_, v_tag_677_, v_opts_678_, v_clsEnabled_boxed_687_, v_oldTraces_680_, v_msg_681_, v_resStartStop_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec_ref(v_opts_678_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg(lean_object* v_msg_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_ref_693_; lean_object* v___x_694_; lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_703_; 
v_ref_693_ = lean_ctor_get(v___y_690_, 2);
v___x_694_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0(v_msg_689_, v___y_690_, v___y_691_);
v_a_695_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_703_ == 0)
{
v___x_697_ = v___x_694_;
v_isShared_698_ = v_isSharedCheck_703_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_694_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_703_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_699_; lean_object* v___x_701_; 
lean_inc(v_ref_693_);
v___x_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_699_, 0, v_ref_693_);
lean_ctor_set(v___x_699_, 1, v_a_695_);
if (v_isShared_698_ == 0)
{
lean_ctor_set_tag(v___x_697_, 1);
lean_ctor_set(v___x_697_, 0, v___x_699_);
v___x_701_ = v___x_697_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg___boxed(lean_object* v_msg_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg(v_msg_704_, v___y_705_, v___y_706_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0(lean_object* v_cls_712_, lean_object* v_msg_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v_ref_717_; lean_object* v___x_718_; lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_763_; 
v_ref_717_ = lean_ctor_get(v___y_714_, 2);
v___x_718_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0_spec__0(v_msg_713_, v___y_714_, v___y_715_);
v_a_719_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_763_ == 0)
{
v___x_721_ = v___x_718_;
v_isShared_722_ = v_isSharedCheck_763_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_763_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_723_; lean_object* v_traceState_724_; lean_object* v_env_725_; lean_object* v_nextMacroScope_726_; lean_object* v_ngen_727_; lean_object* v_auxDeclNGen_728_; lean_object* v_cache_729_; lean_object* v_messages_730_; lean_object* v_infoState_731_; lean_object* v_snapshotTasks_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_762_; 
v___x_723_ = lean_st_ref_take(v___y_715_);
v_traceState_724_ = lean_ctor_get(v___x_723_, 4);
v_env_725_ = lean_ctor_get(v___x_723_, 0);
v_nextMacroScope_726_ = lean_ctor_get(v___x_723_, 1);
v_ngen_727_ = lean_ctor_get(v___x_723_, 2);
v_auxDeclNGen_728_ = lean_ctor_get(v___x_723_, 3);
v_cache_729_ = lean_ctor_get(v___x_723_, 5);
v_messages_730_ = lean_ctor_get(v___x_723_, 6);
v_infoState_731_ = lean_ctor_get(v___x_723_, 7);
v_snapshotTasks_732_ = lean_ctor_get(v___x_723_, 8);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_762_ == 0)
{
v___x_734_ = v___x_723_;
v_isShared_735_ = v_isSharedCheck_762_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_snapshotTasks_732_);
lean_inc(v_infoState_731_);
lean_inc(v_messages_730_);
lean_inc(v_cache_729_);
lean_inc(v_traceState_724_);
lean_inc(v_auxDeclNGen_728_);
lean_inc(v_ngen_727_);
lean_inc(v_nextMacroScope_726_);
lean_inc(v_env_725_);
lean_dec(v___x_723_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_762_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
uint64_t v_tid_736_; lean_object* v_traces_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_761_; 
v_tid_736_ = lean_ctor_get_uint64(v_traceState_724_, sizeof(void*)*1);
v_traces_737_ = lean_ctor_get(v_traceState_724_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v_traceState_724_);
if (v_isSharedCheck_761_ == 0)
{
v___x_739_ = v_traceState_724_;
v_isShared_740_ = v_isSharedCheck_761_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_traces_737_);
lean_dec(v_traceState_724_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_761_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_741_; lean_object* v___x_742_; double v___x_743_; uint8_t v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_752_; 
v___x_741_ = lean_box(0);
v___x_742_ = lean_box(0);
v___x_743_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0);
v___x_744_ = 0;
v___x_745_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__0));
v___x_746_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_746_, 0, v_cls_712_);
lean_ctor_set(v___x_746_, 1, v___x_742_);
lean_ctor_set(v___x_746_, 2, v___x_745_);
lean_ctor_set_float(v___x_746_, sizeof(void*)*3, v___x_743_);
lean_ctor_set_float(v___x_746_, sizeof(void*)*3 + 8, v___x_743_);
lean_ctor_set_uint8(v___x_746_, sizeof(void*)*3 + 16, v___x_744_);
v___x_747_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__1));
v___x_748_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set(v___x_748_, 1, v_a_719_);
lean_ctor_set(v___x_748_, 2, v___x_747_);
lean_inc(v_ref_717_);
v___x_749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_749_, 0, v_ref_717_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = l_Lean_PersistentArray_push___redArg(v_traces_737_, v___x_749_);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 0, v___x_750_);
v___x_752_ = v___x_739_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_750_);
lean_ctor_set_uint64(v_reuseFailAlloc_760_, sizeof(void*)*1, v_tid_736_);
v___x_752_ = v_reuseFailAlloc_760_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
lean_object* v___x_754_; 
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 4, v___x_752_);
v___x_754_ = v___x_734_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_env_725_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v_nextMacroScope_726_);
lean_ctor_set(v_reuseFailAlloc_759_, 2, v_ngen_727_);
lean_ctor_set(v_reuseFailAlloc_759_, 3, v_auxDeclNGen_728_);
lean_ctor_set(v_reuseFailAlloc_759_, 4, v___x_752_);
lean_ctor_set(v_reuseFailAlloc_759_, 5, v_cache_729_);
lean_ctor_set(v_reuseFailAlloc_759_, 6, v_messages_730_);
lean_ctor_set(v_reuseFailAlloc_759_, 7, v_infoState_731_);
lean_ctor_set(v_reuseFailAlloc_759_, 8, v_snapshotTasks_732_);
v___x_754_ = v_reuseFailAlloc_759_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
lean_object* v___x_755_; lean_object* v___x_757_; 
v___x_755_ = lean_st_ref_put(v___y_715_, v___x_754_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_741_);
v___x_757_ = v___x_721_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_741_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___boxed(lean_object* v_cls_764_, lean_object* v_msg_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0(v_cls_764_, v_msg_765_, v___y_766_, v___y_767_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
return v_res_769_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7(void){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_781_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4));
v___x_782_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__6));
v___x_783_ = l_Lean_Name_append(v___x_782_, v___x_781_);
return v___x_783_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10(void){
_start:
{
lean_object* v___x_786_; double v___x_787_; 
v___x_786_ = lean_unsigned_to_nat(1000000000u);
v___x_787_ = lean_float_of_nat(v___x_786_);
return v___x_787_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__12));
v___x_791_ = l_Lean_stringToMessageData(v___x_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load(lean_object* v_lratPath_792_, uint8_t v_trimProofs_793_, lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v_toCold_797_; lean_object* v_ref_798_; lean_object* v___f_799_; lean_object* v___f_800_; lean_object* v___x_801_; 
v_toCold_797_ = lean_ctor_get(v_a_794_, 0);
v_ref_798_ = lean_ctor_get(v_a_794_, 2);
v___f_799_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__0));
v___f_800_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__1));
v___x_801_ = l_IO_FS_readBinFile(v_lratPath_792_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_options_802_; lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_1236_; 
v_options_802_ = lean_ctor_get(v_toCold_797_, 2);
v_a_803_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_805_ = v___x_801_;
v_isShared_806_ = v_isSharedCheck_1236_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_801_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_1236_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v_inheritedTraceOptions_807_; uint8_t v_hasTrace_808_; lean_object* v___f_809_; lean_object* v___x_810_; lean_object* v_proof_812_; lean_object* v___y_813_; lean_object* v_options_814_; lean_object* v_inheritedTraceOptions_815_; lean_object* v___y_816_; lean_object* v_proof_848_; lean_object* v___y_849_; lean_object* v___y_850_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; uint8_t v___x_861_; lean_object* v___x_862_; lean_object* v___y_864_; uint8_t v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v_a_870_; lean_object* v___y_880_; lean_object* v___y_881_; uint8_t v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v_a_886_; lean_object* v___y_889_; uint8_t v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v_a_895_; lean_object* v___y_908_; lean_object* v___y_909_; uint8_t v___y_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v_a_914_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; uint8_t v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v_a_1074_; lean_object* v___y_1096_; 
v_inheritedTraceOptions_807_ = lean_ctor_get(v_toCold_797_, 11);
v_hasTrace_808_ = lean_ctor_get_uint8(v_options_802_, sizeof(void*)*1);
v___f_809_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__2), 2, 1);
lean_closure_set(v___f_809_, 0, v_a_803_);
v___x_810_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4));
v___x_861_ = 1;
v___x_862_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__0));
if (v_hasTrace_808_ == 0)
{
lean_object* v___x_1098_; 
v___x_1098_ = l_IO_lazyPure___redArg(v___f_809_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v___x_1098_, 1);
if (lean_obj_tag(v_a_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v_a_1100_ = lean_ctor_get(v_a_1099_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v_a_1099_, 1);
v___x_1101_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13);
v___x_1102_ = l_Lean_stringToMessageData(v_a_1100_);
v___x_1103_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1101_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg(v___x_1103_, v_a_794_, v_a_795_);
v___y_1096_ = v___x_1104_;
goto v___jp_1095_;
}
else
{
lean_object* v_a_1105_; 
v_a_1105_ = lean_ctor_get(v_a_1099_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v_a_1099_, 1);
v_a_1074_ = v_a_1105_;
goto v___jp_1073_;
}
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1117_; 
lean_del_object(v___x_805_);
v_a_1106_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1108_ = v___x_1098_;
v_isShared_1109_ = v_isSharedCheck_1117_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1098_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1117_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1115_; 
v___x_1110_ = lean_io_error_to_string(v_a_1106_);
v___x_1111_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1110_);
v___x_1112_ = l_Lean_MessageData_ofFormat(v___x_1111_);
lean_inc(v_ref_798_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v_ref_798_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1113_);
v___x_1115_ = v___x_1108_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
else
{
lean_object* v___x_1118_; uint8_t v___x_1119_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v_a_1123_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v_a_1138_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v_a_1143_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v_a_1148_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v_a_1160_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v_a_1165_; 
v___x_1118_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7);
v___x_1119_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_807_, v_options_802_, v___x_1118_);
if (v___x_1119_ == 0)
{
lean_object* v___x_1214_; uint8_t v___x_1215_; 
v___x_1214_ = l_Lean_trace_profiler;
v___x_1215_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_options_802_, v___x_1214_);
if (v___x_1215_ == 0)
{
lean_object* v___x_1216_; 
v___x_1216_ = l_IO_lazyPure___redArg(v___f_809_);
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; 
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_a_1217_);
lean_dec_ref_known(v___x_1216_, 1);
if (lean_obj_tag(v_a_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v_a_1218_ = lean_ctor_get(v_a_1217_, 0);
lean_inc(v_a_1218_);
lean_dec_ref_known(v_a_1217_, 1);
v___x_1219_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13);
v___x_1220_ = l_Lean_stringToMessageData(v_a_1218_);
v___x_1221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1219_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg(v___x_1221_, v_a_794_, v_a_795_);
v___y_1096_ = v___x_1222_;
goto v___jp_1095_;
}
else
{
lean_object* v_a_1223_; 
v_a_1223_ = lean_ctor_get(v_a_1217_, 0);
lean_inc(v_a_1223_);
lean_dec_ref_known(v_a_1217_, 1);
v_a_1074_ = v_a_1223_;
goto v___jp_1073_;
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1235_; 
lean_del_object(v___x_805_);
v_a_1224_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1226_ = v___x_1216_;
v_isShared_1227_ = v_isSharedCheck_1235_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1216_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1235_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1228_ = lean_io_error_to_string(v_a_1224_);
v___x_1229_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
v___x_1230_ = l_Lean_MessageData_ofFormat(v___x_1229_);
lean_inc(v_ref_798_);
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v_ref_798_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 0, v___x_1231_);
v___x_1233_ = v___x_1226_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1231_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
else
{
goto v___jp_1167_;
}
}
else
{
goto v___jp_1167_;
}
v___jp_1120_:
{
lean_object* v___x_1124_; double v___x_1125_; double v___x_1126_; double v___x_1127_; double v___x_1128_; double v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1124_ = lean_io_mono_nanos_now();
v___x_1125_ = lean_float_of_nat(v___y_1122_);
v___x_1126_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10);
v___x_1127_ = lean_float_div(v___x_1125_, v___x_1126_);
v___x_1128_ = lean_float_of_nat(v___x_1124_);
v___x_1129_ = lean_float_div(v___x_1128_, v___x_1126_);
v___x_1130_ = lean_box_float(v___x_1127_);
v___x_1131_ = lean_box_float(v___x_1129_);
v___x_1132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___x_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1133_, 0, v_a_1123_);
lean_ctor_set(v___x_1133_, 1, v___x_1132_);
v___x_1134_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3(v___x_810_, v___x_861_, v___x_862_, v_options_802_, v___x_1119_, v___y_1121_, v___f_800_, v___x_1133_, v_a_794_, v_a_795_);
v___y_1096_ = v___x_1134_;
goto v___jp_1095_;
}
v___jp_1135_:
{
lean_object* v___x_1139_; 
v___x_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1139_, 0, v_a_1138_);
v___y_1121_ = v___y_1136_;
v___y_1122_ = v___y_1137_;
v_a_1123_ = v___x_1139_;
goto v___jp_1120_;
}
v___jp_1140_:
{
lean_object* v___x_1144_; 
v___x_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1144_, 0, v_a_1143_);
v___y_1121_ = v___y_1141_;
v___y_1122_ = v___y_1142_;
v_a_1123_ = v___x_1144_;
goto v___jp_1120_;
}
v___jp_1145_:
{
lean_object* v___x_1149_; double v___x_1150_; double v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1149_ = lean_io_get_num_heartbeats();
v___x_1150_ = lean_float_of_nat(v___y_1147_);
v___x_1151_ = lean_float_of_nat(v___x_1149_);
v___x_1152_ = lean_box_float(v___x_1150_);
v___x_1153_ = lean_box_float(v___x_1151_);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1155_, 0, v_a_1148_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
v___x_1156_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3(v___x_810_, v___x_861_, v___x_862_, v_options_802_, v___x_1119_, v___y_1146_, v___f_800_, v___x_1155_, v_a_794_, v_a_795_);
v___y_1096_ = v___x_1156_;
goto v___jp_1095_;
}
v___jp_1157_:
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1161_, 0, v_a_1160_);
v___y_1146_ = v___y_1158_;
v___y_1147_ = v___y_1159_;
v_a_1148_ = v___x_1161_;
goto v___jp_1145_;
}
v___jp_1162_:
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1166_, 0, v_a_1165_);
v___y_1146_ = v___y_1163_;
v___y_1147_ = v___y_1164_;
v_a_1148_ = v___x_1166_;
goto v___jp_1145_;
}
v___jp_1167_:
{
lean_object* v___x_1168_; lean_object* v_a_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1168_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg(v_a_795_);
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_a_1169_);
lean_dec_ref(v___x_1168_);
v___x_1170_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1171_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_options_802_, v___x_1170_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = lean_io_mono_nanos_now();
v___x_1173_ = l_IO_lazyPure___redArg(v___f_809_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
lean_dec_ref_known(v___x_1173_, 1);
if (lean_obj_tag(v_a_1174_) == 0)
{
lean_object* v_a_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v_a_1180_; 
v_a_1175_ = lean_ctor_get(v_a_1174_, 0);
lean_inc(v_a_1175_);
lean_dec_ref_known(v_a_1174_, 1);
v___x_1176_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13);
v___x_1177_ = l_Lean_stringToMessageData(v_a_1175_);
v___x_1178_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1176_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg(v___x_1178_, v_a_794_, v_a_795_);
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
lean_inc(v_a_1180_);
lean_dec_ref(v___x_1179_);
v___y_1136_ = v_a_1169_;
v___y_1137_ = v___x_1172_;
v_a_1138_ = v_a_1180_;
goto v___jp_1135_;
}
else
{
lean_object* v_a_1181_; 
v_a_1181_ = lean_ctor_get(v_a_1174_, 0);
lean_inc(v_a_1181_);
lean_dec_ref_known(v_a_1174_, 1);
v___y_1141_ = v_a_1169_;
v___y_1142_ = v___x_1172_;
v_a_1143_ = v_a_1181_;
goto v___jp_1140_;
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1192_; 
v_a_1182_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1184_ = v___x_1173_;
v_isShared_1185_ = v_isSharedCheck_1192_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1173_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1192_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1186_ = lean_io_error_to_string(v_a_1182_);
if (v_isShared_1185_ == 0)
{
lean_ctor_set_tag(v___x_1184_, 3);
lean_ctor_set(v___x_1184_, 0, v___x_1186_);
v___x_1188_ = v___x_1184_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1186_);
v___x_1188_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = l_Lean_MessageData_ofFormat(v___x_1188_);
lean_inc(v_ref_798_);
v___x_1190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1190_, 0, v_ref_798_);
lean_ctor_set(v___x_1190_, 1, v___x_1189_);
v___y_1136_ = v_a_1169_;
v___y_1137_ = v___x_1172_;
v_a_1138_ = v___x_1190_;
goto v___jp_1135_;
}
}
}
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_io_get_num_heartbeats();
v___x_1194_ = l_IO_lazyPure___redArg(v___f_809_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; 
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1194_, 1);
if (lean_obj_tag(v_a_1195_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v_a_1201_; 
v_a_1196_ = lean_ctor_get(v_a_1195_, 0);
lean_inc(v_a_1196_);
lean_dec_ref_known(v_a_1195_, 1);
v___x_1197_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__13);
v___x_1198_ = l_Lean_stringToMessageData(v_a_1196_);
v___x_1199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1197_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg(v___x_1199_, v_a_794_, v_a_795_);
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
lean_inc(v_a_1201_);
lean_dec_ref(v___x_1200_);
v___y_1158_ = v_a_1169_;
v___y_1159_ = v___x_1193_;
v_a_1160_ = v_a_1201_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1202_; 
v_a_1202_ = lean_ctor_get(v_a_1195_, 0);
lean_inc(v_a_1202_);
lean_dec_ref_known(v_a_1195_, 1);
v___y_1163_ = v_a_1169_;
v___y_1164_ = v___x_1193_;
v_a_1165_ = v_a_1202_;
goto v___jp_1162_;
}
}
else
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1213_; 
v_a_1203_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1205_ = v___x_1194_;
v_isShared_1206_ = v_isSharedCheck_1213_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1194_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1213_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1207_ = lean_io_error_to_string(v_a_1203_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set_tag(v___x_1205_, 3);
lean_ctor_set(v___x_1205_, 0, v___x_1207_);
v___x_1209_ = v___x_1205_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = l_Lean_MessageData_ofFormat(v___x_1209_);
lean_inc(v_ref_798_);
v___x_1211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1211_, 0, v_ref_798_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
v___y_1158_ = v_a_1169_;
v___y_1159_ = v___x_1193_;
v_a_1160_ = v___x_1211_;
goto v___jp_1157_;
}
}
}
}
}
}
v___jp_811_:
{
lean_object* v___x_817_; uint8_t v___x_818_; 
v___x_817_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7);
v___x_818_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_815_, v_options_814_, v___x_817_);
if (v___x_818_ == 0)
{
lean_object* v___x_820_; 
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v_proof_812_);
v___x_820_ = v___x_805_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_proof_812_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
else
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
lean_del_object(v___x_805_);
v___x_822_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__8));
v___x_823_ = lean_array_get_size(v_proof_812_);
v___x_824_ = l_Nat_reprFast(v___x_823_);
v___x_825_ = lean_string_append(v___x_822_, v___x_824_);
lean_dec_ref(v___x_824_);
v___x_826_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__9));
v___x_827_ = lean_string_append(v___x_825_, v___x_826_);
v___x_828_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
v___x_829_ = l_Lean_MessageData_ofFormat(v___x_828_);
v___x_830_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0(v___x_810_, v___x_829_, v___y_813_, v___y_816_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; 
v_unused_838_ = lean_ctor_get(v___x_830_, 0);
lean_dec(v_unused_838_);
v___x_832_ = v___x_830_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_dec(v___x_830_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 0, v_proof_812_);
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_proof_812_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_dec_ref(v_proof_812_);
v_a_839_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_830_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_830_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
v___jp_847_:
{
lean_object* v_toCold_851_; lean_object* v_options_852_; uint8_t v_hasTrace_853_; 
v_toCold_851_ = lean_ctor_get(v___y_849_, 0);
v_options_852_ = lean_ctor_get(v_toCold_851_, 2);
v_hasTrace_853_ = lean_ctor_get_uint8(v_options_852_, sizeof(void*)*1);
if (v_hasTrace_853_ == 0)
{
lean_object* v___x_854_; 
lean_del_object(v___x_805_);
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v_proof_848_);
return v___x_854_;
}
else
{
lean_object* v_inheritedTraceOptions_855_; 
v_inheritedTraceOptions_855_ = lean_ctor_get(v_toCold_851_, 11);
v_proof_812_ = v_proof_848_;
v___y_813_ = v___y_849_;
v_options_814_ = v_options_852_;
v_inheritedTraceOptions_815_ = v_inheritedTraceOptions_855_;
v___y_816_ = v___y_850_;
goto v___jp_811_;
}
}
v___jp_856_:
{
if (lean_obj_tag(v___y_859_) == 0)
{
lean_object* v_a_860_; 
v_a_860_ = lean_ctor_get(v___y_859_, 0);
lean_inc(v_a_860_);
lean_dec_ref_known(v___y_859_, 1);
v_proof_848_ = v_a_860_;
v___y_849_ = v___y_858_;
v___y_850_ = v___y_857_;
goto v___jp_847_;
}
else
{
lean_del_object(v___x_805_);
return v___y_859_;
}
}
v___jp_863_:
{
lean_object* v___x_871_; double v___x_872_; double v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_871_ = lean_io_get_num_heartbeats();
v___x_872_ = lean_float_of_nat(v___y_869_);
v___x_873_ = lean_float_of_nat(v___x_871_);
v___x_874_ = lean_box_float(v___x_872_);
v___x_875_ = lean_box_float(v___x_873_);
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_874_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_877_, 0, v_a_870_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3(v___x_810_, v___x_861_, v___x_862_, v___y_866_, v___y_865_, v___y_868_, v___f_799_, v___x_877_, v___y_867_, v___y_864_);
v___y_857_ = v___y_864_;
v___y_858_ = v___y_867_;
v___y_859_ = v___x_878_;
goto v___jp_856_;
}
v___jp_879_:
{
lean_object* v___x_887_; 
v___x_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_887_, 0, v_a_886_);
v___y_864_ = v___y_880_;
v___y_865_ = v___y_882_;
v___y_866_ = v___y_881_;
v___y_867_ = v___y_883_;
v___y_868_ = v___y_885_;
v___y_869_ = v___y_884_;
v_a_870_ = v___x_887_;
goto v___jp_863_;
}
v___jp_888_:
{
lean_object* v___x_896_; double v___x_897_; double v___x_898_; double v___x_899_; double v___x_900_; double v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_896_ = lean_io_mono_nanos_now();
v___x_897_ = lean_float_of_nat(v___y_892_);
v___x_898_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10);
v___x_899_ = lean_float_div(v___x_897_, v___x_898_);
v___x_900_ = lean_float_of_nat(v___x_896_);
v___x_901_ = lean_float_div(v___x_900_, v___x_898_);
v___x_902_ = lean_box_float(v___x_899_);
v___x_903_ = lean_box_float(v___x_901_);
v___x_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_902_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v_a_895_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___x_906_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3(v___x_810_, v___x_861_, v___x_862_, v___y_891_, v___y_890_, v___y_894_, v___f_799_, v___x_905_, v___y_893_, v___y_889_);
v___y_857_ = v___y_889_;
v___y_858_ = v___y_893_;
v___y_859_ = v___x_906_;
goto v___jp_856_;
}
v___jp_907_:
{
lean_object* v___x_915_; 
v___x_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_915_, 0, v_a_914_);
v___y_889_ = v___y_908_;
v___y_890_ = v___y_910_;
v___y_891_ = v___y_909_;
v___y_892_ = v___y_911_;
v___y_893_ = v___y_912_;
v___y_894_ = v___y_913_;
v_a_895_ = v___x_915_;
goto v___jp_888_;
}
v___jp_916_:
{
lean_object* v___x_923_; lean_object* v_a_924_; lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_923_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg(v___y_917_);
v_a_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_a_924_);
lean_dec_ref(v___x_923_);
v___x_925_ = l_Lean_trace_profiler_useHeartbeats;
v___x_926_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v___y_921_, v___x_925_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = lean_io_mono_nanos_now();
v___x_928_ = l_IO_lazyPure___redArg(v___y_919_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; lean_object* v___x_930_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v___x_928_, 1);
v___x_930_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg(v_a_929_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set_tag(v___x_933_, 1);
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
v___y_889_ = v___y_917_;
v___y_890_ = v___y_920_;
v___y_891_ = v___y_921_;
v___y_892_ = v___x_927_;
v___y_893_ = v___y_922_;
v___y_894_ = v_a_924_;
v_a_895_ = v___x_936_;
goto v___jp_888_;
}
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_949_; 
v_a_939_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_949_ == 0)
{
v___x_941_ = v___x_930_;
v_isShared_942_ = v_isSharedCheck_949_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_930_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_949_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_943_ = lean_io_error_to_string(v_a_939_);
if (v_isShared_942_ == 0)
{
lean_ctor_set_tag(v___x_941_, 3);
lean_ctor_set(v___x_941_, 0, v___x_943_);
v___x_945_ = v___x_941_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_943_);
v___x_945_ = v_reuseFailAlloc_948_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = l_Lean_MessageData_ofFormat(v___x_945_);
lean_inc(v___y_918_);
v___x_947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_947_, 0, v___y_918_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___y_908_ = v___y_917_;
v___y_909_ = v___y_921_;
v___y_910_ = v___y_920_;
v___y_911_ = v___x_927_;
v___y_912_ = v___y_922_;
v___y_913_ = v_a_924_;
v_a_914_ = v___x_947_;
goto v___jp_907_;
}
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_960_; 
v_a_950_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_960_ == 0)
{
v___x_952_ = v___x_928_;
v_isShared_953_ = v_isSharedCheck_960_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_928_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_960_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_954_ = lean_io_error_to_string(v_a_950_);
if (v_isShared_953_ == 0)
{
lean_ctor_set_tag(v___x_952_, 3);
lean_ctor_set(v___x_952_, 0, v___x_954_);
v___x_956_ = v___x_952_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_954_);
v___x_956_ = v_reuseFailAlloc_959_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = l_Lean_MessageData_ofFormat(v___x_956_);
lean_inc(v___y_918_);
v___x_958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_958_, 0, v___y_918_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___y_908_ = v___y_917_;
v___y_909_ = v___y_921_;
v___y_910_ = v___y_920_;
v___y_911_ = v___x_927_;
v___y_912_ = v___y_922_;
v___y_913_ = v_a_924_;
v_a_914_ = v___x_958_;
goto v___jp_907_;
}
}
}
}
else
{
lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_961_ = lean_io_get_num_heartbeats();
v___x_962_ = l_IO_lazyPure___redArg(v___y_919_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_964_; 
v_a_963_ = lean_ctor_get(v___x_962_, 0);
lean_inc(v_a_963_);
lean_dec_ref_known(v___x_962_, 1);
v___x_964_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg(v_a_963_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_964_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_964_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
lean_ctor_set_tag(v___x_967_, 1);
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
v___y_864_ = v___y_917_;
v___y_865_ = v___y_920_;
v___y_866_ = v___y_921_;
v___y_867_ = v___y_922_;
v___y_868_ = v_a_924_;
v___y_869_ = v___x_961_;
v_a_870_ = v___x_970_;
goto v___jp_863_;
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_983_; 
v_a_973_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_983_ == 0)
{
v___x_975_ = v___x_964_;
v_isShared_976_ = v_isSharedCheck_983_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_964_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_983_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_977_; lean_object* v___x_979_; 
v___x_977_ = lean_io_error_to_string(v_a_973_);
if (v_isShared_976_ == 0)
{
lean_ctor_set_tag(v___x_975_, 3);
lean_ctor_set(v___x_975_, 0, v___x_977_);
v___x_979_ = v___x_975_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_977_);
v___x_979_ = v_reuseFailAlloc_982_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = l_Lean_MessageData_ofFormat(v___x_979_);
lean_inc(v___y_918_);
v___x_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_981_, 0, v___y_918_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___y_880_ = v___y_917_;
v___y_881_ = v___y_921_;
v___y_882_ = v___y_920_;
v___y_883_ = v___y_922_;
v___y_884_ = v___x_961_;
v___y_885_ = v_a_924_;
v_a_886_ = v___x_981_;
goto v___jp_879_;
}
}
}
}
else
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_994_; 
v_a_984_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_994_ == 0)
{
v___x_986_ = v___x_962_;
v_isShared_987_ = v_isSharedCheck_994_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_962_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_994_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_988_; lean_object* v___x_990_; 
v___x_988_ = lean_io_error_to_string(v_a_984_);
if (v_isShared_987_ == 0)
{
lean_ctor_set_tag(v___x_986_, 3);
lean_ctor_set(v___x_986_, 0, v___x_988_);
v___x_990_ = v___x_986_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_993_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = l_Lean_MessageData_ofFormat(v___x_990_);
lean_inc(v___y_918_);
v___x_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_992_, 0, v___y_918_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___y_880_ = v___y_917_;
v___y_881_ = v___y_921_;
v___y_882_ = v___y_920_;
v___y_883_ = v___y_922_;
v___y_884_ = v___x_961_;
v___y_885_ = v_a_924_;
v_a_886_ = v___x_992_;
goto v___jp_879_;
}
}
}
}
}
v___jp_995_:
{
if (v_trimProofs_793_ == 0)
{
lean_dec_ref(v___y_996_);
v_proof_848_ = v___y_997_;
v___y_849_ = v___y_998_;
v___y_850_ = v___y_999_;
goto v___jp_847_;
}
else
{
lean_object* v_toCold_1000_; lean_object* v_options_1001_; uint8_t v_hasTrace_1002_; 
lean_dec_ref(v___y_997_);
v_toCold_1000_ = lean_ctor_get(v___y_998_, 0);
v_options_1001_ = lean_ctor_get(v_toCold_1000_, 2);
v_hasTrace_1002_ = lean_ctor_get_uint8(v_options_1001_, sizeof(void*)*1);
if (v_hasTrace_1002_ == 0)
{
lean_object* v_ref_1003_; lean_object* v___x_1004_; 
lean_del_object(v___x_805_);
v_ref_1003_ = lean_ctor_get(v___y_998_, 2);
v___x_1004_ = l_IO_lazyPure___redArg(v___y_996_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1006_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1006_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg(v_a_1005_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1006_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1026_; 
v_a_1015_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1017_ = v___x_1006_;
v_isShared_1018_ = v_isSharedCheck_1026_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1006_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1026_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1024_; 
v___x_1019_ = lean_io_error_to_string(v_a_1015_);
v___x_1020_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
v___x_1021_ = l_Lean_MessageData_ofFormat(v___x_1020_);
lean_inc(v_ref_1003_);
v___x_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1022_, 0, v_ref_1003_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v___x_1022_);
v___x_1024_ = v___x_1017_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v___x_1022_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1038_; 
v_a_1027_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1029_ = v___x_1004_;
v_isShared_1030_ = v_isSharedCheck_1038_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1004_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1038_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
v___x_1031_ = lean_io_error_to_string(v_a_1027_);
v___x_1032_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
v___x_1033_ = l_Lean_MessageData_ofFormat(v___x_1032_);
lean_inc(v_ref_1003_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_ref_1003_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 0, v___x_1034_);
v___x_1036_ = v___x_1029_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1034_);
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
else
{
lean_object* v_ref_1039_; lean_object* v_inheritedTraceOptions_1040_; lean_object* v___x_1041_; uint8_t v___x_1042_; 
v_ref_1039_ = lean_ctor_get(v___y_998_, 2);
v_inheritedTraceOptions_1040_ = lean_ctor_get(v_toCold_1000_, 11);
v___x_1041_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7);
v___x_1042_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1040_, v_options_1001_, v___x_1041_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; uint8_t v___x_1044_; 
v___x_1043_ = l_Lean_trace_profiler;
v___x_1044_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_options_1001_, v___x_1043_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
v___x_1045_ = l_IO_lazyPure___redArg(v___y_996_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v___x_1047_; 
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
lean_inc(v_a_1046_);
lean_dec_ref_known(v___x_1045_, 1);
v___x_1047_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__4___redArg(v_a_1046_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_a_1048_);
lean_dec_ref_known(v___x_1047_, 1);
v_proof_812_ = v_a_1048_;
v___y_813_ = v___y_998_;
v_options_814_ = v_options_1001_;
v_inheritedTraceOptions_815_ = v_inheritedTraceOptions_1040_;
v___y_816_ = v___y_999_;
goto v___jp_811_;
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1060_; 
lean_del_object(v___x_805_);
v_a_1049_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1051_ = v___x_1047_;
v_isShared_1052_ = v_isSharedCheck_1060_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1047_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1060_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1058_; 
v___x_1053_ = lean_io_error_to_string(v_a_1049_);
v___x_1054_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
v___x_1055_ = l_Lean_MessageData_ofFormat(v___x_1054_);
lean_inc(v_ref_1039_);
v___x_1056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1056_, 0, v_ref_1039_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 0, v___x_1056_);
v___x_1058_ = v___x_1051_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1056_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1072_; 
lean_del_object(v___x_805_);
v_a_1061_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1063_ = v___x_1045_;
v_isShared_1064_ = v_isSharedCheck_1072_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1045_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1072_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1065_ = lean_io_error_to_string(v_a_1061_);
v___x_1066_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
v___x_1067_ = l_Lean_MessageData_ofFormat(v___x_1066_);
lean_inc(v_ref_1039_);
v___x_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1068_, 0, v_ref_1039_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v___x_1068_);
v___x_1070_ = v___x_1063_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
else
{
v___y_917_ = v___y_999_;
v___y_918_ = v_ref_1039_;
v___y_919_ = v___y_996_;
v___y_920_ = v___x_1042_;
v___y_921_ = v_options_1001_;
v___y_922_ = v___y_998_;
goto v___jp_916_;
}
}
else
{
v___y_917_ = v___y_999_;
v___y_918_ = v_ref_1039_;
v___y_919_ = v___y_996_;
v___y_920_ = v___x_1042_;
v___y_921_ = v_options_1001_;
v___y_922_ = v___y_998_;
goto v___jp_916_;
}
}
}
}
v___jp_1073_:
{
lean_object* v___f_1075_; 
lean_inc_ref(v_a_1074_);
v___f_1075_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___lam__3___boxed), 2, 1);
lean_closure_set(v___f_1075_, 0, v_a_1074_);
if (v_hasTrace_808_ == 0)
{
v___y_996_ = v___f_1075_;
v___y_997_ = v_a_1074_;
v___y_998_ = v_a_794_;
v___y_999_ = v_a_795_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1076_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7);
v___x_1077_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_807_, v_options_802_, v___x_1076_);
if (v___x_1077_ == 0)
{
v___y_996_ = v___f_1075_;
v___y_997_ = v_a_1074_;
v___y_998_ = v_a_794_;
v___y_999_ = v_a_795_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1078_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__8));
v___x_1079_ = lean_array_get_size(v_a_1074_);
v___x_1080_ = l_Nat_reprFast(v___x_1079_);
v___x_1081_ = lean_string_append(v___x_1078_, v___x_1080_);
lean_dec_ref(v___x_1080_);
v___x_1082_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__11));
v___x_1083_ = lean_string_append(v___x_1081_, v___x_1082_);
v___x_1084_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
v___x_1085_ = l_Lean_MessageData_ofFormat(v___x_1084_);
v___x_1086_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0(v___x_810_, v___x_1085_, v_a_794_, v_a_795_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_dec_ref_known(v___x_1086_, 1);
v___y_996_ = v___f_1075_;
v___y_997_ = v_a_1074_;
v___y_998_ = v_a_794_;
v___y_999_ = v_a_795_;
goto v___jp_995_;
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
lean_dec_ref(v___f_1075_);
lean_dec_ref(v_a_1074_);
lean_del_object(v___x_805_);
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
return v___x_1092_;
}
}
}
}
}
}
v___jp_1095_:
{
if (lean_obj_tag(v___y_1096_) == 0)
{
lean_object* v_a_1097_; 
v_a_1097_ = lean_ctor_get(v___y_1096_, 0);
lean_inc(v_a_1097_);
lean_dec_ref_known(v___y_1096_, 1);
v_a_1074_ = v_a_1097_;
goto v___jp_1073_;
}
else
{
lean_del_object(v___x_805_);
return v___y_1096_;
}
}
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1248_; 
v_a_1237_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1239_ = v___x_801_;
v_isShared_1240_ = v_isSharedCheck_1248_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_801_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1248_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1246_; 
v___x_1241_ = lean_io_error_to_string(v_a_1237_);
v___x_1242_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1241_);
v___x_1243_ = l_Lean_MessageData_ofFormat(v___x_1242_);
lean_inc(v_ref_798_);
v___x_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1244_, 0, v_ref_798_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 0, v___x_1244_);
v___x_1246_ = v___x_1239_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v___x_1244_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_load___boxed(lean_object* v_lratPath_1249_, lean_object* v_trimProofs_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_){
_start:
{
uint8_t v_trimProofs_boxed_1254_; lean_object* v_res_1255_; 
v_trimProofs_boxed_1254_ = lean_unbox(v_trimProofs_1250_);
v_res_1255_ = l_Lean_Meta_Tactic_BVDecide_LratCert_load(v_lratPath_1249_, v_trimProofs_boxed_1254_, v_a_1251_, v_a_1252_);
lean_dec(v_a_1252_);
lean_dec_ref(v_a_1251_);
lean_dec_ref(v_lratPath_1249_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5(lean_object* v_00_u03b1_1256_, lean_object* v_x_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
lean_object* v___x_1261_; 
v___x_1261_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_x_1257_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1262_, lean_object* v_x_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5(v_00_u03b1_1262_, v_x_1263_, v___y_1264_, v___y_1265_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5(lean_object* v_00_u03b1_1268_, lean_object* v_msg_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v___x_1273_; 
v___x_1273_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___redArg(v_msg_1269_, v___y_1270_, v___y_1271_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5___boxed(lean_object* v_00_u03b1_1274_, lean_object* v_msg_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__5(v_00_u03b1_1274_, v_msg_1275_, v___y_1276_, v___y_1277_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(lean_object* v_lratPath_1280_, uint8_t v_trimProofs_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v___x_1285_; 
v___x_1285_ = l_Lean_Meta_Tactic_BVDecide_LratCert_load(v_lratPath_1280_, v_trimProofs_1281_, v_a_1282_, v_a_1283_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1294_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1290_; lean_object* v___x_1292_; 
v___x_1290_ = l_Std_Tactic_BVDecide_LRAT_lratProofToString(v_a_1286_);
lean_dec(v_a_1286_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1290_);
v___x_1292_ = v___x_1288_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1290_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
v_a_1295_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1285_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1285_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile___boxed(lean_object* v_lratPath_1303_, lean_object* v_trimProofs_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_){
_start:
{
uint8_t v_trimProofs_boxed_1308_; lean_object* v_res_1309_; 
v_trimProofs_boxed_1308_ = lean_unbox(v_trimProofs_1304_);
v_res_1309_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_1303_, v_trimProofs_boxed_1308_, v_a_1305_, v_a_1306_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
lean_dec_ref(v_lratPath_1303_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg___lam__0(lean_object* v_snd_1310_, lean_object* v_ref_1311_, lean_object* v_a_x3f_1312_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_io_remove_file(v_snd_1310_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1322_; 
lean_dec(v_ref_1311_);
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1317_ = v___x_1314_;
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_a_1315_);
lean_dec(v___x_1314_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1322_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1320_; 
if (v_isShared_1318_ == 0)
{
v___x_1320_ = v___x_1317_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_a_1315_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
else
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1334_; 
v_a_1323_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1325_ = v___x_1314_;
v_isShared_1326_ = v_isSharedCheck_1334_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1314_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1334_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1332_; 
v___x_1327_ = lean_io_error_to_string(v_a_1323_);
v___x_1328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
v___x_1329_ = l_Lean_MessageData_ofFormat(v___x_1328_);
v___x_1330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1330_, 0, v_ref_1311_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 0, v___x_1330_);
v___x_1332_ = v___x_1325_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg___lam__0___boxed(lean_object* v_snd_1335_, lean_object* v_ref_1336_, lean_object* v_a_x3f_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg___lam__0(v_snd_1335_, v_ref_1336_, v_a_x3f_1337_);
lean_dec(v_a_x3f_1337_);
lean_dec_ref(v_snd_1335_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg(lean_object* v_f_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_ref_1344_; lean_object* v___x_1345_; 
v_ref_1344_ = lean_ctor_get(v___y_1341_, 2);
v___x_1345_ = lean_io_create_tempfile();
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; lean_object* v_fst_1347_; lean_object* v_snd_1348_; lean_object* v_r_1349_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
lean_inc(v_a_1346_);
lean_dec_ref_known(v___x_1345_, 1);
v_fst_1347_ = lean_ctor_get(v_a_1346_, 0);
lean_inc(v_fst_1347_);
v_snd_1348_ = lean_ctor_get(v_a_1346_, 1);
lean_inc_n(v_snd_1348_, 2);
lean_dec(v_a_1346_);
lean_inc(v___y_1342_);
lean_inc_ref(v___y_1341_);
v_r_1349_ = lean_apply_5(v_f_1340_, v_fst_1347_, v_snd_1348_, v___y_1341_, v___y_1342_, lean_box(0));
if (lean_obj_tag(v_r_1349_) == 0)
{
lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1374_; 
v_a_1350_ = lean_ctor_get(v_r_1349_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v_r_1349_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1352_ = v_r_1349_;
v_isShared_1353_ = v_isSharedCheck_1374_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_dec(v_r_1349_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1374_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1355_; 
lean_inc(v_a_1350_);
if (v_isShared_1353_ == 0)
{
lean_ctor_set_tag(v___x_1352_, 1);
v___x_1355_ = v___x_1352_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1350_);
v___x_1355_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v___x_1356_; 
lean_inc(v_ref_1344_);
v___x_1356_ = l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg___lam__0(v_snd_1348_, v_ref_1344_, v___x_1355_);
lean_dec_ref(v___x_1355_);
lean_dec(v_snd_1348_);
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1363_ == 0)
{
lean_object* v_unused_1364_; 
v_unused_1364_ = lean_ctor_get(v___x_1356_, 0);
lean_dec(v_unused_1364_);
v___x_1358_ = v___x_1356_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_dec(v___x_1356_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 0, v_a_1350_);
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1350_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
else
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec(v_a_1350_);
v_a_1365_ = lean_ctor_get(v___x_1356_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1356_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1356_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
}
}
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; 
v_a_1375_ = lean_ctor_get(v_r_1349_, 0);
lean_inc(v_a_1375_);
lean_dec_ref_known(v_r_1349_, 1);
v___x_1376_ = lean_box(0);
lean_inc(v_ref_1344_);
v___x_1377_ = l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg___lam__0(v_snd_1348_, v_ref_1344_, v___x_1376_);
lean_dec(v_snd_1348_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1384_; 
v_isSharedCheck_1384_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1384_ == 0)
{
lean_object* v_unused_1385_; 
v_unused_1385_ = lean_ctor_get(v___x_1377_, 0);
lean_dec(v_unused_1385_);
v___x_1379_ = v___x_1377_;
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
else
{
lean_dec(v___x_1377_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1382_; 
if (v_isShared_1380_ == 0)
{
lean_ctor_set_tag(v___x_1379_, 1);
lean_ctor_set(v___x_1379_, 0, v_a_1375_);
v___x_1382_ = v___x_1379_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_a_1375_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
else
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
lean_dec(v_a_1375_);
v_a_1386_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v___x_1377_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1377_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
}
else
{
lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1405_; 
lean_dec_ref(v_f_1340_);
v_a_1394_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1396_ = v___x_1345_;
v_isShared_1397_ = v_isSharedCheck_1405_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v___x_1345_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1405_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1403_; 
v___x_1398_ = lean_io_error_to_string(v_a_1394_);
v___x_1399_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
v___x_1400_ = l_Lean_MessageData_ofFormat(v___x_1399_);
lean_inc(v_ref_1344_);
v___x_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1401_, 0, v_ref_1344_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v___x_1401_);
v___x_1403_ = v___x_1396_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg___boxed(lean_object* v_f_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg(v_f_1406_, v___y_1407_, v___y_1408_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3(lean_object* v_00_u03b1_1411_, lean_object* v_f_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg(v_f_1412_, v___y_1413_, v___y_1414_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___boxed(lean_object* v_00_u03b1_1417_, lean_object* v_f_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3(v_00_u03b1_1417_, v_f_1418_, v___y_1419_, v___y_1420_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__0(lean_object* v_cnf_1423_, lean_object* v_x_1424_){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = l_Std_Sat_CNF_dimacs(v_cnf_1423_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__0___boxed(lean_object* v_cnf_1426_, lean_object* v_x_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lean_Meta_Tactic_BVDecide_runExternal___lam__0(v_cnf_1426_, v_x_1427_);
lean_dec_ref(v_cnf_1426_);
return v_res_1428_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1432_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__1));
v___x_1433_ = l_Lean_MessageData_ofFormat(v___x_1432_);
return v___x_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1(lean_object* v_x_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__2, &l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___closed__2);
v___x_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1___boxed(lean_object* v_x_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Lean_Meta_Tactic_BVDecide_runExternal___lam__1(v_x_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec_ref(v_x_1440_);
return v_res_1444_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__1));
v___x_1449_ = l_Lean_MessageData_ofFormat(v___x_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2(lean_object* v_x_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__2, &l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___closed__2);
v___x_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2___boxed(lean_object* v_x_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v_res_1460_; 
v_res_1460_ = l_Lean_Meta_Tactic_BVDecide_runExternal___lam__2(v_x_1456_, v___y_1457_, v___y_1458_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec_ref(v_x_1456_);
return v_res_1460_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__2(void){
_start:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1464_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__1));
v___x_1465_ = l_Lean_MessageData_ofFormat(v___x_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3(lean_object* v_x_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__2, &l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___closed__2);
v___x_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3___boxed(lean_object* v_x_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l_Lean_Meta_Tactic_BVDecide_runExternal___lam__3(v_x_1472_, v___y_1473_, v___y_1474_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_dec_ref(v_x_1472_);
return v_res_1476_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2_spec__4(lean_object* v_e_1477_){
_start:
{
if (lean_obj_tag(v_e_1477_) == 0)
{
uint8_t v___x_1478_; 
v___x_1478_ = 2;
return v___x_1478_;
}
else
{
uint8_t v___x_1479_; 
v___x_1479_ = 0;
return v___x_1479_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2_spec__4___boxed(lean_object* v_e_1480_){
_start:
{
uint8_t v_res_1481_; lean_object* v_r_1482_; 
v_res_1481_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2_spec__4(v_e_1480_);
lean_dec_ref(v_e_1480_);
v_r_1482_ = lean_box(v_res_1481_);
return v_r_1482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2(lean_object* v_cls_1483_, uint8_t v_collapsed_1484_, lean_object* v_tag_1485_, lean_object* v_opts_1486_, uint8_t v_clsEnabled_1487_, lean_object* v_oldTraces_1488_, lean_object* v_msg_1489_, lean_object* v_resStartStop_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_fst_1494_; lean_object* v_snd_1495_; lean_object* v___y_1497_; lean_object* v___y_1498_; lean_object* v_data_1499_; lean_object* v_fst_1502_; lean_object* v_snd_1503_; lean_object* v___x_1504_; uint8_t v___x_1505_; lean_object* v___y_1507_; lean_object* v_a_1508_; uint8_t v___y_1523_; double v___y_1554_; 
v_fst_1494_ = lean_ctor_get(v_resStartStop_1490_, 0);
lean_inc(v_fst_1494_);
v_snd_1495_ = lean_ctor_get(v_resStartStop_1490_, 1);
lean_inc(v_snd_1495_);
lean_dec_ref(v_resStartStop_1490_);
v_fst_1502_ = lean_ctor_get(v_snd_1495_, 0);
lean_inc(v_fst_1502_);
v_snd_1503_ = lean_ctor_get(v_snd_1495_, 1);
lean_inc(v_snd_1503_);
lean_dec(v_snd_1495_);
v___x_1504_ = l_Lean_trace_profiler;
v___x_1505_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_opts_1486_, v___x_1504_);
if (v___x_1505_ == 0)
{
v___y_1523_ = v___x_1505_;
goto v___jp_1522_;
}
else
{
lean_object* v___x_1559_; uint8_t v___x_1560_; 
v___x_1559_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1560_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_opts_1486_, v___x_1559_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; lean_object* v___x_1562_; double v___x_1563_; double v___x_1564_; double v___x_1565_; 
v___x_1561_ = l_Lean_trace_profiler_threshold;
v___x_1562_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(v_opts_1486_, v___x_1561_);
v___x_1563_ = lean_float_of_nat(v___x_1562_);
v___x_1564_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3);
v___x_1565_ = lean_float_div(v___x_1563_, v___x_1564_);
v___y_1554_ = v___x_1565_;
goto v___jp_1553_;
}
else
{
lean_object* v___x_1566_; lean_object* v___x_1567_; double v___x_1568_; 
v___x_1566_ = l_Lean_trace_profiler_threshold;
v___x_1567_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(v_opts_1486_, v___x_1566_);
v___x_1568_ = lean_float_of_nat(v___x_1567_);
v___y_1554_ = v___x_1568_;
goto v___jp_1553_;
}
}
v___jp_1496_:
{
lean_object* v___x_1500_; 
lean_inc(v___y_1498_);
v___x_1500_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4(v_oldTraces_1488_, v_data_1499_, v___y_1498_, v___y_1497_, v___y_1491_, v___y_1492_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v___x_1501_; 
lean_dec_ref_known(v___x_1500_, 1);
v___x_1501_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_fst_1494_);
return v___x_1501_;
}
else
{
lean_dec(v_fst_1494_);
return v___x_1500_;
}
}
v___jp_1506_:
{
uint8_t v_result_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; double v___x_1512_; lean_object* v_data_1513_; 
v_result_1509_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2_spec__4(v_fst_1494_);
v___x_1510_ = lean_box(v_result_1509_);
v___x_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1510_);
v___x_1512_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0);
lean_inc_ref(v_tag_1485_);
lean_inc_ref(v___x_1511_);
lean_inc(v_cls_1483_);
v_data_1513_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1513_, 0, v_cls_1483_);
lean_ctor_set(v_data_1513_, 1, v___x_1511_);
lean_ctor_set(v_data_1513_, 2, v_tag_1485_);
lean_ctor_set_float(v_data_1513_, sizeof(void*)*3, v___x_1512_);
lean_ctor_set_float(v_data_1513_, sizeof(void*)*3 + 8, v___x_1512_);
lean_ctor_set_uint8(v_data_1513_, sizeof(void*)*3 + 16, v_collapsed_1484_);
if (v___x_1505_ == 0)
{
lean_dec_ref_known(v___x_1511_, 1);
lean_dec(v_snd_1503_);
lean_dec(v_fst_1502_);
lean_dec_ref(v_tag_1485_);
lean_dec(v_cls_1483_);
v___y_1497_ = v_a_1508_;
v___y_1498_ = v___y_1507_;
v_data_1499_ = v_data_1513_;
goto v___jp_1496_;
}
else
{
lean_object* v_data_1514_; double v___x_1515_; double v___x_1516_; 
lean_dec_ref_known(v_data_1513_, 3);
v_data_1514_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1514_, 0, v_cls_1483_);
lean_ctor_set(v_data_1514_, 1, v___x_1511_);
lean_ctor_set(v_data_1514_, 2, v_tag_1485_);
v___x_1515_ = lean_unbox_float(v_fst_1502_);
lean_dec(v_fst_1502_);
lean_ctor_set_float(v_data_1514_, sizeof(void*)*3, v___x_1515_);
v___x_1516_ = lean_unbox_float(v_snd_1503_);
lean_dec(v_snd_1503_);
lean_ctor_set_float(v_data_1514_, sizeof(void*)*3 + 8, v___x_1516_);
lean_ctor_set_uint8(v_data_1514_, sizeof(void*)*3 + 16, v_collapsed_1484_);
v___y_1497_ = v_a_1508_;
v___y_1498_ = v___y_1507_;
v_data_1499_ = v_data_1514_;
goto v___jp_1496_;
}
}
v___jp_1517_:
{
lean_object* v_ref_1518_; lean_object* v___x_1519_; 
v_ref_1518_ = lean_ctor_get(v___y_1491_, 2);
lean_inc(v___y_1492_);
lean_inc_ref(v___y_1491_);
lean_inc(v_fst_1494_);
v___x_1519_ = lean_apply_4(v_msg_1489_, v_fst_1494_, v___y_1491_, v___y_1492_, lean_box(0));
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v___x_1519_, 1);
v___y_1507_ = v_ref_1518_;
v_a_1508_ = v_a_1520_;
goto v___jp_1506_;
}
else
{
lean_object* v___x_1521_; 
lean_dec_ref_known(v___x_1519_, 1);
v___x_1521_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2);
v___y_1507_ = v_ref_1518_;
v_a_1508_ = v___x_1521_;
goto v___jp_1506_;
}
}
v___jp_1522_:
{
if (v_clsEnabled_1487_ == 0)
{
if (v___y_1523_ == 0)
{
lean_object* v___x_1524_; lean_object* v_traceState_1525_; lean_object* v_env_1526_; lean_object* v_nextMacroScope_1527_; lean_object* v_ngen_1528_; lean_object* v_auxDeclNGen_1529_; lean_object* v_cache_1530_; lean_object* v_messages_1531_; lean_object* v_infoState_1532_; lean_object* v_snapshotTasks_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1552_; 
lean_dec(v_snd_1503_);
lean_dec(v_fst_1502_);
lean_dec_ref(v_msg_1489_);
lean_dec_ref(v_tag_1485_);
lean_dec(v_cls_1483_);
v___x_1524_ = lean_st_ref_take(v___y_1492_);
v_traceState_1525_ = lean_ctor_get(v___x_1524_, 4);
v_env_1526_ = lean_ctor_get(v___x_1524_, 0);
v_nextMacroScope_1527_ = lean_ctor_get(v___x_1524_, 1);
v_ngen_1528_ = lean_ctor_get(v___x_1524_, 2);
v_auxDeclNGen_1529_ = lean_ctor_get(v___x_1524_, 3);
v_cache_1530_ = lean_ctor_get(v___x_1524_, 5);
v_messages_1531_ = lean_ctor_get(v___x_1524_, 6);
v_infoState_1532_ = lean_ctor_get(v___x_1524_, 7);
v_snapshotTasks_1533_ = lean_ctor_get(v___x_1524_, 8);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1535_ = v___x_1524_;
v_isShared_1536_ = v_isSharedCheck_1552_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_snapshotTasks_1533_);
lean_inc(v_infoState_1532_);
lean_inc(v_messages_1531_);
lean_inc(v_cache_1530_);
lean_inc(v_traceState_1525_);
lean_inc(v_auxDeclNGen_1529_);
lean_inc(v_ngen_1528_);
lean_inc(v_nextMacroScope_1527_);
lean_inc(v_env_1526_);
lean_dec(v___x_1524_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1552_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
uint64_t v_tid_1537_; lean_object* v_traces_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1551_; 
v_tid_1537_ = lean_ctor_get_uint64(v_traceState_1525_, sizeof(void*)*1);
v_traces_1538_ = lean_ctor_get(v_traceState_1525_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v_traceState_1525_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1540_ = v_traceState_1525_;
v_isShared_1541_ = v_isSharedCheck_1551_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_traces_1538_);
lean_dec(v_traceState_1525_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1551_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1542_; lean_object* v___x_1544_; 
v___x_1542_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1488_, v_traces_1538_);
lean_dec_ref(v_traces_1538_);
if (v_isShared_1541_ == 0)
{
lean_ctor_set(v___x_1540_, 0, v___x_1542_);
v___x_1544_ = v___x_1540_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v___x_1542_);
lean_ctor_set_uint64(v_reuseFailAlloc_1550_, sizeof(void*)*1, v_tid_1537_);
v___x_1544_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
lean_object* v___x_1546_; 
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 4, v___x_1544_);
v___x_1546_ = v___x_1535_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_env_1526_);
lean_ctor_set(v_reuseFailAlloc_1549_, 1, v_nextMacroScope_1527_);
lean_ctor_set(v_reuseFailAlloc_1549_, 2, v_ngen_1528_);
lean_ctor_set(v_reuseFailAlloc_1549_, 3, v_auxDeclNGen_1529_);
lean_ctor_set(v_reuseFailAlloc_1549_, 4, v___x_1544_);
lean_ctor_set(v_reuseFailAlloc_1549_, 5, v_cache_1530_);
lean_ctor_set(v_reuseFailAlloc_1549_, 6, v_messages_1531_);
lean_ctor_set(v_reuseFailAlloc_1549_, 7, v_infoState_1532_);
lean_ctor_set(v_reuseFailAlloc_1549_, 8, v_snapshotTasks_1533_);
v___x_1546_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1547_ = lean_st_ref_put(v___y_1492_, v___x_1546_);
v___x_1548_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_fst_1494_);
return v___x_1548_;
}
}
}
}
}
else
{
goto v___jp_1517_;
}
}
else
{
goto v___jp_1517_;
}
}
v___jp_1553_:
{
double v___x_1555_; double v___x_1556_; double v___x_1557_; uint8_t v___x_1558_; 
v___x_1555_ = lean_unbox_float(v_snd_1503_);
v___x_1556_ = lean_unbox_float(v_fst_1502_);
v___x_1557_ = lean_float_sub(v___x_1555_, v___x_1556_);
v___x_1558_ = lean_float_decLt(v___y_1554_, v___x_1557_);
v___y_1523_ = v___x_1558_;
goto v___jp_1522_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2___boxed(lean_object* v_cls_1569_, lean_object* v_collapsed_1570_, lean_object* v_tag_1571_, lean_object* v_opts_1572_, lean_object* v_clsEnabled_1573_, lean_object* v_oldTraces_1574_, lean_object* v_msg_1575_, lean_object* v_resStartStop_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
uint8_t v_collapsed_boxed_1580_; uint8_t v_clsEnabled_boxed_1581_; lean_object* v_res_1582_; 
v_collapsed_boxed_1580_ = lean_unbox(v_collapsed_1570_);
v_clsEnabled_boxed_1581_ = lean_unbox(v_clsEnabled_1573_);
v_res_1582_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2(v_cls_1569_, v_collapsed_boxed_1580_, v_tag_1571_, v_opts_1572_, v_clsEnabled_boxed_1581_, v_oldTraces_1574_, v_msg_1575_, v_resStartStop_1576_, v___y_1577_, v___y_1578_);
lean_dec(v___y_1578_);
lean_dec_ref(v___y_1577_);
lean_dec_ref(v_opts_1572_);
return v_res_1582_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0_spec__0(lean_object* v_e_1583_){
_start:
{
if (lean_obj_tag(v_e_1583_) == 0)
{
uint8_t v___x_1584_; 
v___x_1584_ = 2;
return v___x_1584_;
}
else
{
uint8_t v___x_1585_; 
v___x_1585_ = 0;
return v___x_1585_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0_spec__0___boxed(lean_object* v_e_1586_){
_start:
{
uint8_t v_res_1587_; lean_object* v_r_1588_; 
v_res_1587_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0_spec__0(v_e_1586_);
lean_dec_ref(v_e_1586_);
v_r_1588_ = lean_box(v_res_1587_);
return v_r_1588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0(lean_object* v_cls_1589_, uint8_t v_collapsed_1590_, lean_object* v_tag_1591_, lean_object* v_opts_1592_, uint8_t v_clsEnabled_1593_, lean_object* v_oldTraces_1594_, lean_object* v_msg_1595_, lean_object* v_resStartStop_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v_fst_1600_; lean_object* v_snd_1601_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v_data_1605_; lean_object* v_fst_1616_; lean_object* v_snd_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; lean_object* v___y_1621_; lean_object* v_a_1622_; uint8_t v___y_1637_; double v___y_1668_; 
v_fst_1600_ = lean_ctor_get(v_resStartStop_1596_, 0);
lean_inc(v_fst_1600_);
v_snd_1601_ = lean_ctor_get(v_resStartStop_1596_, 1);
lean_inc(v_snd_1601_);
lean_dec_ref(v_resStartStop_1596_);
v_fst_1616_ = lean_ctor_get(v_snd_1601_, 0);
lean_inc(v_fst_1616_);
v_snd_1617_ = lean_ctor_get(v_snd_1601_, 1);
lean_inc(v_snd_1617_);
lean_dec(v_snd_1601_);
v___x_1618_ = l_Lean_trace_profiler;
v___x_1619_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_opts_1592_, v___x_1618_);
if (v___x_1619_ == 0)
{
v___y_1637_ = v___x_1619_;
goto v___jp_1636_;
}
else
{
lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1673_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1674_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_opts_1592_, v___x_1673_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; lean_object* v___x_1676_; double v___x_1677_; double v___x_1678_; double v___x_1679_; 
v___x_1675_ = l_Lean_trace_profiler_threshold;
v___x_1676_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(v_opts_1592_, v___x_1675_);
v___x_1677_ = lean_float_of_nat(v___x_1676_);
v___x_1678_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3);
v___x_1679_ = lean_float_div(v___x_1677_, v___x_1678_);
v___y_1668_ = v___x_1679_;
goto v___jp_1667_;
}
else
{
lean_object* v___x_1680_; lean_object* v___x_1681_; double v___x_1682_; 
v___x_1680_ = l_Lean_trace_profiler_threshold;
v___x_1681_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(v_opts_1592_, v___x_1680_);
v___x_1682_ = lean_float_of_nat(v___x_1681_);
v___y_1668_ = v___x_1682_;
goto v___jp_1667_;
}
}
v___jp_1602_:
{
lean_object* v___x_1606_; 
lean_inc(v___y_1603_);
v___x_1606_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4(v_oldTraces_1594_, v_data_1605_, v___y_1603_, v___y_1604_, v___y_1597_, v___y_1598_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v___x_1607_; 
lean_dec_ref_known(v___x_1606_, 1);
v___x_1607_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_fst_1600_);
return v___x_1607_;
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec(v_fst_1600_);
v_a_1608_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1606_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1606_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
v___jp_1620_:
{
uint8_t v_result_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; double v___x_1626_; lean_object* v_data_1627_; 
v_result_1623_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0_spec__0(v_fst_1600_);
v___x_1624_ = lean_box(v_result_1623_);
v___x_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1624_);
v___x_1626_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0);
lean_inc_ref(v_tag_1591_);
lean_inc_ref(v___x_1625_);
lean_inc(v_cls_1589_);
v_data_1627_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1627_, 0, v_cls_1589_);
lean_ctor_set(v_data_1627_, 1, v___x_1625_);
lean_ctor_set(v_data_1627_, 2, v_tag_1591_);
lean_ctor_set_float(v_data_1627_, sizeof(void*)*3, v___x_1626_);
lean_ctor_set_float(v_data_1627_, sizeof(void*)*3 + 8, v___x_1626_);
lean_ctor_set_uint8(v_data_1627_, sizeof(void*)*3 + 16, v_collapsed_1590_);
if (v___x_1619_ == 0)
{
lean_dec_ref_known(v___x_1625_, 1);
lean_dec(v_snd_1617_);
lean_dec(v_fst_1616_);
lean_dec_ref(v_tag_1591_);
lean_dec(v_cls_1589_);
v___y_1603_ = v___y_1621_;
v___y_1604_ = v_a_1622_;
v_data_1605_ = v_data_1627_;
goto v___jp_1602_;
}
else
{
lean_object* v_data_1628_; double v___x_1629_; double v___x_1630_; 
lean_dec_ref_known(v_data_1627_, 3);
v_data_1628_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1628_, 0, v_cls_1589_);
lean_ctor_set(v_data_1628_, 1, v___x_1625_);
lean_ctor_set(v_data_1628_, 2, v_tag_1591_);
v___x_1629_ = lean_unbox_float(v_fst_1616_);
lean_dec(v_fst_1616_);
lean_ctor_set_float(v_data_1628_, sizeof(void*)*3, v___x_1629_);
v___x_1630_ = lean_unbox_float(v_snd_1617_);
lean_dec(v_snd_1617_);
lean_ctor_set_float(v_data_1628_, sizeof(void*)*3 + 8, v___x_1630_);
lean_ctor_set_uint8(v_data_1628_, sizeof(void*)*3 + 16, v_collapsed_1590_);
v___y_1603_ = v___y_1621_;
v___y_1604_ = v_a_1622_;
v_data_1605_ = v_data_1628_;
goto v___jp_1602_;
}
}
v___jp_1631_:
{
lean_object* v_ref_1632_; lean_object* v___x_1633_; 
v_ref_1632_ = lean_ctor_get(v___y_1597_, 2);
lean_inc(v___y_1598_);
lean_inc_ref(v___y_1597_);
lean_inc(v_fst_1600_);
v___x_1633_ = lean_apply_4(v_msg_1595_, v_fst_1600_, v___y_1597_, v___y_1598_, lean_box(0));
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
lean_inc(v_a_1634_);
lean_dec_ref_known(v___x_1633_, 1);
v___y_1621_ = v_ref_1632_;
v_a_1622_ = v_a_1634_;
goto v___jp_1620_;
}
else
{
lean_object* v___x_1635_; 
lean_dec_ref_known(v___x_1633_, 1);
v___x_1635_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2);
v___y_1621_ = v_ref_1632_;
v_a_1622_ = v___x_1635_;
goto v___jp_1620_;
}
}
v___jp_1636_:
{
if (v_clsEnabled_1593_ == 0)
{
if (v___y_1637_ == 0)
{
lean_object* v___x_1638_; lean_object* v_traceState_1639_; lean_object* v_env_1640_; lean_object* v_nextMacroScope_1641_; lean_object* v_ngen_1642_; lean_object* v_auxDeclNGen_1643_; lean_object* v_cache_1644_; lean_object* v_messages_1645_; lean_object* v_infoState_1646_; lean_object* v_snapshotTasks_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1666_; 
lean_dec(v_snd_1617_);
lean_dec(v_fst_1616_);
lean_dec_ref(v_msg_1595_);
lean_dec_ref(v_tag_1591_);
lean_dec(v_cls_1589_);
v___x_1638_ = lean_st_ref_take(v___y_1598_);
v_traceState_1639_ = lean_ctor_get(v___x_1638_, 4);
v_env_1640_ = lean_ctor_get(v___x_1638_, 0);
v_nextMacroScope_1641_ = lean_ctor_get(v___x_1638_, 1);
v_ngen_1642_ = lean_ctor_get(v___x_1638_, 2);
v_auxDeclNGen_1643_ = lean_ctor_get(v___x_1638_, 3);
v_cache_1644_ = lean_ctor_get(v___x_1638_, 5);
v_messages_1645_ = lean_ctor_get(v___x_1638_, 6);
v_infoState_1646_ = lean_ctor_get(v___x_1638_, 7);
v_snapshotTasks_1647_ = lean_ctor_get(v___x_1638_, 8);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1649_ = v___x_1638_;
v_isShared_1650_ = v_isSharedCheck_1666_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_snapshotTasks_1647_);
lean_inc(v_infoState_1646_);
lean_inc(v_messages_1645_);
lean_inc(v_cache_1644_);
lean_inc(v_traceState_1639_);
lean_inc(v_auxDeclNGen_1643_);
lean_inc(v_ngen_1642_);
lean_inc(v_nextMacroScope_1641_);
lean_inc(v_env_1640_);
lean_dec(v___x_1638_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1666_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
uint64_t v_tid_1651_; lean_object* v_traces_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1665_; 
v_tid_1651_ = lean_ctor_get_uint64(v_traceState_1639_, sizeof(void*)*1);
v_traces_1652_ = lean_ctor_get(v_traceState_1639_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v_traceState_1639_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1654_ = v_traceState_1639_;
v_isShared_1655_ = v_isSharedCheck_1665_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_traces_1652_);
lean_dec(v_traceState_1639_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1665_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1656_; lean_object* v___x_1658_; 
v___x_1656_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1594_, v_traces_1652_);
lean_dec_ref(v_traces_1652_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 0, v___x_1656_);
v___x_1658_ = v___x_1654_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v___x_1656_);
lean_ctor_set_uint64(v_reuseFailAlloc_1664_, sizeof(void*)*1, v_tid_1651_);
v___x_1658_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
lean_object* v___x_1660_; 
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 4, v___x_1658_);
v___x_1660_ = v___x_1649_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_env_1640_);
lean_ctor_set(v_reuseFailAlloc_1663_, 1, v_nextMacroScope_1641_);
lean_ctor_set(v_reuseFailAlloc_1663_, 2, v_ngen_1642_);
lean_ctor_set(v_reuseFailAlloc_1663_, 3, v_auxDeclNGen_1643_);
lean_ctor_set(v_reuseFailAlloc_1663_, 4, v___x_1658_);
lean_ctor_set(v_reuseFailAlloc_1663_, 5, v_cache_1644_);
lean_ctor_set(v_reuseFailAlloc_1663_, 6, v_messages_1645_);
lean_ctor_set(v_reuseFailAlloc_1663_, 7, v_infoState_1646_);
lean_ctor_set(v_reuseFailAlloc_1663_, 8, v_snapshotTasks_1647_);
v___x_1660_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = lean_st_ref_put(v___y_1598_, v___x_1660_);
v___x_1662_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_fst_1600_);
return v___x_1662_;
}
}
}
}
}
else
{
goto v___jp_1631_;
}
}
else
{
goto v___jp_1631_;
}
}
v___jp_1667_:
{
double v___x_1669_; double v___x_1670_; double v___x_1671_; uint8_t v___x_1672_; 
v___x_1669_ = lean_unbox_float(v_snd_1617_);
v___x_1670_ = lean_unbox_float(v_fst_1616_);
v___x_1671_ = lean_float_sub(v___x_1669_, v___x_1670_);
v___x_1672_ = lean_float_decLt(v___y_1668_, v___x_1671_);
v___y_1637_ = v___x_1672_;
goto v___jp_1636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0___boxed(lean_object* v_cls_1683_, lean_object* v_collapsed_1684_, lean_object* v_tag_1685_, lean_object* v_opts_1686_, lean_object* v_clsEnabled_1687_, lean_object* v_oldTraces_1688_, lean_object* v_msg_1689_, lean_object* v_resStartStop_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
uint8_t v_collapsed_boxed_1694_; uint8_t v_clsEnabled_boxed_1695_; lean_object* v_res_1696_; 
v_collapsed_boxed_1694_ = lean_unbox(v_collapsed_1684_);
v_clsEnabled_boxed_1695_ = lean_unbox(v_clsEnabled_1687_);
v_res_1696_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0(v_cls_1683_, v_collapsed_boxed_1694_, v_tag_1685_, v_opts_1686_, v_clsEnabled_boxed_1695_, v_oldTraces_1688_, v_msg_1689_, v_resStartStop_1690_, v___y_1691_, v___y_1692_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec_ref(v_opts_1686_);
return v_res_1696_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1_spec__2(lean_object* v_e_1697_){
_start:
{
if (lean_obj_tag(v_e_1697_) == 0)
{
uint8_t v___x_1698_; 
v___x_1698_ = 2;
return v___x_1698_;
}
else
{
uint8_t v___x_1699_; 
v___x_1699_ = 0;
return v___x_1699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1_spec__2___boxed(lean_object* v_e_1700_){
_start:
{
uint8_t v_res_1701_; lean_object* v_r_1702_; 
v_res_1701_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1_spec__2(v_e_1700_);
lean_dec_ref(v_e_1700_);
v_r_1702_ = lean_box(v_res_1701_);
return v_r_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1(lean_object* v_cls_1703_, uint8_t v_collapsed_1704_, lean_object* v_tag_1705_, lean_object* v_opts_1706_, uint8_t v_clsEnabled_1707_, lean_object* v_oldTraces_1708_, lean_object* v_msg_1709_, lean_object* v_resStartStop_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v_fst_1714_; lean_object* v_snd_1715_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v_data_1719_; lean_object* v_fst_1730_; lean_object* v_snd_1731_; lean_object* v___x_1732_; uint8_t v___x_1733_; lean_object* v___y_1735_; lean_object* v_a_1736_; uint8_t v___y_1751_; double v___y_1782_; 
v_fst_1714_ = lean_ctor_get(v_resStartStop_1710_, 0);
lean_inc(v_fst_1714_);
v_snd_1715_ = lean_ctor_get(v_resStartStop_1710_, 1);
lean_inc(v_snd_1715_);
lean_dec_ref(v_resStartStop_1710_);
v_fst_1730_ = lean_ctor_get(v_snd_1715_, 0);
lean_inc(v_fst_1730_);
v_snd_1731_ = lean_ctor_get(v_snd_1715_, 1);
lean_inc(v_snd_1731_);
lean_dec(v_snd_1715_);
v___x_1732_ = l_Lean_trace_profiler;
v___x_1733_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_opts_1706_, v___x_1732_);
if (v___x_1733_ == 0)
{
v___y_1751_ = v___x_1733_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1787_; uint8_t v___x_1788_; 
v___x_1787_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1788_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_opts_1706_, v___x_1787_);
if (v___x_1788_ == 0)
{
lean_object* v___x_1789_; lean_object* v___x_1790_; double v___x_1791_; double v___x_1792_; double v___x_1793_; 
v___x_1789_ = l_Lean_trace_profiler_threshold;
v___x_1790_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(v_opts_1706_, v___x_1789_);
v___x_1791_ = lean_float_of_nat(v___x_1790_);
v___x_1792_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__3);
v___x_1793_ = lean_float_div(v___x_1791_, v___x_1792_);
v___y_1782_ = v___x_1793_;
goto v___jp_1781_;
}
else
{
lean_object* v___x_1794_; lean_object* v___x_1795_; double v___x_1796_; 
v___x_1794_ = l_Lean_trace_profiler_threshold;
v___x_1795_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__7(v_opts_1706_, v___x_1794_);
v___x_1796_ = lean_float_of_nat(v___x_1795_);
v___y_1782_ = v___x_1796_;
goto v___jp_1781_;
}
}
v___jp_1716_:
{
lean_object* v___x_1720_; 
lean_inc(v___y_1717_);
v___x_1720_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__4(v_oldTraces_1708_, v_data_1719_, v___y_1717_, v___y_1718_, v___y_1711_, v___y_1712_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v___x_1721_; 
lean_dec_ref_known(v___x_1720_, 1);
v___x_1721_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_fst_1714_);
return v___x_1721_;
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
lean_dec(v_fst_1714_);
v_a_1722_ = lean_ctor_get(v___x_1720_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1720_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1720_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
}
v___jp_1734_:
{
uint8_t v_result_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; double v___x_1740_; lean_object* v_data_1741_; 
v_result_1737_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1_spec__2(v_fst_1714_);
v___x_1738_ = lean_box(v_result_1737_);
v___x_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
v___x_1740_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__0);
lean_inc_ref(v_tag_1705_);
lean_inc_ref(v___x_1739_);
lean_inc(v_cls_1703_);
v_data_1741_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1741_, 0, v_cls_1703_);
lean_ctor_set(v_data_1741_, 1, v___x_1739_);
lean_ctor_set(v_data_1741_, 2, v_tag_1705_);
lean_ctor_set_float(v_data_1741_, sizeof(void*)*3, v___x_1740_);
lean_ctor_set_float(v_data_1741_, sizeof(void*)*3 + 8, v___x_1740_);
lean_ctor_set_uint8(v_data_1741_, sizeof(void*)*3 + 16, v_collapsed_1704_);
if (v___x_1733_ == 0)
{
lean_dec_ref_known(v___x_1739_, 1);
lean_dec(v_snd_1731_);
lean_dec(v_fst_1730_);
lean_dec_ref(v_tag_1705_);
lean_dec(v_cls_1703_);
v___y_1717_ = v___y_1735_;
v___y_1718_ = v_a_1736_;
v_data_1719_ = v_data_1741_;
goto v___jp_1716_;
}
else
{
lean_object* v_data_1742_; double v___x_1743_; double v___x_1744_; 
lean_dec_ref_known(v_data_1741_, 3);
v_data_1742_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1742_, 0, v_cls_1703_);
lean_ctor_set(v_data_1742_, 1, v___x_1739_);
lean_ctor_set(v_data_1742_, 2, v_tag_1705_);
v___x_1743_ = lean_unbox_float(v_fst_1730_);
lean_dec(v_fst_1730_);
lean_ctor_set_float(v_data_1742_, sizeof(void*)*3, v___x_1743_);
v___x_1744_ = lean_unbox_float(v_snd_1731_);
lean_dec(v_snd_1731_);
lean_ctor_set_float(v_data_1742_, sizeof(void*)*3 + 8, v___x_1744_);
lean_ctor_set_uint8(v_data_1742_, sizeof(void*)*3 + 16, v_collapsed_1704_);
v___y_1717_ = v___y_1735_;
v___y_1718_ = v_a_1736_;
v_data_1719_ = v_data_1742_;
goto v___jp_1716_;
}
}
v___jp_1745_:
{
lean_object* v_ref_1746_; lean_object* v___x_1747_; 
v_ref_1746_ = lean_ctor_get(v___y_1711_, 2);
lean_inc(v___y_1712_);
lean_inc_ref(v___y_1711_);
lean_inc(v_fst_1714_);
v___x_1747_ = lean_apply_4(v_msg_1709_, v_fst_1714_, v___y_1711_, v___y_1712_, lean_box(0));
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
lean_inc(v_a_1748_);
lean_dec_ref_known(v___x_1747_, 1);
v___y_1735_ = v_ref_1746_;
v_a_1736_ = v_a_1748_;
goto v___jp_1734_;
}
else
{
lean_object* v___x_1749_; 
lean_dec_ref_known(v___x_1747_, 1);
v___x_1749_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3___closed__2);
v___y_1735_ = v_ref_1746_;
v_a_1736_ = v___x_1749_;
goto v___jp_1734_;
}
}
v___jp_1750_:
{
if (v_clsEnabled_1707_ == 0)
{
if (v___y_1751_ == 0)
{
lean_object* v___x_1752_; lean_object* v_traceState_1753_; lean_object* v_env_1754_; lean_object* v_nextMacroScope_1755_; lean_object* v_ngen_1756_; lean_object* v_auxDeclNGen_1757_; lean_object* v_cache_1758_; lean_object* v_messages_1759_; lean_object* v_infoState_1760_; lean_object* v_snapshotTasks_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1780_; 
lean_dec(v_snd_1731_);
lean_dec(v_fst_1730_);
lean_dec_ref(v_msg_1709_);
lean_dec_ref(v_tag_1705_);
lean_dec(v_cls_1703_);
v___x_1752_ = lean_st_ref_take(v___y_1712_);
v_traceState_1753_ = lean_ctor_get(v___x_1752_, 4);
v_env_1754_ = lean_ctor_get(v___x_1752_, 0);
v_nextMacroScope_1755_ = lean_ctor_get(v___x_1752_, 1);
v_ngen_1756_ = lean_ctor_get(v___x_1752_, 2);
v_auxDeclNGen_1757_ = lean_ctor_get(v___x_1752_, 3);
v_cache_1758_ = lean_ctor_get(v___x_1752_, 5);
v_messages_1759_ = lean_ctor_get(v___x_1752_, 6);
v_infoState_1760_ = lean_ctor_get(v___x_1752_, 7);
v_snapshotTasks_1761_ = lean_ctor_get(v___x_1752_, 8);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1763_ = v___x_1752_;
v_isShared_1764_ = v_isSharedCheck_1780_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_snapshotTasks_1761_);
lean_inc(v_infoState_1760_);
lean_inc(v_messages_1759_);
lean_inc(v_cache_1758_);
lean_inc(v_traceState_1753_);
lean_inc(v_auxDeclNGen_1757_);
lean_inc(v_ngen_1756_);
lean_inc(v_nextMacroScope_1755_);
lean_inc(v_env_1754_);
lean_dec(v___x_1752_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1780_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
uint64_t v_tid_1765_; lean_object* v_traces_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1779_; 
v_tid_1765_ = lean_ctor_get_uint64(v_traceState_1753_, sizeof(void*)*1);
v_traces_1766_ = lean_ctor_get(v_traceState_1753_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v_traceState_1753_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1768_ = v_traceState_1753_;
v_isShared_1769_ = v_isSharedCheck_1779_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_traces_1766_);
lean_dec(v_traceState_1753_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1779_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1772_; 
v___x_1770_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1708_, v_traces_1766_);
lean_dec_ref(v_traces_1766_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 0, v___x_1770_);
v___x_1772_ = v___x_1768_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v___x_1770_);
lean_ctor_set_uint64(v_reuseFailAlloc_1778_, sizeof(void*)*1, v_tid_1765_);
v___x_1772_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
lean_object* v___x_1774_; 
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 4, v___x_1772_);
v___x_1774_ = v___x_1763_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_env_1754_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v_nextMacroScope_1755_);
lean_ctor_set(v_reuseFailAlloc_1777_, 2, v_ngen_1756_);
lean_ctor_set(v_reuseFailAlloc_1777_, 3, v_auxDeclNGen_1757_);
lean_ctor_set(v_reuseFailAlloc_1777_, 4, v___x_1772_);
lean_ctor_set(v_reuseFailAlloc_1777_, 5, v_cache_1758_);
lean_ctor_set(v_reuseFailAlloc_1777_, 6, v_messages_1759_);
lean_ctor_set(v_reuseFailAlloc_1777_, 7, v_infoState_1760_);
lean_ctor_set(v_reuseFailAlloc_1777_, 8, v_snapshotTasks_1761_);
v___x_1774_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1775_ = lean_st_ref_put(v___y_1712_, v___x_1774_);
v___x_1776_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__3_spec__5___redArg(v_fst_1714_);
return v___x_1776_;
}
}
}
}
}
else
{
goto v___jp_1745_;
}
}
else
{
goto v___jp_1745_;
}
}
v___jp_1781_:
{
double v___x_1783_; double v___x_1784_; double v___x_1785_; uint8_t v___x_1786_; 
v___x_1783_ = lean_unbox_float(v_snd_1731_);
v___x_1784_ = lean_unbox_float(v_fst_1730_);
v___x_1785_ = lean_float_sub(v___x_1783_, v___x_1784_);
v___x_1786_ = lean_float_decLt(v___y_1782_, v___x_1785_);
v___y_1751_ = v___x_1786_;
goto v___jp_1750_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1___boxed(lean_object* v_cls_1797_, lean_object* v_collapsed_1798_, lean_object* v_tag_1799_, lean_object* v_opts_1800_, lean_object* v_clsEnabled_1801_, lean_object* v_oldTraces_1802_, lean_object* v_msg_1803_, lean_object* v_resStartStop_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
uint8_t v_collapsed_boxed_1808_; uint8_t v_clsEnabled_boxed_1809_; lean_object* v_res_1810_; 
v_collapsed_boxed_1808_ = lean_unbox(v_collapsed_1798_);
v_clsEnabled_boxed_1809_ = lean_unbox(v_clsEnabled_1801_);
v_res_1810_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1(v_cls_1797_, v_collapsed_boxed_1808_, v_tag_1799_, v_opts_1800_, v_clsEnabled_boxed_1809_, v_oldTraces_1802_, v_msg_1803_, v_resStartStop_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec_ref(v_opts_1800_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__4(lean_object* v___f_1811_, lean_object* v_lratPath_1812_, uint8_t v_trimProofs_1813_, lean_object* v___f_1814_, lean_object* v_solver_1815_, lean_object* v_timeout_1816_, uint8_t v_binaryProofs_1817_, uint8_t v_solverMode_1818_, lean_object* v___f_1819_, lean_object* v___f_1820_, lean_object* v_cnfHandle_1821_, lean_object* v_cnfPath_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_){
_start:
{
lean_object* v___y_1827_; lean_object* v_toCold_1845_; lean_object* v_options_1846_; lean_object* v_ref_1847_; lean_object* v_inheritedTraceOptions_1848_; uint8_t v_hasTrace_1849_; lean_object* v___x_1850_; uint8_t v___x_1851_; lean_object* v___x_1852_; lean_object* v___y_1854_; lean_object* v___y_1855_; lean_object* v___y_1856_; uint8_t v___y_1857_; lean_object* v_a_1858_; lean_object* v___y_1871_; lean_object* v___y_1872_; lean_object* v___y_1873_; uint8_t v___y_1874_; lean_object* v_a_1875_; lean_object* v___y_1885_; uint8_t v___y_1886_; lean_object* v___y_1928_; lean_object* v___y_1960_; uint8_t v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v_a_1964_; lean_object* v___y_1977_; uint8_t v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v_a_1981_; uint8_t v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_2041_; 
v_toCold_1845_ = lean_ctor_get(v___y_1823_, 0);
v_options_1846_ = lean_ctor_get(v_toCold_1845_, 2);
v_ref_1847_ = lean_ctor_get(v___y_1823_, 2);
v_inheritedTraceOptions_1848_ = lean_ctor_get(v_toCold_1845_, 11);
v_hasTrace_1849_ = lean_ctor_get_uint8(v_options_1846_, sizeof(void*)*1);
v___x_1850_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__4));
v___x_1851_ = 1;
v___x_1852_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__0___closed__0));
if (v_hasTrace_1849_ == 0)
{
lean_object* v___x_2050_; 
lean_dec_ref(v___f_1820_);
v___x_2050_ = l_IO_lazyPure___redArg(v___f_1819_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v___x_2052_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2051_);
lean_dec_ref_known(v___x_2050_, 1);
v___x_2052_ = lean_io_prim_handle_put_str(v_cnfHandle_1821_, v_a_2051_);
lean_dec(v_a_2051_);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v___x_2053_; 
lean_dec_ref_known(v___x_2052_, 1);
v___x_2053_ = lean_io_prim_handle_flush(v_cnfHandle_1821_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_dec_ref_known(v___x_2053_, 1);
goto v___jp_2033_;
}
else
{
lean_object* v_a_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2065_; 
lean_dec_ref(v_cnfPath_1822_);
lean_dec_ref(v_solver_1815_);
lean_dec_ref(v___f_1814_);
lean_dec_ref(v_lratPath_1812_);
lean_dec_ref(v___f_1811_);
v_a_2054_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2056_ = v___x_2053_;
v_isShared_2057_ = v_isSharedCheck_2065_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_a_2054_);
lean_dec(v___x_2053_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2065_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2063_; 
v___x_2058_ = lean_io_error_to_string(v_a_2054_);
v___x_2059_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2058_);
v___x_2060_ = l_Lean_MessageData_ofFormat(v___x_2059_);
lean_inc(v_ref_1847_);
v___x_2061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2061_, 0, v_ref_1847_);
lean_ctor_set(v___x_2061_, 1, v___x_2060_);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 0, v___x_2061_);
v___x_2063_ = v___x_2056_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v___x_2061_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2077_; 
lean_dec_ref(v_cnfPath_1822_);
lean_dec_ref(v_solver_1815_);
lean_dec_ref(v___f_1814_);
lean_dec_ref(v_lratPath_1812_);
lean_dec_ref(v___f_1811_);
v_a_2066_ = lean_ctor_get(v___x_2052_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2052_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2068_ = v___x_2052_;
v_isShared_2069_ = v_isSharedCheck_2077_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2052_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2077_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2075_; 
v___x_2070_ = lean_io_error_to_string(v_a_2066_);
v___x_2071_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
v___x_2072_ = l_Lean_MessageData_ofFormat(v___x_2071_);
lean_inc(v_ref_1847_);
v___x_2073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2073_, 0, v_ref_1847_);
lean_ctor_set(v___x_2073_, 1, v___x_2072_);
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 0, v___x_2073_);
v___x_2075_ = v___x_2068_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_2073_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2089_; 
lean_dec_ref(v_cnfPath_1822_);
lean_dec_ref(v_solver_1815_);
lean_dec_ref(v___f_1814_);
lean_dec_ref(v_lratPath_1812_);
lean_dec_ref(v___f_1811_);
v_a_2078_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2080_ = v___x_2050_;
v_isShared_2081_ = v_isSharedCheck_2089_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2050_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2089_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2087_; 
v___x_2082_ = lean_io_error_to_string(v_a_2078_);
v___x_2083_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2082_);
v___x_2084_ = l_Lean_MessageData_ofFormat(v___x_2083_);
lean_inc(v_ref_1847_);
v___x_2085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2085_, 0, v_ref_1847_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 0, v___x_2085_);
v___x_2087_ = v___x_2080_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v___x_2085_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
}
else
{
lean_object* v___x_2090_; uint8_t v___x_2091_; lean_object* v___y_2093_; lean_object* v___y_2094_; lean_object* v_a_2095_; lean_object* v___y_2108_; lean_object* v___y_2109_; lean_object* v_a_2110_; lean_object* v___y_2113_; lean_object* v___y_2114_; lean_object* v_a_2115_; lean_object* v___y_2125_; lean_object* v___y_2126_; lean_object* v_a_2127_; 
v___x_2090_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7);
v___x_2091_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1848_, v_options_1846_, v___x_2090_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2226_; uint8_t v___x_2227_; 
v___x_2226_ = l_Lean_trace_profiler;
v___x_2227_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_options_1846_, v___x_2226_);
if (v___x_2227_ == 0)
{
lean_object* v___x_2228_; 
lean_dec_ref(v___f_1820_);
v___x_2228_ = l_IO_lazyPure___redArg(v___f_1819_);
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v_a_2229_; lean_object* v___x_2230_; 
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc(v_a_2229_);
lean_dec_ref_known(v___x_2228_, 1);
v___x_2230_ = lean_io_prim_handle_put_str(v_cnfHandle_1821_, v_a_2229_);
lean_dec(v_a_2229_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v___x_2231_; 
lean_dec_ref_known(v___x_2230_, 1);
v___x_2231_ = lean_io_prim_handle_flush(v_cnfHandle_1821_);
if (lean_obj_tag(v___x_2231_) == 0)
{
lean_dec_ref_known(v___x_2231_, 1);
goto v___jp_2033_;
}
else
{
lean_object* v_a_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2243_; 
lean_dec_ref(v_cnfPath_1822_);
lean_dec_ref(v_solver_1815_);
lean_dec_ref(v___f_1814_);
lean_dec_ref(v_lratPath_1812_);
lean_dec_ref(v___f_1811_);
v_a_2232_ = lean_ctor_get(v___x_2231_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2231_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2234_ = v___x_2231_;
v_isShared_2235_ = v_isSharedCheck_2243_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_a_2232_);
lean_dec(v___x_2231_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2243_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2241_; 
v___x_2236_ = lean_io_error_to_string(v_a_2232_);
v___x_2237_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
v___x_2238_ = l_Lean_MessageData_ofFormat(v___x_2237_);
lean_inc(v_ref_1847_);
v___x_2239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2239_, 0, v_ref_1847_);
lean_ctor_set(v___x_2239_, 1, v___x_2238_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 0, v___x_2239_);
v___x_2241_ = v___x_2234_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2255_; 
lean_dec_ref(v_cnfPath_1822_);
lean_dec_ref(v_solver_1815_);
lean_dec_ref(v___f_1814_);
lean_dec_ref(v_lratPath_1812_);
lean_dec_ref(v___f_1811_);
v_a_2244_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2246_ = v___x_2230_;
v_isShared_2247_ = v_isSharedCheck_2255_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_a_2244_);
lean_dec(v___x_2230_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2255_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2253_; 
v___x_2248_ = lean_io_error_to_string(v_a_2244_);
v___x_2249_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
v___x_2250_ = l_Lean_MessageData_ofFormat(v___x_2249_);
lean_inc(v_ref_1847_);
v___x_2251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2251_, 0, v_ref_1847_);
lean_ctor_set(v___x_2251_, 1, v___x_2250_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 0, v___x_2251_);
v___x_2253_ = v___x_2246_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v___x_2251_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
}
else
{
lean_object* v_a_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2267_; 
lean_dec_ref(v_cnfPath_1822_);
lean_dec_ref(v_solver_1815_);
lean_dec_ref(v___f_1814_);
lean_dec_ref(v_lratPath_1812_);
lean_dec_ref(v___f_1811_);
v_a_2256_ = lean_ctor_get(v___x_2228_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2258_ = v___x_2228_;
v_isShared_2259_ = v_isSharedCheck_2267_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_a_2256_);
lean_dec(v___x_2228_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2267_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2260_ = lean_io_error_to_string(v_a_2256_);
v___x_2261_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
v___x_2262_ = l_Lean_MessageData_ofFormat(v___x_2261_);
lean_inc(v_ref_1847_);
v___x_2263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2263_, 0, v_ref_1847_);
lean_ctor_set(v___x_2263_, 1, v___x_2262_);
if (v_isShared_2259_ == 0)
{
lean_ctor_set(v___x_2258_, 0, v___x_2263_);
v___x_2265_ = v___x_2258_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
else
{
goto v___jp_2129_;
}
}
else
{
goto v___jp_2129_;
}
v___jp_2092_:
{
lean_object* v___x_2096_; double v___x_2097_; double v___x_2098_; double v___x_2099_; double v___x_2100_; double v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2096_ = lean_io_mono_nanos_now();
v___x_2097_ = lean_float_of_nat(v___y_2093_);
v___x_2098_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10);
v___x_2099_ = lean_float_div(v___x_2097_, v___x_2098_);
v___x_2100_ = lean_float_of_nat(v___x_2096_);
v___x_2101_ = lean_float_div(v___x_2100_, v___x_2098_);
v___x_2102_ = lean_box_float(v___x_2099_);
v___x_2103_ = lean_box_float(v___x_2101_);
v___x_2104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2102_);
lean_ctor_set(v___x_2104_, 1, v___x_2103_);
v___x_2105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2105_, 0, v_a_2095_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
v___x_2106_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2(v___x_1850_, v___x_1851_, v___x_1852_, v_options_1846_, v___x_2091_, v___y_2094_, v___f_1820_, v___x_2105_, v___y_1823_, v___y_1824_);
v___y_2041_ = v___x_2106_;
goto v___jp_2040_;
}
v___jp_2107_:
{
lean_object* v___x_2111_; 
v___x_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2111_, 0, v_a_2110_);
v___y_2093_ = v___y_2108_;
v___y_2094_ = v___y_2109_;
v_a_2095_ = v___x_2111_;
goto v___jp_2092_;
}
v___jp_2112_:
{
lean_object* v___x_2116_; double v___x_2117_; double v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2116_ = lean_io_get_num_heartbeats();
v___x_2117_ = lean_float_of_nat(v___y_2113_);
v___x_2118_ = lean_float_of_nat(v___x_2116_);
v___x_2119_ = lean_box_float(v___x_2117_);
v___x_2120_ = lean_box_float(v___x_2118_);
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2119_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v_a_2115_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__2(v___x_1850_, v___x_1851_, v___x_1852_, v_options_1846_, v___x_2091_, v___y_2114_, v___f_1820_, v___x_2122_, v___y_1823_, v___y_1824_);
v___y_2041_ = v___x_2123_;
goto v___jp_2040_;
}
v___jp_2124_:
{
lean_object* v___x_2128_; 
v___x_2128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2128_, 0, v_a_2127_);
v___y_2113_ = v___y_2125_;
v___y_2114_ = v___y_2126_;
v_a_2115_ = v___x_2128_;
goto v___jp_2112_;
}
v___jp_2129_:
{
lean_object* v___x_2130_; lean_object* v_a_2131_; lean_object* v___x_2132_; uint8_t v___x_2133_; 
v___x_2130_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg(v___y_1824_);
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref(v___x_2130_);
v___x_2132_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2133_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_options_1846_, v___x_2132_);
if (v___x_2133_ == 0)
{
lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2134_ = lean_io_mono_nanos_now();
v___x_2135_ = l_IO_lazyPure___redArg(v___f_1819_);
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v_a_2136_; lean_object* v___x_2137_; 
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_a_2136_);
lean_dec_ref_known(v___x_2135_, 1);
v___x_2137_ = lean_io_prim_handle_put_str(v_cnfHandle_1821_, v_a_2136_);
lean_dec(v_a_2136_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v___x_2138_; 
lean_dec_ref_known(v___x_2137_, 1);
v___x_2138_ = lean_io_prim_handle_flush(v_cnfHandle_1821_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2146_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2141_ = v___x_2138_;
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2138_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2142_ == 0)
{
lean_ctor_set_tag(v___x_2141_, 1);
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
v___y_2093_ = v___x_2134_;
v___y_2094_ = v_a_2131_;
v_a_2095_ = v___x_2144_;
goto v___jp_2092_;
}
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2157_; 
v_a_2147_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2149_ = v___x_2138_;
v_isShared_2150_ = v_isSharedCheck_2157_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2138_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2157_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2151_; lean_object* v___x_2153_; 
v___x_2151_ = lean_io_error_to_string(v_a_2147_);
if (v_isShared_2150_ == 0)
{
lean_ctor_set_tag(v___x_2149_, 3);
lean_ctor_set(v___x_2149_, 0, v___x_2151_);
v___x_2153_ = v___x_2149_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v___x_2151_);
v___x_2153_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = l_Lean_MessageData_ofFormat(v___x_2153_);
lean_inc(v_ref_1847_);
v___x_2155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2155_, 0, v_ref_1847_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___y_2108_ = v___x_2134_;
v___y_2109_ = v_a_2131_;
v_a_2110_ = v___x_2155_;
goto v___jp_2107_;
}
}
}
}
else
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2168_; 
v_a_2158_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2160_ = v___x_2137_;
v_isShared_2161_ = v_isSharedCheck_2168_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2137_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2168_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2162_; lean_object* v___x_2164_; 
v___x_2162_ = lean_io_error_to_string(v_a_2158_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set_tag(v___x_2160_, 3);
lean_ctor_set(v___x_2160_, 0, v___x_2162_);
v___x_2164_ = v___x_2160_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2162_);
v___x_2164_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2165_ = l_Lean_MessageData_ofFormat(v___x_2164_);
lean_inc(v_ref_1847_);
v___x_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2166_, 0, v_ref_1847_);
lean_ctor_set(v___x_2166_, 1, v___x_2165_);
v___y_2108_ = v___x_2134_;
v___y_2109_ = v_a_2131_;
v_a_2110_ = v___x_2166_;
goto v___jp_2107_;
}
}
}
}
else
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2179_; 
v_a_2169_ = lean_ctor_get(v___x_2135_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2135_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2171_ = v___x_2135_;
v_isShared_2172_ = v_isSharedCheck_2179_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2135_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2179_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2173_; lean_object* v___x_2175_; 
v___x_2173_ = lean_io_error_to_string(v_a_2169_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set_tag(v___x_2171_, 3);
lean_ctor_set(v___x_2171_, 0, v___x_2173_);
v___x_2175_ = v___x_2171_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v___x_2173_);
v___x_2175_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2176_ = l_Lean_MessageData_ofFormat(v___x_2175_);
lean_inc(v_ref_1847_);
v___x_2177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2177_, 0, v_ref_1847_);
lean_ctor_set(v___x_2177_, 1, v___x_2176_);
v___y_2108_ = v___x_2134_;
v___y_2109_ = v_a_2131_;
v_a_2110_ = v___x_2177_;
goto v___jp_2107_;
}
}
}
}
else
{
lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2180_ = lean_io_get_num_heartbeats();
v___x_2181_ = l_IO_lazyPure___redArg(v___f_1819_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; lean_object* v___x_2183_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2182_);
lean_dec_ref_known(v___x_2181_, 1);
v___x_2183_ = lean_io_prim_handle_put_str(v_cnfHandle_1821_, v_a_2182_);
lean_dec(v_a_2182_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v___x_2184_; 
lean_dec_ref_known(v___x_2183_, 1);
v___x_2184_ = lean_io_prim_handle_flush(v_cnfHandle_1821_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2187_ = v___x_2184_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2184_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
lean_ctor_set_tag(v___x_2187_, 1);
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
v___y_2113_ = v___x_2180_;
v___y_2114_ = v_a_2131_;
v_a_2115_ = v___x_2190_;
goto v___jp_2112_;
}
}
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2203_; 
v_a_2193_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2195_ = v___x_2184_;
v_isShared_2196_ = v_isSharedCheck_2203_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2184_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2203_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2197_; lean_object* v___x_2199_; 
v___x_2197_ = lean_io_error_to_string(v_a_2193_);
if (v_isShared_2196_ == 0)
{
lean_ctor_set_tag(v___x_2195_, 3);
lean_ctor_set(v___x_2195_, 0, v___x_2197_);
v___x_2199_ = v___x_2195_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2200_ = l_Lean_MessageData_ofFormat(v___x_2199_);
lean_inc(v_ref_1847_);
v___x_2201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2201_, 0, v_ref_1847_);
lean_ctor_set(v___x_2201_, 1, v___x_2200_);
v___y_2125_ = v___x_2180_;
v___y_2126_ = v_a_2131_;
v_a_2127_ = v___x_2201_;
goto v___jp_2124_;
}
}
}
}
else
{
lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2214_; 
v_a_2204_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2206_ = v___x_2183_;
v_isShared_2207_ = v_isSharedCheck_2214_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v___x_2183_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2214_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2208_; lean_object* v___x_2210_; 
v___x_2208_ = lean_io_error_to_string(v_a_2204_);
if (v_isShared_2207_ == 0)
{
lean_ctor_set_tag(v___x_2206_, 3);
lean_ctor_set(v___x_2206_, 0, v___x_2208_);
v___x_2210_ = v___x_2206_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v___x_2208_);
v___x_2210_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2211_ = l_Lean_MessageData_ofFormat(v___x_2210_);
lean_inc(v_ref_1847_);
v___x_2212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2212_, 0, v_ref_1847_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___y_2125_ = v___x_2180_;
v___y_2126_ = v_a_2131_;
v_a_2127_ = v___x_2212_;
goto v___jp_2124_;
}
}
}
}
else
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2225_; 
v_a_2215_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2217_ = v___x_2181_;
v_isShared_2218_ = v_isSharedCheck_2225_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2181_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2225_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2221_; 
v___x_2219_ = lean_io_error_to_string(v_a_2215_);
if (v_isShared_2218_ == 0)
{
lean_ctor_set_tag(v___x_2217_, 3);
lean_ctor_set(v___x_2217_, 0, v___x_2219_);
v___x_2221_ = v___x_2217_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2222_ = l_Lean_MessageData_ofFormat(v___x_2221_);
lean_inc(v_ref_1847_);
v___x_2223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2223_, 0, v_ref_1847_);
lean_ctor_set(v___x_2223_, 1, v___x_2222_);
v___y_2125_ = v___x_2180_;
v___y_2126_ = v_a_2131_;
v_a_2127_ = v___x_2223_;
goto v___jp_2124_;
}
}
}
}
}
}
v___jp_1826_:
{
if (lean_obj_tag(v___y_1827_) == 0)
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1836_; 
v_a_1828_ = lean_ctor_get(v___y_1827_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___y_1827_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1830_ = v___y_1827_;
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v___y_1827_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1832_; lean_object* v___x_1834_; 
v___x_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1832_, 0, v_a_1828_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 0, v___x_1832_);
v___x_1834_ = v___x_1830_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v___x_1832_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1844_; 
v_a_1837_ = lean_ctor_get(v___y_1827_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___y_1827_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1839_ = v___y_1827_;
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___y_1827_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
v___jp_1853_:
{
lean_object* v___x_1859_; double v___x_1860_; double v___x_1861_; double v___x_1862_; double v___x_1863_; double v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1859_ = lean_io_mono_nanos_now();
v___x_1860_ = lean_float_of_nat(v___y_1854_);
v___x_1861_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10);
v___x_1862_ = lean_float_div(v___x_1860_, v___x_1861_);
v___x_1863_ = lean_float_of_nat(v___x_1859_);
v___x_1864_ = lean_float_div(v___x_1863_, v___x_1861_);
v___x_1865_ = lean_box_float(v___x_1862_);
v___x_1866_ = lean_box_float(v___x_1864_);
v___x_1867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1865_);
lean_ctor_set(v___x_1867_, 1, v___x_1866_);
v___x_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1868_, 0, v_a_1858_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
v___x_1869_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0(v___x_1850_, v___x_1851_, v___x_1852_, v___y_1856_, v___y_1857_, v___y_1855_, v___f_1811_, v___x_1868_, v___y_1823_, v___y_1824_);
v___y_1827_ = v___x_1869_;
goto v___jp_1826_;
}
v___jp_1870_:
{
lean_object* v___x_1876_; double v___x_1877_; double v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1876_ = lean_io_get_num_heartbeats();
v___x_1877_ = lean_float_of_nat(v___y_1873_);
v___x_1878_ = lean_float_of_nat(v___x_1876_);
v___x_1879_ = lean_box_float(v___x_1877_);
v___x_1880_ = lean_box_float(v___x_1878_);
v___x_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1879_);
lean_ctor_set(v___x_1881_, 1, v___x_1880_);
v___x_1882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1882_, 0, v_a_1875_);
lean_ctor_set(v___x_1882_, 1, v___x_1881_);
v___x_1883_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__0(v___x_1850_, v___x_1851_, v___x_1852_, v___y_1872_, v___y_1874_, v___y_1871_, v___f_1811_, v___x_1882_, v___y_1823_, v___y_1824_);
v___y_1827_ = v___x_1883_;
goto v___jp_1826_;
}
v___jp_1884_:
{
lean_object* v___x_1887_; lean_object* v_a_1888_; lean_object* v___x_1889_; uint8_t v___x_1890_; 
v___x_1887_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg(v___y_1824_);
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc(v_a_1888_);
lean_dec_ref(v___x_1887_);
v___x_1889_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1890_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v___y_1885_, v___x_1889_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = lean_io_mono_nanos_now();
v___x_1892_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_1812_, v_trimProofs_1813_, v___y_1823_, v___y_1824_);
lean_dec_ref(v_lratPath_1812_);
if (lean_obj_tag(v___x_1892_) == 0)
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
v_a_1893_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1892_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1892_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
lean_ctor_set_tag(v___x_1895_, 1);
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
v___y_1854_ = v___x_1891_;
v___y_1855_ = v_a_1888_;
v___y_1856_ = v___y_1885_;
v___y_1857_ = v___y_1886_;
v_a_1858_ = v___x_1898_;
goto v___jp_1853_;
}
}
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
v_a_1901_ = lean_ctor_get(v___x_1892_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1892_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1892_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1892_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
lean_ctor_set_tag(v___x_1903_, 0);
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
v___y_1854_ = v___x_1891_;
v___y_1855_ = v_a_1888_;
v___y_1856_ = v___y_1885_;
v___y_1857_ = v___y_1886_;
v_a_1858_ = v___x_1906_;
goto v___jp_1853_;
}
}
}
}
else
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_io_get_num_heartbeats();
v___x_1910_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_1812_, v_trimProofs_1813_, v___y_1823_, v___y_1824_);
lean_dec_ref(v_lratPath_1812_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1910_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1910_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
lean_ctor_set_tag(v___x_1913_, 1);
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
v___y_1871_ = v_a_1888_;
v___y_1872_ = v___y_1885_;
v___y_1873_ = v___x_1909_;
v___y_1874_ = v___y_1886_;
v_a_1875_ = v___x_1916_;
goto v___jp_1870_;
}
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
v_a_1919_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1910_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1910_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
lean_ctor_set_tag(v___x_1921_, 0);
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
v___y_1871_ = v_a_1888_;
v___y_1872_ = v___y_1885_;
v___y_1873_ = v___x_1909_;
v___y_1874_ = v___y_1886_;
v_a_1875_ = v___x_1924_;
goto v___jp_1870_;
}
}
}
}
}
v___jp_1927_:
{
if (lean_obj_tag(v___y_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1950_; 
v_a_1929_ = lean_ctor_get(v___y_1928_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___y_1928_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1931_ = v___y_1928_;
v_isShared_1932_ = v_isSharedCheck_1950_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___y_1928_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1950_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
if (lean_obj_tag(v_a_1929_) == 0)
{
lean_object* v_assignment_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1943_; 
lean_dec_ref(v_lratPath_1812_);
lean_dec_ref(v___f_1811_);
v_assignment_1933_ = lean_ctor_get(v_a_1929_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v_a_1929_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1935_ = v_a_1929_;
v_isShared_1936_ = v_isSharedCheck_1943_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_assignment_1933_);
lean_dec(v_a_1929_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1943_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_assignment_1933_);
v___x_1938_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
lean_object* v___x_1940_; 
if (v_isShared_1932_ == 0)
{
lean_ctor_set(v___x_1931_, 0, v___x_1938_);
v___x_1940_ = v___x_1931_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v___x_1938_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
else
{
lean_del_object(v___x_1931_);
lean_dec(v_a_1929_);
if (v_hasTrace_1849_ == 0)
{
lean_object* v___x_1944_; 
lean_dec_ref(v___f_1811_);
v___x_1944_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_1812_, v_trimProofs_1813_, v___y_1823_, v___y_1824_);
lean_dec_ref(v_lratPath_1812_);
v___y_1827_ = v___x_1944_;
goto v___jp_1826_;
}
else
{
lean_object* v___x_1945_; uint8_t v___x_1946_; 
v___x_1945_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7);
v___x_1946_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1848_, v_options_1846_, v___x_1945_);
if (v___x_1946_ == 0)
{
lean_object* v___x_1947_; uint8_t v___x_1948_; 
v___x_1947_ = l_Lean_trace_profiler;
v___x_1948_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_options_1846_, v___x_1947_);
if (v___x_1948_ == 0)
{
lean_object* v___x_1949_; 
lean_dec_ref(v___f_1811_);
v___x_1949_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_1812_, v_trimProofs_1813_, v___y_1823_, v___y_1824_);
lean_dec_ref(v_lratPath_1812_);
v___y_1827_ = v___x_1949_;
goto v___jp_1826_;
}
else
{
v___y_1885_ = v_options_1846_;
v___y_1886_ = v___x_1946_;
goto v___jp_1884_;
}
}
else
{
v___y_1885_ = v_options_1846_;
v___y_1886_ = v___x_1946_;
goto v___jp_1884_;
}
}
}
}
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_dec_ref(v_lratPath_1812_);
lean_dec_ref(v___f_1811_);
v_a_1951_ = lean_ctor_get(v___y_1928_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___y_1928_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___y_1928_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___y_1928_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
v___jp_1959_:
{
lean_object* v___x_1965_; double v___x_1966_; double v___x_1967_; double v___x_1968_; double v___x_1969_; double v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1965_ = lean_io_mono_nanos_now();
v___x_1966_ = lean_float_of_nat(v___y_1963_);
v___x_1967_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__10);
v___x_1968_ = lean_float_div(v___x_1966_, v___x_1967_);
v___x_1969_ = lean_float_of_nat(v___x_1965_);
v___x_1970_ = lean_float_div(v___x_1969_, v___x_1967_);
v___x_1971_ = lean_box_float(v___x_1968_);
v___x_1972_ = lean_box_float(v___x_1970_);
v___x_1973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1971_);
lean_ctor_set(v___x_1973_, 1, v___x_1972_);
v___x_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1974_, 0, v_a_1964_);
lean_ctor_set(v___x_1974_, 1, v___x_1973_);
v___x_1975_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1(v___x_1850_, v___x_1851_, v___x_1852_, v___y_1962_, v___y_1961_, v___y_1960_, v___f_1814_, v___x_1974_, v___y_1823_, v___y_1824_);
v___y_1928_ = v___x_1975_;
goto v___jp_1927_;
}
v___jp_1976_:
{
lean_object* v___x_1982_; double v___x_1983_; double v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1982_ = lean_io_get_num_heartbeats();
v___x_1983_ = lean_float_of_nat(v___y_1980_);
v___x_1984_ = lean_float_of_nat(v___x_1982_);
v___x_1985_ = lean_box_float(v___x_1983_);
v___x_1986_ = lean_box_float(v___x_1984_);
v___x_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1985_);
lean_ctor_set(v___x_1987_, 1, v___x_1986_);
v___x_1988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1988_, 0, v_a_1981_);
lean_ctor_set(v___x_1988_, 1, v___x_1987_);
v___x_1989_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__1(v___x_1850_, v___x_1851_, v___x_1852_, v___y_1979_, v___y_1978_, v___y_1977_, v___f_1814_, v___x_1988_, v___y_1823_, v___y_1824_);
v___y_1928_ = v___x_1989_;
goto v___jp_1927_;
}
v___jp_1990_:
{
lean_object* v___x_1993_; lean_object* v_a_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; 
v___x_1993_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__1___redArg(v___y_1824_);
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_a_1994_);
lean_dec_ref(v___x_1993_);
v___x_1995_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1996_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v___y_1992_, v___x_1995_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = lean_io_mono_nanos_now();
lean_inc_ref(v_lratPath_1812_);
v___x_1998_ = l_Lean_Meta_Tactic_BVDecide_External_satQuery(v_solver_1815_, v_cnfPath_1822_, v_lratPath_1812_, v_timeout_1816_, v_binaryProofs_1817_, v_solverMode_1818_, v___y_1823_, v___y_1824_);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1998_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1998_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
lean_ctor_set_tag(v___x_2001_, 1);
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
v___y_1960_ = v_a_1994_;
v___y_1961_ = v___y_1991_;
v___y_1962_ = v___y_1992_;
v___y_1963_ = v___x_1997_;
v_a_1964_ = v___x_2004_;
goto v___jp_1959_;
}
}
}
else
{
lean_object* v_a_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
v_a_2007_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2009_ = v___x_1998_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_a_2007_);
lean_dec(v___x_1998_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set_tag(v___x_2009_, 0);
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_a_2007_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
v___y_1960_ = v_a_1994_;
v___y_1961_ = v___y_1991_;
v___y_1962_ = v___y_1992_;
v___y_1963_ = v___x_1997_;
v_a_1964_ = v___x_2012_;
goto v___jp_1959_;
}
}
}
}
else
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_lratPath_1812_);
v___x_2016_ = l_Lean_Meta_Tactic_BVDecide_External_satQuery(v_solver_1815_, v_cnfPath_1822_, v_lratPath_1812_, v_timeout_1816_, v_binaryProofs_1817_, v_solverMode_1818_, v___y_1823_, v___y_1824_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
lean_ctor_set_tag(v___x_2019_, 1);
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
v___y_1977_ = v_a_1994_;
v___y_1978_ = v___y_1991_;
v___y_1979_ = v___y_1992_;
v___y_1980_ = v___x_2015_;
v_a_1981_ = v___x_2022_;
goto v___jp_1976_;
}
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
v_a_2025_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2016_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2016_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set_tag(v___x_2027_, 0);
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
v___y_1977_ = v_a_1994_;
v___y_1978_ = v___y_1991_;
v___y_1979_ = v___y_1992_;
v___y_1980_ = v___x_2015_;
v_a_1981_ = v___x_2030_;
goto v___jp_1976_;
}
}
}
}
}
v___jp_2033_:
{
if (v_hasTrace_1849_ == 0)
{
lean_object* v___x_2034_; 
lean_dec_ref(v___f_1814_);
lean_inc_ref(v_lratPath_1812_);
v___x_2034_ = l_Lean_Meta_Tactic_BVDecide_External_satQuery(v_solver_1815_, v_cnfPath_1822_, v_lratPath_1812_, v_timeout_1816_, v_binaryProofs_1817_, v_solverMode_1818_, v___y_1823_, v___y_1824_);
v___y_1928_ = v___x_2034_;
goto v___jp_1927_;
}
else
{
lean_object* v___x_2035_; uint8_t v___x_2036_; 
v___x_2035_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7, &l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_LratCert_load___closed__7);
v___x_2036_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1848_, v_options_1846_, v___x_2035_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2037_; uint8_t v___x_2038_; 
v___x_2037_ = l_Lean_trace_profiler;
v___x_2038_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_LratCert_load_spec__2(v_options_1846_, v___x_2037_);
if (v___x_2038_ == 0)
{
lean_object* v___x_2039_; 
lean_dec_ref(v___f_1814_);
lean_inc_ref(v_lratPath_1812_);
v___x_2039_ = l_Lean_Meta_Tactic_BVDecide_External_satQuery(v_solver_1815_, v_cnfPath_1822_, v_lratPath_1812_, v_timeout_1816_, v_binaryProofs_1817_, v_solverMode_1818_, v___y_1823_, v___y_1824_);
v___y_1928_ = v___x_2039_;
goto v___jp_1927_;
}
else
{
v___y_1991_ = v___x_2036_;
v___y_1992_ = v_options_1846_;
goto v___jp_1990_;
}
}
else
{
v___y_1991_ = v___x_2036_;
v___y_1992_ = v_options_1846_;
goto v___jp_1990_;
}
}
}
v___jp_2040_:
{
if (lean_obj_tag(v___y_2041_) == 0)
{
lean_dec_ref_known(v___y_2041_, 1);
goto v___jp_2033_;
}
else
{
lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2049_; 
lean_dec_ref(v_cnfPath_1822_);
lean_dec_ref(v_solver_1815_);
lean_dec_ref(v___f_1814_);
lean_dec_ref(v_lratPath_1812_);
lean_dec_ref(v___f_1811_);
v_a_2042_ = lean_ctor_get(v___y_2041_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___y_2041_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2044_ = v___y_2041_;
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v___y_2041_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2047_; 
if (v_isShared_2045_ == 0)
{
v___x_2047_ = v___x_2044_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_a_2042_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___lam__4___boxed(lean_object* v___f_2268_, lean_object* v_lratPath_2269_, lean_object* v_trimProofs_2270_, lean_object* v___f_2271_, lean_object* v_solver_2272_, lean_object* v_timeout_2273_, lean_object* v_binaryProofs_2274_, lean_object* v_solverMode_2275_, lean_object* v___f_2276_, lean_object* v___f_2277_, lean_object* v_cnfHandle_2278_, lean_object* v_cnfPath_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
uint8_t v_trimProofs_boxed_2283_; uint8_t v_binaryProofs_boxed_2284_; uint8_t v_solverMode_boxed_2285_; lean_object* v_res_2286_; 
v_trimProofs_boxed_2283_ = lean_unbox(v_trimProofs_2270_);
v_binaryProofs_boxed_2284_ = lean_unbox(v_binaryProofs_2274_);
v_solverMode_boxed_2285_ = lean_unbox(v_solverMode_2275_);
v_res_2286_ = l_Lean_Meta_Tactic_BVDecide_runExternal___lam__4(v___f_2268_, v_lratPath_2269_, v_trimProofs_boxed_2283_, v___f_2271_, v_solver_2272_, v_timeout_2273_, v_binaryProofs_boxed_2284_, v_solverMode_boxed_2285_, v___f_2276_, v___f_2277_, v_cnfHandle_2278_, v_cnfPath_2279_, v___y_2280_, v___y_2281_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v_cnfHandle_2278_);
lean_dec(v_timeout_2273_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal(lean_object* v_cnf_2290_, lean_object* v_solver_2291_, lean_object* v_lratPath_2292_, uint8_t v_trimProofs_2293_, lean_object* v_timeout_2294_, uint8_t v_binaryProofs_2295_, uint8_t v_solverMode_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_){
_start:
{
lean_object* v___f_2300_; lean_object* v___f_2301_; lean_object* v___f_2302_; lean_object* v___f_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___f_2307_; lean_object* v___x_2308_; 
v___f_2300_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_runExternal___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2300_, 0, v_cnf_2290_);
v___f_2301_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_runExternal___closed__0));
v___f_2302_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_runExternal___closed__1));
v___f_2303_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_runExternal___closed__2));
v___x_2304_ = lean_box(v_trimProofs_2293_);
v___x_2305_ = lean_box(v_binaryProofs_2295_);
v___x_2306_ = lean_box(v_solverMode_2296_);
v___f_2307_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_runExternal___lam__4___boxed), 15, 10);
lean_closure_set(v___f_2307_, 0, v___f_2302_);
lean_closure_set(v___f_2307_, 1, v_lratPath_2292_);
lean_closure_set(v___f_2307_, 2, v___x_2304_);
lean_closure_set(v___f_2307_, 3, v___f_2301_);
lean_closure_set(v___f_2307_, 4, v_solver_2291_);
lean_closure_set(v___f_2307_, 5, v_timeout_2294_);
lean_closure_set(v___f_2307_, 6, v___x_2305_);
lean_closure_set(v___f_2307_, 7, v___x_2306_);
lean_closure_set(v___f_2307_, 8, v___f_2300_);
lean_closure_set(v___f_2307_, 9, v___f_2303_);
v___x_2308_ = l_IO_FS_withTempFile___at___00Lean_Meta_Tactic_BVDecide_runExternal_spec__3___redArg(v___f_2307_, v_a_2297_, v_a_2298_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal___boxed(lean_object* v_cnf_2309_, lean_object* v_solver_2310_, lean_object* v_lratPath_2311_, lean_object* v_trimProofs_2312_, lean_object* v_timeout_2313_, lean_object* v_binaryProofs_2314_, lean_object* v_solverMode_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_){
_start:
{
uint8_t v_trimProofs_boxed_2319_; uint8_t v_binaryProofs_boxed_2320_; uint8_t v_solverMode_boxed_2321_; lean_object* v_res_2322_; 
v_trimProofs_boxed_2319_ = lean_unbox(v_trimProofs_2312_);
v_binaryProofs_boxed_2320_ = lean_unbox(v_binaryProofs_2314_);
v_solverMode_boxed_2321_ = lean_unbox(v_solverMode_2315_);
v_res_2322_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_cnf_2309_, v_solver_2310_, v_lratPath_2311_, v_trimProofs_boxed_2319_, v_timeout_2313_, v_binaryProofs_boxed_2320_, v_solverMode_boxed_2321_, v_a_2316_, v_a_2317_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
return v_res_2322_;
}
}
lean_object* runtime_initialize_Std_Tactic_BVDecide_LRAT_Checker(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_LRAT_Trim(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_LRAT_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_External(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Tactic_BVDecide_LRAT_Checker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_LRAT_Trim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_LRAT_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_External(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction = _init_l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction();
lean_mark_persistent(l___private_Lean_Meta_Tactic_BVDecide_LRAT_Cert_0__Lean_Meta_Tactic_BVDecide_instToExprIntAction);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_BVDecide_LRAT_Checker(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_LRAT_Trim(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_LRAT_Parser(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_External(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_BVDecide_LRAT_Checker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_LRAT_Trim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_LRAT_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_External(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_LRAT_Cert(builtin);
}
#ifdef __cplusplus
}
#endif

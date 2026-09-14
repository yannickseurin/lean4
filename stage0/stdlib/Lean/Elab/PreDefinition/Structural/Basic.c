// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.Basic
// Imports: public import Lean.Meta.ForEachExpr
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
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Nat_decEq___boxed(lean_object*, lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_blt___boxed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Array_zipWithMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_recArgHasLooseBVarsAt___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_recArgHasLooseBVarsAt___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_recArgHasLooseBVarsAt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_recArgHasLooseBVarsAt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_numIndices_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_numIndices_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_numIndices(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_numIndices___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__6_value;
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__1_value),((lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__2_value)}};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__5_value),((lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__9_value),((lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__7_value)}};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__1;
static const lean_string_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.PreDefinition.Structural.Basic"};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Elab.Structural.Positions.groupAndSort"};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "assertion violation: Array.range xs.size == positions.flatten.qsort Nat.blt\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__5;
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_blt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__6_value;
static const lean_array_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__7_value;
static const lean_closure_object l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Elab.Structural.Positions.mapMwith"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: positions.size = ys.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__2;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: positions.numIndices = xs.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__4;
static const lean_array_object l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structural"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(117, 73, 239, 7, 229, 151, 237, 199)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Structural"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Basic"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__29_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__29_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__29_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__30_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__30_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__31_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__31_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_recArgHasLooseBVarsAt___lam__0(lean_object* v_recArgPos_1_, lean_object* v_recFnName_2_, lean_object* v_e_3_){
_start:
{
uint8_t v___y_5_; uint8_t v___x_12_; 
v___x_12_ = l_Lean_Expr_isAppOf(v_e_3_, v_recFnName_2_);
if (v___x_12_ == 0)
{
v___y_5_ = v___x_12_;
goto v___jp_4_;
}
else
{
lean_object* v___x_13_; uint8_t v___x_14_; 
v___x_13_ = l_Lean_Expr_getAppNumArgs(v_e_3_);
v___x_14_ = lean_nat_dec_lt(v_recArgPos_1_, v___x_13_);
lean_dec(v___x_13_);
v___y_5_ = v___x_14_;
goto v___jp_4_;
}
v___jp_4_:
{
if (v___y_5_ == 0)
{
return v___y_5_;
}
else
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_6_ = l_Lean_Expr_getAppNumArgs(v_e_3_);
v___x_7_ = lean_nat_sub(v___x_6_, v_recArgPos_1_);
lean_dec(v___x_6_);
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_sub(v___x_7_, v___x_8_);
lean_dec(v___x_7_);
v___x_10_ = l_Lean_Expr_getRevArg_x21(v_e_3_, v___x_9_);
v___x_11_ = l_Lean_Expr_hasLooseBVars(v___x_10_);
lean_dec_ref(v___x_10_);
return v___x_11_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_recArgHasLooseBVarsAt___lam__0___boxed(lean_object* v_recArgPos_15_, lean_object* v_recFnName_16_, lean_object* v_e_17_){
_start:
{
uint8_t v_res_18_; lean_object* v_r_19_; 
v_res_18_ = l_Lean_Elab_Structural_recArgHasLooseBVarsAt___lam__0(v_recArgPos_15_, v_recFnName_16_, v_e_17_);
lean_dec_ref(v_e_17_);
lean_dec(v_recFnName_16_);
lean_dec(v_recArgPos_15_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_recArgHasLooseBVarsAt(lean_object* v_recFnName_20_, lean_object* v_recArgPos_21_, lean_object* v_e_22_){
_start:
{
lean_object* v___f_23_; lean_object* v_app_x3f_24_; 
v___f_23_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_recArgHasLooseBVarsAt___lam__0___boxed), 3, 2);
lean_closure_set(v___f_23_, 0, v_recArgPos_21_);
lean_closure_set(v___f_23_, 1, v_recFnName_20_);
v_app_x3f_24_ = lean_find_expr(v___f_23_, v_e_22_);
lean_dec_ref(v___f_23_);
if (lean_obj_tag(v_app_x3f_24_) == 0)
{
uint8_t v___x_25_; 
v___x_25_ = 0;
return v___x_25_;
}
else
{
uint8_t v___x_26_; 
lean_dec_ref_known(v_app_x3f_24_, 1);
v___x_26_ = 1;
return v___x_26_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_recArgHasLooseBVarsAt___boxed(lean_object* v_recFnName_27_, lean_object* v_recArgPos_28_, lean_object* v_e_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l_Lean_Elab_Structural_recArgHasLooseBVarsAt(v_recFnName_27_, v_recArgPos_28_, v_e_29_);
lean_dec_ref(v_e_29_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_numIndices_spec__0(lean_object* v_as_32_, size_t v_i_33_, size_t v_stop_34_, lean_object* v_b_35_){
_start:
{
uint8_t v___x_36_; 
v___x_36_ = lean_usize_dec_eq(v_i_33_, v_stop_34_);
if (v___x_36_ == 0)
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; size_t v___x_40_; size_t v___x_41_; 
v___x_37_ = lean_array_uget_borrowed(v_as_32_, v_i_33_);
v___x_38_ = lean_array_get_size(v___x_37_);
v___x_39_ = lean_nat_add(v_b_35_, v___x_38_);
lean_dec(v_b_35_);
v___x_40_ = ((size_t)1ULL);
v___x_41_ = lean_usize_add(v_i_33_, v___x_40_);
v_i_33_ = v___x_41_;
v_b_35_ = v___x_39_;
goto _start;
}
else
{
return v_b_35_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_numIndices_spec__0___boxed(lean_object* v_as_43_, lean_object* v_i_44_, lean_object* v_stop_45_, lean_object* v_b_46_){
_start:
{
size_t v_i_boxed_47_; size_t v_stop_boxed_48_; lean_object* v_res_49_; 
v_i_boxed_47_ = lean_unbox_usize(v_i_44_);
lean_dec(v_i_44_);
v_stop_boxed_48_ = lean_unbox_usize(v_stop_45_);
lean_dec(v_stop_45_);
v_res_49_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_numIndices_spec__0(v_as_43_, v_i_boxed_47_, v_stop_boxed_48_, v_b_46_);
lean_dec_ref(v_as_43_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_numIndices(lean_object* v_positions_50_){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_51_ = lean_unsigned_to_nat(0u);
v___x_52_ = lean_array_get_size(v_positions_50_);
v___x_53_ = lean_nat_dec_lt(v___x_51_, v___x_52_);
if (v___x_53_ == 0)
{
return v___x_51_;
}
else
{
uint8_t v___x_54_; 
v___x_54_ = lean_nat_dec_le(v___x_52_, v___x_52_);
if (v___x_54_ == 0)
{
if (v___x_53_ == 0)
{
return v___x_51_;
}
else
{
size_t v___x_55_; size_t v___x_56_; lean_object* v___x_57_; 
v___x_55_ = ((size_t)0ULL);
v___x_56_ = lean_usize_of_nat(v___x_52_);
v___x_57_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_numIndices_spec__0(v_positions_50_, v___x_55_, v___x_56_, v___x_51_);
return v___x_57_;
}
}
else
{
size_t v___x_58_; size_t v___x_59_; lean_object* v___x_60_; 
v___x_58_ = ((size_t)0ULL);
v___x_59_ = lean_usize_of_nat(v___x_52_);
v___x_60_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_numIndices_spec__0(v_positions_50_, v___x_58_, v___x_59_, v___x_51_);
return v___x_60_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_numIndices___boxed(lean_object* v_positions_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_61_);
lean_dec_ref(v_positions_61_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__0(lean_object* v_inst_63_, lean_object* v_xs_64_, lean_object* v_f_65_, lean_object* v_inst_66_, lean_object* v_x_67_, lean_object* v_x1_68_, lean_object* v_x2_69_){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_70_ = lean_array_get_borrowed(v_inst_63_, v_xs_64_, v_x2_69_);
lean_inc(v___x_70_);
v___x_71_ = lean_apply_1(v_f_65_, v___x_70_);
v___x_72_ = lean_apply_2(v_inst_66_, v___x_71_, v_x_67_);
v___x_73_ = lean_unbox(v___x_72_);
if (v___x_73_ == 0)
{
lean_dec(v_x2_69_);
return v_x1_68_;
}
else
{
lean_object* v___x_74_; 
v___x_74_ = lean_array_push(v_x1_68_, v_x2_69_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__0___boxed(lean_object* v_inst_75_, lean_object* v_xs_76_, lean_object* v_f_77_, lean_object* v_inst_78_, lean_object* v_x_79_, lean_object* v_x1_80_, lean_object* v_x2_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__0(v_inst_75_, v_xs_76_, v_f_77_, v_inst_78_, v_x_79_, v_x1_80_, v_x2_81_);
lean_dec_ref(v_xs_76_);
lean_dec(v_inst_75_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1(lean_object* v_xs_104_, lean_object* v_inst_105_, lean_object* v_f_106_, lean_object* v_inst_107_, lean_object* v_x_108_){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_109_ = lean_array_get_size(v_xs_104_);
v___x_110_ = l_Array_range(v___x_109_);
v___x_111_ = lean_unsigned_to_nat(0u);
v___x_112_ = lean_array_get_size(v___x_110_);
v___x_113_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__0));
v___x_114_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__10));
v___x_115_ = lean_nat_dec_lt(v___x_111_, v___x_112_);
if (v___x_115_ == 0)
{
lean_dec_ref(v___x_110_);
lean_dec(v_x_108_);
lean_dec_ref(v_inst_107_);
lean_dec(v_f_106_);
lean_dec(v_inst_105_);
lean_dec_ref(v_xs_104_);
return v___x_113_;
}
else
{
lean_object* v___f_116_; uint8_t v___x_117_; 
v___f_116_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_116_, 0, v_inst_105_);
lean_closure_set(v___f_116_, 1, v_xs_104_);
lean_closure_set(v___f_116_, 2, v_f_106_);
lean_closure_set(v___f_116_, 3, v_inst_107_);
lean_closure_set(v___f_116_, 4, v_x_108_);
v___x_117_ = lean_nat_dec_le(v___x_112_, v___x_112_);
if (v___x_117_ == 0)
{
if (v___x_115_ == 0)
{
lean_dec_ref(v___f_116_);
lean_dec_ref(v___x_110_);
return v___x_113_;
}
else
{
size_t v___x_118_; size_t v___x_119_; lean_object* v___x_120_; 
v___x_118_ = ((size_t)0ULL);
v___x_119_ = lean_usize_of_nat(v___x_112_);
v___x_120_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_114_, v___f_116_, v___x_110_, v___x_118_, v___x_119_, v___x_113_);
return v___x_120_;
}
}
else
{
size_t v___x_121_; size_t v___x_122_; lean_object* v___x_123_; 
v___x_121_ = ((size_t)0ULL);
v___x_122_ = lean_usize_of_nat(v___x_112_);
v___x_123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_114_, v___f_116_, v___x_110_, v___x_121_, v___x_122_, v___x_113_);
return v___x_123_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__1(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Array_instInhabited___redArg();
return v___x_125_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__5(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_129_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__4));
v___x_130_ = lean_unsigned_to_nat(2u);
v___x_131_ = lean_unsigned_to_nat(63u);
v___x_132_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__3));
v___x_133_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__2));
v___x_134_ = l_mkPanicMessageWithDecl(v___x_133_, v___x_132_, v___x_131_, v___x_130_, v___x_129_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg(lean_object* v_inst_139_, lean_object* v_inst_140_, lean_object* v_f_141_, lean_object* v_xs_142_, lean_object* v_ys_143_){
_start:
{
lean_object* v___f_144_; lean_object* v___f_145_; lean_object* v___x_146_; lean_object* v___x_150_; size_t v_sz_151_; size_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v_positions_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___y_159_; lean_object* v___y_165_; lean_object* v___y_166_; lean_object* v___y_167_; lean_object* v___y_168_; lean_object* v___y_169_; lean_object* v___y_172_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v___y_175_; lean_object* v___y_176_; lean_object* v___y_179_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v___f_144_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__0));
lean_inc_ref(v_xs_142_);
v___f_145_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1), 5, 4);
lean_closure_set(v___f_145_, 0, v_xs_142_);
lean_closure_set(v___f_145_, 1, v_inst_139_);
lean_closure_set(v___f_145_, 2, v_f_141_);
lean_closure_set(v___f_145_, 3, v_inst_140_);
v___x_146_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__1, &l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__1_once, _init_l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__1);
v___x_150_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__10));
v_sz_151_ = lean_array_size(v_ys_143_);
v___x_152_ = ((size_t)0ULL);
v___x_153_ = l_unsafeCast___redArg(v_ys_143_);
v___x_154_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_150_, v___f_145_, v_sz_151_, v___x_152_, v___x_153_);
v_positions_155_ = l_unsafeCast___redArg(v___x_154_);
lean_dec(v___x_154_);
v___x_156_ = lean_array_get_size(v_xs_142_);
lean_dec_ref(v_xs_142_);
v___x_157_ = l_Array_range(v___x_156_);
v___x_187_ = lean_unsigned_to_nat(0u);
v___x_188_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__7));
v___x_189_ = lean_array_get_size(v_positions_155_);
v___x_190_ = lean_nat_dec_lt(v___x_187_, v___x_189_);
if (v___x_190_ == 0)
{
v___y_179_ = v___x_188_;
goto v___jp_178_;
}
else
{
lean_object* v___f_191_; size_t v___x_192_; lean_object* v___x_193_; 
v___f_191_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__8));
v___x_192_ = lean_usize_of_nat(v___x_189_);
lean_inc(v_positions_155_);
v___x_193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_150_, v___f_191_, v_positions_155_, v___x_152_, v___x_192_, v___x_188_);
v___y_179_ = v___x_193_;
goto v___jp_178_;
}
v___jp_147_:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__5, &l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__5_once, _init_l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__5);
v___x_149_ = l_panic___redArg(v___x_146_, v___x_148_);
return v___x_149_;
}
v___jp_158_:
{
lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_160_ = lean_array_get_size(v___x_157_);
v___x_161_ = lean_array_get_size(v___y_159_);
v___x_162_ = lean_nat_dec_eq(v___x_160_, v___x_161_);
if (v___x_162_ == 0)
{
lean_dec_ref(v___y_159_);
lean_dec_ref(v___x_157_);
lean_dec(v_positions_155_);
goto v___jp_147_;
}
else
{
uint8_t v___x_163_; 
v___x_163_ = l_Array_isEqvAux___redArg(v___x_157_, v___y_159_, v___f_144_, v___x_160_);
lean_dec_ref(v___y_159_);
lean_dec_ref(v___x_157_);
if (v___x_163_ == 0)
{
lean_dec(v_positions_155_);
goto v___jp_147_;
}
else
{
return v_positions_155_;
}
}
}
v___jp_164_:
{
lean_object* v___x_170_; 
lean_inc_ref(v___y_165_);
v___x_170_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___y_165_, v___y_168_, v___y_166_, v___y_167_, v___y_169_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_169_);
lean_dec(v___y_168_);
v___y_159_ = v___x_170_;
goto v___jp_158_;
}
v___jp_171_:
{
uint8_t v___x_177_; 
v___x_177_ = lean_nat_dec_le(v___y_176_, v___y_174_);
if (v___x_177_ == 0)
{
lean_dec(v___y_174_);
lean_inc(v___y_176_);
v___y_165_ = v___y_172_;
v___y_166_ = v___y_173_;
v___y_167_ = v___y_176_;
v___y_168_ = v___y_175_;
v___y_169_ = v___y_176_;
goto v___jp_164_;
}
else
{
v___y_165_ = v___y_172_;
v___y_166_ = v___y_173_;
v___y_167_ = v___y_176_;
v___y_168_ = v___y_175_;
v___y_169_ = v___y_174_;
goto v___jp_164_;
}
}
v___jp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_180_ = lean_array_get_size(v___y_179_);
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = lean_nat_dec_eq(v___x_180_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_183_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__6));
v___x_184_ = lean_unsigned_to_nat(1u);
v___x_185_ = lean_nat_sub(v___x_180_, v___x_184_);
v___x_186_ = lean_nat_dec_le(v___x_181_, v___x_185_);
if (v___x_186_ == 0)
{
lean_inc(v___x_185_);
v___y_172_ = v___x_183_;
v___y_173_ = v___y_179_;
v___y_174_ = v___x_185_;
v___y_175_ = v___x_180_;
v___y_176_ = v___x_185_;
goto v___jp_171_;
}
else
{
v___y_172_ = v___x_183_;
v___y_173_ = v___y_179_;
v___y_174_ = v___x_185_;
v___y_175_ = v___x_180_;
v___y_176_ = v___x_181_;
goto v___jp_171_;
}
}
else
{
v___y_159_ = v___y_179_;
goto v___jp_158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___redArg___boxed(lean_object* v_inst_194_, lean_object* v_inst_195_, lean_object* v_f_196_, lean_object* v_xs_197_, lean_object* v_ys_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lean_Elab_Structural_Positions_groupAndSort___redArg(v_inst_194_, v_inst_195_, v_f_196_, v_xs_197_, v_ys_198_);
lean_dec_ref(v_ys_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort(lean_object* v_00_u03b1_200_, lean_object* v_00_u03b2_201_, lean_object* v_inst_202_, lean_object* v_inst_203_, lean_object* v_f_204_, lean_object* v_xs_205_, lean_object* v_ys_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lean_Elab_Structural_Positions_groupAndSort___redArg(v_inst_202_, v_inst_203_, v_f_204_, v_xs_205_, v_ys_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___boxed(lean_object* v_00_u03b1_208_, lean_object* v_00_u03b2_209_, lean_object* v_inst_210_, lean_object* v_inst_211_, lean_object* v_f_212_, lean_object* v_xs_213_, lean_object* v_ys_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Elab_Structural_Positions_groupAndSort(v_00_u03b1_208_, v_00_u03b2_209_, v_inst_210_, v_inst_211_, v_f_212_, v_xs_213_, v_ys_214_);
lean_dec_ref(v_ys_214_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__0(lean_object* v_inst_216_, lean_object* v_xs_217_, lean_object* v_x_218_){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = lean_array_get_borrowed(v_inst_216_, v_xs_217_, v_x_218_);
lean_inc(v___x_219_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__0___boxed(lean_object* v_inst_220_, lean_object* v_xs_221_, lean_object* v_x_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__0(v_inst_220_, v_xs_221_, v_x_222_);
lean_dec(v_x_222_);
lean_dec_ref(v_xs_221_);
lean_dec(v_inst_220_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__1(lean_object* v___f_224_, lean_object* v_f_225_, lean_object* v_y_226_, lean_object* v_poss_227_){
_start:
{
lean_object* v___x_228_; size_t v_sz_229_; size_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_228_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___lam__1___closed__10));
v_sz_229_ = lean_array_size(v_poss_227_);
v___x_230_ = ((size_t)0ULL);
v___x_231_ = l_unsafeCast___redArg(v_poss_227_);
v___x_232_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_228_, v___f_224_, v_sz_229_, v___x_230_, v___x_231_);
v___x_233_ = l_unsafeCast___redArg(v___x_232_);
lean_dec(v___x_232_);
v___x_234_ = lean_apply_2(v_f_225_, v_y_226_, v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__1___boxed(lean_object* v___f_235_, lean_object* v_f_236_, lean_object* v_y_237_, lean_object* v_poss_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__1(v___f_235_, v_f_236_, v_y_237_, v_poss_238_);
lean_dec_ref(v_poss_238_);
return v_res_239_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__2(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_242_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__1));
v___x_243_ = lean_unsigned_to_nat(2u);
v___x_244_ = lean_unsigned_to_nat(73u);
v___x_245_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__0));
v___x_246_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__2));
v___x_247_ = l_mkPanicMessageWithDecl(v___x_246_, v___x_245_, v___x_244_, v___x_243_, v___x_242_);
return v___x_247_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__4(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_249_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__3));
v___x_250_ = lean_unsigned_to_nat(2u);
v___x_251_ = lean_unsigned_to_nat(74u);
v___x_252_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__0));
v___x_253_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__2));
v___x_254_ = l_mkPanicMessageWithDecl(v___x_253_, v___x_252_, v___x_251_, v___x_250_, v___x_249_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg(lean_object* v_inst_257_, lean_object* v_inst_258_, lean_object* v_f_259_, lean_object* v_positions_260_, lean_object* v_ys_261_, lean_object* v_xs_262_){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_263_ = lean_array_get_size(v_positions_260_);
v___x_264_ = lean_array_get_size(v_ys_261_);
v___x_265_ = lean_nat_dec_eq(v___x_263_, v___x_264_);
v___x_266_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__1, &l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__1_once, _init_l_Lean_Elab_Structural_Positions_groupAndSort___redArg___closed__1);
lean_inc_ref(v_inst_257_);
v___x_267_ = l_instInhabitedOfMonad___redArg(v_inst_257_, v___x_266_);
if (v___x_265_ == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec_ref(v_xs_262_);
lean_dec_ref(v_ys_261_);
lean_dec_ref(v_positions_260_);
lean_dec(v_f_259_);
lean_dec(v_inst_258_);
lean_dec_ref(v_inst_257_);
v___x_268_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__2, &l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__2_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__2);
v___x_269_ = l_panic___redArg(v___x_267_, v___x_268_);
lean_dec(v___x_267_);
return v___x_269_;
}
else
{
lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_270_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_260_);
v___x_271_ = lean_array_get_size(v_xs_262_);
v___x_272_ = lean_nat_dec_eq(v___x_270_, v___x_271_);
lean_dec(v___x_270_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec_ref(v_xs_262_);
lean_dec_ref(v_ys_261_);
lean_dec_ref(v_positions_260_);
lean_dec(v_f_259_);
lean_dec(v_inst_258_);
lean_dec_ref(v_inst_257_);
v___x_273_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__4, &l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__4_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__4);
v___x_274_ = l_panic___redArg(v___x_267_, v___x_273_);
lean_dec(v___x_267_);
return v___x_274_;
}
else
{
lean_object* v___f_275_; lean_object* v___f_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
lean_dec(v___x_267_);
v___f_275_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_275_, 0, v_inst_258_);
lean_closure_set(v___f_275_, 1, v_xs_262_);
v___f_276_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_Positions_mapMwith___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_276_, 0, v___f_275_);
lean_closure_set(v___f_276_, 1, v_f_259_);
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___redArg___closed__5));
v___x_279_ = l_Array_zipWithMAux___redArg(v_inst_257_, v_ys_261_, v_positions_260_, v___f_276_, v___x_277_, v___x_278_);
return v___x_279_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith(lean_object* v_00_u03b3_280_, lean_object* v_00_u03b1_281_, lean_object* v_00_u03b2_282_, lean_object* v_m_283_, lean_object* v_inst_284_, lean_object* v_inst_285_, lean_object* v_f_286_, lean_object* v_positions_287_, lean_object* v_ys_288_, lean_object* v_xs_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Lean_Elab_Structural_Positions_mapMwith___redArg(v_inst_284_, v_inst_285_, v_f_286_, v_positions_287_, v_ys_288_, v_xs_289_);
return v___x_290_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_box(0);
v___x_299_ = l_unsafeCast___redArg(v___x_298_);
return v___x_299_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_301_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_302_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_303_ = l_Lean_Name_str___override(v___x_302_, v___x_301_);
return v___x_303_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_305_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_306_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_307_ = l_Lean_Name_str___override(v___x_306_, v___x_305_);
return v___x_307_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_308_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_309_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_310_ = l_Lean_Name_str___override(v___x_309_, v___x_308_);
return v___x_310_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_312_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_313_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_314_ = l_Lean_Name_str___override(v___x_313_, v___x_312_);
return v___x_314_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_316_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_317_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_318_ = l_Lean_Name_str___override(v___x_317_, v___x_316_);
return v___x_318_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_321_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_322_ = l_Lean_Name_str___override(v___x_321_, v___x_320_);
return v___x_322_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_323_ = lean_unsigned_to_nat(0u);
v___x_324_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_325_ = l_Lean_Name_num___override(v___x_324_, v___x_323_);
return v___x_325_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_328_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_329_ = l_Lean_Name_str___override(v___x_328_, v___x_327_);
return v___x_329_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_332_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_333_ = l_Lean_Name_str___override(v___x_332_, v___x_331_);
return v___x_333_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_334_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_335_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_336_ = l_Lean_Name_str___override(v___x_335_, v___x_334_);
return v___x_336_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_338_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_339_ = l_Lean_Name_str___override(v___x_338_, v___x_337_);
return v___x_339_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_341_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_342_ = l_Lean_Name_str___override(v___x_341_, v___x_340_);
return v___x_342_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_343_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_344_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_345_ = l_Lean_Name_str___override(v___x_344_, v___x_343_);
return v___x_345_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_347_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_348_ = l_Lean_Name_str___override(v___x_347_, v___x_346_);
return v___x_348_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_unsigned_to_nat(2093547783u);
v___x_350_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_351_ = l_Lean_Name_num___override(v___x_350_, v___x_349_);
return v___x_351_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_353_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_354_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_355_ = l_Lean_Name_str___override(v___x_354_, v___x_353_);
return v___x_355_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__30_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_357_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__29_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_358_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_359_ = l_Lean_Name_str___override(v___x_358_, v___x_357_);
return v___x_359_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__31_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_360_ = lean_unsigned_to_nat(2u);
v___x_361_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__30_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__30_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__30_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_362_ = l_Lean_Name_num___override(v___x_361_, v___x_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_364_; uint8_t v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_364_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_));
v___x_365_ = 0;
v___x_366_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__31_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__31_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn___closed__31_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_);
v___x_367_ = l_Lean_registerTraceClass(v___x_364_, v___x_365_, v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2____boxed(lean_object* v_a_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_();
return v_res_369_;
}
}
lean_object* runtime_initialize_Lean_Meta_ForEachExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_Structural_Basic_0__initFn_00___x40_Lean_Elab_PreDefinition_Structural_Basic_2093547783____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_ForEachExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

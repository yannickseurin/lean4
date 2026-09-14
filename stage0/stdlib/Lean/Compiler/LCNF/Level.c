// Lean compiler output
// Module: Lean.Compiler.LCNF.Level
// Imports: public import Lean.Util.CollectLevelParams public import Lean.Compiler.LCNF.Basic
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
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLevel;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_CollectLevelParams_visitExpr(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_CollectLevelParams_visitLevels(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Level_hasParam(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelIMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLevelParam(lean_object*);
uint8_t l_ptrEqList___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 178, 247, 241, 102, 42, 87, 174)}};
static const lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Level"};
static const lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Compiler.LCNF.NormLevelParam.normLevel"};
static const lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normLevel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normExpr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Compiler_LCNF_NormLevelParam_normExpr_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Compiler.LCNF.NormLevelParam.normExpr"};
static const lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normExpr(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_normLevelParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_normLevelParams___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_normLevelParams___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_normLevelParams___closed__1;
static const lean_array_object l_Lean_Compiler_LCNF_normLevelParams___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_normLevelParams___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_normLevelParams___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_normLevelParams___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_normLevelParams___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLevelParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitLetValue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitParam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitParams_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitAlts_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitAlts(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitCode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitAlt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitAlts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitAlts___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitDeclValue(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_setLevelParams(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2(lean_object* v_msg_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___f_10_; lean_object* v___f_11_; lean_object* v___f_12_; lean_object* v___f_13_; lean_object* v___f_14_; lean_object* v___f_15_; lean_object* v___f_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___f_20_; lean_object* v___f_21_; lean_object* v___f_22_; lean_object* v___f_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_2967__overap_32_; lean_object* v___x_33_; 
v___f_10_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__0));
v___f_11_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__1));
v___f_12_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__2));
v___f_13_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__3));
v___f_14_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__4));
v___f_15_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__5));
v___f_16_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__6));
v___x_17_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_17_, 0, v___f_10_);
lean_ctor_set(v___x_17_, 1, v___f_11_);
v___x_18_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
lean_ctor_set(v___x_18_, 1, v___f_12_);
lean_ctor_set(v___x_18_, 2, v___f_13_);
lean_ctor_set(v___x_18_, 3, v___f_14_);
lean_ctor_set(v___x_18_, 4, v___f_15_);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___f_16_);
lean_inc_ref_n(v___x_19_, 6);
v___f_20_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_20_, 0, v___x_19_);
v___f_21_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_21_, 0, v___x_19_);
v___f_22_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_22_, 0, v___x_19_);
v___f_23_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_23_, 0, v___x_19_);
v___x_24_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_24_, 0, lean_box(0));
lean_closure_set(v___x_24_, 1, lean_box(0));
lean_closure_set(v___x_24_, 2, v___x_19_);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v___f_20_);
v___x_26_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_26_, 0, lean_box(0));
lean_closure_set(v___x_26_, 1, lean_box(0));
lean_closure_set(v___x_26_, 2, v___x_19_);
v___x_27_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_27_, 0, v___x_25_);
lean_ctor_set(v___x_27_, 1, v___x_26_);
lean_ctor_set(v___x_27_, 2, v___f_21_);
lean_ctor_set(v___x_27_, 3, v___f_22_);
lean_ctor_set(v___x_27_, 4, v___f_23_);
v___x_28_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_28_, 0, lean_box(0));
lean_closure_set(v___x_28_, 1, lean_box(0));
lean_closure_set(v___x_28_, 2, v___x_19_);
v___x_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_27_);
lean_ctor_set(v___x_29_, 1, v___x_28_);
v___x_30_ = l_Lean_instInhabitedLevel;
v___x_31_ = l_instInhabitedOfMonad___redArg(v___x_29_, v___x_30_);
v___x_2967__overap_32_ = lean_panic_fn_borrowed(v___x_31_, v_msg_8_);
lean_dec(v___x_31_);
v___x_33_ = lean_apply_1(v___x_2967__overap_32_, v___y_9_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__4___redArg(lean_object* v_a_34_, lean_object* v_b_35_, lean_object* v_x_36_){
_start:
{
if (lean_obj_tag(v_x_36_) == 0)
{
lean_dec(v_b_35_);
lean_dec(v_a_34_);
return v_x_36_;
}
else
{
lean_object* v_key_37_; lean_object* v_value_38_; lean_object* v_tail_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_51_; 
v_key_37_ = lean_ctor_get(v_x_36_, 0);
v_value_38_ = lean_ctor_get(v_x_36_, 1);
v_tail_39_ = lean_ctor_get(v_x_36_, 2);
v_isSharedCheck_51_ = !lean_is_exclusive(v_x_36_);
if (v_isSharedCheck_51_ == 0)
{
v___x_41_ = v_x_36_;
v_isShared_42_ = v_isSharedCheck_51_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_tail_39_);
lean_inc(v_value_38_);
lean_inc(v_key_37_);
lean_dec(v_x_36_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_51_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
uint8_t v___x_43_; 
v___x_43_ = lean_name_eq(v_key_37_, v_a_34_);
if (v___x_43_ == 0)
{
lean_object* v___x_44_; lean_object* v___x_46_; 
v___x_44_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__4___redArg(v_a_34_, v_b_35_, v_tail_39_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 2, v___x_44_);
v___x_46_ = v___x_41_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_key_37_);
lean_ctor_set(v_reuseFailAlloc_47_, 1, v_value_38_);
lean_ctor_set(v_reuseFailAlloc_47_, 2, v___x_44_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
else
{
lean_object* v___x_49_; 
lean_dec(v_value_38_);
lean_dec(v_key_37_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 1, v_b_35_);
lean_ctor_set(v___x_41_, 0, v_a_34_);
v___x_49_ = v___x_41_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_a_34_);
lean_ctor_set(v_reuseFailAlloc_50_, 1, v_b_35_);
lean_ctor_set(v_reuseFailAlloc_50_, 2, v_tail_39_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5_spec__6___redArg(lean_object* v_x_52_, lean_object* v_x_53_){
_start:
{
if (lean_obj_tag(v_x_53_) == 0)
{
return v_x_52_;
}
else
{
lean_object* v_key_54_; lean_object* v_value_55_; lean_object* v_tail_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_83_; 
v_key_54_ = lean_ctor_get(v_x_53_, 0);
v_value_55_ = lean_ctor_get(v_x_53_, 1);
v_tail_56_ = lean_ctor_get(v_x_53_, 2);
v_isSharedCheck_83_ = !lean_is_exclusive(v_x_53_);
if (v_isSharedCheck_83_ == 0)
{
v___x_58_ = v_x_53_;
v_isShared_59_ = v_isSharedCheck_83_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_tail_56_);
lean_inc(v_value_55_);
lean_inc(v_key_54_);
lean_dec(v_x_53_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_83_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; uint64_t v___y_62_; lean_object* v___x_80_; 
v___x_60_ = lean_array_get_size(v_x_52_);
v___x_80_ = l_unsafeCast___redArg(v_key_54_);
if (lean_obj_tag(v___x_80_) == 0)
{
uint64_t v___x_81_; 
v___x_81_ = 1723ULL;
v___y_62_ = v___x_81_;
goto v___jp_61_;
}
else
{
uint64_t v_hash_82_; 
v_hash_82_ = lean_ctor_get_uint64(v___x_80_, sizeof(void*)*2);
lean_dec(v___x_80_);
v___y_62_ = v_hash_82_;
goto v___jp_61_;
}
v___jp_61_:
{
uint64_t v___x_63_; uint64_t v___x_64_; uint64_t v_fold_65_; uint64_t v___x_66_; uint64_t v___x_67_; uint64_t v___x_68_; size_t v___x_69_; size_t v___x_70_; size_t v___x_71_; size_t v___x_72_; size_t v___x_73_; lean_object* v___x_74_; lean_object* v___x_76_; 
v___x_63_ = 32ULL;
v___x_64_ = lean_uint64_shift_right(v___y_62_, v___x_63_);
v_fold_65_ = lean_uint64_xor(v___y_62_, v___x_64_);
v___x_66_ = 16ULL;
v___x_67_ = lean_uint64_shift_right(v_fold_65_, v___x_66_);
v___x_68_ = lean_uint64_xor(v_fold_65_, v___x_67_);
v___x_69_ = lean_uint64_to_usize(v___x_68_);
v___x_70_ = lean_usize_of_nat(v___x_60_);
v___x_71_ = ((size_t)1ULL);
v___x_72_ = lean_usize_sub(v___x_70_, v___x_71_);
v___x_73_ = lean_usize_land(v___x_69_, v___x_72_);
v___x_74_ = lean_array_uget_borrowed(v_x_52_, v___x_73_);
lean_inc(v___x_74_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 2, v___x_74_);
v___x_76_ = v___x_58_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_key_54_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v_value_55_);
lean_ctor_set(v_reuseFailAlloc_79_, 2, v___x_74_);
v___x_76_ = v_reuseFailAlloc_79_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_77_; 
v___x_77_ = lean_array_uset(v_x_52_, v___x_73_, v___x_76_);
v_x_52_ = v___x_77_;
v_x_53_ = v_tail_56_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5___redArg(lean_object* v_i_84_, lean_object* v_source_85_, lean_object* v_target_86_){
_start:
{
lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_87_ = lean_array_get_size(v_source_85_);
v___x_88_ = lean_nat_dec_lt(v_i_84_, v___x_87_);
if (v___x_88_ == 0)
{
lean_dec_ref(v_source_85_);
lean_dec(v_i_84_);
return v_target_86_;
}
else
{
lean_object* v_es_89_; lean_object* v___x_90_; lean_object* v_source_91_; lean_object* v_target_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_es_89_ = lean_array_fget(v_source_85_, v_i_84_);
v___x_90_ = lean_box(0);
v_source_91_ = lean_array_fset(v_source_85_, v_i_84_, v___x_90_);
v_target_92_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5_spec__6___redArg(v_target_86_, v_es_89_);
v___x_93_ = lean_unsigned_to_nat(1u);
v___x_94_ = lean_nat_add(v_i_84_, v___x_93_);
lean_dec(v_i_84_);
v_i_84_ = v___x_94_;
v_source_85_ = v_source_91_;
v_target_86_ = v_target_92_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3___redArg(lean_object* v_data_96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v_nbuckets_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_97_ = lean_array_get_size(v_data_96_);
v___x_98_ = lean_unsigned_to_nat(2u);
v_nbuckets_99_ = lean_nat_mul(v___x_97_, v___x_98_);
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = lean_box(0);
v___x_102_ = lean_mk_array(v_nbuckets_99_, v___x_101_);
v___x_103_ = lean_array_propagate_mark(v_data_96_, v___x_102_);
v___x_104_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5___redArg(v___x_100_, v_data_96_, v___x_103_);
return v___x_104_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2___redArg(lean_object* v_a_105_, lean_object* v_x_106_){
_start:
{
if (lean_obj_tag(v_x_106_) == 0)
{
uint8_t v___x_107_; 
v___x_107_ = 0;
return v___x_107_;
}
else
{
lean_object* v_key_108_; lean_object* v_tail_109_; uint8_t v___x_110_; 
v_key_108_ = lean_ctor_get(v_x_106_, 0);
v_tail_109_ = lean_ctor_get(v_x_106_, 2);
v___x_110_ = lean_name_eq(v_key_108_, v_a_105_);
if (v___x_110_ == 0)
{
v_x_106_ = v_tail_109_;
goto _start;
}
else
{
return v___x_110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2___redArg___boxed(lean_object* v_a_112_, lean_object* v_x_113_){
_start:
{
uint8_t v_res_114_; lean_object* v_r_115_; 
v_res_114_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2___redArg(v_a_112_, v_x_113_);
lean_dec(v_x_113_);
lean_dec(v_a_112_);
v_r_115_ = lean_box(v_res_114_);
return v_r_115_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1___redArg(lean_object* v_m_116_, lean_object* v_a_117_, lean_object* v_b_118_){
_start:
{
lean_object* v_size_119_; lean_object* v_buckets_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_167_; 
v_size_119_ = lean_ctor_get(v_m_116_, 0);
v_buckets_120_ = lean_ctor_get(v_m_116_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_m_116_);
if (v_isSharedCheck_167_ == 0)
{
v___x_122_ = v_m_116_;
v_isShared_123_ = v_isSharedCheck_167_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_buckets_120_);
lean_inc(v_size_119_);
lean_dec(v_m_116_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_167_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; uint64_t v___y_126_; lean_object* v___x_164_; 
v___x_124_ = lean_array_get_size(v_buckets_120_);
v___x_164_ = l_unsafeCast___redArg(v_a_117_);
if (lean_obj_tag(v___x_164_) == 0)
{
uint64_t v___x_165_; 
v___x_165_ = 1723ULL;
v___y_126_ = v___x_165_;
goto v___jp_125_;
}
else
{
uint64_t v_hash_166_; 
v_hash_166_ = lean_ctor_get_uint64(v___x_164_, sizeof(void*)*2);
lean_dec(v___x_164_);
v___y_126_ = v_hash_166_;
goto v___jp_125_;
}
v___jp_125_:
{
uint64_t v___x_127_; uint64_t v___x_128_; uint64_t v_fold_129_; uint64_t v___x_130_; uint64_t v___x_131_; uint64_t v___x_132_; size_t v___x_133_; size_t v___x_134_; size_t v___x_135_; size_t v___x_136_; size_t v___x_137_; lean_object* v_bkt_138_; uint8_t v___x_139_; 
v___x_127_ = 32ULL;
v___x_128_ = lean_uint64_shift_right(v___y_126_, v___x_127_);
v_fold_129_ = lean_uint64_xor(v___y_126_, v___x_128_);
v___x_130_ = 16ULL;
v___x_131_ = lean_uint64_shift_right(v_fold_129_, v___x_130_);
v___x_132_ = lean_uint64_xor(v_fold_129_, v___x_131_);
v___x_133_ = lean_uint64_to_usize(v___x_132_);
v___x_134_ = lean_usize_of_nat(v___x_124_);
v___x_135_ = ((size_t)1ULL);
v___x_136_ = lean_usize_sub(v___x_134_, v___x_135_);
v___x_137_ = lean_usize_land(v___x_133_, v___x_136_);
v_bkt_138_ = lean_array_uget_borrowed(v_buckets_120_, v___x_137_);
v___x_139_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2___redArg(v_a_117_, v_bkt_138_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v_size_x27_141_; lean_object* v___x_142_; lean_object* v_buckets_x27_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_140_ = lean_unsigned_to_nat(1u);
v_size_x27_141_ = lean_nat_add(v_size_119_, v___x_140_);
lean_dec(v_size_119_);
lean_inc(v_bkt_138_);
v___x_142_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_142_, 0, v_a_117_);
lean_ctor_set(v___x_142_, 1, v_b_118_);
lean_ctor_set(v___x_142_, 2, v_bkt_138_);
v_buckets_x27_143_ = lean_array_uset(v_buckets_120_, v___x_137_, v___x_142_);
v___x_144_ = lean_unsigned_to_nat(4u);
v___x_145_ = lean_nat_mul(v_size_x27_141_, v___x_144_);
v___x_146_ = lean_unsigned_to_nat(3u);
v___x_147_ = lean_nat_div(v___x_145_, v___x_146_);
lean_dec(v___x_145_);
v___x_148_ = lean_array_get_size(v_buckets_x27_143_);
v___x_149_ = lean_nat_dec_le(v___x_147_, v___x_148_);
lean_dec(v___x_147_);
if (v___x_149_ == 0)
{
lean_object* v_val_150_; lean_object* v___x_152_; 
v_val_150_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3___redArg(v_buckets_x27_143_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v_val_150_);
lean_ctor_set(v___x_122_, 0, v_size_x27_141_);
v___x_152_ = v___x_122_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_size_x27_141_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v_val_150_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
else
{
lean_object* v___x_155_; 
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v_buckets_x27_143_);
lean_ctor_set(v___x_122_, 0, v_size_x27_141_);
v___x_155_ = v___x_122_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_size_x27_141_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_buckets_x27_143_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
else
{
lean_object* v___x_157_; lean_object* v_buckets_x27_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_162_; 
lean_inc(v_bkt_138_);
v___x_157_ = lean_box(0);
v_buckets_x27_158_ = lean_array_uset(v_buckets_120_, v___x_137_, v___x_157_);
v___x_159_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__4___redArg(v_a_117_, v_b_118_, v_bkt_138_);
v___x_160_ = lean_array_uset(v_buckets_x27_158_, v___x_137_, v___x_159_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v___x_160_);
v___x_162_ = v___x_122_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_size_119_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0___redArg(lean_object* v_a_168_, lean_object* v_x_169_){
_start:
{
if (lean_obj_tag(v_x_169_) == 0)
{
lean_object* v___x_170_; 
v___x_170_ = lean_box(0);
return v___x_170_;
}
else
{
lean_object* v_key_171_; lean_object* v_value_172_; lean_object* v_tail_173_; uint8_t v___x_174_; 
v_key_171_ = lean_ctor_get(v_x_169_, 0);
v_value_172_ = lean_ctor_get(v_x_169_, 1);
v_tail_173_ = lean_ctor_get(v_x_169_, 2);
v___x_174_ = lean_name_eq(v_key_171_, v_a_168_);
if (v___x_174_ == 0)
{
v_x_169_ = v_tail_173_;
goto _start;
}
else
{
lean_object* v___x_176_; 
lean_inc(v_value_172_);
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v_value_172_);
return v___x_176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0___redArg___boxed(lean_object* v_a_177_, lean_object* v_x_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0___redArg(v_a_177_, v_x_178_);
lean_dec(v_x_178_);
lean_dec(v_a_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0___redArg(lean_object* v_m_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_buckets_182_; lean_object* v___x_183_; uint64_t v___y_185_; lean_object* v___x_199_; 
v_buckets_182_ = lean_ctor_get(v_m_180_, 1);
v___x_183_ = lean_array_get_size(v_buckets_182_);
v___x_199_ = l_unsafeCast___redArg(v_a_181_);
if (lean_obj_tag(v___x_199_) == 0)
{
uint64_t v___x_200_; 
v___x_200_ = 1723ULL;
v___y_185_ = v___x_200_;
goto v___jp_184_;
}
else
{
uint64_t v_hash_201_; 
v_hash_201_ = lean_ctor_get_uint64(v___x_199_, sizeof(void*)*2);
lean_dec(v___x_199_);
v___y_185_ = v_hash_201_;
goto v___jp_184_;
}
v___jp_184_:
{
uint64_t v___x_186_; uint64_t v___x_187_; uint64_t v_fold_188_; uint64_t v___x_189_; uint64_t v___x_190_; uint64_t v___x_191_; size_t v___x_192_; size_t v___x_193_; size_t v___x_194_; size_t v___x_195_; size_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_186_ = 32ULL;
v___x_187_ = lean_uint64_shift_right(v___y_185_, v___x_186_);
v_fold_188_ = lean_uint64_xor(v___y_185_, v___x_187_);
v___x_189_ = 16ULL;
v___x_190_ = lean_uint64_shift_right(v_fold_188_, v___x_189_);
v___x_191_ = lean_uint64_xor(v_fold_188_, v___x_190_);
v___x_192_ = lean_uint64_to_usize(v___x_191_);
v___x_193_ = lean_usize_of_nat(v___x_183_);
v___x_194_ = ((size_t)1ULL);
v___x_195_ = lean_usize_sub(v___x_193_, v___x_194_);
v___x_196_ = lean_usize_land(v___x_192_, v___x_195_);
v___x_197_ = lean_array_uget_borrowed(v_buckets_182_, v___x_196_);
v___x_198_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0___redArg(v_a_181_, v___x_197_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0___redArg___boxed(lean_object* v_m_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0___redArg(v_m_202_, v_a_203_);
lean_dec(v_a_203_);
lean_dec_ref(v_m_202_);
return v_res_204_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__5(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_211_ = ((lean_object*)(l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__4));
v___x_212_ = lean_unsigned_to_nat(19u);
v___x_213_ = lean_unsigned_to_nat(55u);
v___x_214_ = ((lean_object*)(l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__3));
v___x_215_ = ((lean_object*)(l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__2));
v___x_216_ = l_mkPanicMessageWithDecl(v___x_215_, v___x_214_, v___x_213_, v___x_212_, v___x_211_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normLevel(lean_object* v_u_217_, lean_object* v_a_218_){
_start:
{
uint8_t v___x_219_; 
v___x_219_ = l_Lean_Level_hasParam(v_u_217_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v_u_217_);
lean_ctor_set(v___x_220_, 1, v_a_218_);
return v___x_220_;
}
else
{
switch(lean_obj_tag(v_u_217_))
{
case 0:
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v_u_217_);
lean_ctor_set(v___x_221_, 1, v_a_218_);
return v___x_221_;
}
case 1:
{
lean_object* v_a_222_; lean_object* v___x_223_; lean_object* v_fst_224_; lean_object* v_snd_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_239_; 
v_a_222_ = lean_ctor_get(v_u_217_, 0);
lean_inc(v_a_222_);
v___x_223_ = l_Lean_Compiler_LCNF_NormLevelParam_normLevel(v_a_222_, v_a_218_);
v_fst_224_ = lean_ctor_get(v___x_223_, 0);
v_snd_225_ = lean_ctor_get(v___x_223_, 1);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_239_ == 0)
{
v___x_227_ = v___x_223_;
v_isShared_228_ = v_isSharedCheck_239_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_snd_225_);
lean_inc(v_fst_224_);
lean_dec(v___x_223_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_239_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
size_t v___x_229_; size_t v___x_230_; uint8_t v___x_231_; 
v___x_229_ = lean_ptr_addr(v_a_222_);
v___x_230_ = lean_ptr_addr(v_fst_224_);
v___x_231_ = lean_usize_dec_eq(v___x_229_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_234_; 
lean_dec_ref_known(v_u_217_, 1);
v___x_232_ = l_Lean_Level_succ___override(v_fst_224_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 0, v___x_232_);
v___x_234_ = v___x_227_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_snd_225_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
else
{
lean_object* v___x_237_; 
lean_dec(v_fst_224_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 0, v_u_217_);
v___x_237_ = v___x_227_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_u_217_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_snd_225_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
}
case 2:
{
lean_object* v_a_240_; lean_object* v_a_241_; lean_object* v___x_242_; lean_object* v_fst_243_; lean_object* v_snd_244_; lean_object* v___x_245_; lean_object* v_fst_246_; lean_object* v_snd_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_269_; 
v_a_240_ = lean_ctor_get(v_u_217_, 0);
v_a_241_ = lean_ctor_get(v_u_217_, 1);
lean_inc(v_a_240_);
v___x_242_ = l_Lean_Compiler_LCNF_NormLevelParam_normLevel(v_a_240_, v_a_218_);
v_fst_243_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_fst_243_);
v_snd_244_ = lean_ctor_get(v___x_242_, 1);
lean_inc(v_snd_244_);
lean_dec_ref(v___x_242_);
lean_inc(v_a_241_);
v___x_245_ = l_Lean_Compiler_LCNF_NormLevelParam_normLevel(v_a_241_, v_snd_244_);
v_fst_246_ = lean_ctor_get(v___x_245_, 0);
v_snd_247_ = lean_ctor_get(v___x_245_, 1);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_269_ == 0)
{
v___x_249_ = v___x_245_;
v_isShared_250_ = v_isSharedCheck_269_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_snd_247_);
lean_inc(v_fst_246_);
lean_dec(v___x_245_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_269_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
size_t v___x_251_; size_t v___x_252_; uint8_t v___x_253_; 
v___x_251_ = lean_ptr_addr(v_a_240_);
v___x_252_ = lean_ptr_addr(v_fst_243_);
v___x_253_ = lean_usize_dec_eq(v___x_251_, v___x_252_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; lean_object* v___x_256_; 
lean_dec_ref_known(v_u_217_, 2);
v___x_254_ = l_Lean_mkLevelMax_x27(v_fst_243_, v_fst_246_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_254_);
v___x_256_ = v___x_249_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v_snd_247_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
else
{
size_t v___x_258_; size_t v___x_259_; uint8_t v___x_260_; 
v___x_258_ = lean_ptr_addr(v_a_241_);
v___x_259_ = lean_ptr_addr(v_fst_246_);
v___x_260_ = lean_usize_dec_eq(v___x_258_, v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; lean_object* v___x_263_; 
lean_dec_ref_known(v_u_217_, 2);
v___x_261_ = l_Lean_mkLevelMax_x27(v_fst_243_, v_fst_246_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_261_);
v___x_263_ = v___x_249_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_261_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v_snd_247_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
else
{
lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_265_ = l_Lean_simpLevelMax_x27(v_fst_243_, v_fst_246_, v_u_217_);
lean_dec_ref_known(v_u_217_, 2);
lean_dec(v_fst_246_);
lean_dec(v_fst_243_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_265_);
v___x_267_ = v___x_249_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_265_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_snd_247_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
case 3:
{
lean_object* v_a_270_; lean_object* v_a_271_; lean_object* v___x_272_; lean_object* v_fst_273_; lean_object* v_snd_274_; lean_object* v___x_275_; lean_object* v_fst_276_; lean_object* v_snd_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_299_; 
v_a_270_ = lean_ctor_get(v_u_217_, 0);
v_a_271_ = lean_ctor_get(v_u_217_, 1);
lean_inc(v_a_270_);
v___x_272_ = l_Lean_Compiler_LCNF_NormLevelParam_normLevel(v_a_270_, v_a_218_);
v_fst_273_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_fst_273_);
v_snd_274_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_snd_274_);
lean_dec_ref(v___x_272_);
lean_inc(v_a_271_);
v___x_275_ = l_Lean_Compiler_LCNF_NormLevelParam_normLevel(v_a_271_, v_snd_274_);
v_fst_276_ = lean_ctor_get(v___x_275_, 0);
v_snd_277_ = lean_ctor_get(v___x_275_, 1);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_299_ == 0)
{
v___x_279_ = v___x_275_;
v_isShared_280_ = v_isSharedCheck_299_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_snd_277_);
lean_inc(v_fst_276_);
lean_dec(v___x_275_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_299_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
size_t v___x_281_; size_t v___x_282_; uint8_t v___x_283_; 
v___x_281_ = lean_ptr_addr(v_a_270_);
v___x_282_ = lean_ptr_addr(v_fst_273_);
v___x_283_ = lean_usize_dec_eq(v___x_281_, v___x_282_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_286_; 
lean_dec_ref_known(v_u_217_, 2);
v___x_284_ = l_Lean_mkLevelIMax_x27(v_fst_273_, v_fst_276_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_284_);
v___x_286_ = v___x_279_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_284_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_snd_277_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
else
{
size_t v___x_288_; size_t v___x_289_; uint8_t v___x_290_; 
v___x_288_ = lean_ptr_addr(v_a_271_);
v___x_289_ = lean_ptr_addr(v_fst_276_);
v___x_290_ = lean_usize_dec_eq(v___x_288_, v___x_289_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; lean_object* v___x_293_; 
lean_dec_ref_known(v_u_217_, 2);
v___x_291_ = l_Lean_mkLevelIMax_x27(v_fst_273_, v_fst_276_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_291_);
v___x_293_ = v___x_279_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_291_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v_snd_277_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
else
{
lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_295_ = l_Lean_simpLevelIMax_x27(v_fst_273_, v_fst_276_, v_u_217_);
lean_dec_ref_known(v_u_217_, 2);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_295_);
v___x_297_ = v___x_279_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v_snd_277_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
}
case 4:
{
lean_object* v_a_300_; lean_object* v_nextIdx_301_; lean_object* v_map_302_; lean_object* v_paramNames_303_; lean_object* v___x_304_; 
v_a_300_ = lean_ctor_get(v_u_217_, 0);
lean_inc(v_a_300_);
lean_dec_ref_known(v_u_217_, 1);
v_nextIdx_301_ = lean_ctor_get(v_a_218_, 0);
v_map_302_ = lean_ctor_get(v_a_218_, 1);
v_paramNames_303_ = lean_ctor_get(v_a_218_, 2);
v___x_304_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0___redArg(v_map_302_, v_a_300_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_319_; 
lean_inc_ref(v_paramNames_303_);
lean_inc_ref(v_map_302_);
lean_inc(v_nextIdx_301_);
v_isSharedCheck_319_ = !lean_is_exclusive(v_a_218_);
if (v_isSharedCheck_319_ == 0)
{
lean_object* v_unused_320_; lean_object* v_unused_321_; lean_object* v_unused_322_; 
v_unused_320_ = lean_ctor_get(v_a_218_, 2);
lean_dec(v_unused_320_);
v_unused_321_ = lean_ctor_get(v_a_218_, 1);
lean_dec(v_unused_321_);
v_unused_322_ = lean_ctor_get(v_a_218_, 0);
lean_dec(v_unused_322_);
v___x_306_ = v_a_218_;
v_isShared_307_ = v_isSharedCheck_319_;
goto v_resetjp_305_;
}
else
{
lean_dec(v_a_218_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_319_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_316_; 
v___x_308_ = ((lean_object*)(l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__1));
lean_inc(v_nextIdx_301_);
v___x_309_ = lean_name_append_index_after(v___x_308_, v_nextIdx_301_);
v___x_310_ = l_Lean_Level_param___override(v___x_309_);
v___x_311_ = lean_unsigned_to_nat(1u);
v___x_312_ = lean_nat_add(v_nextIdx_301_, v___x_311_);
lean_dec(v_nextIdx_301_);
lean_inc(v___x_310_);
lean_inc(v_a_300_);
v___x_313_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1___redArg(v_map_302_, v_a_300_, v___x_310_);
v___x_314_ = lean_array_push(v_paramNames_303_, v_a_300_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 2, v___x_314_);
lean_ctor_set(v___x_306_, 1, v___x_313_);
lean_ctor_set(v___x_306_, 0, v___x_312_);
v___x_316_ = v___x_306_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_312_);
lean_ctor_set(v_reuseFailAlloc_318_, 1, v___x_313_);
lean_ctor_set(v_reuseFailAlloc_318_, 2, v___x_314_);
v___x_316_ = v_reuseFailAlloc_318_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___x_317_; 
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_310_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
return v___x_317_;
}
}
}
else
{
lean_object* v_val_323_; lean_object* v___x_324_; 
lean_dec(v_a_300_);
v_val_323_ = lean_ctor_get(v___x_304_, 0);
lean_inc(v_val_323_);
lean_dec_ref_known(v___x_304_, 1);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v_val_323_);
lean_ctor_set(v___x_324_, 1, v_a_218_);
return v___x_324_;
}
}
default: 
{
lean_object* v___x_325_; lean_object* v___x_326_; 
lean_dec_ref_known(v_u_217_, 1);
v___x_325_ = lean_obj_once(&l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__5, &l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__5_once, _init_l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__5);
v___x_326_ = l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2(v___x_325_, v_a_218_);
return v___x_326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0(lean_object* v_00_u03b2_327_, lean_object* v_m_328_, lean_object* v_a_329_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0___redArg(v_m_328_, v_a_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0___boxed(lean_object* v_00_u03b2_331_, lean_object* v_m_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0(v_00_u03b2_331_, v_m_332_, v_a_333_);
lean_dec(v_a_333_);
lean_dec_ref(v_m_332_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1(lean_object* v_00_u03b2_335_, lean_object* v_m_336_, lean_object* v_a_337_, lean_object* v_b_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1___redArg(v_m_336_, v_a_337_, v_b_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0(lean_object* v_00_u03b2_340_, lean_object* v_a_341_, lean_object* v_x_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0___redArg(v_a_341_, v_x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0___boxed(lean_object* v_00_u03b2_344_, lean_object* v_a_345_, lean_object* v_x_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__0_spec__0(v_00_u03b2_344_, v_a_345_, v_x_346_);
lean_dec(v_x_346_);
lean_dec(v_a_345_);
return v_res_347_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2(lean_object* v_00_u03b2_348_, lean_object* v_a_349_, lean_object* v_x_350_){
_start:
{
uint8_t v___x_351_; 
v___x_351_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2___redArg(v_a_349_, v_x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2___boxed(lean_object* v_00_u03b2_352_, lean_object* v_a_353_, lean_object* v_x_354_){
_start:
{
uint8_t v_res_355_; lean_object* v_r_356_; 
v_res_355_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__2(v_00_u03b2_352_, v_a_353_, v_x_354_);
lean_dec(v_x_354_);
lean_dec(v_a_353_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3(lean_object* v_00_u03b2_357_, lean_object* v_data_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3___redArg(v_data_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__4(lean_object* v_00_u03b2_360_, lean_object* v_a_361_, lean_object* v_b_362_, lean_object* v_x_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__4___redArg(v_a_361_, v_b_362_, v_x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_365_, lean_object* v_i_366_, lean_object* v_source_367_, lean_object* v_target_368_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5___redArg(v_i_366_, v_source_367_, v_target_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_370_, lean_object* v_x_371_, lean_object* v_x_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__1_spec__3_spec__5_spec__6___redArg(v_x_371_, v_x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normExpr_spec__1(lean_object* v_msg_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___f_376_; lean_object* v___f_377_; lean_object* v___f_378_; lean_object* v___f_379_; lean_object* v___f_380_; lean_object* v___f_381_; lean_object* v___f_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___f_386_; lean_object* v___f_387_; lean_object* v___f_388_; lean_object* v___f_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_4908__overap_398_; lean_object* v___x_399_; 
v___f_376_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__0));
v___f_377_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__1));
v___f_378_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__2));
v___f_379_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__3));
v___f_380_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__4));
v___f_381_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__5));
v___f_382_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normLevel_spec__2___closed__6));
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v___f_376_);
lean_ctor_set(v___x_383_, 1, v___f_377_);
v___x_384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v___f_378_);
lean_ctor_set(v___x_384_, 2, v___f_379_);
lean_ctor_set(v___x_384_, 3, v___f_380_);
lean_ctor_set(v___x_384_, 4, v___f_381_);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
lean_ctor_set(v___x_385_, 1, v___f_382_);
lean_inc_ref_n(v___x_385_, 6);
v___f_386_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_386_, 0, v___x_385_);
v___f_387_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_387_, 0, v___x_385_);
v___f_388_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_388_, 0, v___x_385_);
v___f_389_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_389_, 0, v___x_385_);
v___x_390_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_390_, 0, lean_box(0));
lean_closure_set(v___x_390_, 1, lean_box(0));
lean_closure_set(v___x_390_, 2, v___x_385_);
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
lean_ctor_set(v___x_391_, 1, v___f_386_);
v___x_392_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_392_, 0, lean_box(0));
lean_closure_set(v___x_392_, 1, lean_box(0));
lean_closure_set(v___x_392_, 2, v___x_385_);
v___x_393_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_393_, 0, v___x_391_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
lean_ctor_set(v___x_393_, 2, v___f_387_);
lean_ctor_set(v___x_393_, 3, v___f_388_);
lean_ctor_set(v___x_393_, 4, v___f_389_);
v___x_394_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_394_, 0, lean_box(0));
lean_closure_set(v___x_394_, 1, lean_box(0));
lean_closure_set(v___x_394_, 2, v___x_385_);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_393_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = l_Lean_instInhabitedExpr;
v___x_397_ = l_instInhabitedOfMonad___redArg(v___x_395_, v___x_396_);
v___x_4908__overap_398_ = lean_panic_fn_borrowed(v___x_397_, v_msg_374_);
lean_dec(v___x_397_);
v___x_399_ = lean_apply_1(v___x_4908__overap_398_, v___y_375_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Compiler_LCNF_NormLevelParam_normExpr_spec__0(lean_object* v_x_400_, lean_object* v_x_401_, lean_object* v___y_402_){
_start:
{
if (lean_obj_tag(v_x_400_) == 0)
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = l_List_reverse___redArg(v_x_401_);
v___x_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
lean_ctor_set(v___x_404_, 1, v___y_402_);
return v___x_404_;
}
else
{
lean_object* v_head_405_; lean_object* v_tail_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_417_; 
v_head_405_ = lean_ctor_get(v_x_400_, 0);
v_tail_406_ = lean_ctor_get(v_x_400_, 1);
v_isSharedCheck_417_ = !lean_is_exclusive(v_x_400_);
if (v_isSharedCheck_417_ == 0)
{
v___x_408_ = v_x_400_;
v_isShared_409_ = v_isSharedCheck_417_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_tail_406_);
lean_inc(v_head_405_);
lean_dec(v_x_400_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_417_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_410_; lean_object* v_fst_411_; lean_object* v_snd_412_; lean_object* v___x_414_; 
v___x_410_ = l_Lean_Compiler_LCNF_NormLevelParam_normLevel(v_head_405_, v___y_402_);
v_fst_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc(v_fst_411_);
v_snd_412_ = lean_ctor_get(v___x_410_, 1);
lean_inc(v_snd_412_);
lean_dec_ref(v___x_410_);
if (v_isShared_409_ == 0)
{
lean_ctor_set(v___x_408_, 1, v_x_401_);
lean_ctor_set(v___x_408_, 0, v_fst_411_);
v___x_414_ = v___x_408_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_fst_411_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_x_401_);
v___x_414_ = v_reuseFailAlloc_416_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
v_x_400_ = v_tail_406_;
v_x_401_ = v___x_414_;
v___y_402_ = v_snd_412_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__1(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_419_ = ((lean_object*)(l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__4));
v___x_420_ = lean_unsigned_to_nat(26u);
v___x_421_ = lean_unsigned_to_nat(79u);
v___x_422_ = ((lean_object*)(l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__0));
v___x_423_ = ((lean_object*)(l_Lean_Compiler_LCNF_NormLevelParam_normLevel___closed__2));
v___x_424_ = l_mkPanicMessageWithDecl(v___x_423_, v___x_422_, v___x_421_, v___x_420_, v___x_419_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormLevelParam_normExpr(lean_object* v_e_425_, lean_object* v_a_426_){
_start:
{
uint8_t v___x_427_; 
v___x_427_ = l_Lean_Expr_hasLevelParam(v_e_425_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v_e_425_);
lean_ctor_set(v___x_428_, 1, v_a_426_);
return v___x_428_;
}
else
{
switch(lean_obj_tag(v_e_425_))
{
case 4:
{
lean_object* v_declName_429_; lean_object* v_us_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v_fst_433_; lean_object* v_snd_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_446_; 
v_declName_429_ = lean_ctor_get(v_e_425_, 0);
v_us_430_ = lean_ctor_get(v_e_425_, 1);
v___x_431_ = lean_box(0);
lean_inc(v_us_430_);
v___x_432_ = l_List_mapM_loop___at___00Lean_Compiler_LCNF_NormLevelParam_normExpr_spec__0(v_us_430_, v___x_431_, v_a_426_);
v_fst_433_ = lean_ctor_get(v___x_432_, 0);
v_snd_434_ = lean_ctor_get(v___x_432_, 1);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_446_ == 0)
{
v___x_436_ = v___x_432_;
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_snd_434_);
lean_inc(v_fst_433_);
lean_dec(v___x_432_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_446_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
uint8_t v___x_438_; 
v___x_438_ = l_ptrEqList___redArg(v_us_430_, v_fst_433_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; lean_object* v___x_441_; 
lean_inc(v_declName_429_);
lean_dec_ref_known(v_e_425_, 2);
v___x_439_ = l_Lean_Expr_const___override(v_declName_429_, v_fst_433_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_439_);
v___x_441_ = v___x_436_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_snd_434_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
else
{
lean_object* v___x_444_; 
lean_dec(v_fst_433_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v_e_425_);
v___x_444_ = v___x_436_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_e_425_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_snd_434_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
case 3:
{
lean_object* v_u_447_; lean_object* v___x_448_; lean_object* v_fst_449_; lean_object* v_snd_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_464_; 
v_u_447_ = lean_ctor_get(v_e_425_, 0);
lean_inc(v_u_447_);
v___x_448_ = l_Lean_Compiler_LCNF_NormLevelParam_normLevel(v_u_447_, v_a_426_);
v_fst_449_ = lean_ctor_get(v___x_448_, 0);
v_snd_450_ = lean_ctor_get(v___x_448_, 1);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_464_ == 0)
{
v___x_452_ = v___x_448_;
v_isShared_453_ = v_isSharedCheck_464_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_snd_450_);
lean_inc(v_fst_449_);
lean_dec(v___x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_464_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
size_t v___x_454_; size_t v___x_455_; uint8_t v___x_456_; 
v___x_454_ = lean_ptr_addr(v_u_447_);
v___x_455_ = lean_ptr_addr(v_fst_449_);
v___x_456_ = lean_usize_dec_eq(v___x_454_, v___x_455_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_459_; 
lean_dec_ref_known(v_e_425_, 1);
v___x_457_ = l_Lean_Expr_sort___override(v_fst_449_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v___x_457_);
v___x_459_ = v___x_452_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_457_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_snd_450_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
else
{
lean_object* v___x_462_; 
lean_dec(v_fst_449_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v_e_425_);
v___x_462_ = v___x_452_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_e_425_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v_snd_450_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
case 5:
{
lean_object* v_fn_465_; lean_object* v_arg_466_; lean_object* v___x_467_; lean_object* v_fst_468_; lean_object* v_snd_469_; lean_object* v___x_470_; lean_object* v_fst_471_; lean_object* v_snd_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_493_; 
v_fn_465_ = lean_ctor_get(v_e_425_, 0);
v_arg_466_ = lean_ctor_get(v_e_425_, 1);
lean_inc_ref(v_fn_465_);
v___x_467_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_fn_465_, v_a_426_);
v_fst_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_fst_468_);
v_snd_469_ = lean_ctor_get(v___x_467_, 1);
lean_inc(v_snd_469_);
lean_dec_ref(v___x_467_);
lean_inc_ref(v_arg_466_);
v___x_470_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_arg_466_, v_snd_469_);
v_fst_471_ = lean_ctor_get(v___x_470_, 0);
v_snd_472_ = lean_ctor_get(v___x_470_, 1);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_493_ == 0)
{
v___x_474_ = v___x_470_;
v_isShared_475_ = v_isSharedCheck_493_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_snd_472_);
lean_inc(v_fst_471_);
lean_dec(v___x_470_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_493_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
size_t v___x_476_; size_t v___x_477_; uint8_t v___x_478_; 
v___x_476_ = lean_ptr_addr(v_fn_465_);
v___x_477_ = lean_ptr_addr(v_fst_468_);
v___x_478_ = lean_usize_dec_eq(v___x_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_481_; 
lean_dec_ref_known(v_e_425_, 2);
v___x_479_ = l_Lean_Expr_app___override(v_fst_468_, v_fst_471_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_479_);
v___x_481_ = v___x_474_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_479_);
lean_ctor_set(v_reuseFailAlloc_482_, 1, v_snd_472_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
else
{
size_t v___x_483_; size_t v___x_484_; uint8_t v___x_485_; 
v___x_483_ = lean_ptr_addr(v_arg_466_);
v___x_484_ = lean_ptr_addr(v_fst_471_);
v___x_485_ = lean_usize_dec_eq(v___x_483_, v___x_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_488_; 
lean_dec_ref_known(v_e_425_, 2);
v___x_486_ = l_Lean_Expr_app___override(v_fst_468_, v_fst_471_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_486_);
v___x_488_ = v___x_474_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v_snd_472_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
else
{
lean_object* v___x_491_; 
lean_dec(v_fst_471_);
lean_dec(v_fst_468_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v_e_425_);
v___x_491_ = v___x_474_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_e_425_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v_snd_472_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
}
case 8:
{
lean_object* v_declName_494_; lean_object* v_type_495_; lean_object* v_value_496_; lean_object* v_body_497_; uint8_t v_nondep_498_; lean_object* v___x_499_; lean_object* v_fst_500_; lean_object* v_snd_501_; lean_object* v___x_502_; lean_object* v_fst_503_; lean_object* v_snd_504_; lean_object* v___x_505_; lean_object* v_fst_506_; lean_object* v_snd_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_535_; 
v_declName_494_ = lean_ctor_get(v_e_425_, 0);
v_type_495_ = lean_ctor_get(v_e_425_, 1);
v_value_496_ = lean_ctor_get(v_e_425_, 2);
v_body_497_ = lean_ctor_get(v_e_425_, 3);
v_nondep_498_ = lean_ctor_get_uint8(v_e_425_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_495_);
v___x_499_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_type_495_, v_a_426_);
v_fst_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_fst_500_);
v_snd_501_ = lean_ctor_get(v___x_499_, 1);
lean_inc(v_snd_501_);
lean_dec_ref(v___x_499_);
lean_inc_ref(v_value_496_);
v___x_502_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_value_496_, v_snd_501_);
v_fst_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_fst_503_);
v_snd_504_ = lean_ctor_get(v___x_502_, 1);
lean_inc(v_snd_504_);
lean_dec_ref(v___x_502_);
lean_inc_ref(v_body_497_);
v___x_505_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_body_497_, v_snd_504_);
v_fst_506_ = lean_ctor_get(v___x_505_, 0);
v_snd_507_ = lean_ctor_get(v___x_505_, 1);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_535_ == 0)
{
v___x_509_ = v___x_505_;
v_isShared_510_ = v_isSharedCheck_535_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_snd_507_);
lean_inc(v_fst_506_);
lean_dec(v___x_505_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_535_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
size_t v___x_511_; size_t v___x_512_; uint8_t v___x_513_; 
v___x_511_ = lean_ptr_addr(v_type_495_);
v___x_512_ = lean_ptr_addr(v_fst_500_);
v___x_513_ = lean_usize_dec_eq(v___x_511_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; lean_object* v___x_516_; 
lean_inc(v_declName_494_);
lean_dec_ref_known(v_e_425_, 4);
v___x_514_ = l_Lean_Expr_letE___override(v_declName_494_, v_fst_500_, v_fst_503_, v_fst_506_, v_nondep_498_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v___x_514_);
v___x_516_ = v___x_509_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_snd_507_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
else
{
size_t v___x_518_; size_t v___x_519_; uint8_t v___x_520_; 
v___x_518_ = lean_ptr_addr(v_value_496_);
v___x_519_ = lean_ptr_addr(v_fst_503_);
v___x_520_ = lean_usize_dec_eq(v___x_518_, v___x_519_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; lean_object* v___x_523_; 
lean_inc(v_declName_494_);
lean_dec_ref_known(v_e_425_, 4);
v___x_521_ = l_Lean_Expr_letE___override(v_declName_494_, v_fst_500_, v_fst_503_, v_fst_506_, v_nondep_498_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v___x_521_);
v___x_523_ = v___x_509_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v_snd_507_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
else
{
size_t v___x_525_; size_t v___x_526_; uint8_t v___x_527_; 
v___x_525_ = lean_ptr_addr(v_body_497_);
v___x_526_ = lean_ptr_addr(v_fst_506_);
v___x_527_ = lean_usize_dec_eq(v___x_525_, v___x_526_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; lean_object* v___x_530_; 
lean_inc(v_declName_494_);
lean_dec_ref_known(v_e_425_, 4);
v___x_528_ = l_Lean_Expr_letE___override(v_declName_494_, v_fst_500_, v_fst_503_, v_fst_506_, v_nondep_498_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v___x_528_);
v___x_530_ = v___x_509_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_snd_507_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
else
{
lean_object* v___x_533_; 
lean_dec(v_fst_506_);
lean_dec(v_fst_503_);
lean_dec(v_fst_500_);
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v_e_425_);
v___x_533_ = v___x_509_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_e_425_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_snd_507_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
}
}
case 7:
{
lean_object* v_binderName_536_; lean_object* v_binderType_537_; lean_object* v_body_538_; uint8_t v_binderInfo_539_; lean_object* v___x_540_; lean_object* v_fst_541_; lean_object* v_snd_542_; lean_object* v___x_543_; lean_object* v_fst_544_; lean_object* v_snd_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_571_; 
v_binderName_536_ = lean_ctor_get(v_e_425_, 0);
v_binderType_537_ = lean_ctor_get(v_e_425_, 1);
v_body_538_ = lean_ctor_get(v_e_425_, 2);
v_binderInfo_539_ = lean_ctor_get_uint8(v_e_425_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_537_);
v___x_540_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_binderType_537_, v_a_426_);
v_fst_541_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_fst_541_);
v_snd_542_ = lean_ctor_get(v___x_540_, 1);
lean_inc(v_snd_542_);
lean_dec_ref(v___x_540_);
lean_inc_ref(v_body_538_);
v___x_543_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_body_538_, v_snd_542_);
v_fst_544_ = lean_ctor_get(v___x_543_, 0);
v_snd_545_ = lean_ctor_get(v___x_543_, 1);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_571_ == 0)
{
v___x_547_ = v___x_543_;
v_isShared_548_ = v_isSharedCheck_571_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_snd_545_);
lean_inc(v_fst_544_);
lean_dec(v___x_543_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_571_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
size_t v___x_549_; size_t v___x_550_; uint8_t v___x_551_; 
v___x_549_ = lean_ptr_addr(v_binderType_537_);
v___x_550_ = lean_ptr_addr(v_fst_541_);
v___x_551_ = lean_usize_dec_eq(v___x_549_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_554_; 
lean_inc(v_binderName_536_);
lean_dec_ref_known(v_e_425_, 3);
v___x_552_ = l_Lean_Expr_forallE___override(v_binderName_536_, v_fst_541_, v_fst_544_, v_binderInfo_539_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_552_);
v___x_554_ = v___x_547_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_552_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_snd_545_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
else
{
size_t v___x_556_; size_t v___x_557_; uint8_t v___x_558_; 
v___x_556_ = lean_ptr_addr(v_body_538_);
v___x_557_ = lean_ptr_addr(v_fst_544_);
v___x_558_ = lean_usize_dec_eq(v___x_556_, v___x_557_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; lean_object* v___x_561_; 
lean_inc(v_binderName_536_);
lean_dec_ref_known(v_e_425_, 3);
v___x_559_ = l_Lean_Expr_forallE___override(v_binderName_536_, v_fst_541_, v_fst_544_, v_binderInfo_539_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_559_);
v___x_561_ = v___x_547_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v___x_559_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v_snd_545_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
else
{
uint8_t v___x_563_; 
v___x_563_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_539_, v_binderInfo_539_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_566_; 
lean_inc(v_binderName_536_);
lean_dec_ref_known(v_e_425_, 3);
v___x_564_ = l_Lean_Expr_forallE___override(v_binderName_536_, v_fst_541_, v_fst_544_, v_binderInfo_539_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_564_);
v___x_566_ = v___x_547_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_564_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v_snd_545_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
else
{
lean_object* v___x_569_; 
lean_dec(v_fst_544_);
lean_dec(v_fst_541_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v_e_425_);
v___x_569_ = v___x_547_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_e_425_);
lean_ctor_set(v_reuseFailAlloc_570_, 1, v_snd_545_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
}
case 6:
{
lean_object* v_binderName_572_; lean_object* v_binderType_573_; lean_object* v_body_574_; uint8_t v_binderInfo_575_; lean_object* v___x_576_; lean_object* v_fst_577_; lean_object* v_snd_578_; lean_object* v___x_579_; lean_object* v_fst_580_; lean_object* v_snd_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_607_; 
v_binderName_572_ = lean_ctor_get(v_e_425_, 0);
v_binderType_573_ = lean_ctor_get(v_e_425_, 1);
v_body_574_ = lean_ctor_get(v_e_425_, 2);
v_binderInfo_575_ = lean_ctor_get_uint8(v_e_425_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_573_);
v___x_576_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_binderType_573_, v_a_426_);
v_fst_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_fst_577_);
v_snd_578_ = lean_ctor_get(v___x_576_, 1);
lean_inc(v_snd_578_);
lean_dec_ref(v___x_576_);
lean_inc_ref(v_body_574_);
v___x_579_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_body_574_, v_snd_578_);
v_fst_580_ = lean_ctor_get(v___x_579_, 0);
v_snd_581_ = lean_ctor_get(v___x_579_, 1);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_607_ == 0)
{
v___x_583_ = v___x_579_;
v_isShared_584_ = v_isSharedCheck_607_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_snd_581_);
lean_inc(v_fst_580_);
lean_dec(v___x_579_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_607_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
size_t v___x_585_; size_t v___x_586_; uint8_t v___x_587_; 
v___x_585_ = lean_ptr_addr(v_binderType_573_);
v___x_586_ = lean_ptr_addr(v_fst_577_);
v___x_587_ = lean_usize_dec_eq(v___x_585_, v___x_586_);
if (v___x_587_ == 0)
{
lean_object* v___x_588_; lean_object* v___x_590_; 
lean_inc(v_binderName_572_);
lean_dec_ref_known(v_e_425_, 3);
v___x_588_ = l_Lean_Expr_lam___override(v_binderName_572_, v_fst_577_, v_fst_580_, v_binderInfo_575_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_588_);
v___x_590_ = v___x_583_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v_snd_581_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
else
{
size_t v___x_592_; size_t v___x_593_; uint8_t v___x_594_; 
v___x_592_ = lean_ptr_addr(v_body_574_);
v___x_593_ = lean_ptr_addr(v_fst_580_);
v___x_594_ = lean_usize_dec_eq(v___x_592_, v___x_593_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; lean_object* v___x_597_; 
lean_inc(v_binderName_572_);
lean_dec_ref_known(v_e_425_, 3);
v___x_595_ = l_Lean_Expr_lam___override(v_binderName_572_, v_fst_577_, v_fst_580_, v_binderInfo_575_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_595_);
v___x_597_ = v___x_583_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_595_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_snd_581_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
else
{
uint8_t v___x_599_; 
v___x_599_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_575_, v_binderInfo_575_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; lean_object* v___x_602_; 
lean_inc(v_binderName_572_);
lean_dec_ref_known(v_e_425_, 3);
v___x_600_ = l_Lean_Expr_lam___override(v_binderName_572_, v_fst_577_, v_fst_580_, v_binderInfo_575_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_600_);
v___x_602_ = v___x_583_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_600_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_snd_581_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
else
{
lean_object* v___x_605_; 
lean_dec(v_fst_580_);
lean_dec(v_fst_577_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v_e_425_);
v___x_605_ = v___x_583_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_e_425_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_snd_581_);
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
}
}
case 10:
{
lean_object* v_data_608_; lean_object* v_expr_609_; lean_object* v___x_610_; lean_object* v_fst_611_; lean_object* v_snd_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_626_; 
v_data_608_ = lean_ctor_get(v_e_425_, 0);
v_expr_609_ = lean_ctor_get(v_e_425_, 1);
lean_inc_ref(v_expr_609_);
v___x_610_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_expr_609_, v_a_426_);
v_fst_611_ = lean_ctor_get(v___x_610_, 0);
v_snd_612_ = lean_ctor_get(v___x_610_, 1);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_626_ == 0)
{
v___x_614_ = v___x_610_;
v_isShared_615_ = v_isSharedCheck_626_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_snd_612_);
lean_inc(v_fst_611_);
lean_dec(v___x_610_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_626_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
size_t v___x_616_; size_t v___x_617_; uint8_t v___x_618_; 
v___x_616_ = lean_ptr_addr(v_expr_609_);
v___x_617_ = lean_ptr_addr(v_fst_611_);
v___x_618_ = lean_usize_dec_eq(v___x_616_, v___x_617_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_621_; 
lean_inc(v_data_608_);
lean_dec_ref_known(v_e_425_, 2);
v___x_619_ = l_Lean_Expr_mdata___override(v_data_608_, v_fst_611_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v___x_619_);
v___x_621_ = v___x_614_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_snd_612_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
else
{
lean_object* v___x_624_; 
lean_dec(v_fst_611_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v_e_425_);
v___x_624_ = v___x_614_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_e_425_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_snd_612_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
case 11:
{
lean_object* v_typeName_627_; lean_object* v_idx_628_; lean_object* v_struct_629_; lean_object* v___x_630_; lean_object* v_fst_631_; lean_object* v_snd_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_646_; 
v_typeName_627_ = lean_ctor_get(v_e_425_, 0);
v_idx_628_ = lean_ctor_get(v_e_425_, 1);
v_struct_629_ = lean_ctor_get(v_e_425_, 2);
lean_inc_ref(v_struct_629_);
v___x_630_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_struct_629_, v_a_426_);
v_fst_631_ = lean_ctor_get(v___x_630_, 0);
v_snd_632_ = lean_ctor_get(v___x_630_, 1);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_646_ == 0)
{
v___x_634_ = v___x_630_;
v_isShared_635_ = v_isSharedCheck_646_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_snd_632_);
lean_inc(v_fst_631_);
lean_dec(v___x_630_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_646_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
size_t v___x_636_; size_t v___x_637_; uint8_t v___x_638_; 
v___x_636_ = lean_ptr_addr(v_struct_629_);
v___x_637_ = lean_ptr_addr(v_fst_631_);
v___x_638_ = lean_usize_dec_eq(v___x_636_, v___x_637_);
if (v___x_638_ == 0)
{
lean_object* v___x_639_; lean_object* v___x_641_; 
lean_inc(v_idx_628_);
lean_inc(v_typeName_627_);
lean_dec_ref_known(v_e_425_, 3);
v___x_639_ = l_Lean_Expr_proj___override(v_typeName_627_, v_idx_628_, v_fst_631_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_639_);
v___x_641_ = v___x_634_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_639_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_snd_632_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
else
{
lean_object* v___x_644_; 
lean_dec(v_fst_631_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v_e_425_);
v___x_644_ = v___x_634_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_e_425_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v_snd_632_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
case 2:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
lean_dec_ref_known(v_e_425_, 1);
v___x_647_ = lean_obj_once(&l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__1, &l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_NormLevelParam_normExpr___closed__1);
v___x_648_ = l_panic___at___00Lean_Compiler_LCNF_NormLevelParam_normExpr_spec__1(v___x_647_, v_a_426_);
return v___x_648_;
}
default: 
{
lean_object* v___x_649_; 
v___x_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_649_, 0, v_e_425_);
lean_ctor_set(v___x_649_, 1, v_a_426_);
return v___x_649_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_normLevelParams___closed__0(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_650_ = lean_box(0);
v___x_651_ = lean_unsigned_to_nat(16u);
v___x_652_ = lean_mk_array(v___x_651_, v___x_650_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_normLevelParams___closed__1(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_653_ = lean_obj_once(&l_Lean_Compiler_LCNF_normLevelParams___closed__0, &l_Lean_Compiler_LCNF_normLevelParams___closed__0_once, _init_l_Lean_Compiler_LCNF_normLevelParams___closed__0);
v___x_654_ = lean_unsigned_to_nat(0u);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set(v___x_655_, 1, v___x_653_);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_normLevelParams___closed__3(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_658_ = ((lean_object*)(l_Lean_Compiler_LCNF_normLevelParams___closed__2));
v___x_659_ = lean_obj_once(&l_Lean_Compiler_LCNF_normLevelParams___closed__1, &l_Lean_Compiler_LCNF_normLevelParams___closed__1_once, _init_l_Lean_Compiler_LCNF_normLevelParams___closed__1);
v___x_660_ = lean_unsigned_to_nat(1u);
v___x_661_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
lean_ctor_set(v___x_661_, 1, v___x_659_);
lean_ctor_set(v___x_661_, 2, v___x_658_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLevelParams(lean_object* v_e_662_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v_snd_665_; lean_object* v_fst_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_675_; 
v___x_663_ = lean_obj_once(&l_Lean_Compiler_LCNF_normLevelParams___closed__3, &l_Lean_Compiler_LCNF_normLevelParams___closed__3_once, _init_l_Lean_Compiler_LCNF_normLevelParams___closed__3);
v___x_664_ = l_Lean_Compiler_LCNF_NormLevelParam_normExpr(v_e_662_, v___x_663_);
v_snd_665_ = lean_ctor_get(v___x_664_, 1);
v_fst_666_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_675_ == 0)
{
v___x_668_ = v___x_664_;
v_isShared_669_ = v_isSharedCheck_675_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_snd_665_);
lean_inc(v_fst_666_);
lean_dec(v___x_664_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_675_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v_paramNames_670_; lean_object* v___x_671_; lean_object* v___x_673_; 
v_paramNames_670_ = lean_ctor_get(v_snd_665_, 2);
lean_inc_ref(v_paramNames_670_);
lean_dec(v_snd_665_);
v___x_671_ = lean_array_to_list(v_paramNames_670_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 1, v___x_671_);
v___x_673_ = v___x_668_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_fst_666_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v___x_671_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitType(lean_object* v_type_676_, lean_object* v_a_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_CollectLevelParams_visitExpr(v_type_676_, v_a_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitArg(lean_object* v_arg_679_, lean_object* v_a_680_){
_start:
{
if (lean_obj_tag(v_arg_679_) == 2)
{
lean_object* v_expr_681_; lean_object* v___x_682_; 
v_expr_681_ = lean_ctor_get(v_arg_679_, 0);
lean_inc_ref(v_expr_681_);
lean_dec_ref_known(v_arg_679_, 1);
v___x_682_ = l_Lean_CollectLevelParams_visitExpr(v_expr_681_, v_a_680_);
return v___x_682_;
}
else
{
lean_dec(v_arg_679_);
return v_a_680_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitArgs_spec__0(lean_object* v_as_683_, size_t v_i_684_, size_t v_stop_685_, lean_object* v_b_686_){
_start:
{
uint8_t v___x_687_; 
v___x_687_ = lean_usize_dec_eq(v_i_684_, v_stop_685_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; size_t v___x_690_; size_t v___x_691_; 
v___x_688_ = lean_array_uget_borrowed(v_as_683_, v_i_684_);
lean_inc(v___x_688_);
v___x_689_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitArg(v___x_688_, v_b_686_);
v___x_690_ = ((size_t)1ULL);
v___x_691_ = lean_usize_add(v_i_684_, v___x_690_);
v_i_684_ = v___x_691_;
v_b_686_ = v___x_689_;
goto _start;
}
else
{
return v_b_686_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitArgs_spec__0___boxed(lean_object* v_as_693_, lean_object* v_i_694_, lean_object* v_stop_695_, lean_object* v_b_696_){
_start:
{
size_t v_i_boxed_697_; size_t v_stop_boxed_698_; lean_object* v_res_699_; 
v_i_boxed_697_ = lean_unbox_usize(v_i_694_);
lean_dec(v_i_694_);
v_stop_boxed_698_ = lean_unbox_usize(v_stop_695_);
lean_dec(v_stop_695_);
v_res_699_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitArgs_spec__0(v_as_693_, v_i_boxed_697_, v_stop_boxed_698_, v_b_696_);
lean_dec_ref(v_as_693_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitArgs(lean_object* v_args_700_, lean_object* v_s_701_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; 
v___x_702_ = lean_unsigned_to_nat(0u);
v___x_703_ = lean_array_get_size(v_args_700_);
v___x_704_ = lean_nat_dec_lt(v___x_702_, v___x_703_);
if (v___x_704_ == 0)
{
return v_s_701_;
}
else
{
uint8_t v___x_705_; 
v___x_705_ = lean_nat_dec_le(v___x_703_, v___x_703_);
if (v___x_705_ == 0)
{
if (v___x_704_ == 0)
{
return v_s_701_;
}
else
{
size_t v___x_706_; size_t v___x_707_; lean_object* v___x_708_; 
v___x_706_ = ((size_t)0ULL);
v___x_707_ = lean_usize_of_nat(v___x_703_);
v___x_708_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitArgs_spec__0(v_args_700_, v___x_706_, v___x_707_, v_s_701_);
return v___x_708_;
}
}
else
{
size_t v___x_709_; size_t v___x_710_; lean_object* v___x_711_; 
v___x_709_ = ((size_t)0ULL);
v___x_710_ = lean_usize_of_nat(v___x_703_);
v___x_711_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitArgs_spec__0(v_args_700_, v___x_709_, v___x_710_, v_s_701_);
return v___x_711_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitArgs___boxed(lean_object* v_args_712_, lean_object* v_s_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitArgs(v_args_712_, v_s_713_);
lean_dec_ref(v_args_712_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitLetValue(lean_object* v_e_715_, lean_object* v_a_716_){
_start:
{
switch(lean_obj_tag(v_e_715_))
{
case 3:
{
lean_object* v_us_717_; lean_object* v_args_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v_us_717_ = lean_ctor_get(v_e_715_, 1);
lean_inc(v_us_717_);
v_args_718_ = lean_ctor_get(v_e_715_, 2);
lean_inc_ref(v_args_718_);
lean_dec_ref_known(v_e_715_, 3);
v___x_719_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitArgs(v_args_718_, v_a_716_);
lean_dec_ref(v_args_718_);
v___x_720_ = l_Lean_CollectLevelParams_visitLevels(v_us_717_, v___x_719_);
return v___x_720_;
}
case 4:
{
lean_object* v_args_721_; lean_object* v___x_722_; 
v_args_721_ = lean_ctor_get(v_e_715_, 1);
lean_inc_ref(v_args_721_);
lean_dec_ref_known(v_e_715_, 2);
v___x_722_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitArgs(v_args_721_, v_a_716_);
lean_dec_ref(v_args_721_);
return v___x_722_;
}
default: 
{
lean_dec(v_e_715_);
return v_a_716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitParam(lean_object* v_p_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_type_725_; lean_object* v___x_726_; 
v_type_725_ = lean_ctor_get(v_p_723_, 2);
lean_inc_ref(v_type_725_);
lean_dec_ref(v_p_723_);
v___x_726_ = l_Lean_CollectLevelParams_visitExpr(v_type_725_, v_a_724_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitParams_spec__0(lean_object* v_as_727_, size_t v_i_728_, size_t v_stop_729_, lean_object* v_b_730_){
_start:
{
uint8_t v___x_731_; 
v___x_731_ = lean_usize_dec_eq(v_i_728_, v_stop_729_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; size_t v___x_734_; size_t v___x_735_; 
v___x_732_ = lean_array_uget_borrowed(v_as_727_, v_i_728_);
lean_inc(v___x_732_);
v___x_733_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitParam(v___x_732_, v_b_730_);
v___x_734_ = ((size_t)1ULL);
v___x_735_ = lean_usize_add(v_i_728_, v___x_734_);
v_i_728_ = v___x_735_;
v_b_730_ = v___x_733_;
goto _start;
}
else
{
return v_b_730_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitParams_spec__0___boxed(lean_object* v_as_737_, lean_object* v_i_738_, lean_object* v_stop_739_, lean_object* v_b_740_){
_start:
{
size_t v_i_boxed_741_; size_t v_stop_boxed_742_; lean_object* v_res_743_; 
v_i_boxed_741_ = lean_unbox_usize(v_i_738_);
lean_dec(v_i_738_);
v_stop_boxed_742_ = lean_unbox_usize(v_stop_739_);
lean_dec(v_stop_739_);
v_res_743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitParams_spec__0(v_as_737_, v_i_boxed_741_, v_stop_boxed_742_, v_b_740_);
lean_dec_ref(v_as_737_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitParams(lean_object* v_ps_744_, lean_object* v_s_745_){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_746_ = lean_unsigned_to_nat(0u);
v___x_747_ = lean_array_get_size(v_ps_744_);
v___x_748_ = lean_nat_dec_lt(v___x_746_, v___x_747_);
if (v___x_748_ == 0)
{
return v_s_745_;
}
else
{
uint8_t v___x_749_; 
v___x_749_ = lean_nat_dec_le(v___x_747_, v___x_747_);
if (v___x_749_ == 0)
{
if (v___x_748_ == 0)
{
return v_s_745_;
}
else
{
size_t v___x_750_; size_t v___x_751_; lean_object* v___x_752_; 
v___x_750_ = ((size_t)0ULL);
v___x_751_ = lean_usize_of_nat(v___x_747_);
v___x_752_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitParams_spec__0(v_ps_744_, v___x_750_, v___x_751_, v_s_745_);
return v___x_752_;
}
}
else
{
size_t v___x_753_; size_t v___x_754_; lean_object* v___x_755_; 
v___x_753_ = ((size_t)0ULL);
v___x_754_ = lean_usize_of_nat(v___x_747_);
v___x_755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitParams_spec__0(v_ps_744_, v___x_753_, v___x_754_, v_s_745_);
return v___x_755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitParams___boxed(lean_object* v_ps_756_, lean_object* v_s_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitParams(v_ps_756_, v_s_757_);
lean_dec_ref(v_ps_756_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitAlts_spec__2(lean_object* v_as_759_, size_t v_i_760_, size_t v_stop_761_, lean_object* v_b_762_){
_start:
{
uint8_t v___x_763_; 
v___x_763_ = lean_usize_dec_eq(v_i_760_, v_stop_761_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; size_t v___x_766_; size_t v___x_767_; 
v___x_764_ = lean_array_uget_borrowed(v_as_759_, v_i_760_);
lean_inc(v___x_764_);
v___x_765_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitAlt(v___x_764_, v_b_762_);
v___x_766_ = ((size_t)1ULL);
v___x_767_ = lean_usize_add(v_i_760_, v___x_766_);
v_i_760_ = v___x_767_;
v_b_762_ = v___x_765_;
goto _start;
}
else
{
return v_b_762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitAlts(lean_object* v_alts_769_, lean_object* v_s_770_){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = lean_array_get_size(v_alts_769_);
v___x_773_ = lean_nat_dec_lt(v___x_771_, v___x_772_);
if (v___x_773_ == 0)
{
return v_s_770_;
}
else
{
uint8_t v___x_774_; 
v___x_774_ = lean_nat_dec_le(v___x_772_, v___x_772_);
if (v___x_774_ == 0)
{
if (v___x_773_ == 0)
{
return v_s_770_;
}
else
{
size_t v___x_775_; size_t v___x_776_; lean_object* v___x_777_; 
v___x_775_ = ((size_t)0ULL);
v___x_776_ = lean_usize_of_nat(v___x_772_);
v___x_777_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitAlts_spec__2(v_alts_769_, v___x_775_, v___x_776_, v_s_770_);
return v___x_777_;
}
}
else
{
size_t v___x_778_; size_t v___x_779_; lean_object* v___x_780_; 
v___x_778_ = ((size_t)0ULL);
v___x_779_ = lean_usize_of_nat(v___x_772_);
v___x_780_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitAlts_spec__2(v_alts_769_, v___x_778_, v___x_779_, v_s_770_);
return v___x_780_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitCode(lean_object* v_x_781_, lean_object* v_a_782_){
_start:
{
switch(lean_obj_tag(v_x_781_))
{
case 0:
{
lean_object* v_decl_783_; lean_object* v_k_784_; lean_object* v_type_785_; lean_object* v_value_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v_decl_783_ = lean_ctor_get(v_x_781_, 0);
lean_inc_ref(v_decl_783_);
v_k_784_ = lean_ctor_get(v_x_781_, 1);
lean_inc_ref(v_k_784_);
lean_dec_ref_known(v_x_781_, 2);
v_type_785_ = lean_ctor_get(v_decl_783_, 2);
lean_inc_ref(v_type_785_);
v_value_786_ = lean_ctor_get(v_decl_783_, 3);
lean_inc(v_value_786_);
lean_dec_ref(v_decl_783_);
v___x_787_ = l_Lean_CollectLevelParams_visitExpr(v_type_785_, v_a_782_);
v___x_788_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitLetValue(v_value_786_, v___x_787_);
v_x_781_ = v_k_784_;
v_a_782_ = v___x_788_;
goto _start;
}
case 3:
{
lean_object* v_args_790_; lean_object* v___x_791_; 
v_args_790_ = lean_ctor_get(v_x_781_, 1);
lean_inc_ref(v_args_790_);
lean_dec_ref_known(v_x_781_, 2);
v___x_791_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitArgs(v_args_790_, v_a_782_);
lean_dec_ref(v_args_790_);
return v___x_791_;
}
case 4:
{
lean_object* v_cases_792_; lean_object* v_resultType_793_; lean_object* v_alts_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v_cases_792_ = lean_ctor_get(v_x_781_, 0);
lean_inc_ref(v_cases_792_);
lean_dec_ref_known(v_x_781_, 1);
v_resultType_793_ = lean_ctor_get(v_cases_792_, 1);
lean_inc_ref(v_resultType_793_);
v_alts_794_ = lean_ctor_get(v_cases_792_, 3);
lean_inc_ref(v_alts_794_);
lean_dec_ref(v_cases_792_);
v___x_795_ = l_Lean_CollectLevelParams_visitExpr(v_resultType_793_, v_a_782_);
v___x_796_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitAlts(v_alts_794_, v___x_795_);
lean_dec_ref(v_alts_794_);
return v___x_796_;
}
case 5:
{
lean_dec_ref_known(v_x_781_, 1);
return v_a_782_;
}
case 6:
{
lean_object* v_type_797_; lean_object* v___x_798_; 
v_type_797_ = lean_ctor_get(v_x_781_, 0);
lean_inc_ref(v_type_797_);
lean_dec_ref_known(v_x_781_, 1);
v___x_798_ = l_Lean_CollectLevelParams_visitExpr(v_type_797_, v_a_782_);
return v___x_798_;
}
default: 
{
lean_object* v_decl_799_; lean_object* v_k_800_; lean_object* v_params_801_; lean_object* v_type_802_; lean_object* v_value_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_decl_799_ = lean_ctor_get(v_x_781_, 0);
lean_inc_ref(v_decl_799_);
v_k_800_ = lean_ctor_get(v_x_781_, 1);
lean_inc_ref(v_k_800_);
lean_dec_ref(v_x_781_);
v_params_801_ = lean_ctor_get(v_decl_799_, 2);
lean_inc_ref(v_params_801_);
v_type_802_ = lean_ctor_get(v_decl_799_, 3);
lean_inc_ref(v_type_802_);
v_value_803_ = lean_ctor_get(v_decl_799_, 4);
lean_inc_ref(v_value_803_);
lean_dec_ref(v_decl_799_);
v___x_804_ = l_Lean_CollectLevelParams_visitExpr(v_type_802_, v_a_782_);
v___x_805_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitParams(v_params_801_, v___x_804_);
lean_dec_ref(v_params_801_);
v___x_806_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitCode(v_value_803_, v___x_805_);
v_x_781_ = v_k_800_;
v_a_782_ = v___x_806_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitAlt(lean_object* v_alt_808_, lean_object* v_a_809_){
_start:
{
if (lean_obj_tag(v_alt_808_) == 0)
{
lean_object* v_params_810_; lean_object* v_code_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_params_810_ = lean_ctor_get(v_alt_808_, 1);
lean_inc_ref(v_params_810_);
v_code_811_ = lean_ctor_get(v_alt_808_, 2);
lean_inc_ref(v_code_811_);
lean_dec_ref_known(v_alt_808_, 3);
v___x_812_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitParams(v_params_810_, v_a_809_);
lean_dec_ref(v_params_810_);
v___x_813_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitCode(v_code_811_, v___x_812_);
return v___x_813_;
}
else
{
lean_object* v_code_814_; lean_object* v___x_815_; 
v_code_814_ = lean_ctor_get(v_alt_808_, 0);
lean_inc_ref(v_code_814_);
lean_dec_ref_known(v_alt_808_, 1);
v___x_815_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitCode(v_code_814_, v_a_809_);
return v___x_815_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitAlts_spec__2___boxed(lean_object* v_as_816_, lean_object* v_i_817_, lean_object* v_stop_818_, lean_object* v_b_819_){
_start:
{
size_t v_i_boxed_820_; size_t v_stop_boxed_821_; lean_object* v_res_822_; 
v_i_boxed_820_ = lean_unbox_usize(v_i_817_);
lean_dec(v_i_817_);
v_stop_boxed_821_ = lean_unbox_usize(v_stop_818_);
lean_dec(v_stop_818_);
v_res_822_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_CollectLevelParams_visitAlts_spec__2(v_as_816_, v_i_boxed_820_, v_stop_boxed_821_, v_b_819_);
lean_dec_ref(v_as_816_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitAlts___boxed(lean_object* v_alts_823_, lean_object* v_s_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitAlts(v_alts_823_, v_s_824_);
lean_dec_ref(v_alts_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CollectLevelParams_visitDeclValue(lean_object* v_x_826_, lean_object* v_a_827_){
_start:
{
if (lean_obj_tag(v_x_826_) == 0)
{
lean_object* v_code_828_; lean_object* v___x_829_; 
v_code_828_ = lean_ctor_get(v_x_826_, 0);
lean_inc_ref(v_code_828_);
lean_dec_ref_known(v_x_826_, 1);
v___x_829_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitCode(v_code_828_, v_a_827_);
return v___x_829_;
}
else
{
lean_dec_ref_known(v_x_826_, 1);
return v_a_827_;
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__0(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = lean_box(0);
v___x_831_ = lean_unsigned_to_nat(16u);
v___x_832_ = lean_mk_array(v___x_831_, v___x_830_);
return v___x_832_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__1(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_833_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__0, &l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__0);
v___x_834_ = lean_unsigned_to_nat(0u);
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
lean_ctor_set(v___x_835_, 1, v___x_833_);
return v___x_835_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__2(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_836_ = ((lean_object*)(l_Lean_Compiler_LCNF_normLevelParams___closed__2));
v___x_837_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__1, &l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__1);
v___x_838_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
lean_ctor_set(v___x_838_, 2, v___x_836_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_setLevelParams(lean_object* v_decl_839_){
_start:
{
lean_object* v_toSignature_840_; lean_object* v_value_841_; uint8_t v_recursive_842_; lean_object* v_inlineAttr_x3f_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_868_; 
v_toSignature_840_ = lean_ctor_get(v_decl_839_, 0);
v_value_841_ = lean_ctor_get(v_decl_839_, 1);
v_recursive_842_ = lean_ctor_get_uint8(v_decl_839_, sizeof(void*)*3);
v_inlineAttr_x3f_843_ = lean_ctor_get(v_decl_839_, 2);
v_isSharedCheck_868_ = !lean_is_exclusive(v_decl_839_);
if (v_isSharedCheck_868_ == 0)
{
v___x_845_ = v_decl_839_;
v_isShared_846_ = v_isSharedCheck_868_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_inlineAttr_x3f_843_);
lean_inc(v_value_841_);
lean_inc(v_toSignature_840_);
lean_dec(v_decl_839_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_868_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v_name_847_; lean_object* v_type_848_; lean_object* v_params_849_; uint8_t v_safe_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_866_; 
v_name_847_ = lean_ctor_get(v_toSignature_840_, 0);
v_type_848_ = lean_ctor_get(v_toSignature_840_, 2);
v_params_849_ = lean_ctor_get(v_toSignature_840_, 3);
v_safe_850_ = lean_ctor_get_uint8(v_toSignature_840_, sizeof(void*)*4);
v_isSharedCheck_866_ = !lean_is_exclusive(v_toSignature_840_);
if (v_isSharedCheck_866_ == 0)
{
lean_object* v_unused_867_; 
v_unused_867_ = lean_ctor_get(v_toSignature_840_, 1);
lean_dec(v_unused_867_);
v___x_852_ = v_toSignature_840_;
v_isShared_853_ = v_isSharedCheck_866_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_params_849_);
lean_inc(v_type_848_);
lean_inc(v_name_847_);
lean_dec(v_toSignature_840_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_866_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v_params_858_; lean_object* v_levelParams_859_; lean_object* v___x_861_; 
v___x_854_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__2, &l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__2_once, _init_l_Lean_Compiler_LCNF_Decl_setLevelParams___closed__2);
lean_inc_ref(v_type_848_);
v___x_855_ = l_Lean_CollectLevelParams_visitExpr(v_type_848_, v___x_854_);
v___x_856_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitParams(v_params_849_, v___x_855_);
lean_inc_ref(v_value_841_);
v___x_857_ = l_Lean_Compiler_LCNF_CollectLevelParams_visitDeclValue(v_value_841_, v___x_856_);
v_params_858_ = lean_ctor_get(v___x_857_, 2);
lean_inc_ref(v_params_858_);
lean_dec_ref(v___x_857_);
v_levelParams_859_ = lean_array_to_list(v_params_858_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 1, v_levelParams_859_);
v___x_861_ = v___x_852_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_name_847_);
lean_ctor_set(v_reuseFailAlloc_865_, 1, v_levelParams_859_);
lean_ctor_set(v_reuseFailAlloc_865_, 2, v_type_848_);
lean_ctor_set(v_reuseFailAlloc_865_, 3, v_params_849_);
lean_ctor_set_uint8(v_reuseFailAlloc_865_, sizeof(void*)*4, v_safe_850_);
v___x_861_ = v_reuseFailAlloc_865_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
lean_object* v___x_863_; 
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_861_);
v___x_863_ = v___x_845_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_864_, 1, v_value_841_);
lean_ctor_set(v_reuseFailAlloc_864_, 2, v_inlineAttr_x3f_843_);
lean_ctor_set_uint8(v_reuseFailAlloc_864_, sizeof(void*)*3, v_recursive_842_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
}
lean_object* runtime_initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Level(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Level(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Level(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Level(builtin);
}
#ifdef __cplusplus
}
#endif

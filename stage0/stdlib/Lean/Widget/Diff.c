// Lean compiler output
// Module: Lean.Widget.Diff
// Imports: public import Lean.Widget.InteractiveGoal
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
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_SubExpr_Pos_pushNthBindingDomain(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Expr_getForallBodyMaxDepth(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_getFVarFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNthBindingBody(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getForallBinderNames(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushBindingBody(lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushBindingDomain(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_SubExpr_Pos_pushProj(lean_object*);
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
extern lean_object* l_Lean_SubExpr_Pos_root;
lean_object* l_Lean_Widget_SubexprInfo_withDiffTag(uint8_t, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarIdSet_ofArray(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "showTacticDiff"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(169, 112, 244, 47, 27, 57, 231, 91)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "When true, interactive goals for tactics will be decorated with diffing information. "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Widget"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Diff"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__16_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__16_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "change"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "insert"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1_value)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5_value)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6_value)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "before: "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\nafter: "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__1;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed__const__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "should not happen"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "internal error: empty fvar list!"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Unknown goal "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Failed to find decl for "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unknown goal "};
static const lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(lean_object*, uint8_t, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(uint8_t, lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_box(0);
v___x_44_ = l_unsafeCast___redArg(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_47_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_48_ = l_Lean_Name_str___override(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_51_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_52_ = l_Lean_Name_str___override(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_55_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_56_ = l_Lean_Name_str___override(v___x_55_, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_58_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_59_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_60_ = l_Lean_Name_str___override(v___x_59_, v___x_58_);
return v___x_60_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_unsigned_to_nat(0u);
v___x_62_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_63_ = l_Lean_Name_num___override(v___x_62_, v___x_61_);
return v___x_63_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_65_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_66_ = l_Lean_Name_str___override(v___x_65_, v___x_64_);
return v___x_66_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_68_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_69_ = l_Lean_Name_str___override(v___x_68_, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__16_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_71_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_72_ = l_Lean_Name_str___override(v___x_71_, v___x_70_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_75_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_76_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__16_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__16_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__16_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_77_ = l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(v___x_74_, v___x_75_, v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4____boxed(lean_object* v_a_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx(uint8_t v_x_80_){
_start:
{
switch(v_x_80_)
{
case 0:
{
lean_object* v___x_81_; 
v___x_81_ = lean_unsigned_to_nat(0u);
return v___x_81_;
}
case 1:
{
lean_object* v___x_82_; 
v___x_82_ = lean_unsigned_to_nat(1u);
return v___x_82_;
}
default: 
{
lean_object* v___x_83_; 
v___x_83_ = lean_unsigned_to_nat(2u);
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___boxed(lean_object* v_x_84_){
_start:
{
uint8_t v_x_boxed_85_; lean_object* v_res_86_; 
v_x_boxed_85_ = lean_unbox(v_x_84_);
v_res_86_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx(v_x_boxed_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(lean_object* v_k_87_){
_start:
{
lean_inc(v_k_87_);
return v_k_87_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg___boxed(lean_object* v_k_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(v_k_88_);
lean_dec(v_k_88_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(lean_object* v_motive_90_, lean_object* v_ctorIdx_91_, uint8_t v_t_92_, lean_object* v_h_93_, lean_object* v_k_94_){
_start:
{
lean_inc(v_k_94_);
return v_k_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___boxed(lean_object* v_motive_95_, lean_object* v_ctorIdx_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_k_99_){
_start:
{
uint8_t v_t_boxed_100_; lean_object* v_res_101_; 
v_t_boxed_100_ = lean_unbox(v_t_97_);
v_res_101_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(v_motive_95_, v_ctorIdx_96_, v_t_boxed_100_, v_h_98_, v_k_99_);
lean_dec(v_k_99_);
lean_dec(v_ctorIdx_96_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(lean_object* v_change_102_){
_start:
{
lean_inc(v_change_102_);
return v_change_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg___boxed(lean_object* v_change_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(v_change_103_);
lean_dec(v_change_103_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(lean_object* v_motive_105_, uint8_t v_t_106_, lean_object* v_h_107_, lean_object* v_change_108_){
_start:
{
lean_inc(v_change_108_);
return v_change_108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___boxed(lean_object* v_motive_109_, lean_object* v_t_110_, lean_object* v_h_111_, lean_object* v_change_112_){
_start:
{
uint8_t v_t_boxed_113_; lean_object* v_res_114_; 
v_t_boxed_113_ = lean_unbox(v_t_110_);
v_res_114_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(v_motive_109_, v_t_boxed_113_, v_h_111_, v_change_112_);
lean_dec(v_change_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(lean_object* v_delete_115_){
_start:
{
lean_inc(v_delete_115_);
return v_delete_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg___boxed(lean_object* v_delete_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(v_delete_116_);
lean_dec(v_delete_116_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(lean_object* v_motive_118_, uint8_t v_t_119_, lean_object* v_h_120_, lean_object* v_delete_121_){
_start:
{
lean_inc(v_delete_121_);
return v_delete_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___boxed(lean_object* v_motive_122_, lean_object* v_t_123_, lean_object* v_h_124_, lean_object* v_delete_125_){
_start:
{
uint8_t v_t_boxed_126_; lean_object* v_res_127_; 
v_t_boxed_126_ = lean_unbox(v_t_123_);
v_res_127_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(v_motive_122_, v_t_boxed_126_, v_h_124_, v_delete_125_);
lean_dec(v_delete_125_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(lean_object* v_insert_128_){
_start:
{
lean_inc(v_insert_128_);
return v_insert_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg___boxed(lean_object* v_insert_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(v_insert_129_);
lean_dec(v_insert_129_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(lean_object* v_motive_131_, uint8_t v_t_132_, lean_object* v_h_133_, lean_object* v_insert_134_){
_start:
{
lean_inc(v_insert_134_);
return v_insert_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___boxed(lean_object* v_motive_135_, lean_object* v_t_136_, lean_object* v_h_137_, lean_object* v_insert_138_){
_start:
{
uint8_t v_t_boxed_139_; lean_object* v_res_140_; 
v_t_boxed_139_ = lean_unbox(v_t_136_);
v_res_140_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(v_motive_135_, v_t_boxed_139_, v_h_137_, v_insert_138_);
lean_dec(v_insert_138_);
return v_res_140_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(uint8_t v_x_141_, uint8_t v_x_142_){
_start:
{
if (v_x_141_ == 0)
{
switch(v_x_142_)
{
case 0:
{
uint8_t v___x_143_; 
v___x_143_ = 1;
return v___x_143_;
}
case 1:
{
uint8_t v___x_144_; 
v___x_144_ = 3;
return v___x_144_;
}
default: 
{
uint8_t v___x_145_; 
v___x_145_ = 5;
return v___x_145_;
}
}
}
else
{
switch(v_x_142_)
{
case 0:
{
uint8_t v___x_146_; 
v___x_146_ = 0;
return v___x_146_;
}
case 1:
{
uint8_t v___x_147_; 
v___x_147_ = 2;
return v___x_147_;
}
default: 
{
uint8_t v___x_148_; 
v___x_148_ = 4;
return v___x_148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag___boxed(lean_object* v_x_149_, lean_object* v_x_150_){
_start:
{
uint8_t v_x_49__boxed_151_; uint8_t v_x_50__boxed_152_; uint8_t v_res_153_; lean_object* v_r_154_; 
v_x_49__boxed_151_ = lean_unbox(v_x_149_);
v_x_50__boxed_152_ = lean_unbox(v_x_150_);
v_res_153_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(v_x_49__boxed_151_, v_x_50__boxed_152_);
v_r_154_ = lean_box(v_res_153_);
return v_r_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(uint8_t v_x_158_){
_start:
{
switch(v_x_158_)
{
case 0:
{
lean_object* v___x_159_; 
v___x_159_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0));
return v___x_159_;
}
case 1:
{
lean_object* v___x_160_; 
v___x_160_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1));
return v___x_160_;
}
default: 
{
lean_object* v___x_161_; 
v___x_161_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2));
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed(lean_object* v_x_162_){
_start:
{
uint8_t v_x_31__boxed_163_; lean_object* v_res_164_; 
v_x_31__boxed_163_ = lean_unbox(v_x_162_);
v_res_164_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(v_x_31__boxed_163_);
return v_res_164_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(lean_object* v_x_170_, lean_object* v_y_171_){
_start:
{
uint8_t v___x_172_; 
v___x_172_ = lean_nat_dec_lt(v_x_170_, v_y_171_);
if (v___x_172_ == 0)
{
uint8_t v___x_173_; 
v___x_173_ = lean_nat_dec_eq(v_x_170_, v_y_171_);
if (v___x_173_ == 0)
{
uint8_t v___x_174_; 
v___x_174_ = 2;
return v___x_174_;
}
else
{
uint8_t v___x_175_; 
v___x_175_ = 1;
return v___x_175_;
}
}
else
{
uint8_t v___x_176_; 
v___x_176_ = 0;
return v___x_176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed(lean_object* v_x_177_, lean_object* v_y_178_){
_start:
{
uint8_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(v_x_177_, v_y_178_);
lean_dec(v_y_178_);
lean_dec(v_x_177_);
v_r_180_ = lean_box(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(uint8_t v_b_u2082_181_, lean_object* v_x_182_){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_box(v_b_u2082_181_);
v___x_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed(lean_object* v_b_u2082_185_, lean_object* v_x_186_){
_start:
{
uint8_t v_b_u2082_boxed_187_; lean_object* v_res_188_; 
v_b_u2082_boxed_187_ = lean_unbox(v_b_u2082_185_);
v_res_188_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(v_b_u2082_boxed_187_, v_x_186_);
lean_dec(v_x_186_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(lean_object* v___f_189_, lean_object* v_t_190_, lean_object* v_a_191_, uint8_t v_b_u2082_192_){
_start:
{
lean_object* v___x_193_; lean_object* v___f_194_; lean_object* v___x_195_; 
v___x_193_ = lean_box(v_b_u2082_192_);
v___f_194_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed), 2, 1);
lean_closure_set(v___f_194_, 0, v___x_193_);
v___x_195_ = l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(v___f_189_, v_a_191_, v___f_194_, v_t_190_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed(lean_object* v___f_196_, lean_object* v_t_197_, lean_object* v_a_198_, lean_object* v_b_u2082_199_){
_start:
{
uint8_t v_b_u2082_boxed_200_; lean_object* v_res_201_; 
v_b_u2082_boxed_200_ = lean_unbox(v_b_u2082_199_);
v_res_201_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(v___f_196_, v_t_197_, v_a_198_, v_b_u2082_boxed_200_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5(lean_object* v___f_202_, lean_object* v___f_203_, lean_object* v_a_204_, lean_object* v_b_205_){
_start:
{
lean_object* v_changesBefore_206_; lean_object* v_changesAfter_207_; lean_object* v_changesBefore_208_; lean_object* v_changesAfter_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_218_; 
v_changesBefore_206_ = lean_ctor_get(v_a_204_, 0);
lean_inc(v_changesBefore_206_);
v_changesAfter_207_ = lean_ctor_get(v_a_204_, 1);
lean_inc(v_changesAfter_207_);
lean_dec_ref(v_a_204_);
v_changesBefore_208_ = lean_ctor_get(v_b_205_, 0);
v_changesAfter_209_ = lean_ctor_get(v_b_205_, 1);
v_isSharedCheck_218_ = !lean_is_exclusive(v_b_205_);
if (v_isSharedCheck_218_ == 0)
{
v___x_211_ = v_b_205_;
v_isShared_212_ = v_isSharedCheck_218_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_changesAfter_209_);
lean_inc(v_changesBefore_208_);
lean_dec(v_b_205_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_218_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_216_; 
v___x_213_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_202_, v_changesBefore_206_, v_changesBefore_208_);
v___x_214_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_203_, v_changesAfter_207_, v_changesAfter_209_);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 1, v___x_214_);
lean_ctor_set(v___x_211_, 0, v___x_213_);
v___x_216_ = v___x_211_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_213_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v___x_214_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(lean_object* v_x_228_){
_start:
{
lean_object* v_fst_229_; lean_object* v_snd_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; uint8_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_fst_229_ = lean_ctor_get(v_x_228_, 0);
v_snd_230_ = lean_ctor_get(v_x_228_, 1);
v___x_231_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0));
v___x_232_ = l_Lean_SubExpr_Pos_toString(v_fst_229_);
v___x_233_ = lean_string_append(v___x_231_, v___x_232_);
lean_dec_ref(v___x_232_);
v___x_234_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1));
v___x_235_ = lean_string_append(v___x_233_, v___x_234_);
v___x_236_ = lean_unbox(v_snd_230_);
v___x_237_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(v___x_236_);
v___x_238_ = lean_string_append(v___x_235_, v___x_237_);
lean_dec_ref(v___x_237_);
v___x_239_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2));
v___x_240_ = lean_string_append(v___x_238_, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed(lean_object* v_x_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(v_x_241_);
lean_dec_ref(v_x_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(lean_object* v_x1_243_, uint8_t v_x2_244_, lean_object* v_x3_245_){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_246_ = lean_box(v_x2_244_);
v___x_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_247_, 0, v_x1_243_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v_x3_245_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed(lean_object* v_x1_249_, lean_object* v_x2_250_, lean_object* v_x3_251_){
_start:
{
uint8_t v_x2_245__boxed_252_; lean_object* v_res_253_; 
v_x2_245__boxed_252_ = lean_unbox(v_x2_250_);
v_res_253_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(v_x1_249_, v_x2_245__boxed_252_, v_x3_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2(lean_object* v___f_273_, lean_object* v___f_274_, lean_object* v_p_275_){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_276_ = lean_box(0);
v___x_277_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9));
v___x_278_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_277_, v___f_273_, v___x_276_, v_p_275_);
v___x_279_ = l_List_mapTR_loop___redArg(v___f_274_, v___x_278_, v___x_276_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3(lean_object* v_f_282_, lean_object* v___f_283_, lean_object* v_x_284_){
_start:
{
lean_object* v_changesBefore_285_; lean_object* v_changesAfter_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_changesBefore_285_ = lean_ctor_get(v_x_284_, 0);
lean_inc(v_changesBefore_285_);
v_changesAfter_286_ = lean_ctor_get(v_x_284_, 1);
lean_inc(v_changesAfter_286_);
lean_dec_ref(v_x_284_);
v___x_287_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0));
lean_inc_ref(v_f_282_);
v___x_288_ = lean_apply_1(v_f_282_, v_changesBefore_285_);
lean_inc_ref(v___f_283_);
v___x_289_ = l_List_toString___redArg(v___f_283_, v___x_288_);
v___x_290_ = lean_string_append(v___x_287_, v___x_289_);
lean_dec_ref(v___x_289_);
v___x_291_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1));
v___x_292_ = lean_string_append(v___x_290_, v___x_291_);
v___x_293_ = lean_apply_1(v_f_282_, v_changesAfter_286_);
v___x_294_ = l_List_toString___redArg(v___f_283_, v___x_293_);
v___x_295_ = lean_string_append(v___x_292_, v___x_294_);
lean_dec_ref(v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(lean_object* v_k_306_, lean_object* v_v_307_, lean_object* v_t_308_){
_start:
{
if (lean_obj_tag(v_t_308_) == 0)
{
lean_object* v_size_309_; lean_object* v_k_310_; lean_object* v_v_311_; lean_object* v_l_312_; lean_object* v_r_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_594_; 
v_size_309_ = lean_ctor_get(v_t_308_, 0);
v_k_310_ = lean_ctor_get(v_t_308_, 1);
v_v_311_ = lean_ctor_get(v_t_308_, 2);
v_l_312_ = lean_ctor_get(v_t_308_, 3);
v_r_313_ = lean_ctor_get(v_t_308_, 4);
v_isSharedCheck_594_ = !lean_is_exclusive(v_t_308_);
if (v_isSharedCheck_594_ == 0)
{
v___x_315_ = v_t_308_;
v_isShared_316_ = v_isSharedCheck_594_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_r_313_);
lean_inc(v_l_312_);
lean_inc(v_v_311_);
lean_inc(v_k_310_);
lean_inc(v_size_309_);
lean_dec(v_t_308_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_594_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_lt(v_k_306_, v_k_310_);
if (v___x_317_ == 0)
{
uint8_t v___x_318_; 
v___x_318_ = lean_nat_dec_eq(v_k_306_, v_k_310_);
if (v___x_318_ == 0)
{
lean_object* v_impl_319_; lean_object* v___x_320_; 
lean_dec(v_size_309_);
v_impl_319_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_306_, v_v_307_, v_r_313_);
v___x_320_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_312_) == 0)
{
lean_object* v_size_321_; lean_object* v_size_322_; lean_object* v_k_323_; lean_object* v_v_324_; lean_object* v_l_325_; lean_object* v_r_326_; lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v_size_321_ = lean_ctor_get(v_l_312_, 0);
v_size_322_ = lean_ctor_get(v_impl_319_, 0);
lean_inc(v_size_322_);
v_k_323_ = lean_ctor_get(v_impl_319_, 1);
lean_inc(v_k_323_);
v_v_324_ = lean_ctor_get(v_impl_319_, 2);
lean_inc(v_v_324_);
v_l_325_ = lean_ctor_get(v_impl_319_, 3);
lean_inc(v_l_325_);
v_r_326_ = lean_ctor_get(v_impl_319_, 4);
lean_inc(v_r_326_);
v___x_327_ = lean_unsigned_to_nat(3u);
v___x_328_ = lean_nat_mul(v___x_327_, v_size_321_);
v___x_329_ = lean_nat_dec_lt(v___x_328_, v_size_322_);
lean_dec(v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_333_; 
lean_dec(v_r_326_);
lean_dec(v_l_325_);
lean_dec(v_v_324_);
lean_dec(v_k_323_);
v___x_330_ = lean_nat_add(v___x_320_, v_size_321_);
v___x_331_ = lean_nat_add(v___x_330_, v_size_322_);
lean_dec(v_size_322_);
lean_dec(v___x_330_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v_impl_319_);
lean_ctor_set(v___x_315_, 0, v___x_331_);
v___x_333_ = v___x_315_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_331_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_334_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_334_, 3, v_l_312_);
lean_ctor_set(v_reuseFailAlloc_334_, 4, v_impl_319_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
else
{
lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_398_; 
v_isSharedCheck_398_ = !lean_is_exclusive(v_impl_319_);
if (v_isSharedCheck_398_ == 0)
{
lean_object* v_unused_399_; lean_object* v_unused_400_; lean_object* v_unused_401_; lean_object* v_unused_402_; lean_object* v_unused_403_; 
v_unused_399_ = lean_ctor_get(v_impl_319_, 4);
lean_dec(v_unused_399_);
v_unused_400_ = lean_ctor_get(v_impl_319_, 3);
lean_dec(v_unused_400_);
v_unused_401_ = lean_ctor_get(v_impl_319_, 2);
lean_dec(v_unused_401_);
v_unused_402_ = lean_ctor_get(v_impl_319_, 1);
lean_dec(v_unused_402_);
v_unused_403_ = lean_ctor_get(v_impl_319_, 0);
lean_dec(v_unused_403_);
v___x_336_ = v_impl_319_;
v_isShared_337_ = v_isSharedCheck_398_;
goto v_resetjp_335_;
}
else
{
lean_dec(v_impl_319_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_398_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v_size_338_; lean_object* v_k_339_; lean_object* v_v_340_; lean_object* v_l_341_; lean_object* v_r_342_; lean_object* v_size_343_; lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v_size_338_ = lean_ctor_get(v_l_325_, 0);
v_k_339_ = lean_ctor_get(v_l_325_, 1);
v_v_340_ = lean_ctor_get(v_l_325_, 2);
v_l_341_ = lean_ctor_get(v_l_325_, 3);
v_r_342_ = lean_ctor_get(v_l_325_, 4);
v_size_343_ = lean_ctor_get(v_r_326_, 0);
v___x_344_ = lean_unsigned_to_nat(2u);
v___x_345_ = lean_nat_mul(v___x_344_, v_size_343_);
v___x_346_ = lean_nat_dec_lt(v_size_338_, v___x_345_);
lean_dec(v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_374_; 
lean_inc(v_r_342_);
lean_inc(v_l_341_);
lean_inc(v_v_340_);
lean_inc(v_k_339_);
v_isSharedCheck_374_ = !lean_is_exclusive(v_l_325_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; lean_object* v_unused_376_; lean_object* v_unused_377_; lean_object* v_unused_378_; lean_object* v_unused_379_; 
v_unused_375_ = lean_ctor_get(v_l_325_, 4);
lean_dec(v_unused_375_);
v_unused_376_ = lean_ctor_get(v_l_325_, 3);
lean_dec(v_unused_376_);
v_unused_377_ = lean_ctor_get(v_l_325_, 2);
lean_dec(v_unused_377_);
v_unused_378_ = lean_ctor_get(v_l_325_, 1);
lean_dec(v_unused_378_);
v_unused_379_ = lean_ctor_get(v_l_325_, 0);
lean_dec(v_unused_379_);
v___x_348_ = v_l_325_;
v_isShared_349_ = v_isSharedCheck_374_;
goto v_resetjp_347_;
}
else
{
lean_dec(v_l_325_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_374_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___y_353_; lean_object* v___y_354_; lean_object* v___y_355_; lean_object* v___y_364_; 
v___x_350_ = lean_nat_add(v___x_320_, v_size_321_);
v___x_351_ = lean_nat_add(v___x_350_, v_size_322_);
lean_dec(v_size_322_);
if (lean_obj_tag(v_l_341_) == 0)
{
lean_object* v_size_372_; 
v_size_372_ = lean_ctor_get(v_l_341_, 0);
lean_inc(v_size_372_);
v___y_364_ = v_size_372_;
goto v___jp_363_;
}
else
{
lean_object* v___x_373_; 
v___x_373_ = lean_unsigned_to_nat(0u);
v___y_364_ = v___x_373_;
goto v___jp_363_;
}
v___jp_352_:
{
lean_object* v___x_356_; lean_object* v___x_358_; 
v___x_356_ = lean_nat_add(v___y_354_, v___y_355_);
lean_dec(v___y_355_);
lean_dec(v___y_354_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 4, v_r_326_);
lean_ctor_set(v___x_348_, 3, v_r_342_);
lean_ctor_set(v___x_348_, 2, v_v_324_);
lean_ctor_set(v___x_348_, 1, v_k_323_);
lean_ctor_set(v___x_348_, 0, v___x_356_);
v___x_358_ = v___x_348_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_356_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_k_323_);
lean_ctor_set(v_reuseFailAlloc_362_, 2, v_v_324_);
lean_ctor_set(v_reuseFailAlloc_362_, 3, v_r_342_);
lean_ctor_set(v_reuseFailAlloc_362_, 4, v_r_326_);
v___x_358_ = v_reuseFailAlloc_362_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
lean_object* v___x_360_; 
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 4, v___x_358_);
lean_ctor_set(v___x_336_, 3, v___y_353_);
lean_ctor_set(v___x_336_, 2, v_v_340_);
lean_ctor_set(v___x_336_, 1, v_k_339_);
lean_ctor_set(v___x_336_, 0, v___x_351_);
v___x_360_ = v___x_336_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_k_339_);
lean_ctor_set(v_reuseFailAlloc_361_, 2, v_v_340_);
lean_ctor_set(v_reuseFailAlloc_361_, 3, v___y_353_);
lean_ctor_set(v_reuseFailAlloc_361_, 4, v___x_358_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
v___jp_363_:
{
lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_365_ = lean_nat_add(v___x_350_, v___y_364_);
lean_dec(v___y_364_);
lean_dec(v___x_350_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v_l_341_);
lean_ctor_set(v___x_315_, 0, v___x_365_);
v___x_367_ = v___x_315_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_365_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_371_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_371_, 3, v_l_312_);
lean_ctor_set(v_reuseFailAlloc_371_, 4, v_l_341_);
v___x_367_ = v_reuseFailAlloc_371_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
lean_object* v___x_368_; 
v___x_368_ = lean_nat_add(v___x_320_, v_size_343_);
if (lean_obj_tag(v_r_342_) == 0)
{
lean_object* v_size_369_; 
v_size_369_ = lean_ctor_get(v_r_342_, 0);
lean_inc(v_size_369_);
v___y_353_ = v___x_367_;
v___y_354_ = v___x_368_;
v___y_355_ = v_size_369_;
goto v___jp_352_;
}
else
{
lean_object* v___x_370_; 
v___x_370_ = lean_unsigned_to_nat(0u);
v___y_353_ = v___x_367_;
v___y_354_ = v___x_368_;
v___y_355_ = v___x_370_;
goto v___jp_352_;
}
}
}
}
}
else
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_384_; 
lean_del_object(v___x_315_);
v___x_380_ = lean_nat_add(v___x_320_, v_size_321_);
v___x_381_ = lean_nat_add(v___x_380_, v_size_322_);
lean_dec(v_size_322_);
v___x_382_ = lean_nat_add(v___x_380_, v_size_338_);
lean_dec(v___x_380_);
lean_inc_ref(v_l_312_);
if (v_isShared_337_ == 0)
{
lean_ctor_set(v___x_336_, 4, v_l_325_);
lean_ctor_set(v___x_336_, 3, v_l_312_);
lean_ctor_set(v___x_336_, 2, v_v_311_);
lean_ctor_set(v___x_336_, 1, v_k_310_);
lean_ctor_set(v___x_336_, 0, v___x_382_);
v___x_384_ = v___x_336_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_382_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_397_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_397_, 3, v_l_312_);
lean_ctor_set(v_reuseFailAlloc_397_, 4, v_l_325_);
v___x_384_ = v_reuseFailAlloc_397_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_isSharedCheck_391_ = !lean_is_exclusive(v_l_312_);
if (v_isSharedCheck_391_ == 0)
{
lean_object* v_unused_392_; lean_object* v_unused_393_; lean_object* v_unused_394_; lean_object* v_unused_395_; lean_object* v_unused_396_; 
v_unused_392_ = lean_ctor_get(v_l_312_, 4);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_l_312_, 3);
lean_dec(v_unused_393_);
v_unused_394_ = lean_ctor_get(v_l_312_, 2);
lean_dec(v_unused_394_);
v_unused_395_ = lean_ctor_get(v_l_312_, 1);
lean_dec(v_unused_395_);
v_unused_396_ = lean_ctor_get(v_l_312_, 0);
lean_dec(v_unused_396_);
v___x_386_ = v_l_312_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_dec(v_l_312_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 4, v_r_326_);
lean_ctor_set(v___x_386_, 3, v___x_384_);
lean_ctor_set(v___x_386_, 2, v_v_324_);
lean_ctor_set(v___x_386_, 1, v_k_323_);
lean_ctor_set(v___x_386_, 0, v___x_381_);
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_381_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_k_323_);
lean_ctor_set(v_reuseFailAlloc_390_, 2, v_v_324_);
lean_ctor_set(v_reuseFailAlloc_390_, 3, v___x_384_);
lean_ctor_set(v_reuseFailAlloc_390_, 4, v_r_326_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_404_; 
v_l_404_ = lean_ctor_get(v_impl_319_, 3);
lean_inc(v_l_404_);
if (lean_obj_tag(v_l_404_) == 0)
{
lean_object* v_r_405_; lean_object* v_k_406_; lean_object* v_v_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_430_; 
v_r_405_ = lean_ctor_get(v_impl_319_, 4);
v_k_406_ = lean_ctor_get(v_impl_319_, 1);
v_v_407_ = lean_ctor_get(v_impl_319_, 2);
v_isSharedCheck_430_ = !lean_is_exclusive(v_impl_319_);
if (v_isSharedCheck_430_ == 0)
{
lean_object* v_unused_431_; lean_object* v_unused_432_; 
v_unused_431_ = lean_ctor_get(v_impl_319_, 3);
lean_dec(v_unused_431_);
v_unused_432_ = lean_ctor_get(v_impl_319_, 0);
lean_dec(v_unused_432_);
v___x_409_ = v_impl_319_;
v_isShared_410_ = v_isSharedCheck_430_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_r_405_);
lean_inc(v_v_407_);
lean_inc(v_k_406_);
lean_dec(v_impl_319_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_430_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_k_411_; lean_object* v_v_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_426_; 
v_k_411_ = lean_ctor_get(v_l_404_, 1);
v_v_412_ = lean_ctor_get(v_l_404_, 2);
v_isSharedCheck_426_ = !lean_is_exclusive(v_l_404_);
if (v_isSharedCheck_426_ == 0)
{
lean_object* v_unused_427_; lean_object* v_unused_428_; lean_object* v_unused_429_; 
v_unused_427_ = lean_ctor_get(v_l_404_, 4);
lean_dec(v_unused_427_);
v_unused_428_ = lean_ctor_get(v_l_404_, 3);
lean_dec(v_unused_428_);
v_unused_429_ = lean_ctor_get(v_l_404_, 0);
lean_dec(v_unused_429_);
v___x_414_ = v_l_404_;
v_isShared_415_ = v_isSharedCheck_426_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_v_412_);
lean_inc(v_k_411_);
lean_dec(v_l_404_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_426_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_416_; lean_object* v___x_418_; 
v___x_416_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_405_, 2);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 4, v_r_405_);
lean_ctor_set(v___x_414_, 3, v_r_405_);
lean_ctor_set(v___x_414_, 2, v_v_311_);
lean_ctor_set(v___x_414_, 1, v_k_310_);
lean_ctor_set(v___x_414_, 0, v___x_320_);
v___x_418_ = v___x_414_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_425_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_425_, 3, v_r_405_);
lean_ctor_set(v_reuseFailAlloc_425_, 4, v_r_405_);
v___x_418_ = v_reuseFailAlloc_425_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_420_; 
lean_inc(v_r_405_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 3, v_r_405_);
lean_ctor_set(v___x_409_, 0, v___x_320_);
v___x_420_ = v___x_409_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_k_406_);
lean_ctor_set(v_reuseFailAlloc_424_, 2, v_v_407_);
lean_ctor_set(v_reuseFailAlloc_424_, 3, v_r_405_);
lean_ctor_set(v_reuseFailAlloc_424_, 4, v_r_405_);
v___x_420_ = v_reuseFailAlloc_424_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_422_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v___x_420_);
lean_ctor_set(v___x_315_, 3, v___x_418_);
lean_ctor_set(v___x_315_, 2, v_v_412_);
lean_ctor_set(v___x_315_, 1, v_k_411_);
lean_ctor_set(v___x_315_, 0, v___x_416_);
v___x_422_ = v___x_315_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_416_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_k_411_);
lean_ctor_set(v_reuseFailAlloc_423_, 2, v_v_412_);
lean_ctor_set(v_reuseFailAlloc_423_, 3, v___x_418_);
lean_ctor_set(v_reuseFailAlloc_423_, 4, v___x_420_);
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
else
{
lean_object* v_r_433_; 
v_r_433_ = lean_ctor_get(v_impl_319_, 4);
lean_inc(v_r_433_);
if (lean_obj_tag(v_r_433_) == 0)
{
lean_object* v_k_434_; lean_object* v_v_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_446_; 
v_k_434_ = lean_ctor_get(v_impl_319_, 1);
v_v_435_ = lean_ctor_get(v_impl_319_, 2);
v_isSharedCheck_446_ = !lean_is_exclusive(v_impl_319_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; lean_object* v_unused_448_; lean_object* v_unused_449_; 
v_unused_447_ = lean_ctor_get(v_impl_319_, 4);
lean_dec(v_unused_447_);
v_unused_448_ = lean_ctor_get(v_impl_319_, 3);
lean_dec(v_unused_448_);
v_unused_449_ = lean_ctor_get(v_impl_319_, 0);
lean_dec(v_unused_449_);
v___x_437_ = v_impl_319_;
v_isShared_438_ = v_isSharedCheck_446_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_v_435_);
lean_inc(v_k_434_);
lean_dec(v_impl_319_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_446_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_439_; lean_object* v___x_441_; 
v___x_439_ = lean_unsigned_to_nat(3u);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 4, v_l_404_);
lean_ctor_set(v___x_437_, 2, v_v_311_);
lean_ctor_set(v___x_437_, 1, v_k_310_);
lean_ctor_set(v___x_437_, 0, v___x_320_);
v___x_441_ = v___x_437_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_445_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_445_, 3, v_l_404_);
lean_ctor_set(v_reuseFailAlloc_445_, 4, v_l_404_);
v___x_441_ = v_reuseFailAlloc_445_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
lean_object* v___x_443_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v_r_433_);
lean_ctor_set(v___x_315_, 3, v___x_441_);
lean_ctor_set(v___x_315_, 2, v_v_435_);
lean_ctor_set(v___x_315_, 1, v_k_434_);
lean_ctor_set(v___x_315_, 0, v___x_439_);
v___x_443_ = v___x_315_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_k_434_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_v_435_);
lean_ctor_set(v_reuseFailAlloc_444_, 3, v___x_441_);
lean_ctor_set(v_reuseFailAlloc_444_, 4, v_r_433_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
else
{
lean_object* v___x_450_; lean_object* v___x_452_; 
v___x_450_ = lean_unsigned_to_nat(2u);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v_impl_319_);
lean_ctor_set(v___x_315_, 3, v_r_433_);
lean_ctor_set(v___x_315_, 0, v___x_450_);
v___x_452_ = v___x_315_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_450_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v_r_433_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v_impl_319_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
else
{
lean_object* v___x_455_; 
lean_dec(v_v_311_);
lean_dec(v_k_310_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 2, v_v_307_);
lean_ctor_set(v___x_315_, 1, v_k_306_);
v___x_455_ = v___x_315_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_size_309_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_k_306_);
lean_ctor_set(v_reuseFailAlloc_456_, 2, v_v_307_);
lean_ctor_set(v_reuseFailAlloc_456_, 3, v_l_312_);
lean_ctor_set(v_reuseFailAlloc_456_, 4, v_r_313_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
else
{
lean_object* v_impl_457_; lean_object* v___x_458_; 
lean_dec(v_size_309_);
v_impl_457_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_306_, v_v_307_, v_l_312_);
v___x_458_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_313_) == 0)
{
lean_object* v_size_459_; lean_object* v_size_460_; lean_object* v_k_461_; lean_object* v_v_462_; lean_object* v_l_463_; lean_object* v_r_464_; lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; 
v_size_459_ = lean_ctor_get(v_r_313_, 0);
v_size_460_ = lean_ctor_get(v_impl_457_, 0);
lean_inc(v_size_460_);
v_k_461_ = lean_ctor_get(v_impl_457_, 1);
lean_inc(v_k_461_);
v_v_462_ = lean_ctor_get(v_impl_457_, 2);
lean_inc(v_v_462_);
v_l_463_ = lean_ctor_get(v_impl_457_, 3);
lean_inc(v_l_463_);
v_r_464_ = lean_ctor_get(v_impl_457_, 4);
lean_inc(v_r_464_);
v___x_465_ = lean_unsigned_to_nat(3u);
v___x_466_ = lean_nat_mul(v___x_465_, v_size_459_);
v___x_467_ = lean_nat_dec_lt(v___x_466_, v_size_460_);
lean_dec(v___x_466_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_471_; 
lean_dec(v_r_464_);
lean_dec(v_l_463_);
lean_dec(v_v_462_);
lean_dec(v_k_461_);
v___x_468_ = lean_nat_add(v___x_458_, v_size_460_);
lean_dec(v_size_460_);
v___x_469_ = lean_nat_add(v___x_468_, v_size_459_);
lean_dec(v___x_468_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 3, v_impl_457_);
lean_ctor_set(v___x_315_, 0, v___x_469_);
v___x_471_ = v___x_315_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_469_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_472_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_472_, 3, v_impl_457_);
lean_ctor_set(v_reuseFailAlloc_472_, 4, v_r_313_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
else
{
lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_538_; 
v_isSharedCheck_538_ = !lean_is_exclusive(v_impl_457_);
if (v_isSharedCheck_538_ == 0)
{
lean_object* v_unused_539_; lean_object* v_unused_540_; lean_object* v_unused_541_; lean_object* v_unused_542_; lean_object* v_unused_543_; 
v_unused_539_ = lean_ctor_get(v_impl_457_, 4);
lean_dec(v_unused_539_);
v_unused_540_ = lean_ctor_get(v_impl_457_, 3);
lean_dec(v_unused_540_);
v_unused_541_ = lean_ctor_get(v_impl_457_, 2);
lean_dec(v_unused_541_);
v_unused_542_ = lean_ctor_get(v_impl_457_, 1);
lean_dec(v_unused_542_);
v_unused_543_ = lean_ctor_get(v_impl_457_, 0);
lean_dec(v_unused_543_);
v___x_474_ = v_impl_457_;
v_isShared_475_ = v_isSharedCheck_538_;
goto v_resetjp_473_;
}
else
{
lean_dec(v_impl_457_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_538_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v_size_476_; lean_object* v_size_477_; lean_object* v_k_478_; lean_object* v_v_479_; lean_object* v_l_480_; lean_object* v_r_481_; lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v_size_476_ = lean_ctor_get(v_l_463_, 0);
v_size_477_ = lean_ctor_get(v_r_464_, 0);
v_k_478_ = lean_ctor_get(v_r_464_, 1);
v_v_479_ = lean_ctor_get(v_r_464_, 2);
v_l_480_ = lean_ctor_get(v_r_464_, 3);
v_r_481_ = lean_ctor_get(v_r_464_, 4);
v___x_482_ = lean_unsigned_to_nat(2u);
v___x_483_ = lean_nat_mul(v___x_482_, v_size_476_);
v___x_484_ = lean_nat_dec_lt(v_size_477_, v___x_483_);
lean_dec(v___x_483_);
if (v___x_484_ == 0)
{
lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_513_; 
lean_inc(v_r_481_);
lean_inc(v_l_480_);
lean_inc(v_v_479_);
lean_inc(v_k_478_);
v_isSharedCheck_513_ = !lean_is_exclusive(v_r_464_);
if (v_isSharedCheck_513_ == 0)
{
lean_object* v_unused_514_; lean_object* v_unused_515_; lean_object* v_unused_516_; lean_object* v_unused_517_; lean_object* v_unused_518_; 
v_unused_514_ = lean_ctor_get(v_r_464_, 4);
lean_dec(v_unused_514_);
v_unused_515_ = lean_ctor_get(v_r_464_, 3);
lean_dec(v_unused_515_);
v_unused_516_ = lean_ctor_get(v_r_464_, 2);
lean_dec(v_unused_516_);
v_unused_517_ = lean_ctor_get(v_r_464_, 1);
lean_dec(v_unused_517_);
v_unused_518_ = lean_ctor_get(v_r_464_, 0);
lean_dec(v_unused_518_);
v___x_486_ = v_r_464_;
v_isShared_487_ = v_isSharedCheck_513_;
goto v_resetjp_485_;
}
else
{
lean_dec(v_r_464_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_513_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; lean_object* v___x_501_; lean_object* v___y_503_; 
v___x_488_ = lean_nat_add(v___x_458_, v_size_460_);
lean_dec(v_size_460_);
v___x_489_ = lean_nat_add(v___x_488_, v_size_459_);
lean_dec(v___x_488_);
v___x_501_ = lean_nat_add(v___x_458_, v_size_476_);
if (lean_obj_tag(v_l_480_) == 0)
{
lean_object* v_size_511_; 
v_size_511_ = lean_ctor_get(v_l_480_, 0);
lean_inc(v_size_511_);
v___y_503_ = v_size_511_;
goto v___jp_502_;
}
else
{
lean_object* v___x_512_; 
v___x_512_ = lean_unsigned_to_nat(0u);
v___y_503_ = v___x_512_;
goto v___jp_502_;
}
v___jp_490_:
{
lean_object* v___x_494_; lean_object* v___x_496_; 
v___x_494_ = lean_nat_add(v___y_491_, v___y_493_);
lean_dec(v___y_493_);
lean_dec(v___y_491_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 4, v_r_313_);
lean_ctor_set(v___x_486_, 3, v_r_481_);
lean_ctor_set(v___x_486_, 2, v_v_311_);
lean_ctor_set(v___x_486_, 1, v_k_310_);
lean_ctor_set(v___x_486_, 0, v___x_494_);
v___x_496_ = v___x_486_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_494_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_500_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_500_, 3, v_r_481_);
lean_ctor_set(v_reuseFailAlloc_500_, 4, v_r_313_);
v___x_496_ = v_reuseFailAlloc_500_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_498_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 4, v___x_496_);
lean_ctor_set(v___x_474_, 3, v___y_492_);
lean_ctor_set(v___x_474_, 2, v_v_479_);
lean_ctor_set(v___x_474_, 1, v_k_478_);
lean_ctor_set(v___x_474_, 0, v___x_489_);
v___x_498_ = v___x_474_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_k_478_);
lean_ctor_set(v_reuseFailAlloc_499_, 2, v_v_479_);
lean_ctor_set(v_reuseFailAlloc_499_, 3, v___y_492_);
lean_ctor_set(v_reuseFailAlloc_499_, 4, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
v___jp_502_:
{
lean_object* v___x_504_; lean_object* v___x_506_; 
v___x_504_ = lean_nat_add(v___x_501_, v___y_503_);
lean_dec(v___y_503_);
lean_dec(v___x_501_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v_l_480_);
lean_ctor_set(v___x_315_, 3, v_l_463_);
lean_ctor_set(v___x_315_, 2, v_v_462_);
lean_ctor_set(v___x_315_, 1, v_k_461_);
lean_ctor_set(v___x_315_, 0, v___x_504_);
v___x_506_ = v___x_315_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_504_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_k_461_);
lean_ctor_set(v_reuseFailAlloc_510_, 2, v_v_462_);
lean_ctor_set(v_reuseFailAlloc_510_, 3, v_l_463_);
lean_ctor_set(v_reuseFailAlloc_510_, 4, v_l_480_);
v___x_506_ = v_reuseFailAlloc_510_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_507_; 
v___x_507_ = lean_nat_add(v___x_458_, v_size_459_);
if (lean_obj_tag(v_r_481_) == 0)
{
lean_object* v_size_508_; 
v_size_508_ = lean_ctor_get(v_r_481_, 0);
lean_inc(v_size_508_);
v___y_491_ = v___x_507_;
v___y_492_ = v___x_506_;
v___y_493_ = v_size_508_;
goto v___jp_490_;
}
else
{
lean_object* v___x_509_; 
v___x_509_ = lean_unsigned_to_nat(0u);
v___y_491_ = v___x_507_;
v___y_492_ = v___x_506_;
v___y_493_ = v___x_509_;
goto v___jp_490_;
}
}
}
}
}
else
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_524_; 
lean_del_object(v___x_315_);
v___x_519_ = lean_nat_add(v___x_458_, v_size_460_);
lean_dec(v_size_460_);
v___x_520_ = lean_nat_add(v___x_519_, v_size_459_);
lean_dec(v___x_519_);
v___x_521_ = lean_nat_add(v___x_458_, v_size_459_);
v___x_522_ = lean_nat_add(v___x_521_, v_size_477_);
lean_dec(v___x_521_);
lean_inc_ref(v_r_313_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 4, v_r_313_);
lean_ctor_set(v___x_474_, 3, v_r_464_);
lean_ctor_set(v___x_474_, 2, v_v_311_);
lean_ctor_set(v___x_474_, 1, v_k_310_);
lean_ctor_set(v___x_474_, 0, v___x_522_);
v___x_524_ = v___x_474_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_537_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_537_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_537_, 3, v_r_464_);
lean_ctor_set(v_reuseFailAlloc_537_, 4, v_r_313_);
v___x_524_ = v_reuseFailAlloc_537_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
v_isSharedCheck_531_ = !lean_is_exclusive(v_r_313_);
if (v_isSharedCheck_531_ == 0)
{
lean_object* v_unused_532_; lean_object* v_unused_533_; lean_object* v_unused_534_; lean_object* v_unused_535_; lean_object* v_unused_536_; 
v_unused_532_ = lean_ctor_get(v_r_313_, 4);
lean_dec(v_unused_532_);
v_unused_533_ = lean_ctor_get(v_r_313_, 3);
lean_dec(v_unused_533_);
v_unused_534_ = lean_ctor_get(v_r_313_, 2);
lean_dec(v_unused_534_);
v_unused_535_ = lean_ctor_get(v_r_313_, 1);
lean_dec(v_unused_535_);
v_unused_536_ = lean_ctor_get(v_r_313_, 0);
lean_dec(v_unused_536_);
v___x_526_ = v_r_313_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_dec(v_r_313_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 4, v___x_524_);
lean_ctor_set(v___x_526_, 3, v_l_463_);
lean_ctor_set(v___x_526_, 2, v_v_462_);
lean_ctor_set(v___x_526_, 1, v_k_461_);
lean_ctor_set(v___x_526_, 0, v___x_520_);
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_520_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_k_461_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v_v_462_);
lean_ctor_set(v_reuseFailAlloc_530_, 3, v_l_463_);
lean_ctor_set(v_reuseFailAlloc_530_, 4, v___x_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_544_; 
v_l_544_ = lean_ctor_get(v_impl_457_, 3);
lean_inc(v_l_544_);
if (lean_obj_tag(v_l_544_) == 0)
{
lean_object* v_r_545_; lean_object* v_k_546_; lean_object* v_v_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_558_; 
v_r_545_ = lean_ctor_get(v_impl_457_, 4);
v_k_546_ = lean_ctor_get(v_impl_457_, 1);
v_v_547_ = lean_ctor_get(v_impl_457_, 2);
v_isSharedCheck_558_ = !lean_is_exclusive(v_impl_457_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; lean_object* v_unused_560_; 
v_unused_559_ = lean_ctor_get(v_impl_457_, 3);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v_impl_457_, 0);
lean_dec(v_unused_560_);
v___x_549_ = v_impl_457_;
v_isShared_550_ = v_isSharedCheck_558_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_r_545_);
lean_inc(v_v_547_);
lean_inc(v_k_546_);
lean_dec(v_impl_457_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_558_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_553_; 
v___x_551_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_545_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 3, v_r_545_);
lean_ctor_set(v___x_549_, 2, v_v_311_);
lean_ctor_set(v___x_549_, 1, v_k_310_);
lean_ctor_set(v___x_549_, 0, v___x_458_);
v___x_553_ = v___x_549_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_557_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_557_, 3, v_r_545_);
lean_ctor_set(v_reuseFailAlloc_557_, 4, v_r_545_);
v___x_553_ = v_reuseFailAlloc_557_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
lean_object* v___x_555_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v___x_553_);
lean_ctor_set(v___x_315_, 3, v_l_544_);
lean_ctor_set(v___x_315_, 2, v_v_547_);
lean_ctor_set(v___x_315_, 1, v_k_546_);
lean_ctor_set(v___x_315_, 0, v___x_551_);
v___x_555_ = v___x_315_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v___x_551_);
lean_ctor_set(v_reuseFailAlloc_556_, 1, v_k_546_);
lean_ctor_set(v_reuseFailAlloc_556_, 2, v_v_547_);
lean_ctor_set(v_reuseFailAlloc_556_, 3, v_l_544_);
lean_ctor_set(v_reuseFailAlloc_556_, 4, v___x_553_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
else
{
lean_object* v_r_561_; 
v_r_561_ = lean_ctor_get(v_impl_457_, 4);
lean_inc(v_r_561_);
if (lean_obj_tag(v_r_561_) == 0)
{
lean_object* v_k_562_; lean_object* v_v_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_586_; 
v_k_562_ = lean_ctor_get(v_impl_457_, 1);
v_v_563_ = lean_ctor_get(v_impl_457_, 2);
v_isSharedCheck_586_ = !lean_is_exclusive(v_impl_457_);
if (v_isSharedCheck_586_ == 0)
{
lean_object* v_unused_587_; lean_object* v_unused_588_; lean_object* v_unused_589_; 
v_unused_587_ = lean_ctor_get(v_impl_457_, 4);
lean_dec(v_unused_587_);
v_unused_588_ = lean_ctor_get(v_impl_457_, 3);
lean_dec(v_unused_588_);
v_unused_589_ = lean_ctor_get(v_impl_457_, 0);
lean_dec(v_unused_589_);
v___x_565_ = v_impl_457_;
v_isShared_566_ = v_isSharedCheck_586_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_v_563_);
lean_inc(v_k_562_);
lean_dec(v_impl_457_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_586_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v_k_567_; lean_object* v_v_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_582_; 
v_k_567_ = lean_ctor_get(v_r_561_, 1);
v_v_568_ = lean_ctor_get(v_r_561_, 2);
v_isSharedCheck_582_ = !lean_is_exclusive(v_r_561_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; lean_object* v_unused_584_; lean_object* v_unused_585_; 
v_unused_583_ = lean_ctor_get(v_r_561_, 4);
lean_dec(v_unused_583_);
v_unused_584_ = lean_ctor_get(v_r_561_, 3);
lean_dec(v_unused_584_);
v_unused_585_ = lean_ctor_get(v_r_561_, 0);
lean_dec(v_unused_585_);
v___x_570_ = v_r_561_;
v_isShared_571_ = v_isSharedCheck_582_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_v_568_);
lean_inc(v_k_567_);
lean_dec(v_r_561_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_582_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_572_ = lean_unsigned_to_nat(3u);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 4, v_l_544_);
lean_ctor_set(v___x_570_, 3, v_l_544_);
lean_ctor_set(v___x_570_, 2, v_v_563_);
lean_ctor_set(v___x_570_, 1, v_k_562_);
lean_ctor_set(v___x_570_, 0, v___x_458_);
v___x_574_ = v___x_570_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_k_562_);
lean_ctor_set(v_reuseFailAlloc_581_, 2, v_v_563_);
lean_ctor_set(v_reuseFailAlloc_581_, 3, v_l_544_);
lean_ctor_set(v_reuseFailAlloc_581_, 4, v_l_544_);
v___x_574_ = v_reuseFailAlloc_581_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_576_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 4, v_l_544_);
lean_ctor_set(v___x_565_, 2, v_v_311_);
lean_ctor_set(v___x_565_, 1, v_k_310_);
lean_ctor_set(v___x_565_, 0, v___x_458_);
v___x_576_ = v___x_565_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_580_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_580_, 3, v_l_544_);
lean_ctor_set(v_reuseFailAlloc_580_, 4, v_l_544_);
v___x_576_ = v_reuseFailAlloc_580_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_578_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v___x_576_);
lean_ctor_set(v___x_315_, 3, v___x_574_);
lean_ctor_set(v___x_315_, 2, v_v_568_);
lean_ctor_set(v___x_315_, 1, v_k_567_);
lean_ctor_set(v___x_315_, 0, v___x_572_);
v___x_578_ = v___x_315_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_572_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_k_567_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v_v_568_);
lean_ctor_set(v_reuseFailAlloc_579_, 3, v___x_574_);
lean_ctor_set(v_reuseFailAlloc_579_, 4, v___x_576_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
}
else
{
lean_object* v___x_590_; lean_object* v___x_592_; 
v___x_590_ = lean_unsigned_to_nat(2u);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 4, v_r_561_);
lean_ctor_set(v___x_315_, 3, v_impl_457_);
lean_ctor_set(v___x_315_, 0, v___x_590_);
v___x_592_ = v___x_315_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_593_, 1, v_k_310_);
lean_ctor_set(v_reuseFailAlloc_593_, 2, v_v_311_);
lean_ctor_set(v_reuseFailAlloc_593_, 3, v_impl_457_);
lean_ctor_set(v_reuseFailAlloc_593_, 4, v_r_561_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = lean_unsigned_to_nat(1u);
v___x_596_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set(v___x_596_, 1, v_k_306_);
lean_ctor_set(v___x_596_, 2, v_v_307_);
lean_ctor_set(v___x_596_, 3, v_t_308_);
lean_ctor_set(v___x_596_, 4, v_t_308_);
return v___x_596_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(lean_object* v_p_597_, uint8_t v_d_598_, lean_object* v_00_u03b4_599_){
_start:
{
lean_object* v_changesBefore_600_; lean_object* v_changesAfter_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_610_; 
v_changesBefore_600_ = lean_ctor_get(v_00_u03b4_599_, 0);
v_changesAfter_601_ = lean_ctor_get(v_00_u03b4_599_, 1);
v_isSharedCheck_610_ = !lean_is_exclusive(v_00_u03b4_599_);
if (v_isSharedCheck_610_ == 0)
{
v___x_603_ = v_00_u03b4_599_;
v_isShared_604_ = v_isSharedCheck_610_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_changesAfter_601_);
lean_inc(v_changesBefore_600_);
lean_dec(v_00_u03b4_599_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_610_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_608_; 
v___x_605_ = lean_box(v_d_598_);
v___x_606_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_p_597_, v___x_605_, v_changesBefore_600_);
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_606_);
v___x_608_ = v___x_603_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_606_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_changesAfter_601_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange___boxed(lean_object* v_p_611_, lean_object* v_d_612_, lean_object* v_00_u03b4_613_){
_start:
{
uint8_t v_d_boxed_614_; lean_object* v_res_615_; 
v_d_boxed_614_ = lean_unbox(v_d_612_);
v_res_615_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(v_p_611_, v_d_boxed_614_, v_00_u03b4_613_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0(lean_object* v_00_u03b2_616_, lean_object* v_k_617_, lean_object* v_v_618_, lean_object* v_t_619_, lean_object* v_hl_620_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_617_, v_v_618_, v_t_619_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(lean_object* v_p_622_, uint8_t v_d_623_, lean_object* v_00_u03b4_624_){
_start:
{
lean_object* v_changesBefore_625_; lean_object* v_changesAfter_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_635_; 
v_changesBefore_625_ = lean_ctor_get(v_00_u03b4_624_, 0);
v_changesAfter_626_ = lean_ctor_get(v_00_u03b4_624_, 1);
v_isSharedCheck_635_ = !lean_is_exclusive(v_00_u03b4_624_);
if (v_isSharedCheck_635_ == 0)
{
v___x_628_ = v_00_u03b4_624_;
v_isShared_629_ = v_isSharedCheck_635_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_changesAfter_626_);
lean_inc(v_changesBefore_625_);
lean_dec(v_00_u03b4_624_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_635_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
v___x_630_ = lean_box(v_d_623_);
v___x_631_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_p_622_, v___x_630_, v_changesAfter_626_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_631_);
v___x_633_ = v___x_628_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_changesBefore_625_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v___x_631_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange___boxed(lean_object* v_p_636_, lean_object* v_d_637_, lean_object* v_00_u03b4_638_){
_start:
{
uint8_t v_d_boxed_639_; lean_object* v_res_640_; 
v_d_boxed_639_ = lean_unbox(v_d_637_);
v_res_640_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(v_p_636_, v_d_boxed_639_, v_00_u03b4_638_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(lean_object* v_before_641_, lean_object* v_after_642_, uint8_t v_d_643_){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_644_ = lean_box(1);
v___x_645_ = lean_box(v_d_643_);
v___x_646_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_before_641_, v___x_645_, v___x_644_);
v___x_647_ = lean_box(v_d_643_);
v___x_648_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_after_642_, v___x_647_, v___x_644_);
v___x_649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_646_);
lean_ctor_set(v___x_649_, 1, v___x_648_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos___boxed(lean_object* v_before_650_, lean_object* v_after_651_, lean_object* v_d_652_){
_start:
{
uint8_t v_d_boxed_653_; lean_object* v_res_654_; 
v_d_boxed_653_ = lean_unbox(v_d_652_);
v_res_654_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v_before_650_, v_after_651_, v_d_boxed_653_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(lean_object* v_before_655_, lean_object* v_after_656_, uint8_t v_d_657_){
_start:
{
lean_object* v_pos_658_; lean_object* v_pos_659_; lean_object* v___x_660_; 
v_pos_658_ = lean_ctor_get(v_before_655_, 1);
lean_inc(v_pos_658_);
lean_dec_ref(v_before_655_);
v_pos_659_ = lean_ctor_get(v_after_656_, 1);
lean_inc(v_pos_659_);
lean_dec_ref(v_after_656_);
v___x_660_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v_pos_658_, v_pos_659_, v_d_657_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange___boxed(lean_object* v_before_661_, lean_object* v_after_662_, lean_object* v_d_663_){
_start:
{
uint8_t v_d_boxed_664_; lean_object* v_res_665_; 
v_d_boxed_664_ = lean_unbox(v_d_663_);
v_res_665_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_661_, v_after_662_, v_d_boxed_664_);
return v_res_665_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(lean_object* v_d_666_){
_start:
{
lean_object* v_changesBefore_667_; lean_object* v_changesAfter_668_; uint8_t v___y_670_; 
v_changesBefore_667_ = lean_ctor_get(v_d_666_, 0);
v_changesAfter_668_ = lean_ctor_get(v_d_666_, 1);
if (lean_obj_tag(v_changesAfter_668_) == 0)
{
uint8_t v___x_672_; 
v___x_672_ = 0;
v___y_670_ = v___x_672_;
goto v___jp_669_;
}
else
{
uint8_t v___x_673_; 
v___x_673_ = 1;
v___y_670_ = v___x_673_;
goto v___jp_669_;
}
v___jp_669_:
{
if (lean_obj_tag(v_changesBefore_667_) == 0)
{
if (v___y_670_ == 0)
{
return v___y_670_;
}
else
{
uint8_t v___x_671_; 
v___x_671_ = 0;
return v___x_671_;
}
}
else
{
return v___y_670_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty___boxed(lean_object* v_d_674_){
_start:
{
uint8_t v_res_675_; lean_object* v_r_676_; 
v_res_675_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_d_674_);
lean_dec_ref(v_d_674_);
v_r_676_ = lean_box(v_res_675_);
return v_r_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(lean_object* v_k_677_, lean_object* v_b_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v___x_684_; 
lean_inc(v___y_682_);
lean_inc_ref(v___y_681_);
lean_inc(v___y_680_);
lean_inc_ref(v___y_679_);
v___x_684_ = lean_apply_6(v_k_677_, v_b_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, lean_box(0));
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed(lean_object* v_k_685_, lean_object* v_b_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(v_k_685_, v_b_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(lean_object* v_name_693_, uint8_t v_bi_694_, lean_object* v_type_695_, lean_object* v_k_696_, uint8_t v_kind_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___f_703_; lean_object* v___x_704_; 
v___f_703_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_703_, 0, v_k_696_);
v___x_704_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_693_, v_bi_694_, v_type_695_, v___f_703_, v_kind_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_704_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_704_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
v_a_713_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_704_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_704_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___boxed(lean_object* v_name_721_, lean_object* v_bi_722_, lean_object* v_type_723_, lean_object* v_k_724_, lean_object* v_kind_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
uint8_t v_bi_boxed_731_; uint8_t v_kind_boxed_732_; lean_object* v_res_733_; 
v_bi_boxed_731_ = lean_unbox(v_bi_722_);
v_kind_boxed_732_ = lean_unbox(v_kind_725_);
v_res_733_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_name_721_, v_bi_boxed_731_, v_type_723_, v_k_724_, v_kind_boxed_732_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(lean_object* v_00_u03b1_734_, lean_object* v_name_735_, uint8_t v_bi_736_, lean_object* v_type_737_, lean_object* v_k_738_, uint8_t v_kind_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_name_735_, v_bi_736_, v_type_737_, v_k_738_, v_kind_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___boxed(lean_object* v_00_u03b1_746_, lean_object* v_name_747_, lean_object* v_bi_748_, lean_object* v_type_749_, lean_object* v_k_750_, lean_object* v_kind_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
uint8_t v_bi_boxed_757_; uint8_t v_kind_boxed_758_; lean_object* v_res_759_; 
v_bi_boxed_757_ = lean_unbox(v_bi_748_);
v_kind_boxed_758_ = lean_unbox(v_kind_751_);
v_res_759_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(v_00_u03b1_746_, v_name_747_, v_bi_boxed_757_, v_type_749_, v_k_750_, v_kind_boxed_758_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(lean_object* v_msgData_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___x_766_; lean_object* v_env_767_; lean_object* v___x_768_; lean_object* v_toCold_769_; lean_object* v_mctx_770_; lean_object* v_lctx_771_; lean_object* v_options_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_766_ = lean_st_ref_get(v___y_764_);
v_env_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc_ref(v_env_767_);
lean_dec(v___x_766_);
v___x_768_ = lean_st_ref_get(v___y_762_);
v_toCold_769_ = lean_ctor_get(v___y_763_, 0);
v_mctx_770_ = lean_ctor_get(v___x_768_, 0);
lean_inc_ref(v_mctx_770_);
lean_dec(v___x_768_);
v_lctx_771_ = lean_ctor_get(v___y_761_, 2);
v_options_772_ = lean_ctor_get(v_toCold_769_, 2);
lean_inc_ref(v_options_772_);
lean_inc_ref(v_lctx_771_);
v___x_773_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_773_, 0, v_env_767_);
lean_ctor_set(v___x_773_, 1, v_mctx_770_);
lean_ctor_set(v___x_773_, 2, v_lctx_771_);
lean_ctor_set(v___x_773_, 3, v_options_772_);
v___x_774_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_774_, 0, v___x_773_);
lean_ctor_set(v___x_774_, 1, v_msgData_760_);
v___x_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4___boxed(lean_object* v_msgData_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(v_msgData_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(lean_object* v_msg_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_ref_789_; lean_object* v___x_790_; lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_799_; 
v_ref_789_ = lean_ctor_get(v___y_786_, 2);
v___x_790_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(v_msg_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_);
v_a_791_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_799_ == 0)
{
v___x_793_ = v___x_790_;
v_isShared_794_ = v_isSharedCheck_799_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_790_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_799_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_795_; lean_object* v___x_797_; 
lean_inc(v_ref_789_);
v___x_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_795_, 0, v_ref_789_);
lean_ctor_set(v___x_795_, 1, v_a_791_);
if (v_isShared_794_ == 0)
{
lean_ctor_set_tag(v___x_793_, 1);
lean_ctor_set(v___x_793_, 0, v___x_795_);
v___x_797_ = v___x_793_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v___x_795_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg___boxed(lean_object* v_msg_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v_msg_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(lean_object* v_x_807_, lean_object* v_x_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
if (lean_obj_tag(v_x_807_) == 0)
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = l_List_reverse___redArg(v_x_808_);
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
return v___x_815_;
}
else
{
lean_object* v_head_816_; lean_object* v_tail_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_835_; 
v_head_816_ = lean_ctor_get(v_x_807_, 0);
v_tail_817_ = lean_ctor_get(v_x_807_, 1);
v_isSharedCheck_835_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_835_ == 0)
{
v___x_819_ = v_x_807_;
v_isShared_820_ = v_isSharedCheck_835_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_tail_817_);
lean_inc(v_head_816_);
lean_dec(v_x_807_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_835_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_821_; 
v___x_821_ = l_Lean_Meta_getFVarFromUserName(v_head_816_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v_a_822_; lean_object* v___x_824_; 
v_a_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_a_822_);
lean_dec_ref_known(v___x_821_, 1);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 1, v_x_808_);
lean_ctor_set(v___x_819_, 0, v_a_822_);
v___x_824_ = v___x_819_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_822_);
lean_ctor_set(v_reuseFailAlloc_826_, 1, v_x_808_);
v___x_824_ = v_reuseFailAlloc_826_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
v_x_807_ = v_tail_817_;
v_x_808_ = v___x_824_;
goto _start;
}
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
lean_del_object(v___x_819_);
lean_dec(v_tail_817_);
lean_dec(v_x_808_);
v_a_827_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_821_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_821_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2___boxed(lean_object* v_x_836_, lean_object* v_x_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(v_x_836_, v_x_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(lean_object* v_upperBound_844_, lean_object* v_before_845_, lean_object* v_a_846_, lean_object* v_b_847_){
_start:
{
uint8_t v___x_849_; 
v___x_849_ = lean_nat_dec_lt(v_a_846_, v_upperBound_844_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
lean_dec(v_a_846_);
lean_dec_ref(v_before_845_);
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v_b_847_);
return v___x_850_;
}
else
{
lean_object* v_pos_851_; lean_object* v___x_852_; uint8_t v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_pos_851_ = lean_ctor_get(v_before_845_, 1);
lean_inc(v_pos_851_);
lean_inc(v_a_846_);
v___x_852_ = l_Lean_SubExpr_Pos_pushNthBindingDomain(v_a_846_, v_pos_851_);
v___x_853_ = 1;
v___x_854_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(v___x_852_, v___x_853_, v_b_847_);
v___x_855_ = lean_unsigned_to_nat(1u);
v___x_856_ = lean_nat_add(v_a_846_, v___x_855_);
lean_dec(v_a_846_);
v_a_846_ = v___x_856_;
v_b_847_ = v___x_854_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg___boxed(lean_object* v_upperBound_858_, lean_object* v_before_859_, lean_object* v_a_860_, lean_object* v_b_861_, lean_object* v___y_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v_upperBound_858_, v_before_859_, v_a_860_, v_b_861_);
lean_dec(v_upperBound_858_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(lean_object* v_x_864_, lean_object* v_x_865_){
_start:
{
if (lean_obj_tag(v_x_864_) == 0)
{
lean_object* v___x_866_; 
v___x_866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_866_, 0, v_x_865_);
return v___x_866_;
}
else
{
if (lean_obj_tag(v_x_865_) == 0)
{
lean_object* v___x_867_; 
v___x_867_ = lean_box(0);
return v___x_867_;
}
else
{
lean_object* v_head_868_; lean_object* v_tail_869_; lean_object* v_head_870_; lean_object* v_tail_871_; uint8_t v___x_872_; 
v_head_868_ = lean_ctor_get(v_x_864_, 0);
v_tail_869_ = lean_ctor_get(v_x_864_, 1);
v_head_870_ = lean_ctor_get(v_x_865_, 0);
lean_inc(v_head_870_);
v_tail_871_ = lean_ctor_get(v_x_865_, 1);
lean_inc(v_tail_871_);
lean_dec_ref_known(v_x_865_, 2);
v___x_872_ = lean_name_eq(v_head_868_, v_head_870_);
lean_dec(v_head_870_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; 
lean_dec(v_tail_871_);
v___x_873_ = lean_box(0);
return v___x_873_;
}
else
{
v_x_864_ = v_tail_869_;
v_x_865_ = v_tail_871_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0___boxed(lean_object* v_x_875_, lean_object* v_x_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(v_x_875_, v_x_876_);
lean_dec(v_x_875_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(lean_object* v_l_u2081_878_, lean_object* v_l_u2082_879_){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_880_ = l_List_reverse___redArg(v_l_u2081_878_);
v___x_881_ = l_List_reverse___redArg(v_l_u2082_879_);
v___x_882_ = l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(v___x_880_, v___x_881_);
lean_dec(v___x_880_);
if (lean_obj_tag(v___x_882_) == 0)
{
return v___x_882_;
}
else
{
lean_object* v_val_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_891_; 
v_val_883_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_891_ == 0)
{
v___x_885_ = v___x_882_;
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_val_883_);
lean_dec(v___x_882_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_887_ = l_List_reverse___redArg(v_val_883_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v___x_887_);
v___x_889_ = v___x_885_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(uint8_t v_b_u2082_892_, lean_object* v_k_893_, lean_object* v_t_894_){
_start:
{
if (lean_obj_tag(v_t_894_) == 0)
{
lean_object* v_size_895_; lean_object* v_k_896_; lean_object* v_v_897_; lean_object* v_l_898_; lean_object* v_r_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_913_; 
v_size_895_ = lean_ctor_get(v_t_894_, 0);
v_k_896_ = lean_ctor_get(v_t_894_, 1);
v_v_897_ = lean_ctor_get(v_t_894_, 2);
v_l_898_ = lean_ctor_get(v_t_894_, 3);
v_r_899_ = lean_ctor_get(v_t_894_, 4);
v_isSharedCheck_913_ = !lean_is_exclusive(v_t_894_);
if (v_isSharedCheck_913_ == 0)
{
v___x_901_ = v_t_894_;
v_isShared_902_ = v_isSharedCheck_913_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_r_899_);
lean_inc(v_l_898_);
lean_inc(v_v_897_);
lean_inc(v_k_896_);
lean_inc(v_size_895_);
lean_dec(v_t_894_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_913_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
uint8_t v___x_903_; 
v___x_903_ = lean_nat_dec_lt(v_k_893_, v_k_896_);
if (v___x_903_ == 0)
{
uint8_t v___x_904_; 
v___x_904_ = lean_nat_dec_eq(v_k_893_, v_k_896_);
if (v___x_904_ == 0)
{
lean_object* v_impl_905_; lean_object* v___x_906_; 
lean_del_object(v___x_901_);
lean_dec(v_size_895_);
v_impl_905_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_892_, v_k_893_, v_r_899_);
v___x_906_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_896_, v_v_897_, v_l_898_, v_impl_905_);
return v___x_906_;
}
else
{
lean_object* v___x_907_; lean_object* v___x_909_; 
lean_dec(v_v_897_);
lean_dec(v_k_896_);
v___x_907_ = lean_box(v_b_u2082_892_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 2, v___x_907_);
lean_ctor_set(v___x_901_, 1, v_k_893_);
v___x_909_ = v___x_901_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_size_895_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v_k_893_);
lean_ctor_set(v_reuseFailAlloc_910_, 2, v___x_907_);
lean_ctor_set(v_reuseFailAlloc_910_, 3, v_l_898_);
lean_ctor_set(v_reuseFailAlloc_910_, 4, v_r_899_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
lean_object* v_impl_911_; lean_object* v___x_912_; 
lean_del_object(v___x_901_);
lean_dec(v_size_895_);
v_impl_911_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_892_, v_k_893_, v_l_898_);
v___x_912_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_896_, v_v_897_, v_impl_911_, v_r_899_);
return v___x_912_;
}
}
}
else
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_914_ = lean_unsigned_to_nat(1u);
v___x_915_ = lean_box(v_b_u2082_892_);
v___x_916_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v_k_893_);
lean_ctor_set(v___x_916_, 2, v___x_915_);
lean_ctor_set(v___x_916_, 3, v_t_894_);
lean_ctor_set(v___x_916_, 4, v_t_894_);
return v___x_916_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg___boxed(lean_object* v_b_u2082_917_, lean_object* v_k_918_, lean_object* v_t_919_){
_start:
{
uint8_t v_b_u2082_boxed_920_; lean_object* v_res_921_; 
v_b_u2082_boxed_920_ = lean_unbox(v_b_u2082_917_);
v_res_921_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_boxed_920_, v_k_918_, v_t_919_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(lean_object* v_init_922_, lean_object* v_x_923_){
_start:
{
if (lean_obj_tag(v_x_923_) == 0)
{
lean_object* v_k_924_; lean_object* v_v_925_; lean_object* v_l_926_; lean_object* v_r_927_; lean_object* v___x_928_; uint8_t v___x_929_; lean_object* v___x_930_; 
v_k_924_ = lean_ctor_get(v_x_923_, 1);
lean_inc(v_k_924_);
v_v_925_ = lean_ctor_get(v_x_923_, 2);
lean_inc(v_v_925_);
v_l_926_ = lean_ctor_get(v_x_923_, 3);
lean_inc(v_l_926_);
v_r_927_ = lean_ctor_get(v_x_923_, 4);
lean_inc(v_r_927_);
lean_dec_ref_known(v_x_923_, 5);
v___x_928_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_init_922_, v_l_926_);
v___x_929_ = lean_unbox(v_v_925_);
lean_dec(v_v_925_);
v___x_930_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v___x_929_, v_k_924_, v___x_928_);
v_init_922_ = v___x_930_;
v_x_923_ = v_r_927_;
goto _start;
}
else
{
return v_init_922_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(lean_object* v_as_932_, size_t v_i_933_, size_t v_stop_934_, lean_object* v_b_935_){
_start:
{
uint8_t v___x_936_; 
v___x_936_ = lean_usize_dec_eq(v_i_933_, v_stop_934_);
if (v___x_936_ == 0)
{
lean_object* v_changesBefore_937_; lean_object* v_changesAfter_938_; lean_object* v___x_939_; lean_object* v_changesBefore_940_; lean_object* v_changesAfter_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_953_; 
v_changesBefore_937_ = lean_ctor_get(v_b_935_, 0);
lean_inc(v_changesBefore_937_);
v_changesAfter_938_ = lean_ctor_get(v_b_935_, 1);
lean_inc(v_changesAfter_938_);
lean_dec_ref(v_b_935_);
v___x_939_ = lean_array_uget(v_as_932_, v_i_933_);
v_changesBefore_940_ = lean_ctor_get(v___x_939_, 0);
v_changesAfter_941_ = lean_ctor_get(v___x_939_, 1);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_953_ == 0)
{
v___x_943_ = v___x_939_;
v_isShared_944_ = v_isSharedCheck_953_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_changesAfter_941_);
lean_inc(v_changesBefore_940_);
lean_dec(v___x_939_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_953_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_945_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_937_, v_changesBefore_940_);
v___x_946_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_938_, v_changesAfter_941_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v___x_946_);
lean_ctor_set(v___x_943_, 0, v___x_945_);
v___x_948_ = v___x_943_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_952_, 1, v___x_946_);
v___x_948_ = v_reuseFailAlloc_952_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
size_t v___x_949_; size_t v___x_950_; 
v___x_949_ = ((size_t)1ULL);
v___x_950_ = lean_usize_add(v_i_933_, v___x_949_);
v_i_933_ = v___x_950_;
v_b_935_ = v___x_948_;
goto _start;
}
}
}
else
{
return v_b_935_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10___boxed(lean_object* v_as_954_, lean_object* v_i_955_, lean_object* v_stop_956_, lean_object* v_b_957_){
_start:
{
size_t v_i_boxed_958_; size_t v_stop_boxed_959_; lean_object* v_res_960_; 
v_i_boxed_958_ = lean_unbox_usize(v_i_955_);
lean_dec(v_i_955_);
v_stop_boxed_959_ = lean_unbox_usize(v_stop_956_);
lean_dec(v_stop_956_);
v_res_960_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_as_954_, v_i_boxed_958_, v_stop_boxed_959_, v_b_957_);
lean_dec_ref(v_as_954_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(lean_object* v_x_961_, lean_object* v_x_962_, lean_object* v_x_963_){
_start:
{
if (lean_obj_tag(v_x_961_) == 5)
{
lean_object* v_fn_964_; lean_object* v_arg_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v_fn_964_ = lean_ctor_get(v_x_961_, 0);
lean_inc_ref(v_fn_964_);
v_arg_965_ = lean_ctor_get(v_x_961_, 1);
lean_inc_ref(v_arg_965_);
lean_dec_ref_known(v_x_961_, 2);
v___x_966_ = lean_array_set(v_x_962_, v_x_963_, v_arg_965_);
v___x_967_ = lean_unsigned_to_nat(1u);
v___x_968_ = lean_nat_sub(v_x_963_, v___x_967_);
lean_dec(v_x_963_);
v_x_961_ = v_fn_964_;
v_x_962_ = v___x_966_;
v_x_963_ = v___x_968_;
goto _start;
}
else
{
lean_object* v___x_970_; 
lean_dec(v_x_963_);
v___x_970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_970_, 0, v_x_961_);
lean_ctor_set(v___x_970_, 1, v_x_962_);
return v___x_970_;
}
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = lean_box(0);
v___x_972_ = l_unsafeCast___redArg(v___x_971_);
return v___x_972_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__1(void){
_start:
{
lean_object* v___x_973_; lean_object* v_dummy_974_; 
v___x_973_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0, &l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0);
v_dummy_974_ = l_Lean_Expr_sort___override(v___x_973_);
return v_dummy_974_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___boxed(lean_object* v_snd_977_, lean_object* v_before_978_, lean_object* v_after_979_, lean_object* v_as_980_, lean_object* v_sz_981_, lean_object* v_i_982_, lean_object* v_bs_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
size_t v_sz_boxed_989_; size_t v_i_boxed_990_; lean_object* v_res_991_; 
v_sz_boxed_989_ = lean_unbox_usize(v_sz_981_);
lean_dec(v_sz_981_);
v_i_boxed_990_ = lean_unbox_usize(v_i_982_);
lean_dec(v_i_982_);
v_res_991_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(v_snd_977_, v_before_978_, v_after_979_, v_as_980_, v_sz_boxed_989_, v_i_boxed_990_, v_bs_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec_ref(v_as_980_);
lean_dec_ref(v_after_979_);
lean_dec_ref(v_before_978_);
lean_dec_ref(v_snd_977_);
return v_res_991_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1(void){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0));
v___x_994_ = l_Lean_stringToMessageData(v___x_993_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(lean_object* v_body_995_, lean_object* v_pos_996_, lean_object* v_body_997_, lean_object* v_pos_998_, lean_object* v_x_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1005_ = lean_expr_instantiate1(v_body_995_, v_x_999_);
v___x_1006_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_996_);
v___x_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1005_);
lean_ctor_set(v___x_1007_, 1, v___x_1006_);
v___x_1008_ = lean_expr_instantiate1(v_body_997_, v_x_999_);
v___x_1009_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_998_);
v___x_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1008_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1007_, v___x_1010_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed(lean_object* v_body_1012_, lean_object* v_pos_1013_, lean_object* v_body_1014_, lean_object* v_pos_1015_, lean_object* v_x_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(v_body_1012_, v_pos_1013_, v_body_1014_, v_pos_1015_, v_x_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
lean_dec_ref(v_x_1016_);
lean_dec(v_pos_1015_);
lean_dec_ref(v_body_1014_);
lean_dec(v_pos_1013_);
lean_dec_ref(v_body_1012_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(lean_object* v_before_1023_, lean_object* v_after_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v_a_1036_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; uint8_t v___y_1047_; lean_object* v___y_1059_; lean_object* v___y_1060_; lean_object* v___y_1061_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v_a_1066_; lean_object* v_expr_1069_; lean_object* v_pos_1070_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___y_1075_; lean_object* v___y_1076_; 
v_expr_1069_ = lean_ctor_get(v_before_1023_, 0);
v_pos_1070_ = lean_ctor_get(v_before_1023_, 1);
if (lean_obj_tag(v_expr_1069_) == 7)
{
lean_object* v_binderName_1107_; lean_object* v_binderType_1108_; lean_object* v_body_1109_; uint8_t v_binderInfo_1110_; lean_object* v_expr_1111_; lean_object* v_pos_1112_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1117_; 
v_binderName_1107_ = lean_ctor_get(v_expr_1069_, 0);
v_binderType_1108_ = lean_ctor_get(v_expr_1069_, 1);
v_body_1109_ = lean_ctor_get(v_expr_1069_, 2);
v_binderInfo_1110_ = lean_ctor_get_uint8(v_expr_1069_, sizeof(void*)*3 + 8);
v_expr_1111_ = lean_ctor_get(v_after_1024_, 0);
v_pos_1112_ = lean_ctor_get(v_after_1024_, 1);
if (lean_obj_tag(v_expr_1111_) == 7)
{
lean_object* v_binderName_1138_; lean_object* v_binderType_1139_; lean_object* v_body_1140_; uint8_t v_binderInfo_1141_; lean_object* v___f_1142_; uint8_t v___y_1144_; uint8_t v___x_1194_; 
v_binderName_1138_ = lean_ctor_get(v_expr_1111_, 0);
v_binderType_1139_ = lean_ctor_get(v_expr_1111_, 1);
v_body_1140_ = lean_ctor_get(v_expr_1111_, 2);
v_binderInfo_1141_ = lean_ctor_get_uint8(v_expr_1111_, sizeof(void*)*3 + 8);
lean_inc(v_pos_1112_);
lean_inc_ref(v_body_1140_);
lean_inc(v_pos_1070_);
lean_inc_ref(v_body_1109_);
v___f_1142_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1142_, 0, v_body_1109_);
lean_closure_set(v___f_1142_, 1, v_pos_1070_);
lean_closure_set(v___f_1142_, 2, v_body_1140_);
lean_closure_set(v___f_1142_, 3, v_pos_1112_);
v___x_1194_ = lean_name_eq(v_binderName_1107_, v_binderName_1138_);
if (v___x_1194_ == 0)
{
v___y_1144_ = v___x_1194_;
goto v___jp_1143_;
}
else
{
uint8_t v___x_1195_; 
v___x_1195_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1110_, v_binderInfo_1141_);
v___y_1144_ = v___x_1195_;
goto v___jp_1143_;
}
v___jp_1143_:
{
if (v___y_1144_ == 0)
{
lean_dec_ref(v___f_1142_);
v___y_1114_ = v_a_1025_;
v___y_1115_ = v_a_1026_;
v___y_1116_ = v_a_1027_;
v___y_1117_ = v_a_1028_;
goto v___jp_1113_;
}
else
{
lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1191_; 
lean_inc_ref(v_binderType_1139_);
lean_inc(v_pos_1112_);
lean_inc_ref(v_binderType_1108_);
lean_inc(v_binderName_1107_);
lean_inc(v_pos_1070_);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_before_1023_);
if (v_isSharedCheck_1191_ == 0)
{
lean_object* v_unused_1192_; lean_object* v_unused_1193_; 
v_unused_1192_ = lean_ctor_get(v_before_1023_, 1);
lean_dec(v_unused_1192_);
v_unused_1193_ = lean_ctor_get(v_before_1023_, 0);
lean_dec(v_unused_1193_);
v___x_1146_ = v_before_1023_;
v_isShared_1147_ = v_isSharedCheck_1191_;
goto v_resetjp_1145_;
}
else
{
lean_dec(v_before_1023_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1191_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1188_; 
v_isSharedCheck_1188_ = !lean_is_exclusive(v_after_1024_);
if (v_isSharedCheck_1188_ == 0)
{
lean_object* v_unused_1189_; lean_object* v_unused_1190_; 
v_unused_1189_ = lean_ctor_get(v_after_1024_, 1);
lean_dec(v_unused_1189_);
v_unused_1190_ = lean_ctor_get(v_after_1024_, 0);
lean_dec(v_unused_1190_);
v___x_1149_ = v_after_1024_;
v_isShared_1150_ = v_isSharedCheck_1188_;
goto v_resetjp_1148_;
}
else
{
lean_dec(v_after_1024_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1188_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1151_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1070_);
lean_inc_ref(v_binderType_1108_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 1, v___x_1151_);
lean_ctor_set(v___x_1149_, 0, v_binderType_1108_);
v___x_1153_ = v___x_1149_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_binderType_1108_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
lean_object* v___x_1154_; lean_object* v___x_1156_; 
v___x_1154_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1112_);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 1, v___x_1154_);
lean_ctor_set(v___x_1146_, 0, v_binderType_1139_);
v___x_1156_ = v___x_1146_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_binderType_1139_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v___x_1154_);
v___x_1156_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
lean_object* v___x_1157_; 
v___x_1157_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1153_, v___x_1156_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1185_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1185_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1185_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
uint8_t v___x_1162_; 
v___x_1162_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_a_1158_);
if (v___x_1162_ == 0)
{
lean_object* v_changesBefore_1163_; lean_object* v_changesAfter_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; uint8_t v___x_1167_; lean_object* v___x_1168_; lean_object* v_changesBefore_1169_; lean_object* v_changesAfter_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1182_; 
lean_dec_ref(v___f_1142_);
lean_dec_ref(v_binderType_1108_);
lean_dec(v_binderName_1107_);
v_changesBefore_1163_ = lean_ctor_get(v_a_1158_, 0);
lean_inc(v_changesBefore_1163_);
v_changesAfter_1164_ = lean_ctor_get(v_a_1158_, 1);
lean_inc(v_changesAfter_1164_);
lean_dec(v_a_1158_);
v___x_1165_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1070_);
lean_dec(v_pos_1070_);
v___x_1166_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1112_);
lean_dec(v_pos_1112_);
v___x_1167_ = 0;
v___x_1168_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v___x_1165_, v___x_1166_, v___x_1167_);
v_changesBefore_1169_ = lean_ctor_get(v___x_1168_, 0);
v_changesAfter_1170_ = lean_ctor_get(v___x_1168_, 1);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1172_ = v___x_1168_;
v_isShared_1173_ = v_isSharedCheck_1182_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_changesAfter_1170_);
lean_inc(v_changesBefore_1169_);
lean_dec(v___x_1168_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1182_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1174_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_1163_, v_changesBefore_1169_);
v___x_1175_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_1164_, v_changesAfter_1170_);
if (v_isShared_1173_ == 0)
{
lean_ctor_set(v___x_1172_, 1, v___x_1175_);
lean_ctor_set(v___x_1172_, 0, v___x_1174_);
v___x_1177_ = v___x_1172_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1174_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1179_; 
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1177_);
v___x_1179_ = v___x_1160_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1177_);
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
else
{
uint8_t v___x_1183_; lean_object* v___x_1184_; 
lean_del_object(v___x_1160_);
lean_dec(v_a_1158_);
lean_dec(v_pos_1112_);
lean_dec(v_pos_1070_);
v___x_1183_ = 0;
v___x_1184_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_binderName_1107_, v_binderInfo_1110_, v_binderType_1108_, v___f_1142_, v___x_1183_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_);
return v___x_1184_;
}
}
}
else
{
lean_dec_ref(v___f_1142_);
lean_dec(v_pos_1112_);
lean_dec_ref(v_binderType_1108_);
lean_dec(v_binderName_1107_);
lean_dec(v_pos_1070_);
return v___x_1157_;
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
v___y_1114_ = v_a_1025_;
v___y_1115_ = v_a_1026_;
v___y_1116_ = v_a_1027_;
v___y_1117_ = v_a_1028_;
goto v___jp_1113_;
}
v___jp_1113_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1118_ = l_Lean_Expr_getForallBinderNames(v_expr_1111_);
v___x_1119_ = l_Lean_Expr_getForallBinderNames(v_expr_1069_);
v___x_1120_ = l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(v___x_1118_, v___x_1119_);
if (lean_obj_tag(v___x_1120_) == 1)
{
lean_object* v_val_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; 
v_val_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_val_1121_);
lean_dec_ref_known(v___x_1120_, 1);
v___x_1122_ = l_List_lengthTR___redArg(v_val_1121_);
v___x_1123_ = lean_unsigned_to_nat(0u);
v___x_1124_ = lean_nat_dec_eq(v___x_1122_, v___x_1123_);
lean_dec(v___x_1122_);
if (v___x_1124_ == 0)
{
v___y_1072_ = v_val_1121_;
v___y_1073_ = v___y_1114_;
v___y_1074_ = v___y_1115_;
v___y_1075_ = v___y_1116_;
v___y_1076_ = v___y_1117_;
goto v___jp_1071_;
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1, &l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1);
v___x_1126_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_1125_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_dec_ref_known(v___x_1126_, 1);
v___y_1072_ = v_val_1121_;
v___y_1073_ = v___y_1114_;
v___y_1074_ = v___y_1115_;
v___y_1075_ = v___y_1116_;
v___y_1076_ = v___y_1117_;
goto v___jp_1071_;
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec(v_val_1121_);
lean_dec_ref(v_after_1024_);
lean_dec_ref(v_before_1023_);
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1126_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1126_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
}
else
{
uint8_t v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
lean_dec(v___x_1120_);
v___x_1135_ = 0;
v___x_1136_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1023_, v_after_1024_, v___x_1135_);
v___x_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
return v___x_1137_;
}
}
}
else
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
lean_dec_ref(v_after_1024_);
lean_dec_ref(v_before_1023_);
v___x_1196_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1196_);
return v___x_1197_;
}
v___jp_1030_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = lean_unsigned_to_nat(0u);
v___x_1038_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v___y_1034_, v_before_1023_, v___x_1037_, v_a_1036_);
lean_dec(v___y_1034_);
return v___x_1038_;
}
v___jp_1039_:
{
if (v___y_1047_ == 0)
{
lean_object* v___x_1048_; 
lean_dec_ref(v___y_1040_);
v___x_1048_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1044_, v___y_1046_, v___y_1042_);
lean_dec_ref(v___y_1044_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v___x_1049_; 
lean_dec_ref_known(v___x_1048_, 1);
v___x_1049_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___y_1031_ = v___y_1041_;
v___y_1032_ = v___y_1042_;
v___y_1033_ = v___y_1043_;
v___y_1034_ = v___y_1045_;
v___y_1035_ = v___y_1046_;
v_a_1036_ = v___x_1049_;
goto v___jp_1030_;
}
else
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
lean_dec(v___y_1045_);
lean_dec_ref(v_before_1023_);
v_a_1050_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1048_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1048_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1050_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
else
{
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec_ref(v_before_1023_);
return v___y_1040_;
}
}
v___jp_1058_:
{
uint8_t v___x_1067_; 
v___x_1067_ = l_Lean_Exception_isInterrupt(v_a_1066_);
if (v___x_1067_ == 0)
{
uint8_t v___x_1068_; 
v___x_1068_ = l_Lean_Exception_isRuntime(v_a_1066_);
v___y_1040_ = v___y_1065_;
v___y_1041_ = v___y_1059_;
v___y_1042_ = v___y_1060_;
v___y_1043_ = v___y_1062_;
v___y_1044_ = v___y_1061_;
v___y_1045_ = v___y_1063_;
v___y_1046_ = v___y_1064_;
v___y_1047_ = v___x_1068_;
goto v___jp_1039_;
}
else
{
lean_dec_ref(v_a_1066_);
v___y_1040_ = v___y_1065_;
v___y_1041_ = v___y_1059_;
v___y_1042_ = v___y_1060_;
v___y_1043_ = v___y_1062_;
v___y_1044_ = v___y_1061_;
v___y_1045_ = v___y_1063_;
v___y_1046_ = v___y_1064_;
v___y_1047_ = v___x_1067_;
goto v___jp_1039_;
}
}
v___jp_1071_:
{
lean_object* v___x_1077_; lean_object* v_body_u2080_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1077_ = l_List_lengthTR___redArg(v___y_1072_);
lean_inc(v___x_1077_);
v_body_u2080_1078_ = l_Lean_Expr_getForallBodyMaxDepth(v___x_1077_, v_expr_1069_);
v___x_1079_ = lean_box(0);
v___x_1080_ = l_Lean_Meta_saveState___redArg(v___y_1074_, v___y_1076_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1082_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref_known(v___x_1080_, 1);
v___x_1082_ = l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(v___y_1072_, v___x_1079_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc(v_a_1083_);
lean_dec_ref_known(v___x_1082_, 1);
v___x_1084_ = lean_array_mk(v_a_1083_);
v___x_1085_ = lean_expr_instantiate_rev(v_body_u2080_1078_, v___x_1084_);
lean_dec_ref(v___x_1084_);
lean_dec_ref(v_body_u2080_1078_);
lean_inc(v_pos_1070_);
lean_inc(v___x_1077_);
v___x_1086_ = l_Lean_SubExpr_Pos_pushNthBindingBody(v___x_1077_, v_pos_1070_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1087_, v_after_1024_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; 
lean_dec(v_a_1081_);
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1088_, 1);
v___y_1031_ = v___y_1073_;
v___y_1032_ = v___y_1076_;
v___y_1033_ = v___y_1075_;
v___y_1034_ = v___x_1077_;
v___y_1035_ = v___y_1074_;
v_a_1036_ = v_a_1089_;
goto v___jp_1030_;
}
else
{
lean_object* v_a_1090_; 
v_a_1090_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1090_);
v___y_1059_ = v___y_1073_;
v___y_1060_ = v___y_1076_;
v___y_1061_ = v_a_1081_;
v___y_1062_ = v___y_1075_;
v___y_1063_ = v___x_1077_;
v___y_1064_ = v___y_1074_;
v___y_1065_ = v___x_1088_;
v_a_1066_ = v_a_1090_;
goto v___jp_1058_;
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
lean_dec_ref(v_body_u2080_1078_);
lean_dec_ref(v_after_1024_);
v_a_1091_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1082_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1082_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
lean_inc(v_a_1091_);
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
v___y_1059_ = v___y_1073_;
v___y_1060_ = v___y_1076_;
v___y_1061_ = v_a_1081_;
v___y_1062_ = v___y_1075_;
v___y_1063_ = v___x_1077_;
v___y_1064_ = v___y_1074_;
v___y_1065_ = v___x_1096_;
v_a_1066_ = v_a_1091_;
goto v___jp_1058_;
}
}
}
}
else
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
lean_dec_ref(v_body_u2080_1078_);
lean_dec(v___x_1077_);
lean_dec(v___y_1072_);
lean_dec_ref(v_after_1024_);
lean_dec_ref(v_before_1023_);
v_a_1099_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1101_ = v___x_1080_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1080_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1099_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(lean_object* v_before_1198_, lean_object* v_after_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_expr_1221_; lean_object* v_pos_1222_; lean_object* v_expr_1223_; lean_object* v_pos_1224_; lean_object* v_e_u2081_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v___y_1230_; uint8_t v___x_1233_; 
v_expr_1221_ = lean_ctor_get(v_before_1198_, 0);
v_pos_1222_ = lean_ctor_get(v_before_1198_, 1);
v_expr_1223_ = lean_ctor_get(v_after_1199_, 0);
v_pos_1224_ = lean_ctor_get(v_after_1199_, 1);
v___x_1233_ = lean_expr_eqv(v_expr_1221_, v_expr_1223_);
if (v___x_1233_ == 0)
{
switch(lean_obj_tag(v_expr_1221_))
{
case 10:
{
lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1242_; 
lean_inc_ref(v_expr_1221_);
lean_inc(v_pos_1222_);
v_isSharedCheck_1242_ = !lean_is_exclusive(v_before_1198_);
if (v_isSharedCheck_1242_ == 0)
{
lean_object* v_unused_1243_; lean_object* v_unused_1244_; 
v_unused_1243_ = lean_ctor_get(v_before_1198_, 1);
lean_dec(v_unused_1243_);
v_unused_1244_ = lean_ctor_get(v_before_1198_, 0);
lean_dec(v_unused_1244_);
v___x_1235_ = v_before_1198_;
v_isShared_1236_ = v_isSharedCheck_1242_;
goto v_resetjp_1234_;
}
else
{
lean_dec(v_before_1198_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1242_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v_expr_1237_; lean_object* v___x_1239_; 
v_expr_1237_ = lean_ctor_get(v_expr_1221_, 1);
lean_inc_ref(v_expr_1237_);
lean_dec_ref_known(v_expr_1221_, 2);
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 0, v_expr_1237_);
v___x_1239_ = v___x_1235_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_expr_1237_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v_pos_1222_);
v___x_1239_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
v_before_1198_ = v___x_1239_;
goto _start;
}
}
}
case 5:
{
switch(lean_obj_tag(v_expr_1223_))
{
case 10:
{
lean_object* v_expr_1245_; 
lean_inc_ref(v_expr_1223_);
lean_inc(v_pos_1224_);
lean_dec_ref(v_after_1199_);
v_expr_1245_ = lean_ctor_get(v_expr_1223_, 1);
lean_inc_ref(v_expr_1245_);
lean_dec_ref_known(v_expr_1223_, 2);
v_e_u2081_1226_ = v_expr_1245_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
goto v___jp_1225_;
}
case 5:
{
lean_object* v_dummy_1246_; lean_object* v_nargs_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v_fst_1252_; lean_object* v_snd_1253_; lean_object* v_nargs_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v_fst_1258_; lean_object* v_snd_1259_; uint8_t v___x_1260_; 
v_dummy_1246_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__1, &l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__1_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__1);
v_nargs_1247_ = l_Lean_Expr_getAppNumArgs(v_expr_1223_);
lean_inc(v_nargs_1247_);
v___x_1248_ = lean_mk_array(v_nargs_1247_, v_dummy_1246_);
v___x_1249_ = lean_unsigned_to_nat(1u);
v___x_1250_ = lean_nat_sub(v_nargs_1247_, v___x_1249_);
lean_dec(v_nargs_1247_);
lean_inc_ref(v_expr_1223_);
v___x_1251_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(v_expr_1223_, v___x_1248_, v___x_1250_);
v_fst_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_fst_1252_);
v_snd_1253_ = lean_ctor_get(v___x_1251_, 1);
lean_inc(v_snd_1253_);
lean_dec_ref(v___x_1251_);
v_nargs_1254_ = l_Lean_Expr_getAppNumArgs(v_expr_1221_);
lean_inc(v_nargs_1254_);
v___x_1255_ = lean_mk_array(v_nargs_1254_, v_dummy_1246_);
v___x_1256_ = lean_nat_sub(v_nargs_1254_, v___x_1249_);
lean_dec(v_nargs_1254_);
lean_inc_ref(v_expr_1221_);
v___x_1257_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(v_expr_1221_, v___x_1255_, v___x_1256_);
v_fst_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_fst_1258_);
v_snd_1259_ = lean_ctor_get(v___x_1257_, 1);
lean_inc(v_snd_1259_);
lean_dec_ref(v___x_1257_);
v___x_1260_ = lean_expr_eqv(v_fst_1252_, v_fst_1258_);
lean_dec(v_fst_1258_);
lean_dec(v_fst_1252_);
if (v___x_1260_ == 0)
{
lean_dec(v_snd_1259_);
lean_dec(v_snd_1253_);
goto v___jp_1213_;
}
else
{
if (v___x_1233_ == 0)
{
lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; 
v___x_1261_ = lean_array_get_size(v_snd_1253_);
v___x_1262_ = lean_array_get_size(v_snd_1259_);
v___x_1263_ = lean_nat_dec_eq(v___x_1261_, v___x_1262_);
if (v___x_1263_ == 0)
{
lean_dec(v_snd_1259_);
lean_dec(v_snd_1253_);
goto v___jp_1213_;
}
else
{
if (v___x_1233_ == 0)
{
lean_object* v_args_1264_; size_t v_sz_1265_; size_t v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_9967__overap_1271_; lean_object* v___x_1272_; 
v_args_1264_ = l_Array_zip___redArg(v_snd_1253_, v_snd_1259_);
lean_dec(v_snd_1259_);
v_sz_1265_ = lean_array_size(v_args_1264_);
v___x_1266_ = ((size_t)0ULL);
v___x_1267_ = l_unsafeCast___redArg(v_args_1264_);
v___x_1268_ = lean_box_usize(v_sz_1265_);
v___x_1269_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed__const__1));
v___x_1270_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___boxed), 12, 7);
lean_closure_set(v___x_1270_, 0, v_snd_1253_);
lean_closure_set(v___x_1270_, 1, v_before_1198_);
lean_closure_set(v___x_1270_, 2, v_after_1199_);
lean_closure_set(v___x_1270_, 3, v_args_1264_);
lean_closure_set(v___x_1270_, 4, v___x_1268_);
lean_closure_set(v___x_1270_, 5, v___x_1269_);
lean_closure_set(v___x_1270_, 6, v___x_1267_);
v___x_9967__overap_1271_ = l_unsafeCast___redArg(v___x_1270_);
lean_dec_ref(v___x_1270_);
lean_inc(v_a_1203_);
lean_inc_ref(v_a_1202_);
lean_inc(v_a_1201_);
lean_inc_ref(v_a_1200_);
v___x_1272_ = lean_apply_5(v___x_9967__overap_1271_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_, lean_box(0));
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1298_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1298_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1298_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v___x_1277_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1278_ = lean_unsigned_to_nat(0u);
v___x_1279_ = lean_array_get_size(v_a_1273_);
v___x_1280_ = lean_nat_dec_lt(v___x_1278_, v___x_1279_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1282_; 
lean_dec(v_a_1273_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1277_);
v___x_1282_ = v___x_1275_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
else
{
uint8_t v___x_1284_; 
v___x_1284_ = lean_nat_dec_le(v___x_1279_, v___x_1279_);
if (v___x_1284_ == 0)
{
if (v___x_1280_ == 0)
{
lean_object* v___x_1286_; 
lean_dec(v_a_1273_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1277_);
v___x_1286_ = v___x_1275_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1277_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
else
{
size_t v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1291_; 
v___x_1288_ = lean_usize_of_nat(v___x_1279_);
v___x_1289_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_a_1273_, v___x_1266_, v___x_1288_, v___x_1277_);
lean_dec(v_a_1273_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1289_);
v___x_1291_ = v___x_1275_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1289_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
else
{
size_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1296_; 
v___x_1293_ = lean_usize_of_nat(v___x_1279_);
v___x_1294_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_a_1273_, v___x_1266_, v___x_1293_, v___x_1277_);
lean_dec(v_a_1273_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1294_);
v___x_1296_ = v___x_1275_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
else
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1306_; 
v_a_1299_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1301_ = v___x_1272_;
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1272_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1304_; 
if (v_isShared_1302_ == 0)
{
v___x_1304_ = v___x_1301_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v_a_1299_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
}
else
{
lean_dec(v_snd_1259_);
lean_dec(v_snd_1253_);
goto v___jp_1213_;
}
}
}
else
{
lean_dec(v_snd_1259_);
lean_dec(v_snd_1253_);
goto v___jp_1213_;
}
}
}
default: 
{
goto v___jp_1217_;
}
}
}
case 7:
{
if (lean_obj_tag(v_expr_1223_) == 10)
{
lean_object* v_expr_1307_; 
lean_inc_ref(v_expr_1223_);
lean_inc(v_pos_1224_);
lean_dec_ref(v_after_1199_);
v_expr_1307_ = lean_ctor_get(v_expr_1223_, 1);
lean_inc_ref(v_expr_1307_);
lean_dec_ref_known(v_expr_1223_, 2);
v_e_u2081_1226_ = v_expr_1307_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
goto v___jp_1225_;
}
else
{
lean_object* v___x_1308_; 
v___x_1308_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(v_before_1198_, v_after_1199_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
return v___x_1308_;
}
}
case 6:
{
switch(lean_obj_tag(v_expr_1223_))
{
case 10:
{
lean_object* v_expr_1309_; 
lean_inc_ref(v_expr_1223_);
lean_inc(v_pos_1224_);
lean_dec_ref(v_after_1199_);
v_expr_1309_ = lean_ctor_get(v_expr_1223_, 1);
lean_inc_ref(v_expr_1309_);
lean_dec_ref_known(v_expr_1223_, 2);
v_e_u2081_1226_ = v_expr_1309_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
goto v___jp_1225_;
}
case 6:
{
lean_object* v_binderName_1310_; lean_object* v_binderType_1311_; lean_object* v_body_1312_; uint8_t v_binderInfo_1313_; lean_object* v_binderName_1314_; lean_object* v_binderType_1315_; lean_object* v_body_1316_; uint8_t v_binderInfo_1317_; uint8_t v___x_1318_; 
v_binderName_1310_ = lean_ctor_get(v_expr_1221_, 0);
v_binderType_1311_ = lean_ctor_get(v_expr_1221_, 1);
v_body_1312_ = lean_ctor_get(v_expr_1221_, 2);
v_binderInfo_1313_ = lean_ctor_get_uint8(v_expr_1221_, sizeof(void*)*3 + 8);
v_binderName_1314_ = lean_ctor_get(v_expr_1223_, 0);
v_binderType_1315_ = lean_ctor_get(v_expr_1223_, 1);
v_body_1316_ = lean_ctor_get(v_expr_1223_, 2);
v_binderInfo_1317_ = lean_ctor_get_uint8(v_expr_1223_, sizeof(void*)*3 + 8);
v___x_1318_ = lean_name_eq(v_binderName_1310_, v_binderName_1314_);
if (v___x_1318_ == 0)
{
goto v___jp_1209_;
}
else
{
if (v___x_1233_ == 0)
{
uint8_t v___x_1319_; 
v___x_1319_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1313_, v_binderInfo_1317_);
if (v___x_1319_ == 0)
{
goto v___jp_1209_;
}
else
{
if (v___x_1233_ == 0)
{
lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1369_; 
lean_inc_ref(v_body_1316_);
lean_inc_ref(v_binderType_1315_);
lean_inc_ref(v_body_1312_);
lean_inc_ref(v_binderType_1311_);
lean_inc(v_pos_1224_);
lean_inc(v_pos_1222_);
v_isSharedCheck_1369_ = !lean_is_exclusive(v_before_1198_);
if (v_isSharedCheck_1369_ == 0)
{
lean_object* v_unused_1370_; lean_object* v_unused_1371_; 
v_unused_1370_ = lean_ctor_get(v_before_1198_, 1);
lean_dec(v_unused_1370_);
v_unused_1371_ = lean_ctor_get(v_before_1198_, 0);
lean_dec(v_unused_1371_);
v___x_1321_ = v_before_1198_;
v_isShared_1322_ = v_isSharedCheck_1369_;
goto v_resetjp_1320_;
}
else
{
lean_dec(v_before_1198_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1369_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1366_; 
v_isSharedCheck_1366_ = !lean_is_exclusive(v_after_1199_);
if (v_isSharedCheck_1366_ == 0)
{
lean_object* v_unused_1367_; lean_object* v_unused_1368_; 
v_unused_1367_ = lean_ctor_get(v_after_1199_, 1);
lean_dec(v_unused_1367_);
v_unused_1368_ = lean_ctor_get(v_after_1199_, 0);
lean_dec(v_unused_1368_);
v___x_1324_ = v_after_1199_;
v_isShared_1325_ = v_isSharedCheck_1366_;
goto v_resetjp_1323_;
}
else
{
lean_dec(v_after_1199_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1366_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; lean_object* v___x_1328_; 
v___x_1326_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1222_);
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 1, v___x_1326_);
lean_ctor_set(v___x_1324_, 0, v_binderType_1311_);
v___x_1328_ = v___x_1324_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_binderType_1311_);
lean_ctor_set(v_reuseFailAlloc_1365_, 1, v___x_1326_);
v___x_1328_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
lean_object* v___x_1329_; lean_object* v___x_1331_; 
v___x_1329_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1224_);
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 1, v___x_1329_);
lean_ctor_set(v___x_1321_, 0, v_binderType_1315_);
v___x_1331_ = v___x_1321_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_binderType_1315_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v___x_1329_);
v___x_1331_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
lean_object* v___x_1332_; 
v___x_1332_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1328_, v___x_1331_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1363_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1335_ = v___x_1332_;
v_isShared_1336_ = v_isSharedCheck_1363_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1332_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1363_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
uint8_t v___x_1337_; 
v___x_1337_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_a_1333_);
if (v___x_1337_ == 0)
{
lean_object* v_changesBefore_1338_; lean_object* v_changesAfter_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; lean_object* v___x_1343_; lean_object* v_changesBefore_1344_; lean_object* v_changesAfter_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1357_; 
lean_dec_ref(v_body_1316_);
lean_dec_ref(v_body_1312_);
v_changesBefore_1338_ = lean_ctor_get(v_a_1333_, 0);
lean_inc(v_changesBefore_1338_);
v_changesAfter_1339_ = lean_ctor_get(v_a_1333_, 1);
lean_inc(v_changesAfter_1339_);
lean_dec(v_a_1333_);
v___x_1340_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1222_);
lean_dec(v_pos_1222_);
v___x_1341_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1224_);
lean_dec(v_pos_1224_);
v___x_1342_ = 0;
v___x_1343_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v___x_1340_, v___x_1341_, v___x_1342_);
v_changesBefore_1344_ = lean_ctor_get(v___x_1343_, 0);
v_changesAfter_1345_ = lean_ctor_get(v___x_1343_, 1);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1347_ = v___x_1343_;
v_isShared_1348_ = v_isSharedCheck_1357_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_changesAfter_1345_);
lean_inc(v_changesBefore_1344_);
lean_dec(v___x_1343_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1357_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1349_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_1338_, v_changesBefore_1344_);
v___x_1350_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_1339_, v_changesAfter_1345_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 1, v___x_1350_);
lean_ctor_set(v___x_1347_, 0, v___x_1349_);
v___x_1352_ = v___x_1347_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1349_);
lean_ctor_set(v_reuseFailAlloc_1356_, 1, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1354_; 
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 0, v___x_1352_);
v___x_1354_ = v___x_1335_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v___x_1352_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
}
else
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
lean_del_object(v___x_1335_);
lean_dec(v_a_1333_);
v___x_1358_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1222_);
lean_dec(v_pos_1222_);
v___x_1359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1359_, 0, v_body_1312_);
lean_ctor_set(v___x_1359_, 1, v___x_1358_);
v___x_1360_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1224_);
lean_dec(v_pos_1224_);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v_body_1316_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v_before_1198_ = v___x_1359_;
v_after_1199_ = v___x_1361_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_body_1316_);
lean_dec_ref(v_body_1312_);
lean_dec(v_pos_1224_);
lean_dec(v_pos_1222_);
return v___x_1332_;
}
}
}
}
}
}
else
{
goto v___jp_1209_;
}
}
}
else
{
goto v___jp_1209_;
}
}
}
default: 
{
goto v___jp_1217_;
}
}
}
case 11:
{
switch(lean_obj_tag(v_expr_1223_))
{
case 10:
{
lean_object* v_expr_1372_; 
lean_inc_ref(v_expr_1223_);
lean_inc(v_pos_1224_);
lean_dec_ref(v_after_1199_);
v_expr_1372_ = lean_ctor_get(v_expr_1223_, 1);
lean_inc_ref(v_expr_1372_);
lean_dec_ref_known(v_expr_1223_, 2);
v_e_u2081_1226_ = v_expr_1372_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
goto v___jp_1225_;
}
case 11:
{
lean_object* v_typeName_1373_; lean_object* v_idx_1374_; lean_object* v_struct_1375_; lean_object* v_typeName_1376_; lean_object* v_idx_1377_; lean_object* v_struct_1378_; uint8_t v___x_1379_; 
v_typeName_1373_ = lean_ctor_get(v_expr_1221_, 0);
v_idx_1374_ = lean_ctor_get(v_expr_1221_, 1);
v_struct_1375_ = lean_ctor_get(v_expr_1221_, 2);
v_typeName_1376_ = lean_ctor_get(v_expr_1223_, 0);
v_idx_1377_ = lean_ctor_get(v_expr_1223_, 1);
v_struct_1378_ = lean_ctor_get(v_expr_1223_, 2);
v___x_1379_ = lean_name_eq(v_typeName_1373_, v_typeName_1376_);
if (v___x_1379_ == 0)
{
goto v___jp_1205_;
}
else
{
if (v___x_1233_ == 0)
{
uint8_t v___x_1380_; 
v___x_1380_ = lean_nat_dec_eq(v_idx_1374_, v_idx_1377_);
if (v___x_1380_ == 0)
{
goto v___jp_1205_;
}
else
{
if (v___x_1233_ == 0)
{
lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1399_; 
lean_inc_ref(v_struct_1378_);
lean_inc_ref(v_struct_1375_);
lean_inc(v_pos_1224_);
lean_inc(v_pos_1222_);
v_isSharedCheck_1399_ = !lean_is_exclusive(v_before_1198_);
if (v_isSharedCheck_1399_ == 0)
{
lean_object* v_unused_1400_; lean_object* v_unused_1401_; 
v_unused_1400_ = lean_ctor_get(v_before_1198_, 1);
lean_dec(v_unused_1400_);
v_unused_1401_ = lean_ctor_get(v_before_1198_, 0);
lean_dec(v_unused_1401_);
v___x_1382_ = v_before_1198_;
v_isShared_1383_ = v_isSharedCheck_1399_;
goto v_resetjp_1381_;
}
else
{
lean_dec(v_before_1198_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1399_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1396_; 
v_isSharedCheck_1396_ = !lean_is_exclusive(v_after_1199_);
if (v_isSharedCheck_1396_ == 0)
{
lean_object* v_unused_1397_; lean_object* v_unused_1398_; 
v_unused_1397_ = lean_ctor_get(v_after_1199_, 1);
lean_dec(v_unused_1397_);
v_unused_1398_ = lean_ctor_get(v_after_1199_, 0);
lean_dec(v_unused_1398_);
v___x_1385_ = v_after_1199_;
v_isShared_1386_ = v_isSharedCheck_1396_;
goto v_resetjp_1384_;
}
else
{
lean_dec(v_after_1199_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1396_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1387_; lean_object* v___x_1389_; 
v___x_1387_ = l_Lean_SubExpr_Pos_pushProj(v_pos_1222_);
lean_dec(v_pos_1222_);
if (v_isShared_1386_ == 0)
{
lean_ctor_set(v___x_1385_, 1, v___x_1387_);
lean_ctor_set(v___x_1385_, 0, v_struct_1375_);
v___x_1389_ = v___x_1385_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_struct_1375_);
lean_ctor_set(v_reuseFailAlloc_1395_, 1, v___x_1387_);
v___x_1389_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
lean_object* v___x_1390_; lean_object* v___x_1392_; 
v___x_1390_ = l_Lean_SubExpr_Pos_pushProj(v_pos_1224_);
lean_dec(v_pos_1224_);
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 1, v___x_1390_);
lean_ctor_set(v___x_1382_, 0, v_struct_1378_);
v___x_1392_ = v___x_1382_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_struct_1378_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v___x_1390_);
v___x_1392_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
v_before_1198_ = v___x_1389_;
v_after_1199_ = v___x_1392_;
goto _start;
}
}
}
}
}
else
{
goto v___jp_1205_;
}
}
}
else
{
goto v___jp_1205_;
}
}
}
default: 
{
goto v___jp_1217_;
}
}
}
default: 
{
if (lean_obj_tag(v_expr_1223_) == 10)
{
lean_object* v_expr_1402_; 
lean_inc_ref(v_expr_1223_);
lean_inc(v_pos_1224_);
lean_dec_ref(v_after_1199_);
v_expr_1402_ = lean_ctor_get(v_expr_1223_, 1);
lean_inc_ref(v_expr_1402_);
lean_dec_ref_known(v_expr_1223_, 2);
v_e_u2081_1226_ = v_expr_1402_;
v___y_1227_ = v_a_1200_;
v___y_1228_ = v_a_1201_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
goto v___jp_1225_;
}
else
{
goto v___jp_1217_;
}
}
}
}
else
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
lean_dec_ref(v_after_1199_);
lean_dec_ref(v_before_1198_);
v___x_1403_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
return v___x_1404_;
}
v___jp_1205_:
{
uint8_t v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1206_ = 0;
v___x_1207_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1198_, v_after_1199_, v___x_1206_);
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
return v___x_1208_;
}
v___jp_1209_:
{
uint8_t v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1210_ = 0;
v___x_1211_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1198_, v_after_1199_, v___x_1210_);
v___x_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
return v___x_1212_;
}
v___jp_1213_:
{
uint8_t v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1214_ = 0;
v___x_1215_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1198_, v_after_1199_, v___x_1214_);
v___x_1216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
return v___x_1216_;
}
v___jp_1217_:
{
uint8_t v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1218_ = 0;
v___x_1219_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1198_, v_after_1199_, v___x_1218_);
v___x_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
v___jp_1225_:
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v_e_u2081_1226_);
lean_ctor_set(v___x_1231_, 1, v_pos_1224_);
v_after_1199_ = v___x_1231_;
v_a_1200_ = v___y_1227_;
v_a_1201_ = v___y_1228_;
v_a_1202_ = v___y_1229_;
v_a_1203_ = v___y_1230_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(lean_object* v_snd_1405_, lean_object* v_before_1406_, lean_object* v_after_1407_, size_t v_sz_1408_, size_t v_i_1409_, lean_object* v_bs_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
uint8_t v___x_1416_; 
v___x_1416_ = lean_usize_dec_lt(v_i_1409_, v_sz_1408_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1417_ = l_unsafeCast___redArg(v_bs_1410_);
lean_dec_ref(v_bs_1410_);
v___x_1418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1417_);
return v___x_1418_;
}
else
{
lean_object* v_v_1419_; lean_object* v___x_1420_; lean_object* v_fst_1421_; lean_object* v_snd_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1453_; 
v_v_1419_ = lean_array_uget_borrowed(v_bs_1410_, v_i_1409_);
v___x_1420_ = l_unsafeCast___redArg(v_v_1419_);
v_fst_1421_ = lean_ctor_get(v___x_1420_, 0);
v_snd_1422_ = lean_ctor_get(v___x_1420_, 1);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1424_ = v___x_1420_;
v_isShared_1425_ = v_isSharedCheck_1453_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_snd_1422_);
lean_inc(v_fst_1421_);
lean_dec(v___x_1420_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1453_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v_pos_1426_; lean_object* v_pos_1427_; lean_object* v___x_1428_; lean_object* v_bs_x27_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1434_; 
v_pos_1426_ = lean_ctor_get(v_before_1406_, 1);
v_pos_1427_ = lean_ctor_get(v_after_1407_, 1);
v___x_1428_ = lean_unsigned_to_nat(0u);
v_bs_x27_1429_ = lean_array_uset(v_bs_1410_, v_i_1409_, v___x_1428_);
v___x_1430_ = lean_usize_to_nat(v_i_1409_);
v___x_1431_ = lean_array_get_size(v_snd_1405_);
v___x_1432_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_1431_, v___x_1430_, v_pos_1426_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 1, v___x_1432_);
v___x_1434_ = v___x_1424_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_fst_1421_);
lean_ctor_set(v_reuseFailAlloc_1452_, 1, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1435_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_1431_, v___x_1430_, v_pos_1427_);
lean_dec(v___x_1430_);
v___x_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1436_, 0, v_snd_1422_);
lean_ctor_set(v___x_1436_, 1, v___x_1435_);
v___x_1437_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1434_, v___x_1436_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; size_t v___x_1439_; size_t v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1437_, 1);
v___x_1439_ = ((size_t)1ULL);
v___x_1440_ = lean_usize_add(v_i_1409_, v___x_1439_);
v___x_1441_ = l_unsafeCast___redArg(v_a_1438_);
lean_dec(v_a_1438_);
v___x_1442_ = lean_array_uset(v_bs_x27_1429_, v_i_1409_, v___x_1441_);
v_i_1409_ = v___x_1440_;
v_bs_1410_ = v___x_1442_;
goto _start;
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
lean_dec_ref(v_bs_x27_1429_);
v_a_1444_ = lean_ctor_get(v___x_1437_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1437_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1437_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1437_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(lean_object* v_snd_1454_, lean_object* v_before_1455_, lean_object* v_after_1456_, lean_object* v_as_1457_, size_t v_sz_1458_, size_t v_i_1459_, lean_object* v_bs_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1454_, v_before_1455_, v_after_1456_, v_sz_1458_, v_i_1459_, v_bs_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg___boxed(lean_object* v_snd_1467_, lean_object* v_before_1468_, lean_object* v_after_1469_, lean_object* v_sz_1470_, lean_object* v_i_1471_, lean_object* v_bs_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
size_t v_sz_boxed_1478_; size_t v_i_boxed_1479_; lean_object* v_res_1480_; 
v_sz_boxed_1478_ = lean_unbox_usize(v_sz_1470_);
lean_dec(v_sz_1470_);
v_i_boxed_1479_ = lean_unbox_usize(v_i_1471_);
lean_dec(v_i_1471_);
v_res_1480_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1467_, v_before_1468_, v_after_1469_, v_sz_boxed_1478_, v_i_boxed_1479_, v_bs_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_dec_ref(v_after_1469_);
lean_dec_ref(v_before_1468_);
lean_dec_ref(v_snd_1467_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___boxed(lean_object* v_before_1481_, lean_object* v_after_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(v_before_1481_, v_after_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_);
lean_dec(v_a_1486_);
lean_dec_ref(v_a_1485_);
lean_dec(v_a_1484_);
lean_dec_ref(v_a_1483_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed(lean_object* v_before_1489_, lean_object* v_after_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_before_1489_, v_after_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_);
lean_dec(v_a_1494_);
lean_dec_ref(v_a_1493_);
lean_dec(v_a_1492_);
lean_dec_ref(v_a_1491_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(lean_object* v_upperBound_1497_, lean_object* v_before_1498_, lean_object* v_inst_1499_, lean_object* v_R_1500_, lean_object* v_a_1501_, lean_object* v_b_1502_, lean_object* v_c_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v_upperBound_1497_, v_before_1498_, v_a_1501_, v_b_1502_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___boxed(lean_object* v_upperBound_1510_, lean_object* v_before_1511_, lean_object* v_inst_1512_, lean_object* v_R_1513_, lean_object* v_a_1514_, lean_object* v_b_1515_, lean_object* v_c_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(v_upperBound_1510_, v_before_1511_, v_inst_1512_, v_R_1513_, v_a_1514_, v_b_1515_, v_c_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v_upperBound_1510_);
return v_res_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(lean_object* v_00_u03b1_1523_, lean_object* v_msg_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v_msg_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___boxed(lean_object* v_00_u03b1_1531_, lean_object* v_msg_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(v_00_u03b1_1531_, v_msg_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(uint8_t v_b_u2082_1539_, lean_object* v_k_1540_, lean_object* v_t_1541_, lean_object* v_hl_1542_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_1539_, v_k_1540_, v_t_1541_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___boxed(lean_object* v_b_u2082_1544_, lean_object* v_k_1545_, lean_object* v_t_1546_, lean_object* v_hl_1547_){
_start:
{
uint8_t v_b_u2082_boxed_1548_; lean_object* v_res_1549_; 
v_b_u2082_boxed_1548_ = lean_unbox(v_b_u2082_1544_);
v_res_1549_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(v_b_u2082_boxed_1548_, v_k_1545_, v_t_1546_, v_hl_1547_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5(lean_object* v_init_1550_, lean_object* v_t_1551_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_init_1550_, v_t_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(lean_object* v_e_u2080_1553_, lean_object* v_e_u2081_1554_, uint8_t v_useAfter_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v___x_1561_; lean_object* v_s_u2080_1562_; lean_object* v_s_u2081_1563_; 
v___x_1561_ = l_Lean_SubExpr_Pos_root;
v_s_u2080_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_u2080_1562_, 0, v_e_u2080_1553_);
lean_ctor_set(v_s_u2080_1562_, 1, v___x_1561_);
v_s_u2081_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_u2081_1563_, 0, v_e_u2081_1554_);
lean_ctor_set(v_s_u2081_1563_, 1, v___x_1561_);
if (v_useAfter_1555_ == 0)
{
lean_object* v___x_1564_; 
v___x_1564_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_s_u2081_1563_, v_s_u2080_1562_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
return v___x_1564_;
}
else
{
lean_object* v___x_1565_; 
v___x_1565_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_s_u2080_1562_, v_s_u2081_1563_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
return v___x_1565_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff___boxed(lean_object* v_e_u2080_1566_, lean_object* v_e_u2081_1567_, lean_object* v_useAfter_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_){
_start:
{
uint8_t v_useAfter_boxed_1574_; lean_object* v_res_1575_; 
v_useAfter_boxed_1574_ = lean_unbox(v_useAfter_1568_);
v_res_1575_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_e_u2080_1566_, v_e_u2081_1567_, v_useAfter_boxed_1574_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_);
lean_dec(v_a_1572_);
lean_dec_ref(v_a_1571_);
lean_dec(v_a_1570_);
lean_dec_ref(v_a_1569_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(uint8_t v_useAfter_1576_, lean_object* v_info_1577_, uint8_t v_d_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_){
_start:
{
uint8_t v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1584_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(v_useAfter_1576_, v_d_1578_);
v___x_1585_ = l_Lean_Widget_SubexprInfo_withDiffTag(v___x_1584_, v_info_1577_);
v___x_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1585_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed(lean_object* v_useAfter_1587_, lean_object* v_info_1588_, lean_object* v_d_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_){
_start:
{
uint8_t v_useAfter_boxed_1595_; uint8_t v_d_boxed_1596_; lean_object* v_res_1597_; 
v_useAfter_boxed_1595_ = lean_unbox(v_useAfter_1587_);
v_d_boxed_1596_ = lean_unbox(v_d_1589_);
v_res_1597_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(v_useAfter_boxed_1595_, v_info_1588_, v_d_boxed_1596_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1598_, lean_object* v_00_u03b2_1599_, lean_object* v_f_1600_, lean_object* v_sz_1601_, lean_object* v_i_1602_, lean_object* v_bs_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
size_t v_sz_boxed_1609_; size_t v_i_boxed_1610_; lean_object* v_res_1611_; 
v_sz_boxed_1609_ = lean_unbox_usize(v_sz_1601_);
lean_dec(v_sz_1601_);
v_i_boxed_1610_ = lean_unbox_usize(v_i_1602_);
lean_dec(v_i_1602_);
v_res_1611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(v_00_u03b1_1598_, v_00_u03b2_1599_, v_f_1600_, v_sz_boxed_1609_, v_i_boxed_1610_, v_bs_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(lean_object* v_f_1612_, lean_object* v_x_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
switch(lean_obj_tag(v_x_1613_))
{
case 0:
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1627_; 
lean_dec_ref(v_f_1612_);
v_a_1619_ = lean_ctor_get(v_x_1613_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v_x_1613_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1621_ = v_x_1613_;
v_isShared_1622_ = v_isSharedCheck_1627_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v_x_1613_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1627_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
lean_object* v___x_1625_; 
v___x_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1624_);
return v___x_1625_;
}
}
}
case 1:
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1658_; 
v_a_1628_ = lean_ctor_get(v_x_1613_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v_x_1613_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1630_ = v_x_1613_;
v_isShared_1631_ = v_isSharedCheck_1658_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v_x_1613_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1658_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
size_t v_sz_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_961__overap_1637_; lean_object* v___x_1638_; 
v_sz_1632_ = lean_array_size(v_a_1628_);
v___x_1633_ = l_unsafeCast___redArg(v_a_1628_);
lean_dec_ref(v_a_1628_);
v___x_1634_ = lean_box_usize(v_sz_1632_);
v___x_1635_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed__const__1));
v___x_1636_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___boxed), 11, 6);
lean_closure_set(v___x_1636_, 0, lean_box(0));
lean_closure_set(v___x_1636_, 1, lean_box(0));
lean_closure_set(v___x_1636_, 2, v_f_1612_);
lean_closure_set(v___x_1636_, 3, v___x_1634_);
lean_closure_set(v___x_1636_, 4, v___x_1635_);
lean_closure_set(v___x_1636_, 5, v___x_1633_);
v___x_961__overap_1637_ = l_unsafeCast___redArg(v___x_1636_);
lean_dec_ref(v___x_1636_);
lean_inc(v___y_1617_);
lean_inc_ref(v___y_1616_);
lean_inc(v___y_1615_);
lean_inc_ref(v___y_1614_);
v___x_1638_ = lean_apply_5(v___x_961__overap_1637_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, lean_box(0));
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1649_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1641_ = v___x_1638_;
v_isShared_1642_ = v_isSharedCheck_1649_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1638_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1649_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 0, v_a_1639_);
v___x_1644_ = v___x_1630_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
lean_object* v___x_1646_; 
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 0, v___x_1644_);
v___x_1646_ = v___x_1641_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v___x_1644_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1657_; 
lean_del_object(v___x_1630_);
v_a_1650_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1652_ = v___x_1638_;
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___x_1638_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
}
default: 
{
lean_object* v_a_1659_; lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1686_; 
v_a_1659_ = lean_ctor_get(v_x_1613_, 0);
v_a_1660_ = lean_ctor_get(v_x_1613_, 1);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_x_1613_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1662_ = v_x_1613_;
v_isShared_1663_ = v_isSharedCheck_1686_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_inc(v_a_1659_);
lean_dec(v_x_1613_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1686_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; 
lean_inc_ref(v_f_1612_);
lean_inc(v___y_1617_);
lean_inc_ref(v___y_1616_);
lean_inc(v___y_1615_);
lean_inc_ref(v___y_1614_);
v___x_1664_ = lean_apply_6(v_f_1612_, v_a_1659_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, lean_box(0));
if (lean_obj_tag(v___x_1664_) == 0)
{
lean_object* v_a_1665_; lean_object* v___x_1666_; 
v_a_1665_ = lean_ctor_get(v___x_1664_, 0);
lean_inc(v_a_1665_);
lean_dec_ref_known(v___x_1664_, 1);
v___x_1666_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1612_, v_a_1660_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1677_; 
v_a_1667_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1669_ = v___x_1666_;
v_isShared_1670_ = v_isSharedCheck_1677_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1666_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1677_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1663_ == 0)
{
lean_ctor_set(v___x_1662_, 1, v_a_1667_);
lean_ctor_set(v___x_1662_, 0, v_a_1665_);
v___x_1672_ = v___x_1662_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_a_1665_);
lean_ctor_set(v_reuseFailAlloc_1676_, 1, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
lean_object* v___x_1674_; 
if (v_isShared_1670_ == 0)
{
lean_ctor_set(v___x_1669_, 0, v___x_1672_);
v___x_1674_ = v___x_1669_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1672_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
else
{
lean_dec(v_a_1665_);
lean_del_object(v___x_1662_);
return v___x_1666_;
}
}
else
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
lean_del_object(v___x_1662_);
lean_dec_ref(v_a_1660_);
lean_dec_ref(v_f_1612_);
v_a_1678_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v___x_1664_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1664_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_a_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(lean_object* v_f_1687_, size_t v_sz_1688_, size_t v_i_1689_, lean_object* v_bs_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
uint8_t v___x_1696_; 
v___x_1696_ = lean_usize_dec_lt(v_i_1689_, v_sz_1688_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_dec_ref(v_f_1687_);
v___x_1697_ = l_unsafeCast___redArg(v_bs_1690_);
lean_dec_ref(v_bs_1690_);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
return v___x_1698_;
}
else
{
lean_object* v_v_1699_; lean_object* v___x_1700_; lean_object* v_bs_x27_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v_v_1699_ = lean_array_uget(v_bs_1690_, v_i_1689_);
v___x_1700_ = lean_unsigned_to_nat(0u);
v_bs_x27_1701_ = lean_array_uset(v_bs_1690_, v_i_1689_, v___x_1700_);
v___x_1702_ = l_unsafeCast___redArg(v_v_1699_);
lean_dec(v_v_1699_);
lean_inc_ref(v_f_1687_);
v___x_1703_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1687_, v___x_1702_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; size_t v___x_1705_; size_t v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
v___x_1705_ = ((size_t)1ULL);
v___x_1706_ = lean_usize_add(v_i_1689_, v___x_1705_);
v___x_1707_ = l_unsafeCast___redArg(v_a_1704_);
lean_dec(v_a_1704_);
v___x_1708_ = lean_array_uset(v_bs_x27_1701_, v_i_1689_, v___x_1707_);
v_i_1689_ = v___x_1706_;
v_bs_1690_ = v___x_1708_;
goto _start;
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
lean_dec_ref(v_bs_x27_1701_);
lean_dec_ref(v_f_1687_);
v_a_1710_ = lean_ctor_get(v___x_1703_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1703_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1703_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1718_, lean_object* v_00_u03b2_1719_, lean_object* v_f_1720_, size_t v_sz_1721_, size_t v_i_1722_, lean_object* v_bs_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1720_, v_sz_1721_, v_i_1722_, v_bs_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_1730_, lean_object* v_sz_1731_, lean_object* v_i_1732_, lean_object* v_bs_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
size_t v_sz_boxed_1739_; size_t v_i_boxed_1740_; lean_object* v_res_1741_; 
v_sz_boxed_1739_ = lean_unbox_usize(v_sz_1731_);
lean_dec(v_sz_1731_);
v_i_boxed_1740_ = lean_unbox_usize(v_i_1732_);
lean_dec(v_i_1732_);
v_res_1741_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1730_, v_sz_boxed_1739_, v_i_boxed_1740_, v_bs_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg___boxed(lean_object* v_f_1742_, lean_object* v_x_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1742_, v_x_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(lean_object* v_t_1750_, lean_object* v_k_1751_){
_start:
{
if (lean_obj_tag(v_t_1750_) == 0)
{
lean_object* v_k_1752_; lean_object* v_v_1753_; lean_object* v_l_1754_; lean_object* v_r_1755_; uint8_t v___x_1756_; 
v_k_1752_ = lean_ctor_get(v_t_1750_, 1);
v_v_1753_ = lean_ctor_get(v_t_1750_, 2);
v_l_1754_ = lean_ctor_get(v_t_1750_, 3);
v_r_1755_ = lean_ctor_get(v_t_1750_, 4);
v___x_1756_ = lean_nat_dec_lt(v_k_1751_, v_k_1752_);
if (v___x_1756_ == 0)
{
uint8_t v___x_1757_; 
v___x_1757_ = lean_nat_dec_eq(v_k_1751_, v_k_1752_);
if (v___x_1757_ == 0)
{
v_t_1750_ = v_r_1755_;
goto _start;
}
else
{
lean_object* v___x_1759_; 
lean_inc(v_v_1753_);
v___x_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1759_, 0, v_v_1753_);
return v___x_1759_;
}
}
else
{
v_t_1750_ = v_l_1754_;
goto _start;
}
}
else
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_box(0);
return v___x_1761_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg___boxed(lean_object* v_t_1762_, lean_object* v_k_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_t_1762_, v_k_1763_);
lean_dec(v_k_1763_);
lean_dec(v_t_1762_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(lean_object* v_pm_1765_, lean_object* v_merger_1766_, lean_object* v_info_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v_subexprPos_1773_; lean_object* v___x_1774_; 
v_subexprPos_1773_ = lean_ctor_get(v_info_1767_, 1);
v___x_1774_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_pm_1765_, v_subexprPos_1773_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v___x_1775_; 
lean_dec_ref(v_merger_1766_);
v___x_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1775_, 0, v_info_1767_);
return v___x_1775_;
}
else
{
lean_object* v_val_1776_; lean_object* v___x_1777_; 
v_val_1776_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_val_1776_);
lean_dec_ref_known(v___x_1774_, 1);
lean_inc(v___y_1771_);
lean_inc_ref(v___y_1770_);
lean_inc(v___y_1769_);
lean_inc_ref(v___y_1768_);
v___x_1777_ = lean_apply_7(v_merger_1766_, v_info_1767_, v_val_1776_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, lean_box(0));
return v___x_1777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed(lean_object* v_pm_1778_, lean_object* v_merger_1779_, lean_object* v_info_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(v_pm_1778_, v_merger_1779_, v_info_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
lean_dec(v___y_1784_);
lean_dec_ref(v___y_1783_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v_pm_1778_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(lean_object* v_merger_1787_, lean_object* v_pm_1788_, lean_object* v_tt_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
if (lean_obj_tag(v_pm_1788_) == 0)
{
lean_object* v___f_1795_; lean_object* v___x_1796_; 
v___f_1795_ = lean_alloc_closure((void*)(l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1795_, 0, v_pm_1788_);
lean_closure_set(v___f_1795_, 1, v_merger_1787_);
v___x_1796_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v___f_1795_, v_tt_1789_, v___y_1790_, v___y_1791_, v___y_1792_, v___y_1793_);
return v___x_1796_;
}
else
{
lean_object* v___x_1797_; 
lean_dec_ref(v_merger_1787_);
v___x_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1797_, 0, v_tt_1789_);
return v___x_1797_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___boxed(lean_object* v_merger_1798_, lean_object* v_pm_1799_, lean_object* v_tt_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v_merger_1798_, v_pm_1799_, v_tt_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(uint8_t v_useAfter_1807_, lean_object* v_diff_1808_, lean_object* v_info_u2081_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_){
_start:
{
lean_object* v___x_1815_; lean_object* v___f_1816_; 
v___x_1815_ = lean_box(v_useAfter_1807_);
v___f_1816_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1816_, 0, v___x_1815_);
if (v_useAfter_1807_ == 0)
{
lean_object* v_changesBefore_1817_; lean_object* v___x_1818_; 
v_changesBefore_1817_ = lean_ctor_get(v_diff_1808_, 0);
lean_inc(v_changesBefore_1817_);
lean_dec_ref(v_diff_1808_);
v___x_1818_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v___f_1816_, v_changesBefore_1817_, v_info_u2081_1809_, v_a_1810_, v_a_1811_, v_a_1812_, v_a_1813_);
return v___x_1818_;
}
else
{
lean_object* v_changesAfter_1819_; lean_object* v___x_1820_; 
v_changesAfter_1819_ = lean_ctor_get(v_diff_1808_, 1);
lean_inc(v_changesAfter_1819_);
lean_dec_ref(v_diff_1808_);
v___x_1820_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v___f_1816_, v_changesAfter_1819_, v_info_u2081_1809_, v_a_1810_, v_a_1811_, v_a_1812_, v_a_1813_);
return v___x_1820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___boxed(lean_object* v_useAfter_1821_, lean_object* v_diff_1822_, lean_object* v_info_u2081_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_){
_start:
{
uint8_t v_useAfter_boxed_1829_; lean_object* v_res_1830_; 
v_useAfter_boxed_1829_ = lean_unbox(v_useAfter_1821_);
v_res_1830_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_boxed_1829_, v_diff_1822_, v_info_u2081_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_);
lean_dec(v_a_1827_);
lean_dec_ref(v_a_1826_);
lean_dec(v_a_1825_);
lean_dec_ref(v_a_1824_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(lean_object* v_00_u03b1_1831_, lean_object* v_merger_1832_, lean_object* v_pm_1833_, lean_object* v_tt_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v___x_1840_; 
v___x_1840_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v_merger_1832_, v_pm_1833_, v_tt_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___boxed(lean_object* v_00_u03b1_1841_, lean_object* v_merger_1842_, lean_object* v_pm_1843_, lean_object* v_tt_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(v_00_u03b1_1841_, v_merger_1842_, v_pm_1843_, v_tt_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
lean_dec(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec(v___y_1846_);
lean_dec_ref(v___y_1845_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(lean_object* v_00_u03b4_1851_, lean_object* v_t_1852_, lean_object* v_k_1853_){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_t_1852_, v_k_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___boxed(lean_object* v_00_u03b4_1855_, lean_object* v_t_1856_, lean_object* v_k_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(v_00_u03b4_1855_, v_t_1856_, v_k_1857_);
lean_dec(v_k_1857_);
lean_dec(v_t_1856_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(lean_object* v_00_u03b1_1859_, lean_object* v_00_u03b2_1860_, lean_object* v_f_1861_, lean_object* v_x_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1861_, v_x_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1869_, lean_object* v_00_u03b2_1870_, lean_object* v_f_1871_, lean_object* v_x_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_){
_start:
{
lean_object* v_res_1878_; 
v_res_1878_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(v_00_u03b1_1869_, v_00_u03b2_1870_, v_f_1871_, v_x_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(lean_object* v_e_1879_, lean_object* v___y_1880_){
_start:
{
uint8_t v___x_1882_; 
v___x_1882_ = l_Lean_Expr_hasMVar(v_e_1879_);
if (v___x_1882_ == 0)
{
lean_object* v___x_1883_; 
v___x_1883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1883_, 0, v_e_1879_);
return v___x_1883_;
}
else
{
lean_object* v___x_1884_; lean_object* v_mctx_1885_; lean_object* v___x_1886_; lean_object* v_fst_1887_; lean_object* v_snd_1888_; lean_object* v___x_1889_; lean_object* v_cache_1890_; lean_object* v_zetaDeltaFVarIds_1891_; lean_object* v_postponed_1892_; lean_object* v_diag_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1902_; 
v___x_1884_ = lean_st_ref_get(v___y_1880_);
v_mctx_1885_ = lean_ctor_get(v___x_1884_, 0);
lean_inc_ref(v_mctx_1885_);
lean_dec(v___x_1884_);
v___x_1886_ = l_Lean_instantiateMVarsCore(v_mctx_1885_, v_e_1879_);
v_fst_1887_ = lean_ctor_get(v___x_1886_, 0);
lean_inc(v_fst_1887_);
v_snd_1888_ = lean_ctor_get(v___x_1886_, 1);
lean_inc(v_snd_1888_);
lean_dec_ref(v___x_1886_);
v___x_1889_ = lean_st_ref_take(v___y_1880_);
v_cache_1890_ = lean_ctor_get(v___x_1889_, 1);
v_zetaDeltaFVarIds_1891_ = lean_ctor_get(v___x_1889_, 2);
v_postponed_1892_ = lean_ctor_get(v___x_1889_, 3);
v_diag_1893_ = lean_ctor_get(v___x_1889_, 4);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1902_ == 0)
{
lean_object* v_unused_1903_; 
v_unused_1903_ = lean_ctor_get(v___x_1889_, 0);
lean_dec(v_unused_1903_);
v___x_1895_ = v___x_1889_;
v_isShared_1896_ = v_isSharedCheck_1902_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_diag_1893_);
lean_inc(v_postponed_1892_);
lean_inc(v_zetaDeltaFVarIds_1891_);
lean_inc(v_cache_1890_);
lean_dec(v___x_1889_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1902_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v_snd_1888_);
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_snd_1888_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v_cache_1890_);
lean_ctor_set(v_reuseFailAlloc_1901_, 2, v_zetaDeltaFVarIds_1891_);
lean_ctor_set(v_reuseFailAlloc_1901_, 3, v_postponed_1892_);
lean_ctor_set(v_reuseFailAlloc_1901_, 4, v_diag_1893_);
v___x_1898_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1899_ = lean_st_ref_put(v___y_1880_, v___x_1898_);
v___x_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1900_, 0, v_fst_1887_);
return v___x_1900_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg___boxed(lean_object* v_e_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_e_1904_, v___y_1905_);
lean_dec(v___y_1905_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(lean_object* v_e_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_e_1908_, v___y_1910_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___boxed(lean_object* v_e_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(v_e_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
return v_res_1921_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1(void){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1923_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0));
v___x_1924_ = l_Lean_stringToMessageData(v___x_1923_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(uint8_t v_useAfter_1925_, lean_object* v_t_u2080_1926_, lean_object* v_h_u2081_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v_names_1933_; lean_object* v_fvarIds_1934_; lean_object* v_type_1935_; lean_object* v_val_x3f_1936_; lean_object* v_isInstance_x3f_1937_; lean_object* v_isType_x3f_1938_; lean_object* v_isInserted_x3f_1939_; lean_object* v_isRemoved_x3f_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1995_; 
v_names_1933_ = lean_ctor_get(v_h_u2081_1927_, 0);
v_fvarIds_1934_ = lean_ctor_get(v_h_u2081_1927_, 1);
v_type_1935_ = lean_ctor_get(v_h_u2081_1927_, 2);
v_val_x3f_1936_ = lean_ctor_get(v_h_u2081_1927_, 3);
v_isInstance_x3f_1937_ = lean_ctor_get(v_h_u2081_1927_, 4);
v_isType_x3f_1938_ = lean_ctor_get(v_h_u2081_1927_, 5);
v_isInserted_x3f_1939_ = lean_ctor_get(v_h_u2081_1927_, 6);
v_isRemoved_x3f_1940_ = lean_ctor_get(v_h_u2081_1927_, 7);
v_isSharedCheck_1995_ = !lean_is_exclusive(v_h_u2081_1927_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1942_ = v_h_u2081_1927_;
v_isShared_1943_ = v_isSharedCheck_1995_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_isRemoved_x3f_1940_);
lean_inc(v_isInserted_x3f_1939_);
lean_inc(v_isType_x3f_1938_);
lean_inc(v_isInstance_x3f_1937_);
lean_inc(v_val_x3f_1936_);
lean_inc(v_type_1935_);
lean_inc(v_fvarIds_1934_);
lean_inc(v_names_1933_);
lean_dec(v_h_u2081_1927_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1995_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___y_1945_; lean_object* v___x_1985_; lean_object* v___x_1986_; uint8_t v___x_1987_; 
v___x_1985_ = lean_unsigned_to_nat(0u);
v___x_1986_ = lean_array_get_size(v_fvarIds_1934_);
v___x_1987_ = lean_nat_dec_lt(v___x_1985_, v___x_1986_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
lean_del_object(v___x_1942_);
lean_dec(v_isRemoved_x3f_1940_);
lean_dec(v_isInserted_x3f_1939_);
lean_dec(v_isType_x3f_1938_);
lean_dec(v_isInstance_x3f_1937_);
lean_dec(v_val_x3f_1936_);
lean_dec_ref(v_type_1935_);
lean_dec_ref(v_fvarIds_1934_);
lean_dec_ref(v_names_1933_);
lean_dec_ref(v_t_u2080_1926_);
v___x_1988_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1);
v___x_1989_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_1988_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_);
return v___x_1989_;
}
else
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1990_ = lean_array_fget_borrowed(v_fvarIds_1934_, v___x_1985_);
lean_inc(v___x_1990_);
v___x_1991_ = l_Lean_Expr_fvar___override(v___x_1990_);
lean_inc(v_a_1931_);
lean_inc_ref(v_a_1930_);
lean_inc(v_a_1929_);
lean_inc_ref(v_a_1928_);
v___x_1992_ = lean_infer_type(v___x_1991_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; lean_object* v___x_1994_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_1993_);
lean_dec_ref_known(v___x_1992_, 1);
v___x_1994_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_a_1993_, v_a_1929_);
v___y_1945_ = v___x_1994_;
goto v___jp_1944_;
}
else
{
v___y_1945_ = v___x_1992_;
goto v___jp_1944_;
}
}
v___jp_1944_:
{
if (lean_obj_tag(v___y_1945_) == 0)
{
lean_object* v_a_1946_; lean_object* v___x_1947_; 
v_a_1946_ = lean_ctor_get(v___y_1945_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___y_1945_, 1);
v___x_1947_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_t_u2080_1926_, v_a_1946_, v_useAfter_1925_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1949_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref_known(v___x_1947_, 1);
v___x_1949_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_1925_, v_a_1948_, v_type_1935_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_);
if (lean_obj_tag(v___x_1949_) == 0)
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1960_; 
v_a_1950_ = lean_ctor_get(v___x_1949_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1949_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1952_ = v___x_1949_;
v_isShared_1953_ = v_isSharedCheck_1960_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1949_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1960_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 2, v_a_1950_);
v___x_1955_ = v___x_1942_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_names_1933_);
lean_ctor_set(v_reuseFailAlloc_1959_, 1, v_fvarIds_1934_);
lean_ctor_set(v_reuseFailAlloc_1959_, 2, v_a_1950_);
lean_ctor_set(v_reuseFailAlloc_1959_, 3, v_val_x3f_1936_);
lean_ctor_set(v_reuseFailAlloc_1959_, 4, v_isInstance_x3f_1937_);
lean_ctor_set(v_reuseFailAlloc_1959_, 5, v_isType_x3f_1938_);
lean_ctor_set(v_reuseFailAlloc_1959_, 6, v_isInserted_x3f_1939_);
lean_ctor_set(v_reuseFailAlloc_1959_, 7, v_isRemoved_x3f_1940_);
v___x_1955_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1957_; 
if (v_isShared_1953_ == 0)
{
lean_ctor_set(v___x_1952_, 0, v___x_1955_);
v___x_1957_ = v___x_1952_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v___x_1955_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_del_object(v___x_1942_);
lean_dec(v_isRemoved_x3f_1940_);
lean_dec(v_isInserted_x3f_1939_);
lean_dec(v_isType_x3f_1938_);
lean_dec(v_isInstance_x3f_1937_);
lean_dec(v_val_x3f_1936_);
lean_dec_ref(v_fvarIds_1934_);
lean_dec_ref(v_names_1933_);
v_a_1961_ = lean_ctor_get(v___x_1949_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1949_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1949_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1949_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_del_object(v___x_1942_);
lean_dec(v_isRemoved_x3f_1940_);
lean_dec(v_isInserted_x3f_1939_);
lean_dec(v_isType_x3f_1938_);
lean_dec(v_isInstance_x3f_1937_);
lean_dec(v_val_x3f_1936_);
lean_dec_ref(v_type_1935_);
lean_dec_ref(v_fvarIds_1934_);
lean_dec_ref(v_names_1933_);
v_a_1969_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1947_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1947_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
else
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1984_; 
lean_del_object(v___x_1942_);
lean_dec(v_isRemoved_x3f_1940_);
lean_dec(v_isInserted_x3f_1939_);
lean_dec(v_isType_x3f_1938_);
lean_dec(v_isInstance_x3f_1937_);
lean_dec(v_val_x3f_1936_);
lean_dec_ref(v_type_1935_);
lean_dec_ref(v_fvarIds_1934_);
lean_dec_ref(v_names_1933_);
lean_dec_ref(v_t_u2080_1926_);
v_a_1977_ = lean_ctor_get(v___y_1945_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___y_1945_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1979_ = v___y_1945_;
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v___y_1945_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1980_ == 0)
{
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_a_1977_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___boxed(lean_object* v_useAfter_1996_, lean_object* v_t_u2080_1997_, lean_object* v_h_u2081_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_){
_start:
{
uint8_t v_useAfter_boxed_2004_; lean_object* v_res_2005_; 
v_useAfter_boxed_2004_ = lean_unbox(v_useAfter_1996_);
v_res_2005_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(v_useAfter_boxed_2004_, v_t_u2080_1997_, v_h_u2081_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_);
lean_dec(v_a_2002_);
lean_dec_ref(v_a_2001_);
lean_dec(v_a_2000_);
lean_dec_ref(v_a_1999_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(lean_object* v_ctx_u2080_2009_, uint8_t v_useAfter_2010_, lean_object* v_h_u2081_2011_, lean_object* v___x_2012_, lean_object* v___x_2013_, lean_object* v_as_2014_, size_t v_sz_2015_, size_t v_i_2016_, lean_object* v_b_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_){
_start:
{
uint8_t v___x_2023_; 
v___x_2023_ = lean_usize_dec_lt(v_i_2016_, v_sz_2015_);
if (v___x_2023_ == 0)
{
lean_object* v___x_2024_; 
lean_dec_ref(v___x_2013_);
lean_dec_ref(v___x_2012_);
lean_dec_ref(v_h_u2081_2011_);
v___x_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2024_, 0, v_b_2017_);
return v___x_2024_;
}
else
{
lean_object* v_a_2025_; lean_object* v_fst_2026_; lean_object* v_snd_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2123_; 
lean_dec_ref(v_b_2017_);
v_a_2025_ = lean_array_uget(v_as_2014_, v_i_2016_);
v_fst_2026_ = lean_ctor_get(v_a_2025_, 0);
v_snd_2027_ = lean_ctor_get(v_a_2025_, 1);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_a_2025_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2029_ = v_a_2025_;
v_isShared_2030_ = v_isSharedCheck_2123_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_snd_2027_);
lean_inc(v_fst_2026_);
lean_dec(v_a_2025_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2123_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2031_; uint8_t v___x_2032_; 
v___x_2031_ = lean_box(0);
v___x_2032_ = l_Lean_LocalContext_contains(v_ctx_u2080_2009_, v_snd_2027_);
lean_dec(v_snd_2027_);
if (v___x_2032_ == 0)
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2033_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_, &l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_);
v___x_2034_ = l_Lean_Name_str___override(v___x_2033_, v_fst_2026_);
v___x_2035_ = l_Lean_LocalContext_findFromUserName_x3f(v_ctx_u2080_2009_, v___x_2034_);
lean_dec(v___x_2034_);
if (lean_obj_tag(v___x_2035_) == 1)
{
lean_object* v_val_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2074_; 
lean_dec_ref(v___x_2013_);
lean_dec_ref(v___x_2012_);
v_val_2036_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2038_ = v___x_2035_;
v_isShared_2039_ = v_isSharedCheck_2074_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_val_2036_);
lean_dec(v___x_2035_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2074_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2040_ = l_Lean_LocalDecl_type(v_val_2036_);
lean_dec(v_val_2036_);
v___x_2041_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v___x_2040_, v___y_2019_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2043_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v___x_2043_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(v_useAfter_2010_, v_a_2042_, v_h_u2081_2011_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2057_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2046_ = v___x_2043_;
v_isShared_2047_ = v_isSharedCheck_2057_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___x_2043_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2057_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2049_; 
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 0, v_a_2044_);
v___x_2049_ = v___x_2038_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_a_2044_);
v___x_2049_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
lean_object* v___x_2051_; 
if (v_isShared_2030_ == 0)
{
lean_ctor_set(v___x_2029_, 1, v___x_2031_);
lean_ctor_set(v___x_2029_, 0, v___x_2049_);
v___x_2051_ = v___x_2029_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v___x_2049_);
lean_ctor_set(v_reuseFailAlloc_2055_, 1, v___x_2031_);
v___x_2051_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
lean_object* v___x_2053_; 
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 0, v___x_2051_);
v___x_2053_ = v___x_2046_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2051_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
}
}
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_del_object(v___x_2038_);
lean_del_object(v___x_2029_);
v_a_2058_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2043_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2043_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
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
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
lean_del_object(v___x_2038_);
lean_del_object(v___x_2029_);
lean_dec_ref(v_h_u2081_2011_);
v_a_2066_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2041_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2041_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
}
else
{
lean_dec(v___x_2035_);
if (v_useAfter_2010_ == 0)
{
lean_object* v_type_2075_; lean_object* v_val_x3f_2076_; lean_object* v_isInstance_x3f_2077_; lean_object* v_isType_x3f_2078_; lean_object* v_isInserted_x3f_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2093_; 
v_type_2075_ = lean_ctor_get(v_h_u2081_2011_, 2);
v_val_x3f_2076_ = lean_ctor_get(v_h_u2081_2011_, 3);
v_isInstance_x3f_2077_ = lean_ctor_get(v_h_u2081_2011_, 4);
v_isType_x3f_2078_ = lean_ctor_get(v_h_u2081_2011_, 5);
v_isInserted_x3f_2079_ = lean_ctor_get(v_h_u2081_2011_, 6);
v_isSharedCheck_2093_ = !lean_is_exclusive(v_h_u2081_2011_);
if (v_isSharedCheck_2093_ == 0)
{
lean_object* v_unused_2094_; lean_object* v_unused_2095_; lean_object* v_unused_2096_; 
v_unused_2094_ = lean_ctor_get(v_h_u2081_2011_, 7);
lean_dec(v_unused_2094_);
v_unused_2095_ = lean_ctor_get(v_h_u2081_2011_, 1);
lean_dec(v_unused_2095_);
v_unused_2096_ = lean_ctor_get(v_h_u2081_2011_, 0);
lean_dec(v_unused_2096_);
v___x_2081_ = v_h_u2081_2011_;
v_isShared_2082_ = v_isSharedCheck_2093_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_isInserted_x3f_2079_);
lean_inc(v_isType_x3f_2078_);
lean_inc(v_isInstance_x3f_2077_);
lean_inc(v_val_x3f_2076_);
lean_inc(v_type_2075_);
lean_dec(v_h_u2081_2011_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2093_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2086_; 
v___x_2083_ = lean_box(v___x_2023_);
v___x_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 7, v___x_2084_);
lean_ctor_set(v___x_2081_, 1, v___x_2013_);
lean_ctor_set(v___x_2081_, 0, v___x_2012_);
v___x_2086_ = v___x_2081_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v___x_2013_);
lean_ctor_set(v_reuseFailAlloc_2092_, 2, v_type_2075_);
lean_ctor_set(v_reuseFailAlloc_2092_, 3, v_val_x3f_2076_);
lean_ctor_set(v_reuseFailAlloc_2092_, 4, v_isInstance_x3f_2077_);
lean_ctor_set(v_reuseFailAlloc_2092_, 5, v_isType_x3f_2078_);
lean_ctor_set(v_reuseFailAlloc_2092_, 6, v_isInserted_x3f_2079_);
lean_ctor_set(v_reuseFailAlloc_2092_, 7, v___x_2084_);
v___x_2086_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2086_);
if (v_isShared_2030_ == 0)
{
lean_ctor_set(v___x_2029_, 1, v___x_2031_);
lean_ctor_set(v___x_2029_, 0, v___x_2087_);
v___x_2089_ = v___x_2029_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v___x_2031_);
v___x_2089_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2090_; 
v___x_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
return v___x_2090_;
}
}
}
}
else
{
lean_object* v_type_2097_; lean_object* v_val_x3f_2098_; lean_object* v_isInstance_x3f_2099_; lean_object* v_isType_x3f_2100_; lean_object* v_isRemoved_x3f_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2115_; 
v_type_2097_ = lean_ctor_get(v_h_u2081_2011_, 2);
v_val_x3f_2098_ = lean_ctor_get(v_h_u2081_2011_, 3);
v_isInstance_x3f_2099_ = lean_ctor_get(v_h_u2081_2011_, 4);
v_isType_x3f_2100_ = lean_ctor_get(v_h_u2081_2011_, 5);
v_isRemoved_x3f_2101_ = lean_ctor_get(v_h_u2081_2011_, 7);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_h_u2081_2011_);
if (v_isSharedCheck_2115_ == 0)
{
lean_object* v_unused_2116_; lean_object* v_unused_2117_; lean_object* v_unused_2118_; 
v_unused_2116_ = lean_ctor_get(v_h_u2081_2011_, 6);
lean_dec(v_unused_2116_);
v_unused_2117_ = lean_ctor_get(v_h_u2081_2011_, 1);
lean_dec(v_unused_2117_);
v_unused_2118_ = lean_ctor_get(v_h_u2081_2011_, 0);
lean_dec(v_unused_2118_);
v___x_2103_ = v_h_u2081_2011_;
v_isShared_2104_ = v_isSharedCheck_2115_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_isRemoved_x3f_2101_);
lean_inc(v_isType_x3f_2100_);
lean_inc(v_isInstance_x3f_2099_);
lean_inc(v_val_x3f_2098_);
lean_inc(v_type_2097_);
lean_dec(v_h_u2081_2011_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2115_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2108_; 
v___x_2105_ = lean_box(v___x_2023_);
v___x_2106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2105_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 6, v___x_2106_);
lean_ctor_set(v___x_2103_, 1, v___x_2013_);
lean_ctor_set(v___x_2103_, 0, v___x_2012_);
v___x_2108_ = v___x_2103_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2012_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v___x_2013_);
lean_ctor_set(v_reuseFailAlloc_2114_, 2, v_type_2097_);
lean_ctor_set(v_reuseFailAlloc_2114_, 3, v_val_x3f_2098_);
lean_ctor_set(v_reuseFailAlloc_2114_, 4, v_isInstance_x3f_2099_);
lean_ctor_set(v_reuseFailAlloc_2114_, 5, v_isType_x3f_2100_);
lean_ctor_set(v_reuseFailAlloc_2114_, 6, v___x_2106_);
lean_ctor_set(v_reuseFailAlloc_2114_, 7, v_isRemoved_x3f_2101_);
v___x_2108_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
lean_object* v___x_2109_; lean_object* v___x_2111_; 
v___x_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
if (v_isShared_2030_ == 0)
{
lean_ctor_set(v___x_2029_, 1, v___x_2031_);
lean_ctor_set(v___x_2029_, 0, v___x_2109_);
v___x_2111_ = v___x_2029_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v___x_2109_);
lean_ctor_set(v_reuseFailAlloc_2113_, 1, v___x_2031_);
v___x_2111_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
lean_object* v___x_2112_; 
v___x_2112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2111_);
return v___x_2112_;
}
}
}
}
}
}
else
{
lean_object* v___x_2119_; size_t v___x_2120_; size_t v___x_2121_; 
lean_del_object(v___x_2029_);
lean_dec(v_fst_2026_);
v___x_2119_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0));
v___x_2120_ = ((size_t)1ULL);
v___x_2121_ = lean_usize_add(v_i_2016_, v___x_2120_);
v_i_2016_ = v___x_2121_;
v_b_2017_ = v___x_2119_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___boxed(lean_object* v_ctx_u2080_2124_, lean_object* v_useAfter_2125_, lean_object* v_h_u2081_2126_, lean_object* v___x_2127_, lean_object* v___x_2128_, lean_object* v_as_2129_, lean_object* v_sz_2130_, lean_object* v_i_2131_, lean_object* v_b_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
uint8_t v_useAfter_boxed_2138_; size_t v_sz_boxed_2139_; size_t v_i_boxed_2140_; lean_object* v_res_2141_; 
v_useAfter_boxed_2138_ = lean_unbox(v_useAfter_2125_);
v_sz_boxed_2139_ = lean_unbox_usize(v_sz_2130_);
lean_dec(v_sz_2130_);
v_i_boxed_2140_ = lean_unbox_usize(v_i_2131_);
lean_dec(v_i_2131_);
v_res_2141_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(v_ctx_u2080_2124_, v_useAfter_boxed_2138_, v_h_u2081_2126_, v___x_2127_, v___x_2128_, v_as_2129_, v_sz_boxed_2139_, v_i_boxed_2140_, v_b_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_);
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2135_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
lean_dec_ref(v_as_2129_);
lean_dec_ref(v_ctx_u2080_2124_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(uint8_t v_useAfter_2142_, lean_object* v_ctx_u2080_2143_, lean_object* v_h_u2081_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_){
_start:
{
lean_object* v_names_2150_; lean_object* v_fvarIds_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; size_t v_sz_2154_; size_t v___x_2155_; lean_object* v___x_2156_; 
v_names_2150_ = lean_ctor_get(v_h_u2081_2144_, 0);
v_fvarIds_2151_ = lean_ctor_get(v_h_u2081_2144_, 1);
v___x_2152_ = l_Array_zip___redArg(v_names_2150_, v_fvarIds_2151_);
v___x_2153_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0));
v_sz_2154_ = lean_array_size(v___x_2152_);
v___x_2155_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_2151_);
lean_inc_ref(v_names_2150_);
lean_inc_ref(v_h_u2081_2144_);
v___x_2156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(v_ctx_u2080_2143_, v_useAfter_2142_, v_h_u2081_2144_, v_names_2150_, v_fvarIds_2151_, v___x_2152_, v_sz_2154_, v___x_2155_, v___x_2153_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_);
lean_dec_ref(v___x_2152_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2169_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2159_ = v___x_2156_;
v_isShared_2160_ = v_isSharedCheck_2169_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2156_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2169_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v_fst_2161_; 
v_fst_2161_ = lean_ctor_get(v_a_2157_, 0);
lean_inc(v_fst_2161_);
lean_dec(v_a_2157_);
if (lean_obj_tag(v_fst_2161_) == 0)
{
lean_object* v___x_2163_; 
if (v_isShared_2160_ == 0)
{
lean_ctor_set(v___x_2159_, 0, v_h_u2081_2144_);
v___x_2163_ = v___x_2159_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_h_u2081_2144_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
else
{
lean_object* v_val_2165_; lean_object* v___x_2167_; 
lean_dec_ref(v_h_u2081_2144_);
v_val_2165_ = lean_ctor_get(v_fst_2161_, 0);
lean_inc(v_val_2165_);
lean_dec_ref_known(v_fst_2161_, 1);
if (v_isShared_2160_ == 0)
{
lean_ctor_set(v___x_2159_, 0, v_val_2165_);
v___x_2167_ = v___x_2159_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_val_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
lean_dec_ref(v_h_u2081_2144_);
v_a_2170_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2156_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2156_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle___boxed(lean_object* v_useAfter_2178_, lean_object* v_ctx_u2080_2179_, lean_object* v_h_u2081_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_){
_start:
{
uint8_t v_useAfter_boxed_2186_; lean_object* v_res_2187_; 
v_useAfter_boxed_2186_ = lean_unbox(v_useAfter_2178_);
v_res_2187_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(v_useAfter_boxed_2186_, v_ctx_u2080_2179_, v_h_u2081_2180_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_);
lean_dec(v_a_2184_);
lean_dec_ref(v_a_2183_);
lean_dec(v_a_2182_);
lean_dec_ref(v_a_2181_);
lean_dec_ref(v_ctx_u2080_2179_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(uint8_t v_useAfter_2188_, lean_object* v_lctx_u2080_2189_, size_t v_sz_2190_, size_t v_i_2191_, lean_object* v_bs_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
uint8_t v___x_2198_; 
v___x_2198_ = lean_usize_dec_lt(v_i_2191_, v_sz_2190_);
if (v___x_2198_ == 0)
{
lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2199_ = l_unsafeCast___redArg(v_bs_2192_);
lean_dec_ref(v_bs_2192_);
v___x_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2199_);
return v___x_2200_;
}
else
{
lean_object* v_v_2201_; lean_object* v___x_2202_; lean_object* v_bs_x27_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v_v_2201_ = lean_array_uget(v_bs_2192_, v_i_2191_);
v___x_2202_ = lean_unsigned_to_nat(0u);
v_bs_x27_2203_ = lean_array_uset(v_bs_2192_, v_i_2191_, v___x_2202_);
v___x_2204_ = l_unsafeCast___redArg(v_v_2201_);
lean_dec(v_v_2201_);
v___x_2205_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(v_useAfter_2188_, v_lctx_u2080_2189_, v___x_2204_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; size_t v___x_2207_; size_t v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_a_2206_);
lean_dec_ref_known(v___x_2205_, 1);
v___x_2207_ = ((size_t)1ULL);
v___x_2208_ = lean_usize_add(v_i_2191_, v___x_2207_);
v___x_2209_ = l_unsafeCast___redArg(v_a_2206_);
lean_dec(v_a_2206_);
v___x_2210_ = lean_array_uset(v_bs_x27_2203_, v_i_2191_, v___x_2209_);
v_i_2191_ = v___x_2208_;
v_bs_2192_ = v___x_2210_;
goto _start;
}
else
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
lean_dec_ref(v_bs_x27_2203_);
v_a_2212_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2214_ = v___x_2205_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2205_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2212_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0___boxed(lean_object* v_useAfter_2220_, lean_object* v_lctx_u2080_2221_, lean_object* v_sz_2222_, lean_object* v_i_2223_, lean_object* v_bs_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
uint8_t v_useAfter_boxed_2230_; size_t v_sz_boxed_2231_; size_t v_i_boxed_2232_; lean_object* v_res_2233_; 
v_useAfter_boxed_2230_ = lean_unbox(v_useAfter_2220_);
v_sz_boxed_2231_ = lean_unbox_usize(v_sz_2222_);
lean_dec(v_sz_2222_);
v_i_boxed_2232_ = lean_unbox_usize(v_i_2223_);
lean_dec(v_i_2223_);
v_res_2233_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(v_useAfter_boxed_2230_, v_lctx_u2080_2221_, v_sz_boxed_2231_, v_i_boxed_2232_, v_bs_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec_ref(v_lctx_u2080_2221_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(uint8_t v_useAfter_2234_, lean_object* v_lctx_u2080_2235_, lean_object* v_hs_u2081_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_){
_start:
{
size_t v_sz_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_178__overap_2248_; lean_object* v___x_2249_; 
v_sz_2242_ = lean_array_size(v_hs_u2081_2236_);
v___x_2243_ = l_unsafeCast___redArg(v_hs_u2081_2236_);
v___x_2244_ = lean_box(v_useAfter_2234_);
v___x_2245_ = lean_box_usize(v_sz_2242_);
v___x_2246_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed__const__1));
v___x_2247_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0___boxed), 10, 5);
lean_closure_set(v___x_2247_, 0, v___x_2244_);
lean_closure_set(v___x_2247_, 1, v_lctx_u2080_2235_);
lean_closure_set(v___x_2247_, 2, v___x_2245_);
lean_closure_set(v___x_2247_, 3, v___x_2246_);
lean_closure_set(v___x_2247_, 4, v___x_2243_);
v___x_178__overap_2248_ = l_unsafeCast___redArg(v___x_2247_);
lean_dec_ref(v___x_2247_);
lean_inc(v_a_2240_);
lean_inc_ref(v_a_2239_);
lean_inc(v_a_2238_);
lean_inc_ref(v_a_2237_);
v___x_2249_ = lean_apply_5(v___x_178__overap_2248_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_, lean_box(0));
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses___boxed(lean_object* v_useAfter_2250_, lean_object* v_lctx_u2080_2251_, lean_object* v_hs_u2081_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_){
_start:
{
uint8_t v_useAfter_boxed_2258_; lean_object* v_res_2259_; 
v_useAfter_boxed_2258_ = lean_unbox(v_useAfter_2250_);
v_res_2259_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(v_useAfter_boxed_2258_, v_lctx_u2080_2251_, v_hs_u2081_2252_, v_a_2253_, v_a_2254_, v_a_2255_, v_a_2256_);
lean_dec(v_a_2256_);
lean_dec_ref(v_a_2255_);
lean_dec(v_a_2254_);
lean_dec_ref(v_a_2253_);
lean_dec_ref(v_hs_u2081_2252_);
return v_res_2259_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2(void){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1));
v___x_2265_ = l_Lean_stringToMessageData(v___x_2264_);
return v___x_2265_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4(void){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3));
v___x_2268_ = l_Lean_stringToMessageData(v___x_2267_);
return v___x_2268_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5));
v___x_2271_ = l_Lean_stringToMessageData(v___x_2270_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(uint8_t v_useAfter_2272_, lean_object* v_g_u2080_2273_, lean_object* v_i_u2081_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_, lean_object* v_a_2278_){
_start:
{
lean_object* v___x_2280_; lean_object* v_mctx_2281_; lean_object* v___x_2282_; 
v___x_2280_ = lean_st_ref_get(v_a_2276_);
v_mctx_2281_ = lean_ctor_get(v___x_2280_, 0);
lean_inc_ref(v_mctx_2281_);
lean_dec(v___x_2280_);
v___x_2282_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2281_, v_g_u2080_2273_);
lean_dec_ref(v_mctx_2281_);
if (lean_obj_tag(v___x_2282_) == 1)
{
lean_object* v_toCold_2283_; lean_object* v_val_2284_; lean_object* v_options_2285_; lean_object* v_lctx_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v_toInteractiveGoalCore_2290_; lean_object* v_fst_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2388_; 
v_toCold_2283_ = lean_ctor_get(v_a_2277_, 0);
v_val_2284_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_val_2284_);
lean_dec_ref_known(v___x_2282_, 1);
v_options_2285_ = lean_ctor_get(v_toCold_2283_, 2);
v_lctx_2286_ = lean_ctor_get(v_val_2284_, 1);
lean_inc_ref(v_lctx_2286_);
lean_dec(v_val_2284_);
v___x_2287_ = lean_box(1);
lean_inc_ref(v_options_2285_);
v___x_2288_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2288_, 0, v_options_2285_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
lean_ctor_set(v___x_2288_, 2, v___x_2287_);
v___x_2289_ = l_Lean_LocalContext_sanitizeNames(v_lctx_2286_, v___x_2288_);
v_toInteractiveGoalCore_2290_ = lean_ctor_get(v_i_u2081_2274_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2290_);
v_fst_2291_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2388_ == 0)
{
lean_object* v_unused_2389_; 
v_unused_2389_ = lean_ctor_get(v___x_2289_, 1);
lean_dec(v_unused_2389_);
v___x_2293_ = v___x_2289_;
v_isShared_2294_ = v_isSharedCheck_2388_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_fst_2291_);
lean_dec(v___x_2289_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2388_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v_userName_x3f_2295_; lean_object* v_goalPrefix_2296_; lean_object* v_mvarId_2297_; lean_object* v_isRemoved_x3f_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2385_; 
v_userName_x3f_2295_ = lean_ctor_get(v_i_u2081_2274_, 1);
v_goalPrefix_2296_ = lean_ctor_get(v_i_u2081_2274_, 2);
v_mvarId_2297_ = lean_ctor_get(v_i_u2081_2274_, 3);
v_isRemoved_x3f_2298_ = lean_ctor_get(v_i_u2081_2274_, 5);
v_isSharedCheck_2385_ = !lean_is_exclusive(v_i_u2081_2274_);
if (v_isSharedCheck_2385_ == 0)
{
lean_object* v_unused_2386_; lean_object* v_unused_2387_; 
v_unused_2386_ = lean_ctor_get(v_i_u2081_2274_, 4);
lean_dec(v_unused_2386_);
v_unused_2387_ = lean_ctor_get(v_i_u2081_2274_, 0);
lean_dec(v_unused_2387_);
v___x_2300_ = v_i_u2081_2274_;
v_isShared_2301_ = v_isSharedCheck_2385_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_isRemoved_x3f_2298_);
lean_inc(v_mvarId_2297_);
lean_inc(v_goalPrefix_2296_);
lean_inc(v_userName_x3f_2295_);
lean_dec(v_i_u2081_2274_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2385_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v_hyps_2302_; lean_object* v_type_2303_; lean_object* v_ctx_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2384_; 
v_hyps_2302_ = lean_ctor_get(v_toInteractiveGoalCore_2290_, 0);
v_type_2303_ = lean_ctor_get(v_toInteractiveGoalCore_2290_, 1);
v_ctx_2304_ = lean_ctor_get(v_toInteractiveGoalCore_2290_, 2);
v_isSharedCheck_2384_ = !lean_is_exclusive(v_toInteractiveGoalCore_2290_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2306_ = v_toInteractiveGoalCore_2290_;
v_isShared_2307_ = v_isSharedCheck_2384_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_ctx_2304_);
lean_inc(v_type_2303_);
lean_inc(v_hyps_2302_);
lean_dec(v_toInteractiveGoalCore_2290_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2384_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; 
v___x_2308_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(v_useAfter_2272_, v_fst_2291_, v_hyps_2302_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_);
lean_dec_ref(v_hyps_2302_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2308_, 1);
v___x_2310_ = l_Lean_Expr_mvar___override(v_g_u2080_2273_);
lean_inc(v_a_2278_);
lean_inc_ref(v_a_2277_);
lean_inc(v_a_2276_);
lean_inc_ref(v_a_2275_);
v___x_2311_ = lean_infer_type(v___x_2310_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_);
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v_a_2312_; lean_object* v___x_2313_; lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2367_; 
v_a_2312_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_a_2312_);
lean_dec_ref_known(v___x_2311_, 1);
v___x_2313_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_a_2312_, v_a_2276_);
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2316_ = v___x_2313_;
v_isShared_2317_ = v_isSharedCheck_2367_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2313_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2367_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2318_; lean_object* v_mctx_2319_; lean_object* v___x_2320_; 
v___x_2318_ = lean_st_ref_get(v_a_2276_);
v_mctx_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc_ref(v_mctx_2319_);
lean_dec(v___x_2318_);
v___x_2320_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2319_, v_mvarId_2297_);
lean_dec_ref(v_mctx_2319_);
if (lean_obj_tag(v___x_2320_) == 1)
{
lean_object* v_val_2321_; lean_object* v_type_2322_; lean_object* v___x_2323_; lean_object* v_a_2324_; lean_object* v___x_2325_; 
lean_del_object(v___x_2316_);
lean_del_object(v___x_2293_);
v_val_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_val_2321_);
lean_dec_ref_known(v___x_2320_, 1);
v_type_2322_ = lean_ctor_get(v_val_2321_, 2);
lean_inc_ref(v_type_2322_);
lean_dec(v_val_2321_);
v___x_2323_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_type_2322_, v_a_2276_);
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
lean_inc(v_a_2324_);
lean_dec_ref(v___x_2323_);
v___x_2325_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_a_2314_, v_a_2324_, v_useAfter_2272_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_a_2326_; lean_object* v___x_2327_; 
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
lean_inc(v_a_2326_);
lean_dec_ref_known(v___x_2325_, 1);
v___x_2327_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_2272_, v_a_2326_, v_type_2303_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2342_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2330_ = v___x_2327_;
v_isShared_2331_ = v_isSharedCheck_2342_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2327_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2342_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 1, v_a_2328_);
lean_ctor_set(v___x_2306_, 0, v_a_2309_);
v___x_2333_ = v___x_2306_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2309_);
lean_ctor_set(v_reuseFailAlloc_2341_, 1, v_a_2328_);
lean_ctor_set(v_reuseFailAlloc_2341_, 2, v_ctx_2304_);
v___x_2333_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
lean_object* v___x_2334_; lean_object* v___x_2336_; 
v___x_2334_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0));
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 4, v___x_2334_);
lean_ctor_set(v___x_2300_, 0, v___x_2333_);
v___x_2336_ = v___x_2300_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v___x_2333_);
lean_ctor_set(v_reuseFailAlloc_2340_, 1, v_userName_x3f_2295_);
lean_ctor_set(v_reuseFailAlloc_2340_, 2, v_goalPrefix_2296_);
lean_ctor_set(v_reuseFailAlloc_2340_, 3, v_mvarId_2297_);
lean_ctor_set(v_reuseFailAlloc_2340_, 4, v___x_2334_);
lean_ctor_set(v_reuseFailAlloc_2340_, 5, v_isRemoved_x3f_2298_);
v___x_2336_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
lean_object* v___x_2338_; 
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v___x_2336_);
v___x_2338_ = v___x_2330_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v___x_2336_);
v___x_2338_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
return v___x_2338_;
}
}
}
}
}
else
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
lean_dec(v_a_2309_);
lean_del_object(v___x_2306_);
lean_dec_ref(v_ctx_2304_);
lean_del_object(v___x_2300_);
lean_dec(v_isRemoved_x3f_2298_);
lean_dec(v_mvarId_2297_);
lean_dec_ref(v_goalPrefix_2296_);
lean_dec(v_userName_x3f_2295_);
v_a_2343_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2345_ = v___x_2327_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2327_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2358_; 
lean_dec(v_a_2309_);
lean_del_object(v___x_2306_);
lean_dec_ref(v_ctx_2304_);
lean_dec_ref(v_type_2303_);
lean_del_object(v___x_2300_);
lean_dec(v_isRemoved_x3f_2298_);
lean_dec(v_mvarId_2297_);
lean_dec_ref(v_goalPrefix_2296_);
lean_dec(v_userName_x3f_2295_);
v_a_2351_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2353_ = v___x_2325_;
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_a_2351_);
lean_dec(v___x_2325_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2358_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
lean_object* v___x_2356_; 
if (v_isShared_2354_ == 0)
{
v___x_2356_ = v___x_2353_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_a_2351_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
else
{
lean_object* v___x_2359_; lean_object* v___x_2361_; 
lean_dec(v___x_2320_);
lean_dec(v_a_2314_);
lean_dec(v_a_2309_);
lean_del_object(v___x_2306_);
lean_dec_ref(v_ctx_2304_);
lean_dec_ref(v_type_2303_);
lean_del_object(v___x_2300_);
lean_dec(v_isRemoved_x3f_2298_);
lean_dec_ref(v_goalPrefix_2296_);
lean_dec(v_userName_x3f_2295_);
v___x_2359_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2);
if (v_isShared_2317_ == 0)
{
lean_ctor_set_tag(v___x_2316_, 1);
lean_ctor_set(v___x_2316_, 0, v_mvarId_2297_);
v___x_2361_ = v___x_2316_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_mvarId_2297_);
v___x_2361_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2363_; 
if (v_isShared_2294_ == 0)
{
lean_ctor_set_tag(v___x_2293_, 7);
lean_ctor_set(v___x_2293_, 1, v___x_2361_);
lean_ctor_set(v___x_2293_, 0, v___x_2359_);
v___x_2363_ = v___x_2293_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2359_);
lean_ctor_set(v_reuseFailAlloc_2365_, 1, v___x_2361_);
v___x_2363_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
lean_object* v___x_2364_; 
v___x_2364_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2363_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_);
return v___x_2364_;
}
}
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_dec(v_a_2309_);
lean_del_object(v___x_2306_);
lean_dec_ref(v_ctx_2304_);
lean_dec_ref(v_type_2303_);
lean_del_object(v___x_2300_);
lean_dec(v_isRemoved_x3f_2298_);
lean_dec(v_mvarId_2297_);
lean_dec_ref(v_goalPrefix_2296_);
lean_dec(v_userName_x3f_2295_);
lean_del_object(v___x_2293_);
v_a_2368_ = lean_ctor_get(v___x_2311_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2311_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2311_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_del_object(v___x_2306_);
lean_dec_ref(v_ctx_2304_);
lean_dec_ref(v_type_2303_);
lean_del_object(v___x_2300_);
lean_dec(v_isRemoved_x3f_2298_);
lean_dec(v_mvarId_2297_);
lean_dec_ref(v_goalPrefix_2296_);
lean_dec(v_userName_x3f_2295_);
lean_del_object(v___x_2293_);
lean_dec(v_g_u2080_2273_);
v_a_2376_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2308_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2308_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
lean_dec(v___x_2282_);
lean_dec_ref(v_i_u2081_2274_);
v___x_2390_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4);
v___x_2391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2391_, 0, v_g_u2080_2273_);
v___x_2392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2390_);
lean_ctor_set(v___x_2392_, 1, v___x_2391_);
v___x_2393_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6);
v___x_2394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2392_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2394_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_);
return v___x_2395_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___boxed(lean_object* v_useAfter_2396_, lean_object* v_g_u2080_2397_, lean_object* v_i_u2081_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_){
_start:
{
uint8_t v_useAfter_boxed_2404_; lean_object* v_res_2405_; 
v_useAfter_boxed_2404_ = lean_unbox(v_useAfter_2396_);
v_res_2405_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(v_useAfter_boxed_2404_, v_g_u2080_2397_, v_i_u2081_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
lean_dec(v_a_2402_);
lean_dec_ref(v_a_2401_);
lean_dec(v_a_2400_);
lean_dec_ref(v_a_2399_);
return v_res_2405_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(lean_object* v_opts_2406_, lean_object* v_opt_2407_){
_start:
{
lean_object* v_name_2408_; lean_object* v_defValue_2409_; lean_object* v_map_2410_; lean_object* v___x_2411_; 
v_name_2408_ = lean_ctor_get(v_opt_2407_, 0);
v_defValue_2409_ = lean_ctor_get(v_opt_2407_, 1);
v_map_2410_ = lean_ctor_get(v_opts_2406_, 0);
v___x_2411_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2410_, v_name_2408_);
if (lean_obj_tag(v___x_2411_) == 0)
{
uint8_t v___x_2412_; 
v___x_2412_ = lean_unbox(v_defValue_2409_);
return v___x_2412_;
}
else
{
lean_object* v_val_2413_; 
v_val_2413_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_val_2413_);
lean_dec_ref_known(v___x_2411_, 1);
if (lean_obj_tag(v_val_2413_) == 1)
{
uint8_t v_v_2414_; 
v_v_2414_ = lean_ctor_get_uint8(v_val_2413_, 0);
lean_dec_ref_known(v_val_2413_, 0);
return v_v_2414_;
}
else
{
uint8_t v___x_2415_; 
lean_dec(v_val_2413_);
v___x_2415_ = lean_unbox(v_defValue_2409_);
return v___x_2415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0___boxed(lean_object* v_opts_2416_, lean_object* v_opt_2417_){
_start:
{
uint8_t v_res_2418_; lean_object* v_r_2419_; 
v_res_2418_ = l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(v_opts_2416_, v_opt_2417_);
lean_dec_ref(v_opt_2417_);
lean_dec_ref(v_opts_2416_);
v_r_2419_ = lean_box(v_res_2418_);
return v_r_2419_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(lean_object* v_x_2420_, lean_object* v_x_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
if (lean_obj_tag(v_x_2421_) == 0)
{
lean_object* v___x_2427_; 
v___x_2427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2427_, 0, v_x_2420_);
return v___x_2427_;
}
else
{
lean_object* v_head_2428_; lean_object* v_tail_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
v_head_2428_ = lean_ctor_get(v_x_2421_, 0);
lean_inc_n(v_head_2428_, 2);
v_tail_2429_ = lean_ctor_get(v_x_2421_, 1);
lean_inc(v_tail_2429_);
lean_dec_ref_known(v_x_2421_, 2);
v___x_2430_ = l_Lean_Expr_mvar___override(v_head_2428_);
v___x_2431_ = l_Lean_Meta_getMVars(v___x_2430_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v_a_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
lean_inc(v_a_2432_);
lean_dec_ref_known(v___x_2431_, 1);
v___x_2433_ = l_Lean_MVarIdSet_ofArray(v_a_2432_);
lean_dec(v_a_2432_);
v___x_2434_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_head_2428_, v___x_2433_, v_x_2420_);
v_x_2420_ = v___x_2434_;
v_x_2421_ = v_tail_2429_;
goto _start;
}
else
{
lean_object* v_a_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2443_; 
lean_dec(v_tail_2429_);
lean_dec(v_head_2428_);
lean_dec(v_x_2420_);
v_a_2436_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2438_ = v___x_2431_;
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_a_2436_);
lean_dec(v___x_2431_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2441_; 
if (v_isShared_2439_ == 0)
{
v___x_2441_ = v___x_2438_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v_a_2436_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1___boxed(lean_object* v_x_2444_, lean_object* v_x_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(v_x_2444_, v_x_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_);
lean_dec(v___y_2449_);
lean_dec_ref(v___y_2448_);
lean_dec(v___y_2447_);
lean_dec_ref(v___y_2446_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(lean_object* v_lctx_2452_, lean_object* v_localInsts_2453_, lean_object* v_x_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2452_, v_localInsts_2453_, v_x_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2468_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2463_ = v___x_2460_;
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v___x_2460_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2466_; 
if (v_isShared_2464_ == 0)
{
v___x_2466_ = v___x_2463_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_a_2461_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
v_a_2469_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2460_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2460_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg___boxed(lean_object* v_lctx_2477_, lean_object* v_localInsts_2478_, lean_object* v_x_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(v_lctx_2477_, v_localInsts_2478_, v_x_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
return v_res_2485_;
}
}
static lean_object* _init_l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = ((lean_object*)(l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0));
v___x_2488_ = l_Lean_stringToMessageData(v___x_2487_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(lean_object* v_goal_2489_, lean_object* v_action_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v___x_2496_; lean_object* v_mctx_2497_; lean_object* v___x_2498_; 
v___x_2496_ = lean_st_ref_get(v___y_2492_);
v_mctx_2497_ = lean_ctor_get(v___x_2496_, 0);
lean_inc_ref(v_mctx_2497_);
lean_dec(v___x_2496_);
v___x_2498_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2497_, v_goal_2489_);
lean_dec_ref(v_mctx_2497_);
if (lean_obj_tag(v___x_2498_) == 1)
{
lean_object* v_toCold_2499_; lean_object* v_val_2500_; lean_object* v_options_2501_; lean_object* v_lctx_2502_; lean_object* v_localInstances_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v_fst_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
lean_dec(v_goal_2489_);
v_toCold_2499_ = lean_ctor_get(v___y_2493_, 0);
v_val_2500_ = lean_ctor_get(v___x_2498_, 0);
lean_inc(v_val_2500_);
lean_dec_ref_known(v___x_2498_, 1);
v_options_2501_ = lean_ctor_get(v_toCold_2499_, 2);
v_lctx_2502_ = lean_ctor_get(v_val_2500_, 1);
v_localInstances_2503_ = lean_ctor_get(v_val_2500_, 4);
lean_inc_ref(v_localInstances_2503_);
v___x_2504_ = lean_box(1);
lean_inc_ref(v_options_2501_);
v___x_2505_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2505_, 0, v_options_2501_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
lean_ctor_set(v___x_2505_, 2, v___x_2504_);
lean_inc_ref(v_lctx_2502_);
v___x_2506_ = l_Lean_LocalContext_sanitizeNames(v_lctx_2502_, v___x_2505_);
v_fst_2507_ = lean_ctor_get(v___x_2506_, 0);
lean_inc_n(v_fst_2507_, 2);
lean_dec_ref(v___x_2506_);
v___x_2508_ = lean_apply_2(v_action_2490_, v_fst_2507_, v_val_2500_);
v___x_2509_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(v_fst_2507_, v_localInstances_2503_, v___x_2508_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_);
return v___x_2509_;
}
else
{
lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
lean_dec(v___x_2498_);
lean_dec_ref(v_action_2490_);
v___x_2510_ = lean_obj_once(&l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1, &l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1_once, _init_l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1);
v___x_2511_ = l_Lean_MessageData_ofName(v_goal_2489_);
v___x_2512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2510_);
lean_ctor_set(v___x_2512_, 1, v___x_2511_);
v___x_2513_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2512_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_);
return v___x_2513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___boxed(lean_object* v_goal_2514_, lean_object* v_action_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_goal_2514_, v_action_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_);
lean_dec(v___y_2519_);
lean_dec_ref(v___y_2518_);
lean_dec(v___y_2517_);
lean_dec_ref(v___y_2516_);
return v_res_2521_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(lean_object* v___x_2522_, lean_object* v_x_2523_){
_start:
{
if (lean_obj_tag(v_x_2523_) == 0)
{
uint8_t v___x_2524_; 
v___x_2524_ = 0;
return v___x_2524_;
}
else
{
lean_object* v_head_2525_; lean_object* v_tail_2526_; uint8_t v___x_2527_; 
v_head_2525_ = lean_ctor_get(v_x_2523_, 0);
v_tail_2526_ = lean_ctor_get(v_x_2523_, 1);
v___x_2527_ = l_Lean_instBEqMVarId_beq(v_head_2525_, v___x_2522_);
if (v___x_2527_ == 0)
{
v_x_2523_ = v_tail_2526_;
goto _start;
}
else
{
return v___x_2527_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4___boxed(lean_object* v___x_2529_, lean_object* v_x_2530_){
_start:
{
uint8_t v_res_2531_; lean_object* v_r_2532_; 
v_res_2531_ = l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(v___x_2529_, v_x_2530_);
lean_dec(v_x_2530_);
lean_dec(v___x_2529_);
v_r_2532_ = lean_box(v_res_2531_);
return v_r_2532_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(lean_object* v_t_2533_, lean_object* v_k_2534_){
_start:
{
if (lean_obj_tag(v_t_2533_) == 0)
{
lean_object* v_k_2535_; lean_object* v_v_2536_; lean_object* v_l_2537_; lean_object* v_r_2538_; uint8_t v___x_2539_; 
v_k_2535_ = lean_ctor_get(v_t_2533_, 1);
v_v_2536_ = lean_ctor_get(v_t_2533_, 2);
v_l_2537_ = lean_ctor_get(v_t_2533_, 3);
v_r_2538_ = lean_ctor_get(v_t_2533_, 4);
v___x_2539_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2534_, v_k_2535_);
switch(v___x_2539_)
{
case 0:
{
v_t_2533_ = v_l_2537_;
goto _start;
}
case 1:
{
lean_object* v___x_2541_; 
lean_inc(v_v_2536_);
v___x_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2541_, 0, v_v_2536_);
return v___x_2541_;
}
default: 
{
v_t_2533_ = v_r_2538_;
goto _start;
}
}
}
else
{
lean_object* v___x_2543_; 
v___x_2543_ = lean_box(0);
return v___x_2543_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg___boxed(lean_object* v_t_2544_, lean_object* v_k_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(v_t_2544_, v_k_2545_);
lean_dec(v_k_2545_);
lean_dec(v_t_2544_);
return v_res_2546_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(lean_object* v_k_2547_, lean_object* v_t_2548_){
_start:
{
if (lean_obj_tag(v_t_2548_) == 0)
{
lean_object* v_k_2549_; lean_object* v_l_2550_; lean_object* v_r_2551_; uint8_t v___x_2552_; 
v_k_2549_ = lean_ctor_get(v_t_2548_, 1);
v_l_2550_ = lean_ctor_get(v_t_2548_, 3);
v_r_2551_ = lean_ctor_get(v_t_2548_, 4);
v___x_2552_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2547_, v_k_2549_);
switch(v___x_2552_)
{
case 0:
{
v_t_2548_ = v_l_2550_;
goto _start;
}
case 1:
{
uint8_t v___x_2554_; 
v___x_2554_ = 1;
return v___x_2554_;
}
default: 
{
v_t_2548_ = v_r_2551_;
goto _start;
}
}
}
else
{
uint8_t v___x_2556_; 
v___x_2556_ = 0;
return v___x_2556_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg___boxed(lean_object* v_k_2557_, lean_object* v_t_2558_){
_start:
{
uint8_t v_res_2559_; lean_object* v_r_2560_; 
v_res_2559_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(v_k_2557_, v_t_2558_);
lean_dec(v_t_2558_);
lean_dec(v_k_2557_);
v_r_2560_ = lean_box(v_res_2559_);
return v_r_2560_;
}
}
LEAN_EXPORT uint8_t l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(lean_object* v_a_2561_, uint8_t v___x_2562_, lean_object* v_before_2563_, lean_object* v_after_2564_){
_start:
{
lean_object* v___x_2565_; 
v___x_2565_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(v_a_2561_, v_before_2563_);
if (lean_obj_tag(v___x_2565_) == 0)
{
return v___x_2562_;
}
else
{
lean_object* v_val_2566_; uint8_t v___x_2567_; 
v_val_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_val_2566_);
lean_dec_ref_known(v___x_2565_, 1);
v___x_2567_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(v_after_2564_, v_val_2566_);
lean_dec(v_val_2566_);
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed(lean_object* v_a_2568_, lean_object* v___x_2569_, lean_object* v_before_2570_, lean_object* v_after_2571_){
_start:
{
uint8_t v___x_3283__boxed_2572_; uint8_t v_res_2573_; lean_object* v_r_2574_; 
v___x_3283__boxed_2572_ = lean_unbox(v___x_2569_);
v_res_2573_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_a_2568_, v___x_3283__boxed_2572_, v_before_2570_, v_after_2571_);
lean_dec(v_after_2571_);
lean_dec(v_before_2570_);
lean_dec(v_a_2568_);
v_r_2574_ = lean_box(v_res_2573_);
return v_r_2574_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(uint8_t v_useAfter_2575_, lean_object* v_a_2576_, lean_object* v___x_2577_, lean_object* v_x_2578_){
_start:
{
if (lean_obj_tag(v_x_2578_) == 0)
{
lean_object* v___x_2579_; 
v___x_2579_ = lean_box(0);
return v___x_2579_;
}
else
{
lean_object* v_head_2580_; lean_object* v_tail_2581_; uint8_t v___y_2583_; uint8_t v___x_2586_; 
v_head_2580_ = lean_ctor_get(v_x_2578_, 0);
v_tail_2581_ = lean_ctor_get(v_x_2578_, 1);
v___x_2586_ = 0;
if (v_useAfter_2575_ == 0)
{
uint8_t v___x_2587_; 
v___x_2587_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_a_2576_, v___x_2586_, v___x_2577_, v_head_2580_);
v___y_2583_ = v___x_2587_;
goto v___jp_2582_;
}
else
{
uint8_t v___x_2588_; 
v___x_2588_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_a_2576_, v___x_2586_, v_head_2580_, v___x_2577_);
v___y_2583_ = v___x_2588_;
goto v___jp_2582_;
}
v___jp_2582_:
{
if (v___y_2583_ == 0)
{
v_x_2578_ = v_tail_2581_;
goto _start;
}
else
{
lean_object* v___x_2585_; 
lean_inc(v_head_2580_);
v___x_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2585_, 0, v_head_2580_);
return v___x_2585_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___boxed(lean_object* v_useAfter_2589_, lean_object* v_a_2590_, lean_object* v___x_2591_, lean_object* v_x_2592_){
_start:
{
uint8_t v_useAfter_boxed_2593_; lean_object* v_res_2594_; 
v_useAfter_boxed_2593_ = lean_unbox(v_useAfter_2589_);
v_res_2594_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(v_useAfter_boxed_2593_, v_a_2590_, v___x_2591_, v_x_2592_);
lean_dec(v_x_2592_);
lean_dec(v___x_2591_);
lean_dec(v_a_2590_);
return v_res_2594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0(lean_object* v_mvarId_2595_, lean_object* v___y_2596_, uint8_t v_useAfter_2597_, lean_object* v_a_2598_, lean_object* v___x_2599_, uint8_t v___x_2600_, lean_object* v_toInteractiveGoalCore_2601_, lean_object* v_userName_x3f_2602_, lean_object* v_goalPrefix_2603_, lean_object* v_isInserted_x3f_2604_, lean_object* v_isRemoved_x3f_2605_, lean_object* v___lctx_u2081_2606_, lean_object* v___md_u2081_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
uint8_t v___x_2613_; 
v___x_2613_ = l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(v_mvarId_2595_, v___y_2596_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; 
v___x_2614_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(v_useAfter_2597_, v_a_2598_, v_mvarId_2595_, v___y_2596_);
if (lean_obj_tag(v___x_2614_) == 1)
{
lean_object* v_val_2615_; lean_object* v___x_2616_; 
lean_dec(v_isRemoved_x3f_2605_);
lean_dec(v_isInserted_x3f_2604_);
lean_dec_ref(v_goalPrefix_2603_);
lean_dec(v_userName_x3f_2602_);
lean_dec_ref(v_toInteractiveGoalCore_2601_);
lean_dec(v_mvarId_2595_);
v_val_2615_ = lean_ctor_get(v___x_2614_, 0);
lean_inc(v_val_2615_);
lean_dec_ref_known(v___x_2614_, 1);
v___x_2616_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(v_useAfter_2597_, v_val_2615_, v___x_2599_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_);
return v___x_2616_;
}
else
{
lean_dec(v___x_2614_);
lean_dec(v___x_2599_);
if (v_useAfter_2597_ == 0)
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
lean_dec(v_isRemoved_x3f_2605_);
v___x_2617_ = lean_box(v___x_2600_);
v___x_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2617_);
v___x_2619_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2619_, 0, v_toInteractiveGoalCore_2601_);
lean_ctor_set(v___x_2619_, 1, v_userName_x3f_2602_);
lean_ctor_set(v___x_2619_, 2, v_goalPrefix_2603_);
lean_ctor_set(v___x_2619_, 3, v_mvarId_2595_);
lean_ctor_set(v___x_2619_, 4, v_isInserted_x3f_2604_);
lean_ctor_set(v___x_2619_, 5, v___x_2618_);
v___x_2620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2619_);
return v___x_2620_;
}
else
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
lean_dec(v_isInserted_x3f_2604_);
v___x_2621_ = lean_box(v___x_2600_);
v___x_2622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2622_, 0, v___x_2621_);
v___x_2623_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2623_, 0, v_toInteractiveGoalCore_2601_);
lean_ctor_set(v___x_2623_, 1, v_userName_x3f_2602_);
lean_ctor_set(v___x_2623_, 2, v_goalPrefix_2603_);
lean_ctor_set(v___x_2623_, 3, v_mvarId_2595_);
lean_ctor_set(v___x_2623_, 4, v___x_2622_);
lean_ctor_set(v___x_2623_, 5, v_isRemoved_x3f_2605_);
v___x_2624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2623_);
return v___x_2624_;
}
}
}
else
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
lean_dec(v_isInserted_x3f_2604_);
lean_dec(v___x_2599_);
v___x_2625_ = lean_box(0);
v___x_2626_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2626_, 0, v_toInteractiveGoalCore_2601_);
lean_ctor_set(v___x_2626_, 1, v_userName_x3f_2602_);
lean_ctor_set(v___x_2626_, 2, v_goalPrefix_2603_);
lean_ctor_set(v___x_2626_, 3, v_mvarId_2595_);
lean_ctor_set(v___x_2626_, 4, v___x_2625_);
lean_ctor_set(v___x_2626_, 5, v_isRemoved_x3f_2605_);
v___x_2627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2626_);
return v___x_2627_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed(lean_object** _args){
lean_object* v_mvarId_2628_ = _args[0];
lean_object* v___y_2629_ = _args[1];
lean_object* v_useAfter_2630_ = _args[2];
lean_object* v_a_2631_ = _args[3];
lean_object* v___x_2632_ = _args[4];
lean_object* v___x_2633_ = _args[5];
lean_object* v_toInteractiveGoalCore_2634_ = _args[6];
lean_object* v_userName_x3f_2635_ = _args[7];
lean_object* v_goalPrefix_2636_ = _args[8];
lean_object* v_isInserted_x3f_2637_ = _args[9];
lean_object* v_isRemoved_x3f_2638_ = _args[10];
lean_object* v___lctx_u2081_2639_ = _args[11];
lean_object* v___md_u2081_2640_ = _args[12];
lean_object* v___y_2641_ = _args[13];
lean_object* v___y_2642_ = _args[14];
lean_object* v___y_2643_ = _args[15];
lean_object* v___y_2644_ = _args[16];
lean_object* v___y_2645_ = _args[17];
_start:
{
uint8_t v_useAfter_boxed_2646_; uint8_t v___x_3326__boxed_2647_; lean_object* v_res_2648_; 
v_useAfter_boxed_2646_ = lean_unbox(v_useAfter_2630_);
v___x_3326__boxed_2647_ = lean_unbox(v___x_2633_);
v_res_2648_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0(v_mvarId_2628_, v___y_2629_, v_useAfter_boxed_2646_, v_a_2631_, v___x_2632_, v___x_3326__boxed_2647_, v_toInteractiveGoalCore_2634_, v_userName_x3f_2635_, v_goalPrefix_2636_, v_isInserted_x3f_2637_, v_isRemoved_x3f_2638_, v___lctx_u2081_2639_, v___md_u2081_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
lean_dec_ref(v___md_u2081_2640_);
lean_dec_ref(v___lctx_u2081_2639_);
lean_dec(v_a_2631_);
lean_dec(v___y_2629_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(lean_object* v___y_2649_, uint8_t v_useAfter_2650_, lean_object* v_a_2651_, uint8_t v___x_2652_, size_t v_sz_2653_, size_t v_i_2654_, lean_object* v_bs_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_){
_start:
{
uint8_t v___x_2661_; 
v___x_2661_ = lean_usize_dec_lt(v_i_2654_, v_sz_2653_);
if (v___x_2661_ == 0)
{
lean_object* v___x_2662_; lean_object* v___x_2663_; 
lean_dec(v_a_2651_);
lean_dec(v___y_2649_);
v___x_2662_ = l_unsafeCast___redArg(v_bs_2655_);
lean_dec_ref(v_bs_2655_);
v___x_2663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2662_);
return v___x_2663_;
}
else
{
lean_object* v_v_2664_; lean_object* v___x_2665_; lean_object* v_toInteractiveGoalCore_2666_; lean_object* v_userName_x3f_2667_; lean_object* v_goalPrefix_2668_; lean_object* v_mvarId_2669_; lean_object* v_isInserted_x3f_2670_; lean_object* v_isRemoved_x3f_2671_; lean_object* v___x_2672_; lean_object* v_bs_x27_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___f_2676_; lean_object* v___x_2677_; 
v_v_2664_ = lean_array_uget_borrowed(v_bs_2655_, v_i_2654_);
v___x_2665_ = l_unsafeCast___redArg(v_v_2664_);
v_toInteractiveGoalCore_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2666_);
v_userName_x3f_2667_ = lean_ctor_get(v___x_2665_, 1);
lean_inc(v_userName_x3f_2667_);
v_goalPrefix_2668_ = lean_ctor_get(v___x_2665_, 2);
lean_inc_ref(v_goalPrefix_2668_);
v_mvarId_2669_ = lean_ctor_get(v___x_2665_, 3);
lean_inc_n(v_mvarId_2669_, 2);
v_isInserted_x3f_2670_ = lean_ctor_get(v___x_2665_, 4);
lean_inc(v_isInserted_x3f_2670_);
v_isRemoved_x3f_2671_ = lean_ctor_get(v___x_2665_, 5);
lean_inc(v_isRemoved_x3f_2671_);
v___x_2672_ = lean_unsigned_to_nat(0u);
v_bs_x27_2673_ = lean_array_uset(v_bs_2655_, v_i_2654_, v___x_2672_);
v___x_2674_ = lean_box(v_useAfter_2650_);
v___x_2675_ = lean_box(v___x_2652_);
lean_inc(v_a_2651_);
lean_inc(v___y_2649_);
v___f_2676_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed), 18, 11);
lean_closure_set(v___f_2676_, 0, v_mvarId_2669_);
lean_closure_set(v___f_2676_, 1, v___y_2649_);
lean_closure_set(v___f_2676_, 2, v___x_2674_);
lean_closure_set(v___f_2676_, 3, v_a_2651_);
lean_closure_set(v___f_2676_, 4, v___x_2665_);
lean_closure_set(v___f_2676_, 5, v___x_2675_);
lean_closure_set(v___f_2676_, 6, v_toInteractiveGoalCore_2666_);
lean_closure_set(v___f_2676_, 7, v_userName_x3f_2667_);
lean_closure_set(v___f_2676_, 8, v_goalPrefix_2668_);
lean_closure_set(v___f_2676_, 9, v_isInserted_x3f_2670_);
lean_closure_set(v___f_2676_, 10, v_isRemoved_x3f_2671_);
v___x_2677_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_mvarId_2669_, v___f_2676_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; size_t v___x_2679_; size_t v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v___x_2679_ = ((size_t)1ULL);
v___x_2680_ = lean_usize_add(v_i_2654_, v___x_2679_);
v___x_2681_ = l_unsafeCast___redArg(v_a_2678_);
lean_dec(v_a_2678_);
v___x_2682_ = lean_array_uset(v_bs_x27_2673_, v_i_2654_, v___x_2681_);
v_i_2654_ = v___x_2680_;
v_bs_2655_ = v___x_2682_;
goto _start;
}
else
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2691_; 
lean_dec_ref(v_bs_x27_2673_);
lean_dec(v_a_2651_);
lean_dec(v___y_2649_);
v_a_2684_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2686_ = v___x_2677_;
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2677_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2691_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2689_; 
if (v_isShared_2687_ == 0)
{
v___x_2689_ = v___x_2686_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_a_2684_);
v___x_2689_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
return v___x_2689_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8___boxed(lean_object* v___y_2692_, lean_object* v_useAfter_2693_, lean_object* v_a_2694_, lean_object* v___x_2695_, lean_object* v_sz_2696_, lean_object* v_i_2697_, lean_object* v_bs_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
uint8_t v_useAfter_boxed_2704_; uint8_t v___x_3382__boxed_2705_; size_t v_sz_boxed_2706_; size_t v_i_boxed_2707_; lean_object* v_res_2708_; 
v_useAfter_boxed_2704_ = lean_unbox(v_useAfter_2693_);
v___x_3382__boxed_2705_ = lean_unbox(v___x_2695_);
v_sz_boxed_2706_ = lean_unbox_usize(v_sz_2696_);
lean_dec(v_sz_2696_);
v_i_boxed_2707_ = lean_unbox_usize(v_i_2697_);
lean_dec(v_i_2697_);
v_res_2708_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(v___y_2692_, v_useAfter_boxed_2704_, v_a_2694_, v___x_3382__boxed_2705_, v_sz_boxed_2706_, v_i_boxed_2707_, v_bs_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(uint8_t v_useAfter_2709_, lean_object* v_a_2710_, lean_object* v___y_2711_, uint8_t v___x_2712_, size_t v_sz_2713_, size_t v_i_2714_, lean_object* v_bs_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
uint8_t v___x_2721_; 
v___x_2721_ = lean_usize_dec_lt(v_i_2714_, v_sz_2713_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; lean_object* v___x_2723_; 
lean_dec(v___y_2711_);
lean_dec(v_a_2710_);
v___x_2722_ = l_unsafeCast___redArg(v_bs_2715_);
lean_dec_ref(v_bs_2715_);
v___x_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
return v___x_2723_;
}
else
{
lean_object* v_v_2724_; lean_object* v___x_2725_; lean_object* v_toInteractiveGoalCore_2726_; lean_object* v_userName_x3f_2727_; lean_object* v_goalPrefix_2728_; lean_object* v_mvarId_2729_; lean_object* v_isInserted_x3f_2730_; lean_object* v_isRemoved_x3f_2731_; lean_object* v___x_2732_; lean_object* v_bs_x27_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___f_2736_; lean_object* v___x_2737_; 
v_v_2724_ = lean_array_uget_borrowed(v_bs_2715_, v_i_2714_);
v___x_2725_ = l_unsafeCast___redArg(v_v_2724_);
v_toInteractiveGoalCore_2726_ = lean_ctor_get(v___x_2725_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2726_);
v_userName_x3f_2727_ = lean_ctor_get(v___x_2725_, 1);
lean_inc(v_userName_x3f_2727_);
v_goalPrefix_2728_ = lean_ctor_get(v___x_2725_, 2);
lean_inc_ref(v_goalPrefix_2728_);
v_mvarId_2729_ = lean_ctor_get(v___x_2725_, 3);
lean_inc_n(v_mvarId_2729_, 2);
v_isInserted_x3f_2730_ = lean_ctor_get(v___x_2725_, 4);
lean_inc(v_isInserted_x3f_2730_);
v_isRemoved_x3f_2731_ = lean_ctor_get(v___x_2725_, 5);
lean_inc(v_isRemoved_x3f_2731_);
v___x_2732_ = lean_unsigned_to_nat(0u);
v_bs_x27_2733_ = lean_array_uset(v_bs_2715_, v_i_2714_, v___x_2732_);
v___x_2734_ = lean_box(v_useAfter_2709_);
v___x_2735_ = lean_box(v___x_2712_);
lean_inc(v_a_2710_);
lean_inc(v___y_2711_);
v___f_2736_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed), 18, 11);
lean_closure_set(v___f_2736_, 0, v_mvarId_2729_);
lean_closure_set(v___f_2736_, 1, v___y_2711_);
lean_closure_set(v___f_2736_, 2, v___x_2734_);
lean_closure_set(v___f_2736_, 3, v_a_2710_);
lean_closure_set(v___f_2736_, 4, v___x_2725_);
lean_closure_set(v___f_2736_, 5, v___x_2735_);
lean_closure_set(v___f_2736_, 6, v_toInteractiveGoalCore_2726_);
lean_closure_set(v___f_2736_, 7, v_userName_x3f_2727_);
lean_closure_set(v___f_2736_, 8, v_goalPrefix_2728_);
lean_closure_set(v___f_2736_, 9, v_isInserted_x3f_2730_);
lean_closure_set(v___f_2736_, 10, v_isRemoved_x3f_2731_);
v___x_2737_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_mvarId_2729_, v___f_2736_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; size_t v___x_2739_; size_t v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; 
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
lean_inc(v_a_2738_);
lean_dec_ref_known(v___x_2737_, 1);
v___x_2739_ = ((size_t)1ULL);
v___x_2740_ = lean_usize_add(v_i_2714_, v___x_2739_);
v___x_2741_ = l_unsafeCast___redArg(v_a_2738_);
lean_dec(v_a_2738_);
v___x_2742_ = lean_array_uset(v_bs_x27_2733_, v_i_2714_, v___x_2741_);
v___x_2743_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(v___y_2711_, v_useAfter_2709_, v_a_2710_, v___x_2712_, v_sz_2713_, v___x_2740_, v___x_2742_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_);
return v___x_2743_;
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_dec_ref(v_bs_x27_2733_);
lean_dec(v___y_2711_);
lean_dec(v_a_2710_);
v_a_2744_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2737_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2737_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___boxed(lean_object* v_useAfter_2752_, lean_object* v_a_2753_, lean_object* v___y_2754_, lean_object* v___x_2755_, lean_object* v_sz_2756_, lean_object* v_i_2757_, lean_object* v_bs_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
uint8_t v_useAfter_boxed_2764_; uint8_t v___x_3452__boxed_2765_; size_t v_sz_boxed_2766_; size_t v_i_boxed_2767_; lean_object* v_res_2768_; 
v_useAfter_boxed_2764_ = lean_unbox(v_useAfter_2752_);
v___x_3452__boxed_2765_ = lean_unbox(v___x_2755_);
v_sz_boxed_2766_ = lean_unbox_usize(v_sz_2756_);
lean_dec(v_sz_2756_);
v_i_boxed_2767_ = lean_unbox_usize(v_i_2757_);
lean_dec(v_i_2757_);
v_res_2768_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(v_useAfter_boxed_2764_, v_a_2753_, v___y_2754_, v___x_3452__boxed_2765_, v_sz_boxed_2766_, v_i_boxed_2767_, v_bs_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_);
lean_dec(v___y_2762_);
lean_dec_ref(v___y_2761_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals(uint8_t v_useAfter_2769_, lean_object* v_info_2770_, lean_object* v_igs_u2081_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_toCold_2777_; lean_object* v_options_2778_; lean_object* v___x_2779_; uint8_t v___x_2780_; lean_object* v___y_2782_; 
v_toCold_2777_ = lean_ctor_get(v_a_2774_, 0);
v_options_2778_ = lean_ctor_get(v_toCold_2777_, 2);
v___x_2779_ = l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff;
v___x_2780_ = l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(v_options_2778_, v___x_2779_);
if (v___x_2780_ == 0)
{
lean_object* v___x_2820_; 
lean_dec_ref(v_info_2770_);
v___x_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2820_, 0, v_igs_u2081_2771_);
return v___x_2820_;
}
else
{
if (v_useAfter_2769_ == 0)
{
lean_object* v_goalsAfter_2821_; 
v_goalsAfter_2821_ = lean_ctor_get(v_info_2770_, 4);
lean_inc(v_goalsAfter_2821_);
v___y_2782_ = v_goalsAfter_2821_;
goto v___jp_2781_;
}
else
{
lean_object* v_goalsBefore_2822_; 
v_goalsBefore_2822_ = lean_ctor_get(v_info_2770_, 2);
lean_inc(v_goalsBefore_2822_);
v___y_2782_ = v_goalsBefore_2822_;
goto v___jp_2781_;
}
}
v___jp_2781_:
{
lean_object* v_goalsBefore_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
v_goalsBefore_2783_ = lean_ctor_get(v_info_2770_, 2);
lean_inc(v_goalsBefore_2783_);
lean_dec_ref(v_info_2770_);
v___x_2784_ = lean_box(1);
v___x_2785_ = l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(v___x_2784_, v_goalsBefore_2783_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
if (lean_obj_tag(v___x_2785_) == 0)
{
lean_object* v_a_2786_; size_t v_sz_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2988__overap_2794_; lean_object* v___x_2795_; 
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
lean_inc(v_a_2786_);
lean_dec_ref_known(v___x_2785_, 1);
v_sz_2787_ = lean_array_size(v_igs_u2081_2771_);
v___x_2788_ = l_unsafeCast___redArg(v_igs_u2081_2771_);
lean_dec_ref(v_igs_u2081_2771_);
v___x_2789_ = lean_box(v_useAfter_2769_);
v___x_2790_ = lean_box(v___x_2780_);
v___x_2791_ = lean_box_usize(v_sz_2787_);
v___x_2792_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed__const__1));
v___x_2793_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___boxed), 12, 7);
lean_closure_set(v___x_2793_, 0, v___x_2789_);
lean_closure_set(v___x_2793_, 1, v_a_2786_);
lean_closure_set(v___x_2793_, 2, v___y_2782_);
lean_closure_set(v___x_2793_, 3, v___x_2790_);
lean_closure_set(v___x_2793_, 4, v___x_2791_);
lean_closure_set(v___x_2793_, 5, v___x_2792_);
lean_closure_set(v___x_2793_, 6, v___x_2788_);
v___x_2988__overap_2794_ = l_unsafeCast___redArg(v___x_2793_);
lean_dec_ref(v___x_2793_);
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc_ref(v_a_2772_);
v___x_2795_ = lean_apply_5(v___x_2988__overap_2794_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_, lean_box(0));
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
else
{
lean_object* v_a_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
v_a_2804_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2806_ = v___x_2795_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_a_2804_);
lean_dec(v___x_2795_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2804_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2819_; 
lean_dec(v___y_2782_);
lean_dec_ref(v_igs_u2081_2771_);
v_a_2812_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2814_ = v___x_2785_;
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2785_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2817_; 
if (v_isShared_2815_ == 0)
{
v___x_2817_ = v___x_2814_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_a_2812_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals___boxed(lean_object* v_useAfter_2823_, lean_object* v_info_2824_, lean_object* v_igs_u2081_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_){
_start:
{
uint8_t v_useAfter_boxed_2831_; lean_object* v_res_2832_; 
v_useAfter_boxed_2831_ = lean_unbox(v_useAfter_2823_);
v_res_2832_ = l_Lean_Widget_diffInteractiveGoals(v_useAfter_boxed_2831_, v_info_2824_, v_igs_u2081_2825_, v_a_2826_, v_a_2827_, v_a_2828_, v_a_2829_);
lean_dec(v_a_2829_);
lean_dec_ref(v_a_2828_);
lean_dec(v_a_2827_);
lean_dec_ref(v_a_2826_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2(lean_object* v_00_u03b4_2833_, lean_object* v_t_2834_, lean_object* v_k_2835_){
_start:
{
lean_object* v___x_2836_; 
v___x_2836_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(v_t_2834_, v_k_2835_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___boxed(lean_object* v_00_u03b4_2837_, lean_object* v_t_2838_, lean_object* v_k_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2(v_00_u03b4_2837_, v_t_2838_, v_k_2839_);
lean_dec(v_k_2839_);
lean_dec(v_t_2838_);
return v_res_2840_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3(lean_object* v_00_u03b2_2841_, lean_object* v_k_2842_, lean_object* v_t_2843_){
_start:
{
uint8_t v___x_2844_; 
v___x_2844_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(v_k_2842_, v_t_2843_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___boxed(lean_object* v_00_u03b2_2845_, lean_object* v_k_2846_, lean_object* v_t_2847_){
_start:
{
uint8_t v_res_2848_; lean_object* v_r_2849_; 
v_res_2848_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3(v_00_u03b2_2845_, v_k_2846_, v_t_2847_);
lean_dec(v_t_2847_);
lean_dec(v_k_2846_);
v_r_2849_ = lean_box(v_res_2848_);
return v_r_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6(lean_object* v_00_u03b1_2850_, lean_object* v_lctx_2851_, lean_object* v_localInsts_2852_, lean_object* v_x_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_){
_start:
{
lean_object* v___x_2859_; 
v___x_2859_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(v_lctx_2851_, v_localInsts_2852_, v_x_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___boxed(lean_object* v_00_u03b1_2860_, lean_object* v_lctx_2861_, lean_object* v_localInsts_2862_, lean_object* v_x_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
lean_object* v_res_2869_; 
v_res_2869_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6(v_00_u03b1_2860_, v_lctx_2861_, v_localInsts_2862_, v_x_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6(lean_object* v_00_u03b1_2870_, lean_object* v_goal_2871_, lean_object* v_action_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_goal_2871_, v_action_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_);
return v___x_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___boxed(lean_object* v_00_u03b1_2879_, lean_object* v_goal_2880_, lean_object* v_action_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_){
_start:
{
lean_object* v_res_2887_; 
v_res_2887_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6(v_00_u03b1_2879_, v_goal_2880_, v_action_2881_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_);
lean_dec(v___y_2885_);
lean_dec_ref(v___y_2884_);
lean_dec(v___y_2883_);
lean_dec_ref(v___y_2882_);
return v_res_2887_;
}
}
lean_object* runtime_initialize_Lean_Widget_InteractiveGoal(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Widget_Diff(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Widget_InteractiveGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Widget_Diff(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Widget_InteractiveGoal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Widget_Diff(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Widget_InteractiveGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Widget_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Widget_Diff(builtin);
}
#ifdef __cplusplus
}
#endif

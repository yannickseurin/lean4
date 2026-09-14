// Lean compiler output
// Module: Lake.DSL.VerLit
// Imports: public import Lean.ToExpr public import Lake.Util.Version public import Lake.Config.Dependency import Lake.DSL.Syntax import Lean.Meta.Eval
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
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
static const lean_string_object l_Lake_DSL_SemVerCore_toExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_DSL_SemVerCore_toExpr___closed__0 = (const lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value;
static const lean_string_object l_Lake_DSL_SemVerCore_toExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "SemVerCore"};
static const lean_object* l_Lake_DSL_SemVerCore_toExpr___closed__1 = (const lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__1_value;
static const lean_string_object l_Lake_DSL_SemVerCore_toExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lake_DSL_SemVerCore_toExpr___closed__2 = (const lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__2_value;
static const lean_ctor_object l_Lake_DSL_SemVerCore_toExpr___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_SemVerCore_toExpr___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__3_value_aux_0),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(59, 6, 10, 27, 76, 25, 44, 113)}};
static const lean_ctor_object l_Lake_DSL_SemVerCore_toExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__3_value_aux_1),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(95, 12, 49, 177, 238, 160, 185, 135)}};
static const lean_object* l_Lake_DSL_SemVerCore_toExpr___closed__3 = (const lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__3_value;
static lean_once_cell_t l_Lake_DSL_SemVerCore_toExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_SemVerCore_toExpr___closed__4;
LEAN_EXPORT lean_object* l_Lake_DSL_SemVerCore_toExpr(lean_object*);
static const lean_closure_object l_Lake_DSL_instToExprSemVerCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_DSL_SemVerCore_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_DSL_instToExprSemVerCore___closed__0 = (const lean_object*)&l_Lake_DSL_instToExprSemVerCore___closed__0_value;
static const lean_ctor_object l_Lake_DSL_instToExprSemVerCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_instToExprSemVerCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_instToExprSemVerCore___closed__1_value_aux_0),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(59, 6, 10, 27, 76, 25, 44, 113)}};
static const lean_object* l_Lake_DSL_instToExprSemVerCore___closed__1 = (const lean_object*)&l_Lake_DSL_instToExprSemVerCore___closed__1_value;
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___closed__2;
static lean_once_cell_t l_Lake_DSL_instToExprSemVerCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprSemVerCore___closed__3;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprSemVerCore;
static const lean_string_object l_Lake_DSL_StdVer_toExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "StdVer"};
static const lean_object* l_Lake_DSL_StdVer_toExpr___closed__0 = (const lean_object*)&l_Lake_DSL_StdVer_toExpr___closed__0_value;
static const lean_ctor_object l_Lake_DSL_StdVer_toExpr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_StdVer_toExpr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_StdVer_toExpr___closed__1_value_aux_0),((lean_object*)&l_Lake_DSL_StdVer_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 146, 19, 103, 232, 226, 61, 158)}};
static const lean_ctor_object l_Lake_DSL_StdVer_toExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_StdVer_toExpr___closed__1_value_aux_1),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(13, 219, 233, 135, 152, 103, 227, 200)}};
static const lean_object* l_Lake_DSL_StdVer_toExpr___closed__1 = (const lean_object*)&l_Lake_DSL_StdVer_toExpr___closed__1_value;
static lean_once_cell_t l_Lake_DSL_StdVer_toExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_StdVer_toExpr___closed__2;
LEAN_EXPORT lean_object* l_Lake_DSL_StdVer_toExpr(lean_object*);
static const lean_closure_object l_Lake_DSL_instToExprStdVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_DSL_StdVer_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_DSL_instToExprStdVer___closed__0 = (const lean_object*)&l_Lake_DSL_instToExprStdVer___closed__0_value;
static const lean_ctor_object l_Lake_DSL_instToExprStdVer___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_instToExprStdVer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_instToExprStdVer___closed__1_value_aux_0),((lean_object*)&l_Lake_DSL_StdVer_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 146, 19, 103, 232, 226, 61, 158)}};
static const lean_object* l_Lake_DSL_instToExprStdVer___closed__1 = (const lean_object*)&l_Lake_DSL_instToExprStdVer___closed__1_value;
static lean_once_cell_t l_Lake_DSL_instToExprStdVer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprStdVer___closed__2;
static lean_once_cell_t l_Lake_DSL_instToExprStdVer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprStdVer___closed__3;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprStdVer;
static const lean_string_object l_Lake_DSL_ComparatorOp_toExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ComparatorOp"};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__0 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__0_value;
static const lean_string_object l_Lake_DSL_ComparatorOp_toExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__1 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__1_value;
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__2_value_aux_0),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 59, 82, 229, 190, 167, 67, 17)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__2_value_aux_1),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(206, 254, 206, 101, 1, 105, 92, 124)}};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__2 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__2_value;
static lean_once_cell_t l_Lake_DSL_ComparatorOp_toExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__3;
static const lean_string_object l_Lake_DSL_ComparatorOp_toExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__4 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__4_value;
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__5_value_aux_0),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 59, 82, 229, 190, 167, 67, 17)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__5_value_aux_1),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(198, 65, 63, 188, 146, 202, 245, 211)}};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__5 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__5_value;
static lean_once_cell_t l_Lake_DSL_ComparatorOp_toExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__6;
static const lean_string_object l_Lake_DSL_ComparatorOp_toExpr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__7 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__7_value;
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__8_value_aux_0),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 59, 82, 229, 190, 167, 67, 17)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__8_value_aux_1),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__7_value),LEAN_SCALAR_PTR_LITERAL(252, 195, 77, 247, 71, 137, 186, 146)}};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__8 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__8_value;
static lean_once_cell_t l_Lake_DSL_ComparatorOp_toExpr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__9;
static const lean_string_object l_Lake_DSL_ComparatorOp_toExpr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ge"};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__10 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__10_value;
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__11_value_aux_0),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 59, 82, 229, 190, 167, 67, 17)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__11_value_aux_1),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__10_value),LEAN_SCALAR_PTR_LITERAL(70, 128, 56, 165, 113, 70, 122, 227)}};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__11 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__11_value;
static lean_once_cell_t l_Lake_DSL_ComparatorOp_toExpr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__12;
static const lean_string_object l_Lake_DSL_ComparatorOp_toExpr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__13 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__13_value;
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__14_value_aux_0),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 59, 82, 229, 190, 167, 67, 17)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__14_value_aux_1),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__13_value),LEAN_SCALAR_PTR_LITERAL(94, 55, 98, 73, 116, 66, 173, 142)}};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__14 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__14_value;
static lean_once_cell_t l_Lake_DSL_ComparatorOp_toExpr___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__15;
static const lean_string_object l_Lake_DSL_ComparatorOp_toExpr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ne"};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__16 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__16_value;
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__17_value_aux_0),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 59, 82, 229, 190, 167, 67, 17)}};
static const lean_ctor_object l_Lake_DSL_ComparatorOp_toExpr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__17_value_aux_1),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__16_value),LEAN_SCALAR_PTR_LITERAL(242, 18, 232, 247, 244, 252, 188, 196)}};
static const lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__17 = (const lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__17_value;
static lean_once_cell_t l_Lake_DSL_ComparatorOp_toExpr___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_ComparatorOp_toExpr___closed__18;
LEAN_EXPORT lean_object* l_Lake_DSL_ComparatorOp_toExpr(uint8_t);
LEAN_EXPORT lean_object* l_Lake_DSL_ComparatorOp_toExpr___boxed(lean_object*);
static const lean_closure_object l_Lake_DSL_instToExprComparatorOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_DSL_ComparatorOp_toExpr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_DSL_instToExprComparatorOp___closed__0 = (const lean_object*)&l_Lake_DSL_instToExprComparatorOp___closed__0_value;
static const lean_ctor_object l_Lake_DSL_instToExprComparatorOp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_instToExprComparatorOp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_instToExprComparatorOp___closed__1_value_aux_0),((lean_object*)&l_Lake_DSL_ComparatorOp_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 59, 82, 229, 190, 167, 67, 17)}};
static const lean_object* l_Lake_DSL_instToExprComparatorOp___closed__1 = (const lean_object*)&l_Lake_DSL_instToExprComparatorOp___closed__1_value;
static lean_once_cell_t l_Lake_DSL_instToExprComparatorOp___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprComparatorOp___closed__2;
static lean_once_cell_t l_Lake_DSL_instToExprComparatorOp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprComparatorOp___closed__3;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprComparatorOp;
static const lean_string_object l_Lake_DSL_VerComparator_toExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "VerComparator"};
static const lean_object* l_Lake_DSL_VerComparator_toExpr___closed__0 = (const lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__0_value;
static const lean_ctor_object l_Lake_DSL_VerComparator_toExpr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_VerComparator_toExpr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__1_value_aux_0),((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 173, 77, 193, 175, 239, 241, 197)}};
static const lean_ctor_object l_Lake_DSL_VerComparator_toExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__1_value_aux_1),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(236, 168, 184, 142, 178, 100, 228, 229)}};
static const lean_object* l_Lake_DSL_VerComparator_toExpr___closed__1 = (const lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__1_value;
static lean_once_cell_t l_Lake_DSL_VerComparator_toExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_VerComparator_toExpr___closed__2;
static const lean_string_object l_Lake_DSL_VerComparator_toExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lake_DSL_VerComparator_toExpr___closed__3 = (const lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__3_value;
static const lean_string_object l_Lake_DSL_VerComparator_toExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lake_DSL_VerComparator_toExpr___closed__4 = (const lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__4_value;
static const lean_ctor_object l_Lake_DSL_VerComparator_toExpr___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lake_DSL_VerComparator_toExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__5_value_aux_0),((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lake_DSL_VerComparator_toExpr___closed__5 = (const lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__5_value;
static lean_once_cell_t l_Lake_DSL_VerComparator_toExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_VerComparator_toExpr___closed__6;
static const lean_string_object l_Lake_DSL_VerComparator_toExpr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_DSL_VerComparator_toExpr___closed__7 = (const lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__7_value;
static const lean_ctor_object l_Lake_DSL_VerComparator_toExpr___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lake_DSL_VerComparator_toExpr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__8_value_aux_0),((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__7_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lake_DSL_VerComparator_toExpr___closed__8 = (const lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__8_value;
static lean_once_cell_t l_Lake_DSL_VerComparator_toExpr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_VerComparator_toExpr___closed__9;
LEAN_EXPORT lean_object* l_Lake_DSL_VerComparator_toExpr(lean_object*);
static const lean_closure_object l_Lake_DSL_instToExprVerComparator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_DSL_VerComparator_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_DSL_instToExprVerComparator___closed__0 = (const lean_object*)&l_Lake_DSL_instToExprVerComparator___closed__0_value;
static const lean_ctor_object l_Lake_DSL_instToExprVerComparator___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_instToExprVerComparator___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_instToExprVerComparator___closed__1_value_aux_0),((lean_object*)&l_Lake_DSL_VerComparator_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 173, 77, 193, 175, 239, 241, 197)}};
static const lean_object* l_Lake_DSL_instToExprVerComparator___closed__1 = (const lean_object*)&l_Lake_DSL_instToExprVerComparator___closed__1_value;
static lean_once_cell_t l_Lake_DSL_instToExprVerComparator___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprVerComparator___closed__2;
static lean_once_cell_t l_Lake_DSL_instToExprVerComparator___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprVerComparator___closed__3;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprVerComparator;
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__0 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__0_value;
static const lean_string_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__1 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__1_value;
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__2 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__2_value;
static lean_once_cell_t l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__3;
static lean_once_cell_t l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4;
static lean_once_cell_t l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__5;
static const lean_string_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__6 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__6_value;
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__7_value;
static lean_once_cell_t l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__8;
static lean_once_cell_t l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__9;
static const lean_string_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__10 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__10_value;
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__11_value_aux_0),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__11 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__11_value;
static lean_once_cell_t l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__12;
static lean_once_cell_t l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__13;
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_DSL_VerRange_toExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "VerRange"};
static const lean_object* l_Lake_DSL_VerRange_toExpr___closed__0 = (const lean_object*)&l_Lake_DSL_VerRange_toExpr___closed__0_value;
static const lean_ctor_object l_Lake_DSL_VerRange_toExpr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_VerRange_toExpr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_VerRange_toExpr___closed__1_value_aux_0),((lean_object*)&l_Lake_DSL_VerRange_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 206, 162, 7, 236, 12, 145, 251)}};
static const lean_ctor_object l_Lake_DSL_VerRange_toExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_VerRange_toExpr___closed__1_value_aux_1),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(37, 157, 137, 23, 86, 187, 191, 168)}};
static const lean_object* l_Lake_DSL_VerRange_toExpr___closed__1 = (const lean_object*)&l_Lake_DSL_VerRange_toExpr___closed__1_value;
static lean_once_cell_t l_Lake_DSL_VerRange_toExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_VerRange_toExpr___closed__2;
static const lean_string_object l_Lake_DSL_VerRange_toExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lake_DSL_VerRange_toExpr___closed__3 = (const lean_object*)&l_Lake_DSL_VerRange_toExpr___closed__3_value;
static const lean_ctor_object l_Lake_DSL_VerRange_toExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_VerRange_toExpr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_Lake_DSL_VerRange_toExpr___closed__4 = (const lean_object*)&l_Lake_DSL_VerRange_toExpr___closed__4_value;
static lean_once_cell_t l_Lake_DSL_VerRange_toExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_VerRange_toExpr___closed__5;
static lean_once_cell_t l_Lake_DSL_VerRange_toExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_VerRange_toExpr___closed__6;
static lean_once_cell_t l_Lake_DSL_VerRange_toExpr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_VerRange_toExpr___closed__7;
static lean_once_cell_t l_Lake_DSL_VerRange_toExpr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_VerRange_toExpr___closed__8;
LEAN_EXPORT lean_object* l_Lake_DSL_VerRange_toExpr(lean_object*);
static const lean_closure_object l_Lake_DSL_instToExprVerRange___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_DSL_VerRange_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_DSL_instToExprVerRange___closed__0 = (const lean_object*)&l_Lake_DSL_instToExprVerRange___closed__0_value;
static const lean_ctor_object l_Lake_DSL_instToExprVerRange___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_instToExprVerRange___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_instToExprVerRange___closed__1_value_aux_0),((lean_object*)&l_Lake_DSL_VerRange_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 206, 162, 7, 236, 12, 145, 251)}};
static const lean_object* l_Lake_DSL_instToExprVerRange___closed__1 = (const lean_object*)&l_Lake_DSL_instToExprVerRange___closed__1_value;
static lean_once_cell_t l_Lake_DSL_instToExprVerRange___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprVerRange___closed__2;
static lean_once_cell_t l_Lake_DSL_instToExprVerRange___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprVerRange___closed__3;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprVerRange;
static const lean_string_object l_Lake_DSL_InputVer_toExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "InputVer"};
static const lean_object* l_Lake_DSL_InputVer_toExpr___closed__0 = (const lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__0_value;
static const lean_string_object l_Lake_DSL_InputVer_toExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lake_DSL_InputVer_toExpr___closed__1 = (const lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__1_value;
static const lean_ctor_object l_Lake_DSL_InputVer_toExpr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_InputVer_toExpr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__2_value_aux_0),((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 40, 241, 211, 193, 106, 100, 83)}};
static const lean_ctor_object l_Lake_DSL_InputVer_toExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__2_value_aux_1),((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(56, 190, 59, 35, 131, 146, 80, 44)}};
static const lean_object* l_Lake_DSL_InputVer_toExpr___closed__2 = (const lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__2_value;
static lean_once_cell_t l_Lake_DSL_InputVer_toExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_InputVer_toExpr___closed__3;
static const lean_string_object l_Lake_DSL_InputVer_toExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "git"};
static const lean_object* l_Lake_DSL_InputVer_toExpr___closed__4 = (const lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__4_value;
static const lean_ctor_object l_Lake_DSL_InputVer_toExpr___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_InputVer_toExpr___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__5_value_aux_0),((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 40, 241, 211, 193, 106, 100, 83)}};
static const lean_ctor_object l_Lake_DSL_InputVer_toExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__5_value_aux_1),((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(206, 200, 168, 53, 212, 85, 80, 128)}};
static const lean_object* l_Lake_DSL_InputVer_toExpr___closed__5 = (const lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__5_value;
static lean_once_cell_t l_Lake_DSL_InputVer_toExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_InputVer_toExpr___closed__6;
static const lean_string_object l_Lake_DSL_InputVer_toExpr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ver"};
static const lean_object* l_Lake_DSL_InputVer_toExpr___closed__7 = (const lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__7_value;
static const lean_ctor_object l_Lake_DSL_InputVer_toExpr___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_InputVer_toExpr___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__8_value_aux_0),((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 40, 241, 211, 193, 106, 100, 83)}};
static const lean_ctor_object l_Lake_DSL_InputVer_toExpr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__8_value_aux_1),((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__7_value),LEAN_SCALAR_PTR_LITERAL(114, 244, 198, 157, 121, 115, 31, 95)}};
static const lean_object* l_Lake_DSL_InputVer_toExpr___closed__8 = (const lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__8_value;
static lean_once_cell_t l_Lake_DSL_InputVer_toExpr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_InputVer_toExpr___closed__9;
LEAN_EXPORT lean_object* l_Lake_DSL_InputVer_toExpr(lean_object*);
static const lean_closure_object l_Lake_DSL_instToExprInputVer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_DSL_InputVer_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_DSL_instToExprInputVer___closed__0 = (const lean_object*)&l_Lake_DSL_instToExprInputVer___closed__0_value;
static const lean_ctor_object l_Lake_DSL_instToExprInputVer___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_DSL_instToExprInputVer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_DSL_instToExprInputVer___closed__1_value_aux_0),((lean_object*)&l_Lake_DSL_InputVer_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 40, 241, 211, 193, 106, 100, 83)}};
static const lean_object* l_Lake_DSL_instToExprInputVer___closed__1 = (const lean_object*)&l_Lake_DSL_instToExprInputVer___closed__1_value;
static lean_once_cell_t l_Lake_DSL_instToExprInputVer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprInputVer___closed__2;
static lean_once_cell_t l_Lake_DSL_instToExprInputVer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_DSL_instToExprInputVer___closed__3;
LEAN_EXPORT lean_object* l_Lake_DSL_instToExprInputVer;
LEAN_EXPORT lean_object* l_Lake_DSL_toResultExpr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_DSL_toResultExpr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Except"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__0 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__0_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(238, 113, 136, 33, 237, 151, 233, 210)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__1 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__1_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__2 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__2_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__2_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__3 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__3_value;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__4;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__5;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__6 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__6_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__7 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__7_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__8 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__8_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__9 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__9_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10_value_aux_0),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10_value_aux_1),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__8_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10_value_aux_2),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__9_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "decodeVersion"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__11 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__11_value;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__12;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__11_value),LEAN_SCALAR_PTR_LITERAL(52, 51, 6, 126, 144, 142, 7, 116)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__13 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__13_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "DecodeVersion"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__14 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__14_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__15_value_aux_0),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__14_value),LEAN_SCALAR_PTR_LITERAL(214, 242, 230, 144, 77, 175, 29, 111)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__15_value_aux_1),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__11_value),LEAN_SCALAR_PTR_LITERAL(61, 111, 39, 77, 209, 199, 208, 149)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__15 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__15_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__16 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__16_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__17 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__17_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__18 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__18_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__18_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__19 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__19_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Expr"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__20 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__20_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__6_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__21_value_aux_0),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__20_value),LEAN_SCALAR_PTR_LITERAL(84, 208, 74, 211, 93, 83, 88, 82)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__21 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__21_value;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__22;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__23;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "DSL"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__24 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__24_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toResultExpr"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__25 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__25_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__26_value_aux_0),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__24_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__26_value_aux_1),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__25_value),LEAN_SCALAR_PTR_LITERAL(204, 128, 107, 14, 105, 224, 197, 105)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__26 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__26_value;
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "evalVer"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__0 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__0_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1_value_aux_0),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__24_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1_value_aux_1),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 252, 213, 234, 103, 11, 172, 191)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "ill-formed `eval_ver%` syntax"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__2 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__2_value;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__3;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected type is not known"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__4 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__4_value;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__5;
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__0;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__1 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__1_value;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__2;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__3;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__4;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "VerLit"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__5 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__5_value;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__6;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__7;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__8;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__9;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "elabEvalVersion"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__10 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__10_value;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__11;
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1();
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___boxed(lean_object*);
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "verLit"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__0 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__0_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_DSL_SemVerCore_toExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__1_value_aux_0),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__24_value),LEAN_SCALAR_PTR_LITERAL(176, 13, 75, 143, 104, 166, 231, 81)}};
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__1_value_aux_1),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(151, 205, 236, 50, 125, 9, 172, 134)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__1 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__1_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "ill-formed version literal"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__2 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__2_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eval_ver%"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__3 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__3_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termS!_"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__4 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__4_value;
static const lean_ctor_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__4_value),LEAN_SCALAR_PTR_LITERAL(30, 130, 93, 49, 63, 146, 201, 153)}};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__5 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__5_value;
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "s!"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__6 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "expandVerLit"};
static const lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__0 = (const lean_object*)&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__0_value;
static lean_once_cell_t l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1();
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___boxed(lean_object*);
static lean_object* _init_l_Lake_DSL_SemVerCore_toExpr___closed__4(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_box(0);
v___x_9_ = ((lean_object*)(l_Lake_DSL_SemVerCore_toExpr___closed__3));
v___x_10_ = l_Lean_mkConst(v___x_9_, v___x_8_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_SemVerCore_toExpr(lean_object* v_self_11_){
_start:
{
lean_object* v_major_12_; lean_object* v_minor_13_; lean_object* v_patch_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v_major_12_ = lean_ctor_get(v_self_11_, 0);
lean_inc(v_major_12_);
v_minor_13_ = lean_ctor_get(v_self_11_, 1);
lean_inc(v_minor_13_);
v_patch_14_ = lean_ctor_get(v_self_11_, 2);
lean_inc(v_patch_14_);
lean_dec_ref(v_self_11_);
v___x_15_ = lean_obj_once(&l_Lake_DSL_SemVerCore_toExpr___closed__4, &l_Lake_DSL_SemVerCore_toExpr___closed__4_once, _init_l_Lake_DSL_SemVerCore_toExpr___closed__4);
v___x_16_ = l_Lean_mkNatLit(v_major_12_);
v___x_17_ = l_Lean_mkNatLit(v_minor_13_);
v___x_18_ = l_Lean_mkNatLit(v_patch_14_);
v___x_19_ = l_Lean_mkApp3(v___x_15_, v___x_16_, v___x_17_, v___x_18_);
return v___x_19_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___closed__2(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = lean_box(0);
v___x_25_ = ((lean_object*)(l_Lake_DSL_instToExprSemVerCore___closed__1));
v___x_26_ = l_Lean_mkConst(v___x_25_, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore___closed__3(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___closed__2, &l_Lake_DSL_instToExprSemVerCore___closed__2_once, _init_l_Lake_DSL_instToExprSemVerCore___closed__2);
v___x_28_ = ((lean_object*)(l_Lake_DSL_instToExprSemVerCore___closed__0));
v___x_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprSemVerCore(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_obj_once(&l_Lake_DSL_instToExprSemVerCore___closed__3, &l_Lake_DSL_instToExprSemVerCore___closed__3_once, _init_l_Lake_DSL_instToExprSemVerCore___closed__3);
return v___x_30_;
}
}
static lean_object* _init_l_Lake_DSL_StdVer_toExpr___closed__2(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = lean_box(0);
v___x_37_ = ((lean_object*)(l_Lake_DSL_StdVer_toExpr___closed__1));
v___x_38_ = l_Lean_mkConst(v___x_37_, v___x_36_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_StdVer_toExpr(lean_object* v_self_39_){
_start:
{
lean_object* v_toSemVerCore_40_; lean_object* v_specialDescr_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v_toSemVerCore_40_ = lean_ctor_get(v_self_39_, 0);
lean_inc_ref(v_toSemVerCore_40_);
v_specialDescr_41_ = lean_ctor_get(v_self_39_, 1);
lean_inc_ref(v_specialDescr_41_);
lean_dec_ref(v_self_39_);
v___x_42_ = lean_obj_once(&l_Lake_DSL_StdVer_toExpr___closed__2, &l_Lake_DSL_StdVer_toExpr___closed__2_once, _init_l_Lake_DSL_StdVer_toExpr___closed__2);
v___x_43_ = l_Lake_DSL_SemVerCore_toExpr(v_toSemVerCore_40_);
v___x_44_ = l_Lean_mkStrLit(v_specialDescr_41_);
v___x_45_ = l_Lean_mkAppB(v___x_42_, v___x_43_, v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer___closed__2(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = lean_box(0);
v___x_51_ = ((lean_object*)(l_Lake_DSL_instToExprStdVer___closed__1));
v___x_52_ = l_Lean_mkConst(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer___closed__3(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___closed__2, &l_Lake_DSL_instToExprStdVer___closed__2_once, _init_l_Lake_DSL_instToExprStdVer___closed__2);
v___x_54_ = ((lean_object*)(l_Lake_DSL_instToExprStdVer___closed__0));
v___x_55_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprStdVer(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_obj_once(&l_Lake_DSL_instToExprStdVer___closed__3, &l_Lake_DSL_instToExprStdVer___closed__3_once, _init_l_Lake_DSL_instToExprStdVer___closed__3);
return v___x_56_;
}
}
static lean_object* _init_l_Lake_DSL_ComparatorOp_toExpr___closed__3(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_box(0);
v___x_64_ = ((lean_object*)(l_Lake_DSL_ComparatorOp_toExpr___closed__2));
v___x_65_ = l_Lean_mkConst(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Lake_DSL_ComparatorOp_toExpr___closed__6(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = lean_box(0);
v___x_72_ = ((lean_object*)(l_Lake_DSL_ComparatorOp_toExpr___closed__5));
v___x_73_ = l_Lean_mkConst(v___x_72_, v___x_71_);
return v___x_73_;
}
}
static lean_object* _init_l_Lake_DSL_ComparatorOp_toExpr___closed__9(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_79_ = lean_box(0);
v___x_80_ = ((lean_object*)(l_Lake_DSL_ComparatorOp_toExpr___closed__8));
v___x_81_ = l_Lean_mkConst(v___x_80_, v___x_79_);
return v___x_81_;
}
}
static lean_object* _init_l_Lake_DSL_ComparatorOp_toExpr___closed__12(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_box(0);
v___x_88_ = ((lean_object*)(l_Lake_DSL_ComparatorOp_toExpr___closed__11));
v___x_89_ = l_Lean_mkConst(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lake_DSL_ComparatorOp_toExpr___closed__15(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_95_ = lean_box(0);
v___x_96_ = ((lean_object*)(l_Lake_DSL_ComparatorOp_toExpr___closed__14));
v___x_97_ = l_Lean_mkConst(v___x_96_, v___x_95_);
return v___x_97_;
}
}
static lean_object* _init_l_Lake_DSL_ComparatorOp_toExpr___closed__18(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_103_ = lean_box(0);
v___x_104_ = ((lean_object*)(l_Lake_DSL_ComparatorOp_toExpr___closed__17));
v___x_105_ = l_Lean_mkConst(v___x_104_, v___x_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_ComparatorOp_toExpr(uint8_t v_self_106_){
_start:
{
switch(v_self_106_)
{
case 0:
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Lake_DSL_ComparatorOp_toExpr___closed__3, &l_Lake_DSL_ComparatorOp_toExpr___closed__3_once, _init_l_Lake_DSL_ComparatorOp_toExpr___closed__3);
return v___x_107_;
}
case 1:
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lake_DSL_ComparatorOp_toExpr___closed__6, &l_Lake_DSL_ComparatorOp_toExpr___closed__6_once, _init_l_Lake_DSL_ComparatorOp_toExpr___closed__6);
return v___x_108_;
}
case 2:
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lake_DSL_ComparatorOp_toExpr___closed__9, &l_Lake_DSL_ComparatorOp_toExpr___closed__9_once, _init_l_Lake_DSL_ComparatorOp_toExpr___closed__9);
return v___x_109_;
}
case 3:
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lake_DSL_ComparatorOp_toExpr___closed__12, &l_Lake_DSL_ComparatorOp_toExpr___closed__12_once, _init_l_Lake_DSL_ComparatorOp_toExpr___closed__12);
return v___x_110_;
}
case 4:
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&l_Lake_DSL_ComparatorOp_toExpr___closed__15, &l_Lake_DSL_ComparatorOp_toExpr___closed__15_once, _init_l_Lake_DSL_ComparatorOp_toExpr___closed__15);
return v___x_111_;
}
default: 
{
lean_object* v___x_112_; 
v___x_112_ = lean_obj_once(&l_Lake_DSL_ComparatorOp_toExpr___closed__18, &l_Lake_DSL_ComparatorOp_toExpr___closed__18_once, _init_l_Lake_DSL_ComparatorOp_toExpr___closed__18);
return v___x_112_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_ComparatorOp_toExpr___boxed(lean_object* v_self_113_){
_start:
{
uint8_t v_self_boxed_114_; lean_object* v_res_115_; 
v_self_boxed_114_ = lean_unbox(v_self_113_);
v_res_115_ = l_Lake_DSL_ComparatorOp_toExpr(v_self_boxed_114_);
return v_res_115_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprComparatorOp___closed__2(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_box(0);
v___x_121_ = ((lean_object*)(l_Lake_DSL_instToExprComparatorOp___closed__1));
v___x_122_ = l_Lean_mkConst(v___x_121_, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprComparatorOp___closed__3(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&l_Lake_DSL_instToExprComparatorOp___closed__2, &l_Lake_DSL_instToExprComparatorOp___closed__2_once, _init_l_Lake_DSL_instToExprComparatorOp___closed__2);
v___x_124_ = ((lean_object*)(l_Lake_DSL_instToExprComparatorOp___closed__0));
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprComparatorOp(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_once(&l_Lake_DSL_instToExprComparatorOp___closed__3, &l_Lake_DSL_instToExprComparatorOp___closed__3_once, _init_l_Lake_DSL_instToExprComparatorOp___closed__3);
return v___x_126_;
}
}
static lean_object* _init_l_Lake_DSL_VerComparator_toExpr___closed__2(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = lean_box(0);
v___x_133_ = ((lean_object*)(l_Lake_DSL_VerComparator_toExpr___closed__1));
v___x_134_ = l_Lean_mkConst(v___x_133_, v___x_132_);
return v___x_134_;
}
}
static lean_object* _init_l_Lake_DSL_VerComparator_toExpr___closed__6(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_box(0);
v___x_141_ = ((lean_object*)(l_Lake_DSL_VerComparator_toExpr___closed__5));
v___x_142_ = l_Lean_mkConst(v___x_141_, v___x_140_);
return v___x_142_;
}
}
static lean_object* _init_l_Lake_DSL_VerComparator_toExpr___closed__9(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_147_ = lean_box(0);
v___x_148_ = ((lean_object*)(l_Lake_DSL_VerComparator_toExpr___closed__8));
v___x_149_ = l_Lean_mkConst(v___x_148_, v___x_147_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_VerComparator_toExpr(lean_object* v_self_150_){
_start:
{
lean_object* v_ver_151_; uint8_t v_op_152_; uint8_t v_includeSuffixes_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v_ver_151_ = lean_ctor_get(v_self_150_, 0);
lean_inc_ref(v_ver_151_);
v_op_152_ = lean_ctor_get_uint8(v_self_150_, sizeof(void*)*1);
v_includeSuffixes_153_ = lean_ctor_get_uint8(v_self_150_, sizeof(void*)*1 + 1);
lean_dec_ref(v_self_150_);
v___x_154_ = lean_obj_once(&l_Lake_DSL_VerComparator_toExpr___closed__2, &l_Lake_DSL_VerComparator_toExpr___closed__2_once, _init_l_Lake_DSL_VerComparator_toExpr___closed__2);
v___x_155_ = l_Lake_DSL_StdVer_toExpr(v_ver_151_);
v___x_156_ = l_Lake_DSL_ComparatorOp_toExpr(v_op_152_);
if (v_includeSuffixes_153_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_obj_once(&l_Lake_DSL_VerComparator_toExpr___closed__6, &l_Lake_DSL_VerComparator_toExpr___closed__6_once, _init_l_Lake_DSL_VerComparator_toExpr___closed__6);
v___x_158_ = l_Lean_mkApp3(v___x_154_, v___x_155_, v___x_156_, v___x_157_);
return v___x_158_;
}
else
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_obj_once(&l_Lake_DSL_VerComparator_toExpr___closed__9, &l_Lake_DSL_VerComparator_toExpr___closed__9_once, _init_l_Lake_DSL_VerComparator_toExpr___closed__9);
v___x_160_ = l_Lean_mkApp3(v___x_154_, v___x_155_, v___x_156_, v___x_159_);
return v___x_160_;
}
}
}
static lean_object* _init_l_Lake_DSL_instToExprVerComparator___closed__2(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_165_ = lean_box(0);
v___x_166_ = ((lean_object*)(l_Lake_DSL_instToExprVerComparator___closed__1));
v___x_167_ = l_Lean_mkConst(v___x_166_, v___x_165_);
return v___x_167_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprVerComparator___closed__3(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_obj_once(&l_Lake_DSL_instToExprVerComparator___closed__2, &l_Lake_DSL_instToExprVerComparator___closed__2_once, _init_l_Lake_DSL_instToExprVerComparator___closed__2);
v___x_169_ = ((lean_object*)(l_Lake_DSL_instToExprVerComparator___closed__0));
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v___x_168_);
return v___x_170_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprVerComparator(void){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lean_obj_once(&l_Lake_DSL_instToExprVerComparator___closed__3, &l_Lake_DSL_instToExprVerComparator___closed__3_once, _init_l_Lake_DSL_instToExprVerComparator___closed__3);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0_spec__0(lean_object* v_nilFn_172_, lean_object* v_consFn_173_, lean_object* v_x_174_){
_start:
{
if (lean_obj_tag(v_x_174_) == 0)
{
lean_dec_ref(v_consFn_173_);
lean_inc_ref(v_nilFn_172_);
return v_nilFn_172_;
}
else
{
lean_object* v_head_175_; lean_object* v_tail_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v_head_175_ = lean_ctor_get(v_x_174_, 0);
lean_inc(v_head_175_);
v_tail_176_ = lean_ctor_get(v_x_174_, 1);
lean_inc(v_tail_176_);
lean_dec_ref_known(v_x_174_, 2);
v___x_177_ = l_Lake_DSL_VerComparator_toExpr(v_head_175_);
lean_inc_ref(v_consFn_173_);
v___x_178_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0_spec__0(v_nilFn_172_, v_consFn_173_, v_tail_176_);
v___x_179_ = l_Lean_mkAppB(v_consFn_173_, v___x_177_, v___x_178_);
return v___x_179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0_spec__0___boxed(lean_object* v_nilFn_180_, lean_object* v_consFn_181_, lean_object* v_x_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0_spec__0(v_nilFn_180_, v_consFn_181_, v_x_182_);
lean_dec_ref(v_nilFn_180_);
return v_res_183_;
}
}
static lean_object* _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_box(0);
v___x_190_ = l_unsafeCast___redArg(v___x_189_);
return v___x_190_;
}
}
static lean_object* _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_191_ = lean_box(0);
v___x_192_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__3, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__3_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__3);
v___x_193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v___x_191_);
return v___x_193_;
}
}
static lean_object* _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4);
v___x_195_ = ((lean_object*)(l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__2));
v___x_196_ = l_Lean_mkConst(v___x_195_, v___x_194_);
return v___x_196_;
}
}
static lean_object* _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__8(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_201_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4);
v___x_202_ = ((lean_object*)(l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__7));
v___x_203_ = l_Lean_mkConst(v___x_202_, v___x_201_);
return v___x_203_;
}
}
static lean_object* _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__9(void){
_start:
{
lean_object* v_type_204_; lean_object* v___x_205_; lean_object* v_nil_206_; 
v_type_204_ = lean_obj_once(&l_Lake_DSL_instToExprVerComparator___closed__2, &l_Lake_DSL_instToExprVerComparator___closed__2_once, _init_l_Lake_DSL_instToExprVerComparator___closed__2);
v___x_205_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__8, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__8_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__8);
v_nil_206_ = l_Lean_Expr_app___override(v___x_205_, v_type_204_);
return v_nil_206_;
}
}
static lean_object* _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__12(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4);
v___x_212_ = ((lean_object*)(l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__11));
v___x_213_ = l_Lean_mkConst(v___x_212_, v___x_211_);
return v___x_213_;
}
}
static lean_object* _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__13(void){
_start:
{
lean_object* v_type_214_; lean_object* v___x_215_; lean_object* v_cons_216_; 
v_type_214_ = lean_obj_once(&l_Lake_DSL_instToExprVerComparator___closed__2, &l_Lake_DSL_instToExprVerComparator___closed__2_once, _init_l_Lake_DSL_instToExprVerComparator___closed__2);
v___x_215_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__12, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__12_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__12);
v_cons_216_ = l_Lean_Expr_app___override(v___x_215_, v_type_214_);
return v_cons_216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0(lean_object* v_nilFn_217_, lean_object* v_consFn_218_, lean_object* v_x_219_){
_start:
{
if (lean_obj_tag(v_x_219_) == 0)
{
lean_dec_ref(v_consFn_218_);
lean_inc_ref(v_nilFn_217_);
return v_nilFn_217_;
}
else
{
lean_object* v_head_220_; lean_object* v_tail_221_; lean_object* v_type_222_; lean_object* v___x_223_; lean_object* v_nil_224_; lean_object* v_cons_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_head_220_ = lean_ctor_get(v_x_219_, 0);
lean_inc(v_head_220_);
v_tail_221_ = lean_ctor_get(v_x_219_, 1);
lean_inc(v_tail_221_);
lean_dec_ref_known(v_x_219_, 2);
v_type_222_ = lean_obj_once(&l_Lake_DSL_instToExprVerComparator___closed__2, &l_Lake_DSL_instToExprVerComparator___closed__2_once, _init_l_Lake_DSL_instToExprVerComparator___closed__2);
v___x_223_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__5, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__5_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__5);
v_nil_224_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__9, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__9_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__9);
v_cons_225_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__13, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__13_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__13);
v___x_226_ = lean_array_to_list(v_head_220_);
v___x_227_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0_spec__0(v_nil_224_, v_cons_225_, v___x_226_);
v___x_228_ = l_Lean_mkAppB(v___x_223_, v_type_222_, v___x_227_);
lean_inc_ref(v_consFn_218_);
v___x_229_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0(v_nilFn_217_, v_consFn_218_, v_tail_221_);
v___x_230_ = l_Lean_mkAppB(v_consFn_218_, v___x_228_, v___x_229_);
return v___x_230_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___boxed(lean_object* v_nilFn_231_, lean_object* v_consFn_232_, lean_object* v_x_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0(v_nilFn_231_, v_consFn_232_, v_x_233_);
lean_dec_ref(v_nilFn_231_);
return v_res_234_;
}
}
static lean_object* _init_l_Lake_DSL_VerRange_toExpr___closed__2(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_240_ = lean_box(0);
v___x_241_ = ((lean_object*)(l_Lake_DSL_VerRange_toExpr___closed__1));
v___x_242_ = l_Lean_mkConst(v___x_241_, v___x_240_);
return v___x_242_;
}
}
static lean_object* _init_l_Lake_DSL_VerRange_toExpr___closed__5(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_246_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__4);
v___x_247_ = ((lean_object*)(l_Lake_DSL_VerRange_toExpr___closed__4));
v___x_248_ = l_Lean_mkConst(v___x_247_, v___x_246_);
return v___x_248_;
}
}
static lean_object* _init_l_Lake_DSL_VerRange_toExpr___closed__6(void){
_start:
{
lean_object* v_type_249_; lean_object* v___x_250_; lean_object* v_type_251_; 
v_type_249_ = lean_obj_once(&l_Lake_DSL_instToExprVerComparator___closed__2, &l_Lake_DSL_instToExprVerComparator___closed__2_once, _init_l_Lake_DSL_instToExprVerComparator___closed__2);
v___x_250_ = lean_obj_once(&l_Lake_DSL_VerRange_toExpr___closed__5, &l_Lake_DSL_VerRange_toExpr___closed__5_once, _init_l_Lake_DSL_VerRange_toExpr___closed__5);
v_type_251_ = l_Lean_Expr_app___override(v___x_250_, v_type_249_);
return v_type_251_;
}
}
static lean_object* _init_l_Lake_DSL_VerRange_toExpr___closed__7(void){
_start:
{
lean_object* v_type_252_; lean_object* v___x_253_; lean_object* v_nil_254_; 
v_type_252_ = lean_obj_once(&l_Lake_DSL_VerRange_toExpr___closed__6, &l_Lake_DSL_VerRange_toExpr___closed__6_once, _init_l_Lake_DSL_VerRange_toExpr___closed__6);
v___x_253_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__8, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__8_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__8);
v_nil_254_ = l_Lean_Expr_app___override(v___x_253_, v_type_252_);
return v_nil_254_;
}
}
static lean_object* _init_l_Lake_DSL_VerRange_toExpr___closed__8(void){
_start:
{
lean_object* v_type_255_; lean_object* v___x_256_; lean_object* v_cons_257_; 
v_type_255_ = lean_obj_once(&l_Lake_DSL_VerRange_toExpr___closed__6, &l_Lake_DSL_VerRange_toExpr___closed__6_once, _init_l_Lake_DSL_VerRange_toExpr___closed__6);
v___x_256_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__12, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__12_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__12);
v_cons_257_ = l_Lean_Expr_app___override(v___x_256_, v_type_255_);
return v_cons_257_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_VerRange_toExpr(lean_object* v_self_258_){
_start:
{
lean_object* v_toString_259_; lean_object* v_clauses_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v_type_263_; lean_object* v___x_264_; lean_object* v_nil_265_; lean_object* v_cons_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_toString_259_ = lean_ctor_get(v_self_258_, 0);
lean_inc_ref(v_toString_259_);
v_clauses_260_ = lean_ctor_get(v_self_258_, 1);
lean_inc_ref(v_clauses_260_);
lean_dec_ref(v_self_258_);
v___x_261_ = lean_obj_once(&l_Lake_DSL_VerRange_toExpr___closed__2, &l_Lake_DSL_VerRange_toExpr___closed__2_once, _init_l_Lake_DSL_VerRange_toExpr___closed__2);
v___x_262_ = l_Lean_mkStrLit(v_toString_259_);
v_type_263_ = lean_obj_once(&l_Lake_DSL_VerRange_toExpr___closed__6, &l_Lake_DSL_VerRange_toExpr___closed__6_once, _init_l_Lake_DSL_VerRange_toExpr___closed__6);
v___x_264_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__5, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__5_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0___closed__5);
v_nil_265_ = lean_obj_once(&l_Lake_DSL_VerRange_toExpr___closed__7, &l_Lake_DSL_VerRange_toExpr___closed__7_once, _init_l_Lake_DSL_VerRange_toExpr___closed__7);
v_cons_266_ = lean_obj_once(&l_Lake_DSL_VerRange_toExpr___closed__8, &l_Lake_DSL_VerRange_toExpr___closed__8_once, _init_l_Lake_DSL_VerRange_toExpr___closed__8);
v___x_267_ = lean_array_to_list(v_clauses_260_);
v___x_268_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lake_DSL_VerRange_toExpr_spec__0(v_nil_265_, v_cons_266_, v___x_267_);
v___x_269_ = l_Lean_mkAppB(v___x_264_, v_type_263_, v___x_268_);
v___x_270_ = l_Lean_mkAppB(v___x_261_, v___x_262_, v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprVerRange___closed__2(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_275_ = lean_box(0);
v___x_276_ = ((lean_object*)(l_Lake_DSL_instToExprVerRange___closed__1));
v___x_277_ = l_Lean_mkConst(v___x_276_, v___x_275_);
return v___x_277_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprVerRange___closed__3(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_obj_once(&l_Lake_DSL_instToExprVerRange___closed__2, &l_Lake_DSL_instToExprVerRange___closed__2_once, _init_l_Lake_DSL_instToExprVerRange___closed__2);
v___x_279_ = ((lean_object*)(l_Lake_DSL_instToExprVerRange___closed__0));
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v___x_278_);
return v___x_280_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprVerRange(void){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lean_obj_once(&l_Lake_DSL_instToExprVerRange___closed__3, &l_Lake_DSL_instToExprVerRange___closed__3_once, _init_l_Lake_DSL_instToExprVerRange___closed__3);
return v___x_281_;
}
}
static lean_object* _init_l_Lake_DSL_InputVer_toExpr___closed__3(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_288_ = lean_box(0);
v___x_289_ = ((lean_object*)(l_Lake_DSL_InputVer_toExpr___closed__2));
v___x_290_ = l_Lean_mkConst(v___x_289_, v___x_288_);
return v___x_290_;
}
}
static lean_object* _init_l_Lake_DSL_InputVer_toExpr___closed__6(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_box(0);
v___x_297_ = ((lean_object*)(l_Lake_DSL_InputVer_toExpr___closed__5));
v___x_298_ = l_Lean_mkConst(v___x_297_, v___x_296_);
return v___x_298_;
}
}
static lean_object* _init_l_Lake_DSL_InputVer_toExpr___closed__9(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_304_ = lean_box(0);
v___x_305_ = ((lean_object*)(l_Lake_DSL_InputVer_toExpr___closed__8));
v___x_306_ = l_Lean_mkConst(v___x_305_, v___x_304_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_InputVer_toExpr(lean_object* v_self_307_){
_start:
{
switch(lean_obj_tag(v_self_307_))
{
case 0:
{
lean_object* v___x_308_; 
v___x_308_ = lean_obj_once(&l_Lake_DSL_InputVer_toExpr___closed__3, &l_Lake_DSL_InputVer_toExpr___closed__3_once, _init_l_Lake_DSL_InputVer_toExpr___closed__3);
return v___x_308_;
}
case 1:
{
lean_object* v_rev_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v_rev_309_ = lean_ctor_get(v_self_307_, 0);
lean_inc_ref(v_rev_309_);
lean_dec_ref_known(v_self_307_, 1);
v___x_310_ = lean_obj_once(&l_Lake_DSL_InputVer_toExpr___closed__6, &l_Lake_DSL_InputVer_toExpr___closed__6_once, _init_l_Lake_DSL_InputVer_toExpr___closed__6);
v___x_311_ = l_Lean_mkStrLit(v_rev_309_);
v___x_312_ = l_Lean_Expr_app___override(v___x_310_, v___x_311_);
return v___x_312_;
}
default: 
{
lean_object* v_ver_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v_ver_313_ = lean_ctor_get(v_self_307_, 0);
lean_inc_ref(v_ver_313_);
lean_dec_ref_known(v_self_307_, 1);
v___x_314_ = lean_obj_once(&l_Lake_DSL_InputVer_toExpr___closed__9, &l_Lake_DSL_InputVer_toExpr___closed__9_once, _init_l_Lake_DSL_InputVer_toExpr___closed__9);
v___x_315_ = l_Lake_DSL_VerRange_toExpr(v_ver_313_);
v___x_316_ = l_Lean_Expr_app___override(v___x_314_, v___x_315_);
return v___x_316_;
}
}
}
}
static lean_object* _init_l_Lake_DSL_instToExprInputVer___closed__2(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = lean_box(0);
v___x_322_ = ((lean_object*)(l_Lake_DSL_instToExprInputVer___closed__1));
v___x_323_ = l_Lean_mkConst(v___x_322_, v___x_321_);
return v___x_323_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprInputVer___closed__3(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = lean_obj_once(&l_Lake_DSL_instToExprInputVer___closed__2, &l_Lake_DSL_instToExprInputVer___closed__2_once, _init_l_Lake_DSL_instToExprInputVer___closed__2);
v___x_325_ = ((lean_object*)(l_Lake_DSL_instToExprInputVer___closed__0));
v___x_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v___x_324_);
return v___x_326_;
}
}
static lean_object* _init_l_Lake_DSL_instToExprInputVer(void){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = lean_obj_once(&l_Lake_DSL_instToExprInputVer___closed__3, &l_Lake_DSL_instToExprInputVer___closed__3_once, _init_l_Lake_DSL_instToExprInputVer___closed__3);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_toResultExpr___redArg(lean_object* v_inst_328_, lean_object* v_x_329_){
_start:
{
if (lean_obj_tag(v_x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
lean_dec_ref(v_inst_328_);
v_a_330_ = lean_ctor_get(v_x_329_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v_x_329_);
if (v_isSharedCheck_337_ == 0)
{
v___x_332_ = v_x_329_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v_x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_330_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
else
{
lean_object* v_toExpr_338_; lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_347_; 
v_toExpr_338_ = lean_ctor_get(v_inst_328_, 0);
lean_inc_ref(v_toExpr_338_);
lean_dec_ref(v_inst_328_);
v_a_339_ = lean_ctor_get(v_x_329_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v_x_329_);
if (v_isSharedCheck_347_ == 0)
{
v___x_341_ = v_x_329_;
v_isShared_342_ = v_isSharedCheck_347_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v_x_329_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_347_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_343_; lean_object* v___x_345_; 
v___x_343_ = lean_apply_1(v_toExpr_338_, v_a_339_);
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v___x_343_);
v___x_345_ = v___x_341_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_343_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_DSL_toResultExpr(lean_object* v_00_u03b1_348_, lean_object* v_inst_349_, lean_object* v_x_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lake_DSL_toResultExpr___redArg(v_inst_349_, v_x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_unsafe__1(lean_object* v_resT_352_, lean_object* v_resE_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
uint8_t v___x_359_; uint8_t v___x_360_; lean_object* v___x_361_; 
v___x_359_ = 1;
v___x_360_ = 1;
v___x_361_ = l_Lean_Meta_evalExpr___redArg(v_resT_352_, v_resE_353_, v___x_359_, v___x_360_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_unsafe__1___boxed(lean_object* v_resT_362_, lean_object* v_resE_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_unsafe__1(v_resT_362_, v_resE_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
lean_dec(v_a_367_);
lean_dec_ref(v_a_366_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__0(lean_object* v_msgData_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; lean_object* v_env_377_; lean_object* v___x_378_; lean_object* v_toCold_379_; lean_object* v_mctx_380_; lean_object* v_lctx_381_; lean_object* v_options_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_376_ = lean_st_ref_get(v___y_374_);
v_env_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc_ref(v_env_377_);
lean_dec(v___x_376_);
v___x_378_ = lean_st_ref_get(v___y_372_);
v_toCold_379_ = lean_ctor_get(v___y_373_, 0);
v_mctx_380_ = lean_ctor_get(v___x_378_, 0);
lean_inc_ref(v_mctx_380_);
lean_dec(v___x_378_);
v_lctx_381_ = lean_ctor_get(v___y_371_, 2);
v_options_382_ = lean_ctor_get(v_toCold_379_, 2);
lean_inc_ref(v_options_382_);
lean_inc_ref(v_lctx_381_);
v___x_383_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_383_, 0, v_env_377_);
lean_ctor_set(v___x_383_, 1, v_mctx_380_);
lean_ctor_set(v___x_383_, 2, v_lctx_381_);
lean_ctor_set(v___x_383_, 3, v_options_382_);
v___x_384_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v_msgData_370_);
v___x_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__0___boxed(lean_object* v_msgData_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__0(v_msgData_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
return v_res_392_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = lean_box(1);
v___x_394_ = l_Lean_MessageData_ofFormat(v___x_393_);
return v___x_394_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__2));
v___x_399_ = l_Lean_MessageData_ofFormat(v___x_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3(lean_object* v_x_400_, lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 0)
{
return v_x_400_;
}
else
{
lean_object* v_head_402_; lean_object* v_tail_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_425_; 
v_head_402_ = lean_ctor_get(v_x_401_, 0);
v_tail_403_ = lean_ctor_get(v_x_401_, 1);
v_isSharedCheck_425_ = !lean_is_exclusive(v_x_401_);
if (v_isSharedCheck_425_ == 0)
{
v___x_405_ = v_x_401_;
v_isShared_406_ = v_isSharedCheck_425_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_tail_403_);
lean_inc(v_head_402_);
lean_dec(v_x_401_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_425_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v_before_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_423_; 
v_before_407_ = lean_ctor_get(v_head_402_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v_head_402_);
if (v_isSharedCheck_423_ == 0)
{
lean_object* v_unused_424_; 
v_unused_424_ = lean_ctor_get(v_head_402_, 1);
lean_dec(v_unused_424_);
v___x_409_ = v_head_402_;
v_isShared_410_ = v_isSharedCheck_423_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_before_407_);
lean_dec(v_head_402_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_423_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_411_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_410_ == 0)
{
lean_ctor_set_tag(v___x_409_, 7);
lean_ctor_set(v___x_409_, 1, v___x_411_);
lean_ctor_set(v___x_409_, 0, v_x_400_);
v___x_413_ = v___x_409_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_x_400_);
lean_ctor_set(v_reuseFailAlloc_422_, 1, v___x_411_);
v___x_413_ = v_reuseFailAlloc_422_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_414_; lean_object* v___x_416_; 
v___x_414_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__3);
if (v_isShared_406_ == 0)
{
lean_ctor_set_tag(v___x_405_, 7);
lean_ctor_set(v___x_405_, 1, v___x_414_);
lean_ctor_set(v___x_405_, 0, v___x_413_);
v___x_416_ = v___x_405_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___x_413_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v___x_414_);
v___x_416_ = v_reuseFailAlloc_421_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_417_ = l_Lean_MessageData_ofSyntax(v_before_407_);
v___x_418_ = l_Lean_indentD(v___x_417_);
v___x_419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_416_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v_x_400_ = v___x_419_;
v_x_401_ = v_tail_403_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__2(lean_object* v_opts_426_, lean_object* v_opt_427_){
_start:
{
lean_object* v_name_428_; lean_object* v_defValue_429_; lean_object* v_map_430_; lean_object* v___x_431_; 
v_name_428_ = lean_ctor_get(v_opt_427_, 0);
v_defValue_429_ = lean_ctor_get(v_opt_427_, 1);
v_map_430_ = lean_ctor_get(v_opts_426_, 0);
v___x_431_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_430_, v_name_428_);
if (lean_obj_tag(v___x_431_) == 0)
{
uint8_t v___x_432_; 
v___x_432_ = lean_unbox(v_defValue_429_);
return v___x_432_;
}
else
{
lean_object* v_val_433_; 
v_val_433_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_val_433_);
lean_dec_ref_known(v___x_431_, 1);
if (lean_obj_tag(v_val_433_) == 1)
{
uint8_t v_v_434_; 
v_v_434_ = lean_ctor_get_uint8(v_val_433_, 0);
lean_dec_ref_known(v_val_433_, 0);
return v_v_434_;
}
else
{
uint8_t v___x_435_; 
lean_dec(v_val_433_);
v___x_435_ = lean_unbox(v_defValue_429_);
return v___x_435_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__2___boxed(lean_object* v_opts_436_, lean_object* v_opt_437_){
_start:
{
uint8_t v_res_438_; lean_object* v_r_439_; 
v_res_438_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__2(v_opts_436_, v_opt_437_);
lean_dec_ref(v_opt_437_);
lean_dec_ref(v_opts_436_);
v_r_439_ = lean_box(v_res_438_);
return v_r_439_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__1));
v___x_444_ = l_Lean_MessageData_ofFormat(v___x_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg(lean_object* v_msgData_445_, lean_object* v_macroStack_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_toCold_449_; lean_object* v_options_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
v_toCold_449_ = lean_ctor_get(v___y_447_, 0);
v_options_450_ = lean_ctor_get(v_toCold_449_, 2);
v___x_451_ = l_Lean_Elab_pp_macroStack;
v___x_452_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__2(v_options_450_, v___x_451_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; 
lean_dec(v_macroStack_446_);
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v_msgData_445_);
return v___x_453_;
}
else
{
if (lean_obj_tag(v_macroStack_446_) == 0)
{
lean_object* v___x_454_; 
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v_msgData_445_);
return v___x_454_;
}
else
{
lean_object* v_head_455_; lean_object* v_after_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_471_; 
v_head_455_ = lean_ctor_get(v_macroStack_446_, 0);
lean_inc(v_head_455_);
v_after_456_ = lean_ctor_get(v_head_455_, 1);
v_isSharedCheck_471_ = !lean_is_exclusive(v_head_455_);
if (v_isSharedCheck_471_ == 0)
{
lean_object* v_unused_472_; 
v_unused_472_ = lean_ctor_get(v_head_455_, 0);
lean_dec(v_unused_472_);
v___x_458_ = v_head_455_;
v_isShared_459_ = v_isSharedCheck_471_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_after_456_);
lean_dec(v_head_455_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_471_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_460_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_459_ == 0)
{
lean_ctor_set_tag(v___x_458_, 7);
lean_ctor_set(v___x_458_, 1, v___x_460_);
lean_ctor_set(v___x_458_, 0, v_msgData_445_);
v___x_462_ = v___x_458_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_msgData_445_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v___x_460_);
v___x_462_ = v_reuseFailAlloc_470_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v_msgData_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_463_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___closed__2);
v___x_464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = l_Lean_MessageData_ofSyntax(v_after_456_);
v___x_466_ = l_Lean_indentD(v___x_465_);
v_msgData_467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_467_, 0, v___x_464_);
lean_ctor_set(v_msgData_467_, 1, v___x_466_);
v___x_468_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1_spec__3(v_msgData_467_, v_macroStack_446_);
v___x_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
return v___x_469_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_473_, lean_object* v_macroStack_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg(v_msgData_473_, v_macroStack_474_, v___y_475_);
lean_dec_ref(v___y_475_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___redArg(lean_object* v_msg_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
lean_object* v_ref_486_; lean_object* v_macroStack_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v_a_490_; lean_object* v___x_491_; lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_500_; 
v_ref_486_ = lean_ctor_get(v___y_483_, 2);
v_macroStack_487_ = lean_ctor_get(v___y_479_, 1);
v___x_488_ = l_Lean_Elab_getBetterRef(v_ref_486_, v_macroStack_487_);
v___x_489_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__0(v_msg_478_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
v_a_490_ = lean_ctor_get(v___x_489_, 0);
lean_inc(v_a_490_);
lean_dec_ref(v___x_489_);
lean_inc(v_macroStack_487_);
v___x_491_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg(v_a_490_, v_macroStack_487_, v___y_483_);
v_a_492_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_500_ == 0)
{
v___x_494_ = v___x_491_;
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_491_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_496_; lean_object* v___x_498_; 
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_488_);
lean_ctor_set(v___x_496_, 1, v_a_492_);
if (v_isShared_495_ == 0)
{
lean_ctor_set_tag(v___x_494_, 1);
lean_ctor_set(v___x_494_, 0, v___x_496_);
v___x_498_ = v___x_494_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___redArg___boxed(lean_object* v_msg_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___redArg(v_msg_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
return v_res_509_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__4(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_516_ = lean_box(0);
v___x_517_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__3));
v___x_518_ = l_Lean_mkConst(v___x_517_, v___x_516_);
return v___x_518_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__5(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_519_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__4, &l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__4_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__4);
v___x_520_ = lean_unsigned_to_nat(2u);
v___x_521_ = lean_mk_empty_array_with_capacity(v___x_520_);
v___x_522_ = lean_array_push(v___x_521_, v___x_519_);
return v___x_522_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__12(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__11));
v___x_534_ = l_String_toRawSubstring_x27(v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__22(void){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_555_ = lean_box(0);
v___x_556_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__21));
v___x_557_ = l_Lean_mkConst(v___x_556_, v___x_555_);
return v___x_557_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__23(void){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__22, &l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__22_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__22);
v___x_559_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__5, &l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__5_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__5);
v___x_560_ = lean_array_push(v___x_559_, v___x_558_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion(lean_object* v_stx_567_, lean_object* v_expectedType_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_576_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__1));
v___x_577_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__5, &l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__5_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__5);
v___x_578_ = lean_array_push(v___x_577_, v_expectedType_568_);
v___x_579_ = l_Lean_Meta_mkAppM(v___x_576_, v___x_578_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_toCold_580_; lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_644_; 
v_toCold_580_ = lean_ctor_get(v_a_573_, 0);
v_a_581_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_644_ == 0)
{
v___x_583_ = v___x_579_;
v_isShared_584_ = v_isSharedCheck_644_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_579_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_644_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v_ref_585_; lean_object* v_quotContext_586_; lean_object* v_currMacroScope_587_; uint8_t v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_600_; 
v_ref_585_ = lean_ctor_get(v_a_573_, 2);
v_quotContext_586_ = lean_ctor_get(v_toCold_580_, 8);
v_currMacroScope_587_ = lean_ctor_get(v_toCold_580_, 9);
v___x_588_ = 0;
v___x_589_ = l_Lean_SourceInfo_fromRef(v_ref_585_, v___x_588_);
v___x_590_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__10));
v___x_591_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__12, &l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__12_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__12);
v___x_592_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__13));
lean_inc(v_currMacroScope_587_);
lean_inc(v_quotContext_586_);
v___x_593_ = l_Lean_addMacroScope(v_quotContext_586_, v___x_592_, v_currMacroScope_587_);
v___x_594_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__17));
lean_inc_n(v___x_589_, 2);
v___x_595_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_595_, 0, v___x_589_);
lean_ctor_set(v___x_595_, 1, v___x_591_);
lean_ctor_set(v___x_595_, 2, v___x_593_);
lean_ctor_set(v___x_595_, 3, v___x_594_);
v___x_596_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__19));
v___x_597_ = l_Lean_Syntax_node1(v___x_589_, v___x_596_, v_stx_567_);
v___x_598_ = l_Lean_Syntax_node2(v___x_589_, v___x_590_, v___x_595_, v___x_597_);
if (v_isShared_584_ == 0)
{
lean_ctor_set_tag(v___x_583_, 1);
v___x_600_ = v___x_583_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_581_);
v___x_600_ = v_reuseFailAlloc_643_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
uint8_t v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_601_ = 1;
v___x_602_ = lean_box(0);
v___x_603_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_598_, v___x_600_, v___x_601_, v___x_601_, v___x_602_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_603_, 1);
v___x_605_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__23, &l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__23_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__23);
v___x_606_ = l_Lean_Meta_mkAppM(v___x_576_, v___x_605_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v_a_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v_a_607_ = lean_ctor_get(v___x_606_, 0);
lean_inc(v_a_607_);
lean_dec_ref_known(v___x_606_, 1);
v___x_608_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__26));
v___x_609_ = lean_unsigned_to_nat(1u);
v___x_610_ = lean_mk_empty_array_with_capacity(v___x_609_);
v___x_611_ = lean_array_push(v___x_610_, v_a_604_);
v___x_612_ = l_Lean_Meta_mkAppM(v___x_608_, v___x_611_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; uint8_t v___x_614_; lean_object* v___x_615_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_a_613_);
lean_dec_ref_known(v___x_612_, 1);
v___x_614_ = 1;
v___x_615_ = l_Lean_Meta_evalExpr___redArg(v_a_607_, v_a_613_, v___x_614_, v___x_601_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_634_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_634_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_634_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_634_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
if (lean_obj_tag(v_a_616_) == 0)
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_629_; 
lean_del_object(v___x_618_);
v_a_620_ = lean_ctor_get(v_a_616_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v_a_616_);
if (v_isSharedCheck_629_ == 0)
{
v___x_622_ = v_a_616_;
v_isShared_623_ = v_isSharedCheck_629_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v_a_616_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_629_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
lean_ctor_set_tag(v___x_622_, 3);
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_620_);
v___x_625_ = v_reuseFailAlloc_628_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = l_Lean_MessageData_ofFormat(v___x_625_);
v___x_627_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___redArg(v___x_626_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
return v___x_627_;
}
}
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; 
v_a_630_ = lean_ctor_get(v_a_616_, 0);
lean_inc(v_a_630_);
lean_dec_ref_known(v_a_616_, 1);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v_a_630_);
v___x_632_ = v___x_618_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_630_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_a_635_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_615_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_615_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
else
{
lean_dec(v_a_607_);
return v___x_612_;
}
}
else
{
lean_dec(v_a_604_);
return v___x_606_;
}
}
else
{
return v___x_603_;
}
}
}
}
else
{
lean_dec(v_stx_567_);
return v___x_579_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___boxed(lean_object* v_stx_645_, lean_object* v_expectedType_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion(v_stx_645_, v_expectedType_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_);
lean_dec(v_a_652_);
lean_dec_ref(v_a_651_);
lean_dec(v_a_650_);
lean_dec_ref(v_a_649_);
lean_dec(v_a_648_);
lean_dec_ref(v_a_647_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0(lean_object* v_00_u03b1_655_, lean_object* v_msg_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___redArg(v_msg_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___boxed(lean_object* v_00_u03b1_665_, lean_object* v_msg_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0(v_00_u03b1_665_, v_msg_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
lean_dec(v___y_670_);
lean_dec_ref(v___y_669_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1(lean_object* v_msgData_675_, lean_object* v_macroStack_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___redArg(v_msgData_675_, v_macroStack_676_, v___y_681_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1___boxed(lean_object* v_msgData_685_, lean_object* v_macroStack_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0_spec__1(v_msgData_685_, v_macroStack_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
return v_res_694_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__3(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__2));
v___x_702_ = l_Lean_stringToMessageData(v___x_701_);
return v___x_702_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__5(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__4));
v___x_705_ = l_Lean_stringToMessageData(v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion(lean_object* v_stx_706_, lean_object* v_expectedType_x3f_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_715_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1));
lean_inc(v_stx_706_);
v___x_716_ = l_Lean_Syntax_isOfKind(v_stx_706_, v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; lean_object* v___x_718_; 
lean_dec(v_expectedType_x3f_707_);
lean_dec(v_stx_706_);
v___x_717_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__3, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__3_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__3);
v___x_718_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___redArg(v___x_717_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
return v___x_718_;
}
else
{
lean_object* v___x_719_; lean_object* v_v_720_; lean_object* v___x_721_; 
v___x_719_ = lean_unsigned_to_nat(1u);
v_v_720_ = l_Lean_Syntax_getArg(v_stx_706_, v___x_719_);
lean_dec(v_stx_706_);
lean_inc(v_expectedType_x3f_707_);
v___x_721_ = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(v_expectedType_x3f_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_dec_ref_known(v___x_721_, 1);
if (lean_obj_tag(v_expectedType_x3f_707_) == 1)
{
lean_object* v_val_722_; lean_object* v___x_723_; 
v_val_722_ = lean_ctor_get(v_expectedType_x3f_707_, 0);
lean_inc(v_val_722_);
lean_dec_ref_known(v_expectedType_x3f_707_, 1);
v___x_723_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion(v_v_720_, v_val_722_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; lean_object* v___x_725_; 
lean_dec(v_v_720_);
lean_dec(v_expectedType_x3f_707_);
v___x_724_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__5, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__5_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__5);
v___x_725_ = l_Lean_throwError___at___00__private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion_spec__0___redArg(v___x_724_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
return v___x_725_;
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
lean_dec(v_v_720_);
lean_dec(v_expectedType_x3f_707_);
v_a_726_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_721_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_721_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___boxed(lean_object* v_stx_734_, lean_object* v_expectedType_x3f_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion(v_stx_734_, v_expectedType_x3f_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_);
lean_dec(v_a_741_);
lean_dec_ref(v_a_740_);
lean_dec(v_a_739_);
lean_dec_ref(v_a_738_);
lean_dec(v_a_737_);
lean_dec_ref(v_a_736_);
return v_res_743_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__0(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_box(0);
v___x_745_ = l_unsafeCast___redArg(v___x_744_);
return v___x_745_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__2(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_747_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__1));
v___x_748_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__0, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__0_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__0);
v___x_749_ = l_Lean_Name_str___override(v___x_748_, v___x_747_);
return v___x_749_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__3(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_750_ = ((lean_object*)(l_Lake_DSL_SemVerCore_toExpr___closed__0));
v___x_751_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__2, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__2_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__2);
v___x_752_ = l_Lean_Name_str___override(v___x_751_, v___x_750_);
return v___x_752_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__4(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_753_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__24));
v___x_754_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__3, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__3_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__3);
v___x_755_ = l_Lean_Name_str___override(v___x_754_, v___x_753_);
return v___x_755_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__6(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_757_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__5));
v___x_758_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__4, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__4_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__4);
v___x_759_ = l_Lean_Name_str___override(v___x_758_, v___x_757_);
return v___x_759_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__7(void){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_760_ = lean_unsigned_to_nat(0u);
v___x_761_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__6, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__6_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__6);
v___x_762_ = l_Lean_Name_num___override(v___x_761_, v___x_760_);
return v___x_762_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__8(void){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_763_ = ((lean_object*)(l_Lake_DSL_SemVerCore_toExpr___closed__0));
v___x_764_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__7, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__7_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__7);
v___x_765_ = l_Lean_Name_str___override(v___x_764_, v___x_763_);
return v___x_765_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__9(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_766_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_evalDecodeVersion___closed__24));
v___x_767_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__8, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__8_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__8);
v___x_768_ = l_Lean_Name_str___override(v___x_767_, v___x_766_);
return v___x_768_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__11(void){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_770_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__10));
v___x_771_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__9, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__9_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__9);
v___x_772_ = l_Lean_Name_str___override(v___x_771_, v___x_770_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1(){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_774_ = l_Lean_Elab_Term_termElabAttribute;
v___x_775_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1));
v___x_776_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__11, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__11_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__11);
v___x_777_ = lean_alloc_closure((void*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___boxed), 9, 0);
v___x_778_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_774_, v___x_775_, v___x_776_, v___x_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___boxed(lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1();
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit(lean_object* v_stx_792_, lean_object* v_a_793_, lean_object* v_a_794_){
_start:
{
lean_object* v___x_795_; uint8_t v___x_796_; 
v___x_795_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__1));
lean_inc(v_stx_792_);
v___x_796_ = l_Lean_Syntax_isOfKind(v_stx_792_, v___x_795_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; 
lean_dec(v_stx_792_);
v___x_797_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__2));
v___x_798_ = l_Lean_Macro_throwError___redArg(v___x_797_, v_a_793_, v_a_794_);
return v___x_798_;
}
else
{
lean_object* v_ref_799_; lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v_ref_799_ = lean_ctor_get(v_a_793_, 5);
v___x_800_ = lean_unsigned_to_nat(1u);
v___x_801_ = l_Lean_Syntax_getArg(v_stx_792_, v___x_800_);
lean_dec(v_stx_792_);
v___x_802_ = 0;
v___x_803_ = l_Lean_SourceInfo_fromRef(v_ref_799_, v___x_802_);
v___x_804_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___closed__1));
v___x_805_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__3));
lean_inc_n(v___x_803_, 3);
v___x_806_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_803_);
lean_ctor_set(v___x_806_, 1, v___x_805_);
v___x_807_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__5));
v___x_808_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__6));
v___x_809_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_803_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = l_Lean_Syntax_node2(v___x_803_, v___x_807_, v___x_809_, v___x_801_);
v___x_811_ = l_Lean_Syntax_node2(v___x_803_, v___x_804_, v___x_806_, v___x_810_);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
lean_ctor_set(v___x_812_, 1, v_a_794_);
return v___x_812_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___boxed(lean_object* v_stx_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit(v_stx_813_, v_a_814_, v_a_815_);
lean_dec_ref(v_a_814_);
return v_res_816_;
}
}
static lean_object* _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__1(void){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_818_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__0));
v___x_819_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__9, &l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__9_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1___closed__9);
v___x_820_ = l_Lean_Name_str___override(v___x_819_, v___x_818_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1(){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_822_ = l_Lean_Elab_macroAttribute;
v___x_823_ = ((lean_object*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___closed__1));
v___x_824_ = lean_obj_once(&l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__1, &l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__1_once, _init_l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___closed__1);
v___x_825_ = lean_alloc_closure((void*)(l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___boxed), 3, 0);
v___x_826_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_822_, v___x_823_, v___x_824_, v___x_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1___boxed(lean_object* v_a_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1();
return v_res_828_;
}
}
lean_object* runtime_initialize_Lean_ToExpr(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Version(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Dependency(uint8_t builtin);
lean_object* runtime_initialize_Lake_DSL_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Eval(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_DSL_VerLit(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Dependency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_DSL_instToExprSemVerCore = _init_l_Lake_DSL_instToExprSemVerCore();
lean_mark_persistent(l_Lake_DSL_instToExprSemVerCore);
l_Lake_DSL_instToExprStdVer = _init_l_Lake_DSL_instToExprStdVer();
lean_mark_persistent(l_Lake_DSL_instToExprStdVer);
l_Lake_DSL_instToExprComparatorOp = _init_l_Lake_DSL_instToExprComparatorOp();
lean_mark_persistent(l_Lake_DSL_instToExprComparatorOp);
l_Lake_DSL_instToExprVerComparator = _init_l_Lake_DSL_instToExprVerComparator();
lean_mark_persistent(l_Lake_DSL_instToExprVerComparator);
l_Lake_DSL_instToExprVerRange = _init_l_Lake_DSL_instToExprVerRange();
lean_mark_persistent(l_Lake_DSL_instToExprVerRange);
l_Lake_DSL_instToExprInputVer = _init_l_Lake_DSL_instToExprInputVer();
lean_mark_persistent(l_Lake_DSL_instToExprInputVer);
res = l___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_elabEvalVersion__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit___regBuiltin___private_Lake_DSL_VerLit_0__Lake_DSL_expandVerLit__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_DSL_VerLit(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_ToExpr(uint8_t builtin);
lean_object* initialize_Lake_Util_Version(uint8_t builtin);
lean_object* initialize_Lake_Config_Dependency(uint8_t builtin);
lean_object* initialize_Lake_DSL_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Meta_Eval(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_DSL_VerLit(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_ToExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Dependency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_DSL_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_DSL_VerLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_DSL_VerLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_DSL_VerLit(builtin);
}
#ifdef __cplusplus
}
#endif

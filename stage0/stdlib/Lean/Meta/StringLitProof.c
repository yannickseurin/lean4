// Lean compiler output
// Module: Lean.Meta.StringLitProof
// Imports: public import Lean.Meta.AppBuilder
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_data(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_List_tail_x21___redArg(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Meta_mkStringLitNeProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__0 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__0_value;
static const lean_string_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__1 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__1_value;
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__2 = (const lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__2_value;
static lean_once_cell_t l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__0 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__1;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__2 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__2_value;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__3 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__3_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__3_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__4 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__5;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__6;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__7;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__8;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__9 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__9_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__9_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__10 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__10_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__11;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__12;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__13 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__13_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__13_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__14 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__14_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__15;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofList"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__16 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__16_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__13_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__16_value),LEAN_SCALAR_PTR_LITERAL(118, 246, 177, 142, 179, 9, 199, 233)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__17 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__17_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__18;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mt"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__19 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__19_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__19_value),LEAN_SCALAR_PTR_LITERAL(236, 40, 53, 218, 205, 101, 166, 74)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__20 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__20_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__21;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ofList_injective"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__22 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__22_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__13_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__23_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__22_value),LEAN_SCALAR_PTR_LITERAL(85, 99, 204, 155, 80, 133, 77, 68)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__23 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__23_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__24;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__25 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__25_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__26;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__27;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "cons_ne_nil"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__28 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__28_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__29_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__28_value),LEAN_SCALAR_PTR_LITERAL(60, 170, 34, 7, 73, 41, 87, 161)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__29 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__29_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__30;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__31 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__31_value;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__32 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__32_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__31_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__33_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__32_value),LEAN_SCALAR_PTR_LITERAL(106, 137, 24, 74, 49, 62, 0, 94)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__33 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__33_value;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__34 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__34_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__34_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__35 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__35_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__36;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__37;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__38;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__39 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__39_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__39_value),LEAN_SCALAR_PTR_LITERAL(140, 76, 64, 139, 36, 56, 191, 236)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__40 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__40_value;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "drop"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__41 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__41_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__42_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__41_value),LEAN_SCALAR_PTR_LITERAL(106, 246, 106, 249, 224, 85, 68, 146)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__42 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__42_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__43;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__44 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__44_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__44_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__45 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__45_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__46;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__47;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "instInhabited"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__48 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__48_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__49_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__48_value),LEAN_SCALAR_PTR_LITERAL(235, 71, 242, 59, 163, 162, 132, 113)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__49 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__49_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__50;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__51 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__51_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__51_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__52 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__52_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__53;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNat"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__54 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__54_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__55_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__54_value),LEAN_SCALAR_PTR_LITERAL(200, 248, 141, 246, 182, 101, 131, 69)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__55 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__55_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__56;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "get!Internal"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__57 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__57_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__58_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__57_value),LEAN_SCALAR_PTR_LITERAL(70, 67, 44, 187, 22, 159, 103, 20)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__58 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__58_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__59;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__60 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__60_value;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__61 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__61_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__60_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__62_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__61_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__62 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__62_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__63;
static const lean_string_object l_Lean_Meta_mkStringLitNeProof___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ne_of_beq_eq_false"};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__64 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__64_value;
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__65_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__51_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_mkStringLitNeProof___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__65_value_aux_0),((lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__64_value),LEAN_SCALAR_PTR_LITERAL(152, 213, 144, 137, 140, 238, 73, 24)}};
static const lean_object* l_Lean_Meta_mkStringLitNeProof___closed__65 = (const lean_object*)&l_Lean_Meta_mkStringLitNeProof___closed__65_value;
static lean_once_cell_t l_Lean_Meta_mkStringLitNeProof___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkStringLitNeProof___closed__66;
LEAN_EXPORT lean_object* l_Lean_Meta_mkStringLitNeProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkStringLitNeProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkStringLitNeProof___lam__0(lean_object* v___x_1_, lean_object* v_type_2_, lean_object* v_inhabCharExpr_3_, lean_object* v_iExpr_4_, lean_object* v___x_5_, lean_object* v_lExpr_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = l_Lean_mkApp4(v___x_1_, v_type_2_, v_inhabCharExpr_3_, v_lExpr_6_, v_iExpr_4_);
v___x_8_ = l_Lean_Expr_app___override(v___x_5_, v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_12_; lean_object* v___x_13_; 
v___x_12_ = 65;
v___x_13_ = lean_box_uint32(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg(lean_object* v_l_u2081_14_, lean_object* v_l_u2082_15_, lean_object* v_range_16_, lean_object* v_b_17_, lean_object* v_i_18_){
_start:
{
lean_object* v_stop_19_; lean_object* v_step_20_; uint8_t v___x_21_; 
v_stop_19_ = lean_ctor_get(v_range_16_, 1);
v_step_20_ = lean_ctor_get(v_range_16_, 2);
v___x_21_ = lean_nat_dec_lt(v_i_18_, v_stop_19_);
if (v___x_21_ == 0)
{
lean_dec(v_i_18_);
lean_inc_ref(v_b_17_);
return v_b_17_;
}
else
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; uint32_t v___x_31_; uint32_t v___x_32_; uint8_t v___x_33_; 
v___x_22_ = lean_box(0);
v___x_23_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___closed__0));
v___x_27_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed__const__1;
lean_inc_n(v_i_18_, 2);
v___x_28_ = l_List_get_x21Internal___redArg(v___x_27_, v_l_u2081_14_, v_i_18_);
v___x_29_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed__const__1;
v___x_30_ = l_List_get_x21Internal___redArg(v___x_29_, v_l_u2082_15_, v_i_18_);
v___x_31_ = lean_unbox_uint32(v___x_28_);
lean_dec(v___x_28_);
v___x_32_ = lean_unbox_uint32(v___x_30_);
lean_dec(v___x_30_);
v___x_33_ = lean_uint32_dec_eq(v___x_31_, v___x_32_);
if (v___x_33_ == 0)
{
if (v___x_21_ == 0)
{
goto v___jp_24_;
}
else
{
lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_34_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_34_, 0, v_i_18_);
v___x_35_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_22_);
return v___x_35_;
}
}
else
{
goto v___jp_24_;
}
v___jp_24_:
{
lean_object* v___x_25_; 
v___x_25_ = lean_nat_add(v_i_18_, v_step_20_);
lean_dec(v_i_18_);
v_b_17_ = v___x_23_;
v_i_18_ = v___x_25_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed(lean_object* v_l_u2081_36_, lean_object* v_l_u2082_37_, lean_object* v_range_38_, lean_object* v_b_39_, lean_object* v_i_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg(v_l_u2081_36_, v_l_u2082_37_, v_range_38_, v_b_39_, v_i_40_);
lean_dec_ref(v_b_39_);
lean_dec_ref(v_range_38_);
lean_dec(v_l_u2082_37_);
lean_dec(v_l_u2081_36_);
return v_res_41_;
}
}
static lean_object* _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__3(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_47_ = lean_box(0);
v___x_48_ = ((lean_object*)(l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__2));
v___x_49_ = l_Lean_mkConst(v___x_48_, v___x_47_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0(lean_object* v_nilFn_50_, lean_object* v_consFn_51_, lean_object* v_x_52_){
_start:
{
if (lean_obj_tag(v_x_52_) == 0)
{
lean_dec_ref(v_consFn_51_);
lean_inc_ref(v_nilFn_50_);
return v_nilFn_50_;
}
else
{
lean_object* v_head_53_; lean_object* v_tail_54_; lean_object* v___x_55_; uint32_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v_head_53_ = lean_ctor_get(v_x_52_, 0);
v_tail_54_ = lean_ctor_get(v_x_52_, 1);
v___x_55_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__3, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__3_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__3);
v___x_56_ = lean_unbox_uint32(v_head_53_);
v___x_57_ = lean_uint32_to_nat(v___x_56_);
v___x_58_ = l_Lean_mkRawNatLit(v___x_57_);
v___x_59_ = l_Lean_Expr_app___override(v___x_55_, v___x_58_);
lean_inc_ref(v_consFn_51_);
v___x_60_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0(v_nilFn_50_, v_consFn_51_, v_tail_54_);
v___x_61_ = l_Lean_mkAppB(v_consFn_51_, v___x_59_, v___x_60_);
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___boxed(lean_object* v_nilFn_62_, lean_object* v_consFn_63_, lean_object* v_x_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0(v_nilFn_62_, v_consFn_63_, v_x_64_);
lean_dec(v_x_64_);
lean_dec_ref(v_nilFn_62_);
return v_res_65_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__1(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v_type_70_; 
v___x_68_ = lean_box(0);
v___x_69_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__0));
v_type_70_ = l_Lean_mkConst(v___x_69_, v___x_68_);
return v_type_70_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__5(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_box(0);
v___x_77_ = l_unsafeCast___redArg(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__6(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_box(0);
v___x_79_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__5, &l_Lean_Meta_mkStringLitNeProof___closed__5_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__5);
v___x_80_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__7(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__6, &l_Lean_Meta_mkStringLitNeProof___closed__6_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__6);
v___x_82_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__4));
v___x_83_ = l_Lean_mkConst(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__8(void){
_start:
{
lean_object* v_type_84_; lean_object* v___x_85_; lean_object* v_nil_86_; 
v_type_84_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__1, &l_Lean_Meta_mkStringLitNeProof___closed__1_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__1);
v___x_85_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__7, &l_Lean_Meta_mkStringLitNeProof___closed__7_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__7);
v_nil_86_ = l_Lean_Expr_app___override(v___x_85_, v_type_84_);
return v_nil_86_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__11(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__6, &l_Lean_Meta_mkStringLitNeProof___closed__6_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__6);
v___x_92_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__10));
v___x_93_ = l_Lean_mkConst(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__12(void){
_start:
{
lean_object* v_type_94_; lean_object* v___x_95_; lean_object* v_cons_96_; 
v_type_94_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__1, &l_Lean_Meta_mkStringLitNeProof___closed__1_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__1);
v___x_95_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__11, &l_Lean_Meta_mkStringLitNeProof___closed__11_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__11);
v_cons_96_ = l_Lean_Expr_app___override(v___x_95_, v_type_94_);
return v_cons_96_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__15(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v_strType_102_; 
v___x_100_ = lean_box(0);
v___x_101_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__14));
v_strType_102_ = l_Lean_mkConst(v___x_101_, v___x_100_);
return v_strType_102_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__18(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = lean_box(0);
v___x_108_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__17));
v___x_109_ = l_Lean_mkConst(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__21(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_box(0);
v___x_114_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__20));
v___x_115_ = l_Lean_mkConst(v___x_114_, v___x_113_);
return v___x_115_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__24(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_box(0);
v___x_121_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__23));
v___x_122_ = l_Lean_mkConst(v___x_121_, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__26(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__6, &l_Lean_Meta_mkStringLitNeProof___closed__6_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__6);
v___x_126_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__25));
v___x_127_ = l_Lean_mkConst(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__27(void){
_start:
{
lean_object* v_type_128_; lean_object* v___x_129_; lean_object* v_listCharTy_130_; 
v_type_128_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__1, &l_Lean_Meta_mkStringLitNeProof___closed__1_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__1);
v___x_129_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__26, &l_Lean_Meta_mkStringLitNeProof___closed__26_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__26);
v_listCharTy_130_ = l_Lean_Expr_app___override(v___x_129_, v_type_128_);
return v_listCharTy_130_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__30(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_135_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__6, &l_Lean_Meta_mkStringLitNeProof___closed__6_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__6);
v___x_136_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__29));
v___x_137_ = l_Lean_mkConst(v___x_136_, v___x_135_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__36(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__5, &l_Lean_Meta_mkStringLitNeProof___closed__5_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__5);
v___x_147_ = l_Lean_Level_succ___override(v___x_146_);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__37(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_box(0);
v___x_149_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__36, &l_Lean_Meta_mkStringLitNeProof___closed__36_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__36);
v___x_150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__38(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__37, &l_Lean_Meta_mkStringLitNeProof___closed__37_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__37);
v___x_152_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__35));
v___x_153_ = l_Lean_mkConst(v___x_152_, v___x_151_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__43(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_161_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__6, &l_Lean_Meta_mkStringLitNeProof___closed__6_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__6);
v___x_162_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__42));
v___x_163_ = l_Lean_mkConst(v___x_162_, v___x_161_);
return v___x_163_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__46(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_167_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__37, &l_Lean_Meta_mkStringLitNeProof___closed__37_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__37);
v___x_168_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__36, &l_Lean_Meta_mkStringLitNeProof___closed__36_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__36);
v___x_169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___x_167_);
return v___x_169_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__47(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_170_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__46, &l_Lean_Meta_mkStringLitNeProof___closed__46_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__46);
v___x_171_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__45));
v___x_172_ = l_Lean_mkConst(v___x_171_, v___x_170_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__50(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v_inhabCharExpr_179_; 
v___x_177_ = lean_box(0);
v___x_178_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__49));
v_inhabCharExpr_179_ = l_Lean_mkConst(v___x_178_, v___x_177_);
return v_inhabCharExpr_179_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__53(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v_natConst_185_; 
v___x_183_ = lean_box(0);
v___x_184_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__52));
v_natConst_185_ = l_Lean_mkConst(v___x_184_, v___x_183_);
return v_natConst_185_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__56(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_190_ = lean_box(0);
v___x_191_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__55));
v___x_192_ = l_Lean_mkConst(v___x_191_, v___x_190_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__59(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_197_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__6, &l_Lean_Meta_mkStringLitNeProof___closed__6_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__6);
v___x_198_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__58));
v___x_199_ = l_Lean_mkConst(v___x_198_, v___x_197_);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__63(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_205_ = lean_box(0);
v___x_206_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__62));
v___x_207_ = l_Lean_mkConst(v___x_206_, v___x_205_);
return v___x_207_;
}
}
static lean_object* _init_l_Lean_Meta_mkStringLitNeProof___closed__66(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = lean_box(0);
v___x_213_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__65));
v___x_214_ = l_Lean_mkConst(v___x_213_, v___x_212_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkStringLitNeProof(lean_object* v_s_u2081_215_, lean_object* v_s_u2082_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_l_u2081_222_; lean_object* v_l_u2082_223_; lean_object* v_type_224_; lean_object* v_nil_225_; lean_object* v___x_226_; lean_object* v_cons_227_; lean_object* v_l_u2081Expr_228_; lean_object* v_l_u2082Expr_229_; lean_object* v___y_231_; lean_object* v___y_232_; lean_object* v_listNeProof_233_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v_listCharTy_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___y_256_; lean_object* v___y_257_; lean_object* v___y_258_; lean_object* v___y_259_; lean_object* v___y_260_; uint32_t v_fst_261_; lean_object* v_snd_262_; lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_278_; lean_object* v___y_330_; uint8_t v___x_338_; 
v_l_u2081_222_ = lean_string_data(v_s_u2081_215_);
v_l_u2082_223_ = lean_string_data(v_s_u2082_216_);
v_type_224_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__1, &l_Lean_Meta_mkStringLitNeProof___closed__1_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__1);
v_nil_225_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__8, &l_Lean_Meta_mkStringLitNeProof___closed__8_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__8);
v___x_226_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__11, &l_Lean_Meta_mkStringLitNeProof___closed__11_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__11);
v_cons_227_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__12, &l_Lean_Meta_mkStringLitNeProof___closed__12_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__12);
v_l_u2081Expr_228_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0(v_nil_225_, v_cons_227_, v_l_u2081_222_);
v_l_u2082Expr_229_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0(v_nil_225_, v_cons_227_, v_l_u2082_223_);
v_listCharTy_252_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__27, &l_Lean_Meta_mkStringLitNeProof___closed__27_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__27);
v___x_253_ = l_List_lengthTR___redArg(v_l_u2081_222_);
v___x_254_ = l_List_lengthTR___redArg(v_l_u2082_223_);
v___x_338_ = lean_nat_dec_le(v___x_253_, v___x_254_);
if (v___x_338_ == 0)
{
lean_inc(v___x_254_);
v___y_330_ = v___x_254_;
goto v___jp_329_;
}
else
{
lean_inc(v___x_253_);
v___y_330_ = v___x_253_;
goto v___jp_329_;
}
v___jp_230_:
{
lean_object* v_strType_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v_strEq_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_strType_234_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__15, &l_Lean_Meta_mkStringLitNeProof___closed__15_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__15);
v___x_235_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__18, &l_Lean_Meta_mkStringLitNeProof___closed__18_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__18);
lean_inc_ref(v_l_u2081Expr_228_);
v___x_236_ = l_Lean_Expr_app___override(v___x_235_, v_l_u2081Expr_228_);
lean_inc_ref(v_l_u2082Expr_229_);
v___x_237_ = l_Lean_Expr_app___override(v___x_235_, v_l_u2082Expr_229_);
v_strEq_238_ = l_Lean_mkApp3(v___y_231_, v_strType_234_, v___x_236_, v___x_237_);
v___x_239_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__21, &l_Lean_Meta_mkStringLitNeProof___closed__21_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__21);
v___x_240_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__24, &l_Lean_Meta_mkStringLitNeProof___closed__24_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__24);
v___x_241_ = l_Lean_mkAppB(v___x_240_, v_l_u2081Expr_228_, v_l_u2082Expr_229_);
v___x_242_ = l_Lean_mkApp4(v___x_239_, v_strEq_238_, v___y_232_, v___x_241_, v_listNeProof_233_);
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
v___jp_244_:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__21, &l_Lean_Meta_mkStringLitNeProof___closed__21_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__21);
lean_inc_ref(v___y_248_);
v___x_251_ = l_Lean_mkApp4(v___x_250_, v___y_248_, v___y_247_, v___y_245_, v___y_249_);
v___y_231_ = v___y_246_;
v___y_232_ = v___y_248_;
v_listNeProof_233_ = v___x_251_;
goto v___jp_230_;
}
v___jp_255_:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v_hdExpr_266_; lean_object* v_tlExpr_267_; lean_object* v___x_268_; lean_object* v_consNeNil_269_; uint8_t v___x_270_; 
v___x_263_ = lean_obj_once(&l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__3, &l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__3_once, _init_l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0___closed__3);
v___x_264_ = lean_uint32_to_nat(v_fst_261_);
v___x_265_ = l_Lean_mkRawNatLit(v___x_264_);
v_hdExpr_266_ = l_Lean_Expr_app___override(v___x_263_, v___x_265_);
v_tlExpr_267_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Meta_mkStringLitNeProof_spec__0(v_nil_225_, v_cons_227_, v_snd_262_);
lean_dec(v_snd_262_);
v___x_268_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__30, &l_Lean_Meta_mkStringLitNeProof___closed__30_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__30);
lean_inc_ref(v_tlExpr_267_);
lean_inc_ref(v_hdExpr_266_);
v_consNeNil_269_ = l_Lean_mkApp3(v___x_268_, v_type_224_, v_hdExpr_266_, v_tlExpr_267_);
v___x_270_ = lean_nat_dec_le(v___x_253_, v___x_254_);
lean_dec(v___x_254_);
lean_dec(v___x_253_);
if (v___x_270_ == 0)
{
lean_dec_ref(v_tlExpr_267_);
lean_dec_ref(v_hdExpr_266_);
v___y_245_ = v___y_257_;
v___y_246_ = v___y_258_;
v___y_247_ = v___y_260_;
v___y_248_ = v___y_259_;
v___y_249_ = v_consNeNil_269_;
goto v___jp_244_;
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_271_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__33));
lean_inc(v___y_256_);
v___x_272_ = l_Lean_mkConst(v___x_271_, v___y_256_);
v___x_273_ = l_Lean_mkApp3(v___x_226_, v_type_224_, v_hdExpr_266_, v_tlExpr_267_);
v___x_274_ = l_Lean_mkApp4(v___x_272_, v_listCharTy_252_, v___x_273_, v_nil_225_, v_consNeNil_269_);
v___y_245_ = v___y_257_;
v___y_246_ = v___y_258_;
v___y_247_ = v___y_260_;
v___y_248_ = v___y_259_;
v___y_249_ = v___x_274_;
goto v___jp_244_;
}
}
v___jp_275_:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_listEq_281_; uint8_t v___x_282_; 
v___x_279_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__37, &l_Lean_Meta_mkStringLitNeProof___closed__37_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__37);
v___x_280_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__38, &l_Lean_Meta_mkStringLitNeProof___closed__38_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__38);
lean_inc_ref(v_l_u2082Expr_229_);
lean_inc_ref(v_l_u2081Expr_228_);
v_listEq_281_ = l_Lean_mkApp3(v___x_280_, v_listCharTy_252_, v_l_u2081Expr_228_, v_l_u2082Expr_229_);
v___x_282_ = lean_nat_dec_lt(v___y_278_, v___y_276_);
if (v___x_282_ == 0)
{
lean_object* v_nExpr_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v_dropFn_289_; lean_object* v_dropL1_290_; lean_object* v_dropL2_291_; lean_object* v_dropEq_292_; lean_object* v___x_293_; lean_object* v_congrArgFn_294_; uint8_t v___x_295_; 
lean_dec(v___y_278_);
lean_inc(v___y_276_);
v_nExpr_283_ = l_Lean_mkNatLit(v___y_276_);
v___x_284_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__40));
v___x_285_ = 0;
v___x_286_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__43, &l_Lean_Meta_mkStringLitNeProof___closed__43_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__43);
v___x_287_ = l_Lean_mkBVar(v___y_277_);
lean_inc_ref_n(v_nExpr_283_, 2);
v___x_288_ = l_Lean_mkApp3(v___x_286_, v_type_224_, v_nExpr_283_, v___x_287_);
v_dropFn_289_ = l_Lean_mkLambda(v___x_284_, v___x_285_, v_listCharTy_252_, v___x_288_);
lean_inc_ref_n(v_l_u2081Expr_228_, 2);
v_dropL1_290_ = l_Lean_mkApp3(v___x_286_, v_type_224_, v_nExpr_283_, v_l_u2081Expr_228_);
lean_inc_ref_n(v_l_u2082Expr_229_, 2);
v_dropL2_291_ = l_Lean_mkApp3(v___x_286_, v_type_224_, v_nExpr_283_, v_l_u2082Expr_229_);
v_dropEq_292_ = l_Lean_mkApp3(v___x_280_, v_listCharTy_252_, v_dropL1_290_, v_dropL2_291_);
v___x_293_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__47, &l_Lean_Meta_mkStringLitNeProof___closed__47_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__47);
v_congrArgFn_294_ = l_Lean_mkApp5(v___x_293_, v_listCharTy_252_, v_listCharTy_252_, v_l_u2081Expr_228_, v_l_u2082Expr_229_, v_dropFn_289_);
v___x_295_ = lean_nat_dec_le(v___x_253_, v___x_254_);
if (v___x_295_ == 0)
{
lean_object* v_dropped_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; uint32_t v___x_300_; 
lean_dec(v_l_u2082_223_);
v_dropped_296_ = l_List_drop___redArg(v___y_276_, v_l_u2081_222_);
lean_dec(v_l_u2081_222_);
v___x_297_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed__const__1;
v___x_298_ = l_List_head_x21___redArg(v___x_297_, v_dropped_296_);
v___x_299_ = l_List_tail_x21___redArg(v_dropped_296_);
lean_dec(v_dropped_296_);
v___x_300_ = lean_unbox_uint32(v___x_298_);
lean_dec(v___x_298_);
v___y_256_ = v___x_279_;
v___y_257_ = v_congrArgFn_294_;
v___y_258_ = v___x_280_;
v___y_259_ = v_listEq_281_;
v___y_260_ = v_dropEq_292_;
v_fst_261_ = v___x_300_;
v_snd_262_ = v___x_299_;
goto v___jp_255_;
}
else
{
lean_object* v_dropped_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint32_t v___x_305_; 
lean_dec(v_l_u2081_222_);
v_dropped_301_ = l_List_drop___redArg(v___y_276_, v_l_u2082_223_);
lean_dec(v_l_u2082_223_);
v___x_302_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed__const__1;
v___x_303_ = l_List_head_x21___redArg(v___x_302_, v_dropped_301_);
v___x_304_ = l_List_tail_x21___redArg(v_dropped_301_);
lean_dec(v_dropped_301_);
v___x_305_ = lean_unbox_uint32(v___x_303_);
lean_dec(v___x_303_);
v___y_256_ = v___x_279_;
v___y_257_ = v_congrArgFn_294_;
v___y_258_ = v___x_280_;
v___y_259_ = v_listEq_281_;
v___y_260_ = v_dropEq_292_;
v_fst_261_ = v___x_305_;
v_snd_262_ = v___x_304_;
goto v___jp_255_;
}
}
else
{
lean_object* v_inhabCharExpr_306_; lean_object* v_natConst_307_; lean_object* v_iExpr_308_; lean_object* v___x_309_; uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v_projFn_316_; lean_object* v_projL1_317_; lean_object* v_projL2_318_; lean_object* v_projEq_319_; lean_object* v___x_320_; lean_object* v_congrArgFn_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
lean_dec(v___y_276_);
lean_dec(v___x_254_);
lean_dec(v___x_253_);
lean_dec(v_l_u2082_223_);
lean_dec(v_l_u2081_222_);
v_inhabCharExpr_306_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__50, &l_Lean_Meta_mkStringLitNeProof___closed__50_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__50);
v_natConst_307_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__53, &l_Lean_Meta_mkStringLitNeProof___closed__53_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__53);
v_iExpr_308_ = l_Lean_mkNatLit(v___y_278_);
v___x_309_ = ((lean_object*)(l_Lean_Meta_mkStringLitNeProof___closed__40));
v___x_310_ = 0;
v___x_311_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__56, &l_Lean_Meta_mkStringLitNeProof___closed__56_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__56);
v___x_312_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__59, &l_Lean_Meta_mkStringLitNeProof___closed__59_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__59);
v___x_313_ = l_Lean_mkBVar(v___y_277_);
lean_inc_ref_n(v_iExpr_308_, 2);
v___x_314_ = l_Lean_mkApp4(v___x_312_, v_type_224_, v_inhabCharExpr_306_, v___x_313_, v_iExpr_308_);
v___x_315_ = l_Lean_Expr_app___override(v___x_311_, v___x_314_);
v_projFn_316_ = l_Lean_mkLambda(v___x_309_, v___x_310_, v_listCharTy_252_, v___x_315_);
lean_inc_ref_n(v_l_u2081Expr_228_, 2);
v_projL1_317_ = l_Lean_Meta_mkStringLitNeProof___lam__0(v___x_312_, v_type_224_, v_inhabCharExpr_306_, v_iExpr_308_, v___x_311_, v_l_u2081Expr_228_);
lean_inc_ref_n(v_l_u2082Expr_229_, 2);
v_projL2_318_ = l_Lean_Meta_mkStringLitNeProof___lam__0(v___x_312_, v_type_224_, v_inhabCharExpr_306_, v_iExpr_308_, v___x_311_, v_l_u2082Expr_229_);
lean_inc_ref(v_projL2_318_);
lean_inc_ref(v_projL1_317_);
v_projEq_319_ = l_Lean_mkApp3(v___x_280_, v_natConst_307_, v_projL1_317_, v_projL2_318_);
v___x_320_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__47, &l_Lean_Meta_mkStringLitNeProof___closed__47_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__47);
v_congrArgFn_321_ = l_Lean_mkApp5(v___x_320_, v_listCharTy_252_, v_natConst_307_, v_l_u2081Expr_228_, v_l_u2082Expr_229_, v_projFn_316_);
v___x_322_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__63, &l_Lean_Meta_mkStringLitNeProof___closed__63_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__63);
v___x_323_ = l_Lean_Meta_mkEqRefl(v___x_322_, v_a_217_, v_a_218_, v_a_219_, v_a_220_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc(v_a_324_);
lean_dec_ref_known(v___x_323_, 1);
v___x_325_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__66, &l_Lean_Meta_mkStringLitNeProof___closed__66_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__66);
v___x_326_ = l_Lean_mkApp3(v___x_325_, v_projL1_317_, v_projL2_318_, v_a_324_);
v___x_327_ = lean_obj_once(&l_Lean_Meta_mkStringLitNeProof___closed__21, &l_Lean_Meta_mkStringLitNeProof___closed__21_once, _init_l_Lean_Meta_mkStringLitNeProof___closed__21);
lean_inc_ref(v_listEq_281_);
v___x_328_ = l_Lean_mkApp4(v___x_327_, v_listEq_281_, v_projEq_319_, v_congrArgFn_321_, v___x_326_);
v___y_231_ = v___x_280_;
v___y_232_ = v_listEq_281_;
v_listNeProof_233_ = v___x_328_;
goto v___jp_230_;
}
else
{
lean_dec_ref(v_congrArgFn_321_);
lean_dec_ref(v_projEq_319_);
lean_dec_ref(v_projL2_318_);
lean_dec_ref(v_projL1_317_);
lean_dec_ref(v_listEq_281_);
lean_dec_ref(v_l_u2082Expr_229_);
lean_dec_ref(v_l_u2081Expr_228_);
return v___x_323_;
}
}
}
v___jp_329_:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v_fst_336_; 
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = lean_unsigned_to_nat(1u);
lean_inc(v___y_330_);
v___x_333_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_333_, 0, v___x_331_);
lean_ctor_set(v___x_333_, 1, v___y_330_);
lean_ctor_set(v___x_333_, 2, v___x_332_);
v___x_334_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___closed__0));
v___x_335_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg(v_l_u2081_222_, v_l_u2082_223_, v___x_333_, v___x_334_, v___x_331_);
lean_dec_ref_known(v___x_333_, 3);
v_fst_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_fst_336_);
lean_dec_ref(v___x_335_);
if (lean_obj_tag(v_fst_336_) == 0)
{
lean_inc(v___y_330_);
v___y_276_ = v___y_330_;
v___y_277_ = v___x_331_;
v___y_278_ = v___y_330_;
goto v___jp_275_;
}
else
{
lean_object* v_val_337_; 
v_val_337_ = lean_ctor_get(v_fst_336_, 0);
lean_inc(v_val_337_);
lean_dec_ref_known(v_fst_336_, 1);
v___y_276_ = v___y_330_;
v___y_277_ = v___x_331_;
v___y_278_ = v_val_337_;
goto v___jp_275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkStringLitNeProof___boxed(lean_object* v_s_u2081_339_, lean_object* v_s_u2082_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_Meta_mkStringLitNeProof(v_s_u2081_339_, v_s_u2082_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
lean_dec(v_a_342_);
lean_dec_ref(v_a_341_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1(lean_object* v_l_u2081_347_, lean_object* v_l_u2082_348_, lean_object* v_range_349_, lean_object* v_b_350_, lean_object* v_i_351_, lean_object* v_hs_352_, lean_object* v_hl_353_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg(v_l_u2081_347_, v_l_u2082_348_, v_range_349_, v_b_350_, v_i_351_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___boxed(lean_object* v_l_u2081_355_, lean_object* v_l_u2082_356_, lean_object* v_range_357_, lean_object* v_b_358_, lean_object* v_i_359_, lean_object* v_hs_360_, lean_object* v_hl_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1(v_l_u2081_355_, v_l_u2082_356_, v_range_357_, v_b_358_, v_i_359_, v_hs_360_, v_hl_361_);
lean_dec_ref(v_b_358_);
lean_dec_ref(v_range_357_);
lean_dec(v_l_u2082_356_);
lean_dec(v_l_u2081_355_);
return v_res_362_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_StringLitProof(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed__const__1 = _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed__const__1();
lean_mark_persistent(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Meta_mkStringLitNeProof_spec__1___redArg___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_StringLitProof(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_StringLitProof(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_StringLitProof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_StringLitProof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_StringLitProof(builtin);
}
#ifdef __cplusplus
}
#endif

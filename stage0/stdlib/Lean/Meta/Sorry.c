// Lean compiler output
// Module: Lean.Meta.Sorry
// Imports: public import Lean.Data.Lsp.Utf16 public import Lean.Meta.ForEachExpr public import Lean.Meta.InferType public import Lean.Util.Recognizers
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
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getBoundedAppFn(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isSorry(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_name_x3f(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_forEachExpr_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
lean_object* l_Lean_Declaration_foldExprM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkSorry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sorryAx"};
static const lean_object* l_Lean_Meta_mkSorry___closed__0 = (const lean_object*)&l_Lean_Meta_mkSorry___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkSorry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkSorry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 190, 164, 146, 38, 179, 69, 72)}};
static const lean_object* l_Lean_Meta_mkSorry___closed__1 = (const lean_object*)&l_Lean_Meta_mkSorry___closed__1_value;
static const lean_string_object l_Lean_Meta_mkSorry___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_mkSorry___closed__2 = (const lean_object*)&l_Lean_Meta_mkSorry___closed__2_value;
static const lean_string_object l_Lean_Meta_mkSorry___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_mkSorry___closed__3 = (const lean_object*)&l_Lean_Meta_mkSorry___closed__3_value;
static const lean_ctor_object l_Lean_Meta_mkSorry___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkSorry___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_mkSorry___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkSorry___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_mkSorry___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_mkSorry___closed__4 = (const lean_object*)&l_Lean_Meta_mkSorry___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkSorry___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkSorry___closed__5;
static const lean_string_object l_Lean_Meta_mkSorry___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_mkSorry___closed__6 = (const lean_object*)&l_Lean_Meta_mkSorry___closed__6_value;
static const lean_ctor_object l_Lean_Meta_mkSorry___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkSorry___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_mkSorry___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkSorry___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_mkSorry___closed__6_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_mkSorry___closed__7 = (const lean_object*)&l_Lean_Meta_mkSorry___closed__7_value;
static lean_once_cell_t l_Lean_Meta_mkSorry___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkSorry___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_mkSorry(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSorry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_SorryLabelView_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_sorry"};
static const lean_object* l_Lean_Meta_SorryLabelView_encode___closed__0 = (const lean_object*)&l_Lean_Meta_SorryLabelView_encode___closed__0_value;
static lean_once_cell_t l_Lean_Meta_SorryLabelView_encode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_SorryLabelView_encode___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_SorryLabelView_encode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SorryLabelView_encode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SorryLabelView_decode_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_SorryLabelView_decode_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkLabeledSorry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__0 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__0_value;
static const lean_string_object l_Lean_Meta_mkLabeledSorry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__1 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__1_value;
static const lean_ctor_object l_Lean_Meta_mkLabeledSorry___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkLabeledSorry___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__2 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__2_value;
static const lean_string_object l_Lean_Meta_mkLabeledSorry___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tag"};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__3 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__3_value;
static const lean_ctor_object l_Lean_Meta_mkLabeledSorry___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__3_value),LEAN_SCALAR_PTR_LITERAL(242, 132, 79, 115, 245, 174, 114, 146)}};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__4 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__4_value;
static const lean_string_object l_Lean_Meta_mkLabeledSorry___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__5 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__5_value;
static const lean_ctor_object l_Lean_Meta_mkLabeledSorry___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__5_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__6 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__6_value;
static lean_once_cell_t l_Lean_Meta_mkLabeledSorry___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkLabeledSorry___closed__7;
static const lean_string_object l_Lean_Meta_mkLabeledSorry___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Function"};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__8 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__8_value;
static const lean_string_object l_Lean_Meta_mkLabeledSorry___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__9 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__9_value;
static const lean_ctor_object l_Lean_Meta_mkLabeledSorry___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__8_value),LEAN_SCALAR_PTR_LITERAL(225, 8, 186, 189, 152, 89, 197, 12)}};
static const lean_ctor_object l_Lean_Meta_mkLabeledSorry___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__9_value),LEAN_SCALAR_PTR_LITERAL(231, 33, 22, 82, 100, 121, 126, 178)}};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__10 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__10_value;
static lean_once_cell_t l_Lean_Meta_mkLabeledSorry___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkLabeledSorry___closed__11;
static lean_once_cell_t l_Lean_Meta_mkLabeledSorry___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkLabeledSorry___closed__12;
static lean_once_cell_t l_Lean_Meta_mkLabeledSorry___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkLabeledSorry___closed__13;
static lean_once_cell_t l_Lean_Meta_mkLabeledSorry___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkLabeledSorry___closed__14;
static lean_once_cell_t l_Lean_Meta_mkLabeledSorry___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkLabeledSorry___closed__15;
static lean_once_cell_t l_Lean_Meta_mkLabeledSorry___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkLabeledSorry___closed__16;
static const lean_string_object l_Lean_Meta_mkLabeledSorry___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__17 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__17_value;
static const lean_ctor_object l_Lean_Meta_mkLabeledSorry___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__5_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l_Lean_Meta_mkLabeledSorry___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__18_value_aux_0),((lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__17_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l_Lean_Meta_mkLabeledSorry___closed__18 = (const lean_object*)&l_Lean_Meta_mkLabeledSorry___closed__18_value;
static lean_once_cell_t l_Lean_Meta_mkLabeledSorry___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkLabeledSorry___closed__19;
LEAN_EXPORT lean_object* l_Lean_Meta_mkLabeledSorry(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkLabeledSorry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLabeledSorry_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLabeledSorry_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getSorry_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_getSorry_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___redArg(lean_object* v_constName_1_, uint8_t v_skipRealize_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v_env_6_; uint8_t v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_5_ = lean_st_ref_get(v___y_3_);
v_env_6_ = lean_ctor_get(v___x_5_, 0);
lean_inc_ref(v_env_6_);
lean_dec(v___x_5_);
v___x_7_ = l_Lean_Environment_contains(v_env_6_, v_constName_1_, v_skipRealize_2_);
v___x_8_ = lean_box(v___x_7_);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___redArg___boxed(lean_object* v_constName_10_, lean_object* v_skipRealize_11_, lean_object* v___y_12_, lean_object* v___y_13_){
_start:
{
uint8_t v_skipRealize_boxed_14_; lean_object* v_res_15_; 
v_skipRealize_boxed_14_ = lean_unbox(v_skipRealize_11_);
v_res_15_ = l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___redArg(v_constName_10_, v_skipRealize_boxed_14_, v___y_12_);
lean_dec(v___y_12_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0(lean_object* v_constName_16_, uint8_t v_skipRealize_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___redArg(v_constName_16_, v_skipRealize_17_, v___y_21_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___boxed(lean_object* v_constName_24_, lean_object* v_skipRealize_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
uint8_t v_skipRealize_boxed_31_; lean_object* v_res_32_; 
v_skipRealize_boxed_31_ = lean_unbox(v_skipRealize_25_);
v_res_32_ = l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0(v_constName_24_, v_skipRealize_boxed_31_, v___y_26_, v___y_27_, v___y_28_, v___y_29_);
lean_dec(v___y_29_);
lean_dec_ref(v___y_28_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
return v_res_32_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = lean_box(0);
v___x_34_ = l_Lean_Elab_abortCommandExceptionId;
v___x_35_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg(){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg___closed__0);
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg___boxed(lean_object* v___y_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg();
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1(lean_object* v_00_u03b1_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg();
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___boxed(lean_object* v_00_u03b1_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1(v_00_u03b1_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
return v_res_54_;
}
}
static lean_object* _init_l_Lean_Meta_mkSorry___closed__5(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = lean_box(0);
v___x_64_ = ((lean_object*)(l_Lean_Meta_mkSorry___closed__4));
v___x_65_ = l_Lean_mkConst(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_Meta_mkSorry___closed__8(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_box(0);
v___x_71_ = ((lean_object*)(l_Lean_Meta_mkSorry___closed__7));
v___x_72_ = l_Lean_mkConst(v___x_71_, v___x_70_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSorry(lean_object* v_type_73_, uint8_t v_synthetic_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_){
_start:
{
lean_object* v___y_81_; lean_object* v___y_82_; lean_object* v___x_85_; lean_object* v___y_87_; lean_object* v___y_88_; lean_object* v___y_89_; lean_object* v___y_90_; uint8_t v___x_106_; lean_object* v___x_107_; lean_object* v_a_108_; uint8_t v___x_109_; 
v___x_85_ = ((lean_object*)(l_Lean_Meta_mkSorry___closed__1));
v___x_106_ = 1;
v___x_107_ = l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___redArg(v___x_85_, v___x_106_, v_a_78_);
v_a_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc(v_a_108_);
lean_dec_ref(v___x_107_);
v___x_109_ = lean_unbox(v_a_108_);
lean_dec(v_a_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
lean_dec_ref(v_type_73_);
v___x_110_ = l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg();
v_a_111_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_110_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
else
{
v___y_87_ = v_a_75_;
v___y_88_ = v_a_76_;
v___y_89_ = v_a_77_;
v___y_90_ = v_a_78_;
goto v___jp_86_;
}
v___jp_80_:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_inc_ref(v___y_82_);
v___x_83_ = l_Lean_mkAppB(v___y_81_, v_type_73_, v___y_82_);
v___x_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
return v___x_84_;
}
v___jp_86_:
{
lean_object* v___x_91_; 
lean_inc_ref(v_type_73_);
v___x_91_ = l_Lean_Meta_getLevel(v_type_73_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
if (lean_obj_tag(v___x_91_) == 0)
{
lean_object* v_a_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_a_92_ = lean_ctor_get(v___x_91_, 0);
lean_inc(v_a_92_);
lean_dec_ref_known(v___x_91_, 1);
v___x_93_ = lean_box(0);
v___x_94_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_94_, 0, v_a_92_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = l_Lean_mkConst(v___x_85_, v___x_94_);
if (v_synthetic_74_ == 0)
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l_Lean_Meta_mkSorry___closed__5, &l_Lean_Meta_mkSorry___closed__5_once, _init_l_Lean_Meta_mkSorry___closed__5);
v___y_81_ = v___x_95_;
v___y_82_ = v___x_96_;
goto v___jp_80_;
}
else
{
lean_object* v___x_97_; 
v___x_97_ = lean_obj_once(&l_Lean_Meta_mkSorry___closed__8, &l_Lean_Meta_mkSorry___closed__8_once, _init_l_Lean_Meta_mkSorry___closed__8);
v___y_81_ = v___x_95_;
v___y_82_ = v___x_97_;
goto v___jp_80_;
}
}
else
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_105_; 
lean_dec_ref(v_type_73_);
v_a_98_ = lean_ctor_get(v___x_91_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_105_ == 0)
{
v___x_100_ = v___x_91_;
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v___x_91_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_105_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
if (v_isShared_101_ == 0)
{
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_a_98_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSorry___boxed(lean_object* v_type_119_, lean_object* v_synthetic_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
uint8_t v_synthetic_boxed_126_; lean_object* v_res_127_; 
v_synthetic_boxed_126_ = lean_unbox(v_synthetic_120_);
v_res_127_ = l_Lean_Meta_mkSorry(v_type_119_, v_synthetic_boxed_126_, v_a_121_, v_a_122_, v_a_123_, v_a_124_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
return v_res_127_;
}
}
static lean_object* _init_l_Lean_Meta_SorryLabelView_encode___closed__1(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_box(0);
v___x_130_ = l_unsafeCast___redArg(v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SorryLabelView_encode(lean_object* v_view_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v___y_136_; 
if (lean_obj_tag(v_view_131_) == 1)
{
lean_object* v_val_140_; lean_object* v_range_141_; lean_object* v_pos_142_; lean_object* v_endPos_143_; lean_object* v_module_144_; lean_object* v_charUtf16_145_; lean_object* v_endCharUtf16_146_; lean_object* v_line_147_; lean_object* v_column_148_; lean_object* v_line_149_; lean_object* v_column_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v_val_140_ = lean_ctor_get(v_view_131_, 0);
lean_inc(v_val_140_);
lean_dec_ref_known(v_view_131_, 1);
v_range_141_ = lean_ctor_get(v_val_140_, 1);
lean_inc_ref(v_range_141_);
v_pos_142_ = lean_ctor_get(v_range_141_, 0);
lean_inc_ref(v_pos_142_);
v_endPos_143_ = lean_ctor_get(v_range_141_, 2);
lean_inc_ref(v_endPos_143_);
v_module_144_ = lean_ctor_get(v_val_140_, 0);
lean_inc(v_module_144_);
lean_dec(v_val_140_);
v_charUtf16_145_ = lean_ctor_get(v_range_141_, 1);
lean_inc(v_charUtf16_145_);
v_endCharUtf16_146_ = lean_ctor_get(v_range_141_, 3);
lean_inc(v_endCharUtf16_146_);
lean_dec_ref(v_range_141_);
v_line_147_ = lean_ctor_get(v_pos_142_, 0);
lean_inc(v_line_147_);
v_column_148_ = lean_ctor_get(v_pos_142_, 1);
lean_inc(v_column_148_);
lean_dec_ref(v_pos_142_);
v_line_149_ = lean_ctor_get(v_endPos_143_, 0);
lean_inc(v_line_149_);
v_column_150_ = lean_ctor_get(v_endPos_143_, 1);
lean_inc(v_column_150_);
lean_dec_ref(v_endPos_143_);
v___x_151_ = l_Lean_Name_num___override(v_module_144_, v_line_147_);
v___x_152_ = l_Lean_Name_num___override(v___x_151_, v_column_148_);
v___x_153_ = l_Lean_Name_num___override(v___x_152_, v_line_149_);
v___x_154_ = l_Lean_Name_num___override(v___x_153_, v_column_150_);
v___x_155_ = l_Lean_Name_num___override(v___x_154_, v_charUtf16_145_);
v___x_156_ = l_Lean_Name_num___override(v___x_155_, v_endCharUtf16_146_);
v___y_136_ = v___x_156_;
goto v___jp_135_;
}
else
{
lean_object* v___x_157_; 
lean_dec(v_view_131_);
v___x_157_ = lean_obj_once(&l_Lean_Meta_SorryLabelView_encode___closed__1, &l_Lean_Meta_SorryLabelView_encode___closed__1_once, _init_l_Lean_Meta_SorryLabelView_encode___closed__1);
v___y_136_ = v___x_157_;
goto v___jp_135_;
}
v___jp_135_:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_137_ = ((lean_object*)(l_Lean_Meta_SorryLabelView_encode___closed__0));
v___x_138_ = l_Lean_Name_str___override(v___y_136_, v___x_137_);
v___x_139_ = l_Lean_Core_mkFreshUserName(v___x_138_, v_a_132_, v_a_133_);
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SorryLabelView_encode___boxed(lean_object* v_view_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lean_Meta_SorryLabelView_encode(v_view_158_, v_a_159_, v_a_160_);
lean_dec(v_a_160_);
lean_dec_ref(v_a_159_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SorryLabelView_decode_x3f(lean_object* v_name_163_){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = l_Lean_Name_hasMacroScopes(v_name_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
v___x_165_ = lean_box(0);
return v___x_165_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = l_Lean_Name_eraseMacroScopes(v_name_163_);
if (lean_obj_tag(v___x_166_) == 1)
{
lean_object* v_pre_167_; lean_object* v_str_168_; lean_object* v___x_169_; uint8_t v___x_170_; 
v_pre_167_ = lean_ctor_get(v___x_166_, 0);
lean_inc(v_pre_167_);
v_str_168_ = lean_ctor_get(v___x_166_, 1);
lean_inc_ref(v_str_168_);
lean_dec_ref_known(v___x_166_, 2);
v___x_169_ = ((lean_object*)(l_Lean_Meta_SorryLabelView_encode___closed__0));
v___x_170_ = lean_string_dec_eq(v_str_168_, v___x_169_);
lean_dec_ref(v_str_168_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; 
lean_dec(v_pre_167_);
v___x_171_ = lean_box(0);
return v___x_171_;
}
else
{
if (lean_obj_tag(v_pre_167_) == 2)
{
lean_object* v_pre_172_; 
v_pre_172_ = lean_ctor_get(v_pre_167_, 0);
lean_inc(v_pre_172_);
if (lean_obj_tag(v_pre_172_) == 2)
{
lean_object* v_pre_173_; 
v_pre_173_ = lean_ctor_get(v_pre_172_, 0);
lean_inc(v_pre_173_);
if (lean_obj_tag(v_pre_173_) == 2)
{
lean_object* v_pre_174_; 
v_pre_174_ = lean_ctor_get(v_pre_173_, 0);
lean_inc(v_pre_174_);
if (lean_obj_tag(v_pre_174_) == 2)
{
lean_object* v_pre_175_; 
v_pre_175_ = lean_ctor_get(v_pre_174_, 0);
lean_inc(v_pre_175_);
if (lean_obj_tag(v_pre_175_) == 2)
{
lean_object* v_pre_176_; 
v_pre_176_ = lean_ctor_get(v_pre_175_, 0);
lean_inc(v_pre_176_);
if (lean_obj_tag(v_pre_176_) == 2)
{
lean_object* v_i_177_; lean_object* v_i_178_; lean_object* v_i_179_; lean_object* v_i_180_; lean_object* v_i_181_; lean_object* v_pre_182_; lean_object* v_i_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v_i_177_ = lean_ctor_get(v_pre_167_, 1);
lean_inc(v_i_177_);
lean_dec_ref_known(v_pre_167_, 2);
v_i_178_ = lean_ctor_get(v_pre_172_, 1);
lean_inc(v_i_178_);
lean_dec_ref_known(v_pre_172_, 2);
v_i_179_ = lean_ctor_get(v_pre_173_, 1);
lean_inc(v_i_179_);
lean_dec_ref_known(v_pre_173_, 2);
v_i_180_ = lean_ctor_get(v_pre_174_, 1);
lean_inc(v_i_180_);
lean_dec_ref_known(v_pre_174_, 2);
v_i_181_ = lean_ctor_get(v_pre_175_, 1);
lean_inc(v_i_181_);
lean_dec_ref_known(v_pre_175_, 2);
v_pre_182_ = lean_ctor_get(v_pre_176_, 0);
lean_inc(v_pre_182_);
v_i_183_ = lean_ctor_get(v_pre_176_, 1);
lean_inc(v_i_183_);
lean_dec_ref_known(v_pre_176_, 2);
v___x_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_184_, 0, v_i_183_);
lean_ctor_set(v___x_184_, 1, v_i_181_);
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v_i_180_);
lean_ctor_set(v___x_185_, 1, v_i_179_);
v___x_186_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set(v___x_186_, 1, v_i_178_);
lean_ctor_set(v___x_186_, 2, v___x_185_);
lean_ctor_set(v___x_186_, 3, v_i_177_);
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v_pre_182_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
v___x_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
return v___x_189_;
}
else
{
lean_object* v___x_190_; 
lean_dec_ref_known(v_pre_175_, 2);
lean_dec(v_pre_176_);
lean_dec_ref_known(v_pre_174_, 2);
lean_dec_ref_known(v_pre_173_, 2);
lean_dec_ref_known(v_pre_172_, 2);
lean_dec_ref_known(v_pre_167_, 2);
v___x_190_ = lean_box(0);
return v___x_190_;
}
}
else
{
lean_object* v___x_191_; 
lean_dec_ref_known(v_pre_174_, 2);
lean_dec(v_pre_175_);
lean_dec_ref_known(v_pre_173_, 2);
lean_dec_ref_known(v_pre_172_, 2);
lean_dec_ref_known(v_pre_167_, 2);
v___x_191_ = lean_box(0);
return v___x_191_;
}
}
else
{
lean_object* v___x_192_; 
lean_dec(v_pre_174_);
lean_dec_ref_known(v_pre_173_, 2);
lean_dec_ref_known(v_pre_172_, 2);
lean_dec_ref_known(v_pre_167_, 2);
v___x_192_ = lean_box(0);
return v___x_192_;
}
}
else
{
lean_object* v___x_193_; 
lean_dec(v_pre_173_);
lean_dec_ref_known(v_pre_172_, 2);
lean_dec_ref_known(v_pre_167_, 2);
v___x_193_ = lean_box(0);
return v___x_193_;
}
}
else
{
lean_object* v___x_194_; 
lean_dec_ref_known(v_pre_167_, 2);
lean_dec(v_pre_172_);
v___x_194_ = lean_box(0);
return v___x_194_;
}
}
else
{
lean_object* v___x_195_; 
lean_dec(v_pre_167_);
v___x_195_ = lean_box(0);
return v___x_195_;
}
}
}
else
{
lean_object* v___x_196_; 
lean_dec(v___x_166_);
v___x_196_ = lean_box(0);
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_SorryLabelView_decode_x3f___boxed(lean_object* v_name_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lean_Meta_SorryLabelView_decode_x3f(v_name_197_);
lean_dec(v_name_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0___redArg(lean_object* v___y_199_){
_start:
{
lean_object* v___x_201_; lean_object* v_env_202_; lean_object* v___x_203_; lean_object* v_mainModule_204_; lean_object* v___x_205_; 
v___x_201_ = lean_st_ref_get(v___y_199_);
v_env_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc_ref(v_env_202_);
lean_dec(v___x_201_);
v___x_203_ = l_Lean_Environment_header(v_env_202_);
lean_dec_ref(v_env_202_);
v_mainModule_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_mainModule_204_);
lean_dec_ref(v___x_203_);
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v_mainModule_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0___redArg___boxed(lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0___redArg(v___y_206_);
lean_dec(v___y_206_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0(lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0___redArg(v___y_212_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0___boxed(lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0(v___y_215_, v___y_216_, v___y_217_, v___y_218_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
return v_res_220_;
}
}
static lean_object* _init_l_Lean_Meta_mkLabeledSorry___closed__7(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_232_ = lean_box(0);
v___x_233_ = ((lean_object*)(l_Lean_Meta_mkLabeledSorry___closed__6));
v___x_234_ = l_Lean_mkConst(v___x_233_, v___x_232_);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_Meta_mkLabeledSorry___closed__11(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_box(0);
v___x_241_ = l_unsafeCast___redArg(v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_l_Lean_Meta_mkLabeledSorry___closed__12(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__11, &l_Lean_Meta_mkLabeledSorry___closed__11_once, _init_l_Lean_Meta_mkLabeledSorry___closed__11);
v___x_243_ = l_Lean_Level_succ___override(v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_Meta_mkLabeledSorry___closed__13(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = lean_box(0);
v___x_245_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__12, &l_Lean_Meta_mkLabeledSorry___closed__12_once, _init_l_Lean_Meta_mkLabeledSorry___closed__12);
v___x_246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set(v___x_246_, 1, v___x_244_);
return v___x_246_;
}
}
static lean_object* _init_l_Lean_Meta_mkLabeledSorry___closed__14(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__13, &l_Lean_Meta_mkLabeledSorry___closed__13_once, _init_l_Lean_Meta_mkLabeledSorry___closed__13);
v___x_248_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__12, &l_Lean_Meta_mkLabeledSorry___closed__12_once, _init_l_Lean_Meta_mkLabeledSorry___closed__12);
v___x_249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v___x_247_);
return v___x_249_;
}
}
static lean_object* _init_l_Lean_Meta_mkLabeledSorry___closed__15(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_250_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__14, &l_Lean_Meta_mkLabeledSorry___closed__14_once, _init_l_Lean_Meta_mkLabeledSorry___closed__14);
v___x_251_ = ((lean_object*)(l_Lean_Meta_mkLabeledSorry___closed__10));
v___x_252_ = l_Lean_mkConst(v___x_251_, v___x_250_);
return v___x_252_;
}
}
static lean_object* _init_l_Lean_Meta_mkLabeledSorry___closed__16(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = lean_box(0);
v___x_254_ = ((lean_object*)(l_Lean_Meta_mkLabeledSorry___closed__2));
v___x_255_ = l_Lean_mkConst(v___x_254_, v___x_253_);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_Meta_mkLabeledSorry___closed__19(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_260_ = lean_box(0);
v___x_261_ = ((lean_object*)(l_Lean_Meta_mkLabeledSorry___closed__18));
v___x_262_ = l_Lean_mkConst(v___x_261_, v___x_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLabeledSorry(lean_object* v_type_263_, uint8_t v_synthetic_264_, uint8_t v_unique_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v___x_271_; lean_object* v_tag_273_; lean_object* v___y_274_; lean_object* v___y_275_; lean_object* v___y_276_; lean_object* v___y_277_; lean_object* v___y_313_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___y_329_; lean_object* v___y_330_; lean_object* v___y_331_; lean_object* v___y_332_; uint8_t v___x_375_; lean_object* v___x_376_; lean_object* v_a_377_; uint8_t v___x_378_; 
v___x_271_ = ((lean_object*)(l_Lean_Meta_mkLabeledSorry___closed__2));
v___x_375_ = 1;
v___x_376_ = l_Lean_hasConst___at___00Lean_Meta_mkSorry_spec__0___redArg(v___x_271_, v___x_375_, v_a_269_);
v_a_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc(v_a_377_);
lean_dec_ref(v___x_376_);
v___x_378_ = lean_unbox(v_a_377_);
lean_dec(v_a_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
lean_dec_ref(v_type_263_);
v___x_379_ = l_Lean_Elab_throwAbortCommand___at___00Lean_Meta_mkSorry_spec__1___redArg();
v_a_380_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_379_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_379_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
else
{
v___y_329_ = v_a_266_;
v___y_330_ = v_a_267_;
v___y_331_ = v_a_268_;
v___y_332_ = v_a_269_;
goto v___jp_328_;
}
v___jp_272_:
{
if (v_unique_265_ == 0)
{
lean_object* v___x_278_; uint8_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_278_ = ((lean_object*)(l_Lean_Meta_mkLabeledSorry___closed__4));
v___x_279_ = 0;
v___x_280_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__7, &l_Lean_Meta_mkLabeledSorry___closed__7_once, _init_l_Lean_Meta_mkLabeledSorry___closed__7);
v___x_281_ = l_Lean_mkForall(v___x_278_, v___x_279_, v___x_280_, v_type_263_);
v___x_282_ = l_Lean_Meta_mkSorry(v___x_281_, v_synthetic_264_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_296_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_296_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_296_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_296_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_294_; 
v___x_287_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__15, &l_Lean_Meta_mkLabeledSorry___closed__15_once, _init_l_Lean_Meta_mkLabeledSorry___closed__15);
v___x_288_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__16, &l_Lean_Meta_mkLabeledSorry___closed__16_once, _init_l_Lean_Meta_mkLabeledSorry___closed__16);
v___x_289_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__19, &l_Lean_Meta_mkLabeledSorry___closed__19_once, _init_l_Lean_Meta_mkLabeledSorry___closed__19);
v___x_290_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_tag_273_);
v___x_291_ = l_Lean_mkApp4(v___x_287_, v___x_280_, v___x_288_, v___x_289_, v___x_290_);
v___x_292_ = l_Lean_Expr_app___override(v_a_283_, v___x_291_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v___x_292_);
v___x_294_ = v___x_285_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_292_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
else
{
lean_dec(v_tag_273_);
return v___x_282_;
}
}
else
{
lean_object* v___x_297_; uint8_t v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_297_ = ((lean_object*)(l_Lean_Meta_mkLabeledSorry___closed__4));
v___x_298_ = 0;
v___x_299_ = lean_obj_once(&l_Lean_Meta_mkLabeledSorry___closed__16, &l_Lean_Meta_mkLabeledSorry___closed__16_once, _init_l_Lean_Meta_mkLabeledSorry___closed__16);
v___x_300_ = l_Lean_mkForall(v___x_297_, v___x_298_, v___x_299_, v_type_263_);
v___x_301_ = l_Lean_Meta_mkSorry(v___x_300_, v_synthetic_264_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_311_; 
v_a_302_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_311_ == 0)
{
v___x_304_ = v___x_301_;
v_isShared_305_ = v_isSharedCheck_311_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_301_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_311_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_306_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_tag_273_);
v___x_307_ = l_Lean_Expr_app___override(v_a_302_, v___x_306_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 0, v___x_307_);
v___x_309_ = v___x_304_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_307_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
else
{
lean_dec(v_tag_273_);
return v___x_301_;
}
}
}
v___jp_312_:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_box(0);
v___x_318_ = l_Lean_Meta_SorryLabelView_encode(v___x_317_, v___y_315_, v___y_316_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; 
v_a_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_a_319_);
lean_dec_ref_known(v___x_318_, 1);
v_tag_273_ = v_a_319_;
v___y_274_ = v___y_313_;
v___y_275_ = v___y_314_;
v___y_276_ = v___y_315_;
v___y_277_ = v___y_316_;
goto v___jp_272_;
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec_ref(v_type_263_);
v_a_320_ = lean_ctor_get(v___x_318_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_318_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_318_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
v___jp_328_:
{
lean_object* v_toCold_333_; lean_object* v_ref_334_; uint8_t v___x_335_; lean_object* v___x_336_; 
v_toCold_333_ = lean_ctor_get(v___y_331_, 0);
v_ref_334_ = lean_ctor_get(v___y_331_, 2);
v___x_335_ = 0;
v___x_336_ = l_Lean_Syntax_getPos_x3f(v_ref_334_, v___x_335_);
if (lean_obj_tag(v___x_336_) == 1)
{
lean_object* v_val_337_; lean_object* v___x_338_; 
v_val_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_val_337_);
lean_dec_ref_known(v___x_336_, 1);
v___x_338_ = l_Lean_Syntax_getTailPos_x3f(v_ref_334_, v___x_335_);
if (lean_obj_tag(v___x_338_) == 1)
{
lean_object* v_val_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_374_; 
v_val_339_ = lean_ctor_get(v___x_338_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_338_);
if (v_isSharedCheck_374_ == 0)
{
v___x_341_ = v___x_338_;
v_isShared_342_ = v_isSharedCheck_374_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_val_339_);
lean_dec(v___x_338_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_374_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v_fileMap_343_; lean_object* v___x_344_; lean_object* v_a_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v_character_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v_character_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_372_; 
v_fileMap_343_ = lean_ctor_get(v_toCold_333_, 1);
v___x_344_ = l_Lean_getMainModule___at___00Lean_Meta_mkLabeledSorry_spec__0___redArg(v___y_332_);
v_a_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_a_345_);
lean_dec_ref(v___x_344_);
lean_inc_ref_n(v_fileMap_343_, 4);
v___x_346_ = l_Lean_FileMap_toPosition(v_fileMap_343_, v_val_337_);
v___x_347_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_343_, v_val_337_);
lean_dec(v_val_337_);
v_character_348_ = lean_ctor_get(v___x_347_, 1);
lean_inc(v_character_348_);
lean_dec_ref(v___x_347_);
v___x_349_ = l_Lean_FileMap_toPosition(v_fileMap_343_, v_val_339_);
v___x_350_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_343_, v_val_339_);
lean_dec(v_val_339_);
v_character_351_ = lean_ctor_get(v___x_350_, 1);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; 
v_unused_373_ = lean_ctor_get(v___x_350_, 0);
lean_dec(v_unused_373_);
v___x_353_ = v___x_350_;
v_isShared_354_ = v_isSharedCheck_372_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_character_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_372_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_355_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_355_, 0, v___x_346_);
lean_ctor_set(v___x_355_, 1, v_character_348_);
lean_ctor_set(v___x_355_, 2, v___x_349_);
lean_ctor_set(v___x_355_, 3, v_character_351_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 1, v___x_355_);
lean_ctor_set(v___x_353_, 0, v_a_345_);
v___x_357_ = v___x_353_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_345_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v___x_355_);
v___x_357_ = v_reuseFailAlloc_371_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_359_; 
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v___x_357_);
v___x_359_ = v___x_341_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v___x_357_);
v___x_359_ = v_reuseFailAlloc_370_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lean_Meta_SorryLabelView_encode(v___x_359_, v___y_331_, v___y_332_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
lean_dec_ref_known(v___x_360_, 1);
v_tag_273_ = v_a_361_;
v___y_274_ = v___y_329_;
v___y_275_ = v___y_330_;
v___y_276_ = v___y_331_;
v___y_277_ = v___y_332_;
goto v___jp_272_;
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec_ref(v_type_263_);
v_a_362_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_360_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_360_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
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
lean_dec(v___x_338_);
lean_dec(v_val_337_);
v___y_313_ = v___y_329_;
v___y_314_ = v___y_330_;
v___y_315_ = v___y_331_;
v___y_316_ = v___y_332_;
goto v___jp_312_;
}
}
else
{
lean_dec(v___x_336_);
v___y_313_ = v___y_329_;
v___y_314_ = v___y_330_;
v___y_315_ = v___y_331_;
v___y_316_ = v___y_332_;
goto v___jp_312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkLabeledSorry___boxed(lean_object* v_type_388_, lean_object* v_synthetic_389_, lean_object* v_unique_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_){
_start:
{
uint8_t v_synthetic_boxed_396_; uint8_t v_unique_boxed_397_; lean_object* v_res_398_; 
v_synthetic_boxed_396_ = lean_unbox(v_synthetic_389_);
v_unique_boxed_397_ = lean_unbox(v_unique_390_);
v_res_398_ = l_Lean_Meta_mkLabeledSorry(v_type_388_, v_synthetic_boxed_396_, v_unique_boxed_397_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
lean_dec(v_a_394_);
lean_dec_ref(v_a_393_);
lean_dec(v_a_392_);
lean_dec_ref(v_a_391_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLabeledSorry_x3f(lean_object* v_e_399_){
_start:
{
lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = ((lean_object*)(l_Lean_Meta_mkSorry___closed__1));
v___x_401_ = l_Lean_Expr_isAppOf(v_e_399_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; 
v___x_402_ = lean_box(0);
return v___x_402_;
}
else
{
lean_object* v___x_403_; lean_object* v___x_404_; uint8_t v___x_405_; 
v___x_403_ = l_Lean_Expr_getAppNumArgs(v_e_399_);
v___x_404_ = lean_unsigned_to_nat(3u);
v___x_405_ = lean_nat_dec_le(v___x_404_, v___x_403_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; 
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
return v___x_406_;
}
else
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_407_ = lean_unsigned_to_nat(2u);
v___x_408_ = lean_nat_sub(v___x_403_, v___x_407_);
lean_dec(v___x_403_);
v___x_409_ = lean_unsigned_to_nat(1u);
v___x_410_ = lean_nat_sub(v___x_408_, v___x_409_);
lean_dec(v___x_408_);
v___x_411_ = l_Lean_Expr_getRevArg_x21(v_e_399_, v___x_410_);
lean_inc_ref(v___x_411_);
v___x_412_ = l_Lean_Expr_name_x3f(v___x_411_);
if (lean_obj_tag(v___x_412_) == 1)
{
lean_object* v_val_413_; lean_object* v___x_414_; 
lean_dec_ref(v___x_411_);
v_val_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_val_413_);
lean_dec_ref_known(v___x_412_, 1);
v___x_414_ = l_Lean_Meta_SorryLabelView_decode_x3f(v_val_413_);
lean_dec(v_val_413_);
return v___x_414_;
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
lean_dec(v___x_412_);
v___x_415_ = ((lean_object*)(l_Lean_Meta_mkLabeledSorry___closed__10));
v___x_416_ = lean_unsigned_to_nat(4u);
v___x_417_ = l_Lean_Expr_isAppOfArity(v___x_411_, v___x_415_, v___x_416_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; 
lean_dec_ref(v___x_411_);
v___x_418_ = lean_box(0);
return v___x_418_;
}
else
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_419_ = l_Lean_Expr_appFn_x21(v___x_411_);
v___x_420_ = l_Lean_Expr_appArg_x21(v___x_419_);
lean_dec_ref(v___x_419_);
v___x_421_ = ((lean_object*)(l_Lean_Meta_mkLabeledSorry___closed__18));
v___x_422_ = lean_unsigned_to_nat(0u);
v___x_423_ = l_Lean_Expr_isAppOfArity(v___x_420_, v___x_421_, v___x_422_);
lean_dec_ref(v___x_420_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; 
lean_dec_ref(v___x_411_);
v___x_424_ = lean_box(0);
return v___x_424_;
}
else
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = l_Lean_Expr_appArg_x21(v___x_411_);
lean_dec_ref(v___x_411_);
v___x_426_ = l_Lean_Expr_name_x3f(v___x_425_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v___x_427_; 
v___x_427_ = lean_box(0);
return v___x_427_;
}
else
{
lean_object* v_val_428_; lean_object* v___x_429_; 
v_val_428_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_val_428_);
lean_dec_ref_known(v___x_426_, 1);
v___x_429_ = l_Lean_Meta_SorryLabelView_decode_x3f(v_val_428_);
lean_dec(v_val_428_);
return v___x_429_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLabeledSorry_x3f___boxed(lean_object* v_e_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Meta_isLabeledSorry_x3f(v_e_430_);
lean_dec_ref(v_e_430_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getSorry_x3f(lean_object* v_e_432_){
_start:
{
uint8_t v___x_439_; 
v___x_439_ = l_Lean_Expr_isSorry(v_e_432_);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; 
v___x_440_ = lean_box(0);
return v___x_440_;
}
else
{
lean_object* v___x_441_; 
v___x_441_ = l_Lean_Meta_isLabeledSorry_x3f(v_e_432_);
if (lean_obj_tag(v___x_441_) == 0)
{
goto v___jp_433_;
}
else
{
lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_452_; 
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; 
v_unused_453_ = lean_ctor_get(v___x_441_, 0);
lean_dec(v_unused_453_);
v___x_443_ = v___x_441_;
v_isShared_444_ = v_isSharedCheck_452_;
goto v_resetjp_442_;
}
else
{
lean_dec(v___x_441_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_452_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
if (v___x_439_ == 0)
{
lean_del_object(v___x_443_);
goto v___jp_433_;
}
else
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_445_ = l_Lean_Expr_getAppNumArgs(v_e_432_);
v___x_446_ = lean_unsigned_to_nat(3u);
v___x_447_ = lean_nat_sub(v___x_445_, v___x_446_);
lean_dec(v___x_445_);
v___x_448_ = l_Lean_Expr_getBoundedAppFn(v___x_447_, v_e_432_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v___x_448_);
v___x_450_ = v___x_443_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_448_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
}
v___jp_433_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_434_ = l_Lean_Expr_getAppNumArgs(v_e_432_);
v___x_435_ = lean_unsigned_to_nat(2u);
v___x_436_ = lean_nat_sub(v___x_434_, v___x_435_);
lean_dec(v___x_434_);
v___x_437_ = l_Lean_Expr_getBoundedAppFn(v___x_436_, v_e_432_);
v___x_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
return v___x_438_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_getSorry_x3f___boxed(lean_object* v_e_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lean_Expr_getSorry_x3f(v_e_454_);
lean_dec_ref(v_e_454_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___redArg___lam__0(lean_object* v_toPure_456_, lean_object* v_____r_457_){
_start:
{
uint8_t v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_458_ = 0;
v___x_459_ = lean_box(v___x_458_);
v___x_460_ = lean_apply_2(v_toPure_456_, lean_box(0), v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___redArg___lam__1(lean_object* v_fn_461_, lean_object* v_toBind_462_, lean_object* v___f_463_, lean_object* v_toPure_464_, lean_object* v_e_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_Lean_Expr_getSorry_x3f(v_e_465_);
if (lean_obj_tag(v___x_466_) == 1)
{
lean_object* v_val_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
lean_dec(v_toPure_464_);
v_val_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_val_467_);
lean_dec_ref_known(v___x_466_, 1);
v___x_468_ = lean_apply_1(v_fn_461_, v_val_467_);
v___x_469_ = lean_apply_4(v_toBind_462_, lean_box(0), lean_box(0), v___x_468_, v___f_463_);
return v___x_469_;
}
else
{
uint8_t v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
lean_dec(v___x_466_);
lean_dec(v___f_463_);
lean_dec(v_toBind_462_);
lean_dec(v_fn_461_);
v___x_470_ = 1;
v___x_471_ = lean_box(v___x_470_);
v___x_472_ = lean_apply_2(v_toPure_464_, lean_box(0), v___x_471_);
return v___x_472_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___redArg___lam__1___boxed(lean_object* v_fn_473_, lean_object* v_toBind_474_, lean_object* v___f_475_, lean_object* v_toPure_476_, lean_object* v_e_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_Meta_forEachSorryM___redArg___lam__1(v_fn_473_, v_toBind_474_, v___f_475_, v_toPure_476_, v_e_477_);
lean_dec_ref(v_e_477_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___redArg(lean_object* v_inst_479_, lean_object* v_inst_480_, lean_object* v_inst_481_, lean_object* v_input_482_, lean_object* v_fn_483_){
_start:
{
lean_object* v_toApplicative_484_; lean_object* v_toBind_485_; lean_object* v_toPure_486_; lean_object* v___f_487_; lean_object* v___f_488_; lean_object* v___x_489_; 
v_toApplicative_484_ = lean_ctor_get(v_inst_479_, 0);
v_toBind_485_ = lean_ctor_get(v_inst_479_, 1);
v_toPure_486_ = lean_ctor_get(v_toApplicative_484_, 1);
lean_inc_n(v_toPure_486_, 2);
v___f_487_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachSorryM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_487_, 0, v_toPure_486_);
lean_inc(v_toBind_485_);
v___f_488_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachSorryM___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_488_, 0, v_fn_483_);
lean_closure_set(v___f_488_, 1, v_toBind_485_);
lean_closure_set(v___f_488_, 2, v___f_487_);
lean_closure_set(v___f_488_, 3, v_toPure_486_);
v___x_489_ = l_Lean_Meta_forEachExpr_x27___redArg(v_inst_479_, v_inst_480_, v_inst_481_, v_input_482_, v___f_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM(lean_object* v_m_490_, lean_object* v_inst_491_, lean_object* v_inst_492_, lean_object* v_inst_493_, lean_object* v_input_494_, lean_object* v_fn_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_Meta_forEachSorryM___redArg(v_inst_491_, v_inst_492_, v_inst_493_, v_input_494_, v_fn_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___redArg___lam__0(lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_inst_499_, lean_object* v_fn_500_, lean_object* v_x_501_, lean_object* v_a_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Lean_Meta_forEachSorryM___redArg(v_inst_497_, v_inst_498_, v_inst_499_, v_a_502_, v_fn_500_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___redArg(lean_object* v_inst_504_, lean_object* v_inst_505_, lean_object* v_inst_506_, lean_object* v_decl_507_, lean_object* v_fn_508_){
_start:
{
lean_object* v___f_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
lean_inc_ref(v_inst_504_);
v___f_509_ = lean_alloc_closure((void*)(l_Lean_Declaration_forEachSorryM___redArg___lam__0), 6, 4);
lean_closure_set(v___f_509_, 0, v_inst_504_);
lean_closure_set(v___f_509_, 1, v_inst_505_);
lean_closure_set(v___f_509_, 2, v_inst_506_);
lean_closure_set(v___f_509_, 3, v_fn_508_);
v___x_510_ = lean_box(0);
v___x_511_ = l_Lean_Declaration_foldExprM___redArg(v_inst_504_, v_decl_507_, v___f_509_, v___x_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM(lean_object* v_m_512_, lean_object* v_inst_513_, lean_object* v_inst_514_, lean_object* v_inst_515_, lean_object* v_decl_516_, lean_object* v_fn_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Lean_Declaration_forEachSorryM___redArg(v_inst_513_, v_inst_514_, v_inst_515_, v_decl_516_, v_fn_517_);
return v___x_518_;
}
}
lean_object* runtime_initialize_Lean_Data_Lsp_Utf16(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ForEachExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Recognizers(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sorry(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Lsp_Utf16(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Recognizers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sorry(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Lsp_Utf16(uint8_t builtin);
lean_object* initialize_Lean_Meta_ForEachExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* initialize_Lean_Util_Recognizers(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sorry(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Lsp_Utf16(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Recognizers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sorry(builtin);
}
#ifdef __cplusplus
}
#endif

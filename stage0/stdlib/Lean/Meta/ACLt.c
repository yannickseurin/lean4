// Lean compiler output
// Module: Lean.Meta.ACLt
// Imports: public import Lean.Meta.DiscrTree.Main import Init.Data.Range.Polymorphic.Iterators import Lean.Meta.FunInfo
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
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedParamInfo_default;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Config_toConfigWithKey(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_bvarIdx_x21(lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sortLevel_x21(lean_object*);
uint8_t l_Lean_Level_normLt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letValue_x21(lean_object*);
lean_object* l_Lean_Expr_letBody_x21(lean_object*);
lean_object* l_Lean_Expr_litValue_x21(lean_object*);
uint8_t l_Lean_Literal_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_projIdx_x21(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_ctorWeight(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_ctorWeight___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 2, 0, 1, 0, 1, 0, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(lean_object*);
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Meta.acLt"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__1;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "_private.Lean.Meta.ACLt.0.Lean.Meta.ACLt.main.lexSameCtor"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5_value;
static const lean_string_object l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Meta.ACLt"};
static const lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4 = (const lean_object*)&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_acLt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_acLt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_ctorWeight(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
uint8_t v___x_2_; 
v___x_2_ = 0;
return v___x_2_;
}
case 1:
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
case 2:
{
uint8_t v___x_4_; 
v___x_4_ = 2;
return v___x_4_;
}
case 3:
{
uint8_t v___x_5_; 
v___x_5_ = 3;
return v___x_5_;
}
case 4:
{
uint8_t v___x_6_; 
v___x_6_ = 4;
return v___x_6_;
}
case 5:
{
uint8_t v___x_7_; 
v___x_7_ = 8;
return v___x_7_;
}
case 6:
{
uint8_t v___x_8_; 
v___x_8_ = 9;
return v___x_8_;
}
case 7:
{
uint8_t v___x_9_; 
v___x_9_ = 10;
return v___x_9_;
}
case 8:
{
uint8_t v___x_10_; 
v___x_10_ = 11;
return v___x_10_;
}
case 9:
{
uint8_t v___x_11_; 
v___x_11_ = 5;
return v___x_11_;
}
case 10:
{
uint8_t v___x_12_; 
v___x_12_ = 6;
return v___x_12_;
}
default: 
{
uint8_t v___x_13_; 
v___x_13_ = 7;
return v___x_13_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_ctorWeight___boxed(lean_object* v_x_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Expr_ctorWeight(v_x_14_);
lean_dec_ref(v_x_14_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx(uint8_t v_x_17_){
_start:
{
switch(v_x_17_)
{
case 0:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(0u);
return v___x_18_;
}
case 1:
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(1u);
return v___x_19_;
}
default: 
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(2u);
return v___x_20_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorIdx___boxed(lean_object* v_x_21_){
_start:
{
uint8_t v_x_boxed_22_; lean_object* v_res_23_; 
v_x_boxed_22_ = lean_unbox(v_x_21_);
v_res_23_ = l_Lean_Meta_ACLt_ReduceMode_ctorIdx(v_x_boxed_22_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg(lean_object* v_k_24_){
_start:
{
lean_inc(v_k_24_);
return v_k_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg___boxed(lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_Meta_ACLt_ReduceMode_ctorElim___redArg(v_k_25_);
lean_dec(v_k_25_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim(lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, uint8_t v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_inc(v_k_31_);
return v_k_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_ctorElim___boxed(lean_object* v_motive_32_, lean_object* v_ctorIdx_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_k_36_){
_start:
{
uint8_t v_t_boxed_37_; lean_object* v_res_38_; 
v_t_boxed_37_ = lean_unbox(v_t_34_);
v_res_38_ = l_Lean_Meta_ACLt_ReduceMode_ctorElim(v_motive_32_, v_ctorIdx_33_, v_t_boxed_37_, v_h_35_, v_k_36_);
lean_dec(v_k_36_);
lean_dec(v_ctorIdx_33_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg(lean_object* v_reduce_39_){
_start:
{
lean_inc(v_reduce_39_);
return v_reduce_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg___boxed(lean_object* v_reduce_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l_Lean_Meta_ACLt_ReduceMode_reduce_elim___redArg(v_reduce_40_);
lean_dec(v_reduce_40_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim(lean_object* v_motive_42_, uint8_t v_t_43_, lean_object* v_h_44_, lean_object* v_reduce_45_){
_start:
{
lean_inc(v_reduce_45_);
return v_reduce_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduce_elim___boxed(lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_reduce_49_){
_start:
{
uint8_t v_t_boxed_50_; lean_object* v_res_51_; 
v_t_boxed_50_ = lean_unbox(v_t_47_);
v_res_51_ = l_Lean_Meta_ACLt_ReduceMode_reduce_elim(v_motive_46_, v_t_boxed_50_, v_h_48_, v_reduce_49_);
lean_dec(v_reduce_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg(lean_object* v_reduceSimpleOnly_52_){
_start:
{
lean_inc(v_reduceSimpleOnly_52_);
return v_reduceSimpleOnly_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg___boxed(lean_object* v_reduceSimpleOnly_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___redArg(v_reduceSimpleOnly_53_);
lean_dec(v_reduceSimpleOnly_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim(lean_object* v_motive_55_, uint8_t v_t_56_, lean_object* v_h_57_, lean_object* v_reduceSimpleOnly_58_){
_start:
{
lean_inc(v_reduceSimpleOnly_58_);
return v_reduceSimpleOnly_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim___boxed(lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_reduceSimpleOnly_62_){
_start:
{
uint8_t v_t_boxed_63_; lean_object* v_res_64_; 
v_t_boxed_63_ = lean_unbox(v_t_60_);
v_res_64_ = l_Lean_Meta_ACLt_ReduceMode_reduceSimpleOnly_elim(v_motive_59_, v_t_boxed_63_, v_h_61_, v_reduceSimpleOnly_62_);
lean_dec(v_reduceSimpleOnly_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg(lean_object* v_none_65_){
_start:
{
lean_inc(v_none_65_);
return v_none_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg___boxed(lean_object* v_none_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_Meta_ACLt_ReduceMode_none_elim___redArg(v_none_66_);
lean_dec(v_none_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim(lean_object* v_motive_68_, uint8_t v_t_69_, lean_object* v_h_70_, lean_object* v_none_71_){
_start:
{
lean_inc(v_none_71_);
return v_none_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_ReduceMode_none_elim___boxed(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_none_75_){
_start:
{
uint8_t v_t_boxed_76_; lean_object* v_res_77_; 
v_t_boxed_76_ = lean_unbox(v_t_73_);
v_res_77_ = l_Lean_Meta_ACLt_ReduceMode_none_elim(v_motive_72_, v_t_boxed_76_, v_h_74_, v_none_75_);
lean_dec(v_none_75_);
return v_res_77_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__0));
v___x_85_ = l_Lean_Meta_Config_toConfigWithKey(v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config___closed__1);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(uint8_t v_mode_87_, lean_object* v_e_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
uint8_t v___x_94_; 
v___x_94_ = l_Lean_Expr_hasLooseBVars(v_e_88_);
if (v___x_94_ == 0)
{
switch(v_mode_87_)
{
case 0:
{
lean_object* v___x_95_; 
v___x_95_ = l_Lean_Meta_DiscrTree_reduce(v_e_88_, v_a_89_, v_a_90_, v_a_91_, v_a_92_);
return v___x_95_;
}
case 1:
{
lean_object* v___x_96_; lean_object* v_config_97_; uint8_t v_trackZetaDelta_98_; lean_object* v_zetaDeltaSet_99_; lean_object* v_lctx_100_; lean_object* v_localInstances_101_; lean_object* v_defEqCtx_x3f_102_; lean_object* v_synthPendingDepth_103_; lean_object* v_customCanUnfoldPredicate_x3f_104_; uint8_t v_univApprox_105_; uint8_t v_inTypeClassResolution_106_; uint8_t v_cacheInferType_107_; uint64_t v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_96_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config;
v_config_97_ = lean_ctor_get(v___x_96_, 0);
v_trackZetaDelta_98_ = lean_ctor_get_uint8(v_a_89_, sizeof(void*)*7);
v_zetaDeltaSet_99_ = lean_ctor_get(v_a_89_, 1);
v_lctx_100_ = lean_ctor_get(v_a_89_, 2);
v_localInstances_101_ = lean_ctor_get(v_a_89_, 3);
v_defEqCtx_x3f_102_ = lean_ctor_get(v_a_89_, 4);
v_synthPendingDepth_103_ = lean_ctor_get(v_a_89_, 5);
v_customCanUnfoldPredicate_x3f_104_ = lean_ctor_get(v_a_89_, 6);
v_univApprox_105_ = lean_ctor_get_uint8(v_a_89_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_106_ = lean_ctor_get_uint8(v_a_89_, sizeof(void*)*7 + 2);
v_cacheInferType_107_ = lean_ctor_get_uint8(v_a_89_, sizeof(void*)*7 + 3);
v___x_108_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_97_);
lean_inc_ref(v_config_97_);
v___x_109_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_109_, 0, v_config_97_);
lean_ctor_set_uint64(v___x_109_, sizeof(void*)*1, v___x_108_);
lean_inc(v_customCanUnfoldPredicate_x3f_104_);
lean_inc(v_synthPendingDepth_103_);
lean_inc(v_defEqCtx_x3f_102_);
lean_inc_ref(v_localInstances_101_);
lean_inc_ref(v_lctx_100_);
lean_inc(v_zetaDeltaSet_99_);
v___x_110_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v_zetaDeltaSet_99_);
lean_ctor_set(v___x_110_, 2, v_lctx_100_);
lean_ctor_set(v___x_110_, 3, v_localInstances_101_);
lean_ctor_set(v___x_110_, 4, v_defEqCtx_x3f_102_);
lean_ctor_set(v___x_110_, 5, v_synthPendingDepth_103_);
lean_ctor_set(v___x_110_, 6, v_customCanUnfoldPredicate_x3f_104_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*7, v_trackZetaDelta_98_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*7 + 1, v_univApprox_105_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*7 + 2, v_inTypeClassResolution_106_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*7 + 3, v_cacheInferType_107_);
v___x_111_ = l_Lean_Meta_DiscrTree_reduce(v_e_88_, v___x_110_, v_a_90_, v_a_91_, v_a_92_);
lean_dec_ref_known(v___x_110_, 7);
return v___x_111_;
}
default: 
{
lean_object* v___x_112_; 
v___x_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_112_, 0, v_e_88_);
return v___x_112_;
}
}
}
else
{
lean_object* v___x_113_; 
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v_e_88_);
return v___x_113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce___boxed(lean_object* v_mode_114_, lean_object* v_e_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
uint8_t v_mode_boxed_121_; lean_object* v_res_122_; 
v_mode_boxed_121_ = lean_unbox(v_mode_114_);
v_res_122_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(v_mode_boxed_121_, v_e_115_, v_a_116_, v_a_117_, v_a_118_, v_a_119_);
lean_dec(v_a_119_);
lean_dec_ref(v_a_118_);
lean_dec(v_a_117_);
lean_dec_ref(v_a_116_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(lean_object* v_f_125_, lean_object* v_numArgs_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
uint8_t v___x_132_; 
v___x_132_ = l_Lean_Expr_hasLooseBVars(v_f_125_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_Meta_getFunInfoNArgs(v_f_125_, v_numArgs_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_142_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_142_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_142_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_142_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v_paramInfo_138_; lean_object* v___x_140_; 
v_paramInfo_138_ = lean_ctor_get(v_a_134_, 0);
lean_inc_ref(v_paramInfo_138_);
lean_dec(v_a_134_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 0, v_paramInfo_138_);
v___x_140_ = v___x_136_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_paramInfo_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
v_a_143_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v___x_133_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_133_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
else
{
lean_object* v___x_151_; lean_object* v___x_152_; 
lean_dec(v_numArgs_126_);
lean_dec_ref(v_f_125_);
v___x_151_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___closed__0));
v___x_152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo___boxed(lean_object* v_f_153_, lean_object* v_numArgs_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(v_f_153_, v_numArgs_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
lean_dec(v_a_158_);
lean_dec_ref(v_a_157_);
lean_dec(v_a_156_);
lean_dec_ref(v_a_155_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(lean_object* v_msg_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v___f_168_; lean_object* v___x_13560__overap_169_; lean_object* v___x_170_; 
v___f_168_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___closed__0));
v___x_13560__overap_169_ = lean_panic_fn_borrowed(v___f_168_, v_msg_162_);
lean_inc(v___y_166_);
lean_inc_ref(v___y_165_);
lean_inc(v___y_164_);
lean_inc_ref(v___y_163_);
v___x_170_ = lean_apply_5(v___x_13560__overap_169_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, lean_box(0));
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3___boxed(lean_object* v_msg_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(v_msg_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(lean_object* v_msg_178_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = l_Lean_instInhabitedLocalDecl_default;
v___x_180_ = lean_panic_fn_borrowed(v___x_179_, v_msg_178_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(uint8_t v_mode_182_, lean_object* v_a_u2081_183_, lean_object* v_a_u2082_184_, lean_object* v_b_u2081_185_, lean_object* v_b_u2082_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v___x_192_; 
lean_inc_ref(v_b_u2081_185_);
lean_inc_ref(v_a_u2081_183_);
v___x_192_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_182_, v_a_u2081_183_, v_b_u2081_185_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v_a_193_; uint8_t v___x_194_; 
v_a_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_a_193_);
v___x_194_ = lean_unbox(v_a_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
lean_dec_ref_known(v___x_192_, 1);
v___x_195_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_182_, v_b_u2081_185_, v_a_u2081_183_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_205_; 
v_a_196_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_205_ == 0)
{
v___x_198_ = v___x_195_;
v_isShared_199_ = v_isSharedCheck_205_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_195_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_205_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
uint8_t v___x_200_; 
v___x_200_ = lean_unbox(v_a_196_);
lean_dec(v_a_196_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; 
lean_del_object(v___x_198_);
lean_dec(v_a_193_);
v___x_201_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_182_, v_a_u2082_184_, v_b_u2082_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
return v___x_201_;
}
else
{
lean_object* v___x_203_; 
lean_dec_ref(v_b_u2082_186_);
lean_dec_ref(v_a_u2082_184_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 0, v_a_193_);
v___x_203_ = v___x_198_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_193_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
else
{
lean_dec(v_a_193_);
lean_dec_ref(v_b_u2082_186_);
lean_dec_ref(v_a_u2082_184_);
return v___x_195_;
}
}
else
{
lean_dec(v_a_193_);
lean_dec_ref(v_b_u2082_186_);
lean_dec_ref(v_b_u2081_185_);
lean_dec_ref(v_a_u2082_184_);
lean_dec_ref(v_a_u2081_183_);
return v___x_192_;
}
}
else
{
lean_dec_ref(v_b_u2082_186_);
lean_dec_ref(v_b_u2081_185_);
lean_dec_ref(v_a_u2082_184_);
lean_dec_ref(v_a_u2081_183_);
return v___x_192_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_209_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__2));
v___x_210_ = lean_unsigned_to_nat(14u);
v___x_211_ = lean_unsigned_to_nat(22u);
v___x_212_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__1));
v___x_213_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__0));
v___x_214_ = l_mkPanicMessageWithDecl(v___x_213_, v___x_212_, v___x_211_, v___x_210_, v___x_209_);
return v___x_214_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_box(0);
v___x_216_ = l_unsafeCast___redArg(v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__1(void){
_start:
{
lean_object* v___x_217_; lean_object* v_dummy_218_; 
v___x_217_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__0);
v_dummy_218_ = l_Lean_Expr_sort___override(v___x_217_);
return v_dummy_218_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(lean_object* v_upperBound_222_, lean_object* v_a_223_, lean_object* v___x_224_, lean_object* v___x_225_, uint8_t v_mode_226_, lean_object* v_a_227_, lean_object* v_b_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_a_235_; uint8_t v___x_239_; 
v___x_239_ = lean_nat_dec_lt(v_a_227_, v_upperBound_222_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; 
lean_dec(v_a_227_);
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v_b_228_);
return v___x_240_;
}
else
{
lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v_isInstance_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
lean_dec_ref(v_b_228_);
v___x_241_ = l_Lean_Meta_instInhabitedParamInfo_default;
v___x_242_ = lean_array_get_borrowed(v___x_241_, v_a_223_, v_a_227_);
v_isInstance_243_ = lean_ctor_get_uint8(v___x_242_, sizeof(void*)*1 + 4);
v___x_244_ = lean_box(0);
v___x_245_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
if (v_isInstance_243_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_246_ = l_Lean_instInhabitedExpr;
v___x_247_ = lean_array_get_borrowed(v___x_246_, v___x_224_, v_a_227_);
v___x_248_ = lean_array_get_borrowed(v___x_246_, v___x_225_, v_a_227_);
lean_inc(v___x_248_);
lean_inc(v___x_247_);
v___x_249_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_226_, v___x_247_, v___x_248_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_281_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_281_ == 0)
{
v___x_252_ = v___x_249_;
v_isShared_253_ = v_isSharedCheck_281_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_249_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_281_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
uint8_t v___x_254_; 
v___x_254_ = lean_unbox(v_a_250_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; 
lean_del_object(v___x_252_);
lean_inc(v___x_247_);
lean_inc(v___x_248_);
v___x_255_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_226_, v___x_248_, v___x_247_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_266_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_266_ == 0)
{
v___x_258_ = v___x_255_;
v_isShared_259_ = v_isSharedCheck_266_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_266_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
uint8_t v___x_260_; 
v___x_260_ = lean_unbox(v_a_256_);
lean_dec(v_a_256_);
if (v___x_260_ == 0)
{
lean_del_object(v___x_258_);
lean_dec(v_a_250_);
v_a_235_ = v___x_245_;
goto v___jp_234_;
}
else
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_264_; 
lean_dec(v_a_227_);
v___x_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_261_, 0, v_a_250_);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___x_244_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 0, v___x_262_);
v___x_264_ = v___x_258_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec(v_a_250_);
lean_dec(v_a_227_);
v_a_267_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_255_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_255_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
else
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
lean_dec(v_a_250_);
lean_dec(v_a_227_);
v___x_275_ = lean_box(v___x_239_);
v___x_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
v___x_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_244_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 0, v___x_277_);
v___x_279_ = v___x_252_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
}
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
lean_dec(v_a_227_);
v_a_282_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_249_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_249_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
else
{
v_a_235_ = v___x_245_;
goto v___jp_234_;
}
}
v___jp_234_:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_unsigned_to_nat(1u);
v___x_237_ = lean_nat_add(v_a_227_, v___x_236_);
lean_dec(v_a_227_);
lean_inc_ref(v_a_235_);
v_a_227_ = v___x_237_;
v_b_228_ = v_a_235_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(lean_object* v_upperBound_290_, lean_object* v___x_291_, lean_object* v___x_292_, uint8_t v_mode_293_, lean_object* v_a_294_, lean_object* v_b_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
uint8_t v___x_301_; 
v___x_301_ = lean_nat_dec_lt(v_a_294_, v_upperBound_290_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
lean_dec(v_a_294_);
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v_b_295_);
return v___x_302_;
}
else
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
lean_dec_ref(v_b_295_);
v___x_303_ = l_Lean_instInhabitedExpr;
v___x_304_ = lean_box(0);
v___x_305_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
v___x_306_ = lean_array_get_borrowed(v___x_303_, v___x_291_, v_a_294_);
v___x_307_ = lean_array_get_borrowed(v___x_303_, v___x_292_, v_a_294_);
lean_inc(v___x_307_);
lean_inc(v___x_306_);
v___x_308_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_293_, v___x_306_, v___x_307_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_343_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_343_ == 0)
{
v___x_311_ = v___x_308_;
v_isShared_312_ = v_isSharedCheck_343_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_343_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
uint8_t v___x_313_; 
v___x_313_ = lean_unbox(v_a_309_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; 
lean_del_object(v___x_311_);
lean_inc(v___x_306_);
lean_inc(v___x_307_);
v___x_314_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_293_, v___x_307_, v___x_306_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_328_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_328_ == 0)
{
v___x_317_ = v___x_314_;
v_isShared_318_ = v_isSharedCheck_328_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_314_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_328_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
uint8_t v___x_319_; 
v___x_319_ = lean_unbox(v_a_315_);
lean_dec(v_a_315_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; lean_object* v___x_321_; 
lean_del_object(v___x_317_);
lean_dec(v_a_309_);
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_nat_add(v_a_294_, v___x_320_);
lean_dec(v_a_294_);
v_a_294_ = v___x_321_;
v_b_295_ = v___x_305_;
goto _start;
}
else
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_326_; 
lean_dec(v_a_294_);
v___x_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_323_, 0, v_a_309_);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
lean_ctor_set(v___x_324_, 1, v___x_304_);
if (v_isShared_318_ == 0)
{
lean_ctor_set(v___x_317_, 0, v___x_324_);
v___x_326_ = v___x_317_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_324_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_336_; 
lean_dec(v_a_309_);
lean_dec(v_a_294_);
v_a_329_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_336_ == 0)
{
v___x_331_ = v___x_314_;
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_314_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_336_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_329_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
lean_dec(v_a_309_);
lean_dec(v_a_294_);
v___x_337_ = lean_box(v___x_301_);
v___x_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
v___x_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v___x_304_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_339_);
v___x_341_ = v___x_311_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v_a_294_);
v_a_344_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_308_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_308_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(uint8_t v_mode_352_, lean_object* v_a_353_, lean_object* v_b_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_){
_start:
{
lean_object* v_aFn_360_; lean_object* v_bFn_361_; lean_object* v___x_362_; 
v_aFn_360_ = l_Lean_Expr_getAppFn(v_a_353_);
v_bFn_361_ = l_Lean_Expr_getAppFn(v_b_354_);
lean_inc_ref(v_bFn_361_);
lean_inc_ref(v_aFn_360_);
v___x_362_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_352_, v_aFn_360_, v_bFn_361_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_460_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_460_ == 0)
{
v___x_365_ = v___x_362_;
v_isShared_366_ = v_isSharedCheck_460_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_362_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_460_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
uint8_t v___x_367_; uint8_t v___x_368_; 
v___x_367_ = 1;
v___x_368_ = lean_unbox(v_a_363_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; 
lean_del_object(v___x_365_);
lean_inc_ref(v_aFn_360_);
v___x_369_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_352_, v_bFn_361_, v_aFn_360_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_455_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_455_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_455_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_455_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
uint8_t v___x_374_; 
v___x_374_ = lean_unbox(v_a_370_);
lean_dec(v_a_370_);
if (v___x_374_ == 0)
{
lean_object* v_dummy_375_; lean_object* v_nargs_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v_nargs_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; uint8_t v___x_387_; 
lean_dec(v_a_363_);
v_dummy_375_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__1, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__1_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__1);
v_nargs_376_ = l_Lean_Expr_getAppNumArgs(v_a_353_);
lean_inc(v_nargs_376_);
v___x_377_ = lean_mk_array(v_nargs_376_, v_dummy_375_);
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = lean_nat_sub(v_nargs_376_, v___x_378_);
lean_dec(v_nargs_376_);
v___x_380_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_353_, v___x_377_, v___x_379_);
v_nargs_381_ = l_Lean_Expr_getAppNumArgs(v_b_354_);
lean_inc(v_nargs_381_);
v___x_382_ = lean_mk_array(v_nargs_381_, v_dummy_375_);
v___x_383_ = lean_nat_sub(v_nargs_381_, v___x_378_);
lean_dec(v_nargs_381_);
v___x_384_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_b_354_, v___x_382_, v___x_383_);
v___x_385_ = lean_array_get_size(v___x_380_);
v___x_386_ = lean_array_get_size(v___x_384_);
v___x_387_ = lean_nat_dec_lt(v___x_385_, v___x_386_);
if (v___x_387_ == 0)
{
uint8_t v___x_388_; 
v___x_388_ = lean_nat_dec_lt(v___x_386_, v___x_385_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; 
lean_del_object(v___x_372_);
v___x_389_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(v_aFn_360_, v___x_385_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_a_390_);
lean_dec_ref_known(v___x_389_, 1);
v___x_391_ = lean_array_get_size(v_a_390_);
v___x_392_ = lean_unsigned_to_nat(0u);
v___x_393_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
v___x_394_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(v___x_391_, v_a_390_, v___x_380_, v___x_384_, v_mode_352_, v___x_392_, v___x_393_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
lean_dec(v_a_390_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_427_; 
v_a_395_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_427_ == 0)
{
v___x_397_ = v___x_394_;
v_isShared_398_ = v_isSharedCheck_427_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_394_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_427_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v_fst_399_; 
v_fst_399_ = lean_ctor_get(v_a_395_, 0);
lean_inc(v_fst_399_);
lean_dec(v_a_395_);
if (lean_obj_tag(v_fst_399_) == 0)
{
lean_object* v___x_400_; 
lean_del_object(v___x_397_);
v___x_400_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(v___x_385_, v___x_380_, v___x_384_, v_mode_352_, v___x_391_, v___x_393_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
lean_dec_ref(v___x_384_);
lean_dec_ref(v___x_380_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_414_; 
v_a_401_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_414_ == 0)
{
v___x_403_ = v___x_400_;
v_isShared_404_ = v_isSharedCheck_414_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_400_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_414_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v_fst_405_; 
v_fst_405_ = lean_ctor_get(v_a_401_, 0);
lean_inc(v_fst_405_);
lean_dec(v_a_401_);
if (lean_obj_tag(v_fst_405_) == 0)
{
lean_object* v___x_406_; lean_object* v___x_408_; 
v___x_406_ = lean_box(v___x_388_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_406_);
v___x_408_ = v___x_403_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_406_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
else
{
lean_object* v_val_410_; lean_object* v___x_412_; 
v_val_410_ = lean_ctor_get(v_fst_405_, 0);
lean_inc(v_val_410_);
lean_dec_ref_known(v_fst_405_, 1);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v_val_410_);
v___x_412_ = v___x_403_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_val_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
else
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
v_a_415_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_400_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_400_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
}
else
{
lean_object* v_val_423_; lean_object* v___x_425_; 
lean_dec_ref(v___x_384_);
lean_dec_ref(v___x_380_);
v_val_423_ = lean_ctor_get(v_fst_399_, 0);
lean_inc(v_val_423_);
lean_dec_ref_known(v_fst_399_, 1);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 0, v_val_423_);
v___x_425_ = v___x_397_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_val_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
lean_dec_ref(v___x_384_);
lean_dec_ref(v___x_380_);
v_a_428_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_394_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_394_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec_ref(v___x_384_);
lean_dec_ref(v___x_380_);
v_a_436_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_389_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_389_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
lean_object* v___x_444_; lean_object* v___x_446_; 
lean_dec_ref(v___x_384_);
lean_dec_ref(v___x_380_);
lean_dec_ref(v_aFn_360_);
v___x_444_ = lean_box(v___x_387_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_444_);
v___x_446_ = v___x_372_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
else
{
lean_object* v___x_448_; lean_object* v___x_450_; 
lean_dec_ref(v___x_384_);
lean_dec_ref(v___x_380_);
lean_dec_ref(v_aFn_360_);
v___x_448_ = lean_box(v___x_367_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_448_);
v___x_450_ = v___x_372_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_453_; 
lean_dec_ref(v_aFn_360_);
lean_dec_ref(v_b_354_);
lean_dec_ref(v_a_353_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v_a_363_);
v___x_453_ = v___x_372_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_363_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
lean_dec(v_a_363_);
lean_dec_ref(v_aFn_360_);
lean_dec_ref(v_b_354_);
lean_dec_ref(v_a_353_);
return v___x_369_;
}
}
else
{
lean_object* v___x_456_; lean_object* v___x_458_; 
lean_dec(v_a_363_);
lean_dec_ref(v_bFn_361_);
lean_dec_ref(v_aFn_360_);
lean_dec_ref(v_b_354_);
lean_dec_ref(v_a_353_);
v___x_456_ = lean_box(v___x_367_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 0, v___x_456_);
v___x_458_ = v___x_365_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_456_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
}
else
{
lean_dec_ref(v_bFn_361_);
lean_dec_ref(v_aFn_360_);
lean_dec_ref(v_b_354_);
lean_dec_ref(v_a_353_);
return v___x_362_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_464_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__6));
v___x_465_ = lean_unsigned_to_nat(27u);
v___x_466_ = lean_unsigned_to_nat(152u);
v___x_467_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__5));
v___x_468_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__4));
v___x_469_ = l_mkPanicMessageWithDecl(v___x_468_, v___x_467_, v___x_466_, v___x_465_, v___x_464_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(uint8_t v_mode_470_, lean_object* v_a_471_, lean_object* v_b_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_d_479_; lean_object* v_e_480_; lean_object* v___y_481_; lean_object* v___y_482_; lean_object* v___y_483_; lean_object* v___y_484_; 
switch(lean_obj_tag(v_a_471_))
{
case 0:
{
lean_object* v_deBruijnIndex_488_; lean_object* v___x_489_; uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_deBruijnIndex_488_ = lean_ctor_get(v_a_471_, 0);
lean_inc(v_deBruijnIndex_488_);
lean_dec_ref_known(v_a_471_, 1);
v___x_489_ = l_Lean_Expr_bvarIdx_x21(v_b_472_);
lean_dec_ref(v_b_472_);
v___x_490_ = lean_nat_dec_lt(v_deBruijnIndex_488_, v___x_489_);
lean_dec(v___x_489_);
lean_dec(v_deBruijnIndex_488_);
v___x_491_ = lean_box(v___x_490_);
v___x_492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
return v___x_492_;
}
case 1:
{
lean_object* v_fvarId_493_; lean_object* v___x_494_; 
v_fvarId_493_ = lean_ctor_get(v_a_471_, 0);
lean_inc(v_fvarId_493_);
lean_dec_ref_known(v_a_471_, 1);
v___x_494_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_493_, v_a_473_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v_a_495_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_495_);
lean_dec_ref_known(v___x_494_, 1);
v___x_496_ = l_Lean_Expr_fvarId_x21(v_b_472_);
lean_dec_ref(v_b_472_);
v___x_497_ = l_Lean_FVarId_findDecl_x3f___redArg(v___x_496_, v_a_473_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_520_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_520_ == 0)
{
v___x_500_ = v___x_497_;
v_isShared_501_ = v_isSharedCheck_520_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v___x_497_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_520_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___y_503_; lean_object* v___y_504_; lean_object* v___y_512_; 
if (lean_obj_tag(v_a_495_) == 0)
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3);
v___x_518_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(v___x_517_);
v___y_512_ = v___x_518_;
goto v___jp_511_;
}
else
{
lean_object* v_val_519_; 
v_val_519_ = lean_ctor_get(v_a_495_, 0);
lean_inc(v_val_519_);
lean_dec_ref_known(v_a_495_, 1);
v___y_512_ = v_val_519_;
goto v___jp_511_;
}
v___jp_502_:
{
lean_object* v___x_505_; uint8_t v___x_506_; lean_object* v___x_507_; lean_object* v___x_509_; 
v___x_505_ = l_Lean_LocalDecl_index(v___y_504_);
lean_dec_ref(v___y_504_);
v___x_506_ = lean_nat_dec_lt(v___y_503_, v___x_505_);
lean_dec(v___x_505_);
lean_dec(v___y_503_);
v___x_507_ = lean_box(v___x_506_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_507_);
v___x_509_ = v___x_500_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_507_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
v___jp_511_:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lean_LocalDecl_index(v___y_512_);
lean_dec_ref(v___y_512_);
if (lean_obj_tag(v_a_498_) == 0)
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__3);
v___x_515_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__2(v___x_514_);
v___y_503_ = v___x_513_;
v___y_504_ = v___x_515_;
goto v___jp_502_;
}
else
{
lean_object* v_val_516_; 
v_val_516_ = lean_ctor_get(v_a_498_, 0);
lean_inc(v_val_516_);
lean_dec_ref_known(v_a_498_, 1);
v___y_503_ = v___x_513_;
v___y_504_ = v_val_516_;
goto v___jp_502_;
}
}
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
lean_dec(v_a_495_);
v_a_521_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_497_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_497_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec_ref(v_b_472_);
v_a_529_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_494_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_494_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_537_; lean_object* v___x_538_; uint8_t v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v_mvarId_537_ = lean_ctor_get(v_a_471_, 0);
lean_inc(v_mvarId_537_);
lean_dec_ref_known(v_a_471_, 1);
v___x_538_ = l_Lean_Expr_mvarId_x21(v_b_472_);
lean_dec_ref(v_b_472_);
v___x_539_ = l_Lean_Name_lt(v_mvarId_537_, v___x_538_);
lean_dec(v___x_538_);
lean_dec(v_mvarId_537_);
v___x_540_ = lean_box(v___x_539_);
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
return v___x_541_;
}
case 3:
{
lean_object* v_u_542_; lean_object* v___x_543_; uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v_u_542_ = lean_ctor_get(v_a_471_, 0);
lean_inc(v_u_542_);
lean_dec_ref_known(v_a_471_, 1);
v___x_543_ = l_Lean_Expr_sortLevel_x21(v_b_472_);
lean_dec_ref(v_b_472_);
v___x_544_ = l_Lean_Level_normLt(v_u_542_, v___x_543_);
lean_dec(v___x_543_);
lean_dec(v_u_542_);
v___x_545_ = lean_box(v___x_544_);
v___x_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
return v___x_546_;
}
case 4:
{
lean_object* v_declName_547_; lean_object* v___x_548_; uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v_declName_547_ = lean_ctor_get(v_a_471_, 0);
lean_inc(v_declName_547_);
lean_dec_ref_known(v_a_471_, 2);
v___x_548_ = l_Lean_Expr_constName_x21(v_b_472_);
lean_dec_ref(v_b_472_);
v___x_549_ = l_Lean_Name_lt(v_declName_547_, v___x_548_);
lean_dec(v___x_548_);
lean_dec(v_declName_547_);
v___x_550_ = lean_box(v___x_549_);
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
case 5:
{
lean_object* v___x_552_; 
v___x_552_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(v_mode_470_, v_a_471_, v_b_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
return v___x_552_;
}
case 8:
{
lean_object* v_value_553_; lean_object* v_body_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_value_553_ = lean_ctor_get(v_a_471_, 2);
lean_inc_ref(v_value_553_);
v_body_554_ = lean_ctor_get(v_a_471_, 3);
lean_inc_ref(v_body_554_);
lean_dec_ref_known(v_a_471_, 4);
v___x_555_ = l_Lean_Expr_letValue_x21(v_b_472_);
v___x_556_ = l_Lean_Expr_letBody_x21(v_b_472_);
lean_dec_ref(v_b_472_);
v___x_557_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(v_mode_470_, v_value_553_, v_body_554_, v___x_555_, v___x_556_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
return v___x_557_;
}
case 9:
{
lean_object* v_a_558_; lean_object* v___x_559_; uint8_t v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_a_558_ = lean_ctor_get(v_a_471_, 0);
lean_inc_ref(v_a_558_);
lean_dec_ref_known(v_a_471_, 1);
v___x_559_ = l_Lean_Expr_litValue_x21(v_b_472_);
lean_dec_ref(v_b_472_);
v___x_560_ = l_Lean_Literal_lt(v_a_558_, v___x_559_);
lean_dec_ref(v___x_559_);
lean_dec_ref(v_a_558_);
v___x_561_ = lean_box(v___x_560_);
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
case 10:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
lean_dec_ref_known(v_a_471_, 2);
lean_dec_ref(v_b_472_);
v___x_563_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___closed__7);
v___x_564_ = l_panic___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor_spec__3(v___x_563_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
return v___x_564_;
}
case 11:
{
lean_object* v_idx_565_; lean_object* v_struct_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v_idx_565_ = lean_ctor_get(v_a_471_, 1);
lean_inc(v_idx_565_);
v_struct_566_ = lean_ctor_get(v_a_471_, 2);
lean_inc_ref(v_struct_566_);
lean_dec_ref_known(v_a_471_, 3);
v___x_567_ = l_Lean_Expr_projIdx_x21(v_b_472_);
v___x_568_ = lean_nat_dec_eq(v_idx_565_, v___x_567_);
if (v___x_568_ == 0)
{
uint8_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
lean_dec_ref(v_struct_566_);
lean_dec_ref(v_b_472_);
v___x_569_ = lean_nat_dec_lt(v_idx_565_, v___x_567_);
lean_dec(v___x_567_);
lean_dec(v_idx_565_);
v___x_570_ = lean_box(v___x_569_);
v___x_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
return v___x_571_;
}
else
{
lean_object* v___x_572_; lean_object* v___x_573_; 
lean_dec(v___x_567_);
lean_dec(v_idx_565_);
v___x_572_ = l_Lean_Expr_projExpr_x21(v_b_472_);
lean_dec_ref(v_b_472_);
v___x_573_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_470_, v_struct_566_, v___x_572_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
return v___x_573_;
}
}
default: 
{
lean_object* v_binderType_574_; lean_object* v_body_575_; 
v_binderType_574_ = lean_ctor_get(v_a_471_, 1);
lean_inc_ref(v_binderType_574_);
v_body_575_ = lean_ctor_get(v_a_471_, 2);
lean_inc_ref(v_body_575_);
lean_dec_ref(v_a_471_);
v_d_479_ = v_binderType_574_;
v_e_480_ = v_body_575_;
v___y_481_ = v_a_473_;
v___y_482_ = v_a_474_;
v___y_483_ = v_a_475_;
v___y_484_ = v_a_476_;
goto v___jp_478_;
}
}
v___jp_478_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_485_ = l_Lean_Expr_bindingDomain_x21(v_b_472_);
v___x_486_ = l_Lean_Expr_bindingBody_x21(v_b_472_);
lean_dec_ref(v_b_472_);
v___x_487_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(v_mode_470_, v_d_479_, v_e_480_, v___x_485_, v___x_486_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
return v___x_487_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(uint8_t v_mode_576_, lean_object* v_a_577_, lean_object* v_b_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = ((lean_object*)(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___closed__0));
v___x_585_ = l_Lean_Core_checkSystem(v___x_584_, v_a_581_, v_a_582_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v___x_586_; 
lean_dec_ref_known(v___x_585_, 1);
lean_inc_ref(v_a_577_);
lean_inc_ref(v_b_578_);
v___x_586_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(v_mode_576_, v_b_578_, v_a_577_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; uint8_t v___x_588_; uint8_t v___x_589_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_a_587_);
v___x_588_ = 1;
v___x_589_ = lean_unbox(v_a_587_);
lean_dec(v_a_587_);
if (v___x_589_ == 0)
{
uint8_t v___x_590_; uint8_t v___x_591_; uint8_t v___x_592_; 
v___x_590_ = l_Lean_Expr_ctorWeight(v_b_578_);
v___x_591_ = l_Lean_Expr_ctorWeight(v_a_577_);
v___x_592_ = lean_uint8_dec_lt(v___x_590_, v___x_591_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; 
lean_dec_ref_known(v___x_586_, 1);
lean_inc_ref(v_b_578_);
lean_inc_ref(v_a_577_);
v___x_593_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(v_mode_576_, v_a_577_, v_b_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_609_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_609_ == 0)
{
v___x_596_ = v___x_593_;
v_isShared_597_ = v_isSharedCheck_609_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_593_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_609_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
uint8_t v___x_598_; 
v___x_598_ = lean_unbox(v_a_594_);
lean_dec(v_a_594_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; lean_object* v___x_601_; 
lean_dec_ref(v_b_578_);
lean_dec_ref(v_a_577_);
v___x_599_ = lean_box(v___x_592_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_599_);
v___x_601_ = v___x_596_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_599_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
else
{
uint8_t v___x_603_; 
v___x_603_ = lean_uint8_dec_lt(v___x_591_, v___x_590_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; 
lean_del_object(v___x_596_);
v___x_604_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(v_mode_576_, v_a_577_, v_b_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
return v___x_604_;
}
else
{
lean_object* v___x_605_; lean_object* v___x_607_; 
lean_dec_ref(v_b_578_);
lean_dec_ref(v_a_577_);
v___x_605_ = lean_box(v___x_588_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 0, v___x_605_);
v___x_607_ = v___x_596_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
}
else
{
lean_dec_ref(v_b_578_);
lean_dec_ref(v_a_577_);
return v___x_593_;
}
}
else
{
lean_dec_ref(v_b_578_);
lean_dec_ref(v_a_577_);
return v___x_586_;
}
}
else
{
lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_617_; 
lean_dec_ref(v_b_578_);
lean_dec_ref(v_a_577_);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_617_ == 0)
{
lean_object* v_unused_618_; 
v_unused_618_ = lean_ctor_get(v___x_586_, 0);
lean_dec(v_unused_618_);
v___x_611_ = v___x_586_;
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
else
{
lean_dec(v___x_586_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_613_ = lean_box(v___x_588_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 0, v___x_613_);
v___x_615_ = v___x_611_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_613_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
else
{
lean_dec_ref(v_b_578_);
lean_dec_ref(v_a_577_);
return v___x_586_;
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
lean_dec_ref(v_b_578_);
lean_dec_ref(v_a_577_);
v_a_619_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_585_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_585_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(uint8_t v_mode_627_, lean_object* v_a_628_, lean_object* v_b_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_){
_start:
{
uint8_t v___x_635_; 
v___x_635_ = lean_expr_eqv(v_a_628_, v_b_629_);
if (v___x_635_ == 0)
{
uint8_t v___x_636_; 
v___x_636_ = l_Lean_Expr_isMData(v_a_628_);
if (v___x_636_ == 0)
{
uint8_t v___x_637_; 
v___x_637_ = l_Lean_Expr_isMData(v_b_629_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; 
v___x_638_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(v_mode_627_, v_a_628_, v_a_630_, v_a_631_, v_a_632_, v_a_633_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_640_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_a_639_);
lean_dec_ref_known(v___x_638_, 1);
v___x_640_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_reduce(v_mode_627_, v_b_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___x_642_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_640_, 1);
v___x_642_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(v_mode_627_, v_a_639_, v_a_641_, v_a_630_, v_a_631_, v_a_632_, v_a_633_);
return v___x_642_;
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_dec(v_a_639_);
v_a_643_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_640_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_640_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref(v_b_629_);
v_a_651_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_638_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_638_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
else
{
lean_object* v___x_659_; 
v___x_659_ = l_Lean_Expr_mdataExpr_x21(v_b_629_);
lean_dec_ref(v_b_629_);
v_b_629_ = v___x_659_;
goto _start;
}
}
else
{
lean_object* v___x_661_; 
v___x_661_ = l_Lean_Expr_mdataExpr_x21(v_a_628_);
lean_dec_ref(v_a_628_);
v_a_628_ = v___x_661_;
goto _start;
}
}
else
{
uint8_t v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
lean_dec_ref(v_b_629_);
lean_dec_ref(v_a_628_);
v___x_663_ = 0;
v___x_664_ = lean_box(v___x_663_);
v___x_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
return v___x_665_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(lean_object* v_upperBound_666_, lean_object* v_a_667_, lean_object* v_args_668_, uint8_t v_mode_669_, lean_object* v_b_670_, lean_object* v_a_671_, lean_object* v_b_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_a_679_; uint8_t v___x_683_; 
v___x_683_ = lean_nat_dec_lt(v_a_671_, v_upperBound_666_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; 
lean_dec(v_a_671_);
lean_dec_ref(v_b_670_);
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v_b_672_);
return v___x_684_;
}
else
{
lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v_isInstance_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec_ref(v_b_672_);
v___x_685_ = l_Lean_Meta_instInhabitedParamInfo_default;
v___x_686_ = lean_array_get_borrowed(v___x_685_, v_a_667_, v_a_671_);
v_isInstance_687_ = lean_ctor_get_uint8(v___x_686_, sizeof(void*)*1 + 4);
v___x_688_ = lean_box(0);
v___x_689_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
if (v_isInstance_687_ == 0)
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_690_ = l_Lean_instInhabitedExpr;
v___x_691_ = lean_array_get_borrowed(v___x_690_, v_args_668_, v_a_671_);
lean_inc_ref(v_b_670_);
lean_inc(v___x_691_);
v___x_692_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_669_, v___x_691_, v_b_670_, v___y_673_, v___y_674_, v___y_675_, v___y_676_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_703_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_703_ == 0)
{
v___x_695_ = v___x_692_;
v_isShared_696_ = v_isSharedCheck_703_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_692_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_703_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
uint8_t v___x_697_; 
v___x_697_ = lean_unbox(v_a_693_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_701_; 
lean_dec(v_a_671_);
lean_dec_ref(v_b_670_);
v___x_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_698_, 0, v_a_693_);
v___x_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
lean_ctor_set(v___x_699_, 1, v___x_688_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v___x_699_);
v___x_701_ = v___x_695_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
else
{
lean_del_object(v___x_695_);
lean_dec(v_a_693_);
v_a_679_ = v___x_689_;
goto v___jp_678_;
}
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_dec(v_a_671_);
lean_dec_ref(v_b_670_);
v_a_704_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_692_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_692_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
else
{
v_a_679_ = v___x_689_;
goto v___jp_678_;
}
}
v___jp_678_:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = lean_unsigned_to_nat(1u);
v___x_681_ = lean_nat_add(v_a_671_, v___x_680_);
lean_dec(v_a_671_);
lean_inc_ref(v_a_679_);
v_a_671_ = v___x_681_;
v_b_672_ = v_a_679_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(lean_object* v_upperBound_712_, lean_object* v_args_713_, uint8_t v_mode_714_, lean_object* v_b_715_, lean_object* v_a_716_, lean_object* v_b_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
uint8_t v___x_723_; 
v___x_723_ = lean_nat_dec_lt(v_a_716_, v_upperBound_712_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; 
lean_dec(v_a_716_);
lean_dec_ref(v_b_715_);
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v_b_717_);
return v___x_724_;
}
else
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
lean_dec_ref(v_b_717_);
v___x_725_ = lean_box(0);
v___x_726_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
v___x_727_ = lean_array_fget_borrowed(v_args_713_, v_a_716_);
lean_inc_ref(v_b_715_);
lean_inc(v___x_727_);
v___x_728_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_714_, v___x_727_, v_b_715_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_742_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_742_ == 0)
{
v___x_731_ = v___x_728_;
v_isShared_732_ = v_isSharedCheck_742_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_728_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_742_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
uint8_t v___x_733_; 
v___x_733_ = lean_unbox(v_a_729_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_737_; 
lean_dec(v_a_716_);
lean_dec_ref(v_b_715_);
v___x_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_734_, 0, v_a_729_);
v___x_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
lean_ctor_set(v___x_735_, 1, v___x_725_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 0, v___x_735_);
v___x_737_ = v___x_731_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_735_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; 
lean_del_object(v___x_731_);
lean_dec(v_a_729_);
v___x_739_ = lean_unsigned_to_nat(1u);
v___x_740_ = lean_nat_add(v_a_716_, v___x_739_);
lean_dec(v_a_716_);
v_a_716_ = v___x_740_;
v_b_717_ = v___x_726_;
goto _start;
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec(v_a_716_);
lean_dec_ref(v_b_715_);
v_a_743_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_728_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_728_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(uint8_t v_mode_751_, lean_object* v_b_752_, lean_object* v_x_753_, lean_object* v_x_754_, lean_object* v_x_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
if (lean_obj_tag(v_x_753_) == 5)
{
lean_object* v_fn_761_; lean_object* v_arg_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v_fn_761_ = lean_ctor_get(v_x_753_, 0);
lean_inc_ref(v_fn_761_);
v_arg_762_ = lean_ctor_get(v_x_753_, 1);
lean_inc_ref(v_arg_762_);
lean_dec_ref_known(v_x_753_, 2);
v___x_763_ = lean_array_set(v_x_754_, v_x_755_, v_arg_762_);
v___x_764_ = lean_unsigned_to_nat(1u);
v___x_765_ = lean_nat_sub(v_x_755_, v___x_764_);
lean_dec(v_x_755_);
v_x_753_ = v_fn_761_;
v_x_754_ = v___x_763_;
v_x_755_ = v___x_765_;
goto _start;
}
else
{
lean_object* v___x_767_; lean_object* v___x_768_; 
lean_dec(v_x_755_);
v___x_767_ = lean_array_get_size(v_x_754_);
v___x_768_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_getParamsInfo(v_x_753_, v___x_767_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_a_769_);
lean_dec_ref_known(v___x_768_, 1);
v___x_770_ = lean_array_get_size(v_a_769_);
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___closed__0));
lean_inc_ref(v_b_752_);
v___x_773_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(v___x_770_, v_a_769_, v_x_754_, v_mode_751_, v_b_752_, v___x_771_, v___x_772_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v_a_769_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_807_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_807_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_807_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_807_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v_fst_778_; 
v_fst_778_ = lean_ctor_get(v_a_774_, 0);
lean_inc(v_fst_778_);
lean_dec(v_a_774_);
if (lean_obj_tag(v_fst_778_) == 0)
{
lean_object* v___x_779_; 
lean_del_object(v___x_776_);
v___x_779_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(v___x_767_, v_x_754_, v_mode_751_, v_b_752_, v___x_770_, v___x_772_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec_ref(v_x_754_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_794_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_794_ == 0)
{
v___x_782_ = v___x_779_;
v_isShared_783_ = v_isSharedCheck_794_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_779_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_794_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v_fst_784_; 
v_fst_784_ = lean_ctor_get(v_a_780_, 0);
lean_inc(v_fst_784_);
lean_dec(v_a_780_);
if (lean_obj_tag(v_fst_784_) == 0)
{
uint8_t v___x_785_; lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_785_ = 1;
v___x_786_ = lean_box(v___x_785_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 0, v___x_786_);
v___x_788_ = v___x_782_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
else
{
lean_object* v_val_790_; lean_object* v___x_792_; 
v_val_790_ = lean_ctor_get(v_fst_784_, 0);
lean_inc(v_val_790_);
lean_dec_ref_known(v_fst_784_, 1);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 0, v_val_790_);
v___x_792_ = v___x_782_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_val_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
v_a_795_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_779_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_779_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
else
{
lean_object* v_val_803_; lean_object* v___x_805_; 
lean_dec_ref(v_x_754_);
lean_dec_ref(v_b_752_);
v_val_803_ = lean_ctor_get(v_fst_778_, 0);
lean_inc(v_val_803_);
lean_dec_ref_known(v_fst_778_, 1);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v_val_803_);
v___x_805_ = v___x_776_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_val_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
lean_dec_ref(v_x_754_);
lean_dec_ref(v_b_752_);
v_a_808_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_773_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_773_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
else
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_823_; 
lean_dec_ref(v_x_754_);
lean_dec_ref(v_b_752_);
v_a_816_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_823_ == 0)
{
v___x_818_ = v___x_768_;
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_768_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_a_816_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(uint8_t v_mode_824_, lean_object* v_a_825_, lean_object* v_b_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_){
_start:
{
lean_object* v_d_833_; lean_object* v_e_834_; lean_object* v___y_835_; lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; 
switch(lean_obj_tag(v_a_825_))
{
case 11:
{
lean_object* v_struct_843_; lean_object* v___x_844_; 
v_struct_843_ = lean_ctor_get(v_a_825_, 2);
lean_inc_ref(v_struct_843_);
lean_dec_ref_known(v_a_825_, 3);
v___x_844_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_824_, v_struct_843_, v_b_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_844_;
}
case 5:
{
lean_object* v_dummy_845_; lean_object* v_nargs_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_dummy_845_ = lean_obj_once(&l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__1, &l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__1_once, _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___closed__1);
v_nargs_846_ = l_Lean_Expr_getAppNumArgs(v_a_825_);
lean_inc(v_nargs_846_);
v___x_847_ = lean_mk_array(v_nargs_846_, v_dummy_845_);
v___x_848_ = lean_unsigned_to_nat(1u);
v___x_849_ = lean_nat_sub(v_nargs_846_, v___x_848_);
lean_dec(v_nargs_846_);
v___x_850_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(v_mode_824_, v_b_826_, v_a_825_, v___x_847_, v___x_849_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_850_;
}
case 6:
{
lean_object* v_binderType_851_; lean_object* v_body_852_; 
v_binderType_851_ = lean_ctor_get(v_a_825_, 1);
lean_inc_ref(v_binderType_851_);
v_body_852_ = lean_ctor_get(v_a_825_, 2);
lean_inc_ref(v_body_852_);
lean_dec_ref_known(v_a_825_, 3);
v_d_833_ = v_binderType_851_;
v_e_834_ = v_body_852_;
v___y_835_ = v_a_827_;
v___y_836_ = v_a_828_;
v___y_837_ = v_a_829_;
v___y_838_ = v_a_830_;
goto v___jp_832_;
}
case 7:
{
lean_object* v_binderType_853_; lean_object* v_body_854_; 
v_binderType_853_ = lean_ctor_get(v_a_825_, 1);
lean_inc_ref(v_binderType_853_);
v_body_854_ = lean_ctor_get(v_a_825_, 2);
lean_inc_ref(v_body_854_);
lean_dec_ref_known(v_a_825_, 3);
v_d_833_ = v_binderType_853_;
v_e_834_ = v_body_854_;
v___y_835_ = v_a_827_;
v___y_836_ = v_a_828_;
v___y_837_ = v_a_829_;
v___y_838_ = v_a_830_;
goto v___jp_832_;
}
case 8:
{
lean_object* v_value_855_; lean_object* v_body_856_; lean_object* v___x_857_; 
v_value_855_ = lean_ctor_get(v_a_825_, 2);
lean_inc_ref(v_value_855_);
v_body_856_ = lean_ctor_get(v_a_825_, 3);
lean_inc_ref(v_body_856_);
lean_dec_ref_known(v_a_825_, 4);
lean_inc_ref(v_b_826_);
v___x_857_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_824_, v_value_855_, v_b_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; uint8_t v___x_859_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_a_858_);
v___x_859_ = lean_unbox(v_a_858_);
lean_dec(v_a_858_);
if (v___x_859_ == 0)
{
lean_dec_ref(v_body_856_);
lean_dec_ref(v_b_826_);
return v___x_857_;
}
else
{
lean_object* v___x_860_; 
lean_dec_ref_known(v___x_857_, 1);
v___x_860_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_824_, v_body_856_, v_b_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
return v___x_860_;
}
}
else
{
lean_dec_ref(v_body_856_);
lean_dec_ref(v_b_826_);
return v___x_857_;
}
}
default: 
{
uint8_t v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
lean_dec_ref(v_b_826_);
lean_dec_ref(v_a_825_);
v___x_861_ = 1;
v___x_862_ = lean_box(v___x_861_);
v___x_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_863_, 0, v___x_862_);
return v___x_863_;
}
}
v___jp_832_:
{
lean_object* v___x_839_; 
lean_inc_ref(v_b_826_);
v___x_839_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_824_, v_d_833_, v_b_826_, v___y_835_, v___y_836_, v___y_837_, v___y_838_);
if (lean_obj_tag(v___x_839_) == 0)
{
lean_object* v_a_840_; uint8_t v___x_841_; 
v_a_840_ = lean_ctor_get(v___x_839_, 0);
lean_inc(v_a_840_);
v___x_841_ = lean_unbox(v_a_840_);
lean_dec(v_a_840_);
if (v___x_841_ == 0)
{
lean_dec_ref(v_e_834_);
lean_dec_ref(v_b_826_);
return v___x_839_;
}
else
{
lean_object* v___x_842_; 
lean_dec_ref_known(v___x_839_, 1);
v___x_842_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_824_, v_e_834_, v_b_826_, v___y_835_, v___y_836_, v___y_837_, v___y_838_);
return v___x_842_;
}
}
else
{
lean_dec_ref(v_e_834_);
lean_dec_ref(v_b_826_);
return v___x_839_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(uint8_t v_mode_864_, lean_object* v_a_865_, lean_object* v_b_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
lean_object* v___x_872_; 
v___x_872_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(v_mode_864_, v_a_865_, v_b_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_888_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_888_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_888_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_888_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
uint8_t v___x_877_; 
v___x_877_ = lean_unbox(v_a_873_);
lean_dec(v_a_873_);
if (v___x_877_ == 0)
{
uint8_t v___x_878_; lean_object* v___x_879_; lean_object* v___x_881_; 
v___x_878_ = 1;
v___x_879_ = lean_box(v___x_878_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_879_);
v___x_881_ = v___x_875_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
else
{
uint8_t v___x_883_; lean_object* v___x_884_; lean_object* v___x_886_; 
v___x_883_ = 0;
v___x_884_ = lean_box(v___x_883_);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v___x_884_);
v___x_886_ = v___x_875_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
else
{
return v___x_872_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe___boxed(lean_object* v_mode_889_, lean_object* v_a_890_, lean_object* v_b_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_){
_start:
{
uint8_t v_mode_boxed_897_; lean_object* v_res_898_; 
v_mode_boxed_897_ = lean_unbox(v_mode_889_);
v_res_898_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_someChildGe(v_mode_boxed_897_, v_a_890_, v_b_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_);
lean_dec(v_a_895_);
lean_dec_ref(v_a_894_);
lean_dec(v_a_893_);
lean_dec_ref(v_a_892_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair___boxed(lean_object* v_mode_899_, lean_object* v_a_u2081_900_, lean_object* v_a_u2082_901_, lean_object* v_b_u2081_902_, lean_object* v_b_u2082_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_){
_start:
{
uint8_t v_mode_boxed_909_; lean_object* v_res_910_; 
v_mode_boxed_909_ = lean_unbox(v_mode_899_);
v_res_910_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltPair(v_mode_boxed_909_, v_a_u2081_900_, v_a_u2082_901_, v_b_u2081_902_, v_b_u2082_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_);
lean_dec(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec(v_a_905_);
lean_dec_ref(v_a_904_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg___boxed(lean_object* v_upperBound_911_, lean_object* v_args_912_, lean_object* v_mode_913_, lean_object* v_b_914_, lean_object* v_a_915_, lean_object* v_b_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
uint8_t v_mode_boxed_922_; lean_object* v_res_923_; 
v_mode_boxed_922_ = lean_unbox(v_mode_913_);
v_res_923_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(v_upperBound_911_, v_args_912_, v_mode_boxed_922_, v_b_914_, v_a_915_, v_b_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec_ref(v_args_912_);
lean_dec(v_upperBound_911_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt___boxed(lean_object* v_mode_924_, lean_object* v_a_925_, lean_object* v_b_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
uint8_t v_mode_boxed_932_; lean_object* v_res_933_; 
v_mode_boxed_932_ = lean_unbox(v_mode_924_);
v_res_933_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_boxed_932_, v_a_925_, v_b_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg___boxed(lean_object* v_upperBound_934_, lean_object* v_a_935_, lean_object* v_args_936_, lean_object* v_mode_937_, lean_object* v_b_938_, lean_object* v_a_939_, lean_object* v_b_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
uint8_t v_mode_boxed_946_; lean_object* v_res_947_; 
v_mode_boxed_946_ = lean_unbox(v_mode_937_);
v_res_947_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(v_upperBound_934_, v_a_935_, v_args_936_, v_mode_boxed_946_, v_b_938_, v_a_939_, v_b_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec_ref(v_args_936_);
lean_dec_ref(v_a_935_);
lean_dec(v_upperBound_934_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo___boxed(lean_object* v_mode_948_, lean_object* v_a_949_, lean_object* v_b_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_){
_start:
{
uint8_t v_mode_boxed_956_; lean_object* v_res_957_; 
v_mode_boxed_956_ = lean_unbox(v_mode_948_);
v_res_957_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lpo(v_mode_boxed_956_, v_a_949_, v_b_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
lean_dec(v_a_952_);
lean_dec_ref(v_a_951_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg___boxed(lean_object* v_upperBound_958_, lean_object* v___x_959_, lean_object* v___x_960_, lean_object* v_mode_961_, lean_object* v_a_962_, lean_object* v_b_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
uint8_t v_mode_boxed_969_; lean_object* v_res_970_; 
v_mode_boxed_969_ = lean_unbox(v_mode_961_);
v_res_970_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(v_upperBound_958_, v___x_959_, v___x_960_, v_mode_boxed_969_, v_a_962_, v_b_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec_ref(v___x_960_);
lean_dec_ref(v___x_959_);
lean_dec(v_upperBound_958_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt___boxed(lean_object* v_mode_971_, lean_object* v_a_972_, lean_object* v_b_973_, lean_object* v_a_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_){
_start:
{
uint8_t v_mode_boxed_979_; lean_object* v_res_980_; 
v_mode_boxed_979_ = lean_unbox(v_mode_971_);
v_res_980_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt(v_mode_boxed_979_, v_a_972_, v_b_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_);
lean_dec(v_a_977_);
lean_dec_ref(v_a_976_);
lean_dec(v_a_975_);
lean_dec_ref(v_a_974_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11___boxed(lean_object* v_mode_981_, lean_object* v_b_982_, lean_object* v_x_983_, lean_object* v_x_984_, lean_object* v_x_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
uint8_t v_mode_boxed_991_; lean_object* v_res_992_; 
v_mode_boxed_991_ = lean_unbox(v_mode_981_);
v_res_992_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__11(v_mode_boxed_991_, v_b_982_, v_x_983_, v_x_984_, v_x_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg___boxed(lean_object* v_upperBound_993_, lean_object* v_a_994_, lean_object* v___x_995_, lean_object* v___x_996_, lean_object* v_mode_997_, lean_object* v_a_998_, lean_object* v_b_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
uint8_t v_mode_boxed_1005_; lean_object* v_res_1006_; 
v_mode_boxed_1005_ = lean_unbox(v_mode_997_);
v_res_1006_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(v_upperBound_993_, v_a_994_, v___x_995_, v___x_996_, v_mode_boxed_1005_, v_a_998_, v_b_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec_ref(v___x_996_);
lean_dec_ref(v___x_995_);
lean_dec_ref(v_a_994_);
lean_dec(v_upperBound_993_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp___boxed(lean_object* v_mode_1007_, lean_object* v_a_1008_, lean_object* v_b_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_){
_start:
{
uint8_t v_mode_boxed_1015_; lean_object* v_res_1016_; 
v_mode_boxed_1015_ = lean_unbox(v_mode_1007_);
v_res_1016_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp(v_mode_boxed_1015_, v_a_1008_, v_b_1009_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_);
lean_dec(v_a_1013_);
lean_dec_ref(v_a_1012_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor___boxed(lean_object* v_mode_1017_, lean_object* v_a_1018_, lean_object* v_b_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_){
_start:
{
uint8_t v_mode_boxed_1025_; lean_object* v_res_1026_; 
v_mode_boxed_1025_ = lean_unbox(v_mode_1017_);
v_res_1026_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lexSameCtor(v_mode_boxed_1025_, v_a_1018_, v_b_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_);
lean_dec(v_a_1023_);
lean_dec_ref(v_a_1022_);
lean_dec(v_a_1021_);
lean_dec_ref(v_a_1020_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6(lean_object* v_upperBound_1027_, lean_object* v___x_1028_, lean_object* v___x_1029_, uint8_t v_mode_1030_, lean_object* v_inst_1031_, lean_object* v_R_1032_, lean_object* v_a_1033_, lean_object* v_b_1034_, lean_object* v_c_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___redArg(v_upperBound_1027_, v___x_1028_, v___x_1029_, v_mode_1030_, v_a_1033_, v_b_1034_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6___boxed(lean_object* v_upperBound_1042_, lean_object* v___x_1043_, lean_object* v___x_1044_, lean_object* v_mode_1045_, lean_object* v_inst_1046_, lean_object* v_R_1047_, lean_object* v_a_1048_, lean_object* v_b_1049_, lean_object* v_c_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
uint8_t v_mode_boxed_1056_; lean_object* v_res_1057_; 
v_mode_boxed_1056_ = lean_unbox(v_mode_1045_);
v_res_1057_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__6(v_upperBound_1042_, v___x_1043_, v___x_1044_, v_mode_boxed_1056_, v_inst_1046_, v_R_1047_, v_a_1048_, v_b_1049_, v_c_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec_ref(v___x_1044_);
lean_dec_ref(v___x_1043_);
lean_dec(v_upperBound_1042_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7(lean_object* v_upperBound_1058_, lean_object* v_a_1059_, lean_object* v___x_1060_, lean_object* v___x_1061_, uint8_t v_mode_1062_, lean_object* v_inst_1063_, lean_object* v_R_1064_, lean_object* v_a_1065_, lean_object* v_b_1066_, lean_object* v_c_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___redArg(v_upperBound_1058_, v_a_1059_, v___x_1060_, v___x_1061_, v_mode_1062_, v_a_1065_, v_b_1066_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7___boxed(lean_object* v_upperBound_1074_, lean_object* v_a_1075_, lean_object* v___x_1076_, lean_object* v___x_1077_, lean_object* v_mode_1078_, lean_object* v_inst_1079_, lean_object* v_R_1080_, lean_object* v_a_1081_, lean_object* v_b_1082_, lean_object* v_c_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
uint8_t v_mode_boxed_1089_; lean_object* v_res_1090_; 
v_mode_boxed_1089_ = lean_unbox(v_mode_1078_);
v_res_1090_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_ltApp_spec__7(v_upperBound_1074_, v_a_1075_, v___x_1076_, v___x_1077_, v_mode_boxed_1089_, v_inst_1079_, v_R_1080_, v_a_1081_, v_b_1082_, v_c_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec_ref(v___x_1077_);
lean_dec_ref(v___x_1076_);
lean_dec_ref(v_a_1075_);
lean_dec(v_upperBound_1074_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9(lean_object* v_upperBound_1091_, lean_object* v_args_1092_, uint8_t v_mode_1093_, lean_object* v_b_1094_, lean_object* v_inst_1095_, lean_object* v_R_1096_, lean_object* v_a_1097_, lean_object* v_b_1098_, lean_object* v_c_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___redArg(v_upperBound_1091_, v_args_1092_, v_mode_1093_, v_b_1094_, v_a_1097_, v_b_1098_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9___boxed(lean_object* v_upperBound_1106_, lean_object* v_args_1107_, lean_object* v_mode_1108_, lean_object* v_b_1109_, lean_object* v_inst_1110_, lean_object* v_R_1111_, lean_object* v_a_1112_, lean_object* v_b_1113_, lean_object* v_c_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
uint8_t v_mode_boxed_1120_; lean_object* v_res_1121_; 
v_mode_boxed_1120_ = lean_unbox(v_mode_1108_);
v_res_1121_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__9(v_upperBound_1106_, v_args_1107_, v_mode_boxed_1120_, v_b_1109_, v_inst_1110_, v_R_1111_, v_a_1112_, v_b_1113_, v_c_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec_ref(v_args_1107_);
lean_dec(v_upperBound_1106_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10(lean_object* v_upperBound_1122_, lean_object* v_a_1123_, lean_object* v_args_1124_, uint8_t v_mode_1125_, lean_object* v_b_1126_, lean_object* v_inst_1127_, lean_object* v_R_1128_, lean_object* v_a_1129_, lean_object* v_b_1130_, lean_object* v_c_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___redArg(v_upperBound_1122_, v_a_1123_, v_args_1124_, v_mode_1125_, v_b_1126_, v_a_1129_, v_b_1130_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10___boxed(lean_object* v_upperBound_1138_, lean_object* v_a_1139_, lean_object* v_args_1140_, lean_object* v_mode_1141_, lean_object* v_b_1142_, lean_object* v_inst_1143_, lean_object* v_R_1144_, lean_object* v_a_1145_, lean_object* v_b_1146_, lean_object* v_c_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
uint8_t v_mode_boxed_1153_; lean_object* v_res_1154_; 
v_mode_boxed_1153_ = lean_unbox(v_mode_1141_);
v_res_1154_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_allChildrenLt_spec__10(v_upperBound_1138_, v_a_1139_, v_args_1140_, v_mode_boxed_1153_, v_b_1142_, v_inst_1143_, v_R_1144_, v_a_1145_, v_b_1146_, v_c_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
lean_dec_ref(v_args_1140_);
lean_dec_ref(v_a_1139_);
lean_dec(v_upperBound_1138_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main(lean_object* v_a_1155_, lean_object* v_b_1156_, uint8_t v_mode_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_1157_, v_a_1155_, v_b_1156_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ACLt_main___boxed(lean_object* v_a_1164_, lean_object* v_b_1165_, lean_object* v_mode_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_){
_start:
{
uint8_t v_mode_boxed_1172_; lean_object* v_res_1173_; 
v_mode_boxed_1172_ = lean_unbox(v_mode_1166_);
v_res_1173_ = l_Lean_Meta_ACLt_main(v_a_1164_, v_b_1165_, v_mode_boxed_1172_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
lean_dec(v_a_1170_);
lean_dec_ref(v_a_1169_);
lean_dec(v_a_1168_);
lean_dec_ref(v_a_1167_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_acLt(lean_object* v_a_1174_, lean_object* v_b_1175_, uint8_t v_mode_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v___x_1182_; 
v___x_1182_ = l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_main_lt(v_mode_1176_, v_a_1174_, v_b_1175_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_acLt___boxed(lean_object* v_a_1183_, lean_object* v_b_1184_, lean_object* v_mode_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_){
_start:
{
uint8_t v_mode_boxed_1191_; lean_object* v_res_1192_; 
v_mode_boxed_1191_ = lean_unbox(v_mode_1185_);
v_res_1192_ = l_Lean_Meta_acLt(v_a_1183_, v_b_1184_, v_mode_boxed_1191_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_);
lean_dec(v_a_1189_);
lean_dec_ref(v_a_1188_);
lean_dec(v_a_1187_);
lean_dec_ref(v_a_1186_);
return v_res_1192_;
}
}
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_ACLt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config = _init_l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config();
lean_mark_persistent(l___private_Lean_Meta_ACLt_0__Lean_Meta_ACLt_config);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_ACLt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_ACLt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ACLt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_ACLt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_ACLt(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Declaration
// Imports: public import Lean.Expr import Init.Data.Ord.UInt import Init.Data.ToString.Macro
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
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_appendCore(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_List_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_opaque_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_opaque_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_opaque_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_opaque_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_abbrev_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_abbrev_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_abbrev_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_abbrev_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_regular_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_regular_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_regular_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_regular_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedReducibilityHints_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedReducibilityHints;
LEAN_EXPORT uint8_t l_Lean_instBEqReducibilityHints_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqReducibilityHints_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqReducibilityHints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqReducibilityHints_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqReducibilityHints___closed__0 = (const lean_object*)&l_Lean_instBEqReducibilityHints___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqReducibilityHints = (const lean_object*)&l_Lean_instBEqReducibilityHints___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_reducibility_hints_regular(uint32_t);
LEAN_EXPORT lean_object* l_Lean_mkReducibilityHintsRegularEx___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_reducibility_hints_get_height(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_getHeightEx___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ReducibilityHints_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ReducibilityHints_compare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_compare___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ReducibilityHints_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ReducibilityHints_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ReducibilityHints_instOrd___closed__0 = (const lean_object*)&l_Lean_ReducibilityHints_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ReducibilityHints_instOrd = (const lean_object*)&l_Lean_ReducibilityHints_instOrd___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_ReducibilityHints_isAbbrev(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_isAbbrev___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ReducibilityHints_isRegular(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_isRegular___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedConstantVal_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstantVal_default___closed__0;
static const lean_string_object l_Lean_instInhabitedConstantVal_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_instInhabitedConstantVal_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedConstantVal_default___closed__1_value;
static const lean_ctor_object l_Lean_instInhabitedConstantVal_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedConstantVal_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_instInhabitedConstantVal_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedConstantVal_default___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedConstantVal_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstantVal_default___closed__3;
static lean_once_cell_t l_Lean_instInhabitedConstantVal_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstantVal_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstantVal_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstantVal;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqConstantVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqConstantVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqConstantVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqConstantVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqConstantVal___closed__0 = (const lean_object*)&l_Lean_instBEqConstantVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqConstantVal = (const lean_object*)&l_Lean_instBEqConstantVal___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedAxiomVal_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedAxiomVal_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAxiomVal_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedAxiomVal;
LEAN_EXPORT uint8_t l_Lean_instBEqAxiomVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqAxiomVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqAxiomVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqAxiomVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqAxiomVal___closed__0 = (const lean_object*)&l_Lean_instBEqAxiomVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqAxiomVal = (const lean_object*)&l_Lean_instBEqAxiomVal___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_axiom_val(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkAxiomValEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_axiom_val_is_unsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_AxiomVal_isUnsafeEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_unsafe_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_unsafe_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_unsafe_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_unsafe_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_safe_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_safe_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_safe_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_safe_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_partial_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_partial_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_partial_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_partial_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedDefinitionSafety_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedDefinitionSafety;
LEAN_EXPORT uint8_t l_Lean_instBEqDefinitionSafety_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqDefinitionSafety_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqDefinitionSafety___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqDefinitionSafety_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqDefinitionSafety___closed__0 = (const lean_object*)&l_Lean_instBEqDefinitionSafety___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqDefinitionSafety = (const lean_object*)&l_Lean_instBEqDefinitionSafety___closed__0_value;
static const lean_string_object l_Lean_instReprDefinitionSafety_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.DefinitionSafety.unsafe"};
static const lean_object* l_Lean_instReprDefinitionSafety_repr___closed__0 = (const lean_object*)&l_Lean_instReprDefinitionSafety_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprDefinitionSafety_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprDefinitionSafety_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprDefinitionSafety_repr___closed__1 = (const lean_object*)&l_Lean_instReprDefinitionSafety_repr___closed__1_value;
static const lean_string_object l_Lean_instReprDefinitionSafety_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.DefinitionSafety.safe"};
static const lean_object* l_Lean_instReprDefinitionSafety_repr___closed__2 = (const lean_object*)&l_Lean_instReprDefinitionSafety_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprDefinitionSafety_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprDefinitionSafety_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprDefinitionSafety_repr___closed__3 = (const lean_object*)&l_Lean_instReprDefinitionSafety_repr___closed__3_value;
static const lean_string_object l_Lean_instReprDefinitionSafety_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.DefinitionSafety.partial"};
static const lean_object* l_Lean_instReprDefinitionSafety_repr___closed__4 = (const lean_object*)&l_Lean_instReprDefinitionSafety_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprDefinitionSafety_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprDefinitionSafety_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprDefinitionSafety_repr___closed__5 = (const lean_object*)&l_Lean_instReprDefinitionSafety_repr___closed__5_value;
static lean_once_cell_t l_Lean_instReprDefinitionSafety_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprDefinitionSafety_repr___closed__6;
static lean_once_cell_t l_Lean_instReprDefinitionSafety_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprDefinitionSafety_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_instReprDefinitionSafety_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprDefinitionSafety_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprDefinitionSafety___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprDefinitionSafety_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprDefinitionSafety___closed__0 = (const lean_object*)&l_Lean_instReprDefinitionSafety___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprDefinitionSafety = (const lean_object*)&l_Lean_instReprDefinitionSafety___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedDefinitionVal_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedDefinitionVal_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedDefinitionVal_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedDefinitionVal;
LEAN_EXPORT uint8_t l_Lean_instBEqDefinitionVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqDefinitionVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqDefinitionVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqDefinitionVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqDefinitionVal___closed__0 = (const lean_object*)&l_Lean_instBEqDefinitionVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqDefinitionVal = (const lean_object*)&l_Lean_instBEqDefinitionVal___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_definition_val(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_definition_val_get_safety(lean_object*);
LEAN_EXPORT lean_object* l_Lean_DefinitionVal_getSafetyEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedTheoremVal_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTheoremVal;
LEAN_EXPORT uint8_t l_Lean_instBEqTheoremVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqTheoremVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqTheoremVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqTheoremVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqTheoremVal___closed__0 = (const lean_object*)&l_Lean_instBEqTheoremVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqTheoremVal = (const lean_object*)&l_Lean_instBEqTheoremVal___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_theorem_val(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedOpaqueVal_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedOpaqueVal;
LEAN_EXPORT uint8_t l_Lean_instBEqOpaqueVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqOpaqueVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqOpaqueVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqOpaqueVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqOpaqueVal___closed__0 = (const lean_object*)&l_Lean_instBEqOpaqueVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqOpaqueVal = (const lean_object*)&l_Lean_instBEqOpaqueVal___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_opaque_val(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkOpaqueValEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_opaque_val_is_unsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_OpaqueVal_isUnsafeEx___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedConstructor_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstructor_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedConstructor_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstructor_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstructor_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstructor;
LEAN_EXPORT uint8_t l_Lean_instBEqConstructor_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqConstructor_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqConstructor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqConstructor_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqConstructor___closed__0 = (const lean_object*)&l_Lean_instBEqConstructor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqConstructor = (const lean_object*)&l_Lean_instBEqConstructor___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedInductiveType_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedInductiveType_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedInductiveType_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedInductiveType;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqInductiveType_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqInductiveType_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqInductiveType_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqInductiveType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqInductiveType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqInductiveType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqInductiveType___closed__0 = (const lean_object*)&l_Lean_instBEqInductiveType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqInductiveType = (const lean_object*)&l_Lean_instBEqInductiveType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_axiomDecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_axiomDecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_defnDecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_defnDecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_thmDecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_thmDecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_opaqueDecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_opaqueDecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_quotDecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_quotDecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_mutualDefnDecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_mutualDefnDecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_inductDecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_inductDecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedDeclaration_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedDeclaration_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedDeclaration_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedDeclaration;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqDeclaration_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqDeclaration_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqDeclaration___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqDeclaration_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqDeclaration___closed__0 = (const lean_object*)&l_Lean_instBEqDeclaration___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqDeclaration = (const lean_object*)&l_Lean_instBEqDeclaration___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_inductive_decl(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkInductiveDeclEs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_is_unsafe_inductive_decl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_isUnsafeInductiveDeclEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Declaration_definitionVal_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Declaration_definitionVal_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Declaration"};
static const lean_object* l_Lean_Declaration_definitionVal_x21___closed__0 = (const lean_object*)&l_Lean_Declaration_definitionVal_x21___closed__0_value;
static const lean_string_object l_Lean_Declaration_definitionVal_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Declaration.definitionVal!"};
static const lean_object* l_Lean_Declaration_definitionVal_x21___closed__1 = (const lean_object*)&l_Lean_Declaration_definitionVal_x21___closed__1_value;
static const lean_string_object l_Lean_Declaration_definitionVal_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Expected a `Declaration.defnDecl`."};
static const lean_object* l_Lean_Declaration_definitionVal_x21___closed__2 = (const lean_object*)&l_Lean_Declaration_definitionVal_x21___closed__2_value;
static lean_once_cell_t l_Lean_Declaration_definitionVal_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Declaration_definitionVal_x21___closed__3;
LEAN_EXPORT lean_object* l_Lean_Declaration_definitionVal_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_definitionVal_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Declaration_getTopLevelNames_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Declaration_getTopLevelNames_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Declaration_getTopLevelNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_Lean_Declaration_getTopLevelNames___closed__0 = (const lean_object*)&l_Lean_Declaration_getTopLevelNames___closed__0_value;
static const lean_ctor_object l_Lean_Declaration_getTopLevelNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Declaration_getTopLevelNames___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_object* l_Lean_Declaration_getTopLevelNames___closed__1 = (const lean_object*)&l_Lean_Declaration_getTopLevelNames___closed__1_value;
static const lean_ctor_object l_Lean_Declaration_getTopLevelNames___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Declaration_getTopLevelNames___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Declaration_getTopLevelNames___closed__2 = (const lean_object*)&l_Lean_Declaration_getTopLevelNames___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Declaration_getTopLevelNames(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Declaration_getNames_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rec"};
static const lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 106, 38, 217, 182, 144, 186, 220)}};
static const lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Declaration_getNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Declaration_getNames___closed__0 = (const lean_object*)&l_Lean_Declaration_getNames___closed__0_value;
static const lean_ctor_object l_Lean_Declaration_getNames___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Declaration_getTopLevelNames___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_Lean_Declaration_getNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Declaration_getNames___closed__1_value_aux_0),((lean_object*)&l_Lean_Declaration_getNames___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l_Lean_Declaration_getNames___closed__1 = (const lean_object*)&l_Lean_Declaration_getNames___closed__1_value;
static const lean_string_object l_Lean_Declaration_getNames___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l_Lean_Declaration_getNames___closed__2 = (const lean_object*)&l_Lean_Declaration_getNames___closed__2_value;
static const lean_ctor_object l_Lean_Declaration_getNames___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Declaration_getTopLevelNames___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_Lean_Declaration_getNames___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Declaration_getNames___closed__3_value_aux_0),((lean_object*)&l_Lean_Declaration_getNames___closed__2_value),LEAN_SCALAR_PTR_LITERAL(91, 125, 38, 34, 222, 200, 201, 80)}};
static const lean_object* l_Lean_Declaration_getNames___closed__3 = (const lean_object*)&l_Lean_Declaration_getNames___closed__3_value;
static const lean_string_object l_Lean_Declaration_getNames___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l_Lean_Declaration_getNames___closed__4 = (const lean_object*)&l_Lean_Declaration_getNames___closed__4_value;
static const lean_ctor_object l_Lean_Declaration_getNames___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Declaration_getTopLevelNames___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_Lean_Declaration_getNames___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Declaration_getNames___closed__5_value_aux_0),((lean_object*)&l_Lean_Declaration_getNames___closed__4_value),LEAN_SCALAR_PTR_LITERAL(150, 213, 121, 152, 109, 27, 137, 60)}};
static const lean_object* l_Lean_Declaration_getNames___closed__5 = (const lean_object*)&l_Lean_Declaration_getNames___closed__5_value;
static const lean_ctor_object l_Lean_Declaration_getNames___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Declaration_getNames___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Declaration_getNames___closed__6 = (const lean_object*)&l_Lean_Declaration_getNames___closed__6_value;
static const lean_ctor_object l_Lean_Declaration_getNames___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Declaration_getNames___closed__3_value),((lean_object*)&l_Lean_Declaration_getNames___closed__6_value)}};
static const lean_object* l_Lean_Declaration_getNames___closed__7 = (const lean_object*)&l_Lean_Declaration_getNames___closed__7_value;
static const lean_ctor_object l_Lean_Declaration_getNames___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Declaration_getNames___closed__1_value),((lean_object*)&l_Lean_Declaration_getNames___closed__7_value)}};
static const lean_object* l_Lean_Declaration_getNames___closed__8 = (const lean_object*)&l_Lean_Declaration_getNames___closed__8_value;
static const lean_ctor_object l_Lean_Declaration_getNames___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Declaration_getTopLevelNames___closed__1_value),((lean_object*)&l_Lean_Declaration_getNames___closed__8_value)}};
static const lean_object* l_Lean_Declaration_getNames___closed__9 = (const lean_object*)&l_Lean_Declaration_getNames___closed__9_value;
static const lean_array_object l_Lean_Declaration_getNames___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Declaration_getNames___closed__10 = (const lean_object*)&l_Lean_Declaration_getNames___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Declaration_getNames(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forExprM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forExprM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forExprM(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedInductiveVal_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedInductiveVal_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedInductiveVal_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedInductiveVal;
LEAN_EXPORT uint8_t l_Lean_instBEqInductiveVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqInductiveVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqInductiveVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqInductiveVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqInductiveVal___closed__0 = (const lean_object*)&l_Lean_instBEqInductiveVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqInductiveVal = (const lean_object*)&l_Lean_instBEqInductiveVal___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_inductive_val(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkInductiveValEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_inductive_val_is_rec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_InductiveVal_isRecEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_inductive_val_is_unsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_InductiveVal_isUnsafeEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_inductive_val_is_reflexive(lean_object*);
LEAN_EXPORT lean_object* l_Lean_InductiveVal_isReflexiveEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_InductiveVal_numCtors___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_InductiveVal_isNested(lean_object*);
LEAN_EXPORT lean_object* l_Lean_InductiveVal_isNested___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_InductiveVal_numTypeFormers(lean_object*);
LEAN_EXPORT lean_object* l_Lean_InductiveVal_numTypeFormers___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedConstructorVal_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstructorVal_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstructorVal_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstructorVal;
LEAN_EXPORT uint8_t l_Lean_instBEqConstructorVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqConstructorVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqConstructorVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqConstructorVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqConstructorVal___closed__0 = (const lean_object*)&l_Lean_instBEqConstructorVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqConstructorVal = (const lean_object*)&l_Lean_instBEqConstructorVal___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_constructor_val(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkConstructorValEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_constructor_val_is_unsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstructorVal_isUnsafeEx___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedRecursorRule_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedRecursorRule_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedRecursorRule_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedRecursorRule;
LEAN_EXPORT uint8_t l_Lean_instBEqRecursorRule_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqRecursorRule_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqRecursorRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqRecursorRule_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqRecursorRule___closed__0 = (const lean_object*)&l_Lean_instBEqRecursorRule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqRecursorRule = (const lean_object*)&l_Lean_instBEqRecursorRule___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedRecursorVal_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedRecursorVal_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedRecursorVal_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedRecursorVal;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqRecursorVal_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqRecursorVal_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqRecursorVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqRecursorVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqRecursorVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqRecursorVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqRecursorVal___closed__0 = (const lean_object*)&l_Lean_instBEqRecursorVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqRecursorVal = (const lean_object*)&l_Lean_instBEqRecursorVal___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_recursor_val(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkRecursorValEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_recursor_k(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RecursorVal_kEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_recursor_is_unsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RecursorVal_isUnsafeEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getMajorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getMajorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getFirstIndexIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getFirstIndexIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getFirstMinorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getFirstMinorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Declaration_0__Lean_RecursorVal_getMajorInduct_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getMajorInduct(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_type_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_type_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_type_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_type_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctor_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctor_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctor_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctor_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_lift_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_lift_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_lift_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_lift_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ind_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ind_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ind_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotKind_ind_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedQuotKind_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedQuotKind;
LEAN_EXPORT uint8_t l_Lean_instBEqQuotKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqQuotKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqQuotKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqQuotKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqQuotKind___closed__0 = (const lean_object*)&l_Lean_instBEqQuotKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqQuotKind = (const lean_object*)&l_Lean_instBEqQuotKind___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedQuotVal_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedQuotVal_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedQuotVal_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedQuotVal;
LEAN_EXPORT uint8_t l_Lean_instBEqQuotVal_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqQuotVal_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqQuotVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqQuotVal_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqQuotVal___closed__0 = (const lean_object*)&l_Lean_instBEqQuotVal___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqQuotVal = (const lean_object*)&l_Lean_instBEqQuotVal___closed__0_value;
LEAN_EXPORT lean_object* lean_mk_quot_val(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkQuotValEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_quot_val_kind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_QuotVal_kindEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_axiomInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_axiomInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_defnInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_defnInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_thmInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_thmInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_opaqueInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_opaqueInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_quotInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_quotInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_inductInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_inductInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_recInfo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_recInfo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedConstantInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstantInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstantInfo_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstantInfo;
LEAN_EXPORT uint8_t l_Lean_instBEqConstantInfo_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqConstantInfo_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqConstantInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqConstantInfo_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqConstantInfo___closed__0 = (const lean_object*)&l_Lean_instBEqConstantInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqConstantInfo = (const lean_object*)&l_Lean_instBEqConstantInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_toConstantVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_toConstantVal___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isUnsafe___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isPartial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isPartial___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_name(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_name___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_levelParams___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_numLevelParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_numLevelParams___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_type(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_type___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_value_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_value_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_hasValue(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_hasValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_ConstantInfo_value_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_ConstantInfo_value_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.ConstantInfo.value!"};
static const lean_object* l_Lean_ConstantInfo_value_x21___closed__0 = (const lean_object*)&l_Lean_ConstantInfo_value_x21___closed__0_value;
static const lean_string_object l_Lean_ConstantInfo_value_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "declaration with value expected"};
static const lean_object* l_Lean_ConstantInfo_value_x21___closed__1 = (const lean_object*)&l_Lean_ConstantInfo_value_x21___closed__1_value;
static lean_once_cell_t l_Lean_ConstantInfo_value_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstantInfo_value_x21___closed__2;
static lean_once_cell_t l_Lean_ConstantInfo_value_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstantInfo_value_x21___closed__3;
static const lean_string_object l_Lean_ConstantInfo_value_x21___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "declaration with value expected, but "};
static const lean_object* l_Lean_ConstantInfo_value_x21___closed__4 = (const lean_object*)&l_Lean_ConstantInfo_value_x21___closed__4_value;
static const lean_string_object l_Lean_ConstantInfo_value_x21___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " has none"};
static const lean_object* l_Lean_ConstantInfo_value_x21___closed__5 = (const lean_object*)&l_Lean_ConstantInfo_value_x21___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_value_x21(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_value_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_hints(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_hints___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isCtor(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isCtor___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isAxiom(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isAxiom___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isInductive(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isInductive___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isDefinition(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isDefinition___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isTheorem(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isTheorem___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_ConstantInfo_inductiveVal_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_ConstantInfo_inductiveVal_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.ConstantInfo.inductiveVal!"};
static const lean_object* l_Lean_ConstantInfo_inductiveVal_x21___closed__0 = (const lean_object*)&l_Lean_ConstantInfo_inductiveVal_x21___closed__0_value;
static const lean_string_object l_Lean_ConstantInfo_inductiveVal_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Expected a `ConstantInfo.inductInfo`."};
static const lean_object* l_Lean_ConstantInfo_inductiveVal_x21___closed__1 = (const lean_object*)&l_Lean_ConstantInfo_inductiveVal_x21___closed__1_value;
static lean_once_cell_t l_Lean_ConstantInfo_inductiveVal_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstantInfo_inductiveVal_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_inductiveVal_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_inductiveVal_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_all(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_all___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkRecName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_ReducibilityHints_ctorIdx(v_x_5_);
lean_dec(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
uint32_t v_a_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_a_9_ = lean_ctor_get_uint32(v_t_7_, 0);
v___x_10_ = lean_box_uint32(v_a_9_);
v___x_11_ = lean_apply_1(v_k_8_, v___x_10_);
return v___x_11_;
}
else
{
return v_k_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorElim___redArg___boxed(lean_object* v_t_12_, lean_object* v_k_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lean_ReducibilityHints_ctorElim___redArg(v_t_12_, v_k_13_);
lean_dec(v_t_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorElim(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_ReducibilityHints_ctorElim___redArg(v_t_17_, v_k_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_ctorElim___boxed(lean_object* v_motive_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_ReducibilityHints_ctorElim(v_motive_21_, v_ctorIdx_22_, v_t_23_, v_h_24_, v_k_25_);
lean_dec(v_t_23_);
lean_dec(v_ctorIdx_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_opaque_elim___redArg(lean_object* v_t_27_, lean_object* v_opaque_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_ReducibilityHints_ctorElim___redArg(v_t_27_, v_opaque_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_opaque_elim___redArg___boxed(lean_object* v_t_30_, lean_object* v_opaque_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_ReducibilityHints_opaque_elim___redArg(v_t_30_, v_opaque_31_);
lean_dec(v_t_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_opaque_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_opaque_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_ReducibilityHints_ctorElim___redArg(v_t_34_, v_opaque_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_opaque_elim___boxed(lean_object* v_motive_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_opaque_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lean_ReducibilityHints_opaque_elim(v_motive_38_, v_t_39_, v_h_40_, v_opaque_41_);
lean_dec(v_t_39_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_abbrev_elim___redArg(lean_object* v_t_43_, lean_object* v_abbrev_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_ReducibilityHints_ctorElim___redArg(v_t_43_, v_abbrev_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_abbrev_elim___redArg___boxed(lean_object* v_t_46_, lean_object* v_abbrev_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lean_ReducibilityHints_abbrev_elim___redArg(v_t_46_, v_abbrev_47_);
lean_dec(v_t_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_abbrev_elim(lean_object* v_motive_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_abbrev_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_ReducibilityHints_ctorElim___redArg(v_t_50_, v_abbrev_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_abbrev_elim___boxed(lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_abbrev_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_ReducibilityHints_abbrev_elim(v_motive_54_, v_t_55_, v_h_56_, v_abbrev_57_);
lean_dec(v_t_55_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_regular_elim___redArg(lean_object* v_t_59_, lean_object* v_regular_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_ReducibilityHints_ctorElim___redArg(v_t_59_, v_regular_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_regular_elim___redArg___boxed(lean_object* v_t_62_, lean_object* v_regular_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_ReducibilityHints_regular_elim___redArg(v_t_62_, v_regular_63_);
lean_dec(v_t_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_regular_elim(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_regular_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_ReducibilityHints_ctorElim___redArg(v_t_66_, v_regular_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_regular_elim___boxed(lean_object* v_motive_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_regular_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_ReducibilityHints_regular_elim(v_motive_70_, v_t_71_, v_h_72_, v_regular_73_);
lean_dec(v_t_71_);
return v_res_74_;
}
}
static lean_object* _init_l_Lean_instInhabitedReducibilityHints_default(void){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_box(0);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_instInhabitedReducibilityHints(void){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = lean_box(0);
return v___x_76_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqReducibilityHints_beq(lean_object* v_x_77_, lean_object* v_x_78_){
_start:
{
switch(lean_obj_tag(v_x_77_))
{
case 0:
{
if (lean_obj_tag(v_x_78_) == 0)
{
uint8_t v___x_79_; 
v___x_79_ = 1;
return v___x_79_;
}
else
{
uint8_t v___x_80_; 
v___x_80_ = 0;
return v___x_80_;
}
}
case 1:
{
if (lean_obj_tag(v_x_78_) == 1)
{
uint8_t v___x_81_; 
v___x_81_ = 1;
return v___x_81_;
}
else
{
uint8_t v___x_82_; 
v___x_82_ = 0;
return v___x_82_;
}
}
default: 
{
if (lean_obj_tag(v_x_78_) == 2)
{
uint32_t v_a_83_; uint32_t v_a_84_; uint8_t v___x_85_; 
v_a_83_ = lean_ctor_get_uint32(v_x_77_, 0);
v_a_84_ = lean_ctor_get_uint32(v_x_78_, 0);
v___x_85_ = lean_uint32_dec_eq(v_a_83_, v_a_84_);
return v___x_85_;
}
else
{
uint8_t v___x_86_; 
v___x_86_ = 0;
return v___x_86_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqReducibilityHints_beq___boxed(lean_object* v_x_87_, lean_object* v_x_88_){
_start:
{
uint8_t v_res_89_; lean_object* v_r_90_; 
v_res_89_ = l_Lean_instBEqReducibilityHints_beq(v_x_87_, v_x_88_);
lean_dec(v_x_88_);
lean_dec(v_x_87_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT lean_object* lean_mk_reducibility_hints_regular(uint32_t v_h_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_94_, 0, v_h_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkReducibilityHintsRegularEx___boxed(lean_object* v_h_95_){
_start:
{
uint32_t v_h_boxed_96_; lean_object* v_res_97_; 
v_h_boxed_96_ = lean_unbox_uint32(v_h_95_);
lean_dec(v_h_95_);
v_res_97_ = lean_mk_reducibility_hints_regular(v_h_boxed_96_);
return v_res_97_;
}
}
LEAN_EXPORT uint32_t lean_reducibility_hints_get_height(lean_object* v_h_98_){
_start:
{
if (lean_obj_tag(v_h_98_) == 2)
{
uint32_t v_a_99_; 
v_a_99_ = lean_ctor_get_uint32(v_h_98_, 0);
lean_dec_ref_known(v_h_98_, 0);
return v_a_99_;
}
else
{
uint32_t v___x_100_; 
lean_dec(v_h_98_);
v___x_100_ = 0;
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_getHeightEx___boxed(lean_object* v_h_101_){
_start:
{
uint32_t v_res_102_; lean_object* v_r_103_; 
v_res_102_ = lean_reducibility_hints_get_height(v_h_101_);
v_r_103_ = lean_box_uint32(v_res_102_);
return v_r_103_;
}
}
LEAN_EXPORT uint8_t l_Lean_ReducibilityHints_lt(lean_object* v_x_104_, lean_object* v_x_105_){
_start:
{
switch(lean_obj_tag(v_x_104_))
{
case 1:
{
if (lean_obj_tag(v_x_105_) == 1)
{
uint8_t v___x_106_; 
v___x_106_ = 0;
return v___x_106_;
}
else
{
uint8_t v___x_107_; 
v___x_107_ = 1;
return v___x_107_;
}
}
case 2:
{
switch(lean_obj_tag(v_x_105_))
{
case 2:
{
uint32_t v_a_108_; uint32_t v_a_109_; uint8_t v___x_110_; 
v_a_108_ = lean_ctor_get_uint32(v_x_104_, 0);
v_a_109_ = lean_ctor_get_uint32(v_x_105_, 0);
v___x_110_ = lean_uint32_dec_lt(v_a_109_, v_a_108_);
return v___x_110_;
}
case 0:
{
uint8_t v___x_111_; 
v___x_111_ = 1;
return v___x_111_;
}
default: 
{
uint8_t v___x_112_; 
v___x_112_ = 0;
return v___x_112_;
}
}
}
default: 
{
uint8_t v___x_113_; 
v___x_113_ = 0;
return v___x_113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_lt___boxed(lean_object* v_x_114_, lean_object* v_x_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Lean_ReducibilityHints_lt(v_x_114_, v_x_115_);
lean_dec(v_x_115_);
lean_dec(v_x_114_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT uint8_t l_Lean_ReducibilityHints_compare(lean_object* v_x_118_, lean_object* v_x_119_){
_start:
{
switch(lean_obj_tag(v_x_118_))
{
case 0:
{
if (lean_obj_tag(v_x_119_) == 0)
{
uint8_t v___x_120_; 
v___x_120_ = 1;
return v___x_120_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = 2;
return v___x_121_;
}
}
case 1:
{
if (lean_obj_tag(v_x_119_) == 1)
{
uint8_t v___x_122_; 
v___x_122_ = 1;
return v___x_122_;
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
default: 
{
switch(lean_obj_tag(v_x_119_))
{
case 0:
{
uint8_t v___x_124_; 
v___x_124_ = 0;
return v___x_124_;
}
case 1:
{
uint8_t v___x_125_; 
v___x_125_ = 2;
return v___x_125_;
}
default: 
{
uint32_t v_a_126_; uint32_t v_a_127_; uint8_t v___x_128_; 
v_a_126_ = lean_ctor_get_uint32(v_x_118_, 0);
v_a_127_ = lean_ctor_get_uint32(v_x_119_, 0);
v___x_128_ = lean_uint32_dec_lt(v_a_127_, v_a_126_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
v___x_129_ = lean_uint32_dec_eq(v_a_127_, v_a_126_);
if (v___x_129_ == 0)
{
uint8_t v___x_130_; 
v___x_130_ = 2;
return v___x_130_;
}
else
{
uint8_t v___x_131_; 
v___x_131_ = 1;
return v___x_131_;
}
}
else
{
uint8_t v___x_132_; 
v___x_132_ = 0;
return v___x_132_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_compare___boxed(lean_object* v_x_133_, lean_object* v_x_134_){
_start:
{
uint8_t v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l_Lean_ReducibilityHints_compare(v_x_133_, v_x_134_);
lean_dec(v_x_134_);
lean_dec(v_x_133_);
v_r_136_ = lean_box(v_res_135_);
return v_r_136_;
}
}
LEAN_EXPORT uint8_t l_Lean_ReducibilityHints_isAbbrev(lean_object* v_x_139_){
_start:
{
if (lean_obj_tag(v_x_139_) == 1)
{
uint8_t v___x_140_; 
v___x_140_ = 1;
return v___x_140_;
}
else
{
uint8_t v___x_141_; 
v___x_141_ = 0;
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_isAbbrev___boxed(lean_object* v_x_142_){
_start:
{
uint8_t v_res_143_; lean_object* v_r_144_; 
v_res_143_ = l_Lean_ReducibilityHints_isAbbrev(v_x_142_);
lean_dec(v_x_142_);
v_r_144_ = lean_box(v_res_143_);
return v_r_144_;
}
}
LEAN_EXPORT uint8_t l_Lean_ReducibilityHints_isRegular(lean_object* v_x_145_){
_start:
{
if (lean_obj_tag(v_x_145_) == 2)
{
uint8_t v___x_146_; 
v___x_146_ = 1;
return v___x_146_;
}
else
{
uint8_t v___x_147_; 
v___x_147_ = 0;
return v___x_147_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ReducibilityHints_isRegular___boxed(lean_object* v_x_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_Lean_ReducibilityHints_isRegular(v_x_148_);
lean_dec(v_x_148_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstantVal_default___closed__0(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_box(0);
v___x_152_ = l_unsafeCast___redArg(v___x_151_);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstantVal_default___closed__3(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_156_ = lean_box(0);
v___x_157_ = ((lean_object*)(l_Lean_instInhabitedConstantVal_default___closed__2));
v___x_158_ = l_Lean_Expr_const___override(v___x_157_, v___x_156_);
return v___x_158_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstantVal_default___closed__4(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_159_ = lean_obj_once(&l_Lean_instInhabitedConstantVal_default___closed__3, &l_Lean_instInhabitedConstantVal_default___closed__3_once, _init_l_Lean_instInhabitedConstantVal_default___closed__3);
v___x_160_ = lean_box(0);
v___x_161_ = lean_obj_once(&l_Lean_instInhabitedConstantVal_default___closed__0, &l_Lean_instInhabitedConstantVal_default___closed__0_once, _init_l_Lean_instInhabitedConstantVal_default___closed__0);
v___x_162_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
lean_ctor_set(v___x_162_, 2, v___x_159_);
return v___x_162_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstantVal_default(void){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lean_obj_once(&l_Lean_instInhabitedConstantVal_default___closed__4, &l_Lean_instInhabitedConstantVal_default___closed__4_once, _init_l_Lean_instInhabitedConstantVal_default___closed__4);
return v___x_163_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstantVal(void){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_instInhabitedConstantVal_default;
return v___x_164_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(lean_object* v_x_165_, lean_object* v_x_166_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
if (lean_obj_tag(v_x_166_) == 0)
{
uint8_t v___x_167_; 
v___x_167_ = 1;
return v___x_167_;
}
else
{
uint8_t v___x_168_; 
v___x_168_ = 0;
return v___x_168_;
}
}
else
{
if (lean_obj_tag(v_x_166_) == 0)
{
uint8_t v___x_169_; 
v___x_169_ = 0;
return v___x_169_;
}
else
{
lean_object* v_head_170_; lean_object* v_tail_171_; lean_object* v_head_172_; lean_object* v_tail_173_; uint8_t v___x_174_; 
v_head_170_ = lean_ctor_get(v_x_165_, 0);
v_tail_171_ = lean_ctor_get(v_x_165_, 1);
v_head_172_ = lean_ctor_get(v_x_166_, 0);
v_tail_173_ = lean_ctor_get(v_x_166_, 1);
v___x_174_ = lean_name_eq(v_head_170_, v_head_172_);
if (v___x_174_ == 0)
{
return v___x_174_;
}
else
{
v_x_165_ = v_tail_171_;
v_x_166_ = v_tail_173_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0___boxed(lean_object* v_x_176_, lean_object* v_x_177_){
_start:
{
uint8_t v_res_178_; lean_object* v_r_179_; 
v_res_178_ = l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(v_x_176_, v_x_177_);
lean_dec(v_x_177_);
lean_dec(v_x_176_);
v_r_179_ = lean_box(v_res_178_);
return v_r_179_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqConstantVal_beq(lean_object* v_x_180_, lean_object* v_x_181_){
_start:
{
lean_object* v_name_182_; lean_object* v_levelParams_183_; lean_object* v_type_184_; lean_object* v_name_185_; lean_object* v_levelParams_186_; lean_object* v_type_187_; uint8_t v___x_188_; 
v_name_182_ = lean_ctor_get(v_x_180_, 0);
v_levelParams_183_ = lean_ctor_get(v_x_180_, 1);
v_type_184_ = lean_ctor_get(v_x_180_, 2);
v_name_185_ = lean_ctor_get(v_x_181_, 0);
v_levelParams_186_ = lean_ctor_get(v_x_181_, 1);
v_type_187_ = lean_ctor_get(v_x_181_, 2);
v___x_188_ = lean_name_eq(v_name_182_, v_name_185_);
if (v___x_188_ == 0)
{
return v___x_188_;
}
else
{
uint8_t v___x_189_; 
v___x_189_ = l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(v_levelParams_183_, v_levelParams_186_);
if (v___x_189_ == 0)
{
return v___x_189_;
}
else
{
uint8_t v___x_190_; 
v___x_190_ = lean_expr_eqv(v_type_184_, v_type_187_);
return v___x_190_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqConstantVal_beq___boxed(lean_object* v_x_191_, lean_object* v_x_192_){
_start:
{
uint8_t v_res_193_; lean_object* v_r_194_; 
v_res_193_ = l_Lean_instBEqConstantVal_beq(v_x_191_, v_x_192_);
lean_dec_ref(v_x_192_);
lean_dec_ref(v_x_191_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
static lean_object* _init_l_Lean_instInhabitedAxiomVal_default___closed__0(void){
_start:
{
uint8_t v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_197_ = 0;
v___x_198_ = l_Lean_instInhabitedConstantVal_default;
v___x_199_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set_uint8(v___x_199_, sizeof(void*)*1, v___x_197_);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_instInhabitedAxiomVal_default(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_obj_once(&l_Lean_instInhabitedAxiomVal_default___closed__0, &l_Lean_instInhabitedAxiomVal_default___closed__0_once, _init_l_Lean_instInhabitedAxiomVal_default___closed__0);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_instInhabitedAxiomVal(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_instInhabitedAxiomVal_default;
return v___x_201_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqAxiomVal_beq(lean_object* v_x_202_, lean_object* v_x_203_){
_start:
{
lean_object* v_toConstantVal_204_; uint8_t v_isUnsafe_205_; lean_object* v_toConstantVal_206_; uint8_t v_isUnsafe_207_; uint8_t v___x_208_; 
v_toConstantVal_204_ = lean_ctor_get(v_x_202_, 0);
v_isUnsafe_205_ = lean_ctor_get_uint8(v_x_202_, sizeof(void*)*1);
v_toConstantVal_206_ = lean_ctor_get(v_x_203_, 0);
v_isUnsafe_207_ = lean_ctor_get_uint8(v_x_203_, sizeof(void*)*1);
v___x_208_ = l_Lean_instBEqConstantVal_beq(v_toConstantVal_204_, v_toConstantVal_206_);
if (v___x_208_ == 0)
{
return v___x_208_;
}
else
{
if (v_isUnsafe_207_ == 0)
{
if (v_isUnsafe_205_ == 0)
{
return v___x_208_;
}
else
{
return v_isUnsafe_207_;
}
}
else
{
return v_isUnsafe_205_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqAxiomVal_beq___boxed(lean_object* v_x_209_, lean_object* v_x_210_){
_start:
{
uint8_t v_res_211_; lean_object* v_r_212_; 
v_res_211_ = l_Lean_instBEqAxiomVal_beq(v_x_209_, v_x_210_);
lean_dec_ref(v_x_210_);
lean_dec_ref(v_x_209_);
v_r_212_ = lean_box(v_res_211_);
return v_r_212_;
}
}
LEAN_EXPORT lean_object* lean_mk_axiom_val(lean_object* v_name_215_, lean_object* v_levelParams_216_, lean_object* v_type_217_, uint8_t v_isUnsafe_218_){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_219_, 0, v_name_215_);
lean_ctor_set(v___x_219_, 1, v_levelParams_216_);
lean_ctor_set(v___x_219_, 2, v_type_217_);
v___x_220_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*1, v_isUnsafe_218_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAxiomValEx___boxed(lean_object* v_name_221_, lean_object* v_levelParams_222_, lean_object* v_type_223_, lean_object* v_isUnsafe_224_){
_start:
{
uint8_t v_isUnsafe_boxed_225_; lean_object* v_res_226_; 
v_isUnsafe_boxed_225_ = lean_unbox(v_isUnsafe_224_);
v_res_226_ = lean_mk_axiom_val(v_name_221_, v_levelParams_222_, v_type_223_, v_isUnsafe_boxed_225_);
return v_res_226_;
}
}
LEAN_EXPORT uint8_t lean_axiom_val_is_unsafe(lean_object* v_v_227_){
_start:
{
uint8_t v_isUnsafe_228_; 
v_isUnsafe_228_ = lean_ctor_get_uint8(v_v_227_, sizeof(void*)*1);
lean_dec_ref(v_v_227_);
return v_isUnsafe_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_AxiomVal_isUnsafeEx___boxed(lean_object* v_v_229_){
_start:
{
uint8_t v_res_230_; lean_object* v_r_231_; 
v_res_230_ = lean_axiom_val_is_unsafe(v_v_229_);
v_r_231_ = lean_box(v_res_230_);
return v_r_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorIdx(uint8_t v_x_232_){
_start:
{
switch(v_x_232_)
{
case 0:
{
lean_object* v___x_233_; 
v___x_233_ = lean_unsigned_to_nat(0u);
return v___x_233_;
}
case 1:
{
lean_object* v___x_234_; 
v___x_234_ = lean_unsigned_to_nat(1u);
return v___x_234_;
}
default: 
{
lean_object* v___x_235_; 
v___x_235_ = lean_unsigned_to_nat(2u);
return v___x_235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorIdx___boxed(lean_object* v_x_236_){
_start:
{
uint8_t v_x_boxed_237_; lean_object* v_res_238_; 
v_x_boxed_237_ = lean_unbox(v_x_236_);
v_res_238_ = l_Lean_DefinitionSafety_ctorIdx(v_x_boxed_237_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorElim___redArg(lean_object* v_k_239_){
_start:
{
lean_inc(v_k_239_);
return v_k_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorElim___redArg___boxed(lean_object* v_k_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_DefinitionSafety_ctorElim___redArg(v_k_240_);
lean_dec(v_k_240_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorElim(lean_object* v_motive_242_, lean_object* v_ctorIdx_243_, uint8_t v_t_244_, lean_object* v_h_245_, lean_object* v_k_246_){
_start:
{
lean_inc(v_k_246_);
return v_k_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_ctorElim___boxed(lean_object* v_motive_247_, lean_object* v_ctorIdx_248_, lean_object* v_t_249_, lean_object* v_h_250_, lean_object* v_k_251_){
_start:
{
uint8_t v_t_boxed_252_; lean_object* v_res_253_; 
v_t_boxed_252_ = lean_unbox(v_t_249_);
v_res_253_ = l_Lean_DefinitionSafety_ctorElim(v_motive_247_, v_ctorIdx_248_, v_t_boxed_252_, v_h_250_, v_k_251_);
lean_dec(v_k_251_);
lean_dec(v_ctorIdx_248_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_unsafe_elim___redArg(lean_object* v_unsafe_254_){
_start:
{
lean_inc(v_unsafe_254_);
return v_unsafe_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_unsafe_elim___redArg___boxed(lean_object* v_unsafe_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_DefinitionSafety_unsafe_elim___redArg(v_unsafe_255_);
lean_dec(v_unsafe_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_unsafe_elim(lean_object* v_motive_257_, uint8_t v_t_258_, lean_object* v_h_259_, lean_object* v_unsafe_260_){
_start:
{
lean_inc(v_unsafe_260_);
return v_unsafe_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_unsafe_elim___boxed(lean_object* v_motive_261_, lean_object* v_t_262_, lean_object* v_h_263_, lean_object* v_unsafe_264_){
_start:
{
uint8_t v_t_boxed_265_; lean_object* v_res_266_; 
v_t_boxed_265_ = lean_unbox(v_t_262_);
v_res_266_ = l_Lean_DefinitionSafety_unsafe_elim(v_motive_261_, v_t_boxed_265_, v_h_263_, v_unsafe_264_);
lean_dec(v_unsafe_264_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_safe_elim___redArg(lean_object* v_safe_267_){
_start:
{
lean_inc(v_safe_267_);
return v_safe_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_safe_elim___redArg___boxed(lean_object* v_safe_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_DefinitionSafety_safe_elim___redArg(v_safe_268_);
lean_dec(v_safe_268_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_safe_elim(lean_object* v_motive_270_, uint8_t v_t_271_, lean_object* v_h_272_, lean_object* v_safe_273_){
_start:
{
lean_inc(v_safe_273_);
return v_safe_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_safe_elim___boxed(lean_object* v_motive_274_, lean_object* v_t_275_, lean_object* v_h_276_, lean_object* v_safe_277_){
_start:
{
uint8_t v_t_boxed_278_; lean_object* v_res_279_; 
v_t_boxed_278_ = lean_unbox(v_t_275_);
v_res_279_ = l_Lean_DefinitionSafety_safe_elim(v_motive_274_, v_t_boxed_278_, v_h_276_, v_safe_277_);
lean_dec(v_safe_277_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_partial_elim___redArg(lean_object* v_partial_280_){
_start:
{
lean_inc(v_partial_280_);
return v_partial_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_partial_elim___redArg___boxed(lean_object* v_partial_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_DefinitionSafety_partial_elim___redArg(v_partial_281_);
lean_dec(v_partial_281_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_partial_elim(lean_object* v_motive_283_, uint8_t v_t_284_, lean_object* v_h_285_, lean_object* v_partial_286_){
_start:
{
lean_inc(v_partial_286_);
return v_partial_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionSafety_partial_elim___boxed(lean_object* v_motive_287_, lean_object* v_t_288_, lean_object* v_h_289_, lean_object* v_partial_290_){
_start:
{
uint8_t v_t_boxed_291_; lean_object* v_res_292_; 
v_t_boxed_291_ = lean_unbox(v_t_288_);
v_res_292_ = l_Lean_DefinitionSafety_partial_elim(v_motive_287_, v_t_boxed_291_, v_h_289_, v_partial_290_);
lean_dec(v_partial_290_);
return v_res_292_;
}
}
static uint8_t _init_l_Lean_instInhabitedDefinitionSafety_default(void){
_start:
{
uint8_t v___x_293_; 
v___x_293_ = 0;
return v___x_293_;
}
}
static uint8_t _init_l_Lean_instInhabitedDefinitionSafety(void){
_start:
{
uint8_t v___x_294_; 
v___x_294_ = 0;
return v___x_294_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqDefinitionSafety_beq(uint8_t v_x_295_, uint8_t v_y_296_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; 
v___x_297_ = l_Lean_DefinitionSafety_ctorIdx(v_x_295_);
v___x_298_ = l_Lean_DefinitionSafety_ctorIdx(v_y_296_);
v___x_299_ = lean_nat_dec_eq(v___x_297_, v___x_298_);
lean_dec(v___x_298_);
lean_dec(v___x_297_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqDefinitionSafety_beq___boxed(lean_object* v_x_300_, lean_object* v_y_301_){
_start:
{
uint8_t v_x_21__boxed_302_; uint8_t v_y_22__boxed_303_; uint8_t v_res_304_; lean_object* v_r_305_; 
v_x_21__boxed_302_ = lean_unbox(v_x_300_);
v_y_22__boxed_303_ = lean_unbox(v_y_301_);
v_res_304_ = l_Lean_instBEqDefinitionSafety_beq(v_x_21__boxed_302_, v_y_22__boxed_303_);
v_r_305_ = lean_box(v_res_304_);
return v_r_305_;
}
}
static lean_object* _init_l_Lean_instReprDefinitionSafety_repr___closed__6(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_unsigned_to_nat(2u);
v___x_318_ = lean_nat_to_int(v___x_317_);
return v___x_318_;
}
}
static lean_object* _init_l_Lean_instReprDefinitionSafety_repr___closed__7(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = lean_unsigned_to_nat(1u);
v___x_320_ = lean_nat_to_int(v___x_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprDefinitionSafety_repr(uint8_t v_x_321_, lean_object* v_prec_322_){
_start:
{
lean_object* v___y_324_; lean_object* v___y_331_; lean_object* v___y_338_; 
switch(v_x_321_)
{
case 0:
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_unsigned_to_nat(1024u);
v___x_345_ = lean_nat_dec_le(v___x_344_, v_prec_322_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; 
v___x_346_ = lean_obj_once(&l_Lean_instReprDefinitionSafety_repr___closed__6, &l_Lean_instReprDefinitionSafety_repr___closed__6_once, _init_l_Lean_instReprDefinitionSafety_repr___closed__6);
v___y_324_ = v___x_346_;
goto v___jp_323_;
}
else
{
lean_object* v___x_347_; 
v___x_347_ = lean_obj_once(&l_Lean_instReprDefinitionSafety_repr___closed__7, &l_Lean_instReprDefinitionSafety_repr___closed__7_once, _init_l_Lean_instReprDefinitionSafety_repr___closed__7);
v___y_324_ = v___x_347_;
goto v___jp_323_;
}
}
case 1:
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(1024u);
v___x_349_ = lean_nat_dec_le(v___x_348_, v_prec_322_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; 
v___x_350_ = lean_obj_once(&l_Lean_instReprDefinitionSafety_repr___closed__6, &l_Lean_instReprDefinitionSafety_repr___closed__6_once, _init_l_Lean_instReprDefinitionSafety_repr___closed__6);
v___y_331_ = v___x_350_;
goto v___jp_330_;
}
else
{
lean_object* v___x_351_; 
v___x_351_ = lean_obj_once(&l_Lean_instReprDefinitionSafety_repr___closed__7, &l_Lean_instReprDefinitionSafety_repr___closed__7_once, _init_l_Lean_instReprDefinitionSafety_repr___closed__7);
v___y_331_ = v___x_351_;
goto v___jp_330_;
}
}
default: 
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(1024u);
v___x_353_ = lean_nat_dec_le(v___x_352_, v_prec_322_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; 
v___x_354_ = lean_obj_once(&l_Lean_instReprDefinitionSafety_repr___closed__6, &l_Lean_instReprDefinitionSafety_repr___closed__6_once, _init_l_Lean_instReprDefinitionSafety_repr___closed__6);
v___y_338_ = v___x_354_;
goto v___jp_337_;
}
else
{
lean_object* v___x_355_; 
v___x_355_ = lean_obj_once(&l_Lean_instReprDefinitionSafety_repr___closed__7, &l_Lean_instReprDefinitionSafety_repr___closed__7_once, _init_l_Lean_instReprDefinitionSafety_repr___closed__7);
v___y_338_ = v___x_355_;
goto v___jp_337_;
}
}
}
v___jp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_325_ = ((lean_object*)(l_Lean_instReprDefinitionSafety_repr___closed__1));
lean_inc(v___y_324_);
v___x_326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_326_, 0, v___y_324_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
v___x_327_ = 0;
v___x_328_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_328_, 0, v___x_326_);
lean_ctor_set_uint8(v___x_328_, sizeof(void*)*1, v___x_327_);
v___x_329_ = l_Repr_addAppParen(v___x_328_, v_prec_322_);
return v___x_329_;
}
v___jp_330_:
{
lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_332_ = ((lean_object*)(l_Lean_instReprDefinitionSafety_repr___closed__3));
lean_inc(v___y_331_);
v___x_333_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_333_, 0, v___y_331_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = 0;
v___x_335_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_335_, 0, v___x_333_);
lean_ctor_set_uint8(v___x_335_, sizeof(void*)*1, v___x_334_);
v___x_336_ = l_Repr_addAppParen(v___x_335_, v_prec_322_);
return v___x_336_;
}
v___jp_337_:
{
lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_339_ = ((lean_object*)(l_Lean_instReprDefinitionSafety_repr___closed__5));
lean_inc(v___y_338_);
v___x_340_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_340_, 0, v___y_338_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
v___x_341_ = 0;
v___x_342_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_342_, 0, v___x_340_);
lean_ctor_set_uint8(v___x_342_, sizeof(void*)*1, v___x_341_);
v___x_343_ = l_Repr_addAppParen(v___x_342_, v_prec_322_);
return v___x_343_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprDefinitionSafety_repr___boxed(lean_object* v_x_356_, lean_object* v_prec_357_){
_start:
{
uint8_t v_x_171__boxed_358_; lean_object* v_res_359_; 
v_x_171__boxed_358_ = lean_unbox(v_x_356_);
v_res_359_ = l_Lean_instReprDefinitionSafety_repr(v_x_171__boxed_358_, v_prec_357_);
lean_dec(v_prec_357_);
return v_res_359_;
}
}
static lean_object* _init_l_Lean_instInhabitedDefinitionVal_default___closed__0(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = lean_box(0);
v___x_363_ = ((lean_object*)(l_Lean_instInhabitedConstantVal_default___closed__2));
v___x_364_ = l_Lean_Expr_const___override(v___x_363_, v___x_362_);
return v___x_364_;
}
}
static lean_object* _init_l_Lean_instInhabitedDefinitionVal_default(void){
_start:
{
lean_object* v___x_365_; lean_object* v_name_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_365_ = l_Lean_instInhabitedConstantVal_default;
v_name_366_ = lean_ctor_get(v___x_365_, 0);
v___x_367_ = lean_box(0);
v___x_368_ = lean_obj_once(&l_Lean_instInhabitedDefinitionVal_default___closed__0, &l_Lean_instInhabitedDefinitionVal_default___closed__0_once, _init_l_Lean_instInhabitedDefinitionVal_default___closed__0);
v___x_369_ = lean_box(0);
v___x_370_ = 0;
lean_inc(v_name_366_);
v___x_371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_371_, 0, v_name_366_);
lean_ctor_set(v___x_371_, 1, v___x_367_);
v___x_372_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_372_, 0, v___x_365_);
lean_ctor_set(v___x_372_, 1, v___x_368_);
lean_ctor_set(v___x_372_, 2, v___x_369_);
lean_ctor_set(v___x_372_, 3, v___x_371_);
lean_ctor_set_uint8(v___x_372_, sizeof(void*)*4, v___x_370_);
return v___x_372_;
}
}
static lean_object* _init_l_Lean_instInhabitedDefinitionVal(void){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_instInhabitedDefinitionVal_default;
return v___x_373_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqDefinitionVal_beq(lean_object* v_x_374_, lean_object* v_x_375_){
_start:
{
lean_object* v_toConstantVal_376_; lean_object* v_value_377_; lean_object* v_hints_378_; uint8_t v_safety_379_; lean_object* v_all_380_; lean_object* v_toConstantVal_381_; lean_object* v_value_382_; lean_object* v_hints_383_; uint8_t v_safety_384_; lean_object* v_all_385_; uint8_t v___x_386_; 
v_toConstantVal_376_ = lean_ctor_get(v_x_374_, 0);
v_value_377_ = lean_ctor_get(v_x_374_, 1);
v_hints_378_ = lean_ctor_get(v_x_374_, 2);
v_safety_379_ = lean_ctor_get_uint8(v_x_374_, sizeof(void*)*4);
v_all_380_ = lean_ctor_get(v_x_374_, 3);
v_toConstantVal_381_ = lean_ctor_get(v_x_375_, 0);
v_value_382_ = lean_ctor_get(v_x_375_, 1);
v_hints_383_ = lean_ctor_get(v_x_375_, 2);
v_safety_384_ = lean_ctor_get_uint8(v_x_375_, sizeof(void*)*4);
v_all_385_ = lean_ctor_get(v_x_375_, 3);
v___x_386_ = l_Lean_instBEqConstantVal_beq(v_toConstantVal_376_, v_toConstantVal_381_);
if (v___x_386_ == 0)
{
return v___x_386_;
}
else
{
uint8_t v___x_387_; 
v___x_387_ = lean_expr_eqv(v_value_377_, v_value_382_);
if (v___x_387_ == 0)
{
return v___x_387_;
}
else
{
uint8_t v___x_388_; 
v___x_388_ = l_Lean_instBEqReducibilityHints_beq(v_hints_378_, v_hints_383_);
if (v___x_388_ == 0)
{
return v___x_388_;
}
else
{
uint8_t v___x_389_; 
v___x_389_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_379_, v_safety_384_);
if (v___x_389_ == 0)
{
return v___x_389_;
}
else
{
uint8_t v___x_390_; 
v___x_390_ = l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(v_all_380_, v_all_385_);
return v___x_390_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqDefinitionVal_beq___boxed(lean_object* v_x_391_, lean_object* v_x_392_){
_start:
{
uint8_t v_res_393_; lean_object* v_r_394_; 
v_res_393_ = l_Lean_instBEqDefinitionVal_beq(v_x_391_, v_x_392_);
lean_dec_ref(v_x_392_);
lean_dec_ref(v_x_391_);
v_r_394_ = lean_box(v_res_393_);
return v_r_394_;
}
}
LEAN_EXPORT lean_object* lean_mk_definition_val(lean_object* v_name_397_, lean_object* v_levelParams_398_, lean_object* v_type_399_, lean_object* v_value_400_, lean_object* v_hints_401_, uint8_t v_safety_402_, lean_object* v_all_403_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_404_, 0, v_name_397_);
lean_ctor_set(v___x_404_, 1, v_levelParams_398_);
lean_ctor_set(v___x_404_, 2, v_type_399_);
v___x_405_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v_value_400_);
lean_ctor_set(v___x_405_, 2, v_hints_401_);
lean_ctor_set(v___x_405_, 3, v_all_403_);
lean_ctor_set_uint8(v___x_405_, sizeof(void*)*4, v_safety_402_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValEx___boxed(lean_object* v_name_406_, lean_object* v_levelParams_407_, lean_object* v_type_408_, lean_object* v_value_409_, lean_object* v_hints_410_, lean_object* v_safety_411_, lean_object* v_all_412_){
_start:
{
uint8_t v_safety_boxed_413_; lean_object* v_res_414_; 
v_safety_boxed_413_ = lean_unbox(v_safety_411_);
v_res_414_ = lean_mk_definition_val(v_name_406_, v_levelParams_407_, v_type_408_, v_value_409_, v_hints_410_, v_safety_boxed_413_, v_all_412_);
return v_res_414_;
}
}
LEAN_EXPORT uint8_t lean_definition_val_get_safety(lean_object* v_v_415_){
_start:
{
uint8_t v_safety_416_; 
v_safety_416_ = lean_ctor_get_uint8(v_v_415_, sizeof(void*)*4);
lean_dec_ref(v_v_415_);
return v_safety_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_DefinitionVal_getSafetyEx___boxed(lean_object* v_v_417_){
_start:
{
uint8_t v_res_418_; lean_object* v_r_419_; 
v_res_418_ = lean_definition_val_get_safety(v_v_417_);
v_r_419_ = lean_box(v_res_418_);
return v_r_419_;
}
}
static lean_object* _init_l_Lean_instInhabitedTheoremVal_default(void){
_start:
{
lean_object* v___x_420_; lean_object* v_name_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_420_ = l_Lean_instInhabitedConstantVal_default;
v_name_421_ = lean_ctor_get(v___x_420_, 0);
v___x_422_ = lean_box(0);
v___x_423_ = lean_obj_once(&l_Lean_instInhabitedDefinitionVal_default___closed__0, &l_Lean_instInhabitedDefinitionVal_default___closed__0_once, _init_l_Lean_instInhabitedDefinitionVal_default___closed__0);
lean_inc(v_name_421_);
v___x_424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_424_, 0, v_name_421_);
lean_ctor_set(v___x_424_, 1, v___x_422_);
v___x_425_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_425_, 0, v___x_420_);
lean_ctor_set(v___x_425_, 1, v___x_423_);
lean_ctor_set(v___x_425_, 2, v___x_424_);
return v___x_425_;
}
}
static lean_object* _init_l_Lean_instInhabitedTheoremVal(void){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_instInhabitedTheoremVal_default;
return v___x_426_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqTheoremVal_beq(lean_object* v_x_427_, lean_object* v_x_428_){
_start:
{
lean_object* v_toConstantVal_429_; lean_object* v_value_430_; lean_object* v_all_431_; lean_object* v_toConstantVal_432_; lean_object* v_value_433_; lean_object* v_all_434_; uint8_t v___x_435_; 
v_toConstantVal_429_ = lean_ctor_get(v_x_427_, 0);
v_value_430_ = lean_ctor_get(v_x_427_, 1);
v_all_431_ = lean_ctor_get(v_x_427_, 2);
v_toConstantVal_432_ = lean_ctor_get(v_x_428_, 0);
v_value_433_ = lean_ctor_get(v_x_428_, 1);
v_all_434_ = lean_ctor_get(v_x_428_, 2);
v___x_435_ = l_Lean_instBEqConstantVal_beq(v_toConstantVal_429_, v_toConstantVal_432_);
if (v___x_435_ == 0)
{
return v___x_435_;
}
else
{
uint8_t v___x_436_; 
v___x_436_ = lean_expr_eqv(v_value_430_, v_value_433_);
if (v___x_436_ == 0)
{
return v___x_436_;
}
else
{
uint8_t v___x_437_; 
v___x_437_ = l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(v_all_431_, v_all_434_);
return v___x_437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqTheoremVal_beq___boxed(lean_object* v_x_438_, lean_object* v_x_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = l_Lean_instBEqTheoremVal_beq(v_x_438_, v_x_439_);
lean_dec_ref(v_x_439_);
lean_dec_ref(v_x_438_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
LEAN_EXPORT lean_object* lean_mk_theorem_val(lean_object* v_name_444_, lean_object* v_levelParams_445_, lean_object* v_type_446_, lean_object* v_value_447_, lean_object* v_all_448_){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_449_, 0, v_name_444_);
lean_ctor_set(v___x_449_, 1, v_levelParams_445_);
lean_ctor_set(v___x_449_, 2, v_type_446_);
v___x_450_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v_value_447_);
lean_ctor_set(v___x_450_, 2, v_all_448_);
return v___x_450_;
}
}
static lean_object* _init_l_Lean_instInhabitedOpaqueVal_default(void){
_start:
{
lean_object* v___x_451_; lean_object* v_name_452_; lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_451_ = l_Lean_instInhabitedConstantVal_default;
v_name_452_ = lean_ctor_get(v___x_451_, 0);
v___x_453_ = lean_box(0);
v___x_454_ = lean_obj_once(&l_Lean_instInhabitedDefinitionVal_default___closed__0, &l_Lean_instInhabitedDefinitionVal_default___closed__0_once, _init_l_Lean_instInhabitedDefinitionVal_default___closed__0);
v___x_455_ = 0;
lean_inc(v_name_452_);
v___x_456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_456_, 0, v_name_452_);
lean_ctor_set(v___x_456_, 1, v___x_453_);
v___x_457_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_457_, 0, v___x_451_);
lean_ctor_set(v___x_457_, 1, v___x_454_);
lean_ctor_set(v___x_457_, 2, v___x_456_);
lean_ctor_set_uint8(v___x_457_, sizeof(void*)*3, v___x_455_);
return v___x_457_;
}
}
static lean_object* _init_l_Lean_instInhabitedOpaqueVal(void){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_instInhabitedOpaqueVal_default;
return v___x_458_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqOpaqueVal_beq(lean_object* v_x_459_, lean_object* v_x_460_){
_start:
{
lean_object* v_toConstantVal_461_; lean_object* v_value_462_; uint8_t v_isUnsafe_463_; lean_object* v_all_464_; lean_object* v_toConstantVal_465_; lean_object* v_value_466_; uint8_t v_isUnsafe_467_; lean_object* v_all_468_; uint8_t v___y_470_; uint8_t v___x_472_; 
v_toConstantVal_461_ = lean_ctor_get(v_x_459_, 0);
v_value_462_ = lean_ctor_get(v_x_459_, 1);
v_isUnsafe_463_ = lean_ctor_get_uint8(v_x_459_, sizeof(void*)*3);
v_all_464_ = lean_ctor_get(v_x_459_, 2);
v_toConstantVal_465_ = lean_ctor_get(v_x_460_, 0);
v_value_466_ = lean_ctor_get(v_x_460_, 1);
v_isUnsafe_467_ = lean_ctor_get_uint8(v_x_460_, sizeof(void*)*3);
v_all_468_ = lean_ctor_get(v_x_460_, 2);
v___x_472_ = l_Lean_instBEqConstantVal_beq(v_toConstantVal_461_, v_toConstantVal_465_);
if (v___x_472_ == 0)
{
return v___x_472_;
}
else
{
uint8_t v___x_473_; 
v___x_473_ = lean_expr_eqv(v_value_462_, v_value_466_);
if (v___x_473_ == 0)
{
return v___x_473_;
}
else
{
if (v_isUnsafe_467_ == 0)
{
if (v_isUnsafe_463_ == 0)
{
v___y_470_ = v___x_473_;
goto v___jp_469_;
}
else
{
return v_isUnsafe_467_;
}
}
else
{
v___y_470_ = v_isUnsafe_463_;
goto v___jp_469_;
}
}
}
v___jp_469_:
{
if (v___y_470_ == 0)
{
return v___y_470_;
}
else
{
uint8_t v___x_471_; 
v___x_471_ = l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(v_all_464_, v_all_468_);
return v___x_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqOpaqueVal_beq___boxed(lean_object* v_x_474_, lean_object* v_x_475_){
_start:
{
uint8_t v_res_476_; lean_object* v_r_477_; 
v_res_476_ = l_Lean_instBEqOpaqueVal_beq(v_x_474_, v_x_475_);
lean_dec_ref(v_x_475_);
lean_dec_ref(v_x_474_);
v_r_477_ = lean_box(v_res_476_);
return v_r_477_;
}
}
LEAN_EXPORT lean_object* lean_mk_opaque_val(lean_object* v_name_480_, lean_object* v_levelParams_481_, lean_object* v_type_482_, lean_object* v_value_483_, uint8_t v_isUnsafe_484_, lean_object* v_all_485_){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_486_, 0, v_name_480_);
lean_ctor_set(v___x_486_, 1, v_levelParams_481_);
lean_ctor_set(v___x_486_, 2, v_type_482_);
v___x_487_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_487_, 0, v___x_486_);
lean_ctor_set(v___x_487_, 1, v_value_483_);
lean_ctor_set(v___x_487_, 2, v_all_485_);
lean_ctor_set_uint8(v___x_487_, sizeof(void*)*3, v_isUnsafe_484_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkOpaqueValEx___boxed(lean_object* v_name_488_, lean_object* v_levelParams_489_, lean_object* v_type_490_, lean_object* v_value_491_, lean_object* v_isUnsafe_492_, lean_object* v_all_493_){
_start:
{
uint8_t v_isUnsafe_boxed_494_; lean_object* v_res_495_; 
v_isUnsafe_boxed_494_ = lean_unbox(v_isUnsafe_492_);
v_res_495_ = lean_mk_opaque_val(v_name_488_, v_levelParams_489_, v_type_490_, v_value_491_, v_isUnsafe_boxed_494_, v_all_493_);
return v_res_495_;
}
}
LEAN_EXPORT uint8_t lean_opaque_val_is_unsafe(lean_object* v_v_496_){
_start:
{
uint8_t v_isUnsafe_497_; 
v_isUnsafe_497_ = lean_ctor_get_uint8(v_v_496_, sizeof(void*)*3);
lean_dec_ref(v_v_496_);
return v_isUnsafe_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_OpaqueVal_isUnsafeEx___boxed(lean_object* v_v_498_){
_start:
{
uint8_t v_res_499_; lean_object* v_r_500_; 
v_res_499_ = lean_opaque_val_is_unsafe(v_v_498_);
v_r_500_ = lean_box(v_res_499_);
return v_r_500_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstructor_default___closed__0(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_501_ = lean_box(0);
v___x_502_ = ((lean_object*)(l_Lean_instInhabitedConstantVal_default___closed__2));
v___x_503_ = l_Lean_Expr_const___override(v___x_502_, v___x_501_);
return v___x_503_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstructor_default___closed__1(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = lean_obj_once(&l_Lean_instInhabitedConstructor_default___closed__0, &l_Lean_instInhabitedConstructor_default___closed__0_once, _init_l_Lean_instInhabitedConstructor_default___closed__0);
v___x_505_ = lean_obj_once(&l_Lean_instInhabitedConstantVal_default___closed__0, &l_Lean_instInhabitedConstantVal_default___closed__0_once, _init_l_Lean_instInhabitedConstantVal_default___closed__0);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
lean_ctor_set(v___x_506_, 1, v___x_504_);
return v___x_506_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstructor_default(void){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = lean_obj_once(&l_Lean_instInhabitedConstructor_default___closed__1, &l_Lean_instInhabitedConstructor_default___closed__1_once, _init_l_Lean_instInhabitedConstructor_default___closed__1);
return v___x_507_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstructor(void){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Lean_instInhabitedConstructor_default;
return v___x_508_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqConstructor_beq(lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
lean_object* v_name_511_; lean_object* v_type_512_; lean_object* v_name_513_; lean_object* v_type_514_; uint8_t v___x_515_; 
v_name_511_ = lean_ctor_get(v_x_509_, 0);
v_type_512_ = lean_ctor_get(v_x_509_, 1);
v_name_513_ = lean_ctor_get(v_x_510_, 0);
v_type_514_ = lean_ctor_get(v_x_510_, 1);
v___x_515_ = lean_name_eq(v_name_511_, v_name_513_);
if (v___x_515_ == 0)
{
return v___x_515_;
}
else
{
uint8_t v___x_516_; 
v___x_516_ = lean_expr_eqv(v_type_512_, v_type_514_);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqConstructor_beq___boxed(lean_object* v_x_517_, lean_object* v_x_518_){
_start:
{
uint8_t v_res_519_; lean_object* v_r_520_; 
v_res_519_ = l_Lean_instBEqConstructor_beq(v_x_517_, v_x_518_);
lean_dec_ref(v_x_518_);
lean_dec_ref(v_x_517_);
v_r_520_ = lean_box(v_res_519_);
return v_r_520_;
}
}
static lean_object* _init_l_Lean_instInhabitedInductiveType_default___closed__0(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_523_ = lean_box(0);
v___x_524_ = lean_obj_once(&l_Lean_instInhabitedConstructor_default___closed__0, &l_Lean_instInhabitedConstructor_default___closed__0_once, _init_l_Lean_instInhabitedConstructor_default___closed__0);
v___x_525_ = lean_obj_once(&l_Lean_instInhabitedConstantVal_default___closed__0, &l_Lean_instInhabitedConstantVal_default___closed__0_once, _init_l_Lean_instInhabitedConstantVal_default___closed__0);
v___x_526_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
lean_ctor_set(v___x_526_, 1, v___x_524_);
lean_ctor_set(v___x_526_, 2, v___x_523_);
return v___x_526_;
}
}
static lean_object* _init_l_Lean_instInhabitedInductiveType_default(void){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = lean_obj_once(&l_Lean_instInhabitedInductiveType_default___closed__0, &l_Lean_instInhabitedInductiveType_default___closed__0_once, _init_l_Lean_instInhabitedInductiveType_default___closed__0);
return v___x_527_;
}
}
static lean_object* _init_l_Lean_instInhabitedInductiveType(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lean_instInhabitedInductiveType_default;
return v___x_528_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqInductiveType_beq_spec__0(lean_object* v_x_529_, lean_object* v_x_530_){
_start:
{
if (lean_obj_tag(v_x_529_) == 0)
{
if (lean_obj_tag(v_x_530_) == 0)
{
uint8_t v___x_531_; 
v___x_531_ = 1;
return v___x_531_;
}
else
{
uint8_t v___x_532_; 
v___x_532_ = 0;
return v___x_532_;
}
}
else
{
if (lean_obj_tag(v_x_530_) == 0)
{
uint8_t v___x_533_; 
v___x_533_ = 0;
return v___x_533_;
}
else
{
lean_object* v_head_534_; lean_object* v_tail_535_; lean_object* v_head_536_; lean_object* v_tail_537_; uint8_t v___x_538_; 
v_head_534_ = lean_ctor_get(v_x_529_, 0);
v_tail_535_ = lean_ctor_get(v_x_529_, 1);
v_head_536_ = lean_ctor_get(v_x_530_, 0);
v_tail_537_ = lean_ctor_get(v_x_530_, 1);
v___x_538_ = l_Lean_instBEqConstructor_beq(v_head_534_, v_head_536_);
if (v___x_538_ == 0)
{
return v___x_538_;
}
else
{
v_x_529_ = v_tail_535_;
v_x_530_ = v_tail_537_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqInductiveType_beq_spec__0___boxed(lean_object* v_x_540_, lean_object* v_x_541_){
_start:
{
uint8_t v_res_542_; lean_object* v_r_543_; 
v_res_542_ = l_List_beq___at___00Lean_instBEqInductiveType_beq_spec__0(v_x_540_, v_x_541_);
lean_dec(v_x_541_);
lean_dec(v_x_540_);
v_r_543_ = lean_box(v_res_542_);
return v_r_543_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqInductiveType_beq(lean_object* v_x_544_, lean_object* v_x_545_){
_start:
{
lean_object* v_name_546_; lean_object* v_type_547_; lean_object* v_ctors_548_; lean_object* v_name_549_; lean_object* v_type_550_; lean_object* v_ctors_551_; uint8_t v___x_552_; 
v_name_546_ = lean_ctor_get(v_x_544_, 0);
v_type_547_ = lean_ctor_get(v_x_544_, 1);
v_ctors_548_ = lean_ctor_get(v_x_544_, 2);
v_name_549_ = lean_ctor_get(v_x_545_, 0);
v_type_550_ = lean_ctor_get(v_x_545_, 1);
v_ctors_551_ = lean_ctor_get(v_x_545_, 2);
v___x_552_ = lean_name_eq(v_name_546_, v_name_549_);
if (v___x_552_ == 0)
{
return v___x_552_;
}
else
{
uint8_t v___x_553_; 
v___x_553_ = lean_expr_eqv(v_type_547_, v_type_550_);
if (v___x_553_ == 0)
{
return v___x_553_;
}
else
{
uint8_t v___x_554_; 
v___x_554_ = l_List_beq___at___00Lean_instBEqInductiveType_beq_spec__0(v_ctors_548_, v_ctors_551_);
return v___x_554_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqInductiveType_beq___boxed(lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
uint8_t v_res_557_; lean_object* v_r_558_; 
v_res_557_ = l_Lean_instBEqInductiveType_beq(v_x_555_, v_x_556_);
lean_dec_ref(v_x_556_);
lean_dec_ref(v_x_555_);
v_r_558_ = lean_box(v_res_557_);
return v_r_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorIdx(lean_object* v_x_561_){
_start:
{
switch(lean_obj_tag(v_x_561_))
{
case 0:
{
lean_object* v___x_562_; 
v___x_562_ = lean_unsigned_to_nat(0u);
return v___x_562_;
}
case 1:
{
lean_object* v___x_563_; 
v___x_563_ = lean_unsigned_to_nat(1u);
return v___x_563_;
}
case 2:
{
lean_object* v___x_564_; 
v___x_564_ = lean_unsigned_to_nat(2u);
return v___x_564_;
}
case 3:
{
lean_object* v___x_565_; 
v___x_565_ = lean_unsigned_to_nat(3u);
return v___x_565_;
}
case 4:
{
lean_object* v___x_566_; 
v___x_566_ = lean_unsigned_to_nat(4u);
return v___x_566_;
}
case 5:
{
lean_object* v___x_567_; 
v___x_567_ = lean_unsigned_to_nat(5u);
return v___x_567_;
}
default: 
{
lean_object* v___x_568_; 
v___x_568_ = lean_unsigned_to_nat(6u);
return v___x_568_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorIdx___boxed(lean_object* v_x_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lean_Declaration_ctorIdx(v_x_569_);
lean_dec(v_x_569_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorElim___redArg(lean_object* v_t_571_, lean_object* v_k_572_){
_start:
{
switch(lean_obj_tag(v_t_571_))
{
case 4:
{
return v_k_572_;
}
case 5:
{
lean_object* v_defns_573_; lean_object* v___x_574_; 
v_defns_573_ = lean_ctor_get(v_t_571_, 0);
lean_inc(v_defns_573_);
lean_dec_ref_known(v_t_571_, 1);
v___x_574_ = lean_apply_1(v_k_572_, v_defns_573_);
return v___x_574_;
}
case 6:
{
lean_object* v_lparams_575_; lean_object* v_nparams_576_; lean_object* v_types_577_; uint8_t v_isUnsafe_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v_lparams_575_ = lean_ctor_get(v_t_571_, 0);
lean_inc(v_lparams_575_);
v_nparams_576_ = lean_ctor_get(v_t_571_, 1);
lean_inc(v_nparams_576_);
v_types_577_ = lean_ctor_get(v_t_571_, 2);
lean_inc(v_types_577_);
v_isUnsafe_578_ = lean_ctor_get_uint8(v_t_571_, sizeof(void*)*3);
lean_dec_ref_known(v_t_571_, 3);
v___x_579_ = lean_box(v_isUnsafe_578_);
v___x_580_ = lean_apply_4(v_k_572_, v_lparams_575_, v_nparams_576_, v_types_577_, v___x_579_);
return v___x_580_;
}
default: 
{
lean_object* v_val_581_; lean_object* v___x_582_; 
v_val_581_ = lean_ctor_get(v_t_571_, 0);
lean_inc_ref(v_val_581_);
lean_dec(v_t_571_);
v___x_582_ = lean_apply_1(v_k_572_, v_val_581_);
return v___x_582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorElim(lean_object* v_motive_583_, lean_object* v_ctorIdx_584_, lean_object* v_t_585_, lean_object* v_h_586_, lean_object* v_k_587_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lean_Declaration_ctorElim___redArg(v_t_585_, v_k_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_ctorElim___boxed(lean_object* v_motive_589_, lean_object* v_ctorIdx_590_, lean_object* v_t_591_, lean_object* v_h_592_, lean_object* v_k_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_Declaration_ctorElim(v_motive_589_, v_ctorIdx_590_, v_t_591_, v_h_592_, v_k_593_);
lean_dec(v_ctorIdx_590_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_axiomDecl_elim___redArg(lean_object* v_t_595_, lean_object* v_axiomDecl_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_Declaration_ctorElim___redArg(v_t_595_, v_axiomDecl_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_axiomDecl_elim(lean_object* v_motive_598_, lean_object* v_t_599_, lean_object* v_h_600_, lean_object* v_axiomDecl_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Lean_Declaration_ctorElim___redArg(v_t_599_, v_axiomDecl_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_defnDecl_elim___redArg(lean_object* v_t_603_, lean_object* v_defnDecl_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_Declaration_ctorElim___redArg(v_t_603_, v_defnDecl_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_defnDecl_elim(lean_object* v_motive_606_, lean_object* v_t_607_, lean_object* v_h_608_, lean_object* v_defnDecl_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lean_Declaration_ctorElim___redArg(v_t_607_, v_defnDecl_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_thmDecl_elim___redArg(lean_object* v_t_611_, lean_object* v_thmDecl_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Lean_Declaration_ctorElim___redArg(v_t_611_, v_thmDecl_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_thmDecl_elim(lean_object* v_motive_614_, lean_object* v_t_615_, lean_object* v_h_616_, lean_object* v_thmDecl_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Lean_Declaration_ctorElim___redArg(v_t_615_, v_thmDecl_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_opaqueDecl_elim___redArg(lean_object* v_t_619_, lean_object* v_opaqueDecl_620_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = l_Lean_Declaration_ctorElim___redArg(v_t_619_, v_opaqueDecl_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_opaqueDecl_elim(lean_object* v_motive_622_, lean_object* v_t_623_, lean_object* v_h_624_, lean_object* v_opaqueDecl_625_){
_start:
{
lean_object* v___x_626_; 
v___x_626_ = l_Lean_Declaration_ctorElim___redArg(v_t_623_, v_opaqueDecl_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_quotDecl_elim___redArg(lean_object* v_t_627_, lean_object* v_quotDecl_628_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lean_Declaration_ctorElim___redArg(v_t_627_, v_quotDecl_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_quotDecl_elim(lean_object* v_motive_630_, lean_object* v_t_631_, lean_object* v_h_632_, lean_object* v_quotDecl_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lean_Declaration_ctorElim___redArg(v_t_631_, v_quotDecl_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_mutualDefnDecl_elim___redArg(lean_object* v_t_635_, lean_object* v_mutualDefnDecl_636_){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = l_Lean_Declaration_ctorElim___redArg(v_t_635_, v_mutualDefnDecl_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_mutualDefnDecl_elim(lean_object* v_motive_638_, lean_object* v_t_639_, lean_object* v_h_640_, lean_object* v_mutualDefnDecl_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Lean_Declaration_ctorElim___redArg(v_t_639_, v_mutualDefnDecl_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_inductDecl_elim___redArg(lean_object* v_t_643_, lean_object* v_inductDecl_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Lean_Declaration_ctorElim___redArg(v_t_643_, v_inductDecl_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_inductDecl_elim(lean_object* v_motive_646_, lean_object* v_t_647_, lean_object* v_h_648_, lean_object* v_inductDecl_649_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l_Lean_Declaration_ctorElim___redArg(v_t_647_, v_inductDecl_649_);
return v___x_650_;
}
}
static lean_object* _init_l_Lean_instInhabitedDeclaration_default___closed__0(void){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = l_Lean_instInhabitedAxiomVal_default;
v___x_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_instInhabitedDeclaration_default(void){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = lean_obj_once(&l_Lean_instInhabitedDeclaration_default___closed__0, &l_Lean_instInhabitedDeclaration_default___closed__0_once, _init_l_Lean_instInhabitedDeclaration_default___closed__0);
return v___x_653_;
}
}
static lean_object* _init_l_Lean_instInhabitedDeclaration(void){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Lean_instInhabitedDeclaration_default;
return v___x_654_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__0(lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
if (lean_obj_tag(v_x_655_) == 0)
{
if (lean_obj_tag(v_x_656_) == 0)
{
uint8_t v___x_657_; 
v___x_657_ = 1;
return v___x_657_;
}
else
{
uint8_t v___x_658_; 
v___x_658_ = 0;
return v___x_658_;
}
}
else
{
if (lean_obj_tag(v_x_656_) == 0)
{
uint8_t v___x_659_; 
v___x_659_ = 0;
return v___x_659_;
}
else
{
lean_object* v_head_660_; lean_object* v_tail_661_; lean_object* v_head_662_; lean_object* v_tail_663_; uint8_t v___x_664_; 
v_head_660_ = lean_ctor_get(v_x_655_, 0);
v_tail_661_ = lean_ctor_get(v_x_655_, 1);
v_head_662_ = lean_ctor_get(v_x_656_, 0);
v_tail_663_ = lean_ctor_get(v_x_656_, 1);
v___x_664_ = l_Lean_instBEqDefinitionVal_beq(v_head_660_, v_head_662_);
if (v___x_664_ == 0)
{
return v___x_664_;
}
else
{
v_x_655_ = v_tail_661_;
v_x_656_ = v_tail_663_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__0___boxed(lean_object* v_x_666_, lean_object* v_x_667_){
_start:
{
uint8_t v_res_668_; lean_object* v_r_669_; 
v_res_668_ = l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__0(v_x_666_, v_x_667_);
lean_dec(v_x_667_);
lean_dec(v_x_666_);
v_r_669_ = lean_box(v_res_668_);
return v_r_669_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__1(lean_object* v_x_670_, lean_object* v_x_671_){
_start:
{
if (lean_obj_tag(v_x_670_) == 0)
{
if (lean_obj_tag(v_x_671_) == 0)
{
uint8_t v___x_672_; 
v___x_672_ = 1;
return v___x_672_;
}
else
{
uint8_t v___x_673_; 
v___x_673_ = 0;
return v___x_673_;
}
}
else
{
if (lean_obj_tag(v_x_671_) == 0)
{
uint8_t v___x_674_; 
v___x_674_ = 0;
return v___x_674_;
}
else
{
lean_object* v_head_675_; lean_object* v_tail_676_; lean_object* v_head_677_; lean_object* v_tail_678_; uint8_t v___x_679_; 
v_head_675_ = lean_ctor_get(v_x_670_, 0);
v_tail_676_ = lean_ctor_get(v_x_670_, 1);
v_head_677_ = lean_ctor_get(v_x_671_, 0);
v_tail_678_ = lean_ctor_get(v_x_671_, 1);
v___x_679_ = l_Lean_instBEqInductiveType_beq(v_head_675_, v_head_677_);
if (v___x_679_ == 0)
{
return v___x_679_;
}
else
{
v_x_670_ = v_tail_676_;
v_x_671_ = v_tail_678_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__1___boxed(lean_object* v_x_681_, lean_object* v_x_682_){
_start:
{
uint8_t v_res_683_; lean_object* v_r_684_; 
v_res_683_ = l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__1(v_x_681_, v_x_682_);
lean_dec(v_x_682_);
lean_dec(v_x_681_);
v_r_684_ = lean_box(v_res_683_);
return v_r_684_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqDeclaration_beq(lean_object* v_x_685_, lean_object* v_x_686_){
_start:
{
switch(lean_obj_tag(v_x_685_))
{
case 0:
{
if (lean_obj_tag(v_x_686_) == 0)
{
lean_object* v_val_687_; lean_object* v_val_688_; uint8_t v___x_689_; 
v_val_687_ = lean_ctor_get(v_x_685_, 0);
v_val_688_ = lean_ctor_get(v_x_686_, 0);
v___x_689_ = l_Lean_instBEqAxiomVal_beq(v_val_687_, v_val_688_);
return v___x_689_;
}
else
{
uint8_t v___x_690_; 
v___x_690_ = 0;
return v___x_690_;
}
}
case 1:
{
if (lean_obj_tag(v_x_686_) == 1)
{
lean_object* v_val_691_; lean_object* v_val_692_; uint8_t v___x_693_; 
v_val_691_ = lean_ctor_get(v_x_685_, 0);
v_val_692_ = lean_ctor_get(v_x_686_, 0);
v___x_693_ = l_Lean_instBEqDefinitionVal_beq(v_val_691_, v_val_692_);
return v___x_693_;
}
else
{
uint8_t v___x_694_; 
v___x_694_ = 0;
return v___x_694_;
}
}
case 2:
{
if (lean_obj_tag(v_x_686_) == 2)
{
lean_object* v_val_695_; lean_object* v_val_696_; uint8_t v___x_697_; 
v_val_695_ = lean_ctor_get(v_x_685_, 0);
v_val_696_ = lean_ctor_get(v_x_686_, 0);
v___x_697_ = l_Lean_instBEqTheoremVal_beq(v_val_695_, v_val_696_);
return v___x_697_;
}
else
{
uint8_t v___x_698_; 
v___x_698_ = 0;
return v___x_698_;
}
}
case 3:
{
if (lean_obj_tag(v_x_686_) == 3)
{
lean_object* v_val_699_; lean_object* v_val_700_; uint8_t v___x_701_; 
v_val_699_ = lean_ctor_get(v_x_685_, 0);
v_val_700_ = lean_ctor_get(v_x_686_, 0);
v___x_701_ = l_Lean_instBEqOpaqueVal_beq(v_val_699_, v_val_700_);
return v___x_701_;
}
else
{
uint8_t v___x_702_; 
v___x_702_ = 0;
return v___x_702_;
}
}
case 4:
{
if (lean_obj_tag(v_x_686_) == 4)
{
uint8_t v___x_703_; 
v___x_703_ = 1;
return v___x_703_;
}
else
{
uint8_t v___x_704_; 
v___x_704_ = 0;
return v___x_704_;
}
}
case 5:
{
if (lean_obj_tag(v_x_686_) == 5)
{
lean_object* v_defns_705_; lean_object* v_defns_706_; uint8_t v___x_707_; 
v_defns_705_ = lean_ctor_get(v_x_685_, 0);
v_defns_706_ = lean_ctor_get(v_x_686_, 0);
v___x_707_ = l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__0(v_defns_705_, v_defns_706_);
return v___x_707_;
}
else
{
uint8_t v___x_708_; 
v___x_708_ = 0;
return v___x_708_;
}
}
default: 
{
if (lean_obj_tag(v_x_686_) == 6)
{
lean_object* v_lparams_709_; lean_object* v_nparams_710_; lean_object* v_types_711_; uint8_t v_isUnsafe_712_; lean_object* v_lparams_713_; lean_object* v_nparams_714_; lean_object* v_types_715_; uint8_t v_isUnsafe_716_; uint8_t v___x_717_; 
v_lparams_709_ = lean_ctor_get(v_x_685_, 0);
v_nparams_710_ = lean_ctor_get(v_x_685_, 1);
v_types_711_ = lean_ctor_get(v_x_685_, 2);
v_isUnsafe_712_ = lean_ctor_get_uint8(v_x_685_, sizeof(void*)*3);
v_lparams_713_ = lean_ctor_get(v_x_686_, 0);
v_nparams_714_ = lean_ctor_get(v_x_686_, 1);
v_types_715_ = lean_ctor_get(v_x_686_, 2);
v_isUnsafe_716_ = lean_ctor_get_uint8(v_x_686_, sizeof(void*)*3);
v___x_717_ = l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(v_lparams_709_, v_lparams_713_);
if (v___x_717_ == 0)
{
return v___x_717_;
}
else
{
uint8_t v___x_718_; 
v___x_718_ = lean_nat_dec_eq(v_nparams_710_, v_nparams_714_);
if (v___x_718_ == 0)
{
return v___x_718_;
}
else
{
uint8_t v___x_719_; 
v___x_719_ = l_List_beq___at___00Lean_instBEqDeclaration_beq_spec__1(v_types_711_, v_types_715_);
if (v___x_719_ == 0)
{
return v___x_719_;
}
else
{
if (v_isUnsafe_716_ == 0)
{
if (v_isUnsafe_712_ == 0)
{
return v___x_719_;
}
else
{
return v_isUnsafe_716_;
}
}
else
{
return v_isUnsafe_712_;
}
}
}
}
}
else
{
uint8_t v___x_720_; 
v___x_720_ = 0;
return v___x_720_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqDeclaration_beq___boxed(lean_object* v_x_721_, lean_object* v_x_722_){
_start:
{
uint8_t v_res_723_; lean_object* v_r_724_; 
v_res_723_ = l_Lean_instBEqDeclaration_beq(v_x_721_, v_x_722_);
lean_dec(v_x_722_);
lean_dec(v_x_721_);
v_r_724_ = lean_box(v_res_723_);
return v_r_724_;
}
}
LEAN_EXPORT lean_object* lean_mk_inductive_decl(lean_object* v_lparams_727_, lean_object* v_nparams_728_, lean_object* v_types_729_, uint8_t v_isUnsafe_730_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(v___x_731_, 0, v_lparams_727_);
lean_ctor_set(v___x_731_, 1, v_nparams_728_);
lean_ctor_set(v___x_731_, 2, v_types_729_);
lean_ctor_set_uint8(v___x_731_, sizeof(void*)*3, v_isUnsafe_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkInductiveDeclEs___boxed(lean_object* v_lparams_732_, lean_object* v_nparams_733_, lean_object* v_types_734_, lean_object* v_isUnsafe_735_){
_start:
{
uint8_t v_isUnsafe_boxed_736_; lean_object* v_res_737_; 
v_isUnsafe_boxed_736_ = lean_unbox(v_isUnsafe_735_);
v_res_737_ = lean_mk_inductive_decl(v_lparams_732_, v_nparams_733_, v_types_734_, v_isUnsafe_boxed_736_);
return v_res_737_;
}
}
LEAN_EXPORT uint8_t lean_is_unsafe_inductive_decl(lean_object* v_x_738_){
_start:
{
if (lean_obj_tag(v_x_738_) == 6)
{
uint8_t v_isUnsafe_739_; 
v_isUnsafe_739_ = lean_ctor_get_uint8(v_x_738_, sizeof(void*)*3);
lean_dec_ref_known(v_x_738_, 3);
return v_isUnsafe_739_;
}
else
{
uint8_t v___x_740_; 
lean_dec(v_x_738_);
v___x_740_ = 0;
return v___x_740_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_isUnsafeInductiveDeclEx___boxed(lean_object* v_x_741_){
_start:
{
uint8_t v_res_742_; lean_object* v_r_743_; 
v_res_742_ = lean_is_unsafe_inductive_decl(v_x_741_);
v_r_743_ = lean_box(v_res_742_);
return v_r_743_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Declaration_definitionVal_x21_spec__0(lean_object* v_msg_744_){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = l_Lean_instInhabitedDefinitionVal_default;
v___x_746_ = lean_panic_fn_borrowed(v___x_745_, v_msg_744_);
return v___x_746_;
}
}
static lean_object* _init_l_Lean_Declaration_definitionVal_x21___closed__3(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_750_ = ((lean_object*)(l_Lean_Declaration_definitionVal_x21___closed__2));
v___x_751_ = lean_unsigned_to_nat(9u);
v___x_752_ = lean_unsigned_to_nat(206u);
v___x_753_ = ((lean_object*)(l_Lean_Declaration_definitionVal_x21___closed__1));
v___x_754_ = ((lean_object*)(l_Lean_Declaration_definitionVal_x21___closed__0));
v___x_755_ = l_mkPanicMessageWithDecl(v___x_754_, v___x_753_, v___x_752_, v___x_751_, v___x_750_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_definitionVal_x21(lean_object* v_x_756_){
_start:
{
if (lean_obj_tag(v_x_756_) == 1)
{
lean_object* v_val_757_; 
v_val_757_ = lean_ctor_get(v_x_756_, 0);
lean_inc_ref(v_val_757_);
return v_val_757_;
}
else
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = lean_obj_once(&l_Lean_Declaration_definitionVal_x21___closed__3, &l_Lean_Declaration_definitionVal_x21___closed__3_once, _init_l_Lean_Declaration_definitionVal_x21___closed__3);
v___x_759_ = l_panic___at___00Lean_Declaration_definitionVal_x21_spec__0(v___x_758_);
return v___x_759_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_definitionVal_x21___boxed(lean_object* v_x_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Declaration_definitionVal_x21(v_x_760_);
lean_dec(v_x_760_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Declaration_getTopLevelNames_spec__0(lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
if (lean_obj_tag(v_a_762_) == 0)
{
lean_object* v___x_764_; 
v___x_764_ = l_List_reverse___redArg(v_a_763_);
return v___x_764_;
}
else
{
lean_object* v_head_765_; lean_object* v_toConstantVal_766_; lean_object* v_tail_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_776_; 
v_head_765_ = lean_ctor_get(v_a_762_, 0);
v_toConstantVal_766_ = lean_ctor_get(v_head_765_, 0);
lean_inc_ref(v_toConstantVal_766_);
v_tail_767_ = lean_ctor_get(v_a_762_, 1);
v_isSharedCheck_776_ = !lean_is_exclusive(v_a_762_);
if (v_isSharedCheck_776_ == 0)
{
lean_object* v_unused_777_; 
v_unused_777_ = lean_ctor_get(v_a_762_, 0);
lean_dec(v_unused_777_);
v___x_769_ = v_a_762_;
v_isShared_770_ = v_isSharedCheck_776_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_tail_767_);
lean_dec(v_a_762_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_776_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v_name_771_; lean_object* v___x_773_; 
v_name_771_ = lean_ctor_get(v_toConstantVal_766_, 0);
lean_inc(v_name_771_);
lean_dec_ref(v_toConstantVal_766_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v_a_763_);
lean_ctor_set(v___x_769_, 0, v_name_771_);
v___x_773_ = v___x_769_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_name_771_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_a_763_);
v___x_773_ = v_reuseFailAlloc_775_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
v_a_762_ = v_tail_767_;
v_a_763_ = v___x_773_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Declaration_getTopLevelNames_spec__1(lean_object* v_a_778_, lean_object* v_a_779_){
_start:
{
if (lean_obj_tag(v_a_778_) == 0)
{
lean_object* v___x_780_; 
v___x_780_ = l_List_reverse___redArg(v_a_779_);
return v___x_780_;
}
else
{
lean_object* v_head_781_; lean_object* v_tail_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_791_; 
v_head_781_ = lean_ctor_get(v_a_778_, 0);
v_tail_782_ = lean_ctor_get(v_a_778_, 1);
v_isSharedCheck_791_ = !lean_is_exclusive(v_a_778_);
if (v_isSharedCheck_791_ == 0)
{
v___x_784_ = v_a_778_;
v_isShared_785_ = v_isSharedCheck_791_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_tail_782_);
lean_inc(v_head_781_);
lean_dec(v_a_778_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_791_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v_name_786_; lean_object* v___x_788_; 
v_name_786_ = lean_ctor_get(v_head_781_, 0);
lean_inc(v_name_786_);
lean_dec(v_head_781_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 1, v_a_779_);
lean_ctor_set(v___x_784_, 0, v_name_786_);
v___x_788_ = v___x_784_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_name_786_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_a_779_);
v___x_788_ = v_reuseFailAlloc_790_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
v_a_778_ = v_tail_782_;
v_a_779_ = v___x_788_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_getTopLevelNames(lean_object* v_x_798_){
_start:
{
switch(lean_obj_tag(v_x_798_))
{
case 4:
{
lean_object* v___x_799_; 
v___x_799_ = ((lean_object*)(l_Lean_Declaration_getTopLevelNames___closed__2));
return v___x_799_;
}
case 5:
{
lean_object* v_defns_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v_defns_800_ = lean_ctor_get(v_x_798_, 0);
lean_inc(v_defns_800_);
lean_dec_ref_known(v_x_798_, 1);
v___x_801_ = lean_box(0);
v___x_802_ = l_List_mapTR_loop___at___00Lean_Declaration_getTopLevelNames_spec__0(v_defns_800_, v___x_801_);
return v___x_802_;
}
case 6:
{
lean_object* v_types_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v_types_803_ = lean_ctor_get(v_x_798_, 2);
lean_inc(v_types_803_);
lean_dec_ref_known(v_x_798_, 3);
v___x_804_ = lean_box(0);
v___x_805_ = l_List_mapTR_loop___at___00Lean_Declaration_getTopLevelNames_spec__1(v_types_803_, v___x_804_);
return v___x_805_;
}
default: 
{
lean_object* v_val_806_; lean_object* v_toConstantVal_807_; lean_object* v_name_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_val_806_ = lean_ctor_get(v_x_798_, 0);
lean_inc_ref(v_val_806_);
lean_dec(v_x_798_);
v_toConstantVal_807_ = lean_ctor_get(v_val_806_, 0);
lean_inc_ref(v_toConstantVal_807_);
lean_dec_ref(v_val_806_);
v_name_808_ = lean_ctor_get(v_toConstantVal_807_, 0);
lean_inc(v_name_808_);
lean_dec_ref(v_toConstantVal_807_);
v___x_809_ = lean_box(0);
v___x_810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_810_, 0, v_name_808_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
return v___x_810_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Declaration_getNames_spec__0(lean_object* v_a_811_, lean_object* v_a_812_){
_start:
{
if (lean_obj_tag(v_a_811_) == 0)
{
lean_object* v___x_813_; 
v___x_813_ = l_List_reverse___redArg(v_a_812_);
return v___x_813_;
}
else
{
lean_object* v_head_814_; lean_object* v_tail_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_824_; 
v_head_814_ = lean_ctor_get(v_a_811_, 0);
v_tail_815_ = lean_ctor_get(v_a_811_, 1);
v_isSharedCheck_824_ = !lean_is_exclusive(v_a_811_);
if (v_isSharedCheck_824_ == 0)
{
v___x_817_ = v_a_811_;
v_isShared_818_ = v_isSharedCheck_824_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_tail_815_);
lean_inc(v_head_814_);
lean_dec(v_a_811_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_824_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v_name_819_; lean_object* v___x_821_; 
v_name_819_ = lean_ctor_get(v_head_814_, 0);
lean_inc(v_name_819_);
lean_dec(v_head_814_);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 1, v_a_812_);
lean_ctor_set(v___x_817_, 0, v_name_819_);
v___x_821_ = v___x_817_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_name_819_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v_a_812_);
v___x_821_ = v_reuseFailAlloc_823_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
v_a_811_ = v_tail_815_;
v_a_812_ = v___x_821_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1(lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
if (lean_obj_tag(v_a_828_) == 0)
{
lean_object* v___x_830_; 
v___x_830_ = lean_array_to_list(v_a_829_);
return v___x_830_;
}
else
{
lean_object* v_head_831_; lean_object* v_tail_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_848_; 
v_head_831_ = lean_ctor_get(v_a_828_, 0);
v_tail_832_ = lean_ctor_get(v_a_828_, 1);
v_isSharedCheck_848_ = !lean_is_exclusive(v_a_828_);
if (v_isSharedCheck_848_ == 0)
{
v___x_834_ = v_a_828_;
v_isShared_835_ = v_isSharedCheck_848_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_tail_832_);
lean_inc(v_head_831_);
lean_dec(v_a_828_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_848_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v_name_836_; lean_object* v_ctors_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_843_; 
v_name_836_ = lean_ctor_get(v_head_831_, 0);
lean_inc(v_name_836_);
v_ctors_837_ = lean_ctor_get(v_head_831_, 2);
lean_inc(v_ctors_837_);
lean_dec(v_head_831_);
v___x_838_ = ((lean_object*)(l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1___closed__1));
v___x_839_ = l_Lean_Name_appendCore(v_name_836_, v___x_838_);
v___x_840_ = lean_box(0);
v___x_841_ = l_List_mapTR_loop___at___00Lean_Declaration_getNames_spec__0(v_ctors_837_, v___x_840_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v___x_841_);
lean_ctor_set(v___x_834_, 0, v___x_839_);
v___x_843_ = v___x_834_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_839_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v___x_841_);
v___x_843_ = v_reuseFailAlloc_847_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_844_, 0, v_name_836_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
v___x_845_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_829_, v___x_844_);
v_a_828_ = v_tail_832_;
v_a_829_ = v___x_845_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_getNames(lean_object* v_x_875_){
_start:
{
switch(lean_obj_tag(v_x_875_))
{
case 4:
{
lean_object* v___x_876_; 
v___x_876_ = ((lean_object*)(l_Lean_Declaration_getNames___closed__9));
return v___x_876_;
}
case 5:
{
lean_object* v_defns_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v_defns_877_ = lean_ctor_get(v_x_875_, 0);
lean_inc(v_defns_877_);
lean_dec_ref_known(v_x_875_, 1);
v___x_878_ = lean_box(0);
v___x_879_ = l_List_mapTR_loop___at___00Lean_Declaration_getTopLevelNames_spec__0(v_defns_877_, v___x_878_);
return v___x_879_;
}
case 6:
{
lean_object* v_types_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v_types_880_ = lean_ctor_get(v_x_875_, 2);
lean_inc(v_types_880_);
lean_dec_ref_known(v_x_875_, 3);
v___x_881_ = ((lean_object*)(l_Lean_Declaration_getNames___closed__10));
v___x_882_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1(v_types_880_, v___x_881_);
return v___x_882_;
}
default: 
{
lean_object* v_val_883_; lean_object* v_toConstantVal_884_; lean_object* v_name_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_val_883_ = lean_ctor_get(v_x_875_, 0);
lean_inc_ref(v_val_883_);
lean_dec(v_x_875_);
v_toConstantVal_884_ = lean_ctor_get(v_val_883_, 0);
lean_inc_ref(v_toConstantVal_884_);
lean_dec_ref(v_val_883_);
v_name_885_ = lean_ctor_get(v_toConstantVal_884_, 0);
lean_inc(v_name_885_);
lean_dec_ref(v_toConstantVal_884_);
v___x_886_ = lean_box(0);
v___x_887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_887_, 0, v_name_885_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
return v___x_887_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__0(lean_object* v_f_888_, lean_object* v_value_889_, lean_object* v_a_890_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = lean_apply_2(v_f_888_, v_a_890_, v_value_889_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__3(lean_object* v_f_892_, lean_object* v_value_893_, lean_object* v_a_894_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = lean_apply_2(v_f_892_, v_a_894_, v_value_893_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__1(lean_object* v_f_896_, lean_object* v_toBind_897_, lean_object* v_a_898_, lean_object* v_v_899_){
_start:
{
lean_object* v_toConstantVal_900_; lean_object* v_value_901_; lean_object* v_type_902_; lean_object* v___f_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v_toConstantVal_900_ = lean_ctor_get(v_v_899_, 0);
lean_inc_ref(v_toConstantVal_900_);
v_value_901_ = lean_ctor_get(v_v_899_, 1);
lean_inc_ref(v_value_901_);
lean_dec_ref(v_v_899_);
v_type_902_ = lean_ctor_get(v_toConstantVal_900_, 2);
lean_inc_ref(v_type_902_);
lean_dec_ref(v_toConstantVal_900_);
lean_inc(v_f_896_);
v___f_903_ = lean_alloc_closure((void*)(l_Lean_Declaration_foldExprM___redArg___lam__3), 3, 2);
lean_closure_set(v___f_903_, 0, v_f_896_);
lean_closure_set(v___f_903_, 1, v_value_901_);
v___x_904_ = lean_apply_2(v_f_896_, v_a_898_, v_type_902_);
v___x_905_ = lean_apply_4(v_toBind_897_, lean_box(0), lean_box(0), v___x_904_, v___f_903_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__2(lean_object* v_f_906_, lean_object* v_a_907_, lean_object* v_ctor_908_){
_start:
{
lean_object* v_type_909_; lean_object* v___x_910_; 
v_type_909_ = lean_ctor_get(v_ctor_908_, 1);
lean_inc_ref(v_type_909_);
lean_dec_ref(v_ctor_908_);
v___x_910_ = lean_apply_2(v_f_906_, v_a_907_, v_type_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__4(lean_object* v_inst_911_, lean_object* v___f_912_, lean_object* v_ctors_913_, lean_object* v_a_914_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_List_foldlM___redArg(v_inst_911_, v___f_912_, v_a_914_, v_ctors_913_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg___lam__5(lean_object* v_inst_916_, lean_object* v___f_917_, lean_object* v_f_918_, lean_object* v_toBind_919_, lean_object* v_a_920_, lean_object* v_inductType_921_){
_start:
{
lean_object* v_type_922_; lean_object* v_ctors_923_; lean_object* v___f_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v_type_922_ = lean_ctor_get(v_inductType_921_, 1);
lean_inc_ref(v_type_922_);
v_ctors_923_ = lean_ctor_get(v_inductType_921_, 2);
lean_inc(v_ctors_923_);
lean_dec_ref(v_inductType_921_);
v___f_924_ = lean_alloc_closure((void*)(l_Lean_Declaration_foldExprM___redArg___lam__4), 4, 3);
lean_closure_set(v___f_924_, 0, v_inst_916_);
lean_closure_set(v___f_924_, 1, v___f_917_);
lean_closure_set(v___f_924_, 2, v_ctors_923_);
v___x_925_ = lean_apply_2(v_f_918_, v_a_920_, v_type_922_);
v___x_926_ = lean_apply_4(v_toBind_919_, lean_box(0), lean_box(0), v___x_925_, v___f_924_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___redArg(lean_object* v_inst_927_, lean_object* v_d_928_, lean_object* v_f_929_, lean_object* v_a_930_){
_start:
{
switch(lean_obj_tag(v_d_928_))
{
case 0:
{
lean_object* v_val_931_; lean_object* v_toConstantVal_932_; lean_object* v_type_933_; lean_object* v___x_934_; 
lean_dec_ref(v_inst_927_);
v_val_931_ = lean_ctor_get(v_d_928_, 0);
lean_inc_ref(v_val_931_);
lean_dec_ref_known(v_d_928_, 1);
v_toConstantVal_932_ = lean_ctor_get(v_val_931_, 0);
lean_inc_ref(v_toConstantVal_932_);
lean_dec_ref(v_val_931_);
v_type_933_ = lean_ctor_get(v_toConstantVal_932_, 2);
lean_inc_ref(v_type_933_);
lean_dec_ref(v_toConstantVal_932_);
v___x_934_ = lean_apply_2(v_f_929_, v_a_930_, v_type_933_);
return v___x_934_;
}
case 4:
{
lean_object* v_toApplicative_935_; lean_object* v_toPure_936_; lean_object* v___x_937_; 
v_toApplicative_935_ = lean_ctor_get(v_inst_927_, 0);
lean_inc_ref(v_toApplicative_935_);
lean_dec(v_f_929_);
lean_dec_ref(v_inst_927_);
v_toPure_936_ = lean_ctor_get(v_toApplicative_935_, 1);
lean_inc(v_toPure_936_);
lean_dec_ref(v_toApplicative_935_);
v___x_937_ = lean_apply_2(v_toPure_936_, lean_box(0), v_a_930_);
return v___x_937_;
}
case 5:
{
lean_object* v_toBind_938_; lean_object* v_defns_939_; lean_object* v___f_940_; lean_object* v___x_941_; 
v_toBind_938_ = lean_ctor_get(v_inst_927_, 1);
v_defns_939_ = lean_ctor_get(v_d_928_, 0);
lean_inc(v_defns_939_);
lean_dec_ref_known(v_d_928_, 1);
lean_inc(v_toBind_938_);
v___f_940_ = lean_alloc_closure((void*)(l_Lean_Declaration_foldExprM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_940_, 0, v_f_929_);
lean_closure_set(v___f_940_, 1, v_toBind_938_);
v___x_941_ = l_List_foldlM___redArg(v_inst_927_, v___f_940_, v_a_930_, v_defns_939_);
return v___x_941_;
}
case 6:
{
lean_object* v_toBind_942_; lean_object* v_types_943_; lean_object* v___f_944_; lean_object* v___f_945_; lean_object* v___x_946_; 
v_toBind_942_ = lean_ctor_get(v_inst_927_, 1);
v_types_943_ = lean_ctor_get(v_d_928_, 2);
lean_inc(v_types_943_);
lean_dec_ref_known(v_d_928_, 3);
lean_inc(v_f_929_);
v___f_944_ = lean_alloc_closure((void*)(l_Lean_Declaration_foldExprM___redArg___lam__2), 3, 1);
lean_closure_set(v___f_944_, 0, v_f_929_);
lean_inc(v_toBind_942_);
lean_inc_ref(v_inst_927_);
v___f_945_ = lean_alloc_closure((void*)(l_Lean_Declaration_foldExprM___redArg___lam__5), 6, 4);
lean_closure_set(v___f_945_, 0, v_inst_927_);
lean_closure_set(v___f_945_, 1, v___f_944_);
lean_closure_set(v___f_945_, 2, v_f_929_);
lean_closure_set(v___f_945_, 3, v_toBind_942_);
v___x_946_ = l_List_foldlM___redArg(v_inst_927_, v___f_945_, v_a_930_, v_types_943_);
return v___x_946_;
}
default: 
{
lean_object* v_val_947_; lean_object* v_toConstantVal_948_; lean_object* v_toBind_949_; lean_object* v_value_950_; lean_object* v_type_951_; lean_object* v___f_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v_val_947_ = lean_ctor_get(v_d_928_, 0);
lean_inc_ref(v_val_947_);
lean_dec(v_d_928_);
v_toConstantVal_948_ = lean_ctor_get(v_val_947_, 0);
lean_inc_ref(v_toConstantVal_948_);
v_toBind_949_ = lean_ctor_get(v_inst_927_, 1);
lean_inc(v_toBind_949_);
lean_dec_ref(v_inst_927_);
v_value_950_ = lean_ctor_get(v_val_947_, 1);
lean_inc_ref(v_value_950_);
lean_dec_ref(v_val_947_);
v_type_951_ = lean_ctor_get(v_toConstantVal_948_, 2);
lean_inc_ref(v_type_951_);
lean_dec_ref(v_toConstantVal_948_);
lean_inc(v_f_929_);
v___f_952_ = lean_alloc_closure((void*)(l_Lean_Declaration_foldExprM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_952_, 0, v_f_929_);
lean_closure_set(v___f_952_, 1, v_value_950_);
v___x_953_ = lean_apply_2(v_f_929_, v_a_930_, v_type_951_);
v___x_954_ = lean_apply_4(v_toBind_949_, lean_box(0), lean_box(0), v___x_953_, v___f_952_);
return v___x_954_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM(lean_object* v_00_u03b1_955_, lean_object* v_m_956_, lean_object* v_inst_957_, lean_object* v_d_958_, lean_object* v_f_959_, lean_object* v_a_960_){
_start:
{
lean_object* v___x_961_; 
v___x_961_ = l_Lean_Declaration_foldExprM___redArg(v_inst_957_, v_d_958_, v_f_959_, v_a_960_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forExprM___redArg___lam__0(lean_object* v_f_962_, lean_object* v_x_963_, lean_object* v_a_964_){
_start:
{
lean_object* v___x_965_; 
v___x_965_ = lean_apply_1(v_f_962_, v_a_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forExprM___redArg(lean_object* v_inst_966_, lean_object* v_d_967_, lean_object* v_f_968_){
_start:
{
lean_object* v___f_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___f_969_ = lean_alloc_closure((void*)(l_Lean_Declaration_forExprM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_969_, 0, v_f_968_);
v___x_970_ = lean_box(0);
v___x_971_ = l_Lean_Declaration_foldExprM___redArg(v_inst_966_, v_d_967_, v___f_969_, v___x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forExprM(lean_object* v_m_972_, lean_object* v_inst_973_, lean_object* v_d_974_, lean_object* v_f_975_){
_start:
{
lean_object* v___f_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___f_976_ = lean_alloc_closure((void*)(l_Lean_Declaration_forExprM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_976_, 0, v_f_975_);
v___x_977_ = lean_box(0);
v___x_978_ = l_Lean_Declaration_foldExprM___redArg(v_inst_973_, v_d_974_, v___f_976_, v___x_977_);
return v___x_978_;
}
}
static lean_object* _init_l_Lean_instInhabitedInductiveVal_default___closed__0(void){
_start:
{
uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_979_ = 0;
v___x_980_ = lean_box(0);
v___x_981_ = lean_unsigned_to_nat(0u);
v___x_982_ = l_Lean_instInhabitedConstantVal_default;
v___x_983_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_983_, 0, v___x_982_);
lean_ctor_set(v___x_983_, 1, v___x_981_);
lean_ctor_set(v___x_983_, 2, v___x_981_);
lean_ctor_set(v___x_983_, 3, v___x_980_);
lean_ctor_set(v___x_983_, 4, v___x_980_);
lean_ctor_set(v___x_983_, 5, v___x_981_);
lean_ctor_set_uint8(v___x_983_, sizeof(void*)*6, v___x_979_);
lean_ctor_set_uint8(v___x_983_, sizeof(void*)*6 + 1, v___x_979_);
lean_ctor_set_uint8(v___x_983_, sizeof(void*)*6 + 2, v___x_979_);
return v___x_983_;
}
}
static lean_object* _init_l_Lean_instInhabitedInductiveVal_default(void){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = lean_obj_once(&l_Lean_instInhabitedInductiveVal_default___closed__0, &l_Lean_instInhabitedInductiveVal_default___closed__0_once, _init_l_Lean_instInhabitedInductiveVal_default___closed__0);
return v___x_984_;
}
}
static lean_object* _init_l_Lean_instInhabitedInductiveVal(void){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Lean_instInhabitedInductiveVal_default;
return v___x_985_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqInductiveVal_beq(lean_object* v_x_986_, lean_object* v_x_987_){
_start:
{
lean_object* v_toConstantVal_988_; lean_object* v_numParams_989_; lean_object* v_numIndices_990_; lean_object* v_all_991_; lean_object* v_ctors_992_; lean_object* v_numNested_993_; uint8_t v_isRec_994_; uint8_t v_isUnsafe_995_; uint8_t v_isReflexive_996_; lean_object* v_toConstantVal_997_; lean_object* v_numParams_998_; lean_object* v_numIndices_999_; lean_object* v_all_1000_; lean_object* v_ctors_1001_; lean_object* v_numNested_1002_; uint8_t v_isRec_1003_; uint8_t v_isUnsafe_1004_; uint8_t v_isReflexive_1005_; uint8_t v___y_1007_; uint8_t v___y_1009_; uint8_t v___x_1010_; 
v_toConstantVal_988_ = lean_ctor_get(v_x_986_, 0);
v_numParams_989_ = lean_ctor_get(v_x_986_, 1);
v_numIndices_990_ = lean_ctor_get(v_x_986_, 2);
v_all_991_ = lean_ctor_get(v_x_986_, 3);
v_ctors_992_ = lean_ctor_get(v_x_986_, 4);
v_numNested_993_ = lean_ctor_get(v_x_986_, 5);
v_isRec_994_ = lean_ctor_get_uint8(v_x_986_, sizeof(void*)*6);
v_isUnsafe_995_ = lean_ctor_get_uint8(v_x_986_, sizeof(void*)*6 + 1);
v_isReflexive_996_ = lean_ctor_get_uint8(v_x_986_, sizeof(void*)*6 + 2);
v_toConstantVal_997_ = lean_ctor_get(v_x_987_, 0);
v_numParams_998_ = lean_ctor_get(v_x_987_, 1);
v_numIndices_999_ = lean_ctor_get(v_x_987_, 2);
v_all_1000_ = lean_ctor_get(v_x_987_, 3);
v_ctors_1001_ = lean_ctor_get(v_x_987_, 4);
v_numNested_1002_ = lean_ctor_get(v_x_987_, 5);
v_isRec_1003_ = lean_ctor_get_uint8(v_x_987_, sizeof(void*)*6);
v_isUnsafe_1004_ = lean_ctor_get_uint8(v_x_987_, sizeof(void*)*6 + 1);
v_isReflexive_1005_ = lean_ctor_get_uint8(v_x_987_, sizeof(void*)*6 + 2);
v___x_1010_ = l_Lean_instBEqConstantVal_beq(v_toConstantVal_988_, v_toConstantVal_997_);
if (v___x_1010_ == 0)
{
return v___x_1010_;
}
else
{
uint8_t v___x_1011_; 
v___x_1011_ = lean_nat_dec_eq(v_numParams_989_, v_numParams_998_);
if (v___x_1011_ == 0)
{
return v___x_1011_;
}
else
{
uint8_t v___x_1012_; 
v___x_1012_ = lean_nat_dec_eq(v_numIndices_990_, v_numIndices_999_);
if (v___x_1012_ == 0)
{
return v___x_1012_;
}
else
{
uint8_t v___x_1013_; 
v___x_1013_ = l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(v_all_991_, v_all_1000_);
if (v___x_1013_ == 0)
{
return v___x_1013_;
}
else
{
uint8_t v___x_1014_; 
v___x_1014_ = l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(v_ctors_992_, v_ctors_1001_);
if (v___x_1014_ == 0)
{
return v___x_1014_;
}
else
{
uint8_t v___x_1015_; 
v___x_1015_ = lean_nat_dec_eq(v_numNested_993_, v_numNested_1002_);
if (v___x_1015_ == 0)
{
return v___x_1015_;
}
else
{
if (v_isRec_1003_ == 0)
{
if (v_isRec_994_ == 0)
{
v___y_1009_ = v___x_1015_;
goto v___jp_1008_;
}
else
{
return v_isRec_1003_;
}
}
else
{
v___y_1009_ = v_isRec_994_;
goto v___jp_1008_;
}
}
}
}
}
}
}
v___jp_1006_:
{
if (v_isReflexive_1005_ == 0)
{
if (v_isReflexive_996_ == 0)
{
return v___y_1007_;
}
else
{
return v_isReflexive_1005_;
}
}
else
{
return v_isReflexive_996_;
}
}
v___jp_1008_:
{
if (v___y_1009_ == 0)
{
return v___y_1009_;
}
else
{
if (v_isUnsafe_1004_ == 0)
{
if (v_isUnsafe_995_ == 0)
{
v___y_1007_ = v___y_1009_;
goto v___jp_1006_;
}
else
{
return v_isUnsafe_1004_;
}
}
else
{
if (v_isUnsafe_995_ == 0)
{
return v_isUnsafe_995_;
}
else
{
v___y_1007_ = v_isUnsafe_995_;
goto v___jp_1006_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqInductiveVal_beq___boxed(lean_object* v_x_1016_, lean_object* v_x_1017_){
_start:
{
uint8_t v_res_1018_; lean_object* v_r_1019_; 
v_res_1018_ = l_Lean_instBEqInductiveVal_beq(v_x_1016_, v_x_1017_);
lean_dec_ref(v_x_1017_);
lean_dec_ref(v_x_1016_);
v_r_1019_ = lean_box(v_res_1018_);
return v_r_1019_;
}
}
LEAN_EXPORT lean_object* lean_mk_inductive_val(lean_object* v_name_1022_, lean_object* v_levelParams_1023_, lean_object* v_type_1024_, lean_object* v_numParams_1025_, lean_object* v_numIndices_1026_, lean_object* v_all_1027_, lean_object* v_ctors_1028_, lean_object* v_numNested_1029_, uint8_t v_isRec_1030_, uint8_t v_isUnsafe_1031_, uint8_t v_isReflexive_1032_){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1033_, 0, v_name_1022_);
lean_ctor_set(v___x_1033_, 1, v_levelParams_1023_);
lean_ctor_set(v___x_1033_, 2, v_type_1024_);
v___x_1034_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
lean_ctor_set(v___x_1034_, 1, v_numParams_1025_);
lean_ctor_set(v___x_1034_, 2, v_numIndices_1026_);
lean_ctor_set(v___x_1034_, 3, v_all_1027_);
lean_ctor_set(v___x_1034_, 4, v_ctors_1028_);
lean_ctor_set(v___x_1034_, 5, v_numNested_1029_);
lean_ctor_set_uint8(v___x_1034_, sizeof(void*)*6, v_isRec_1030_);
lean_ctor_set_uint8(v___x_1034_, sizeof(void*)*6 + 1, v_isUnsafe_1031_);
lean_ctor_set_uint8(v___x_1034_, sizeof(void*)*6 + 2, v_isReflexive_1032_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkInductiveValEx___boxed(lean_object* v_name_1035_, lean_object* v_levelParams_1036_, lean_object* v_type_1037_, lean_object* v_numParams_1038_, lean_object* v_numIndices_1039_, lean_object* v_all_1040_, lean_object* v_ctors_1041_, lean_object* v_numNested_1042_, lean_object* v_isRec_1043_, lean_object* v_isUnsafe_1044_, lean_object* v_isReflexive_1045_){
_start:
{
uint8_t v_isRec_boxed_1046_; uint8_t v_isUnsafe_boxed_1047_; uint8_t v_isReflexive_boxed_1048_; lean_object* v_res_1049_; 
v_isRec_boxed_1046_ = lean_unbox(v_isRec_1043_);
v_isUnsafe_boxed_1047_ = lean_unbox(v_isUnsafe_1044_);
v_isReflexive_boxed_1048_ = lean_unbox(v_isReflexive_1045_);
v_res_1049_ = lean_mk_inductive_val(v_name_1035_, v_levelParams_1036_, v_type_1037_, v_numParams_1038_, v_numIndices_1039_, v_all_1040_, v_ctors_1041_, v_numNested_1042_, v_isRec_boxed_1046_, v_isUnsafe_boxed_1047_, v_isReflexive_boxed_1048_);
return v_res_1049_;
}
}
LEAN_EXPORT uint8_t lean_inductive_val_is_rec(lean_object* v_v_1050_){
_start:
{
uint8_t v_isRec_1051_; 
v_isRec_1051_ = lean_ctor_get_uint8(v_v_1050_, sizeof(void*)*6);
lean_dec_ref(v_v_1050_);
return v_isRec_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_InductiveVal_isRecEx___boxed(lean_object* v_v_1052_){
_start:
{
uint8_t v_res_1053_; lean_object* v_r_1054_; 
v_res_1053_ = lean_inductive_val_is_rec(v_v_1052_);
v_r_1054_ = lean_box(v_res_1053_);
return v_r_1054_;
}
}
LEAN_EXPORT uint8_t lean_inductive_val_is_unsafe(lean_object* v_v_1055_){
_start:
{
uint8_t v_isUnsafe_1056_; 
v_isUnsafe_1056_ = lean_ctor_get_uint8(v_v_1055_, sizeof(void*)*6 + 1);
lean_dec_ref(v_v_1055_);
return v_isUnsafe_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_InductiveVal_isUnsafeEx___boxed(lean_object* v_v_1057_){
_start:
{
uint8_t v_res_1058_; lean_object* v_r_1059_; 
v_res_1058_ = lean_inductive_val_is_unsafe(v_v_1057_);
v_r_1059_ = lean_box(v_res_1058_);
return v_r_1059_;
}
}
LEAN_EXPORT uint8_t lean_inductive_val_is_reflexive(lean_object* v_v_1060_){
_start:
{
uint8_t v_isReflexive_1061_; 
v_isReflexive_1061_ = lean_ctor_get_uint8(v_v_1060_, sizeof(void*)*6 + 2);
lean_dec_ref(v_v_1060_);
return v_isReflexive_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_InductiveVal_isReflexiveEx___boxed(lean_object* v_v_1062_){
_start:
{
uint8_t v_res_1063_; lean_object* v_r_1064_; 
v_res_1063_ = lean_inductive_val_is_reflexive(v_v_1062_);
v_r_1064_ = lean_box(v_res_1063_);
return v_r_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_InductiveVal_numCtors(lean_object* v_v_1065_){
_start:
{
lean_object* v_ctors_1066_; lean_object* v___x_1067_; 
v_ctors_1066_ = lean_ctor_get(v_v_1065_, 4);
v___x_1067_ = l_List_lengthTR___redArg(v_ctors_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_InductiveVal_numCtors___boxed(lean_object* v_v_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lean_InductiveVal_numCtors(v_v_1068_);
lean_dec_ref(v_v_1068_);
return v_res_1069_;
}
}
LEAN_EXPORT uint8_t l_Lean_InductiveVal_isNested(lean_object* v_v_1070_){
_start:
{
lean_object* v_numNested_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v_numNested_1071_ = lean_ctor_get(v_v_1070_, 5);
v___x_1072_ = lean_unsigned_to_nat(0u);
v___x_1073_ = lean_nat_dec_lt(v___x_1072_, v_numNested_1071_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_InductiveVal_isNested___boxed(lean_object* v_v_1074_){
_start:
{
uint8_t v_res_1075_; lean_object* v_r_1076_; 
v_res_1075_ = l_Lean_InductiveVal_isNested(v_v_1074_);
lean_dec_ref(v_v_1074_);
v_r_1076_ = lean_box(v_res_1075_);
return v_r_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_InductiveVal_numTypeFormers(lean_object* v_v_1077_){
_start:
{
lean_object* v_all_1078_; lean_object* v_numNested_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v_all_1078_ = lean_ctor_get(v_v_1077_, 3);
v_numNested_1079_ = lean_ctor_get(v_v_1077_, 5);
v___x_1080_ = l_List_lengthTR___redArg(v_all_1078_);
v___x_1081_ = lean_nat_add(v___x_1080_, v_numNested_1079_);
lean_dec(v___x_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_InductiveVal_numTypeFormers___boxed(lean_object* v_v_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lean_InductiveVal_numTypeFormers(v_v_1082_);
lean_dec_ref(v_v_1082_);
return v_res_1083_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstructorVal_default___closed__0(void){
_start:
{
uint8_t v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1084_ = 0;
v___x_1085_ = lean_unsigned_to_nat(0u);
v___x_1086_ = lean_obj_once(&l_Lean_instInhabitedConstantVal_default___closed__0, &l_Lean_instInhabitedConstantVal_default___closed__0_once, _init_l_Lean_instInhabitedConstantVal_default___closed__0);
v___x_1087_ = l_Lean_instInhabitedConstantVal_default;
v___x_1088_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
lean_ctor_set(v___x_1088_, 1, v___x_1086_);
lean_ctor_set(v___x_1088_, 2, v___x_1085_);
lean_ctor_set(v___x_1088_, 3, v___x_1085_);
lean_ctor_set(v___x_1088_, 4, v___x_1085_);
lean_ctor_set_uint8(v___x_1088_, sizeof(void*)*5, v___x_1084_);
return v___x_1088_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstructorVal_default(void){
_start:
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_obj_once(&l_Lean_instInhabitedConstructorVal_default___closed__0, &l_Lean_instInhabitedConstructorVal_default___closed__0_once, _init_l_Lean_instInhabitedConstructorVal_default___closed__0);
return v___x_1089_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstructorVal(void){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = l_Lean_instInhabitedConstructorVal_default;
return v___x_1090_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqConstructorVal_beq(lean_object* v_x_1091_, lean_object* v_x_1092_){
_start:
{
lean_object* v_toConstantVal_1093_; lean_object* v_induct_1094_; lean_object* v_cidx_1095_; lean_object* v_numParams_1096_; lean_object* v_numFields_1097_; uint8_t v_isUnsafe_1098_; lean_object* v_toConstantVal_1099_; lean_object* v_induct_1100_; lean_object* v_cidx_1101_; lean_object* v_numParams_1102_; lean_object* v_numFields_1103_; uint8_t v_isUnsafe_1104_; uint8_t v___x_1105_; 
v_toConstantVal_1093_ = lean_ctor_get(v_x_1091_, 0);
v_induct_1094_ = lean_ctor_get(v_x_1091_, 1);
v_cidx_1095_ = lean_ctor_get(v_x_1091_, 2);
v_numParams_1096_ = lean_ctor_get(v_x_1091_, 3);
v_numFields_1097_ = lean_ctor_get(v_x_1091_, 4);
v_isUnsafe_1098_ = lean_ctor_get_uint8(v_x_1091_, sizeof(void*)*5);
v_toConstantVal_1099_ = lean_ctor_get(v_x_1092_, 0);
v_induct_1100_ = lean_ctor_get(v_x_1092_, 1);
v_cidx_1101_ = lean_ctor_get(v_x_1092_, 2);
v_numParams_1102_ = lean_ctor_get(v_x_1092_, 3);
v_numFields_1103_ = lean_ctor_get(v_x_1092_, 4);
v_isUnsafe_1104_ = lean_ctor_get_uint8(v_x_1092_, sizeof(void*)*5);
v___x_1105_ = l_Lean_instBEqConstantVal_beq(v_toConstantVal_1093_, v_toConstantVal_1099_);
if (v___x_1105_ == 0)
{
return v___x_1105_;
}
else
{
uint8_t v___x_1106_; 
v___x_1106_ = lean_name_eq(v_induct_1094_, v_induct_1100_);
if (v___x_1106_ == 0)
{
return v___x_1106_;
}
else
{
uint8_t v___x_1107_; 
v___x_1107_ = lean_nat_dec_eq(v_cidx_1095_, v_cidx_1101_);
if (v___x_1107_ == 0)
{
return v___x_1107_;
}
else
{
uint8_t v___x_1108_; 
v___x_1108_ = lean_nat_dec_eq(v_numParams_1096_, v_numParams_1102_);
if (v___x_1108_ == 0)
{
return v___x_1108_;
}
else
{
uint8_t v___x_1109_; 
v___x_1109_ = lean_nat_dec_eq(v_numFields_1097_, v_numFields_1103_);
if (v___x_1109_ == 0)
{
return v___x_1109_;
}
else
{
if (v_isUnsafe_1104_ == 0)
{
if (v_isUnsafe_1098_ == 0)
{
return v___x_1109_;
}
else
{
return v_isUnsafe_1104_;
}
}
else
{
return v_isUnsafe_1098_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqConstructorVal_beq___boxed(lean_object* v_x_1110_, lean_object* v_x_1111_){
_start:
{
uint8_t v_res_1112_; lean_object* v_r_1113_; 
v_res_1112_ = l_Lean_instBEqConstructorVal_beq(v_x_1110_, v_x_1111_);
lean_dec_ref(v_x_1111_);
lean_dec_ref(v_x_1110_);
v_r_1113_ = lean_box(v_res_1112_);
return v_r_1113_;
}
}
LEAN_EXPORT lean_object* lean_mk_constructor_val(lean_object* v_name_1116_, lean_object* v_levelParams_1117_, lean_object* v_type_1118_, lean_object* v_induct_1119_, lean_object* v_cidx_1120_, lean_object* v_numParams_1121_, lean_object* v_numFields_1122_, uint8_t v_isUnsafe_1123_){
_start:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1124_, 0, v_name_1116_);
lean_ctor_set(v___x_1124_, 1, v_levelParams_1117_);
lean_ctor_set(v___x_1124_, 2, v_type_1118_);
v___x_1125_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1125_, 0, v___x_1124_);
lean_ctor_set(v___x_1125_, 1, v_induct_1119_);
lean_ctor_set(v___x_1125_, 2, v_cidx_1120_);
lean_ctor_set(v___x_1125_, 3, v_numParams_1121_);
lean_ctor_set(v___x_1125_, 4, v_numFields_1122_);
lean_ctor_set_uint8(v___x_1125_, sizeof(void*)*5, v_isUnsafe_1123_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstructorValEx___boxed(lean_object* v_name_1126_, lean_object* v_levelParams_1127_, lean_object* v_type_1128_, lean_object* v_induct_1129_, lean_object* v_cidx_1130_, lean_object* v_numParams_1131_, lean_object* v_numFields_1132_, lean_object* v_isUnsafe_1133_){
_start:
{
uint8_t v_isUnsafe_boxed_1134_; lean_object* v_res_1135_; 
v_isUnsafe_boxed_1134_ = lean_unbox(v_isUnsafe_1133_);
v_res_1135_ = lean_mk_constructor_val(v_name_1126_, v_levelParams_1127_, v_type_1128_, v_induct_1129_, v_cidx_1130_, v_numParams_1131_, v_numFields_1132_, v_isUnsafe_boxed_1134_);
return v_res_1135_;
}
}
LEAN_EXPORT uint8_t lean_constructor_val_is_unsafe(lean_object* v_v_1136_){
_start:
{
uint8_t v_isUnsafe_1137_; 
v_isUnsafe_1137_ = lean_ctor_get_uint8(v_v_1136_, sizeof(void*)*5);
lean_dec_ref(v_v_1136_);
return v_isUnsafe_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstructorVal_isUnsafeEx___boxed(lean_object* v_v_1138_){
_start:
{
uint8_t v_res_1139_; lean_object* v_r_1140_; 
v_res_1139_ = lean_constructor_val_is_unsafe(v_v_1138_);
v_r_1140_ = lean_box(v_res_1139_);
return v_r_1140_;
}
}
static lean_object* _init_l_Lean_instInhabitedRecursorRule_default___closed__0(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1141_ = lean_obj_once(&l_Lean_instInhabitedConstructor_default___closed__0, &l_Lean_instInhabitedConstructor_default___closed__0_once, _init_l_Lean_instInhabitedConstructor_default___closed__0);
v___x_1142_ = lean_unsigned_to_nat(0u);
v___x_1143_ = lean_obj_once(&l_Lean_instInhabitedConstantVal_default___closed__0, &l_Lean_instInhabitedConstantVal_default___closed__0_once, _init_l_Lean_instInhabitedConstantVal_default___closed__0);
v___x_1144_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
lean_ctor_set(v___x_1144_, 1, v___x_1142_);
lean_ctor_set(v___x_1144_, 2, v___x_1141_);
return v___x_1144_;
}
}
static lean_object* _init_l_Lean_instInhabitedRecursorRule_default(void){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_obj_once(&l_Lean_instInhabitedRecursorRule_default___closed__0, &l_Lean_instInhabitedRecursorRule_default___closed__0_once, _init_l_Lean_instInhabitedRecursorRule_default___closed__0);
return v___x_1145_;
}
}
static lean_object* _init_l_Lean_instInhabitedRecursorRule(void){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Lean_instInhabitedRecursorRule_default;
return v___x_1146_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqRecursorRule_beq(lean_object* v_x_1147_, lean_object* v_x_1148_){
_start:
{
lean_object* v_ctor_1149_; lean_object* v_nfields_1150_; lean_object* v_rhs_1151_; lean_object* v_ctor_1152_; lean_object* v_nfields_1153_; lean_object* v_rhs_1154_; uint8_t v___x_1155_; 
v_ctor_1149_ = lean_ctor_get(v_x_1147_, 0);
v_nfields_1150_ = lean_ctor_get(v_x_1147_, 1);
v_rhs_1151_ = lean_ctor_get(v_x_1147_, 2);
v_ctor_1152_ = lean_ctor_get(v_x_1148_, 0);
v_nfields_1153_ = lean_ctor_get(v_x_1148_, 1);
v_rhs_1154_ = lean_ctor_get(v_x_1148_, 2);
v___x_1155_ = lean_name_eq(v_ctor_1149_, v_ctor_1152_);
if (v___x_1155_ == 0)
{
return v___x_1155_;
}
else
{
uint8_t v___x_1156_; 
v___x_1156_ = lean_nat_dec_eq(v_nfields_1150_, v_nfields_1153_);
if (v___x_1156_ == 0)
{
return v___x_1156_;
}
else
{
uint8_t v___x_1157_; 
v___x_1157_ = lean_expr_eqv(v_rhs_1151_, v_rhs_1154_);
return v___x_1157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqRecursorRule_beq___boxed(lean_object* v_x_1158_, lean_object* v_x_1159_){
_start:
{
uint8_t v_res_1160_; lean_object* v_r_1161_; 
v_res_1160_ = l_Lean_instBEqRecursorRule_beq(v_x_1158_, v_x_1159_);
lean_dec_ref(v_x_1159_);
lean_dec_ref(v_x_1158_);
v_r_1161_ = lean_box(v_res_1160_);
return v_r_1161_;
}
}
static lean_object* _init_l_Lean_instInhabitedRecursorVal_default___closed__0(void){
_start:
{
uint8_t v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1164_ = 0;
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = lean_box(0);
v___x_1167_ = l_Lean_instInhabitedConstantVal_default;
v___x_1168_ = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
lean_ctor_set(v___x_1168_, 1, v___x_1166_);
lean_ctor_set(v___x_1168_, 2, v___x_1165_);
lean_ctor_set(v___x_1168_, 3, v___x_1165_);
lean_ctor_set(v___x_1168_, 4, v___x_1165_);
lean_ctor_set(v___x_1168_, 5, v___x_1165_);
lean_ctor_set(v___x_1168_, 6, v___x_1166_);
lean_ctor_set_uint8(v___x_1168_, sizeof(void*)*7, v___x_1164_);
lean_ctor_set_uint8(v___x_1168_, sizeof(void*)*7 + 1, v___x_1164_);
return v___x_1168_;
}
}
static lean_object* _init_l_Lean_instInhabitedRecursorVal_default(void){
_start:
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_obj_once(&l_Lean_instInhabitedRecursorVal_default___closed__0, &l_Lean_instInhabitedRecursorVal_default___closed__0_once, _init_l_Lean_instInhabitedRecursorVal_default___closed__0);
return v___x_1169_;
}
}
static lean_object* _init_l_Lean_instInhabitedRecursorVal(void){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Lean_instInhabitedRecursorVal_default;
return v___x_1170_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_instBEqRecursorVal_beq_spec__0(lean_object* v_x_1171_, lean_object* v_x_1172_){
_start:
{
if (lean_obj_tag(v_x_1171_) == 0)
{
if (lean_obj_tag(v_x_1172_) == 0)
{
uint8_t v___x_1173_; 
v___x_1173_ = 1;
return v___x_1173_;
}
else
{
uint8_t v___x_1174_; 
v___x_1174_ = 0;
return v___x_1174_;
}
}
else
{
if (lean_obj_tag(v_x_1172_) == 0)
{
uint8_t v___x_1175_; 
v___x_1175_ = 0;
return v___x_1175_;
}
else
{
lean_object* v_head_1176_; lean_object* v_tail_1177_; lean_object* v_head_1178_; lean_object* v_tail_1179_; uint8_t v___x_1180_; 
v_head_1176_ = lean_ctor_get(v_x_1171_, 0);
v_tail_1177_ = lean_ctor_get(v_x_1171_, 1);
v_head_1178_ = lean_ctor_get(v_x_1172_, 0);
v_tail_1179_ = lean_ctor_get(v_x_1172_, 1);
v___x_1180_ = l_Lean_instBEqRecursorRule_beq(v_head_1176_, v_head_1178_);
if (v___x_1180_ == 0)
{
return v___x_1180_;
}
else
{
v_x_1171_ = v_tail_1177_;
v_x_1172_ = v_tail_1179_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_instBEqRecursorVal_beq_spec__0___boxed(lean_object* v_x_1182_, lean_object* v_x_1183_){
_start:
{
uint8_t v_res_1184_; lean_object* v_r_1185_; 
v_res_1184_ = l_List_beq___at___00Lean_instBEqRecursorVal_beq_spec__0(v_x_1182_, v_x_1183_);
lean_dec(v_x_1183_);
lean_dec(v_x_1182_);
v_r_1185_ = lean_box(v_res_1184_);
return v_r_1185_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqRecursorVal_beq(lean_object* v_x_1186_, lean_object* v_x_1187_){
_start:
{
lean_object* v_toConstantVal_1188_; lean_object* v_all_1189_; lean_object* v_numParams_1190_; lean_object* v_numIndices_1191_; lean_object* v_numMotives_1192_; lean_object* v_numMinors_1193_; lean_object* v_rules_1194_; uint8_t v_k_1195_; uint8_t v_isUnsafe_1196_; lean_object* v_toConstantVal_1197_; lean_object* v_all_1198_; lean_object* v_numParams_1199_; lean_object* v_numIndices_1200_; lean_object* v_numMotives_1201_; lean_object* v_numMinors_1202_; lean_object* v_rules_1203_; uint8_t v_k_1204_; uint8_t v_isUnsafe_1205_; uint8_t v___y_1207_; uint8_t v___x_1208_; 
v_toConstantVal_1188_ = lean_ctor_get(v_x_1186_, 0);
v_all_1189_ = lean_ctor_get(v_x_1186_, 1);
v_numParams_1190_ = lean_ctor_get(v_x_1186_, 2);
v_numIndices_1191_ = lean_ctor_get(v_x_1186_, 3);
v_numMotives_1192_ = lean_ctor_get(v_x_1186_, 4);
v_numMinors_1193_ = lean_ctor_get(v_x_1186_, 5);
v_rules_1194_ = lean_ctor_get(v_x_1186_, 6);
v_k_1195_ = lean_ctor_get_uint8(v_x_1186_, sizeof(void*)*7);
v_isUnsafe_1196_ = lean_ctor_get_uint8(v_x_1186_, sizeof(void*)*7 + 1);
v_toConstantVal_1197_ = lean_ctor_get(v_x_1187_, 0);
v_all_1198_ = lean_ctor_get(v_x_1187_, 1);
v_numParams_1199_ = lean_ctor_get(v_x_1187_, 2);
v_numIndices_1200_ = lean_ctor_get(v_x_1187_, 3);
v_numMotives_1201_ = lean_ctor_get(v_x_1187_, 4);
v_numMinors_1202_ = lean_ctor_get(v_x_1187_, 5);
v_rules_1203_ = lean_ctor_get(v_x_1187_, 6);
v_k_1204_ = lean_ctor_get_uint8(v_x_1187_, sizeof(void*)*7);
v_isUnsafe_1205_ = lean_ctor_get_uint8(v_x_1187_, sizeof(void*)*7 + 1);
v___x_1208_ = l_Lean_instBEqConstantVal_beq(v_toConstantVal_1188_, v_toConstantVal_1197_);
if (v___x_1208_ == 0)
{
return v___x_1208_;
}
else
{
uint8_t v___x_1209_; 
v___x_1209_ = l_List_beq___at___00Lean_instBEqConstantVal_beq_spec__0(v_all_1189_, v_all_1198_);
if (v___x_1209_ == 0)
{
return v___x_1209_;
}
else
{
uint8_t v___x_1210_; 
v___x_1210_ = lean_nat_dec_eq(v_numParams_1190_, v_numParams_1199_);
if (v___x_1210_ == 0)
{
return v___x_1210_;
}
else
{
uint8_t v___x_1211_; 
v___x_1211_ = lean_nat_dec_eq(v_numIndices_1191_, v_numIndices_1200_);
if (v___x_1211_ == 0)
{
return v___x_1211_;
}
else
{
uint8_t v___x_1212_; 
v___x_1212_ = lean_nat_dec_eq(v_numMotives_1192_, v_numMotives_1201_);
if (v___x_1212_ == 0)
{
return v___x_1212_;
}
else
{
uint8_t v___x_1213_; 
v___x_1213_ = lean_nat_dec_eq(v_numMinors_1193_, v_numMinors_1202_);
if (v___x_1213_ == 0)
{
return v___x_1213_;
}
else
{
uint8_t v___x_1214_; 
v___x_1214_ = l_List_beq___at___00Lean_instBEqRecursorVal_beq_spec__0(v_rules_1194_, v_rules_1203_);
if (v___x_1214_ == 0)
{
return v___x_1214_;
}
else
{
if (v_k_1204_ == 0)
{
if (v_k_1195_ == 0)
{
v___y_1207_ = v___x_1214_;
goto v___jp_1206_;
}
else
{
return v_k_1204_;
}
}
else
{
v___y_1207_ = v_k_1195_;
goto v___jp_1206_;
}
}
}
}
}
}
}
}
v___jp_1206_:
{
if (v___y_1207_ == 0)
{
return v___y_1207_;
}
else
{
if (v_isUnsafe_1205_ == 0)
{
if (v_isUnsafe_1196_ == 0)
{
return v___y_1207_;
}
else
{
return v_isUnsafe_1205_;
}
}
else
{
return v_isUnsafe_1196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqRecursorVal_beq___boxed(lean_object* v_x_1215_, lean_object* v_x_1216_){
_start:
{
uint8_t v_res_1217_; lean_object* v_r_1218_; 
v_res_1217_ = l_Lean_instBEqRecursorVal_beq(v_x_1215_, v_x_1216_);
lean_dec_ref(v_x_1216_);
lean_dec_ref(v_x_1215_);
v_r_1218_ = lean_box(v_res_1217_);
return v_r_1218_;
}
}
LEAN_EXPORT lean_object* lean_mk_recursor_val(lean_object* v_name_1221_, lean_object* v_levelParams_1222_, lean_object* v_type_1223_, lean_object* v_all_1224_, lean_object* v_numParams_1225_, lean_object* v_numIndices_1226_, lean_object* v_numMotives_1227_, lean_object* v_numMinors_1228_, lean_object* v_rules_1229_, uint8_t v_k_1230_, uint8_t v_isUnsafe_1231_){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1232_, 0, v_name_1221_);
lean_ctor_set(v___x_1232_, 1, v_levelParams_1222_);
lean_ctor_set(v___x_1232_, 2, v_type_1223_);
v___x_1233_ = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(v___x_1233_, 0, v___x_1232_);
lean_ctor_set(v___x_1233_, 1, v_all_1224_);
lean_ctor_set(v___x_1233_, 2, v_numParams_1225_);
lean_ctor_set(v___x_1233_, 3, v_numIndices_1226_);
lean_ctor_set(v___x_1233_, 4, v_numMotives_1227_);
lean_ctor_set(v___x_1233_, 5, v_numMinors_1228_);
lean_ctor_set(v___x_1233_, 6, v_rules_1229_);
lean_ctor_set_uint8(v___x_1233_, sizeof(void*)*7, v_k_1230_);
lean_ctor_set_uint8(v___x_1233_, sizeof(void*)*7 + 1, v_isUnsafe_1231_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkRecursorValEx___boxed(lean_object* v_name_1234_, lean_object* v_levelParams_1235_, lean_object* v_type_1236_, lean_object* v_all_1237_, lean_object* v_numParams_1238_, lean_object* v_numIndices_1239_, lean_object* v_numMotives_1240_, lean_object* v_numMinors_1241_, lean_object* v_rules_1242_, lean_object* v_k_1243_, lean_object* v_isUnsafe_1244_){
_start:
{
uint8_t v_k_boxed_1245_; uint8_t v_isUnsafe_boxed_1246_; lean_object* v_res_1247_; 
v_k_boxed_1245_ = lean_unbox(v_k_1243_);
v_isUnsafe_boxed_1246_ = lean_unbox(v_isUnsafe_1244_);
v_res_1247_ = lean_mk_recursor_val(v_name_1234_, v_levelParams_1235_, v_type_1236_, v_all_1237_, v_numParams_1238_, v_numIndices_1239_, v_numMotives_1240_, v_numMinors_1241_, v_rules_1242_, v_k_boxed_1245_, v_isUnsafe_boxed_1246_);
return v_res_1247_;
}
}
LEAN_EXPORT uint8_t lean_recursor_k(lean_object* v_v_1248_){
_start:
{
uint8_t v_k_1249_; 
v_k_1249_ = lean_ctor_get_uint8(v_v_1248_, sizeof(void*)*7);
lean_dec_ref(v_v_1248_);
return v_k_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_RecursorVal_kEx___boxed(lean_object* v_v_1250_){
_start:
{
uint8_t v_res_1251_; lean_object* v_r_1252_; 
v_res_1251_ = lean_recursor_k(v_v_1250_);
v_r_1252_ = lean_box(v_res_1251_);
return v_r_1252_;
}
}
LEAN_EXPORT uint8_t lean_recursor_is_unsafe(lean_object* v_v_1253_){
_start:
{
uint8_t v_isUnsafe_1254_; 
v_isUnsafe_1254_ = lean_ctor_get_uint8(v_v_1253_, sizeof(void*)*7 + 1);
lean_dec_ref(v_v_1253_);
return v_isUnsafe_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_RecursorVal_isUnsafeEx___boxed(lean_object* v_v_1255_){
_start:
{
uint8_t v_res_1256_; lean_object* v_r_1257_; 
v_res_1256_ = lean_recursor_is_unsafe(v_v_1255_);
v_r_1257_ = lean_box(v_res_1256_);
return v_r_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getMajorIdx(lean_object* v_v_1258_){
_start:
{
lean_object* v_numParams_1259_; lean_object* v_numIndices_1260_; lean_object* v_numMotives_1261_; lean_object* v_numMinors_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v_numParams_1259_ = lean_ctor_get(v_v_1258_, 2);
v_numIndices_1260_ = lean_ctor_get(v_v_1258_, 3);
v_numMotives_1261_ = lean_ctor_get(v_v_1258_, 4);
v_numMinors_1262_ = lean_ctor_get(v_v_1258_, 5);
v___x_1263_ = lean_nat_add(v_numParams_1259_, v_numMotives_1261_);
v___x_1264_ = lean_nat_add(v___x_1263_, v_numMinors_1262_);
lean_dec(v___x_1263_);
v___x_1265_ = lean_nat_add(v___x_1264_, v_numIndices_1260_);
lean_dec(v___x_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getMajorIdx___boxed(lean_object* v_v_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Lean_RecursorVal_getMajorIdx(v_v_1266_);
lean_dec_ref(v_v_1266_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getFirstIndexIdx(lean_object* v_v_1268_){
_start:
{
lean_object* v_numParams_1269_; lean_object* v_numMotives_1270_; lean_object* v_numMinors_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_numParams_1269_ = lean_ctor_get(v_v_1268_, 2);
v_numMotives_1270_ = lean_ctor_get(v_v_1268_, 4);
v_numMinors_1271_ = lean_ctor_get(v_v_1268_, 5);
v___x_1272_ = lean_nat_add(v_numParams_1269_, v_numMotives_1270_);
v___x_1273_ = lean_nat_add(v___x_1272_, v_numMinors_1271_);
lean_dec(v___x_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getFirstIndexIdx___boxed(lean_object* v_v_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Lean_RecursorVal_getFirstIndexIdx(v_v_1274_);
lean_dec_ref(v_v_1274_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getFirstMinorIdx(lean_object* v_v_1276_){
_start:
{
lean_object* v_numParams_1277_; lean_object* v_numMotives_1278_; lean_object* v___x_1279_; 
v_numParams_1277_ = lean_ctor_get(v_v_1276_, 2);
v_numMotives_1278_ = lean_ctor_get(v_v_1276_, 4);
v___x_1279_ = lean_nat_add(v_numParams_1277_, v_numMotives_1278_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getFirstMinorIdx___boxed(lean_object* v_v_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lean_RecursorVal_getFirstMinorIdx(v_v_1280_);
lean_dec_ref(v_v_1280_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Declaration_0__Lean_RecursorVal_getMajorInduct_go(lean_object* v_x_1282_, lean_object* v_x_1283_){
_start:
{
lean_object* v_zero_1284_; uint8_t v_isZero_1285_; 
v_zero_1284_ = lean_unsigned_to_nat(0u);
v_isZero_1285_ = lean_nat_dec_eq(v_x_1282_, v_zero_1284_);
if (v_isZero_1285_ == 1)
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
lean_dec(v_x_1282_);
v___x_1286_ = l_Lean_Expr_bindingDomain_x21(v_x_1283_);
lean_dec_ref(v_x_1283_);
v___x_1287_ = l_Lean_Expr_getAppFn(v___x_1286_);
lean_dec_ref(v___x_1286_);
v___x_1288_ = l_Lean_Expr_constName_x21(v___x_1287_);
lean_dec_ref(v___x_1287_);
return v___x_1288_;
}
else
{
lean_object* v_one_1289_; lean_object* v_n_1290_; lean_object* v___x_1291_; 
v_one_1289_ = lean_unsigned_to_nat(1u);
v_n_1290_ = lean_nat_sub(v_x_1282_, v_one_1289_);
lean_dec(v_x_1282_);
v___x_1291_ = l_Lean_Expr_bindingBody_x21(v_x_1283_);
lean_dec_ref(v_x_1283_);
v_x_1282_ = v_n_1290_;
v_x_1283_ = v___x_1291_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_RecursorVal_getMajorInduct(lean_object* v_v_1293_){
_start:
{
lean_object* v_toConstantVal_1294_; lean_object* v_type_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v_toConstantVal_1294_ = lean_ctor_get(v_v_1293_, 0);
v_type_1295_ = lean_ctor_get(v_toConstantVal_1294_, 2);
lean_inc_ref(v_type_1295_);
v___x_1296_ = l_Lean_RecursorVal_getMajorIdx(v_v_1293_);
lean_dec_ref(v_v_1293_);
v___x_1297_ = l___private_Lean_Declaration_0__Lean_RecursorVal_getMajorInduct_go(v___x_1296_, v_type_1295_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorIdx(uint8_t v_x_1298_){
_start:
{
switch(v_x_1298_)
{
case 0:
{
lean_object* v___x_1299_; 
v___x_1299_ = lean_unsigned_to_nat(0u);
return v___x_1299_;
}
case 1:
{
lean_object* v___x_1300_; 
v___x_1300_ = lean_unsigned_to_nat(1u);
return v___x_1300_;
}
case 2:
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_unsigned_to_nat(2u);
return v___x_1301_;
}
default: 
{
lean_object* v___x_1302_; 
v___x_1302_ = lean_unsigned_to_nat(3u);
return v___x_1302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorIdx___boxed(lean_object* v_x_1303_){
_start:
{
uint8_t v_x_boxed_1304_; lean_object* v_res_1305_; 
v_x_boxed_1304_ = lean_unbox(v_x_1303_);
v_res_1305_ = l_Lean_QuotKind_ctorIdx(v_x_boxed_1304_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorElim___redArg(lean_object* v_k_1306_){
_start:
{
lean_inc(v_k_1306_);
return v_k_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorElim___redArg___boxed(lean_object* v_k_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lean_QuotKind_ctorElim___redArg(v_k_1307_);
lean_dec(v_k_1307_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorElim(lean_object* v_motive_1309_, lean_object* v_ctorIdx_1310_, uint8_t v_t_1311_, lean_object* v_h_1312_, lean_object* v_k_1313_){
_start:
{
lean_inc(v_k_1313_);
return v_k_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctorElim___boxed(lean_object* v_motive_1314_, lean_object* v_ctorIdx_1315_, lean_object* v_t_1316_, lean_object* v_h_1317_, lean_object* v_k_1318_){
_start:
{
uint8_t v_t_boxed_1319_; lean_object* v_res_1320_; 
v_t_boxed_1319_ = lean_unbox(v_t_1316_);
v_res_1320_ = l_Lean_QuotKind_ctorElim(v_motive_1314_, v_ctorIdx_1315_, v_t_boxed_1319_, v_h_1317_, v_k_1318_);
lean_dec(v_k_1318_);
lean_dec(v_ctorIdx_1315_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_type_elim___redArg(lean_object* v_type_1321_){
_start:
{
lean_inc(v_type_1321_);
return v_type_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_type_elim___redArg___boxed(lean_object* v_type_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lean_QuotKind_type_elim___redArg(v_type_1322_);
lean_dec(v_type_1322_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_type_elim(lean_object* v_motive_1324_, uint8_t v_t_1325_, lean_object* v_h_1326_, lean_object* v_type_1327_){
_start:
{
lean_inc(v_type_1327_);
return v_type_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_type_elim___boxed(lean_object* v_motive_1328_, lean_object* v_t_1329_, lean_object* v_h_1330_, lean_object* v_type_1331_){
_start:
{
uint8_t v_t_boxed_1332_; lean_object* v_res_1333_; 
v_t_boxed_1332_ = lean_unbox(v_t_1329_);
v_res_1333_ = l_Lean_QuotKind_type_elim(v_motive_1328_, v_t_boxed_1332_, v_h_1330_, v_type_1331_);
lean_dec(v_type_1331_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctor_elim___redArg(lean_object* v_ctor_1334_){
_start:
{
lean_inc(v_ctor_1334_);
return v_ctor_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctor_elim___redArg___boxed(lean_object* v_ctor_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Lean_QuotKind_ctor_elim___redArg(v_ctor_1335_);
lean_dec(v_ctor_1335_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctor_elim(lean_object* v_motive_1337_, uint8_t v_t_1338_, lean_object* v_h_1339_, lean_object* v_ctor_1340_){
_start:
{
lean_inc(v_ctor_1340_);
return v_ctor_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ctor_elim___boxed(lean_object* v_motive_1341_, lean_object* v_t_1342_, lean_object* v_h_1343_, lean_object* v_ctor_1344_){
_start:
{
uint8_t v_t_boxed_1345_; lean_object* v_res_1346_; 
v_t_boxed_1345_ = lean_unbox(v_t_1342_);
v_res_1346_ = l_Lean_QuotKind_ctor_elim(v_motive_1341_, v_t_boxed_1345_, v_h_1343_, v_ctor_1344_);
lean_dec(v_ctor_1344_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_lift_elim___redArg(lean_object* v_lift_1347_){
_start:
{
lean_inc(v_lift_1347_);
return v_lift_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_lift_elim___redArg___boxed(lean_object* v_lift_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_Lean_QuotKind_lift_elim___redArg(v_lift_1348_);
lean_dec(v_lift_1348_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_lift_elim(lean_object* v_motive_1350_, uint8_t v_t_1351_, lean_object* v_h_1352_, lean_object* v_lift_1353_){
_start:
{
lean_inc(v_lift_1353_);
return v_lift_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_lift_elim___boxed(lean_object* v_motive_1354_, lean_object* v_t_1355_, lean_object* v_h_1356_, lean_object* v_lift_1357_){
_start:
{
uint8_t v_t_boxed_1358_; lean_object* v_res_1359_; 
v_t_boxed_1358_ = lean_unbox(v_t_1355_);
v_res_1359_ = l_Lean_QuotKind_lift_elim(v_motive_1354_, v_t_boxed_1358_, v_h_1356_, v_lift_1357_);
lean_dec(v_lift_1357_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ind_elim___redArg(lean_object* v_ind_1360_){
_start:
{
lean_inc(v_ind_1360_);
return v_ind_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ind_elim___redArg___boxed(lean_object* v_ind_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lean_QuotKind_ind_elim___redArg(v_ind_1361_);
lean_dec(v_ind_1361_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ind_elim(lean_object* v_motive_1363_, uint8_t v_t_1364_, lean_object* v_h_1365_, lean_object* v_ind_1366_){
_start:
{
lean_inc(v_ind_1366_);
return v_ind_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotKind_ind_elim___boxed(lean_object* v_motive_1367_, lean_object* v_t_1368_, lean_object* v_h_1369_, lean_object* v_ind_1370_){
_start:
{
uint8_t v_t_boxed_1371_; lean_object* v_res_1372_; 
v_t_boxed_1371_ = lean_unbox(v_t_1368_);
v_res_1372_ = l_Lean_QuotKind_ind_elim(v_motive_1367_, v_t_boxed_1371_, v_h_1369_, v_ind_1370_);
lean_dec(v_ind_1370_);
return v_res_1372_;
}
}
static uint8_t _init_l_Lean_instInhabitedQuotKind_default(void){
_start:
{
uint8_t v___x_1373_; 
v___x_1373_ = 0;
return v___x_1373_;
}
}
static uint8_t _init_l_Lean_instInhabitedQuotKind(void){
_start:
{
uint8_t v___x_1374_; 
v___x_1374_ = 0;
return v___x_1374_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqQuotKind_beq(uint8_t v_x_1375_, uint8_t v_y_1376_){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1377_ = l_Lean_QuotKind_ctorIdx(v_x_1375_);
v___x_1378_ = l_Lean_QuotKind_ctorIdx(v_y_1376_);
v___x_1379_ = lean_nat_dec_eq(v___x_1377_, v___x_1378_);
lean_dec(v___x_1378_);
lean_dec(v___x_1377_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqQuotKind_beq___boxed(lean_object* v_x_1380_, lean_object* v_y_1381_){
_start:
{
uint8_t v_x_21__boxed_1382_; uint8_t v_y_22__boxed_1383_; uint8_t v_res_1384_; lean_object* v_r_1385_; 
v_x_21__boxed_1382_ = lean_unbox(v_x_1380_);
v_y_22__boxed_1383_ = lean_unbox(v_y_1381_);
v_res_1384_ = l_Lean_instBEqQuotKind_beq(v_x_21__boxed_1382_, v_y_22__boxed_1383_);
v_r_1385_ = lean_box(v_res_1384_);
return v_r_1385_;
}
}
static lean_object* _init_l_Lean_instInhabitedQuotVal_default___closed__0(void){
_start:
{
uint8_t v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1388_ = 0;
v___x_1389_ = l_Lean_instInhabitedConstantVal_default;
v___x_1390_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
lean_ctor_set_uint8(v___x_1390_, sizeof(void*)*1, v___x_1388_);
return v___x_1390_;
}
}
static lean_object* _init_l_Lean_instInhabitedQuotVal_default(void){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = lean_obj_once(&l_Lean_instInhabitedQuotVal_default___closed__0, &l_Lean_instInhabitedQuotVal_default___closed__0_once, _init_l_Lean_instInhabitedQuotVal_default___closed__0);
return v___x_1391_;
}
}
static lean_object* _init_l_Lean_instInhabitedQuotVal(void){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = l_Lean_instInhabitedQuotVal_default;
return v___x_1392_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqQuotVal_beq(lean_object* v_x_1393_, lean_object* v_x_1394_){
_start:
{
lean_object* v_toConstantVal_1395_; uint8_t v_kind_1396_; lean_object* v_toConstantVal_1397_; uint8_t v_kind_1398_; uint8_t v___x_1399_; 
v_toConstantVal_1395_ = lean_ctor_get(v_x_1393_, 0);
v_kind_1396_ = lean_ctor_get_uint8(v_x_1393_, sizeof(void*)*1);
v_toConstantVal_1397_ = lean_ctor_get(v_x_1394_, 0);
v_kind_1398_ = lean_ctor_get_uint8(v_x_1394_, sizeof(void*)*1);
v___x_1399_ = l_Lean_instBEqConstantVal_beq(v_toConstantVal_1395_, v_toConstantVal_1397_);
if (v___x_1399_ == 0)
{
return v___x_1399_;
}
else
{
uint8_t v___x_1400_; 
v___x_1400_ = l_Lean_instBEqQuotKind_beq(v_kind_1396_, v_kind_1398_);
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqQuotVal_beq___boxed(lean_object* v_x_1401_, lean_object* v_x_1402_){
_start:
{
uint8_t v_res_1403_; lean_object* v_r_1404_; 
v_res_1403_ = l_Lean_instBEqQuotVal_beq(v_x_1401_, v_x_1402_);
lean_dec_ref(v_x_1402_);
lean_dec_ref(v_x_1401_);
v_r_1404_ = lean_box(v_res_1403_);
return v_r_1404_;
}
}
LEAN_EXPORT lean_object* lean_mk_quot_val(lean_object* v_name_1407_, lean_object* v_levelParams_1408_, lean_object* v_type_1409_, uint8_t v_kind_1410_){
_start:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1411_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1411_, 0, v_name_1407_);
lean_ctor_set(v___x_1411_, 1, v_levelParams_1408_);
lean_ctor_set(v___x_1411_, 2, v_type_1409_);
v___x_1412_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*1, v_kind_1410_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkQuotValEx___boxed(lean_object* v_name_1413_, lean_object* v_levelParams_1414_, lean_object* v_type_1415_, lean_object* v_kind_1416_){
_start:
{
uint8_t v_kind_boxed_1417_; lean_object* v_res_1418_; 
v_kind_boxed_1417_ = lean_unbox(v_kind_1416_);
v_res_1418_ = lean_mk_quot_val(v_name_1413_, v_levelParams_1414_, v_type_1415_, v_kind_boxed_1417_);
return v_res_1418_;
}
}
LEAN_EXPORT uint8_t lean_quot_val_kind(lean_object* v_v_1419_){
_start:
{
uint8_t v_kind_1420_; 
v_kind_1420_ = lean_ctor_get_uint8(v_v_1419_, sizeof(void*)*1);
lean_dec_ref(v_v_1419_);
return v_kind_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_QuotVal_kindEx___boxed(lean_object* v_v_1421_){
_start:
{
uint8_t v_res_1422_; lean_object* v_r_1423_; 
v_res_1422_ = lean_quot_val_kind(v_v_1421_);
v_r_1423_ = lean_box(v_res_1422_);
return v_r_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorIdx(lean_object* v_x_1424_){
_start:
{
switch(lean_obj_tag(v_x_1424_))
{
case 0:
{
lean_object* v___x_1425_; 
v___x_1425_ = lean_unsigned_to_nat(0u);
return v___x_1425_;
}
case 1:
{
lean_object* v___x_1426_; 
v___x_1426_ = lean_unsigned_to_nat(1u);
return v___x_1426_;
}
case 2:
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_unsigned_to_nat(2u);
return v___x_1427_;
}
case 3:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_unsigned_to_nat(3u);
return v___x_1428_;
}
case 4:
{
lean_object* v___x_1429_; 
v___x_1429_ = lean_unsigned_to_nat(4u);
return v___x_1429_;
}
case 5:
{
lean_object* v___x_1430_; 
v___x_1430_ = lean_unsigned_to_nat(5u);
return v___x_1430_;
}
case 6:
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_unsigned_to_nat(6u);
return v___x_1431_;
}
default: 
{
lean_object* v___x_1432_; 
v___x_1432_ = lean_unsigned_to_nat(7u);
return v___x_1432_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorIdx___boxed(lean_object* v_x_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lean_ConstantInfo_ctorIdx(v_x_1433_);
lean_dec_ref(v_x_1433_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorElim___redArg(lean_object* v_t_1435_, lean_object* v_k_1436_){
_start:
{
lean_object* v_val_1437_; lean_object* v___x_1438_; 
v_val_1437_ = lean_ctor_get(v_t_1435_, 0);
lean_inc_ref(v_val_1437_);
lean_dec_ref(v_t_1435_);
v___x_1438_ = lean_apply_1(v_k_1436_, v_val_1437_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorElim(lean_object* v_motive_1439_, lean_object* v_ctorIdx_1440_, lean_object* v_t_1441_, lean_object* v_h_1442_, lean_object* v_k_1443_){
_start:
{
lean_object* v___x_1444_; 
v___x_1444_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1441_, v_k_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorElim___boxed(lean_object* v_motive_1445_, lean_object* v_ctorIdx_1446_, lean_object* v_t_1447_, lean_object* v_h_1448_, lean_object* v_k_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Lean_ConstantInfo_ctorElim(v_motive_1445_, v_ctorIdx_1446_, v_t_1447_, v_h_1448_, v_k_1449_);
lean_dec(v_ctorIdx_1446_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_axiomInfo_elim___redArg(lean_object* v_t_1451_, lean_object* v_axiomInfo_1452_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1451_, v_axiomInfo_1452_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_axiomInfo_elim(lean_object* v_motive_1454_, lean_object* v_t_1455_, lean_object* v_h_1456_, lean_object* v_axiomInfo_1457_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1455_, v_axiomInfo_1457_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_defnInfo_elim___redArg(lean_object* v_t_1459_, lean_object* v_defnInfo_1460_){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1459_, v_defnInfo_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_defnInfo_elim(lean_object* v_motive_1462_, lean_object* v_t_1463_, lean_object* v_h_1464_, lean_object* v_defnInfo_1465_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1463_, v_defnInfo_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_thmInfo_elim___redArg(lean_object* v_t_1467_, lean_object* v_thmInfo_1468_){
_start:
{
lean_object* v___x_1469_; 
v___x_1469_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1467_, v_thmInfo_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_thmInfo_elim(lean_object* v_motive_1470_, lean_object* v_t_1471_, lean_object* v_h_1472_, lean_object* v_thmInfo_1473_){
_start:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1471_, v_thmInfo_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_opaqueInfo_elim___redArg(lean_object* v_t_1475_, lean_object* v_opaqueInfo_1476_){
_start:
{
lean_object* v___x_1477_; 
v___x_1477_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1475_, v_opaqueInfo_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_opaqueInfo_elim(lean_object* v_motive_1478_, lean_object* v_t_1479_, lean_object* v_h_1480_, lean_object* v_opaqueInfo_1481_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1479_, v_opaqueInfo_1481_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_quotInfo_elim___redArg(lean_object* v_t_1483_, lean_object* v_quotInfo_1484_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1483_, v_quotInfo_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_quotInfo_elim(lean_object* v_motive_1486_, lean_object* v_t_1487_, lean_object* v_h_1488_, lean_object* v_quotInfo_1489_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1487_, v_quotInfo_1489_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_inductInfo_elim___redArg(lean_object* v_t_1491_, lean_object* v_inductInfo_1492_){
_start:
{
lean_object* v___x_1493_; 
v___x_1493_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1491_, v_inductInfo_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_inductInfo_elim(lean_object* v_motive_1494_, lean_object* v_t_1495_, lean_object* v_h_1496_, lean_object* v_inductInfo_1497_){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1495_, v_inductInfo_1497_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorInfo_elim___redArg(lean_object* v_t_1499_, lean_object* v_ctorInfo_1500_){
_start:
{
lean_object* v___x_1501_; 
v___x_1501_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1499_, v_ctorInfo_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_ctorInfo_elim(lean_object* v_motive_1502_, lean_object* v_t_1503_, lean_object* v_h_1504_, lean_object* v_ctorInfo_1505_){
_start:
{
lean_object* v___x_1506_; 
v___x_1506_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1503_, v_ctorInfo_1505_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_recInfo_elim___redArg(lean_object* v_t_1507_, lean_object* v_recInfo_1508_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1507_, v_recInfo_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_recInfo_elim(lean_object* v_motive_1510_, lean_object* v_t_1511_, lean_object* v_h_1512_, lean_object* v_recInfo_1513_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lean_ConstantInfo_ctorElim___redArg(v_t_1511_, v_recInfo_1513_);
return v___x_1514_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstantInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1515_ = l_Lean_instInhabitedAxiomVal_default;
v___x_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
return v___x_1516_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstantInfo_default(void){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = lean_obj_once(&l_Lean_instInhabitedConstantInfo_default___closed__0, &l_Lean_instInhabitedConstantInfo_default___closed__0_once, _init_l_Lean_instInhabitedConstantInfo_default___closed__0);
return v___x_1517_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstantInfo(void){
_start:
{
lean_object* v___x_1518_; 
v___x_1518_ = l_Lean_instInhabitedConstantInfo_default;
return v___x_1518_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqConstantInfo_beq(lean_object* v_x_1519_, lean_object* v_x_1520_){
_start:
{
switch(lean_obj_tag(v_x_1519_))
{
case 0:
{
if (lean_obj_tag(v_x_1520_) == 0)
{
lean_object* v_val_1521_; lean_object* v_val_1522_; uint8_t v___x_1523_; 
v_val_1521_ = lean_ctor_get(v_x_1519_, 0);
v_val_1522_ = lean_ctor_get(v_x_1520_, 0);
v___x_1523_ = l_Lean_instBEqAxiomVal_beq(v_val_1521_, v_val_1522_);
return v___x_1523_;
}
else
{
uint8_t v___x_1524_; 
v___x_1524_ = 0;
return v___x_1524_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1520_) == 1)
{
lean_object* v_val_1525_; lean_object* v_val_1526_; uint8_t v___x_1527_; 
v_val_1525_ = lean_ctor_get(v_x_1519_, 0);
v_val_1526_ = lean_ctor_get(v_x_1520_, 0);
v___x_1527_ = l_Lean_instBEqDefinitionVal_beq(v_val_1525_, v_val_1526_);
return v___x_1527_;
}
else
{
uint8_t v___x_1528_; 
v___x_1528_ = 0;
return v___x_1528_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1520_) == 2)
{
lean_object* v_val_1529_; lean_object* v_val_1530_; uint8_t v___x_1531_; 
v_val_1529_ = lean_ctor_get(v_x_1519_, 0);
v_val_1530_ = lean_ctor_get(v_x_1520_, 0);
v___x_1531_ = l_Lean_instBEqTheoremVal_beq(v_val_1529_, v_val_1530_);
return v___x_1531_;
}
else
{
uint8_t v___x_1532_; 
v___x_1532_ = 0;
return v___x_1532_;
}
}
case 3:
{
if (lean_obj_tag(v_x_1520_) == 3)
{
lean_object* v_val_1533_; lean_object* v_val_1534_; uint8_t v___x_1535_; 
v_val_1533_ = lean_ctor_get(v_x_1519_, 0);
v_val_1534_ = lean_ctor_get(v_x_1520_, 0);
v___x_1535_ = l_Lean_instBEqOpaqueVal_beq(v_val_1533_, v_val_1534_);
return v___x_1535_;
}
else
{
uint8_t v___x_1536_; 
v___x_1536_ = 0;
return v___x_1536_;
}
}
case 4:
{
if (lean_obj_tag(v_x_1520_) == 4)
{
lean_object* v_val_1537_; lean_object* v_val_1538_; uint8_t v___x_1539_; 
v_val_1537_ = lean_ctor_get(v_x_1519_, 0);
v_val_1538_ = lean_ctor_get(v_x_1520_, 0);
v___x_1539_ = l_Lean_instBEqQuotVal_beq(v_val_1537_, v_val_1538_);
return v___x_1539_;
}
else
{
uint8_t v___x_1540_; 
v___x_1540_ = 0;
return v___x_1540_;
}
}
case 5:
{
if (lean_obj_tag(v_x_1520_) == 5)
{
lean_object* v_val_1541_; lean_object* v_val_1542_; uint8_t v___x_1543_; 
v_val_1541_ = lean_ctor_get(v_x_1519_, 0);
v_val_1542_ = lean_ctor_get(v_x_1520_, 0);
v___x_1543_ = l_Lean_instBEqInductiveVal_beq(v_val_1541_, v_val_1542_);
return v___x_1543_;
}
else
{
uint8_t v___x_1544_; 
v___x_1544_ = 0;
return v___x_1544_;
}
}
case 6:
{
if (lean_obj_tag(v_x_1520_) == 6)
{
lean_object* v_val_1545_; lean_object* v_val_1546_; uint8_t v___x_1547_; 
v_val_1545_ = lean_ctor_get(v_x_1519_, 0);
v_val_1546_ = lean_ctor_get(v_x_1520_, 0);
v___x_1547_ = l_Lean_instBEqConstructorVal_beq(v_val_1545_, v_val_1546_);
return v___x_1547_;
}
else
{
uint8_t v___x_1548_; 
v___x_1548_ = 0;
return v___x_1548_;
}
}
default: 
{
if (lean_obj_tag(v_x_1520_) == 7)
{
lean_object* v_val_1549_; lean_object* v_val_1550_; uint8_t v___x_1551_; 
v_val_1549_ = lean_ctor_get(v_x_1519_, 0);
v_val_1550_ = lean_ctor_get(v_x_1520_, 0);
v___x_1551_ = l_Lean_instBEqRecursorVal_beq(v_val_1549_, v_val_1550_);
return v___x_1551_;
}
else
{
uint8_t v___x_1552_; 
v___x_1552_ = 0;
return v___x_1552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqConstantInfo_beq___boxed(lean_object* v_x_1553_, lean_object* v_x_1554_){
_start:
{
uint8_t v_res_1555_; lean_object* v_r_1556_; 
v_res_1555_ = l_Lean_instBEqConstantInfo_beq(v_x_1553_, v_x_1554_);
lean_dec_ref(v_x_1554_);
lean_dec_ref(v_x_1553_);
v_r_1556_ = lean_box(v_res_1555_);
return v_r_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_toConstantVal(lean_object* v_x_1559_){
_start:
{
lean_object* v_val_1560_; lean_object* v_toConstantVal_1561_; 
v_val_1560_ = lean_ctor_get(v_x_1559_, 0);
v_toConstantVal_1561_ = lean_ctor_get(v_val_1560_, 0);
lean_inc_ref(v_toConstantVal_1561_);
return v_toConstantVal_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_toConstantVal___boxed(lean_object* v_x_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lean_ConstantInfo_toConstantVal(v_x_1562_);
lean_dec_ref(v_x_1562_);
return v_res_1563_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object* v_x_1564_){
_start:
{
switch(lean_obj_tag(v_x_1564_))
{
case 0:
{
lean_object* v_val_1565_; uint8_t v_isUnsafe_1566_; 
v_val_1565_ = lean_ctor_get(v_x_1564_, 0);
v_isUnsafe_1566_ = lean_ctor_get_uint8(v_val_1565_, sizeof(void*)*1);
return v_isUnsafe_1566_;
}
case 1:
{
lean_object* v_val_1567_; uint8_t v_safety_1568_; uint8_t v___x_1569_; uint8_t v___x_1570_; 
v_val_1567_ = lean_ctor_get(v_x_1564_, 0);
v_safety_1568_ = lean_ctor_get_uint8(v_val_1567_, sizeof(void*)*4);
v___x_1569_ = 0;
v___x_1570_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_1568_, v___x_1569_);
return v___x_1570_;
}
case 3:
{
lean_object* v_val_1571_; uint8_t v_isUnsafe_1572_; 
v_val_1571_ = lean_ctor_get(v_x_1564_, 0);
v_isUnsafe_1572_ = lean_ctor_get_uint8(v_val_1571_, sizeof(void*)*3);
return v_isUnsafe_1572_;
}
case 5:
{
lean_object* v_val_1573_; uint8_t v_isUnsafe_1574_; 
v_val_1573_ = lean_ctor_get(v_x_1564_, 0);
v_isUnsafe_1574_ = lean_ctor_get_uint8(v_val_1573_, sizeof(void*)*6 + 1);
return v_isUnsafe_1574_;
}
case 6:
{
lean_object* v_val_1575_; uint8_t v_isUnsafe_1576_; 
v_val_1575_ = lean_ctor_get(v_x_1564_, 0);
v_isUnsafe_1576_ = lean_ctor_get_uint8(v_val_1575_, sizeof(void*)*5);
return v_isUnsafe_1576_;
}
case 7:
{
lean_object* v_val_1577_; uint8_t v_isUnsafe_1578_; 
v_val_1577_ = lean_ctor_get(v_x_1564_, 0);
v_isUnsafe_1578_ = lean_ctor_get_uint8(v_val_1577_, sizeof(void*)*7 + 1);
return v_isUnsafe_1578_;
}
default: 
{
uint8_t v___x_1579_; 
v___x_1579_ = 0;
return v___x_1579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isUnsafe___boxed(lean_object* v_x_1580_){
_start:
{
uint8_t v_res_1581_; lean_object* v_r_1582_; 
v_res_1581_ = l_Lean_ConstantInfo_isUnsafe(v_x_1580_);
lean_dec_ref(v_x_1580_);
v_r_1582_ = lean_box(v_res_1581_);
return v_r_1582_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isPartial(lean_object* v_x_1583_){
_start:
{
if (lean_obj_tag(v_x_1583_) == 1)
{
lean_object* v_val_1584_; uint8_t v_safety_1585_; uint8_t v___x_1586_; uint8_t v___x_1587_; 
v_val_1584_ = lean_ctor_get(v_x_1583_, 0);
v_safety_1585_ = lean_ctor_get_uint8(v_val_1584_, sizeof(void*)*4);
v___x_1586_ = 2;
v___x_1587_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_1585_, v___x_1586_);
return v___x_1587_;
}
else
{
uint8_t v___x_1588_; 
v___x_1588_ = 0;
return v___x_1588_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isPartial___boxed(lean_object* v_x_1589_){
_start:
{
uint8_t v_res_1590_; lean_object* v_r_1591_; 
v_res_1590_ = l_Lean_ConstantInfo_isPartial(v_x_1589_);
lean_dec_ref(v_x_1589_);
v_r_1591_ = lean_box(v_res_1590_);
return v_r_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_name(lean_object* v_d_1592_){
_start:
{
lean_object* v___x_1593_; lean_object* v_name_1594_; 
v___x_1593_ = l_Lean_ConstantInfo_toConstantVal(v_d_1592_);
v_name_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_name_1594_);
lean_dec_ref(v___x_1593_);
return v_name_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_name___boxed(lean_object* v_d_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l_Lean_ConstantInfo_name(v_d_1595_);
lean_dec_ref(v_d_1595_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_levelParams(lean_object* v_d_1597_){
_start:
{
lean_object* v___x_1598_; lean_object* v_levelParams_1599_; 
v___x_1598_ = l_Lean_ConstantInfo_toConstantVal(v_d_1597_);
v_levelParams_1599_ = lean_ctor_get(v___x_1598_, 1);
lean_inc(v_levelParams_1599_);
lean_dec_ref(v___x_1598_);
return v_levelParams_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_levelParams___boxed(lean_object* v_d_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_Lean_ConstantInfo_levelParams(v_d_1600_);
lean_dec_ref(v_d_1600_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_numLevelParams(lean_object* v_d_1602_){
_start:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1603_ = l_Lean_ConstantInfo_levelParams(v_d_1602_);
v___x_1604_ = l_List_lengthTR___redArg(v___x_1603_);
lean_dec(v___x_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_numLevelParams___boxed(lean_object* v_d_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l_Lean_ConstantInfo_numLevelParams(v_d_1605_);
lean_dec_ref(v_d_1605_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_type(lean_object* v_d_1607_){
_start:
{
lean_object* v___x_1608_; lean_object* v_type_1609_; 
v___x_1608_ = l_Lean_ConstantInfo_toConstantVal(v_d_1607_);
v_type_1609_ = lean_ctor_get(v___x_1608_, 2);
lean_inc_ref(v_type_1609_);
lean_dec_ref(v___x_1608_);
return v_type_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_type___boxed(lean_object* v_d_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lean_ConstantInfo_type(v_d_1610_);
lean_dec_ref(v_d_1610_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_value_x3f(lean_object* v_info_1612_, uint8_t v_allowOpaque_1613_){
_start:
{
switch(lean_obj_tag(v_info_1612_))
{
case 1:
{
lean_object* v_val_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1622_; 
v_val_1614_ = lean_ctor_get(v_info_1612_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v_info_1612_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1616_ = v_info_1612_;
v_isShared_1617_ = v_isSharedCheck_1622_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_val_1614_);
lean_dec(v_info_1612_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1622_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v_value_1618_; lean_object* v___x_1620_; 
v_value_1618_ = lean_ctor_get(v_val_1614_, 1);
lean_inc_ref(v_value_1618_);
lean_dec_ref(v_val_1614_);
if (v_isShared_1617_ == 0)
{
lean_ctor_set(v___x_1616_, 0, v_value_1618_);
v___x_1620_ = v___x_1616_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_value_1618_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
case 2:
{
lean_object* v_val_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1632_; 
v_val_1623_ = lean_ctor_get(v_info_1612_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v_info_1612_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1625_ = v_info_1612_;
v_isShared_1626_ = v_isSharedCheck_1632_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_val_1623_);
lean_dec(v_info_1612_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1632_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
if (v_allowOpaque_1613_ == 0)
{
lean_object* v___x_1627_; 
lean_del_object(v___x_1625_);
lean_dec_ref(v_val_1623_);
v___x_1627_ = lean_box(0);
return v___x_1627_;
}
else
{
lean_object* v_value_1628_; lean_object* v___x_1630_; 
v_value_1628_ = lean_ctor_get(v_val_1623_, 1);
lean_inc_ref(v_value_1628_);
lean_dec_ref(v_val_1623_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set_tag(v___x_1625_, 1);
lean_ctor_set(v___x_1625_, 0, v_value_1628_);
v___x_1630_ = v___x_1625_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_value_1628_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
case 3:
{
lean_object* v_val_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1642_; 
v_val_1633_ = lean_ctor_get(v_info_1612_, 0);
v_isSharedCheck_1642_ = !lean_is_exclusive(v_info_1612_);
if (v_isSharedCheck_1642_ == 0)
{
v___x_1635_ = v_info_1612_;
v_isShared_1636_ = v_isSharedCheck_1642_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_val_1633_);
lean_dec(v_info_1612_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1642_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
if (v_allowOpaque_1613_ == 0)
{
lean_object* v___x_1637_; 
lean_del_object(v___x_1635_);
lean_dec_ref(v_val_1633_);
v___x_1637_ = lean_box(0);
return v___x_1637_;
}
else
{
lean_object* v_value_1638_; lean_object* v___x_1640_; 
v_value_1638_ = lean_ctor_get(v_val_1633_, 1);
lean_inc_ref(v_value_1638_);
lean_dec_ref(v_val_1633_);
if (v_isShared_1636_ == 0)
{
lean_ctor_set_tag(v___x_1635_, 1);
lean_ctor_set(v___x_1635_, 0, v_value_1638_);
v___x_1640_ = v___x_1635_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_value_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
default: 
{
lean_object* v___x_1643_; 
lean_dec_ref(v_info_1612_);
v___x_1643_ = lean_box(0);
return v___x_1643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_value_x3f___boxed(lean_object* v_info_1644_, lean_object* v_allowOpaque_1645_){
_start:
{
uint8_t v_allowOpaque_boxed_1646_; lean_object* v_res_1647_; 
v_allowOpaque_boxed_1646_ = lean_unbox(v_allowOpaque_1645_);
v_res_1647_ = l_Lean_ConstantInfo_value_x3f(v_info_1644_, v_allowOpaque_boxed_1646_);
return v_res_1647_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_hasValue(lean_object* v_info_1648_, uint8_t v_allowOpaque_1649_){
_start:
{
switch(lean_obj_tag(v_info_1648_))
{
case 1:
{
uint8_t v___x_1650_; 
v___x_1650_ = 1;
return v___x_1650_;
}
case 2:
{
return v_allowOpaque_1649_;
}
case 3:
{
return v_allowOpaque_1649_;
}
default: 
{
uint8_t v___x_1651_; 
v___x_1651_ = 0;
return v___x_1651_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_hasValue___boxed(lean_object* v_info_1652_, lean_object* v_allowOpaque_1653_){
_start:
{
uint8_t v_allowOpaque_boxed_1654_; uint8_t v_res_1655_; lean_object* v_r_1656_; 
v_allowOpaque_boxed_1654_ = lean_unbox(v_allowOpaque_1653_);
v_res_1655_ = l_Lean_ConstantInfo_hasValue(v_info_1652_, v_allowOpaque_boxed_1654_);
lean_dec_ref(v_info_1652_);
v_r_1656_ = lean_box(v_res_1655_);
return v_r_1656_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ConstantInfo_value_x21_spec__0(lean_object* v_msg_1657_){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = l_Lean_instInhabitedExpr;
v___x_1659_ = lean_panic_fn_borrowed(v___x_1658_, v_msg_1657_);
return v___x_1659_;
}
}
static lean_object* _init_l_Lean_ConstantInfo_value_x21___closed__2(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1662_ = ((lean_object*)(l_Lean_ConstantInfo_value_x21___closed__1));
v___x_1663_ = lean_unsigned_to_nat(62u);
v___x_1664_ = lean_unsigned_to_nat(509u);
v___x_1665_ = ((lean_object*)(l_Lean_ConstantInfo_value_x21___closed__0));
v___x_1666_ = ((lean_object*)(l_Lean_Declaration_definitionVal_x21___closed__0));
v___x_1667_ = l_mkPanicMessageWithDecl(v___x_1666_, v___x_1665_, v___x_1664_, v___x_1663_, v___x_1662_);
return v___x_1667_;
}
}
static lean_object* _init_l_Lean_ConstantInfo_value_x21___closed__3(void){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1668_ = ((lean_object*)(l_Lean_ConstantInfo_value_x21___closed__1));
v___x_1669_ = lean_unsigned_to_nat(62u);
v___x_1670_ = lean_unsigned_to_nat(510u);
v___x_1671_ = ((lean_object*)(l_Lean_ConstantInfo_value_x21___closed__0));
v___x_1672_ = ((lean_object*)(l_Lean_Declaration_definitionVal_x21___closed__0));
v___x_1673_ = l_mkPanicMessageWithDecl(v___x_1672_, v___x_1671_, v___x_1670_, v___x_1669_, v___x_1668_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_value_x21(lean_object* v_info_1676_, uint8_t v_allowOpaque_1677_){
_start:
{
switch(lean_obj_tag(v_info_1676_))
{
case 1:
{
lean_object* v_val_1678_; lean_object* v_value_1679_; 
v_val_1678_ = lean_ctor_get(v_info_1676_, 0);
v_value_1679_ = lean_ctor_get(v_val_1678_, 1);
lean_inc_ref(v_value_1679_);
return v_value_1679_;
}
case 2:
{
if (v_allowOpaque_1677_ == 0)
{
lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1680_ = lean_obj_once(&l_Lean_ConstantInfo_value_x21___closed__2, &l_Lean_ConstantInfo_value_x21___closed__2_once, _init_l_Lean_ConstantInfo_value_x21___closed__2);
v___x_1681_ = l_panic___at___00Lean_ConstantInfo_value_x21_spec__0(v___x_1680_);
return v___x_1681_;
}
else
{
lean_object* v_val_1682_; lean_object* v_value_1683_; 
v_val_1682_ = lean_ctor_get(v_info_1676_, 0);
v_value_1683_ = lean_ctor_get(v_val_1682_, 1);
lean_inc_ref(v_value_1683_);
return v_value_1683_;
}
}
case 3:
{
if (v_allowOpaque_1677_ == 0)
{
lean_object* v___x_1684_; lean_object* v___x_1685_; 
v___x_1684_ = lean_obj_once(&l_Lean_ConstantInfo_value_x21___closed__3, &l_Lean_ConstantInfo_value_x21___closed__3_once, _init_l_Lean_ConstantInfo_value_x21___closed__3);
v___x_1685_ = l_panic___at___00Lean_ConstantInfo_value_x21_spec__0(v___x_1684_);
return v___x_1685_;
}
else
{
lean_object* v_val_1686_; lean_object* v_value_1687_; 
v_val_1686_ = lean_ctor_get(v_info_1676_, 0);
v_value_1687_ = lean_ctor_get(v_val_1686_, 1);
lean_inc_ref(v_value_1687_);
return v_value_1687_;
}
}
default: 
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; uint8_t v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1688_ = ((lean_object*)(l_Lean_Declaration_definitionVal_x21___closed__0));
v___x_1689_ = ((lean_object*)(l_Lean_ConstantInfo_value_x21___closed__0));
v___x_1690_ = lean_unsigned_to_nat(511u);
v___x_1691_ = lean_unsigned_to_nat(31u);
v___x_1692_ = ((lean_object*)(l_Lean_ConstantInfo_value_x21___closed__4));
v___x_1693_ = l_Lean_ConstantInfo_name(v_info_1676_);
v___x_1694_ = 1;
v___x_1695_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1693_, v___x_1694_);
v___x_1696_ = lean_string_append(v___x_1692_, v___x_1695_);
lean_dec_ref(v___x_1695_);
v___x_1697_ = ((lean_object*)(l_Lean_ConstantInfo_value_x21___closed__5));
v___x_1698_ = lean_string_append(v___x_1696_, v___x_1697_);
v___x_1699_ = l_mkPanicMessageWithDecl(v___x_1688_, v___x_1689_, v___x_1690_, v___x_1691_, v___x_1698_);
lean_dec_ref(v___x_1698_);
v___x_1700_ = l_panic___at___00Lean_ConstantInfo_value_x21_spec__0(v___x_1699_);
return v___x_1700_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_value_x21___boxed(lean_object* v_info_1701_, lean_object* v_allowOpaque_1702_){
_start:
{
uint8_t v_allowOpaque_boxed_1703_; lean_object* v_res_1704_; 
v_allowOpaque_boxed_1703_ = lean_unbox(v_allowOpaque_1702_);
v_res_1704_ = l_Lean_ConstantInfo_value_x21(v_info_1701_, v_allowOpaque_boxed_1703_);
lean_dec_ref(v_info_1701_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_hints(lean_object* v_x_1705_){
_start:
{
if (lean_obj_tag(v_x_1705_) == 1)
{
lean_object* v_val_1706_; lean_object* v_hints_1707_; 
v_val_1706_ = lean_ctor_get(v_x_1705_, 0);
v_hints_1707_ = lean_ctor_get(v_val_1706_, 2);
lean_inc(v_hints_1707_);
return v_hints_1707_;
}
else
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_box(0);
return v___x_1708_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_hints___boxed(lean_object* v_x_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lean_ConstantInfo_hints(v_x_1709_);
lean_dec_ref(v_x_1709_);
return v_res_1710_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isCtor(lean_object* v_x_1711_){
_start:
{
if (lean_obj_tag(v_x_1711_) == 6)
{
uint8_t v___x_1712_; 
v___x_1712_ = 1;
return v___x_1712_;
}
else
{
uint8_t v___x_1713_; 
v___x_1713_ = 0;
return v___x_1713_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isCtor___boxed(lean_object* v_x_1714_){
_start:
{
uint8_t v_res_1715_; lean_object* v_r_1716_; 
v_res_1715_ = l_Lean_ConstantInfo_isCtor(v_x_1714_);
lean_dec_ref(v_x_1714_);
v_r_1716_ = lean_box(v_res_1715_);
return v_r_1716_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isAxiom(lean_object* v_x_1717_){
_start:
{
if (lean_obj_tag(v_x_1717_) == 0)
{
uint8_t v___x_1718_; 
v___x_1718_ = 1;
return v___x_1718_;
}
else
{
uint8_t v___x_1719_; 
v___x_1719_ = 0;
return v___x_1719_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isAxiom___boxed(lean_object* v_x_1720_){
_start:
{
uint8_t v_res_1721_; lean_object* v_r_1722_; 
v_res_1721_ = l_Lean_ConstantInfo_isAxiom(v_x_1720_);
lean_dec_ref(v_x_1720_);
v_r_1722_ = lean_box(v_res_1721_);
return v_r_1722_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isInductive(lean_object* v_x_1723_){
_start:
{
if (lean_obj_tag(v_x_1723_) == 5)
{
uint8_t v___x_1724_; 
v___x_1724_ = 1;
return v___x_1724_;
}
else
{
uint8_t v___x_1725_; 
v___x_1725_ = 0;
return v___x_1725_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isInductive___boxed(lean_object* v_x_1726_){
_start:
{
uint8_t v_res_1727_; lean_object* v_r_1728_; 
v_res_1727_ = l_Lean_ConstantInfo_isInductive(v_x_1726_);
lean_dec_ref(v_x_1726_);
v_r_1728_ = lean_box(v_res_1727_);
return v_r_1728_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isDefinition(lean_object* v_x_1729_){
_start:
{
if (lean_obj_tag(v_x_1729_) == 1)
{
uint8_t v___x_1730_; 
v___x_1730_ = 1;
return v___x_1730_;
}
else
{
uint8_t v___x_1731_; 
v___x_1731_ = 0;
return v___x_1731_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isDefinition___boxed(lean_object* v_x_1732_){
_start:
{
uint8_t v_res_1733_; lean_object* v_r_1734_; 
v_res_1733_ = l_Lean_ConstantInfo_isDefinition(v_x_1732_);
lean_dec_ref(v_x_1732_);
v_r_1734_ = lean_box(v_res_1733_);
return v_r_1734_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstantInfo_isTheorem(lean_object* v_x_1735_){
_start:
{
if (lean_obj_tag(v_x_1735_) == 2)
{
uint8_t v___x_1736_; 
v___x_1736_ = 1;
return v___x_1736_;
}
else
{
uint8_t v___x_1737_; 
v___x_1737_ = 0;
return v___x_1737_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_isTheorem___boxed(lean_object* v_x_1738_){
_start:
{
uint8_t v_res_1739_; lean_object* v_r_1740_; 
v_res_1739_ = l_Lean_ConstantInfo_isTheorem(v_x_1738_);
lean_dec_ref(v_x_1738_);
v_r_1740_ = lean_box(v_res_1739_);
return v_r_1740_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ConstantInfo_inductiveVal_x21_spec__0(lean_object* v_msg_1741_){
_start:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1742_ = l_Lean_instInhabitedInductiveVal_default;
v___x_1743_ = lean_panic_fn_borrowed(v___x_1742_, v_msg_1741_);
return v___x_1743_;
}
}
static lean_object* _init_l_Lean_ConstantInfo_inductiveVal_x21___closed__2(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1746_ = ((lean_object*)(l_Lean_ConstantInfo_inductiveVal_x21___closed__1));
v___x_1747_ = lean_unsigned_to_nat(9u);
v___x_1748_ = lean_unsigned_to_nat(539u);
v___x_1749_ = ((lean_object*)(l_Lean_ConstantInfo_inductiveVal_x21___closed__0));
v___x_1750_ = ((lean_object*)(l_Lean_Declaration_definitionVal_x21___closed__0));
v___x_1751_ = l_mkPanicMessageWithDecl(v___x_1750_, v___x_1749_, v___x_1748_, v___x_1747_, v___x_1746_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_inductiveVal_x21(lean_object* v_x_1752_){
_start:
{
if (lean_obj_tag(v_x_1752_) == 5)
{
lean_object* v_val_1753_; 
v_val_1753_ = lean_ctor_get(v_x_1752_, 0);
lean_inc_ref(v_val_1753_);
return v_val_1753_;
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1754_ = lean_obj_once(&l_Lean_ConstantInfo_inductiveVal_x21___closed__2, &l_Lean_ConstantInfo_inductiveVal_x21___closed__2_once, _init_l_Lean_ConstantInfo_inductiveVal_x21___closed__2);
v___x_1755_ = l_panic___at___00Lean_ConstantInfo_inductiveVal_x21_spec__0(v___x_1754_);
return v___x_1755_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_inductiveVal_x21___boxed(lean_object* v_x_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Lean_ConstantInfo_inductiveVal_x21(v_x_1756_);
lean_dec_ref(v_x_1756_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_all(lean_object* v_x_1758_){
_start:
{
switch(lean_obj_tag(v_x_1758_))
{
case 5:
{
lean_object* v_val_1759_; lean_object* v_all_1760_; 
v_val_1759_ = lean_ctor_get(v_x_1758_, 0);
v_all_1760_ = lean_ctor_get(v_val_1759_, 3);
lean_inc(v_all_1760_);
return v_all_1760_;
}
case 1:
{
lean_object* v_val_1761_; lean_object* v_all_1762_; 
v_val_1761_ = lean_ctor_get(v_x_1758_, 0);
v_all_1762_ = lean_ctor_get(v_val_1761_, 3);
lean_inc(v_all_1762_);
return v_all_1762_;
}
case 2:
{
lean_object* v_val_1763_; lean_object* v_all_1764_; 
v_val_1763_ = lean_ctor_get(v_x_1758_, 0);
v_all_1764_ = lean_ctor_get(v_val_1763_, 2);
lean_inc(v_all_1764_);
return v_all_1764_;
}
case 3:
{
lean_object* v_val_1765_; lean_object* v_all_1766_; 
v_val_1765_ = lean_ctor_get(v_x_1758_, 0);
v_all_1766_ = lean_ctor_get(v_val_1765_, 2);
lean_inc(v_all_1766_);
return v_all_1766_;
}
default: 
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1767_ = l_Lean_ConstantInfo_name(v_x_1758_);
v___x_1768_ = lean_box(0);
v___x_1769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1767_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
return v___x_1769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstantInfo_all___boxed(lean_object* v_x_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lean_ConstantInfo_all(v_x_1770_);
lean_dec_ref(v_x_1770_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkRecName(lean_object* v_declName_1772_){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = ((lean_object*)(l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Declaration_getNames_spec__1___closed__0));
v___x_1774_ = l_Lean_Name_str___override(v_declName_1772_, v___x_1773_);
return v___x_1774_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Declaration(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedReducibilityHints_default = _init_l_Lean_instInhabitedReducibilityHints_default();
lean_mark_persistent(l_Lean_instInhabitedReducibilityHints_default);
l_Lean_instInhabitedReducibilityHints = _init_l_Lean_instInhabitedReducibilityHints();
lean_mark_persistent(l_Lean_instInhabitedReducibilityHints);
l_Lean_instInhabitedConstantVal_default = _init_l_Lean_instInhabitedConstantVal_default();
lean_mark_persistent(l_Lean_instInhabitedConstantVal_default);
l_Lean_instInhabitedConstantVal = _init_l_Lean_instInhabitedConstantVal();
lean_mark_persistent(l_Lean_instInhabitedConstantVal);
l_Lean_instInhabitedAxiomVal_default = _init_l_Lean_instInhabitedAxiomVal_default();
lean_mark_persistent(l_Lean_instInhabitedAxiomVal_default);
l_Lean_instInhabitedAxiomVal = _init_l_Lean_instInhabitedAxiomVal();
lean_mark_persistent(l_Lean_instInhabitedAxiomVal);
l_Lean_instInhabitedDefinitionSafety_default = _init_l_Lean_instInhabitedDefinitionSafety_default();
l_Lean_instInhabitedDefinitionSafety = _init_l_Lean_instInhabitedDefinitionSafety();
l_Lean_instInhabitedDefinitionVal_default = _init_l_Lean_instInhabitedDefinitionVal_default();
lean_mark_persistent(l_Lean_instInhabitedDefinitionVal_default);
l_Lean_instInhabitedDefinitionVal = _init_l_Lean_instInhabitedDefinitionVal();
lean_mark_persistent(l_Lean_instInhabitedDefinitionVal);
l_Lean_instInhabitedTheoremVal_default = _init_l_Lean_instInhabitedTheoremVal_default();
lean_mark_persistent(l_Lean_instInhabitedTheoremVal_default);
l_Lean_instInhabitedTheoremVal = _init_l_Lean_instInhabitedTheoremVal();
lean_mark_persistent(l_Lean_instInhabitedTheoremVal);
l_Lean_instInhabitedOpaqueVal_default = _init_l_Lean_instInhabitedOpaqueVal_default();
lean_mark_persistent(l_Lean_instInhabitedOpaqueVal_default);
l_Lean_instInhabitedOpaqueVal = _init_l_Lean_instInhabitedOpaqueVal();
lean_mark_persistent(l_Lean_instInhabitedOpaqueVal);
l_Lean_instInhabitedConstructor_default = _init_l_Lean_instInhabitedConstructor_default();
lean_mark_persistent(l_Lean_instInhabitedConstructor_default);
l_Lean_instInhabitedConstructor = _init_l_Lean_instInhabitedConstructor();
lean_mark_persistent(l_Lean_instInhabitedConstructor);
l_Lean_instInhabitedInductiveType_default = _init_l_Lean_instInhabitedInductiveType_default();
lean_mark_persistent(l_Lean_instInhabitedInductiveType_default);
l_Lean_instInhabitedInductiveType = _init_l_Lean_instInhabitedInductiveType();
lean_mark_persistent(l_Lean_instInhabitedInductiveType);
l_Lean_instInhabitedDeclaration_default = _init_l_Lean_instInhabitedDeclaration_default();
lean_mark_persistent(l_Lean_instInhabitedDeclaration_default);
l_Lean_instInhabitedDeclaration = _init_l_Lean_instInhabitedDeclaration();
lean_mark_persistent(l_Lean_instInhabitedDeclaration);
l_Lean_instInhabitedInductiveVal_default = _init_l_Lean_instInhabitedInductiveVal_default();
lean_mark_persistent(l_Lean_instInhabitedInductiveVal_default);
l_Lean_instInhabitedInductiveVal = _init_l_Lean_instInhabitedInductiveVal();
lean_mark_persistent(l_Lean_instInhabitedInductiveVal);
l_Lean_instInhabitedConstructorVal_default = _init_l_Lean_instInhabitedConstructorVal_default();
lean_mark_persistent(l_Lean_instInhabitedConstructorVal_default);
l_Lean_instInhabitedConstructorVal = _init_l_Lean_instInhabitedConstructorVal();
lean_mark_persistent(l_Lean_instInhabitedConstructorVal);
l_Lean_instInhabitedRecursorRule_default = _init_l_Lean_instInhabitedRecursorRule_default();
lean_mark_persistent(l_Lean_instInhabitedRecursorRule_default);
l_Lean_instInhabitedRecursorRule = _init_l_Lean_instInhabitedRecursorRule();
lean_mark_persistent(l_Lean_instInhabitedRecursorRule);
l_Lean_instInhabitedRecursorVal_default = _init_l_Lean_instInhabitedRecursorVal_default();
lean_mark_persistent(l_Lean_instInhabitedRecursorVal_default);
l_Lean_instInhabitedRecursorVal = _init_l_Lean_instInhabitedRecursorVal();
lean_mark_persistent(l_Lean_instInhabitedRecursorVal);
l_Lean_instInhabitedQuotKind_default = _init_l_Lean_instInhabitedQuotKind_default();
l_Lean_instInhabitedQuotKind = _init_l_Lean_instInhabitedQuotKind();
l_Lean_instInhabitedQuotVal_default = _init_l_Lean_instInhabitedQuotVal_default();
lean_mark_persistent(l_Lean_instInhabitedQuotVal_default);
l_Lean_instInhabitedQuotVal = _init_l_Lean_instInhabitedQuotVal();
lean_mark_persistent(l_Lean_instInhabitedQuotVal);
l_Lean_instInhabitedConstantInfo_default = _init_l_Lean_instInhabitedConstantInfo_default();
lean_mark_persistent(l_Lean_instInhabitedConstantInfo_default);
l_Lean_instInhabitedConstantInfo = _init_l_Lean_instInhabitedConstantInfo();
lean_mark_persistent(l_Lean_instInhabitedConstantInfo);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Declaration(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Declaration(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Declaration(builtin);
}
#ifdef __cplusplus
}
#endif

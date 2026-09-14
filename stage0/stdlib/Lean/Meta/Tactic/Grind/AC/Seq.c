// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.AC.Seq
// Imports: public import Init.Grind.AC public import Init.Data.Ord import Init.Data.Nat.Internal.Linear
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Grind_AC_instReprSeq_repr(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Lean_Grind_AC_instBEqSeq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Grind_AC_Seq_concat(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_length(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_length___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_isVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_isVar___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_reverse_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_reverse(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_compare_lex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_compare_lex___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_compare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_compare___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Grind_AC_instOrdSeq__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Grind_AC_Seq_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Grind_AC_instOrdSeq__lean___closed__0 = (const lean_object*)&l_Lean_Grind_AC_instOrdSeq__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Grind_AC_instOrdSeq__lean = (const lean_object*)&l_Lean_Grind_AC_instOrdSeq__lean___closed__0_value;
static const lean_closure_object l_Lean_Grind_AC_instAppendSeq__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Grind_AC_Seq_concat, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Grind_AC_instAppendSeq__lean___closed__0 = (const lean_object*)&l_Lean_Grind_AC_instAppendSeq__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Grind_AC_instAppendSeq__lean = (const lean_object*)&l_Lean_Grind_AC_instAppendSeq__lean___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_false_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_false_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_exact_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_exact_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_prefix_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_prefix_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "_private.Lean.Meta.Tactic.Grind.AC.Seq.0.Lean.Grind.AC.StartsWithResult.exact"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "_private.Lean.Meta.Tactic.Grind.AC.Seq.0.Lean.Grind.AC.StartsWithResult.false"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "_private.Lean.Meta.Tactic.Grind.AC.Seq.0.Lean.Grind.AC.StartsWithResult.prefix"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Grind_AC_instInhabitedStartsWithResult_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instInhabitedStartsWithResult;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__0;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "AC"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Seq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__14;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__17;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__18;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_::_"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__19_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__21_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__22_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "::"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__23_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__23_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__24_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__25_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__26_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__26_value),((lean_object*)(((size_t)(65) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__27_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__22_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__24_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__27_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__28_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__29;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a__;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Seq.cons"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__13_value),LEAN_SCALAR_PTR_LITERAL(96, 79, 17, 128, 200, 87, 234, 137)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(123, 186, 150, 149, 195, 159, 124, 247)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__9_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__11_value),LEAN_SCALAR_PTR_LITERAL(183, 225, 101, 238, 32, 166, 171, 97)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__13_value),LEAN_SCALAR_PTR_LITERAL(92, 203, 204, 43, 133, 252, 105, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(111, 191, 131, 18, 100, 220, 77, 110)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__8_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__9_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__11_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_instOfNatSeq__lean(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_a;
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_false_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_false_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_exact_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_exact_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_prefix_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_prefix_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_suffix_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_suffix_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_middle_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_middle_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_subseq_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_subseq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_false_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_false_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_exact_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_exact_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_strict_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_strict_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_subset_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_subset(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_isSorted_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_isSorted_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_isSorted(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_isSorted___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_noAdjacentDuplicates_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_noAdjacentDuplicates_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_noAdjacentDuplicates(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_noAdjacentDuplicates___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_sharesVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_sharesVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_toSeq_x3f_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_toSeq_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_app(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_superposeAC_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superpose_x3f_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superpose_x3f_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_superpose_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_superpose_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_firstVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_firstVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_startsWithVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_startsWithVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_lastVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_lastVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_endsWithVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_endsWithVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_length(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(1u);
return v___x_2_;
}
else
{
lean_object* v_s_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v_s_3_ = lean_ctor_get(v_x_1_, 1);
v___x_4_ = l_Lean_Grind_AC_Seq_length(v_s_3_);
v___x_5_ = lean_unsigned_to_nat(1u);
v___x_6_ = lean_nat_add(v___x_4_, v___x_5_);
lean_dec(v___x_4_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_length___boxed(lean_object* v_x_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Grind_AC_Seq_length(v_x_7_);
lean_dec_ref(v_x_7_);
return v_res_8_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_isVar(lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 0)
{
uint8_t v___x_10_; 
v___x_10_ = 1;
return v___x_10_;
}
else
{
uint8_t v___x_11_; 
v___x_11_ = 0;
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_isVar___boxed(lean_object* v_x_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Grind_AC_Seq_isVar(v_x_12_);
lean_dec_ref(v_x_12_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_reverse_go(lean_object* v_a_15_, lean_object* v_a_16_){
_start:
{
if (lean_obj_tag(v_a_15_) == 0)
{
lean_object* v_x_17_; lean_object* v___x_18_; 
v_x_17_ = lean_ctor_get(v_a_15_, 0);
lean_inc(v_x_17_);
lean_dec_ref_known(v_a_15_, 1);
v___x_18_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_18_, 0, v_x_17_);
lean_ctor_set(v___x_18_, 1, v_a_16_);
return v___x_18_;
}
else
{
lean_object* v_x_19_; lean_object* v_s_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_28_; 
v_x_19_ = lean_ctor_get(v_a_15_, 0);
v_s_20_ = lean_ctor_get(v_a_15_, 1);
v_isSharedCheck_28_ = !lean_is_exclusive(v_a_15_);
if (v_isSharedCheck_28_ == 0)
{
v___x_22_ = v_a_15_;
v_isShared_23_ = v_isSharedCheck_28_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_s_20_);
lean_inc(v_x_19_);
lean_dec(v_a_15_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_28_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v_a_16_);
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_x_19_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_a_16_);
v___x_25_ = v_reuseFailAlloc_27_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
v_a_15_ = v_s_20_;
v_a_16_ = v___x_25_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_reverse(lean_object* v_s_29_){
_start:
{
if (lean_obj_tag(v_s_29_) == 0)
{
return v_s_29_;
}
else
{
lean_object* v_x_30_; lean_object* v_s_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v_x_30_ = lean_ctor_get(v_s_29_, 0);
lean_inc(v_x_30_);
v_s_31_ = lean_ctor_get(v_s_29_, 1);
lean_inc_ref(v_s_31_);
lean_dec_ref_known(v_s_29_, 2);
v___x_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_32_, 0, v_x_30_);
v___x_33_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_reverse_go(v_s_31_, v___x_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_compare_lex(lean_object* v_s_u2081_34_, lean_object* v_s_u2082_35_){
_start:
{
if (lean_obj_tag(v_s_u2081_34_) == 0)
{
if (lean_obj_tag(v_s_u2082_35_) == 0)
{
lean_object* v_x_36_; lean_object* v_x_37_; uint8_t v___x_38_; 
v_x_36_ = lean_ctor_get(v_s_u2081_34_, 0);
v_x_37_ = lean_ctor_get(v_s_u2082_35_, 0);
v___x_38_ = lean_nat_dec_lt(v_x_36_, v_x_37_);
if (v___x_38_ == 0)
{
uint8_t v___x_39_; 
v___x_39_ = lean_nat_dec_eq(v_x_36_, v_x_37_);
if (v___x_39_ == 0)
{
uint8_t v___x_40_; 
v___x_40_ = 2;
return v___x_40_;
}
else
{
uint8_t v___x_41_; 
v___x_41_ = 1;
return v___x_41_;
}
}
else
{
uint8_t v___x_42_; 
v___x_42_ = 0;
return v___x_42_;
}
}
else
{
uint8_t v___x_43_; 
v___x_43_ = 0;
return v___x_43_;
}
}
else
{
if (lean_obj_tag(v_s_u2082_35_) == 0)
{
uint8_t v___x_44_; 
v___x_44_ = 2;
return v___x_44_;
}
else
{
lean_object* v_x_45_; lean_object* v_s_46_; lean_object* v_x_47_; lean_object* v_s_48_; uint8_t v___x_49_; 
v_x_45_ = lean_ctor_get(v_s_u2081_34_, 0);
v_s_46_ = lean_ctor_get(v_s_u2081_34_, 1);
v_x_47_ = lean_ctor_get(v_s_u2082_35_, 0);
v_s_48_ = lean_ctor_get(v_s_u2082_35_, 1);
v___x_49_ = lean_nat_dec_lt(v_x_45_, v_x_47_);
if (v___x_49_ == 0)
{
uint8_t v___x_50_; 
v___x_50_ = lean_nat_dec_eq(v_x_45_, v_x_47_);
if (v___x_50_ == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 2;
return v___x_51_;
}
else
{
v_s_u2081_34_ = v_s_46_;
v_s_u2082_35_ = v_s_48_;
goto _start;
}
}
else
{
uint8_t v___x_53_; 
v___x_53_ = 0;
return v___x_53_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_compare_lex___boxed(lean_object* v_s_u2081_54_, lean_object* v_s_u2082_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_compare_lex(v_s_u2081_54_, v_s_u2082_55_);
lean_dec_ref(v_s_u2082_55_);
lean_dec_ref(v_s_u2081_54_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_compare(lean_object* v_s_u2081_58_, lean_object* v_s_u2082_59_){
_start:
{
lean_object* v_len_u2081_60_; lean_object* v_len_u2082_61_; uint8_t v___x_62_; 
v_len_u2081_60_ = l_Lean_Grind_AC_Seq_length(v_s_u2081_58_);
v_len_u2082_61_ = l_Lean_Grind_AC_Seq_length(v_s_u2082_59_);
v___x_62_ = lean_nat_dec_lt(v_len_u2081_60_, v_len_u2082_61_);
if (v___x_62_ == 0)
{
uint8_t v___x_63_; 
v___x_63_ = lean_nat_dec_lt(v_len_u2082_61_, v_len_u2081_60_);
lean_dec(v_len_u2081_60_);
lean_dec(v_len_u2082_61_);
if (v___x_63_ == 0)
{
uint8_t v___x_64_; 
v___x_64_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_compare_lex(v_s_u2081_58_, v_s_u2082_59_);
return v___x_64_;
}
else
{
uint8_t v___x_65_; 
v___x_65_ = 2;
return v___x_65_;
}
}
else
{
uint8_t v___x_66_; 
lean_dec(v_len_u2082_61_);
lean_dec(v_len_u2081_60_);
v___x_66_ = 0;
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_compare___boxed(lean_object* v_s_u2081_67_, lean_object* v_s_u2082_68_){
_start:
{
uint8_t v_res_69_; lean_object* v_r_70_; 
v_res_69_ = l_Lean_Grind_AC_Seq_compare(v_s_u2081_67_, v_s_u2082_68_);
lean_dec_ref(v_s_u2082_68_);
lean_dec_ref(v_s_u2081_67_);
v_r_70_ = lean_box(v_res_69_);
return v_r_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorIdx(lean_object* v_x_75_){
_start:
{
switch(lean_obj_tag(v_x_75_))
{
case 0:
{
lean_object* v___x_76_; 
v___x_76_ = lean_unsigned_to_nat(0u);
return v___x_76_;
}
case 1:
{
lean_object* v___x_77_; 
v___x_77_ = lean_unsigned_to_nat(1u);
return v___x_77_;
}
default: 
{
lean_object* v___x_78_; 
v___x_78_ = lean_unsigned_to_nat(2u);
return v___x_78_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorIdx___boxed(lean_object* v_x_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorIdx(v_x_79_);
lean_dec(v_x_79_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___redArg(lean_object* v_t_81_, lean_object* v_k_82_){
_start:
{
if (lean_obj_tag(v_t_81_) == 2)
{
lean_object* v_s_83_; lean_object* v___x_84_; 
v_s_83_ = lean_ctor_get(v_t_81_, 0);
lean_inc_ref(v_s_83_);
lean_dec_ref_known(v_t_81_, 1);
v___x_84_ = lean_apply_1(v_k_82_, v_s_83_);
return v___x_84_;
}
else
{
lean_dec(v_t_81_);
return v_k_82_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim(lean_object* v_motive_85_, lean_object* v_ctorIdx_86_, lean_object* v_t_87_, lean_object* v_h_88_, lean_object* v_k_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___redArg(v_t_87_, v_k_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___boxed(lean_object* v_motive_91_, lean_object* v_ctorIdx_92_, lean_object* v_t_93_, lean_object* v_h_94_, lean_object* v_k_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim(v_motive_91_, v_ctorIdx_92_, v_t_93_, v_h_94_, v_k_95_);
lean_dec(v_ctorIdx_92_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_false_elim___redArg(lean_object* v_t_97_, lean_object* v_false_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___redArg(v_t_97_, v_false_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_false_elim(lean_object* v_motive_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_false_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___redArg(v_t_101_, v_false_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_exact_elim___redArg(lean_object* v_t_105_, lean_object* v_exact_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___redArg(v_t_105_, v_exact_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_exact_elim(lean_object* v_motive_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_exact_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___redArg(v_t_109_, v_exact_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_prefix_elim___redArg(lean_object* v_t_113_, lean_object* v_prefix_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___redArg(v_t_113_, v_prefix_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_prefix_elim(lean_object* v_motive_116_, lean_object* v_t_117_, lean_object* v_h_118_, lean_object* v_prefix_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_StartsWithResult_ctorElim___redArg(v_t_117_, v_prefix_119_);
return v___x_120_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_unsigned_to_nat(2u);
v___x_128_ = lean_nat_to_int(v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(1u);
v___x_130_ = lean_nat_to_int(v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr(lean_object* v_x_137_, lean_object* v_prec_138_){
_start:
{
lean_object* v___y_140_; lean_object* v___y_147_; 
switch(lean_obj_tag(v_x_137_))
{
case 0:
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = lean_unsigned_to_nat(1024u);
v___x_154_ = lean_nat_dec_le(v___x_153_, v_prec_138_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; 
v___x_155_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4);
v___y_147_ = v___x_155_;
goto v___jp_146_;
}
else
{
lean_object* v___x_156_; 
v___x_156_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5);
v___y_147_ = v___x_156_;
goto v___jp_146_;
}
}
case 1:
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(1024u);
v___x_158_ = lean_nat_dec_le(v___x_157_, v_prec_138_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; 
v___x_159_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4);
v___y_140_ = v___x_159_;
goto v___jp_139_;
}
else
{
lean_object* v___x_160_; 
v___x_160_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5);
v___y_140_ = v___x_160_;
goto v___jp_139_;
}
}
default: 
{
lean_object* v_s_161_; lean_object* v___y_163_; lean_object* v___x_172_; uint8_t v___x_173_; 
v_s_161_ = lean_ctor_get(v_x_137_, 0);
lean_inc_ref(v_s_161_);
lean_dec_ref_known(v_x_137_, 1);
v___x_172_ = lean_unsigned_to_nat(1024u);
v___x_173_ = lean_nat_dec_le(v___x_172_, v_prec_138_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__4);
v___y_163_ = v___x_174_;
goto v___jp_162_;
}
else
{
lean_object* v___x_175_; 
v___x_175_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__5);
v___y_163_ = v___x_175_;
goto v___jp_162_;
}
v___jp_162_:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_164_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__8));
v___x_165_ = lean_unsigned_to_nat(1024u);
v___x_166_ = l_Lean_Grind_AC_instReprSeq_repr(v_s_161_, v___x_165_);
v___x_167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_164_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
lean_inc(v___y_163_);
v___x_168_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_168_, 0, v___y_163_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
v___x_169_ = 0;
v___x_170_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_170_, 0, v___x_168_);
lean_ctor_set_uint8(v___x_170_, sizeof(void*)*1, v___x_169_);
v___x_171_ = l_Repr_addAppParen(v___x_170_, v_prec_138_);
return v___x_171_;
}
}
}
v___jp_139_:
{
lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_141_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__1));
lean_inc(v___y_140_);
v___x_142_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_142_, 0, v___y_140_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
v___x_143_ = 0;
v___x_144_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set_uint8(v___x_144_, sizeof(void*)*1, v___x_143_);
v___x_145_ = l_Repr_addAppParen(v___x_144_, v_prec_138_);
return v___x_145_;
}
v___jp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_148_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___closed__3));
lean_inc(v___y_147_);
v___x_149_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_149_, 0, v___y_147_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = 0;
v___x_151_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_151_, 0, v___x_149_);
lean_ctor_set_uint8(v___x_151_, sizeof(void*)*1, v___x_150_);
v___x_152_ = l_Repr_addAppParen(v___x_151_, v_prec_138_);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr___boxed(lean_object* v_x_176_, lean_object* v_prec_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instReprStartsWithResult_repr(v_x_176_, v_prec_177_);
lean_dec(v_prec_177_);
return v_res_178_;
}
}
static lean_object* _init_l_Lean_Grind_AC_instInhabitedStartsWithResult_default(void){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = lean_box(0);
return v___x_181_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instInhabitedStartsWithResult(void){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = lean_box(0);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith(lean_object* v_s_u2081_183_, lean_object* v_s_u2082_184_){
_start:
{
if (lean_obj_tag(v_s_u2082_184_) == 0)
{
if (lean_obj_tag(v_s_u2081_183_) == 0)
{
lean_object* v_x_185_; lean_object* v_x_186_; uint8_t v___x_187_; 
v_x_185_ = lean_ctor_get(v_s_u2082_184_, 0);
lean_inc(v_x_185_);
lean_dec_ref_known(v_s_u2082_184_, 1);
v_x_186_ = lean_ctor_get(v_s_u2081_183_, 0);
v___x_187_ = lean_nat_dec_eq(v_x_185_, v_x_186_);
lean_dec(v_x_185_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; 
v___x_188_ = lean_box(0);
return v___x_188_;
}
else
{
lean_object* v___x_189_; 
v___x_189_ = lean_box(1);
return v___x_189_;
}
}
else
{
lean_object* v_x_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_201_; 
v_x_190_ = lean_ctor_get(v_s_u2082_184_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v_s_u2082_184_);
if (v_isSharedCheck_201_ == 0)
{
v___x_192_ = v_s_u2082_184_;
v_isShared_193_ = v_isSharedCheck_201_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_x_190_);
lean_dec(v_s_u2082_184_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_201_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v_x_194_; lean_object* v_s_195_; uint8_t v___x_196_; 
v_x_194_ = lean_ctor_get(v_s_u2081_183_, 0);
v_s_195_ = lean_ctor_get(v_s_u2081_183_, 1);
v___x_196_ = lean_nat_dec_eq(v_x_190_, v_x_194_);
lean_dec(v_x_190_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
lean_del_object(v___x_192_);
v___x_197_ = lean_box(0);
return v___x_197_;
}
else
{
lean_object* v___x_199_; 
lean_inc_ref(v_s_195_);
if (v_isShared_193_ == 0)
{
lean_ctor_set_tag(v___x_192_, 2);
lean_ctor_set(v___x_192_, 0, v_s_195_);
v___x_199_ = v___x_192_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_s_195_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_s_u2081_183_) == 0)
{
lean_object* v___x_202_; 
lean_dec_ref_known(v_s_u2082_184_, 2);
v___x_202_ = lean_box(0);
return v___x_202_;
}
else
{
lean_object* v_x_203_; lean_object* v_s_204_; lean_object* v_x_205_; lean_object* v_s_206_; uint8_t v___x_207_; 
v_x_203_ = lean_ctor_get(v_s_u2082_184_, 0);
lean_inc(v_x_203_);
v_s_204_ = lean_ctor_get(v_s_u2082_184_, 1);
lean_inc_ref(v_s_204_);
lean_dec_ref_known(v_s_u2082_184_, 2);
v_x_205_ = lean_ctor_get(v_s_u2081_183_, 0);
v_s_206_ = lean_ctor_get(v_s_u2081_183_, 1);
v___x_207_ = lean_nat_dec_eq(v_x_203_, v_x_205_);
lean_dec(v_x_203_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; 
lean_dec_ref(v_s_204_);
v___x_208_ = lean_box(0);
return v___x_208_;
}
else
{
v_s_u2081_183_ = v_s_206_;
v_s_u2082_184_ = v_s_204_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith___boxed(lean_object* v_s_u2081_210_, lean_object* v_s_u2082_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith(v_s_u2081_210_, v_s_u2082_211_);
lean_dec_ref(v_s_u2081_210_);
return v_res_212_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__0(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = lean_box(0);
v___x_214_ = l_unsafeCast___redArg(v___x_213_);
return v___x_214_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__2(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_216_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__1));
v___x_217_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__0, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__0);
v___x_218_ = l_Lean_Name_str___override(v___x_217_, v___x_216_);
return v___x_218_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__4(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_220_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__3));
v___x_221_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__2, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__2);
v___x_222_ = l_Lean_Name_str___override(v___x_221_, v___x_220_);
return v___x_222_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__6(void){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_224_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__5));
v___x_225_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__4, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__4);
v___x_226_ = l_Lean_Name_str___override(v___x_225_, v___x_224_);
return v___x_226_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__8(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_228_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__7));
v___x_229_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__6, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__6);
v___x_230_ = l_Lean_Name_str___override(v___x_229_, v___x_228_);
return v___x_230_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__10(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_232_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__9));
v___x_233_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__8, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__8);
v___x_234_ = l_Lean_Name_str___override(v___x_233_, v___x_232_);
return v___x_234_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__12(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_236_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__11));
v___x_237_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__10, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__10);
v___x_238_ = l_Lean_Name_str___override(v___x_237_, v___x_236_);
return v___x_238_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__14(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_240_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__13));
v___x_241_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__12, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__12);
v___x_242_ = l_Lean_Name_str___override(v___x_241_, v___x_240_);
return v___x_242_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__15(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = lean_unsigned_to_nat(0u);
v___x_244_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__14, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__14);
v___x_245_ = l_Lean_Name_num___override(v___x_244_, v___x_243_);
return v___x_245_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__16(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_246_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__3));
v___x_247_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__15, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__15);
v___x_248_ = l_Lean_Name_str___override(v___x_247_, v___x_246_);
return v___x_248_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__17(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__9));
v___x_250_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__16, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__16);
v___x_251_ = l_Lean_Name_str___override(v___x_250_, v___x_249_);
return v___x_251_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__18(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__11));
v___x_253_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__17, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__17);
v___x_254_ = l_Lean_Name_str___override(v___x_253_, v___x_252_);
return v___x_254_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__19));
v___x_257_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__18, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__18_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__18);
v___x_258_ = l_Lean_Name_str___override(v___x_257_, v___x_256_);
return v___x_258_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__29(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_275_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__28));
v___x_276_ = lean_unsigned_to_nat(66u);
v___x_277_ = lean_unsigned_to_nat(65u);
v___x_278_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20);
v___x_279_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
lean_ctor_set(v___x_279_, 1, v___x_277_);
lean_ctor_set(v___x_279_, 2, v___x_276_);
lean_ctor_set(v___x_279_, 3, v___x_275_);
return v___x_279_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a__(void){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__29, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__29_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__29);
return v___x_280_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__5(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__4));
v___x_291_ = l_String_toRawSubstring_x27(v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1(lean_object* v_x_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20);
lean_inc(v_x_316_);
v___x_321_ = l_Lean_Syntax_isOfKind(v_x_316_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; lean_object* v___x_323_; 
lean_dec(v_x_316_);
v___x_322_ = lean_box(1);
v___x_323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v_a_318_);
return v___x_323_;
}
else
{
lean_object* v_quotContext_324_; lean_object* v_currMacroScope_325_; lean_object* v_ref_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; uint8_t v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_quotContext_324_ = lean_ctor_get(v_a_317_, 1);
v_currMacroScope_325_ = lean_ctor_get(v_a_317_, 2);
v_ref_326_ = lean_ctor_get(v_a_317_, 5);
v___x_327_ = l_Lean_Syntax_getArg(v_x_316_, v___x_319_);
v___x_328_ = lean_unsigned_to_nat(2u);
v___x_329_ = l_Lean_Syntax_getArg(v_x_316_, v___x_328_);
lean_dec(v_x_316_);
v___x_330_ = 0;
v___x_331_ = l_Lean_SourceInfo_fromRef(v_ref_326_, v___x_330_);
v___x_332_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3));
v___x_333_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__5, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__5);
v___x_334_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__7));
lean_inc(v_currMacroScope_325_);
lean_inc(v_quotContext_324_);
v___x_335_ = l_Lean_addMacroScope(v_quotContext_324_, v___x_334_, v_currMacroScope_325_);
v___x_336_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__12));
lean_inc_n(v___x_331_, 2);
v___x_337_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_337_, 0, v___x_331_);
lean_ctor_set(v___x_337_, 1, v___x_333_);
lean_ctor_set(v___x_337_, 2, v___x_335_);
lean_ctor_set(v___x_337_, 3, v___x_336_);
v___x_338_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__14));
v___x_339_ = l_Lean_Syntax_node2(v___x_331_, v___x_338_, v___x_327_, v___x_329_);
v___x_340_ = l_Lean_Syntax_node2(v___x_331_, v___x_332_, v___x_337_, v___x_339_);
v___x_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v_a_318_);
return v___x_341_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___boxed(lean_object* v_x_342_, lean_object* v_a_343_, lean_object* v_a_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1(v_x_342_, v_a_343_, v_a_344_);
lean_dec_ref(v_a_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1(lean_object* v_x_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______macroRules____private__Lean__Meta__Tactic__Grind__AC__Seq__0__Lean__Grind__AC__term___x3a_x3a____1___closed__3));
lean_inc(v_x_349_);
v___x_353_ = l_Lean_Syntax_isOfKind(v_x_349_, v___x_352_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; lean_object* v___x_355_; 
lean_dec(v_x_349_);
v___x_354_ = lean_box(0);
v___x_355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v_a_351_);
return v___x_355_;
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = l_Lean_Syntax_getArg(v_x_349_, v___x_356_);
v___x_358_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___closed__1));
lean_inc(v___x_357_);
v___x_359_ = l_Lean_Syntax_isOfKind(v___x_357_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; lean_object* v___x_361_; 
lean_dec(v___x_357_);
lean_dec(v_x_349_);
v___x_360_ = lean_box(0);
v___x_361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v_a_351_);
return v___x_361_;
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_362_ = lean_unsigned_to_nat(1u);
v___x_363_ = l_Lean_Syntax_getArg(v_x_349_, v___x_362_);
lean_dec(v_x_349_);
v___x_364_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_363_);
v___x_365_ = l_Lean_Syntax_matchesNull(v___x_363_, v___x_364_);
if (v___x_365_ == 0)
{
lean_object* v___x_366_; lean_object* v___x_367_; 
lean_dec(v___x_363_);
lean_dec(v___x_357_);
v___x_366_ = lean_box(0);
v___x_367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v_a_351_);
return v___x_367_;
}
else
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_ref_370_; uint8_t v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_368_ = l_Lean_Syntax_getArg(v___x_363_, v___x_356_);
v___x_369_ = l_Lean_Syntax_getArg(v___x_363_, v___x_362_);
lean_dec(v___x_363_);
v_ref_370_ = l_Lean_replaceRef(v___x_357_, v_a_350_);
lean_dec(v___x_357_);
v___x_371_ = 0;
v___x_372_ = l_Lean_SourceInfo_fromRef(v_ref_370_, v___x_371_);
lean_dec(v_ref_370_);
v___x_373_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20, &l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20_once, _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__20);
v___x_374_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a___00__closed__23));
lean_inc(v___x_372_);
v___x_375_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_372_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = l_Lean_Syntax_node3(v___x_372_, v___x_373_, v___x_368_, v___x_375_, v___x_369_);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v_a_351_);
return v___x_377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1___boxed(lean_object* v_x_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC___aux__Lean__Meta__Tactic__Grind__AC__Seq______unexpand__Lean__Grind__AC__Seq__cons__1(v_x_378_, v_a_379_, v_a_380_);
lean_dec(v_a_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_instOfNatSeq__lean(lean_object* v_n_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_383_, 0, v_n_382_);
return v___x_383_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_a(void){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = lean_unsigned_to_nat(1u);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorIdx(lean_object* v_x_385_){
_start:
{
switch(lean_obj_tag(v_x_385_))
{
case 0:
{
lean_object* v___x_386_; 
v___x_386_ = lean_unsigned_to_nat(0u);
return v___x_386_;
}
case 1:
{
lean_object* v___x_387_; 
v___x_387_ = lean_unsigned_to_nat(1u);
return v___x_387_;
}
case 2:
{
lean_object* v___x_388_; 
v___x_388_ = lean_unsigned_to_nat(2u);
return v___x_388_;
}
case 3:
{
lean_object* v___x_389_; 
v___x_389_ = lean_unsigned_to_nat(3u);
return v___x_389_;
}
default: 
{
lean_object* v___x_390_; 
v___x_390_ = lean_unsigned_to_nat(4u);
return v___x_390_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorIdx___boxed(lean_object* v_x_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_Lean_Grind_AC_SubseqResult_ctorIdx(v_x_391_);
lean_dec(v_x_391_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(lean_object* v_t_393_, lean_object* v_k_394_){
_start:
{
switch(lean_obj_tag(v_t_393_))
{
case 2:
{
lean_object* v_s_395_; lean_object* v___x_396_; 
v_s_395_ = lean_ctor_get(v_t_393_, 0);
lean_inc_ref(v_s_395_);
lean_dec_ref_known(v_t_393_, 1);
v___x_396_ = lean_apply_1(v_k_394_, v_s_395_);
return v___x_396_;
}
case 3:
{
lean_object* v_s_397_; lean_object* v___x_398_; 
v_s_397_ = lean_ctor_get(v_t_393_, 0);
lean_inc_ref(v_s_397_);
lean_dec_ref_known(v_t_393_, 1);
v___x_398_ = lean_apply_1(v_k_394_, v_s_397_);
return v___x_398_;
}
case 4:
{
lean_object* v_p_399_; lean_object* v_s_400_; lean_object* v___x_401_; 
v_p_399_ = lean_ctor_get(v_t_393_, 0);
lean_inc_ref(v_p_399_);
v_s_400_ = lean_ctor_get(v_t_393_, 1);
lean_inc_ref(v_s_400_);
lean_dec_ref_known(v_t_393_, 2);
v___x_401_ = lean_apply_2(v_k_394_, v_p_399_, v_s_400_);
return v___x_401_;
}
default: 
{
lean_dec(v_t_393_);
return v_k_394_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorElim(lean_object* v_motive_402_, lean_object* v_ctorIdx_403_, lean_object* v_t_404_, lean_object* v_h_405_, lean_object* v_k_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_404_, v_k_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_ctorElim___boxed(lean_object* v_motive_408_, lean_object* v_ctorIdx_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_k_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_Grind_AC_SubseqResult_ctorElim(v_motive_408_, v_ctorIdx_409_, v_t_410_, v_h_411_, v_k_412_);
lean_dec(v_ctorIdx_409_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_false_elim___redArg(lean_object* v_t_414_, lean_object* v_false_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_414_, v_false_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_false_elim(lean_object* v_motive_417_, lean_object* v_t_418_, lean_object* v_h_419_, lean_object* v_false_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_418_, v_false_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_exact_elim___redArg(lean_object* v_t_422_, lean_object* v_exact_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_422_, v_exact_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_exact_elim(lean_object* v_motive_425_, lean_object* v_t_426_, lean_object* v_h_427_, lean_object* v_exact_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_426_, v_exact_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_prefix_elim___redArg(lean_object* v_t_430_, lean_object* v_prefix_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_430_, v_prefix_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_prefix_elim(lean_object* v_motive_433_, lean_object* v_t_434_, lean_object* v_h_435_, lean_object* v_prefix_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_434_, v_prefix_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_suffix_elim___redArg(lean_object* v_t_438_, lean_object* v_suffix_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_438_, v_suffix_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_suffix_elim(lean_object* v_motive_441_, lean_object* v_t_442_, lean_object* v_h_443_, lean_object* v_suffix_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_442_, v_suffix_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_middle_elim___redArg(lean_object* v_t_446_, lean_object* v_middle_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_446_, v_middle_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubseqResult_middle_elim(lean_object* v_motive_449_, lean_object* v_t_450_, lean_object* v_h_451_, lean_object* v_middle_452_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lean_Grind_AC_SubseqResult_ctorElim___redArg(v_t_450_, v_middle_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_subseq_go(lean_object* v_s_u2081_454_, lean_object* v_s_u2082_455_, lean_object* v_acc_456_){
_start:
{
if (lean_obj_tag(v_s_u2082_455_) == 0)
{
uint8_t v___x_457_; 
v___x_457_ = l_Lean_Grind_AC_instBEqSeq_beq(v_s_u2081_454_, v_s_u2082_455_);
lean_dec_ref_known(v_s_u2082_455_, 1);
lean_dec_ref(v_s_u2081_454_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
lean_dec_ref(v_acc_456_);
v___x_458_ = lean_box(0);
return v___x_458_;
}
else
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = l_Lean_Grind_AC_Seq_reverse(v_acc_456_);
v___x_460_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
return v___x_460_;
}
}
else
{
lean_object* v_x_461_; lean_object* v_s_462_; lean_object* v___x_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_476_; 
v_x_461_ = lean_ctor_get(v_s_u2082_455_, 0);
lean_inc(v_x_461_);
v_s_462_ = lean_ctor_get(v_s_u2082_455_, 1);
lean_inc_ref(v_s_462_);
lean_inc_ref(v_s_u2081_454_);
v___x_463_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith(v_s_u2082_455_, v_s_u2081_454_);
v_isSharedCheck_476_ = !lean_is_exclusive(v_s_u2082_455_);
if (v_isSharedCheck_476_ == 0)
{
lean_object* v_unused_477_; lean_object* v_unused_478_; 
v_unused_477_ = lean_ctor_get(v_s_u2082_455_, 1);
lean_dec(v_unused_477_);
v_unused_478_ = lean_ctor_get(v_s_u2082_455_, 0);
lean_dec(v_unused_478_);
v___x_465_ = v_s_u2082_455_;
v_isShared_466_ = v_isSharedCheck_476_;
goto v_resetjp_464_;
}
else
{
lean_dec(v_s_u2082_455_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_476_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
switch(lean_obj_tag(v___x_463_))
{
case 0:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v_acc_456_);
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_x_461_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_acc_456_);
v___x_468_ = v_reuseFailAlloc_470_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
v_s_u2082_455_ = v_s_462_;
v_acc_456_ = v___x_468_;
goto _start;
}
}
case 1:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
lean_del_object(v___x_465_);
lean_dec_ref(v_s_462_);
lean_dec(v_x_461_);
lean_dec_ref(v_s_u2081_454_);
v___x_471_ = l_Lean_Grind_AC_Seq_reverse(v_acc_456_);
v___x_472_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
return v___x_472_;
}
default: 
{
lean_object* v_s_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
lean_del_object(v___x_465_);
lean_dec_ref(v_s_462_);
lean_dec(v_x_461_);
lean_dec_ref(v_s_u2081_454_);
v_s_473_ = lean_ctor_get(v___x_463_, 0);
lean_inc_ref(v_s_473_);
lean_dec_ref_known(v___x_463_, 1);
v___x_474_ = l_Lean_Grind_AC_Seq_reverse(v_acc_456_);
v___x_475_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
lean_ctor_set(v___x_475_, 1, v_s_473_);
return v___x_475_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_subseq(lean_object* v_s_u2081_479_, lean_object* v_s_u2082_480_){
_start:
{
if (lean_obj_tag(v_s_u2082_480_) == 0)
{
uint8_t v___x_481_; 
v___x_481_ = l_Lean_Grind_AC_instBEqSeq_beq(v_s_u2081_479_, v_s_u2082_480_);
lean_dec_ref_known(v_s_u2082_480_, 1);
lean_dec_ref(v_s_u2081_479_);
if (v___x_481_ == 0)
{
lean_object* v___x_482_; 
v___x_482_ = lean_box(0);
return v___x_482_;
}
else
{
lean_object* v___x_483_; 
v___x_483_ = lean_box(1);
return v___x_483_;
}
}
else
{
lean_object* v_x_484_; lean_object* v_s_485_; lean_object* v___x_486_; 
v_x_484_ = lean_ctor_get(v_s_u2082_480_, 0);
lean_inc(v_x_484_);
v_s_485_ = lean_ctor_get(v_s_u2082_480_, 1);
lean_inc_ref(v_s_485_);
lean_inc_ref(v_s_u2081_479_);
v___x_486_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith(v_s_u2082_480_, v_s_u2081_479_);
lean_dec_ref_known(v_s_u2082_480_, 2);
switch(lean_obj_tag(v___x_486_))
{
case 0:
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v_x_484_);
v___x_488_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_subseq_go(v_s_u2081_479_, v_s_485_, v___x_487_);
return v___x_488_;
}
case 1:
{
lean_object* v___x_489_; 
lean_dec_ref(v_s_485_);
lean_dec(v_x_484_);
lean_dec_ref(v_s_u2081_479_);
v___x_489_ = lean_box(1);
return v___x_489_;
}
default: 
{
lean_object* v_s_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
lean_dec_ref(v_s_485_);
lean_dec(v_x_484_);
lean_dec_ref(v_s_u2081_479_);
v_s_490_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_497_ == 0)
{
v___x_492_ = v___x_486_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_s_490_);
lean_dec(v___x_486_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_495_; 
if (v_isShared_493_ == 0)
{
v___x_495_ = v___x_492_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_s_490_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorIdx(lean_object* v_x_498_){
_start:
{
switch(lean_obj_tag(v_x_498_))
{
case 0:
{
lean_object* v___x_499_; 
v___x_499_ = lean_unsigned_to_nat(0u);
return v___x_499_;
}
case 1:
{
lean_object* v___x_500_; 
v___x_500_ = lean_unsigned_to_nat(1u);
return v___x_500_;
}
default: 
{
lean_object* v___x_501_; 
v___x_501_ = lean_unsigned_to_nat(2u);
return v___x_501_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorIdx___boxed(lean_object* v_x_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Grind_AC_SubsetResult_ctorIdx(v_x_502_);
lean_dec(v_x_502_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorElim___redArg(lean_object* v_t_504_, lean_object* v_k_505_){
_start:
{
if (lean_obj_tag(v_t_504_) == 2)
{
lean_object* v_s_506_; lean_object* v___x_507_; 
v_s_506_ = lean_ctor_get(v_t_504_, 0);
lean_inc_ref(v_s_506_);
lean_dec_ref_known(v_t_504_, 1);
v___x_507_ = lean_apply_1(v_k_505_, v_s_506_);
return v___x_507_;
}
else
{
lean_dec(v_t_504_);
return v_k_505_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorElim(lean_object* v_motive_508_, lean_object* v_ctorIdx_509_, lean_object* v_t_510_, lean_object* v_h_511_, lean_object* v_k_512_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lean_Grind_AC_SubsetResult_ctorElim___redArg(v_t_510_, v_k_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_ctorElim___boxed(lean_object* v_motive_514_, lean_object* v_ctorIdx_515_, lean_object* v_t_516_, lean_object* v_h_517_, lean_object* v_k_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lean_Grind_AC_SubsetResult_ctorElim(v_motive_514_, v_ctorIdx_515_, v_t_516_, v_h_517_, v_k_518_);
lean_dec(v_ctorIdx_515_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_false_elim___redArg(lean_object* v_t_520_, lean_object* v_false_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_Grind_AC_SubsetResult_ctorElim___redArg(v_t_520_, v_false_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_false_elim(lean_object* v_motive_523_, lean_object* v_t_524_, lean_object* v_h_525_, lean_object* v_false_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l_Lean_Grind_AC_SubsetResult_ctorElim___redArg(v_t_524_, v_false_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_exact_elim___redArg(lean_object* v_t_528_, lean_object* v_exact_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Lean_Grind_AC_SubsetResult_ctorElim___redArg(v_t_528_, v_exact_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_exact_elim(lean_object* v_motive_531_, lean_object* v_t_532_, lean_object* v_h_533_, lean_object* v_exact_534_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = l_Lean_Grind_AC_SubsetResult_ctorElim___redArg(v_t_532_, v_exact_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_strict_elim___redArg(lean_object* v_t_536_, lean_object* v_strict_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_Grind_AC_SubsetResult_ctorElim___redArg(v_t_536_, v_strict_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_SubsetResult_strict_elim(lean_object* v_motive_539_, lean_object* v_t_540_, lean_object* v_h_541_, lean_object* v_strict_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Lean_Grind_AC_SubsetResult_ctorElim___redArg(v_t_540_, v_strict_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_subset_go(lean_object* v_s_u2081_544_, lean_object* v_s_u2082_545_, lean_object* v_acc_546_){
_start:
{
if (lean_obj_tag(v_s_u2081_544_) == 0)
{
if (lean_obj_tag(v_s_u2082_545_) == 0)
{
lean_object* v_x_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_558_; 
v_x_547_ = lean_ctor_get(v_s_u2081_544_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v_s_u2081_544_);
if (v_isSharedCheck_558_ == 0)
{
v___x_549_ = v_s_u2081_544_;
v_isShared_550_ = v_isSharedCheck_558_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_x_547_);
lean_dec(v_s_u2081_544_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_558_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v_x_551_; uint8_t v___x_552_; 
v_x_551_ = lean_ctor_get(v_s_u2082_545_, 0);
lean_inc(v_x_551_);
lean_dec_ref_known(v_s_u2082_545_, 1);
v___x_552_ = lean_nat_dec_eq(v_x_547_, v_x_551_);
lean_dec(v_x_551_);
lean_dec(v_x_547_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; 
lean_del_object(v___x_549_);
lean_dec_ref(v_acc_546_);
v___x_553_ = lean_box(0);
return v___x_553_;
}
else
{
lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_554_ = l_Lean_Grind_AC_Seq_reverse(v_acc_546_);
if (v_isShared_550_ == 0)
{
lean_ctor_set_tag(v___x_549_, 2);
lean_ctor_set(v___x_549_, 0, v___x_554_);
v___x_556_ = v___x_549_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
else
{
lean_object* v_x_559_; lean_object* v_x_560_; lean_object* v_s_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_582_; 
v_x_559_ = lean_ctor_get(v_s_u2081_544_, 0);
v_x_560_ = lean_ctor_get(v_s_u2082_545_, 0);
v_s_561_ = lean_ctor_get(v_s_u2082_545_, 1);
v_isSharedCheck_582_ = !lean_is_exclusive(v_s_u2082_545_);
if (v_isSharedCheck_582_ == 0)
{
v___x_563_ = v_s_u2082_545_;
v_isShared_564_ = v_isSharedCheck_582_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_s_561_);
lean_inc(v_x_560_);
lean_dec(v_s_u2082_545_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_582_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
uint8_t v___x_565_; 
v___x_565_ = lean_nat_dec_eq(v_x_559_, v_x_560_);
if (v___x_565_ == 0)
{
uint8_t v___x_566_; 
v___x_566_ = lean_nat_dec_lt(v_x_559_, v_x_560_);
if (v___x_566_ == 0)
{
lean_object* v___x_568_; 
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 1, v_acc_546_);
v___x_568_ = v___x_563_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_x_560_);
lean_ctor_set(v_reuseFailAlloc_570_, 1, v_acc_546_);
v___x_568_ = v_reuseFailAlloc_570_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
v_s_u2082_545_ = v_s_561_;
v_acc_546_ = v___x_568_;
goto _start;
}
}
else
{
lean_object* v___x_571_; 
lean_del_object(v___x_563_);
lean_dec_ref(v_s_561_);
lean_dec(v_x_560_);
lean_dec_ref_known(v_s_u2081_544_, 1);
lean_dec_ref(v_acc_546_);
v___x_571_ = lean_box(0);
return v___x_571_;
}
}
else
{
lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_580_; 
lean_del_object(v___x_563_);
lean_dec(v_x_560_);
v_isSharedCheck_580_ = !lean_is_exclusive(v_s_u2081_544_);
if (v_isSharedCheck_580_ == 0)
{
lean_object* v_unused_581_; 
v_unused_581_ = lean_ctor_get(v_s_u2081_544_, 0);
lean_dec(v_unused_581_);
v___x_573_ = v_s_u2081_544_;
v_isShared_574_ = v_isSharedCheck_580_;
goto v_resetjp_572_;
}
else
{
lean_dec(v_s_u2081_544_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_580_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
v___x_575_ = l_Lean_Grind_AC_Seq_reverse(v_acc_546_);
v___x_576_ = l_Lean_Grind_AC_Seq_concat(v___x_575_, v_s_561_);
if (v_isShared_574_ == 0)
{
lean_ctor_set_tag(v___x_573_, 2);
lean_ctor_set(v___x_573_, 0, v___x_576_);
v___x_578_ = v___x_573_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
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
if (lean_obj_tag(v_s_u2082_545_) == 0)
{
lean_object* v___x_583_; 
lean_dec_ref_known(v_s_u2082_545_, 1);
lean_dec_ref_known(v_s_u2081_544_, 2);
lean_dec_ref(v_acc_546_);
v___x_583_ = lean_box(0);
return v___x_583_;
}
else
{
lean_object* v_x_584_; lean_object* v_s_585_; lean_object* v_x_586_; lean_object* v_s_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_599_; 
v_x_584_ = lean_ctor_get(v_s_u2081_544_, 0);
v_s_585_ = lean_ctor_get(v_s_u2081_544_, 1);
v_x_586_ = lean_ctor_get(v_s_u2082_545_, 0);
v_s_587_ = lean_ctor_get(v_s_u2082_545_, 1);
v_isSharedCheck_599_ = !lean_is_exclusive(v_s_u2082_545_);
if (v_isSharedCheck_599_ == 0)
{
v___x_589_ = v_s_u2082_545_;
v_isShared_590_ = v_isSharedCheck_599_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_s_587_);
lean_inc(v_x_586_);
lean_dec(v_s_u2082_545_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_599_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
uint8_t v___x_591_; 
v___x_591_ = lean_nat_dec_eq(v_x_584_, v_x_586_);
if (v___x_591_ == 0)
{
uint8_t v___x_592_; 
v___x_592_ = lean_nat_dec_lt(v_x_584_, v_x_586_);
if (v___x_592_ == 0)
{
lean_object* v___x_594_; 
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 1, v_acc_546_);
v___x_594_ = v___x_589_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_x_586_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v_acc_546_);
v___x_594_ = v_reuseFailAlloc_596_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
v_s_u2082_545_ = v_s_587_;
v_acc_546_ = v___x_594_;
goto _start;
}
}
else
{
lean_object* v___x_597_; 
lean_del_object(v___x_589_);
lean_dec_ref(v_s_587_);
lean_dec(v_x_586_);
lean_dec_ref_known(v_s_u2081_544_, 2);
lean_dec_ref(v_acc_546_);
v___x_597_ = lean_box(0);
return v___x_597_;
}
}
else
{
lean_inc_ref(v_s_585_);
lean_del_object(v___x_589_);
lean_dec(v_x_586_);
lean_dec_ref_known(v_s_u2081_544_, 2);
v_s_u2081_544_ = v_s_585_;
v_s_u2082_545_ = v_s_587_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_subset(lean_object* v_s_u2081_600_, lean_object* v_s_u2082_601_){
_start:
{
if (lean_obj_tag(v_s_u2081_600_) == 0)
{
if (lean_obj_tag(v_s_u2082_601_) == 0)
{
lean_object* v_x_602_; lean_object* v_x_603_; uint8_t v___x_604_; 
v_x_602_ = lean_ctor_get(v_s_u2081_600_, 0);
lean_inc(v_x_602_);
lean_dec_ref_known(v_s_u2081_600_, 1);
v_x_603_ = lean_ctor_get(v_s_u2082_601_, 0);
lean_inc(v_x_603_);
lean_dec_ref_known(v_s_u2082_601_, 1);
v___x_604_ = lean_nat_dec_eq(v_x_602_, v_x_603_);
lean_dec(v_x_603_);
lean_dec(v_x_602_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; 
v___x_605_ = lean_box(0);
return v___x_605_;
}
else
{
lean_object* v___x_606_; 
v___x_606_ = lean_box(1);
return v___x_606_;
}
}
else
{
lean_object* v_x_607_; lean_object* v_x_608_; lean_object* v_s_609_; uint8_t v___x_610_; 
v_x_607_ = lean_ctor_get(v_s_u2081_600_, 0);
v_x_608_ = lean_ctor_get(v_s_u2082_601_, 0);
lean_inc(v_x_608_);
v_s_609_ = lean_ctor_get(v_s_u2082_601_, 1);
lean_inc_ref(v_s_609_);
lean_dec_ref_known(v_s_u2082_601_, 2);
v___x_610_ = lean_nat_dec_eq(v_x_607_, v_x_608_);
if (v___x_610_ == 0)
{
uint8_t v___x_611_; 
v___x_611_ = lean_nat_dec_lt(v_x_607_, v_x_608_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v_x_608_);
v___x_613_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_subset_go(v_s_u2081_600_, v_s_609_, v___x_612_);
return v___x_613_;
}
else
{
lean_object* v___x_614_; 
lean_dec_ref(v_s_609_);
lean_dec(v_x_608_);
lean_dec_ref_known(v_s_u2081_600_, 1);
v___x_614_ = lean_box(0);
return v___x_614_;
}
}
else
{
lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec(v_x_608_);
v_isSharedCheck_621_ = !lean_is_exclusive(v_s_u2081_600_);
if (v_isSharedCheck_621_ == 0)
{
lean_object* v_unused_622_; 
v_unused_622_ = lean_ctor_get(v_s_u2081_600_, 0);
lean_dec(v_unused_622_);
v___x_616_ = v_s_u2081_600_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_dec(v_s_u2081_600_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
lean_ctor_set_tag(v___x_616_, 2);
lean_ctor_set(v___x_616_, 0, v_s_609_);
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_s_609_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_s_u2082_601_) == 0)
{
lean_object* v___x_623_; 
lean_dec_ref_known(v_s_u2082_601_, 1);
lean_dec_ref_known(v_s_u2081_600_, 2);
v___x_623_ = lean_box(0);
return v___x_623_;
}
else
{
lean_object* v_x_624_; lean_object* v_s_625_; lean_object* v_x_626_; lean_object* v_s_627_; uint8_t v___x_628_; 
v_x_624_ = lean_ctor_get(v_s_u2081_600_, 0);
v_s_625_ = lean_ctor_get(v_s_u2081_600_, 1);
v_x_626_ = lean_ctor_get(v_s_u2082_601_, 0);
lean_inc(v_x_626_);
v_s_627_ = lean_ctor_get(v_s_u2082_601_, 1);
lean_inc_ref(v_s_627_);
lean_dec_ref_known(v_s_u2082_601_, 2);
v___x_628_ = lean_nat_dec_eq(v_x_624_, v_x_626_);
if (v___x_628_ == 0)
{
uint8_t v___x_629_; 
v___x_629_ = lean_nat_dec_lt(v_x_624_, v_x_626_);
if (v___x_629_ == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v_x_626_);
v___x_631_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_subset_go(v_s_u2081_600_, v_s_627_, v___x_630_);
return v___x_631_;
}
else
{
lean_object* v___x_632_; 
lean_dec_ref(v_s_627_);
lean_dec(v_x_626_);
lean_dec_ref_known(v_s_u2081_600_, 2);
v___x_632_ = lean_box(0);
return v___x_632_;
}
}
else
{
lean_inc_ref(v_s_625_);
lean_dec(v_x_626_);
lean_dec_ref_known(v_s_u2081_600_, 2);
v_s_u2081_600_ = v_s_625_;
v_s_u2082_601_ = v_s_627_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_isSorted_go(lean_object* v_x_634_, lean_object* v_s_635_){
_start:
{
if (lean_obj_tag(v_s_635_) == 0)
{
lean_object* v_x_636_; uint8_t v___x_637_; 
v_x_636_ = lean_ctor_get(v_s_635_, 0);
v___x_637_ = lean_nat_dec_le(v_x_634_, v_x_636_);
return v___x_637_;
}
else
{
lean_object* v_x_638_; lean_object* v_s_639_; uint8_t v___x_640_; 
v_x_638_ = lean_ctor_get(v_s_635_, 0);
v_s_639_ = lean_ctor_get(v_s_635_, 1);
v___x_640_ = lean_nat_dec_le(v_x_634_, v_x_638_);
if (v___x_640_ == 0)
{
return v___x_640_;
}
else
{
v_x_634_ = v_x_638_;
v_s_635_ = v_s_639_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_isSorted_go___boxed(lean_object* v_x_642_, lean_object* v_s_643_){
_start:
{
uint8_t v_res_644_; lean_object* v_r_645_; 
v_res_644_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_isSorted_go(v_x_642_, v_s_643_);
lean_dec_ref(v_s_643_);
lean_dec(v_x_642_);
v_r_645_ = lean_box(v_res_644_);
return v_r_645_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_isSorted(lean_object* v_s_646_){
_start:
{
if (lean_obj_tag(v_s_646_) == 0)
{
uint8_t v___x_647_; 
v___x_647_ = 1;
return v___x_647_;
}
else
{
lean_object* v_x_648_; lean_object* v_s_649_; uint8_t v___x_650_; 
v_x_648_ = lean_ctor_get(v_s_646_, 0);
v_s_649_ = lean_ctor_get(v_s_646_, 1);
v___x_650_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_isSorted_go(v_x_648_, v_s_649_);
return v___x_650_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_isSorted___boxed(lean_object* v_s_651_){
_start:
{
uint8_t v_res_652_; lean_object* v_r_653_; 
v_res_652_ = l_Lean_Grind_AC_Seq_isSorted(v_s_651_);
lean_dec_ref(v_s_651_);
v_r_653_ = lean_box(v_res_652_);
return v_r_653_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_contains(lean_object* v_s_654_, lean_object* v_x_655_){
_start:
{
if (lean_obj_tag(v_s_654_) == 0)
{
lean_object* v_x_656_; uint8_t v___x_657_; 
v_x_656_ = lean_ctor_get(v_s_654_, 0);
v___x_657_ = lean_nat_dec_eq(v_x_655_, v_x_656_);
return v___x_657_;
}
else
{
lean_object* v_x_658_; lean_object* v_s_659_; uint8_t v___x_660_; 
v_x_658_ = lean_ctor_get(v_s_654_, 0);
v_s_659_ = lean_ctor_get(v_s_654_, 1);
v___x_660_ = lean_nat_dec_eq(v_x_655_, v_x_658_);
if (v___x_660_ == 0)
{
v_s_654_ = v_s_659_;
goto _start;
}
else
{
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_contains___boxed(lean_object* v_s_662_, lean_object* v_x_663_){
_start:
{
uint8_t v_res_664_; lean_object* v_r_665_; 
v_res_664_ = l_Lean_Grind_AC_Seq_contains(v_s_662_, v_x_663_);
lean_dec(v_x_663_);
lean_dec_ref(v_s_662_);
v_r_665_ = lean_box(v_res_664_);
return v_r_665_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_noAdjacentDuplicates_go(lean_object* v_x_666_, lean_object* v_s_667_){
_start:
{
if (lean_obj_tag(v_s_667_) == 0)
{
lean_object* v_x_668_; uint8_t v___x_669_; 
v_x_668_ = lean_ctor_get(v_s_667_, 0);
v___x_669_ = lean_nat_dec_eq(v_x_666_, v_x_668_);
if (v___x_669_ == 0)
{
uint8_t v___x_670_; 
v___x_670_ = 1;
return v___x_670_;
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
lean_object* v_x_672_; lean_object* v_s_673_; uint8_t v___x_674_; 
v_x_672_ = lean_ctor_get(v_s_667_, 0);
v_s_673_ = lean_ctor_get(v_s_667_, 1);
v___x_674_ = lean_nat_dec_eq(v_x_666_, v_x_672_);
if (v___x_674_ == 0)
{
v_x_666_ = v_x_672_;
v_s_667_ = v_s_673_;
goto _start;
}
else
{
uint8_t v___x_676_; 
v___x_676_ = 0;
return v___x_676_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_noAdjacentDuplicates_go___boxed(lean_object* v_x_677_, lean_object* v_s_678_){
_start:
{
uint8_t v_res_679_; lean_object* v_r_680_; 
v_res_679_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_noAdjacentDuplicates_go(v_x_677_, v_s_678_);
lean_dec_ref(v_s_678_);
lean_dec(v_x_677_);
v_r_680_ = lean_box(v_res_679_);
return v_r_680_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_noAdjacentDuplicates(lean_object* v_s_681_){
_start:
{
if (lean_obj_tag(v_s_681_) == 0)
{
uint8_t v___x_682_; 
v___x_682_ = 1;
return v___x_682_;
}
else
{
lean_object* v_x_683_; lean_object* v_s_684_; uint8_t v___x_685_; 
v_x_683_ = lean_ctor_get(v_s_681_, 0);
v_s_684_ = lean_ctor_get(v_s_681_, 1);
v___x_685_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_noAdjacentDuplicates_go(v_x_683_, v_s_684_);
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_noAdjacentDuplicates___boxed(lean_object* v_s_686_){
_start:
{
uint8_t v_res_687_; lean_object* v_r_688_; 
v_res_687_ = l_Lean_Grind_AC_Seq_noAdjacentDuplicates(v_s_686_);
lean_dec_ref(v_s_686_);
v_r_688_ = lean_box(v_res_687_);
return v_r_688_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_sharesVar(lean_object* v_s_u2081_689_, lean_object* v_s_u2082_690_){
_start:
{
if (lean_obj_tag(v_s_u2081_689_) == 0)
{
if (lean_obj_tag(v_s_u2082_690_) == 0)
{
lean_object* v_x_691_; lean_object* v_x_692_; uint8_t v___x_693_; 
v_x_691_ = lean_ctor_get(v_s_u2081_689_, 0);
v_x_692_ = lean_ctor_get(v_s_u2082_690_, 0);
v___x_693_ = lean_nat_dec_eq(v_x_691_, v_x_692_);
return v___x_693_;
}
else
{
lean_object* v_x_694_; lean_object* v_x_695_; lean_object* v_s_696_; uint8_t v___x_697_; 
v_x_694_ = lean_ctor_get(v_s_u2081_689_, 0);
v_x_695_ = lean_ctor_get(v_s_u2082_690_, 0);
v_s_696_ = lean_ctor_get(v_s_u2082_690_, 1);
v___x_697_ = lean_nat_dec_eq(v_x_694_, v_x_695_);
if (v___x_697_ == 0)
{
v_s_u2082_690_ = v_s_696_;
goto _start;
}
else
{
return v___x_697_;
}
}
}
else
{
if (lean_obj_tag(v_s_u2082_690_) == 0)
{
lean_object* v_x_699_; lean_object* v_s_700_; lean_object* v_x_701_; uint8_t v___x_702_; 
v_x_699_ = lean_ctor_get(v_s_u2081_689_, 0);
v_s_700_ = lean_ctor_get(v_s_u2081_689_, 1);
v_x_701_ = lean_ctor_get(v_s_u2082_690_, 0);
v___x_702_ = lean_nat_dec_eq(v_x_699_, v_x_701_);
if (v___x_702_ == 0)
{
v_s_u2081_689_ = v_s_700_;
goto _start;
}
else
{
return v___x_702_;
}
}
else
{
lean_object* v_x_704_; lean_object* v_s_705_; lean_object* v_x_706_; lean_object* v_s_707_; uint8_t v___x_708_; 
v_x_704_ = lean_ctor_get(v_s_u2081_689_, 0);
v_s_705_ = lean_ctor_get(v_s_u2081_689_, 1);
v_x_706_ = lean_ctor_get(v_s_u2082_690_, 0);
v_s_707_ = lean_ctor_get(v_s_u2082_690_, 1);
v___x_708_ = lean_nat_dec_eq(v_x_704_, v_x_706_);
if (v___x_708_ == 0)
{
uint8_t v___x_709_; 
v___x_709_ = lean_nat_dec_lt(v_x_704_, v_x_706_);
if (v___x_709_ == 0)
{
v_s_u2082_690_ = v_s_707_;
goto _start;
}
else
{
v_s_u2081_689_ = v_s_705_;
goto _start;
}
}
else
{
return v___x_708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_sharesVar___boxed(lean_object* v_s_u2081_712_, lean_object* v_s_u2082_713_){
_start:
{
uint8_t v_res_714_; lean_object* v_r_715_; 
v_res_714_ = l_Lean_Grind_AC_Seq_sharesVar(v_s_u2081_712_, v_s_u2082_713_);
lean_dec_ref(v_s_u2082_713_);
lean_dec_ref(v_s_u2081_712_);
v_r_715_ = lean_box(v_res_714_);
return v_r_715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith_match__1_splitter___redArg(lean_object* v_s_u2082_716_, lean_object* v_s_u2081_717_, lean_object* v_h__1_718_, lean_object* v_h__2_719_, lean_object* v_h__3_720_, lean_object* v_h__4_721_){
_start:
{
if (lean_obj_tag(v_s_u2082_716_) == 0)
{
lean_dec(v_h__4_721_);
lean_dec(v_h__3_720_);
if (lean_obj_tag(v_s_u2081_717_) == 0)
{
lean_object* v_x_722_; lean_object* v_x_723_; lean_object* v___x_724_; 
lean_dec(v_h__2_719_);
v_x_722_ = lean_ctor_get(v_s_u2082_716_, 0);
lean_inc(v_x_722_);
lean_dec_ref_known(v_s_u2082_716_, 1);
v_x_723_ = lean_ctor_get(v_s_u2081_717_, 0);
lean_inc(v_x_723_);
lean_dec_ref_known(v_s_u2081_717_, 1);
v___x_724_ = lean_apply_2(v_h__1_718_, v_x_722_, v_x_723_);
return v___x_724_;
}
else
{
lean_object* v_x_725_; lean_object* v_x_726_; lean_object* v_s_727_; lean_object* v___x_728_; 
lean_dec(v_h__1_718_);
v_x_725_ = lean_ctor_get(v_s_u2082_716_, 0);
lean_inc(v_x_725_);
lean_dec_ref_known(v_s_u2082_716_, 1);
v_x_726_ = lean_ctor_get(v_s_u2081_717_, 0);
lean_inc(v_x_726_);
v_s_727_ = lean_ctor_get(v_s_u2081_717_, 1);
lean_inc_ref(v_s_727_);
lean_dec_ref_known(v_s_u2081_717_, 2);
v___x_728_ = lean_apply_3(v_h__2_719_, v_x_725_, v_x_726_, v_s_727_);
return v___x_728_;
}
}
else
{
lean_dec(v_h__2_719_);
lean_dec(v_h__1_718_);
if (lean_obj_tag(v_s_u2081_717_) == 0)
{
lean_object* v_x_729_; lean_object* v_s_730_; lean_object* v_x_731_; lean_object* v___x_732_; 
lean_dec(v_h__4_721_);
v_x_729_ = lean_ctor_get(v_s_u2082_716_, 0);
lean_inc(v_x_729_);
v_s_730_ = lean_ctor_get(v_s_u2082_716_, 1);
lean_inc_ref(v_s_730_);
lean_dec_ref_known(v_s_u2082_716_, 2);
v_x_731_ = lean_ctor_get(v_s_u2081_717_, 0);
lean_inc(v_x_731_);
lean_dec_ref_known(v_s_u2081_717_, 1);
v___x_732_ = lean_apply_3(v_h__3_720_, v_x_729_, v_s_730_, v_x_731_);
return v___x_732_;
}
else
{
lean_object* v_x_733_; lean_object* v_s_734_; lean_object* v_x_735_; lean_object* v_s_736_; lean_object* v___x_737_; 
lean_dec(v_h__3_720_);
v_x_733_ = lean_ctor_get(v_s_u2082_716_, 0);
lean_inc(v_x_733_);
v_s_734_ = lean_ctor_get(v_s_u2082_716_, 1);
lean_inc_ref(v_s_734_);
lean_dec_ref_known(v_s_u2082_716_, 2);
v_x_735_ = lean_ctor_get(v_s_u2081_717_, 0);
lean_inc(v_x_735_);
v_s_736_ = lean_ctor_get(v_s_u2081_717_, 1);
lean_inc_ref(v_s_736_);
lean_dec_ref_known(v_s_u2081_717_, 2);
v___x_737_ = lean_apply_4(v_h__4_721_, v_x_733_, v_s_734_, v_x_735_, v_s_736_);
return v___x_737_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith_match__1_splitter(lean_object* v_motive_738_, lean_object* v_s_u2082_739_, lean_object* v_s_u2081_740_, lean_object* v_h__1_741_, lean_object* v_h__2_742_, lean_object* v_h__3_743_, lean_object* v_h__4_744_){
_start:
{
if (lean_obj_tag(v_s_u2082_739_) == 0)
{
lean_dec(v_h__4_744_);
lean_dec(v_h__3_743_);
if (lean_obj_tag(v_s_u2081_740_) == 0)
{
lean_object* v_x_745_; lean_object* v_x_746_; lean_object* v___x_747_; 
lean_dec(v_h__2_742_);
v_x_745_ = lean_ctor_get(v_s_u2082_739_, 0);
lean_inc(v_x_745_);
lean_dec_ref_known(v_s_u2082_739_, 1);
v_x_746_ = lean_ctor_get(v_s_u2081_740_, 0);
lean_inc(v_x_746_);
lean_dec_ref_known(v_s_u2081_740_, 1);
v___x_747_ = lean_apply_2(v_h__1_741_, v_x_745_, v_x_746_);
return v___x_747_;
}
else
{
lean_object* v_x_748_; lean_object* v_x_749_; lean_object* v_s_750_; lean_object* v___x_751_; 
lean_dec(v_h__1_741_);
v_x_748_ = lean_ctor_get(v_s_u2082_739_, 0);
lean_inc(v_x_748_);
lean_dec_ref_known(v_s_u2082_739_, 1);
v_x_749_ = lean_ctor_get(v_s_u2081_740_, 0);
lean_inc(v_x_749_);
v_s_750_ = lean_ctor_get(v_s_u2081_740_, 1);
lean_inc_ref(v_s_750_);
lean_dec_ref_known(v_s_u2081_740_, 2);
v___x_751_ = lean_apply_3(v_h__2_742_, v_x_748_, v_x_749_, v_s_750_);
return v___x_751_;
}
}
else
{
lean_dec(v_h__2_742_);
lean_dec(v_h__1_741_);
if (lean_obj_tag(v_s_u2081_740_) == 0)
{
lean_object* v_x_752_; lean_object* v_s_753_; lean_object* v_x_754_; lean_object* v___x_755_; 
lean_dec(v_h__4_744_);
v_x_752_ = lean_ctor_get(v_s_u2082_739_, 0);
lean_inc(v_x_752_);
v_s_753_ = lean_ctor_get(v_s_u2082_739_, 1);
lean_inc_ref(v_s_753_);
lean_dec_ref_known(v_s_u2082_739_, 2);
v_x_754_ = lean_ctor_get(v_s_u2081_740_, 0);
lean_inc(v_x_754_);
lean_dec_ref_known(v_s_u2081_740_, 1);
v___x_755_ = lean_apply_3(v_h__3_743_, v_x_752_, v_s_753_, v_x_754_);
return v___x_755_;
}
else
{
lean_object* v_x_756_; lean_object* v_s_757_; lean_object* v_x_758_; lean_object* v_s_759_; lean_object* v___x_760_; 
lean_dec(v_h__3_743_);
v_x_756_ = lean_ctor_get(v_s_u2082_739_, 0);
lean_inc(v_x_756_);
v_s_757_ = lean_ctor_get(v_s_u2082_739_, 1);
lean_inc_ref(v_s_757_);
lean_dec_ref_known(v_s_u2082_739_, 2);
v_x_758_ = lean_ctor_get(v_s_u2081_740_, 0);
lean_inc(v_x_758_);
v_s_759_ = lean_ctor_get(v_s_u2081_740_, 1);
lean_inc_ref(v_s_759_);
lean_dec_ref_known(v_s_u2081_740_, 2);
v___x_760_ = lean_apply_4(v_h__4_744_, v_x_756_, v_s_757_, v_x_758_, v_s_759_);
return v___x_760_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_toSeq_x3f_go(lean_object* v_xs_761_, lean_object* v_acc_762_){
_start:
{
if (lean_obj_tag(v_xs_761_) == 0)
{
lean_object* v___x_763_; 
v___x_763_ = l_Lean_Grind_AC_Seq_reverse(v_acc_762_);
return v___x_763_;
}
else
{
lean_object* v_head_764_; lean_object* v_tail_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_773_; 
v_head_764_ = lean_ctor_get(v_xs_761_, 0);
v_tail_765_ = lean_ctor_get(v_xs_761_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v_xs_761_);
if (v_isSharedCheck_773_ == 0)
{
v___x_767_ = v_xs_761_;
v_isShared_768_ = v_isSharedCheck_773_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_tail_765_);
lean_inc(v_head_764_);
lean_dec(v_xs_761_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_773_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v_acc_762_);
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_head_764_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_acc_762_);
v___x_770_ = v_reuseFailAlloc_772_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
v_xs_761_ = v_tail_765_;
v_acc_762_ = v___x_770_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_toSeq_x3f(lean_object* v_xs_774_){
_start:
{
if (lean_obj_tag(v_xs_774_) == 0)
{
lean_object* v___x_775_; 
v___x_775_ = lean_box(0);
return v___x_775_;
}
else
{
lean_object* v_head_776_; lean_object* v_tail_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v_head_776_ = lean_ctor_get(v_xs_774_, 0);
lean_inc(v_head_776_);
v_tail_777_ = lean_ctor_get(v_xs_774_, 1);
lean_inc(v_tail_777_);
lean_dec_ref_known(v_xs_774_, 2);
v___x_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_778_, 0, v_head_776_);
v___x_779_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_toSeq_x3f_go(v_tail_777_, v___x_778_);
v___x_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
return v___x_780_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(lean_object* v_s_x3f_781_, lean_object* v_x_782_){
_start:
{
if (lean_obj_tag(v_s_x3f_781_) == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_783_, 0, v_x_782_);
v___x_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
return v___x_784_;
}
else
{
lean_object* v_val_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_793_; 
v_val_785_ = lean_ctor_get(v_s_x3f_781_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v_s_x3f_781_);
if (v_isSharedCheck_793_ == 0)
{
v___x_787_ = v_s_x3f_781_;
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_val_785_);
lean_dec(v_s_x3f_781_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_789_, 0, v_x_782_);
lean_ctor_set(v___x_789_, 1, v_val_785_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_789_);
v___x_791_ = v___x_787_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(lean_object* v_s_x3f_794_){
_start:
{
if (lean_obj_tag(v_s_x3f_794_) == 0)
{
return v_s_x3f_794_;
}
else
{
lean_object* v_val_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_803_; 
v_val_795_ = lean_ctor_get(v_s_x3f_794_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v_s_x3f_794_);
if (v_isSharedCheck_803_ == 0)
{
v___x_797_ = v_s_x3f_794_;
v_isShared_798_ = v_isSharedCheck_803_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_val_795_);
lean_dec(v_s_x3f_794_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_803_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_799_; lean_object* v___x_801_; 
v___x_799_ = l_Lean_Grind_AC_Seq_reverse(v_val_795_);
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 0, v___x_799_);
v___x_801_ = v___x_797_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_799_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_app(lean_object* v_s_x3f_804_, lean_object* v_s_x27_805_){
_start:
{
if (lean_obj_tag(v_s_x3f_804_) == 0)
{
lean_object* v___x_806_; 
v___x_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_806_, 0, v_s_x27_805_);
return v___x_806_;
}
else
{
lean_object* v_val_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_815_; 
v_val_807_ = lean_ctor_get(v_s_x3f_804_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v_s_x3f_804_);
if (v_isSharedCheck_815_ == 0)
{
v___x_809_ = v_s_x3f_804_;
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_val_807_);
lean_dec(v_s_x3f_804_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_811_ = l_Lean_Grind_AC_Seq_concat(v_val_807_, v_s_x27_805_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_811_);
v___x_813_ = v___x_809_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_811_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult(lean_object* v_r_u2081_816_, lean_object* v_c_817_, lean_object* v_r_u2082_818_){
_start:
{
if (lean_obj_tag(v_r_u2081_816_) == 1)
{
if (lean_obj_tag(v_c_817_) == 1)
{
if (lean_obj_tag(v_r_u2082_818_) == 1)
{
lean_object* v_val_819_; lean_object* v_val_820_; lean_object* v_val_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_830_; 
v_val_819_ = lean_ctor_get(v_r_u2081_816_, 0);
v_val_820_ = lean_ctor_get(v_c_817_, 0);
v_val_821_ = lean_ctor_get(v_r_u2082_818_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v_r_u2082_818_);
if (v_isSharedCheck_830_ == 0)
{
v___x_823_ = v_r_u2082_818_;
v_isShared_824_ = v_isSharedCheck_830_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_val_821_);
lean_dec(v_r_u2082_818_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_830_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_828_; 
lean_inc(v_val_820_);
v___x_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_825_, 0, v_val_820_);
lean_ctor_set(v___x_825_, 1, v_val_821_);
lean_inc(v_val_819_);
v___x_826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_826_, 0, v_val_819_);
lean_ctor_set(v___x_826_, 1, v___x_825_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 0, v___x_826_);
v___x_828_ = v___x_823_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_826_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
else
{
lean_object* v___x_831_; 
lean_dec(v_r_u2082_818_);
v___x_831_ = lean_box(0);
return v___x_831_;
}
}
else
{
lean_object* v___x_832_; 
lean_dec(v_r_u2082_818_);
v___x_832_ = lean_box(0);
return v___x_832_;
}
}
else
{
lean_object* v___x_833_; 
lean_dec(v_r_u2082_818_);
v___x_833_ = lean_box(0);
return v___x_833_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult___boxed(lean_object* v_r_u2081_834_, lean_object* v_c_835_, lean_object* v_r_u2082_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult(v_r_u2081_834_, v_c_835_, v_r_u2082_836_);
lean_dec(v_c_835_);
lean_dec(v_r_u2081_834_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_go(lean_object* v_s_u2081_838_, lean_object* v_s_u2082_839_, lean_object* v_r_u2081_840_, lean_object* v_c_841_, lean_object* v_r_u2082_842_){
_start:
{
if (lean_obj_tag(v_s_u2081_838_) == 0)
{
if (lean_obj_tag(v_s_u2082_839_) == 0)
{
lean_object* v_x_843_; lean_object* v_x_844_; uint8_t v___x_845_; 
v_x_843_ = lean_ctor_get(v_s_u2081_838_, 0);
lean_inc(v_x_843_);
lean_dec_ref_known(v_s_u2081_838_, 1);
v_x_844_ = lean_ctor_get(v_s_u2082_839_, 0);
lean_inc(v_x_844_);
lean_dec_ref_known(v_s_u2082_839_, 1);
v___x_845_ = lean_nat_dec_eq(v_x_843_, v_x_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_846_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_r_u2081_840_, v_x_843_);
v___x_847_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v___x_846_);
v___x_848_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_c_841_);
v___x_849_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_r_u2082_842_, v_x_844_);
v___x_850_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v___x_849_);
v___x_851_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult(v___x_847_, v___x_848_, v___x_850_);
lean_dec(v___x_848_);
lean_dec(v___x_847_);
return v___x_851_;
}
else
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
lean_dec(v_x_844_);
v___x_852_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_r_u2081_840_);
v___x_853_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_c_841_, v_x_843_);
v___x_854_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v___x_853_);
v___x_855_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_r_u2082_842_);
v___x_856_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult(v___x_852_, v___x_854_, v___x_855_);
lean_dec(v___x_854_);
lean_dec(v___x_852_);
return v___x_856_;
}
}
else
{
lean_object* v_x_857_; lean_object* v_x_858_; lean_object* v_s_859_; uint8_t v___x_860_; 
v_x_857_ = lean_ctor_get(v_s_u2081_838_, 0);
v_x_858_ = lean_ctor_get(v_s_u2082_839_, 0);
v_s_859_ = lean_ctor_get(v_s_u2082_839_, 1);
v___x_860_ = lean_nat_dec_eq(v_x_857_, v_x_858_);
if (v___x_860_ == 0)
{
uint8_t v___x_861_; 
v___x_861_ = lean_nat_dec_lt(v_x_857_, v_x_858_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
lean_inc_ref(v_s_859_);
lean_inc(v_x_858_);
lean_dec_ref_known(v_s_u2082_839_, 2);
v___x_862_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_r_u2082_842_, v_x_858_);
v_s_u2082_839_ = v_s_859_;
v_r_u2082_842_ = v___x_862_;
goto _start;
}
else
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
lean_inc(v_x_857_);
lean_dec_ref_known(v_s_u2081_838_, 1);
v___x_864_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_r_u2081_840_, v_x_857_);
v___x_865_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v___x_864_);
v___x_866_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_c_841_);
v___x_867_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_r_u2082_842_);
v___x_868_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_app(v___x_867_, v_s_u2082_839_);
v___x_869_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult(v___x_865_, v___x_866_, v___x_868_);
lean_dec(v___x_866_);
lean_dec(v___x_865_);
return v___x_869_;
}
}
else
{
lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
lean_inc_ref(v_s_859_);
lean_inc(v_x_857_);
lean_dec_ref_known(v_s_u2082_839_, 2);
lean_dec_ref_known(v_s_u2081_838_, 1);
v___x_870_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_r_u2081_840_);
v___x_871_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_c_841_, v_x_857_);
v___x_872_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v___x_871_);
v___x_873_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_r_u2082_842_);
v___x_874_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_app(v___x_873_, v_s_859_);
v___x_875_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult(v___x_870_, v___x_872_, v___x_874_);
lean_dec(v___x_872_);
lean_dec(v___x_870_);
return v___x_875_;
}
}
}
else
{
if (lean_obj_tag(v_s_u2082_839_) == 0)
{
lean_object* v_x_876_; lean_object* v_s_877_; lean_object* v_x_878_; uint8_t v___x_879_; 
v_x_876_ = lean_ctor_get(v_s_u2081_838_, 0);
v_s_877_ = lean_ctor_get(v_s_u2081_838_, 1);
v_x_878_ = lean_ctor_get(v_s_u2082_839_, 0);
v___x_879_ = lean_nat_dec_eq(v_x_876_, v_x_878_);
if (v___x_879_ == 0)
{
uint8_t v___x_880_; 
v___x_880_ = lean_nat_dec_lt(v_x_876_, v_x_878_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
lean_inc(v_x_878_);
lean_dec_ref_known(v_s_u2082_839_, 1);
v___x_881_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_r_u2081_840_);
v___x_882_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_app(v___x_881_, v_s_u2081_838_);
v___x_883_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_c_841_);
v___x_884_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_r_u2082_842_, v_x_878_);
v___x_885_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v___x_884_);
v___x_886_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult(v___x_882_, v___x_883_, v___x_885_);
lean_dec(v___x_883_);
lean_dec(v___x_882_);
return v___x_886_;
}
else
{
lean_object* v___x_887_; 
lean_inc_ref(v_s_877_);
lean_inc(v_x_876_);
lean_dec_ref_known(v_s_u2081_838_, 2);
v___x_887_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_r_u2081_840_, v_x_876_);
v_s_u2081_838_ = v_s_877_;
v_r_u2081_840_ = v___x_887_;
goto _start;
}
}
else
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
lean_inc_ref(v_s_877_);
lean_inc(v_x_876_);
lean_dec_ref_known(v_s_u2082_839_, 1);
lean_dec_ref_known(v_s_u2081_838_, 2);
v___x_889_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_r_u2081_840_);
v___x_890_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_app(v___x_889_, v_s_877_);
v___x_891_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_c_841_, v_x_876_);
v___x_892_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v___x_891_);
v___x_893_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_rev(v_r_u2082_842_);
v___x_894_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_mkResult(v___x_890_, v___x_892_, v___x_893_);
lean_dec(v___x_892_);
lean_dec(v___x_890_);
return v___x_894_;
}
}
else
{
lean_object* v_x_895_; lean_object* v_s_896_; lean_object* v_x_897_; lean_object* v_s_898_; uint8_t v___x_899_; 
v_x_895_ = lean_ctor_get(v_s_u2081_838_, 0);
v_s_896_ = lean_ctor_get(v_s_u2081_838_, 1);
v_x_897_ = lean_ctor_get(v_s_u2082_839_, 0);
v_s_898_ = lean_ctor_get(v_s_u2082_839_, 1);
v___x_899_ = lean_nat_dec_eq(v_x_895_, v_x_897_);
if (v___x_899_ == 0)
{
uint8_t v___x_900_; 
v___x_900_ = lean_nat_dec_lt(v_x_895_, v_x_897_);
if (v___x_900_ == 0)
{
lean_object* v___x_901_; 
lean_inc_ref(v_s_898_);
lean_inc(v_x_897_);
lean_dec_ref_known(v_s_u2082_839_, 2);
v___x_901_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_r_u2082_842_, v_x_897_);
v_s_u2082_839_ = v_s_898_;
v_r_u2082_842_ = v___x_901_;
goto _start;
}
else
{
lean_object* v___x_903_; 
lean_inc_ref(v_s_896_);
lean_inc(v_x_895_);
lean_dec_ref_known(v_s_u2081_838_, 2);
v___x_903_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_r_u2081_840_, v_x_895_);
v_s_u2081_838_ = v_s_896_;
v_r_u2081_840_ = v___x_903_;
goto _start;
}
}
else
{
lean_object* v___x_905_; 
lean_inc_ref(v_s_898_);
lean_inc_ref(v_s_896_);
lean_inc(v_x_895_);
lean_dec_ref_known(v_s_u2082_839_, 2);
lean_dec_ref_known(v_s_u2081_838_, 2);
v___x_905_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_push(v_c_841_, v_x_895_);
v_s_u2081_838_ = v_s_896_;
v_s_u2082_839_ = v_s_898_;
v_c_841_ = v___x_905_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_superposeAC_x3f(lean_object* v_s_u2081_907_, lean_object* v_s_u2082_908_){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_909_ = lean_box(0);
v___x_910_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superposeAC_x3f_go(v_s_u2081_907_, v_s_u2082_908_, v___x_909_, v___x_909_, v___x_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superpose_x3f_go(lean_object* v_s_u2081_911_, lean_object* v_s_u2082_912_, lean_object* v_p_913_){
_start:
{
lean_object* v___x_914_; 
lean_inc_ref(v_s_u2081_911_);
v___x_914_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_startsWith(v_s_u2082_912_, v_s_u2081_911_);
switch(lean_obj_tag(v___x_914_))
{
case 0:
{
if (lean_obj_tag(v_s_u2081_911_) == 0)
{
lean_object* v___x_915_; 
lean_dec_ref_known(v_s_u2081_911_, 1);
lean_dec_ref(v_p_913_);
v___x_915_ = lean_box(0);
return v___x_915_;
}
else
{
lean_object* v_x_916_; lean_object* v_s_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_925_; 
v_x_916_ = lean_ctor_get(v_s_u2081_911_, 0);
v_s_917_ = lean_ctor_get(v_s_u2081_911_, 1);
v_isSharedCheck_925_ = !lean_is_exclusive(v_s_u2081_911_);
if (v_isSharedCheck_925_ == 0)
{
v___x_919_ = v_s_u2081_911_;
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_s_917_);
lean_inc(v_x_916_);
lean_dec(v_s_u2081_911_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_925_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 1, v_p_913_);
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_x_916_);
lean_ctor_set(v_reuseFailAlloc_924_, 1, v_p_913_);
v___x_922_ = v_reuseFailAlloc_924_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
v_s_u2081_911_ = v_s_917_;
v_p_913_ = v___x_922_;
goto _start;
}
}
}
}
case 1:
{
lean_object* v___x_926_; 
lean_dec_ref(v_p_913_);
lean_dec_ref(v_s_u2081_911_);
v___x_926_ = lean_box(0);
return v___x_926_;
}
default: 
{
lean_object* v_s_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_937_; 
v_s_927_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_937_ == 0)
{
v___x_929_ = v___x_914_;
v_isShared_930_ = v_isSharedCheck_937_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_s_927_);
lean_dec(v___x_914_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_937_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_935_; 
v___x_931_ = l_Lean_Grind_AC_Seq_reverse(v_p_913_);
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v_s_u2081_911_);
lean_ctor_set(v___x_932_, 1, v_s_927_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
if (v_isShared_930_ == 0)
{
lean_ctor_set_tag(v___x_929_, 1);
lean_ctor_set(v___x_929_, 0, v___x_933_);
v___x_935_ = v___x_929_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_933_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superpose_x3f_go___boxed(lean_object* v_s_u2081_938_, lean_object* v_s_u2082_939_, lean_object* v_p_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superpose_x3f_go(v_s_u2081_938_, v_s_u2082_939_, v_p_940_);
lean_dec_ref(v_s_u2082_939_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_superpose_x3f(lean_object* v_s_u2081_942_, lean_object* v_s_u2082_943_){
_start:
{
if (lean_obj_tag(v_s_u2081_942_) == 0)
{
lean_object* v___x_944_; 
lean_dec_ref_known(v_s_u2081_942_, 1);
v___x_944_ = lean_box(0);
return v___x_944_;
}
else
{
lean_object* v_x_945_; lean_object* v_s_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v_x_945_ = lean_ctor_get(v_s_u2081_942_, 0);
lean_inc(v_x_945_);
v_s_946_ = lean_ctor_get(v_s_u2081_942_, 1);
lean_inc_ref(v_s_946_);
lean_dec_ref_known(v_s_u2081_942_, 2);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v_x_945_);
v___x_948_ = l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_Seq_superpose_x3f_go(v_s_946_, v_s_u2082_943_, v___x_947_);
return v___x_948_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_superpose_x3f___boxed(lean_object* v_s_u2081_949_, lean_object* v_s_u2082_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Lean_Grind_AC_Seq_superpose_x3f(v_s_u2081_949_, v_s_u2082_950_);
lean_dec_ref(v_s_u2082_950_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_firstVar(lean_object* v_s_952_){
_start:
{
lean_object* v_x_953_; 
v_x_953_ = lean_ctor_get(v_s_952_, 0);
lean_inc(v_x_953_);
return v_x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_firstVar___boxed(lean_object* v_s_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Lean_Grind_AC_Seq_firstVar(v_s_954_);
lean_dec_ref(v_s_954_);
return v_res_955_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_startsWithVar(lean_object* v_s_956_, lean_object* v_x_957_){
_start:
{
lean_object* v_x_958_; uint8_t v___x_959_; 
v_x_958_ = lean_ctor_get(v_s_956_, 0);
v___x_959_ = lean_nat_dec_eq(v_x_957_, v_x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_startsWithVar___boxed(lean_object* v_s_960_, lean_object* v_x_961_){
_start:
{
uint8_t v_res_962_; lean_object* v_r_963_; 
v_res_962_ = l_Lean_Grind_AC_Seq_startsWithVar(v_s_960_, v_x_961_);
lean_dec(v_x_961_);
lean_dec_ref(v_s_960_);
v_r_963_ = lean_box(v_res_962_);
return v_r_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_lastVar(lean_object* v_s_964_){
_start:
{
if (lean_obj_tag(v_s_964_) == 0)
{
lean_object* v_x_965_; 
v_x_965_ = lean_ctor_get(v_s_964_, 0);
lean_inc(v_x_965_);
return v_x_965_;
}
else
{
lean_object* v_s_966_; 
v_s_966_ = lean_ctor_get(v_s_964_, 1);
v_s_964_ = v_s_966_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_lastVar___boxed(lean_object* v_s_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lean_Grind_AC_Seq_lastVar(v_s_968_);
lean_dec_ref(v_s_968_);
return v_res_969_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_AC_Seq_endsWithVar(lean_object* v_s_970_, lean_object* v_x_971_){
_start:
{
if (lean_obj_tag(v_s_970_) == 0)
{
lean_object* v_x_972_; uint8_t v___x_973_; 
v_x_972_ = lean_ctor_get(v_s_970_, 0);
v___x_973_ = lean_nat_dec_eq(v_x_971_, v_x_972_);
return v___x_973_;
}
else
{
lean_object* v_s_974_; 
v_s_974_ = lean_ctor_get(v_s_970_, 1);
v_s_970_ = v_s_974_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Seq_endsWithVar___boxed(lean_object* v_s_976_, lean_object* v_x_977_){
_start:
{
uint8_t v_res_978_; lean_object* v_r_979_; 
v_res_978_ = l_Lean_Grind_AC_Seq_endsWithVar(v_s_976_, v_x_977_);
lean_dec(v_x_977_);
lean_dec_ref(v_s_976_);
v_r_979_ = lean_box(v_res_978_);
return v_r_979_;
}
}
lean_object* runtime_initialize_Init_Grind_AC(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_AC_Seq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Grind_AC_instInhabitedStartsWithResult_default = _init_l_Lean_Grind_AC_instInhabitedStartsWithResult_default();
lean_mark_persistent(l_Lean_Grind_AC_instInhabitedStartsWithResult_default);
l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instInhabitedStartsWithResult = _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instInhabitedStartsWithResult();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_instInhabitedStartsWithResult);
l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_a = _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_a();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_a);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_AC_Seq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a__ = _init_l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a__();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_AC_Seq_0__Lean_Grind_AC_term___x3a_x3a__);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_AC(uint8_t builtin);
lean_object* initialize_Init_Data_Ord(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_AC_Seq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_AC_Seq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_AC_Seq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_AC_Seq(builtin);
}
#ifdef __cplusplus
}
#endif

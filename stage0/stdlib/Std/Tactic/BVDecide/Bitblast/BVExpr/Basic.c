// Lean compiler output
// Module: Std.Tactic.BVDecide.Bitblast.BVExpr.Basic
// Imports: public import Init.Data.Hashable public import Std.Tactic.BVDecide.Bitblast.BoolExpr.Basic public import Init.Data.RArray public import Init.Data.ToString.Macro import Init.Data.BitVec.Lemmas import Init.Omega
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
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_RArray_getImpl___redArg(lean_object*, lean_object*);
lean_object* l_BitVec_setWidth(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_extractLsb_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* lean_nat_lor(lean_object*, lean_object*);
lean_object* lean_nat_lxor(lean_object*, lean_object*);
lean_object* l_BitVec_add(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_mul(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_BitVec_not(lean_object*, lean_object*);
lean_object* l_BitVec_rotateLeft(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_rotateRight(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_sshiftRight(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_reverse(lean_object*, lean_object*);
lean_object* l_BitVec_clz(lean_object*, lean_object*);
lean_object* l_BitVec_cpop(lean_object*, lean_object*);
lean_object* l_BitVec_append___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_replicate(lean_object*, lean_object*, lean_object*);
lean_object* l_BitVec_shiftLeft(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Nat_testBit(lean_object*, lean_object*);
uint8_t l_Std_Tactic_BVDecide_BoolExpr_eval___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_BitVec_repr(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_BitVec_hash(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_instHashableBVBit_hash(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instHashableBVBit_hash___boxed(lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_instHashableBVBit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_instHashableBVBit_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_instHashableBVBit___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_instHashableBVBit___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Tactic_BVDecide_instHashableBVBit = (const lean_object*)&l_Std_Tactic_BVDecide_instHashableBVBit___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVBit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVBit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Tactic_BVDecide_instReprBVBit_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "var"};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__2 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__3 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__4 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__5 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__3_value),((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__6 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__7;
static const lean_string_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__8 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__9 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "w"};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__10 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__11 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__12;
static const lean_string_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__13 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__14 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__14_value;
static const lean_string_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__15 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__15_value;
static lean_once_cell_t l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__16;
static lean_once_cell_t l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__17;
static const lean_ctor_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__18 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__18_value;
static const lean_ctor_object l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__15_value)}};
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__19 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_instReprBVBit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_instReprBVBit_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_instReprBVBit___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Tactic_BVDecide_instReprBVBit = (const lean_object*)&l_Std_Tactic_BVDecide_instReprBVBit___closed__0_value;
static const lean_string_object l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__0_value;
static const lean_string_object l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__1_value;
static const lean_string_object l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__2 = (const lean_object*)&l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instToStringBVBit___lam__0(lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_instToStringBVBit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_instToStringBVBit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_instToStringBVBit___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_instToStringBVBit___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Tactic_BVDecide_instToStringBVBit = (const lean_object*)&l_Std_Tactic_BVDecide_instToStringBVBit___closed__0_value;
static lean_once_cell_t l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__0;
static lean_once_cell_t l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__1;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instInhabitedBVBit;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_and_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_and_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_and_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_and_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_or_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_or_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_or_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_or_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_xor_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_xor_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_xor_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_xor_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_add_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_add_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_add_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_add_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_mul_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_mul_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_mul_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_mul_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_udiv_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_udiv_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_udiv_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_udiv_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_umod_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_umod_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_umod_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_umod_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_instHashableBVBinOp_hash(uint8_t);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instHashableBVBinOp_hash___boxed(lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_instHashableBVBinOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_instHashableBVBinOp_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_instHashableBVBinOp___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_instHashableBVBinOp___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Tactic_BVDecide_instHashableBVBinOp = (const lean_object*)&l_Std_Tactic_BVDecide_instHashableBVBinOp___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVBinOp_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVBinOp(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVBinOp___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_BVBinOp_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "&&"};
static const lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinOp_toString___closed__0_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVBinOp_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "||"};
static const lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinOp_toString___closed__1_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVBinOp_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "^"};
static const lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString___closed__2 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinOp_toString___closed__2_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVBinOp_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString___closed__3 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinOp_toString___closed__3_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVBinOp_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString___closed__4 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinOp_toString___closed__4_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVBinOp_toString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "/ᵤ"};
static const lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString___closed__5 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinOp_toString___closed__5_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVBinOp_toString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "%ᵤ"};
static const lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString___closed__6 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinOp_toString___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString(uint8_t);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString___boxed(lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_BVBinOp_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_BVBinOp_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_BVBinOp_instToString___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinOp_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Tactic_BVDecide_BVBinOp_instToString = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinOp_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_eval(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_eval___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_not_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_not_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_rotateLeft_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_rotateLeft_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_rotateRight_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_rotateRight_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_arithShiftRightConst_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_arithShiftRightConst_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_reverse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_reverse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_clz_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_clz_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_cpop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_cpop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_instHashableBVUnOp_hash(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instHashableBVUnOp_hash___boxed(lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_instHashableBVUnOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_instHashableBVUnOp_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_instHashableBVUnOp___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_instHashableBVUnOp___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Tactic_BVDecide_instHashableBVUnOp = (const lean_object*)&l_Std_Tactic_BVDecide_instHashableBVUnOp___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVUnOp_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVUnOp_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVUnOp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVUnOp___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_BVUnOp_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "~"};
static const lean_object* l_Std_Tactic_BVDecide_BVUnOp_toString___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BVUnOp_toString___closed__0_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVUnOp_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rotL "};
static const lean_object* l_Std_Tactic_BVDecide_BVUnOp_toString___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_BVUnOp_toString___closed__1_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVUnOp_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rotR "};
static const lean_object* l_Std_Tactic_BVDecide_BVUnOp_toString___closed__2 = (const lean_object*)&l_Std_Tactic_BVDecide_BVUnOp_toString___closed__2_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVUnOp_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ">>a "};
static const lean_object* l_Std_Tactic_BVDecide_BVUnOp_toString___closed__3 = (const lean_object*)&l_Std_Tactic_BVDecide_BVUnOp_toString___closed__3_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVUnOp_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rev"};
static const lean_object* l_Std_Tactic_BVDecide_BVUnOp_toString___closed__4 = (const lean_object*)&l_Std_Tactic_BVDecide_BVUnOp_toString___closed__4_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVUnOp_toString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "clz"};
static const lean_object* l_Std_Tactic_BVDecide_BVUnOp_toString___closed__5 = (const lean_object*)&l_Std_Tactic_BVDecide_BVUnOp_toString___closed__5_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVUnOp_toString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cpop"};
static const lean_object* l_Std_Tactic_BVDecide_BVUnOp_toString___closed__6 = (const lean_object*)&l_Std_Tactic_BVDecide_BVUnOp_toString___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_toString(lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_BVUnOp_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_BVUnOp_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_BVUnOp_instToString___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BVUnOp_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Tactic_BVDecide_BVUnOp_instToString = (const lean_object*)&l_Std_Tactic_BVDecide_BVUnOp_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_eval(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_eval___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_var_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_var_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_const_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_const_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_extract_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_extract_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_extract_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_un_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_un_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_un_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftLeft_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftLeft_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftLeft_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftRight_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftRight_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftRight_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_arithShiftRight_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_arithShiftRight_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_arithShiftRight_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_casesOn___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_casesOn___override___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_casesOn___override(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_casesOn___override___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_var___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_const___override(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_extract___override(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin___override(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin___override___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_un___override(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append___override(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate___override(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftLeft___override(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftRight___override(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_arithShiftRight___override(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_BVExpr_hashCode___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_hashCode___override___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg();
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instHashable(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instHashable___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_decEq___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVExpr_decEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_decEq___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_BVExpr_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_toString___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_toString___closed__0_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVExpr_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_toString___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_toString___closed__1_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVExpr_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_toString___closed__2 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_toString___closed__2_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVExpr_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_toString___closed__3 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_toString___closed__3_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVExpr_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " ++ "};
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_toString___closed__4 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_toString___closed__4_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVExpr_toString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "(replicate "};
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_toString___closed__5 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_toString___closed__5_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVExpr_toString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " << "};
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_toString___closed__6 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_toString___closed__6_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVExpr_toString___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " >> "};
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_toString___closed__7 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_toString___closed__7_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVExpr_toString___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " >>a "};
static const lean_object* l_Std_Tactic_BVDecide_BVExpr_toString___closed__8 = (const lean_object*)&l_Std_Tactic_BVDecide_BVExpr_toString___closed__8_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_toString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instToString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_Assignment_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_Assignment_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_eval(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_eval___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic_0__Std_Tactic_BVDecide_BVExpr_toString_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic_0__Std_Tactic_BVDecide_BVExpr_toString_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eq_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eq_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eq_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eq_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ult_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ult_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ult_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ult_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Tactic_BVDecide_BVBinPred_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=="};
static const lean_object* l_Std_Tactic_BVDecide_BVBinPred_toString___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinPred_toString___closed__0_value;
static const lean_string_object l_Std_Tactic_BVDecide_BVBinPred_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "<u"};
static const lean_object* l_Std_Tactic_BVDecide_BVBinPred_toString___closed__1 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinPred_toString___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_toString(uint8_t);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_toString___boxed(lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_BVBinPred_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_BVBinPred_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_BVBinPred_instToString___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinPred_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Tactic_BVDecide_BVBinPred_instToString = (const lean_object*)&l_Std_Tactic_BVDecide_BVBinPred_instToString___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVBinPred_eval___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eval___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVBinPred_eval(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eval___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_bin_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_bin_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_getLsbD_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_getLsbD_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_toString(lean_object*);
static const lean_closure_object l_Std_Tactic_BVDecide_BVPred_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_BVPred_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Tactic_BVDecide_BVPred_instToString___closed__0 = (const lean_object*)&l_Std_Tactic_BVDecide_BVPred_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Tactic_BVDecide_BVPred_instToString = (const lean_object*)&l_Std_Tactic_BVDecide_BVPred_instToString___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVPred_eval(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_eval___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVLogicalExpr_eval___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVLogicalExpr_eval___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVLogicalExpr_eval(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVLogicalExpr_eval___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_instHashableBVBit_hash(lean_object* v_x_1_){
_start:
{
lean_object* v_var_2_; lean_object* v_w_3_; lean_object* v_idx_4_; uint64_t v___x_5_; uint64_t v___x_6_; uint64_t v___x_7_; uint64_t v___x_8_; uint64_t v___x_9_; uint64_t v___x_10_; uint64_t v___x_11_; 
v_var_2_ = lean_ctor_get(v_x_1_, 0);
v_w_3_ = lean_ctor_get(v_x_1_, 1);
v_idx_4_ = lean_ctor_get(v_x_1_, 2);
v___x_5_ = 0ULL;
v___x_6_ = lean_uint64_of_nat(v_var_2_);
v___x_7_ = lean_uint64_mix_hash(v___x_5_, v___x_6_);
v___x_8_ = lean_uint64_of_nat(v_w_3_);
v___x_9_ = lean_uint64_mix_hash(v___x_7_, v___x_8_);
v___x_10_ = lean_uint64_of_nat(v_idx_4_);
v___x_11_ = lean_uint64_mix_hash(v___x_9_, v___x_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instHashableBVBit_hash___boxed(lean_object* v_x_12_){
_start:
{
uint64_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Std_Tactic_BVDecide_instHashableBVBit_hash(v_x_12_);
lean_dec_ref(v_x_12_);
v_r_14_ = lean_box_uint64(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq(lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
lean_object* v_var_19_; lean_object* v_w_20_; lean_object* v_idx_21_; lean_object* v_var_22_; lean_object* v_w_23_; lean_object* v_idx_24_; uint8_t v___x_25_; 
v_var_19_ = lean_ctor_get(v_x_17_, 0);
v_w_20_ = lean_ctor_get(v_x_17_, 1);
v_idx_21_ = lean_ctor_get(v_x_17_, 2);
v_var_22_ = lean_ctor_get(v_x_18_, 0);
v_w_23_ = lean_ctor_get(v_x_18_, 1);
v_idx_24_ = lean_ctor_get(v_x_18_, 2);
v___x_25_ = lean_nat_dec_eq(v_var_19_, v_var_22_);
if (v___x_25_ == 0)
{
return v___x_25_;
}
else
{
uint8_t v___x_26_; 
v___x_26_ = lean_nat_dec_eq(v_w_20_, v_w_23_);
if (v___x_26_ == 0)
{
return v___x_26_;
}
else
{
uint8_t v___x_27_; 
v___x_27_ = lean_nat_dec_eq(v_idx_21_, v_idx_24_);
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq___boxed(lean_object* v_x_28_, lean_object* v_x_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq(v_x_28_, v_x_29_);
lean_dec_ref(v_x_29_);
lean_dec_ref(v_x_28_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVBit(lean_object* v_x_32_, lean_object* v_x_33_){
_start:
{
uint8_t v___x_34_; 
v___x_34_ = l_Std_Tactic_BVDecide_instDecidableEqBVBit_decEq(v_x_32_, v_x_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVBit___boxed(lean_object* v_x_35_, lean_object* v_x_36_){
_start:
{
uint8_t v_res_37_; lean_object* v_r_38_; 
v_res_37_ = l_Std_Tactic_BVDecide_instDecidableEqBVBit(v_x_35_, v_x_36_);
lean_dec_ref(v_x_36_);
lean_dec_ref(v_x_35_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Tactic_BVDecide_instReprBVBit_repr_spec__0(lean_object* v_a_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_nat_to_int(v_a_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_unsigned_to_nat(7u);
v___x_55_ = lean_nat_to_int(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(5u);
v___x_63_ = lean_nat_to_int(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = ((lean_object*)(l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__0));
v___x_69_ = lean_string_length(v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_obj_once(&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__16, &l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__16_once, _init_l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__16);
v___x_71_ = lean_nat_to_int(v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg(lean_object* v_x_76_){
_start:
{
lean_object* v_var_77_; lean_object* v_w_78_; lean_object* v_idx_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v_var_77_ = lean_ctor_get(v_x_76_, 0);
lean_inc(v_var_77_);
v_w_78_ = lean_ctor_get(v_x_76_, 1);
lean_inc(v_w_78_);
v_idx_79_ = lean_ctor_get(v_x_76_, 2);
lean_inc(v_idx_79_);
lean_dec_ref(v_x_76_);
v___x_80_ = ((lean_object*)(l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__5));
v___x_81_ = ((lean_object*)(l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__6));
v___x_82_ = lean_obj_once(&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__7, &l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__7_once, _init_l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__7);
v___x_83_ = l_Nat_reprFast(v_var_77_);
v___x_84_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
v___x_85_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_82_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = 0;
v___x_87_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*1, v___x_86_);
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_81_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = ((lean_object*)(l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__9));
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = lean_box(1);
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_90_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = ((lean_object*)(l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__11));
v___x_94_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_92_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set(v___x_95_, 1, v___x_80_);
v___x_96_ = lean_obj_once(&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__12, &l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__12_once, _init_l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__12);
v___x_97_ = l_Nat_reprFast(v_w_78_);
v___x_98_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
v___x_99_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_96_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set_uint8(v___x_100_, sizeof(void*)*1, v___x_86_);
v___x_101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_95_);
lean_ctor_set(v___x_101_, 1, v___x_100_);
v___x_102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v___x_89_);
v___x_103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_91_);
v___x_104_ = ((lean_object*)(l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__14));
v___x_105_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_103_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
v___x_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
lean_ctor_set(v___x_106_, 1, v___x_80_);
v___x_107_ = l_Nat_reprFast(v_idx_79_);
v___x_108_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
v___x_109_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_82_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
v___x_110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*1, v___x_86_);
v___x_111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_106_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = lean_obj_once(&l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__17, &l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__17_once, _init_l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__17);
v___x_113_ = ((lean_object*)(l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__18));
v___x_114_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_111_);
v___x_115_ = ((lean_object*)(l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__19));
v___x_116_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_114_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_112_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set_uint8(v___x_118_, sizeof(void*)*1, v___x_86_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr(lean_object* v_x_119_, lean_object* v_prec_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg(v_x_119_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instReprBVBit_repr___boxed(lean_object* v_x_122_, lean_object* v_prec_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Std_Tactic_BVDecide_instReprBVBit_repr(v_x_122_, v_prec_123_);
lean_dec(v_prec_123_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instToStringBVBit___lam__0(lean_object* v_b_130_){
_start:
{
lean_object* v_var_131_; lean_object* v_idx_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v_var_131_ = lean_ctor_get(v_b_130_, 0);
lean_inc(v_var_131_);
v_idx_132_ = lean_ctor_get(v_b_130_, 2);
lean_inc(v_idx_132_);
lean_dec_ref(v_b_130_);
v___x_133_ = ((lean_object*)(l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__0));
v___x_134_ = l_Nat_reprFast(v_var_131_);
v___x_135_ = lean_string_append(v___x_133_, v___x_134_);
lean_dec_ref(v___x_134_);
v___x_136_ = ((lean_object*)(l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__1));
v___x_137_ = lean_string_append(v___x_135_, v___x_136_);
v___x_138_ = l_Nat_reprFast(v_idx_132_);
v___x_139_ = lean_string_append(v___x_137_, v___x_138_);
lean_dec_ref(v___x_138_);
v___x_140_ = ((lean_object*)(l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__2));
v___x_141_ = lean_string_append(v___x_139_, v___x_140_);
return v___x_141_;
}
}
static lean_object* _init_l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__0(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = lean_unsigned_to_nat(1u);
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = lean_nat_mod(v___x_145_, v___x_144_);
return v___x_146_;
}
}
static lean_object* _init_l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__1(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_147_ = lean_obj_once(&l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__0, &l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__0_once, _init_l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__0);
v___x_148_ = lean_unsigned_to_nat(1u);
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_148_);
lean_ctor_set(v___x_150_, 2, v___x_147_);
return v___x_150_;
}
}
static lean_object* _init_l_Std_Tactic_BVDecide_instInhabitedBVBit(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_obj_once(&l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__1, &l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__1_once, _init_l_Std_Tactic_BVDecide_instInhabitedBVBit___closed__1);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorIdx(uint8_t v_x_152_){
_start:
{
switch(v_x_152_)
{
case 0:
{
lean_object* v___x_153_; 
v___x_153_ = lean_unsigned_to_nat(0u);
return v___x_153_;
}
case 1:
{
lean_object* v___x_154_; 
v___x_154_ = lean_unsigned_to_nat(1u);
return v___x_154_;
}
case 2:
{
lean_object* v___x_155_; 
v___x_155_ = lean_unsigned_to_nat(2u);
return v___x_155_;
}
case 3:
{
lean_object* v___x_156_; 
v___x_156_ = lean_unsigned_to_nat(3u);
return v___x_156_;
}
case 4:
{
lean_object* v___x_157_; 
v___x_157_ = lean_unsigned_to_nat(4u);
return v___x_157_;
}
case 5:
{
lean_object* v___x_158_; 
v___x_158_ = lean_unsigned_to_nat(5u);
return v___x_158_;
}
default: 
{
lean_object* v___x_159_; 
v___x_159_ = lean_unsigned_to_nat(6u);
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorIdx___boxed(lean_object* v_x_160_){
_start:
{
uint8_t v_x_boxed_161_; lean_object* v_res_162_; 
v_x_boxed_161_ = lean_unbox(v_x_160_);
v_res_162_ = l_Std_Tactic_BVDecide_BVBinOp_ctorIdx(v_x_boxed_161_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorElim___redArg(lean_object* v_k_163_){
_start:
{
lean_inc(v_k_163_);
return v_k_163_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorElim___redArg___boxed(lean_object* v_k_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Std_Tactic_BVDecide_BVBinOp_ctorElim___redArg(v_k_164_);
lean_dec(v_k_164_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorElim(lean_object* v_motive_166_, lean_object* v_ctorIdx_167_, uint8_t v_t_168_, lean_object* v_h_169_, lean_object* v_k_170_){
_start:
{
lean_inc(v_k_170_);
return v_k_170_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ctorElim___boxed(lean_object* v_motive_171_, lean_object* v_ctorIdx_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_k_175_){
_start:
{
uint8_t v_t_boxed_176_; lean_object* v_res_177_; 
v_t_boxed_176_ = lean_unbox(v_t_173_);
v_res_177_ = l_Std_Tactic_BVDecide_BVBinOp_ctorElim(v_motive_171_, v_ctorIdx_172_, v_t_boxed_176_, v_h_174_, v_k_175_);
lean_dec(v_k_175_);
lean_dec(v_ctorIdx_172_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_and_elim___redArg(lean_object* v_and_178_){
_start:
{
lean_inc(v_and_178_);
return v_and_178_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_and_elim___redArg___boxed(lean_object* v_and_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Std_Tactic_BVDecide_BVBinOp_and_elim___redArg(v_and_179_);
lean_dec(v_and_179_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_and_elim(lean_object* v_motive_181_, uint8_t v_t_182_, lean_object* v_h_183_, lean_object* v_and_184_){
_start:
{
lean_inc(v_and_184_);
return v_and_184_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_and_elim___boxed(lean_object* v_motive_185_, lean_object* v_t_186_, lean_object* v_h_187_, lean_object* v_and_188_){
_start:
{
uint8_t v_t_boxed_189_; lean_object* v_res_190_; 
v_t_boxed_189_ = lean_unbox(v_t_186_);
v_res_190_ = l_Std_Tactic_BVDecide_BVBinOp_and_elim(v_motive_185_, v_t_boxed_189_, v_h_187_, v_and_188_);
lean_dec(v_and_188_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_or_elim___redArg(lean_object* v_or_191_){
_start:
{
lean_inc(v_or_191_);
return v_or_191_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_or_elim___redArg___boxed(lean_object* v_or_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Std_Tactic_BVDecide_BVBinOp_or_elim___redArg(v_or_192_);
lean_dec(v_or_192_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_or_elim(lean_object* v_motive_194_, uint8_t v_t_195_, lean_object* v_h_196_, lean_object* v_or_197_){
_start:
{
lean_inc(v_or_197_);
return v_or_197_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_or_elim___boxed(lean_object* v_motive_198_, lean_object* v_t_199_, lean_object* v_h_200_, lean_object* v_or_201_){
_start:
{
uint8_t v_t_boxed_202_; lean_object* v_res_203_; 
v_t_boxed_202_ = lean_unbox(v_t_199_);
v_res_203_ = l_Std_Tactic_BVDecide_BVBinOp_or_elim(v_motive_198_, v_t_boxed_202_, v_h_200_, v_or_201_);
lean_dec(v_or_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_xor_elim___redArg(lean_object* v_xor_204_){
_start:
{
lean_inc(v_xor_204_);
return v_xor_204_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_xor_elim___redArg___boxed(lean_object* v_xor_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Std_Tactic_BVDecide_BVBinOp_xor_elim___redArg(v_xor_205_);
lean_dec(v_xor_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_xor_elim(lean_object* v_motive_207_, uint8_t v_t_208_, lean_object* v_h_209_, lean_object* v_xor_210_){
_start:
{
lean_inc(v_xor_210_);
return v_xor_210_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_xor_elim___boxed(lean_object* v_motive_211_, lean_object* v_t_212_, lean_object* v_h_213_, lean_object* v_xor_214_){
_start:
{
uint8_t v_t_boxed_215_; lean_object* v_res_216_; 
v_t_boxed_215_ = lean_unbox(v_t_212_);
v_res_216_ = l_Std_Tactic_BVDecide_BVBinOp_xor_elim(v_motive_211_, v_t_boxed_215_, v_h_213_, v_xor_214_);
lean_dec(v_xor_214_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_add_elim___redArg(lean_object* v_add_217_){
_start:
{
lean_inc(v_add_217_);
return v_add_217_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_add_elim___redArg___boxed(lean_object* v_add_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Std_Tactic_BVDecide_BVBinOp_add_elim___redArg(v_add_218_);
lean_dec(v_add_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_add_elim(lean_object* v_motive_220_, uint8_t v_t_221_, lean_object* v_h_222_, lean_object* v_add_223_){
_start:
{
lean_inc(v_add_223_);
return v_add_223_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_add_elim___boxed(lean_object* v_motive_224_, lean_object* v_t_225_, lean_object* v_h_226_, lean_object* v_add_227_){
_start:
{
uint8_t v_t_boxed_228_; lean_object* v_res_229_; 
v_t_boxed_228_ = lean_unbox(v_t_225_);
v_res_229_ = l_Std_Tactic_BVDecide_BVBinOp_add_elim(v_motive_224_, v_t_boxed_228_, v_h_226_, v_add_227_);
lean_dec(v_add_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_mul_elim___redArg(lean_object* v_mul_230_){
_start:
{
lean_inc(v_mul_230_);
return v_mul_230_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_mul_elim___redArg___boxed(lean_object* v_mul_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Std_Tactic_BVDecide_BVBinOp_mul_elim___redArg(v_mul_231_);
lean_dec(v_mul_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_mul_elim(lean_object* v_motive_233_, uint8_t v_t_234_, lean_object* v_h_235_, lean_object* v_mul_236_){
_start:
{
lean_inc(v_mul_236_);
return v_mul_236_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_mul_elim___boxed(lean_object* v_motive_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_mul_240_){
_start:
{
uint8_t v_t_boxed_241_; lean_object* v_res_242_; 
v_t_boxed_241_ = lean_unbox(v_t_238_);
v_res_242_ = l_Std_Tactic_BVDecide_BVBinOp_mul_elim(v_motive_237_, v_t_boxed_241_, v_h_239_, v_mul_240_);
lean_dec(v_mul_240_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_udiv_elim___redArg(lean_object* v_udiv_243_){
_start:
{
lean_inc(v_udiv_243_);
return v_udiv_243_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_udiv_elim___redArg___boxed(lean_object* v_udiv_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Std_Tactic_BVDecide_BVBinOp_udiv_elim___redArg(v_udiv_244_);
lean_dec(v_udiv_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_udiv_elim(lean_object* v_motive_246_, uint8_t v_t_247_, lean_object* v_h_248_, lean_object* v_udiv_249_){
_start:
{
lean_inc(v_udiv_249_);
return v_udiv_249_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_udiv_elim___boxed(lean_object* v_motive_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_udiv_253_){
_start:
{
uint8_t v_t_boxed_254_; lean_object* v_res_255_; 
v_t_boxed_254_ = lean_unbox(v_t_251_);
v_res_255_ = l_Std_Tactic_BVDecide_BVBinOp_udiv_elim(v_motive_250_, v_t_boxed_254_, v_h_252_, v_udiv_253_);
lean_dec(v_udiv_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_umod_elim___redArg(lean_object* v_umod_256_){
_start:
{
lean_inc(v_umod_256_);
return v_umod_256_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_umod_elim___redArg___boxed(lean_object* v_umod_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Std_Tactic_BVDecide_BVBinOp_umod_elim___redArg(v_umod_257_);
lean_dec(v_umod_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_umod_elim(lean_object* v_motive_259_, uint8_t v_t_260_, lean_object* v_h_261_, lean_object* v_umod_262_){
_start:
{
lean_inc(v_umod_262_);
return v_umod_262_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_umod_elim___boxed(lean_object* v_motive_263_, lean_object* v_t_264_, lean_object* v_h_265_, lean_object* v_umod_266_){
_start:
{
uint8_t v_t_boxed_267_; lean_object* v_res_268_; 
v_t_boxed_267_ = lean_unbox(v_t_264_);
v_res_268_ = l_Std_Tactic_BVDecide_BVBinOp_umod_elim(v_motive_263_, v_t_boxed_267_, v_h_265_, v_umod_266_);
lean_dec(v_umod_266_);
return v_res_268_;
}
}
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_instHashableBVBinOp_hash(uint8_t v_x_269_){
_start:
{
switch(v_x_269_)
{
case 0:
{
uint64_t v___x_270_; 
v___x_270_ = 0ULL;
return v___x_270_;
}
case 1:
{
uint64_t v___x_271_; 
v___x_271_ = 1ULL;
return v___x_271_;
}
case 2:
{
uint64_t v___x_272_; 
v___x_272_ = 2ULL;
return v___x_272_;
}
case 3:
{
uint64_t v___x_273_; 
v___x_273_ = 3ULL;
return v___x_273_;
}
case 4:
{
uint64_t v___x_274_; 
v___x_274_ = 4ULL;
return v___x_274_;
}
case 5:
{
uint64_t v___x_275_; 
v___x_275_ = 5ULL;
return v___x_275_;
}
default: 
{
uint64_t v___x_276_; 
v___x_276_ = 6ULL;
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instHashableBVBinOp_hash___boxed(lean_object* v_x_277_){
_start:
{
uint8_t v_x_88__boxed_278_; uint64_t v_res_279_; lean_object* v_r_280_; 
v_x_88__boxed_278_ = lean_unbox(v_x_277_);
v_res_279_ = l_Std_Tactic_BVDecide_instHashableBVBinOp_hash(v_x_88__boxed_278_);
v_r_280_ = lean_box_uint64(v_res_279_);
return v_r_280_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVBinOp_ofNat(lean_object* v_n_283_){
_start:
{
lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_284_ = lean_unsigned_to_nat(2u);
v___x_285_ = lean_nat_dec_le(v_n_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_286_ = lean_unsigned_to_nat(4u);
v___x_287_ = lean_nat_dec_le(v_n_283_, v___x_286_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_288_ = lean_unsigned_to_nat(5u);
v___x_289_ = lean_nat_dec_le(v_n_283_, v___x_288_);
if (v___x_289_ == 0)
{
uint8_t v___x_290_; 
v___x_290_ = 6;
return v___x_290_;
}
else
{
uint8_t v___x_291_; 
v___x_291_ = 5;
return v___x_291_;
}
}
else
{
lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_292_ = lean_unsigned_to_nat(3u);
v___x_293_ = lean_nat_dec_le(v_n_283_, v___x_292_);
if (v___x_293_ == 0)
{
uint8_t v___x_294_; 
v___x_294_ = 4;
return v___x_294_;
}
else
{
uint8_t v___x_295_; 
v___x_295_ = 3;
return v___x_295_;
}
}
}
else
{
lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_296_ = lean_unsigned_to_nat(0u);
v___x_297_ = lean_nat_dec_le(v_n_283_, v___x_296_);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; uint8_t v___x_299_; 
v___x_298_ = lean_unsigned_to_nat(1u);
v___x_299_ = lean_nat_dec_le(v_n_283_, v___x_298_);
if (v___x_299_ == 0)
{
uint8_t v___x_300_; 
v___x_300_ = 2;
return v___x_300_;
}
else
{
uint8_t v___x_301_; 
v___x_301_ = 1;
return v___x_301_;
}
}
else
{
uint8_t v___x_302_; 
v___x_302_ = 0;
return v___x_302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_ofNat___boxed(lean_object* v_n_303_){
_start:
{
uint8_t v_res_304_; lean_object* v_r_305_; 
v_res_304_ = l_Std_Tactic_BVDecide_BVBinOp_ofNat(v_n_303_);
lean_dec(v_n_303_);
v_r_305_ = lean_box(v_res_304_);
return v_r_305_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVBinOp(uint8_t v_x_306_, uint8_t v_y_307_){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_308_ = l_Std_Tactic_BVDecide_BVBinOp_ctorIdx(v_x_306_);
v___x_309_ = l_Std_Tactic_BVDecide_BVBinOp_ctorIdx(v_y_307_);
v___x_310_ = lean_nat_dec_eq(v___x_308_, v___x_309_);
lean_dec(v___x_309_);
lean_dec(v___x_308_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVBinOp___boxed(lean_object* v_x_311_, lean_object* v_y_312_){
_start:
{
uint8_t v_x_20__boxed_313_; uint8_t v_y_21__boxed_314_; uint8_t v_res_315_; lean_object* v_r_316_; 
v_x_20__boxed_313_ = lean_unbox(v_x_311_);
v_y_21__boxed_314_ = lean_unbox(v_y_312_);
v_res_315_ = l_Std_Tactic_BVDecide_instDecidableEqBVBinOp(v_x_20__boxed_313_, v_y_21__boxed_314_);
v_r_316_ = lean_box(v_res_315_);
return v_r_316_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString(uint8_t v_x_324_){
_start:
{
switch(v_x_324_)
{
case 0:
{
lean_object* v___x_325_; 
v___x_325_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVBinOp_toString___closed__0));
return v___x_325_;
}
case 1:
{
lean_object* v___x_326_; 
v___x_326_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVBinOp_toString___closed__1));
return v___x_326_;
}
case 2:
{
lean_object* v___x_327_; 
v___x_327_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVBinOp_toString___closed__2));
return v___x_327_;
}
case 3:
{
lean_object* v___x_328_; 
v___x_328_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVBinOp_toString___closed__3));
return v___x_328_;
}
case 4:
{
lean_object* v___x_329_; 
v___x_329_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVBinOp_toString___closed__4));
return v___x_329_;
}
case 5:
{
lean_object* v___x_330_; 
v___x_330_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVBinOp_toString___closed__5));
return v___x_330_;
}
default: 
{
lean_object* v___x_331_; 
v___x_331_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVBinOp_toString___closed__6));
return v___x_331_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_toString___boxed(lean_object* v_x_332_){
_start:
{
uint8_t v_x_67__boxed_333_; lean_object* v_res_334_; 
v_x_67__boxed_333_ = lean_unbox(v_x_332_);
v_res_334_ = l_Std_Tactic_BVDecide_BVBinOp_toString(v_x_67__boxed_333_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_eval(lean_object* v_w_337_, uint8_t v_x_338_, lean_object* v_a_339_, lean_object* v_a_340_){
_start:
{
switch(v_x_338_)
{
case 0:
{
lean_object* v___x_341_; 
v___x_341_ = lean_nat_land(v_a_339_, v_a_340_);
return v___x_341_;
}
case 1:
{
lean_object* v___x_342_; 
v___x_342_ = lean_nat_lor(v_a_339_, v_a_340_);
return v___x_342_;
}
case 2:
{
lean_object* v___x_343_; 
v___x_343_ = lean_nat_lxor(v_a_339_, v_a_340_);
return v___x_343_;
}
case 3:
{
lean_object* v___x_344_; 
v___x_344_ = l_BitVec_add(v_w_337_, v_a_339_, v_a_340_);
return v___x_344_;
}
case 4:
{
lean_object* v___x_345_; 
v___x_345_ = l_BitVec_mul(v_w_337_, v_a_339_, v_a_340_);
return v___x_345_;
}
case 5:
{
lean_object* v___x_346_; 
v___x_346_ = lean_nat_div(v_a_339_, v_a_340_);
return v___x_346_;
}
default: 
{
lean_object* v___x_347_; 
v___x_347_ = lean_nat_mod(v_a_339_, v_a_340_);
return v___x_347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinOp_eval___boxed(lean_object* v_w_348_, lean_object* v_x_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
uint8_t v_x_340__boxed_352_; lean_object* v_res_353_; 
v_x_340__boxed_352_ = lean_unbox(v_x_349_);
v_res_353_ = l_Std_Tactic_BVDecide_BVBinOp_eval(v_w_348_, v_x_340__boxed_352_, v_a_350_, v_a_351_);
lean_dec(v_a_351_);
lean_dec(v_a_350_);
lean_dec(v_w_348_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorIdx(lean_object* v_x_354_){
_start:
{
switch(lean_obj_tag(v_x_354_))
{
case 0:
{
lean_object* v___x_355_; 
v___x_355_ = lean_unsigned_to_nat(0u);
return v___x_355_;
}
case 1:
{
lean_object* v___x_356_; 
v___x_356_ = lean_unsigned_to_nat(1u);
return v___x_356_;
}
case 2:
{
lean_object* v___x_357_; 
v___x_357_ = lean_unsigned_to_nat(2u);
return v___x_357_;
}
case 3:
{
lean_object* v___x_358_; 
v___x_358_ = lean_unsigned_to_nat(3u);
return v___x_358_;
}
case 4:
{
lean_object* v___x_359_; 
v___x_359_ = lean_unsigned_to_nat(4u);
return v___x_359_;
}
case 5:
{
lean_object* v___x_360_; 
v___x_360_ = lean_unsigned_to_nat(5u);
return v___x_360_;
}
default: 
{
lean_object* v___x_361_; 
v___x_361_ = lean_unsigned_to_nat(6u);
return v___x_361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorIdx___boxed(lean_object* v_x_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Std_Tactic_BVDecide_BVUnOp_ctorIdx(v_x_362_);
lean_dec(v_x_362_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(lean_object* v_t_364_, lean_object* v_k_365_){
_start:
{
switch(lean_obj_tag(v_t_364_))
{
case 1:
{
lean_object* v_n_366_; lean_object* v___x_367_; 
v_n_366_ = lean_ctor_get(v_t_364_, 0);
lean_inc(v_n_366_);
lean_dec_ref_known(v_t_364_, 1);
v___x_367_ = lean_apply_1(v_k_365_, v_n_366_);
return v___x_367_;
}
case 2:
{
lean_object* v_n_368_; lean_object* v___x_369_; 
v_n_368_ = lean_ctor_get(v_t_364_, 0);
lean_inc(v_n_368_);
lean_dec_ref_known(v_t_364_, 1);
v___x_369_ = lean_apply_1(v_k_365_, v_n_368_);
return v___x_369_;
}
case 3:
{
lean_object* v_n_370_; lean_object* v___x_371_; 
v_n_370_ = lean_ctor_get(v_t_364_, 0);
lean_inc(v_n_370_);
lean_dec_ref_known(v_t_364_, 1);
v___x_371_ = lean_apply_1(v_k_365_, v_n_370_);
return v___x_371_;
}
default: 
{
lean_dec(v_t_364_);
return v_k_365_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorElim(lean_object* v_motive_372_, lean_object* v_ctorIdx_373_, lean_object* v_t_374_, lean_object* v_h_375_, lean_object* v_k_376_){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_374_, v_k_376_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_ctorElim___boxed(lean_object* v_motive_378_, lean_object* v_ctorIdx_379_, lean_object* v_t_380_, lean_object* v_h_381_, lean_object* v_k_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim(v_motive_378_, v_ctorIdx_379_, v_t_380_, v_h_381_, v_k_382_);
lean_dec(v_ctorIdx_379_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_not_elim___redArg(lean_object* v_t_384_, lean_object* v_not_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_384_, v_not_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_not_elim(lean_object* v_motive_387_, lean_object* v_t_388_, lean_object* v_h_389_, lean_object* v_not_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_388_, v_not_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_rotateLeft_elim___redArg(lean_object* v_t_392_, lean_object* v_rotateLeft_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_392_, v_rotateLeft_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_rotateLeft_elim(lean_object* v_motive_395_, lean_object* v_t_396_, lean_object* v_h_397_, lean_object* v_rotateLeft_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_396_, v_rotateLeft_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_rotateRight_elim___redArg(lean_object* v_t_400_, lean_object* v_rotateRight_401_){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_400_, v_rotateRight_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_rotateRight_elim(lean_object* v_motive_403_, lean_object* v_t_404_, lean_object* v_h_405_, lean_object* v_rotateRight_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_404_, v_rotateRight_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_arithShiftRightConst_elim___redArg(lean_object* v_t_408_, lean_object* v_arithShiftRightConst_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_408_, v_arithShiftRightConst_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_arithShiftRightConst_elim(lean_object* v_motive_411_, lean_object* v_t_412_, lean_object* v_h_413_, lean_object* v_arithShiftRightConst_414_){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_412_, v_arithShiftRightConst_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_reverse_elim___redArg(lean_object* v_t_416_, lean_object* v_reverse_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_416_, v_reverse_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_reverse_elim(lean_object* v_motive_419_, lean_object* v_t_420_, lean_object* v_h_421_, lean_object* v_reverse_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_420_, v_reverse_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_clz_elim___redArg(lean_object* v_t_424_, lean_object* v_clz_425_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_424_, v_clz_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_clz_elim(lean_object* v_motive_427_, lean_object* v_t_428_, lean_object* v_h_429_, lean_object* v_clz_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_428_, v_clz_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_cpop_elim___redArg(lean_object* v_t_432_, lean_object* v_cpop_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_432_, v_cpop_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_cpop_elim(lean_object* v_motive_435_, lean_object* v_t_436_, lean_object* v_h_437_, lean_object* v_cpop_438_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Std_Tactic_BVDecide_BVUnOp_ctorElim___redArg(v_t_436_, v_cpop_438_);
return v___x_439_;
}
}
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_instHashableBVUnOp_hash(lean_object* v_x_440_){
_start:
{
switch(lean_obj_tag(v_x_440_))
{
case 0:
{
uint64_t v___x_441_; 
v___x_441_ = 0ULL;
return v___x_441_;
}
case 1:
{
lean_object* v_n_442_; uint64_t v___x_443_; uint64_t v___x_444_; uint64_t v___x_445_; 
v_n_442_ = lean_ctor_get(v_x_440_, 0);
v___x_443_ = 1ULL;
v___x_444_ = lean_uint64_of_nat(v_n_442_);
v___x_445_ = lean_uint64_mix_hash(v___x_443_, v___x_444_);
return v___x_445_;
}
case 2:
{
lean_object* v_n_446_; uint64_t v___x_447_; uint64_t v___x_448_; uint64_t v___x_449_; 
v_n_446_ = lean_ctor_get(v_x_440_, 0);
v___x_447_ = 2ULL;
v___x_448_ = lean_uint64_of_nat(v_n_446_);
v___x_449_ = lean_uint64_mix_hash(v___x_447_, v___x_448_);
return v___x_449_;
}
case 3:
{
lean_object* v_n_450_; uint64_t v___x_451_; uint64_t v___x_452_; uint64_t v___x_453_; 
v_n_450_ = lean_ctor_get(v_x_440_, 0);
v___x_451_ = 3ULL;
v___x_452_ = lean_uint64_of_nat(v_n_450_);
v___x_453_ = lean_uint64_mix_hash(v___x_451_, v___x_452_);
return v___x_453_;
}
case 4:
{
uint64_t v___x_454_; 
v___x_454_ = 4ULL;
return v___x_454_;
}
case 5:
{
uint64_t v___x_455_; 
v___x_455_ = 5ULL;
return v___x_455_;
}
default: 
{
uint64_t v___x_456_; 
v___x_456_ = 6ULL;
return v___x_456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instHashableBVUnOp_hash___boxed(lean_object* v_x_457_){
_start:
{
uint64_t v_res_458_; lean_object* v_r_459_; 
v_res_458_ = l_Std_Tactic_BVDecide_instHashableBVUnOp_hash(v_x_457_);
lean_dec(v_x_457_);
v_r_459_ = lean_box_uint64(v_res_458_);
return v_r_459_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVUnOp_decEq(lean_object* v_x_462_, lean_object* v_x_463_){
_start:
{
switch(lean_obj_tag(v_x_462_))
{
case 0:
{
if (lean_obj_tag(v_x_463_) == 0)
{
uint8_t v___x_464_; 
v___x_464_ = 1;
return v___x_464_;
}
else
{
uint8_t v___x_465_; 
v___x_465_ = 0;
return v___x_465_;
}
}
case 1:
{
if (lean_obj_tag(v_x_463_) == 1)
{
lean_object* v_n_466_; lean_object* v_n_467_; uint8_t v___x_468_; 
v_n_466_ = lean_ctor_get(v_x_462_, 0);
v_n_467_ = lean_ctor_get(v_x_463_, 0);
v___x_468_ = lean_nat_dec_eq(v_n_466_, v_n_467_);
return v___x_468_;
}
else
{
uint8_t v___x_469_; 
v___x_469_ = 0;
return v___x_469_;
}
}
case 2:
{
if (lean_obj_tag(v_x_463_) == 2)
{
lean_object* v_n_470_; lean_object* v_n_471_; uint8_t v___x_472_; 
v_n_470_ = lean_ctor_get(v_x_462_, 0);
v_n_471_ = lean_ctor_get(v_x_463_, 0);
v___x_472_ = lean_nat_dec_eq(v_n_470_, v_n_471_);
return v___x_472_;
}
else
{
uint8_t v___x_473_; 
v___x_473_ = 0;
return v___x_473_;
}
}
case 3:
{
if (lean_obj_tag(v_x_463_) == 3)
{
lean_object* v_n_474_; lean_object* v_n_475_; uint8_t v___x_476_; 
v_n_474_ = lean_ctor_get(v_x_462_, 0);
v_n_475_ = lean_ctor_get(v_x_463_, 0);
v___x_476_ = lean_nat_dec_eq(v_n_474_, v_n_475_);
return v___x_476_;
}
else
{
uint8_t v___x_477_; 
v___x_477_ = 0;
return v___x_477_;
}
}
case 4:
{
if (lean_obj_tag(v_x_463_) == 4)
{
uint8_t v___x_478_; 
v___x_478_ = 1;
return v___x_478_;
}
else
{
uint8_t v___x_479_; 
v___x_479_ = 0;
return v___x_479_;
}
}
case 5:
{
if (lean_obj_tag(v_x_463_) == 5)
{
uint8_t v___x_480_; 
v___x_480_ = 1;
return v___x_480_;
}
else
{
uint8_t v___x_481_; 
v___x_481_ = 0;
return v___x_481_;
}
}
default: 
{
if (lean_obj_tag(v_x_463_) == 6)
{
uint8_t v___x_482_; 
v___x_482_ = 1;
return v___x_482_;
}
else
{
uint8_t v___x_483_; 
v___x_483_ = 0;
return v___x_483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVUnOp_decEq___boxed(lean_object* v_x_484_, lean_object* v_x_485_){
_start:
{
uint8_t v_res_486_; lean_object* v_r_487_; 
v_res_486_ = l_Std_Tactic_BVDecide_instDecidableEqBVUnOp_decEq(v_x_484_, v_x_485_);
lean_dec(v_x_485_);
lean_dec(v_x_484_);
v_r_487_ = lean_box(v_res_486_);
return v_r_487_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_instDecidableEqBVUnOp(lean_object* v_x_488_, lean_object* v_x_489_){
_start:
{
uint8_t v___x_490_; 
v___x_490_ = l_Std_Tactic_BVDecide_instDecidableEqBVUnOp_decEq(v_x_488_, v_x_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVUnOp___boxed(lean_object* v_x_491_, lean_object* v_x_492_){
_start:
{
uint8_t v_res_493_; lean_object* v_r_494_; 
v_res_493_ = l_Std_Tactic_BVDecide_instDecidableEqBVUnOp(v_x_491_, v_x_492_);
lean_dec(v_x_492_);
lean_dec(v_x_491_);
v_r_494_ = lean_box(v_res_493_);
return v_r_494_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_toString(lean_object* v_x_502_){
_start:
{
switch(lean_obj_tag(v_x_502_))
{
case 0:
{
lean_object* v___x_503_; 
v___x_503_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVUnOp_toString___closed__0));
return v___x_503_;
}
case 1:
{
lean_object* v_n_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v_n_504_ = lean_ctor_get(v_x_502_, 0);
lean_inc(v_n_504_);
lean_dec_ref_known(v_x_502_, 1);
v___x_505_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVUnOp_toString___closed__1));
v___x_506_ = l_Nat_reprFast(v_n_504_);
v___x_507_ = lean_string_append(v___x_505_, v___x_506_);
lean_dec_ref(v___x_506_);
return v___x_507_;
}
case 2:
{
lean_object* v_n_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v_n_508_ = lean_ctor_get(v_x_502_, 0);
lean_inc(v_n_508_);
lean_dec_ref_known(v_x_502_, 1);
v___x_509_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVUnOp_toString___closed__2));
v___x_510_ = l_Nat_reprFast(v_n_508_);
v___x_511_ = lean_string_append(v___x_509_, v___x_510_);
lean_dec_ref(v___x_510_);
return v___x_511_;
}
case 3:
{
lean_object* v_n_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_n_512_ = lean_ctor_get(v_x_502_, 0);
lean_inc(v_n_512_);
lean_dec_ref_known(v_x_502_, 1);
v___x_513_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVUnOp_toString___closed__3));
v___x_514_ = l_Nat_reprFast(v_n_512_);
v___x_515_ = lean_string_append(v___x_513_, v___x_514_);
lean_dec_ref(v___x_514_);
return v___x_515_;
}
case 4:
{
lean_object* v___x_516_; 
v___x_516_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVUnOp_toString___closed__4));
return v___x_516_;
}
case 5:
{
lean_object* v___x_517_; 
v___x_517_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVUnOp_toString___closed__5));
return v___x_517_;
}
default: 
{
lean_object* v___x_518_; 
v___x_518_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVUnOp_toString___closed__6));
return v___x_518_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_eval(lean_object* v_w_521_, lean_object* v_x_522_, lean_object* v_a_523_){
_start:
{
switch(lean_obj_tag(v_x_522_))
{
case 0:
{
lean_object* v___x_524_; 
v___x_524_ = l_BitVec_not(v_w_521_, v_a_523_);
lean_dec(v_a_523_);
lean_dec(v_w_521_);
return v___x_524_;
}
case 1:
{
lean_object* v_n_525_; lean_object* v___x_526_; 
v_n_525_ = lean_ctor_get(v_x_522_, 0);
v___x_526_ = l_BitVec_rotateLeft(v_w_521_, v_a_523_, v_n_525_);
lean_dec(v_a_523_);
lean_dec(v_w_521_);
return v___x_526_;
}
case 2:
{
lean_object* v_n_527_; lean_object* v___x_528_; 
v_n_527_ = lean_ctor_get(v_x_522_, 0);
v___x_528_ = l_BitVec_rotateRight(v_w_521_, v_a_523_, v_n_527_);
lean_dec(v_a_523_);
lean_dec(v_w_521_);
return v___x_528_;
}
case 3:
{
lean_object* v_n_529_; lean_object* v___x_530_; 
v_n_529_ = lean_ctor_get(v_x_522_, 0);
v___x_530_ = l_BitVec_sshiftRight(v_w_521_, v_a_523_, v_n_529_);
lean_dec(v_w_521_);
return v___x_530_;
}
case 4:
{
lean_object* v___x_531_; 
v___x_531_ = l_BitVec_reverse(v_w_521_, v_a_523_);
lean_dec(v_a_523_);
lean_dec(v_w_521_);
return v___x_531_;
}
case 5:
{
lean_object* v___x_532_; 
v___x_532_ = l_BitVec_clz(v_w_521_, v_a_523_);
lean_dec(v_a_523_);
lean_dec(v_w_521_);
return v___x_532_;
}
default: 
{
lean_object* v___x_533_; 
v___x_533_ = l_BitVec_cpop(v_w_521_, v_a_523_);
lean_dec(v_a_523_);
return v___x_533_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVUnOp_eval___boxed(lean_object* v_w_534_, lean_object* v_x_535_, lean_object* v_a_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Std_Tactic_BVDecide_BVUnOp_eval(v_w_534_, v_x_535_, v_a_536_);
lean_dec(v_x_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorIdx___redArg(lean_object* v_x_538_){
_start:
{
switch(lean_obj_tag(v_x_538_))
{
case 0:
{
lean_object* v___x_539_; 
v___x_539_ = lean_unsigned_to_nat(0u);
return v___x_539_;
}
case 1:
{
lean_object* v___x_540_; 
v___x_540_ = lean_unsigned_to_nat(1u);
return v___x_540_;
}
case 2:
{
lean_object* v___x_541_; 
v___x_541_ = lean_unsigned_to_nat(2u);
return v___x_541_;
}
case 3:
{
lean_object* v___x_542_; 
v___x_542_ = lean_unsigned_to_nat(3u);
return v___x_542_;
}
case 4:
{
lean_object* v___x_543_; 
v___x_543_ = lean_unsigned_to_nat(4u);
return v___x_543_;
}
case 5:
{
lean_object* v___x_544_; 
v___x_544_ = lean_unsigned_to_nat(5u);
return v___x_544_;
}
case 6:
{
lean_object* v___x_545_; 
v___x_545_ = lean_unsigned_to_nat(6u);
return v___x_545_;
}
case 7:
{
lean_object* v___x_546_; 
v___x_546_ = lean_unsigned_to_nat(7u);
return v___x_546_;
}
case 8:
{
lean_object* v___x_547_; 
v___x_547_ = lean_unsigned_to_nat(8u);
return v___x_547_;
}
default: 
{
lean_object* v___x_548_; 
v___x_548_ = lean_unsigned_to_nat(9u);
return v___x_548_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorIdx___redArg___boxed(lean_object* v_x_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Std_Tactic_BVDecide_BVExpr_ctorIdx___redArg(v_x_549_);
lean_dec_ref(v_x_549_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorIdx(lean_object* v_a_551_, lean_object* v_x_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Std_Tactic_BVDecide_BVExpr_ctorIdx___redArg(v_x_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorIdx___boxed(lean_object* v_a_554_, lean_object* v_x_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Std_Tactic_BVDecide_BVExpr_ctorIdx(v_a_554_, v_x_555_);
lean_dec_ref(v_x_555_);
lean_dec(v_a_554_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(lean_object* v_t_557_, lean_object* v_k_558_){
_start:
{
switch(lean_obj_tag(v_t_557_))
{
case 0:
{
lean_object* v_w_559_; lean_object* v_idx_560_; lean_object* v___x_561_; 
v_w_559_ = lean_ctor_get(v_t_557_, 0);
lean_inc(v_w_559_);
v_idx_560_ = lean_ctor_get(v_t_557_, 1);
lean_inc(v_idx_560_);
lean_dec_ref_known(v_t_557_, 2);
v___x_561_ = lean_apply_2(v_k_558_, v_w_559_, v_idx_560_);
return v___x_561_;
}
case 1:
{
lean_object* v_w_562_; lean_object* v_val_563_; lean_object* v___x_564_; 
v_w_562_ = lean_ctor_get(v_t_557_, 0);
lean_inc(v_w_562_);
v_val_563_ = lean_ctor_get(v_t_557_, 1);
lean_inc(v_val_563_);
lean_dec_ref_known(v_t_557_, 2);
v___x_564_ = lean_apply_2(v_k_558_, v_w_562_, v_val_563_);
return v___x_564_;
}
case 2:
{
lean_object* v_w_565_; lean_object* v_start_566_; lean_object* v_len_567_; lean_object* v_expr_568_; lean_object* v___x_569_; 
v_w_565_ = lean_ctor_get(v_t_557_, 0);
lean_inc(v_w_565_);
v_start_566_ = lean_ctor_get(v_t_557_, 1);
lean_inc(v_start_566_);
v_len_567_ = lean_ctor_get(v_t_557_, 2);
lean_inc(v_len_567_);
v_expr_568_ = lean_ctor_get(v_t_557_, 3);
lean_inc_ref(v_expr_568_);
lean_dec_ref_known(v_t_557_, 4);
v___x_569_ = lean_apply_4(v_k_558_, v_w_565_, v_start_566_, v_len_567_, v_expr_568_);
return v___x_569_;
}
case 3:
{
lean_object* v_w_570_; lean_object* v_lhs_571_; uint8_t v_op_572_; lean_object* v_rhs_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_w_570_ = lean_ctor_get(v_t_557_, 0);
lean_inc(v_w_570_);
v_lhs_571_ = lean_ctor_get(v_t_557_, 1);
lean_inc_ref(v_lhs_571_);
v_op_572_ = lean_ctor_get_uint8(v_t_557_, sizeof(void*)*3);
v_rhs_573_ = lean_ctor_get(v_t_557_, 2);
lean_inc_ref(v_rhs_573_);
lean_dec_ref_known(v_t_557_, 3);
v___x_574_ = lean_box(v_op_572_);
v___x_575_ = lean_apply_4(v_k_558_, v_w_570_, v_lhs_571_, v___x_574_, v_rhs_573_);
return v___x_575_;
}
case 4:
{
lean_object* v_w_576_; lean_object* v_op_577_; lean_object* v_operand_578_; lean_object* v___x_579_; 
v_w_576_ = lean_ctor_get(v_t_557_, 0);
lean_inc(v_w_576_);
v_op_577_ = lean_ctor_get(v_t_557_, 1);
lean_inc(v_op_577_);
v_operand_578_ = lean_ctor_get(v_t_557_, 2);
lean_inc_ref(v_operand_578_);
lean_dec_ref_known(v_t_557_, 3);
v___x_579_ = lean_apply_3(v_k_558_, v_w_576_, v_op_577_, v_operand_578_);
return v___x_579_;
}
case 5:
{
lean_object* v_l_580_; lean_object* v_r_581_; lean_object* v_w_582_; lean_object* v_lhs_583_; lean_object* v_rhs_584_; lean_object* v___x_585_; 
v_l_580_ = lean_ctor_get(v_t_557_, 0);
lean_inc(v_l_580_);
v_r_581_ = lean_ctor_get(v_t_557_, 1);
lean_inc(v_r_581_);
v_w_582_ = lean_ctor_get(v_t_557_, 2);
lean_inc(v_w_582_);
v_lhs_583_ = lean_ctor_get(v_t_557_, 3);
lean_inc_ref(v_lhs_583_);
v_rhs_584_ = lean_ctor_get(v_t_557_, 4);
lean_inc_ref(v_rhs_584_);
lean_dec_ref_known(v_t_557_, 5);
v___x_585_ = lean_apply_6(v_k_558_, v_l_580_, v_r_581_, v_w_582_, v_lhs_583_, v_rhs_584_, lean_box(0));
return v___x_585_;
}
case 6:
{
lean_object* v_w_586_; lean_object* v_w_x27_587_; lean_object* v_n_588_; lean_object* v_expr_589_; lean_object* v___x_590_; 
v_w_586_ = lean_ctor_get(v_t_557_, 0);
lean_inc(v_w_586_);
v_w_x27_587_ = lean_ctor_get(v_t_557_, 1);
lean_inc(v_w_x27_587_);
v_n_588_ = lean_ctor_get(v_t_557_, 2);
lean_inc(v_n_588_);
v_expr_589_ = lean_ctor_get(v_t_557_, 3);
lean_inc_ref(v_expr_589_);
lean_dec_ref_known(v_t_557_, 4);
v___x_590_ = lean_apply_5(v_k_558_, v_w_586_, v_w_x27_587_, v_n_588_, v_expr_589_, lean_box(0));
return v___x_590_;
}
default: 
{
lean_object* v_m_591_; lean_object* v_n_592_; lean_object* v_lhs_593_; lean_object* v_rhs_594_; lean_object* v___x_595_; 
v_m_591_ = lean_ctor_get(v_t_557_, 0);
lean_inc(v_m_591_);
v_n_592_ = lean_ctor_get(v_t_557_, 1);
lean_inc(v_n_592_);
v_lhs_593_ = lean_ctor_get(v_t_557_, 2);
lean_inc_ref(v_lhs_593_);
v_rhs_594_ = lean_ctor_get(v_t_557_, 3);
lean_inc_ref(v_rhs_594_);
lean_dec_ref(v_t_557_);
v___x_595_ = lean_apply_4(v_k_558_, v_m_591_, v_n_592_, v_lhs_593_, v_rhs_594_);
return v___x_595_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorElim(lean_object* v_motive_596_, lean_object* v_ctorIdx_597_, lean_object* v_a_598_, lean_object* v_t_599_, lean_object* v_h_600_, lean_object* v_k_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_599_, v_k_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_ctorElim___boxed(lean_object* v_motive_603_, lean_object* v_ctorIdx_604_, lean_object* v_a_605_, lean_object* v_t_606_, lean_object* v_h_607_, lean_object* v_k_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim(v_motive_603_, v_ctorIdx_604_, v_a_605_, v_t_606_, v_h_607_, v_k_608_);
lean_dec(v_a_605_);
lean_dec(v_ctorIdx_604_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_var_elim___redArg(lean_object* v_t_610_, lean_object* v_var_611_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_610_, v_var_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_var_elim(lean_object* v_motive_613_, lean_object* v_a_614_, lean_object* v_t_615_, lean_object* v_h_616_, lean_object* v_var_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_615_, v_var_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_var_elim___boxed(lean_object* v_motive_619_, lean_object* v_a_620_, lean_object* v_t_621_, lean_object* v_h_622_, lean_object* v_var_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Std_Tactic_BVDecide_BVExpr_var_elim(v_motive_619_, v_a_620_, v_t_621_, v_h_622_, v_var_623_);
lean_dec(v_a_620_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_const_elim___redArg(lean_object* v_t_625_, lean_object* v_const_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_625_, v_const_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_const_elim(lean_object* v_motive_628_, lean_object* v_a_629_, lean_object* v_t_630_, lean_object* v_h_631_, lean_object* v_const_632_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_630_, v_const_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_const_elim___boxed(lean_object* v_motive_634_, lean_object* v_a_635_, lean_object* v_t_636_, lean_object* v_h_637_, lean_object* v_const_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Std_Tactic_BVDecide_BVExpr_const_elim(v_motive_634_, v_a_635_, v_t_636_, v_h_637_, v_const_638_);
lean_dec(v_a_635_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_extract_elim___redArg(lean_object* v_t_640_, lean_object* v_extract_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_640_, v_extract_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_extract_elim(lean_object* v_motive_643_, lean_object* v_a_644_, lean_object* v_t_645_, lean_object* v_h_646_, lean_object* v_extract_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_645_, v_extract_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_extract_elim___boxed(lean_object* v_motive_649_, lean_object* v_a_650_, lean_object* v_t_651_, lean_object* v_h_652_, lean_object* v_extract_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Std_Tactic_BVDecide_BVExpr_extract_elim(v_motive_649_, v_a_650_, v_t_651_, v_h_652_, v_extract_653_);
lean_dec(v_a_650_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin_elim___redArg(lean_object* v_t_655_, lean_object* v_bin_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_655_, v_bin_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin_elim(lean_object* v_motive_658_, lean_object* v_a_659_, lean_object* v_t_660_, lean_object* v_h_661_, lean_object* v_bin_662_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_660_, v_bin_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin_elim___boxed(lean_object* v_motive_664_, lean_object* v_a_665_, lean_object* v_t_666_, lean_object* v_h_667_, lean_object* v_bin_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Std_Tactic_BVDecide_BVExpr_bin_elim(v_motive_664_, v_a_665_, v_t_666_, v_h_667_, v_bin_668_);
lean_dec(v_a_665_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_un_elim___redArg(lean_object* v_t_670_, lean_object* v_un_671_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_670_, v_un_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_un_elim(lean_object* v_motive_673_, lean_object* v_a_674_, lean_object* v_t_675_, lean_object* v_h_676_, lean_object* v_un_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_675_, v_un_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_un_elim___boxed(lean_object* v_motive_679_, lean_object* v_a_680_, lean_object* v_t_681_, lean_object* v_h_682_, lean_object* v_un_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l_Std_Tactic_BVDecide_BVExpr_un_elim(v_motive_679_, v_a_680_, v_t_681_, v_h_682_, v_un_683_);
lean_dec(v_a_680_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append_elim___redArg(lean_object* v_t_685_, lean_object* v_append_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_685_, v_append_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append_elim(lean_object* v_motive_688_, lean_object* v_a_689_, lean_object* v_t_690_, lean_object* v_h_691_, lean_object* v_append_692_){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_690_, v_append_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append_elim___boxed(lean_object* v_motive_694_, lean_object* v_a_695_, lean_object* v_t_696_, lean_object* v_h_697_, lean_object* v_append_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Std_Tactic_BVDecide_BVExpr_append_elim(v_motive_694_, v_a_695_, v_t_696_, v_h_697_, v_append_698_);
lean_dec(v_a_695_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate_elim___redArg(lean_object* v_t_700_, lean_object* v_replicate_701_){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_700_, v_replicate_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate_elim(lean_object* v_motive_703_, lean_object* v_a_704_, lean_object* v_t_705_, lean_object* v_h_706_, lean_object* v_replicate_707_){
_start:
{
lean_object* v___x_708_; 
v___x_708_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_705_, v_replicate_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate_elim___boxed(lean_object* v_motive_709_, lean_object* v_a_710_, lean_object* v_t_711_, lean_object* v_h_712_, lean_object* v_replicate_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l_Std_Tactic_BVDecide_BVExpr_replicate_elim(v_motive_709_, v_a_710_, v_t_711_, v_h_712_, v_replicate_713_);
lean_dec(v_a_710_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftLeft_elim___redArg(lean_object* v_t_715_, lean_object* v_shiftLeft_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_715_, v_shiftLeft_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftLeft_elim(lean_object* v_motive_718_, lean_object* v_a_719_, lean_object* v_t_720_, lean_object* v_h_721_, lean_object* v_shiftLeft_722_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_720_, v_shiftLeft_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftLeft_elim___boxed(lean_object* v_motive_724_, lean_object* v_a_725_, lean_object* v_t_726_, lean_object* v_h_727_, lean_object* v_shiftLeft_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Std_Tactic_BVDecide_BVExpr_shiftLeft_elim(v_motive_724_, v_a_725_, v_t_726_, v_h_727_, v_shiftLeft_728_);
lean_dec(v_a_725_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftRight_elim___redArg(lean_object* v_t_730_, lean_object* v_shiftRight_731_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_730_, v_shiftRight_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftRight_elim(lean_object* v_motive_733_, lean_object* v_a_734_, lean_object* v_t_735_, lean_object* v_h_736_, lean_object* v_shiftRight_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_735_, v_shiftRight_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftRight_elim___boxed(lean_object* v_motive_739_, lean_object* v_a_740_, lean_object* v_t_741_, lean_object* v_h_742_, lean_object* v_shiftRight_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Std_Tactic_BVDecide_BVExpr_shiftRight_elim(v_motive_739_, v_a_740_, v_t_741_, v_h_742_, v_shiftRight_743_);
lean_dec(v_a_740_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_arithShiftRight_elim___redArg(lean_object* v_t_745_, lean_object* v_arithShiftRight_746_){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_745_, v_arithShiftRight_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_arithShiftRight_elim(lean_object* v_motive_748_, lean_object* v_a_749_, lean_object* v_t_750_, lean_object* v_h_751_, lean_object* v_arithShiftRight_752_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_Std_Tactic_BVDecide_BVExpr_ctorElim___redArg(v_t_750_, v_arithShiftRight_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_arithShiftRight_elim___boxed(lean_object* v_motive_754_, lean_object* v_a_755_, lean_object* v_t_756_, lean_object* v_h_757_, lean_object* v_arithShiftRight_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Std_Tactic_BVDecide_BVExpr_arithShiftRight_elim(v_motive_754_, v_a_755_, v_t_756_, v_h_757_, v_arithShiftRight_758_);
lean_dec(v_a_755_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_casesOn___override___redArg(lean_object* v_t_760_, lean_object* v_var_761_, lean_object* v_const_762_, lean_object* v_extract_763_, lean_object* v_bin_764_, lean_object* v_un_765_, lean_object* v_append_766_, lean_object* v_replicate_767_, lean_object* v_shiftLeft_768_, lean_object* v_shiftRight_769_, lean_object* v_arithShiftRight_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_unsafeCast___redArg(v_t_760_);
switch(lean_obj_tag(v___x_771_))
{
case 0:
{
lean_object* v_w_772_; lean_object* v_idx_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
lean_dec(v_arithShiftRight_770_);
lean_dec(v_shiftRight_769_);
lean_dec(v_shiftLeft_768_);
lean_dec(v_replicate_767_);
lean_dec(v_append_766_);
lean_dec(v_un_765_);
lean_dec(v_bin_764_);
lean_dec(v_extract_763_);
lean_dec(v_const_762_);
v_w_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_w_772_);
v_idx_773_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_idx_773_);
lean_dec_ref_known(v___x_771_, 2);
v___x_774_ = lean_apply_2(v_var_761_, v_w_772_, v_idx_773_);
v___x_775_ = l_unsafeCast___redArg(v___x_774_);
lean_dec(v___x_774_);
return v___x_775_;
}
case 1:
{
lean_object* v_w_776_; lean_object* v_val_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
lean_dec(v_arithShiftRight_770_);
lean_dec(v_shiftRight_769_);
lean_dec(v_shiftLeft_768_);
lean_dec(v_replicate_767_);
lean_dec(v_append_766_);
lean_dec(v_un_765_);
lean_dec(v_bin_764_);
lean_dec(v_extract_763_);
lean_dec(v_var_761_);
v_w_776_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_w_776_);
v_val_777_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_val_777_);
lean_dec_ref_known(v___x_771_, 2);
v___x_778_ = lean_apply_2(v_const_762_, v_w_776_, v_val_777_);
v___x_779_ = l_unsafeCast___redArg(v___x_778_);
lean_dec(v___x_778_);
return v___x_779_;
}
case 2:
{
lean_object* v_w_780_; lean_object* v_start_781_; lean_object* v_len_782_; lean_object* v_expr_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
lean_dec(v_arithShiftRight_770_);
lean_dec(v_shiftRight_769_);
lean_dec(v_shiftLeft_768_);
lean_dec(v_replicate_767_);
lean_dec(v_append_766_);
lean_dec(v_un_765_);
lean_dec(v_bin_764_);
lean_dec(v_const_762_);
lean_dec(v_var_761_);
v_w_780_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_w_780_);
v_start_781_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_start_781_);
v_len_782_ = lean_ctor_get(v___x_771_, 2);
lean_inc(v_len_782_);
v_expr_783_ = lean_ctor_get(v___x_771_, 3);
lean_inc_ref(v_expr_783_);
lean_dec_ref_known(v___x_771_, 4);
v___x_784_ = lean_apply_4(v_extract_763_, v_w_780_, v_start_781_, v_len_782_, v_expr_783_);
v___x_785_ = l_unsafeCast___redArg(v___x_784_);
lean_dec(v___x_784_);
return v___x_785_;
}
case 3:
{
lean_object* v_w_786_; lean_object* v_lhs_787_; uint8_t v_op_788_; lean_object* v_rhs_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
lean_dec(v_arithShiftRight_770_);
lean_dec(v_shiftRight_769_);
lean_dec(v_shiftLeft_768_);
lean_dec(v_replicate_767_);
lean_dec(v_append_766_);
lean_dec(v_un_765_);
lean_dec(v_extract_763_);
lean_dec(v_const_762_);
lean_dec(v_var_761_);
v_w_786_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_w_786_);
v_lhs_787_ = lean_ctor_get(v___x_771_, 1);
lean_inc_ref(v_lhs_787_);
v_op_788_ = lean_ctor_get_uint8(v___x_771_, sizeof(void*)*3 + 8);
v_rhs_789_ = lean_ctor_get(v___x_771_, 2);
lean_inc_ref(v_rhs_789_);
lean_dec_ref_known(v___x_771_, 3);
v___x_790_ = lean_box(v_op_788_);
v___x_791_ = lean_apply_4(v_bin_764_, v_w_786_, v_lhs_787_, v___x_790_, v_rhs_789_);
v___x_792_ = l_unsafeCast___redArg(v___x_791_);
lean_dec(v___x_791_);
return v___x_792_;
}
case 4:
{
lean_object* v_w_793_; lean_object* v_op_794_; lean_object* v_operand_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
lean_dec(v_arithShiftRight_770_);
lean_dec(v_shiftRight_769_);
lean_dec(v_shiftLeft_768_);
lean_dec(v_replicate_767_);
lean_dec(v_append_766_);
lean_dec(v_bin_764_);
lean_dec(v_extract_763_);
lean_dec(v_const_762_);
lean_dec(v_var_761_);
v_w_793_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_w_793_);
v_op_794_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_op_794_);
v_operand_795_ = lean_ctor_get(v___x_771_, 2);
lean_inc_ref(v_operand_795_);
lean_dec_ref_known(v___x_771_, 3);
v___x_796_ = lean_apply_3(v_un_765_, v_w_793_, v_op_794_, v_operand_795_);
v___x_797_ = l_unsafeCast___redArg(v___x_796_);
lean_dec(v___x_796_);
return v___x_797_;
}
case 5:
{
lean_object* v_l_798_; lean_object* v_r_799_; lean_object* v_w_800_; lean_object* v_lhs_801_; lean_object* v_rhs_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
lean_dec(v_arithShiftRight_770_);
lean_dec(v_shiftRight_769_);
lean_dec(v_shiftLeft_768_);
lean_dec(v_replicate_767_);
lean_dec(v_un_765_);
lean_dec(v_bin_764_);
lean_dec(v_extract_763_);
lean_dec(v_const_762_);
lean_dec(v_var_761_);
v_l_798_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_l_798_);
v_r_799_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_r_799_);
v_w_800_ = lean_ctor_get(v___x_771_, 2);
lean_inc(v_w_800_);
v_lhs_801_ = lean_ctor_get(v___x_771_, 3);
lean_inc_ref(v_lhs_801_);
v_rhs_802_ = lean_ctor_get(v___x_771_, 4);
lean_inc_ref(v_rhs_802_);
lean_dec_ref_known(v___x_771_, 5);
v___x_803_ = lean_apply_6(v_append_766_, v_l_798_, v_r_799_, v_w_800_, v_lhs_801_, v_rhs_802_, lean_box(0));
v___x_804_ = l_unsafeCast___redArg(v___x_803_);
lean_dec(v___x_803_);
return v___x_804_;
}
case 6:
{
lean_object* v_w_805_; lean_object* v_w_x27_806_; lean_object* v_n_807_; lean_object* v_expr_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
lean_dec(v_arithShiftRight_770_);
lean_dec(v_shiftRight_769_);
lean_dec(v_shiftLeft_768_);
lean_dec(v_append_766_);
lean_dec(v_un_765_);
lean_dec(v_bin_764_);
lean_dec(v_extract_763_);
lean_dec(v_const_762_);
lean_dec(v_var_761_);
v_w_805_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_w_805_);
v_w_x27_806_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_w_x27_806_);
v_n_807_ = lean_ctor_get(v___x_771_, 2);
lean_inc(v_n_807_);
v_expr_808_ = lean_ctor_get(v___x_771_, 3);
lean_inc_ref(v_expr_808_);
lean_dec_ref_known(v___x_771_, 4);
v___x_809_ = lean_apply_5(v_replicate_767_, v_w_805_, v_w_x27_806_, v_n_807_, v_expr_808_, lean_box(0));
v___x_810_ = l_unsafeCast___redArg(v___x_809_);
lean_dec(v___x_809_);
return v___x_810_;
}
case 7:
{
lean_object* v_m_811_; lean_object* v_n_812_; lean_object* v_lhs_813_; lean_object* v_rhs_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
lean_dec(v_arithShiftRight_770_);
lean_dec(v_shiftRight_769_);
lean_dec(v_replicate_767_);
lean_dec(v_append_766_);
lean_dec(v_un_765_);
lean_dec(v_bin_764_);
lean_dec(v_extract_763_);
lean_dec(v_const_762_);
lean_dec(v_var_761_);
v_m_811_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_m_811_);
v_n_812_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_n_812_);
v_lhs_813_ = lean_ctor_get(v___x_771_, 2);
lean_inc_ref(v_lhs_813_);
v_rhs_814_ = lean_ctor_get(v___x_771_, 3);
lean_inc_ref(v_rhs_814_);
lean_dec_ref_known(v___x_771_, 4);
v___x_815_ = lean_apply_4(v_shiftLeft_768_, v_m_811_, v_n_812_, v_lhs_813_, v_rhs_814_);
v___x_816_ = l_unsafeCast___redArg(v___x_815_);
lean_dec(v___x_815_);
return v___x_816_;
}
case 8:
{
lean_object* v_m_817_; lean_object* v_n_818_; lean_object* v_lhs_819_; lean_object* v_rhs_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
lean_dec(v_arithShiftRight_770_);
lean_dec(v_shiftLeft_768_);
lean_dec(v_replicate_767_);
lean_dec(v_append_766_);
lean_dec(v_un_765_);
lean_dec(v_bin_764_);
lean_dec(v_extract_763_);
lean_dec(v_const_762_);
lean_dec(v_var_761_);
v_m_817_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_m_817_);
v_n_818_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_n_818_);
v_lhs_819_ = lean_ctor_get(v___x_771_, 2);
lean_inc_ref(v_lhs_819_);
v_rhs_820_ = lean_ctor_get(v___x_771_, 3);
lean_inc_ref(v_rhs_820_);
lean_dec_ref_known(v___x_771_, 4);
v___x_821_ = lean_apply_4(v_shiftRight_769_, v_m_817_, v_n_818_, v_lhs_819_, v_rhs_820_);
v___x_822_ = l_unsafeCast___redArg(v___x_821_);
lean_dec(v___x_821_);
return v___x_822_;
}
default: 
{
lean_object* v_m_823_; lean_object* v_n_824_; lean_object* v_lhs_825_; lean_object* v_rhs_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
lean_dec(v_shiftRight_769_);
lean_dec(v_shiftLeft_768_);
lean_dec(v_replicate_767_);
lean_dec(v_append_766_);
lean_dec(v_un_765_);
lean_dec(v_bin_764_);
lean_dec(v_extract_763_);
lean_dec(v_const_762_);
lean_dec(v_var_761_);
v_m_823_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_m_823_);
v_n_824_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_n_824_);
v_lhs_825_ = lean_ctor_get(v___x_771_, 2);
lean_inc_ref(v_lhs_825_);
v_rhs_826_ = lean_ctor_get(v___x_771_, 3);
lean_inc_ref(v_rhs_826_);
lean_dec_ref_known(v___x_771_, 4);
v___x_827_ = lean_apply_4(v_arithShiftRight_770_, v_m_823_, v_n_824_, v_lhs_825_, v_rhs_826_);
v___x_828_ = l_unsafeCast___redArg(v___x_827_);
lean_dec(v___x_827_);
return v___x_828_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_casesOn___override___redArg___boxed(lean_object* v_t_829_, lean_object* v_var_830_, lean_object* v_const_831_, lean_object* v_extract_832_, lean_object* v_bin_833_, lean_object* v_un_834_, lean_object* v_append_835_, lean_object* v_replicate_836_, lean_object* v_shiftLeft_837_, lean_object* v_shiftRight_838_, lean_object* v_arithShiftRight_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Std_Tactic_BVDecide_BVExpr_casesOn___override___redArg(v_t_829_, v_var_830_, v_const_831_, v_extract_832_, v_bin_833_, v_un_834_, v_append_835_, v_replicate_836_, v_shiftLeft_837_, v_shiftRight_838_, v_arithShiftRight_839_);
lean_dec_ref(v_t_829_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_casesOn___override(lean_object* v_motive_841_, lean_object* v_a_842_, lean_object* v_t_843_, lean_object* v_var_844_, lean_object* v_const_845_, lean_object* v_extract_846_, lean_object* v_bin_847_, lean_object* v_un_848_, lean_object* v_append_849_, lean_object* v_replicate_850_, lean_object* v_shiftLeft_851_, lean_object* v_shiftRight_852_, lean_object* v_arithShiftRight_853_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = l_unsafeCast___redArg(v_t_843_);
switch(lean_obj_tag(v___x_854_))
{
case 0:
{
lean_object* v_w_855_; lean_object* v_idx_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
lean_dec(v_arithShiftRight_853_);
lean_dec(v_shiftRight_852_);
lean_dec(v_shiftLeft_851_);
lean_dec(v_replicate_850_);
lean_dec(v_append_849_);
lean_dec(v_un_848_);
lean_dec(v_bin_847_);
lean_dec(v_extract_846_);
lean_dec(v_const_845_);
v_w_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_w_855_);
v_idx_856_ = lean_ctor_get(v___x_854_, 1);
lean_inc(v_idx_856_);
lean_dec_ref_known(v___x_854_, 2);
v___x_857_ = lean_apply_2(v_var_844_, v_w_855_, v_idx_856_);
v___x_858_ = l_unsafeCast___redArg(v___x_857_);
lean_dec(v___x_857_);
return v___x_858_;
}
case 1:
{
lean_object* v_w_859_; lean_object* v_val_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
lean_dec(v_arithShiftRight_853_);
lean_dec(v_shiftRight_852_);
lean_dec(v_shiftLeft_851_);
lean_dec(v_replicate_850_);
lean_dec(v_append_849_);
lean_dec(v_un_848_);
lean_dec(v_bin_847_);
lean_dec(v_extract_846_);
lean_dec(v_var_844_);
v_w_859_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_w_859_);
v_val_860_ = lean_ctor_get(v___x_854_, 1);
lean_inc(v_val_860_);
lean_dec_ref_known(v___x_854_, 2);
v___x_861_ = lean_apply_2(v_const_845_, v_w_859_, v_val_860_);
v___x_862_ = l_unsafeCast___redArg(v___x_861_);
lean_dec(v___x_861_);
return v___x_862_;
}
case 2:
{
lean_object* v_w_863_; lean_object* v_start_864_; lean_object* v_len_865_; lean_object* v_expr_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
lean_dec(v_arithShiftRight_853_);
lean_dec(v_shiftRight_852_);
lean_dec(v_shiftLeft_851_);
lean_dec(v_replicate_850_);
lean_dec(v_append_849_);
lean_dec(v_un_848_);
lean_dec(v_bin_847_);
lean_dec(v_const_845_);
lean_dec(v_var_844_);
v_w_863_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_w_863_);
v_start_864_ = lean_ctor_get(v___x_854_, 1);
lean_inc(v_start_864_);
v_len_865_ = lean_ctor_get(v___x_854_, 2);
lean_inc(v_len_865_);
v_expr_866_ = lean_ctor_get(v___x_854_, 3);
lean_inc_ref(v_expr_866_);
lean_dec_ref_known(v___x_854_, 4);
v___x_867_ = lean_apply_4(v_extract_846_, v_w_863_, v_start_864_, v_len_865_, v_expr_866_);
v___x_868_ = l_unsafeCast___redArg(v___x_867_);
lean_dec(v___x_867_);
return v___x_868_;
}
case 3:
{
lean_object* v_w_869_; lean_object* v_lhs_870_; uint8_t v_op_871_; lean_object* v_rhs_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
lean_dec(v_arithShiftRight_853_);
lean_dec(v_shiftRight_852_);
lean_dec(v_shiftLeft_851_);
lean_dec(v_replicate_850_);
lean_dec(v_append_849_);
lean_dec(v_un_848_);
lean_dec(v_extract_846_);
lean_dec(v_const_845_);
lean_dec(v_var_844_);
v_w_869_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_w_869_);
v_lhs_870_ = lean_ctor_get(v___x_854_, 1);
lean_inc_ref(v_lhs_870_);
v_op_871_ = lean_ctor_get_uint8(v___x_854_, sizeof(void*)*3 + 8);
v_rhs_872_ = lean_ctor_get(v___x_854_, 2);
lean_inc_ref(v_rhs_872_);
lean_dec_ref_known(v___x_854_, 3);
v___x_873_ = lean_box(v_op_871_);
v___x_874_ = lean_apply_4(v_bin_847_, v_w_869_, v_lhs_870_, v___x_873_, v_rhs_872_);
v___x_875_ = l_unsafeCast___redArg(v___x_874_);
lean_dec(v___x_874_);
return v___x_875_;
}
case 4:
{
lean_object* v_w_876_; lean_object* v_op_877_; lean_object* v_operand_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
lean_dec(v_arithShiftRight_853_);
lean_dec(v_shiftRight_852_);
lean_dec(v_shiftLeft_851_);
lean_dec(v_replicate_850_);
lean_dec(v_append_849_);
lean_dec(v_bin_847_);
lean_dec(v_extract_846_);
lean_dec(v_const_845_);
lean_dec(v_var_844_);
v_w_876_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_w_876_);
v_op_877_ = lean_ctor_get(v___x_854_, 1);
lean_inc(v_op_877_);
v_operand_878_ = lean_ctor_get(v___x_854_, 2);
lean_inc_ref(v_operand_878_);
lean_dec_ref_known(v___x_854_, 3);
v___x_879_ = lean_apply_3(v_un_848_, v_w_876_, v_op_877_, v_operand_878_);
v___x_880_ = l_unsafeCast___redArg(v___x_879_);
lean_dec(v___x_879_);
return v___x_880_;
}
case 5:
{
lean_object* v_l_881_; lean_object* v_r_882_; lean_object* v_w_883_; lean_object* v_lhs_884_; lean_object* v_rhs_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
lean_dec(v_arithShiftRight_853_);
lean_dec(v_shiftRight_852_);
lean_dec(v_shiftLeft_851_);
lean_dec(v_replicate_850_);
lean_dec(v_un_848_);
lean_dec(v_bin_847_);
lean_dec(v_extract_846_);
lean_dec(v_const_845_);
lean_dec(v_var_844_);
v_l_881_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_l_881_);
v_r_882_ = lean_ctor_get(v___x_854_, 1);
lean_inc(v_r_882_);
v_w_883_ = lean_ctor_get(v___x_854_, 2);
lean_inc(v_w_883_);
v_lhs_884_ = lean_ctor_get(v___x_854_, 3);
lean_inc_ref(v_lhs_884_);
v_rhs_885_ = lean_ctor_get(v___x_854_, 4);
lean_inc_ref(v_rhs_885_);
lean_dec_ref_known(v___x_854_, 5);
v___x_886_ = lean_apply_6(v_append_849_, v_l_881_, v_r_882_, v_w_883_, v_lhs_884_, v_rhs_885_, lean_box(0));
v___x_887_ = l_unsafeCast___redArg(v___x_886_);
lean_dec(v___x_886_);
return v___x_887_;
}
case 6:
{
lean_object* v_w_888_; lean_object* v_w_x27_889_; lean_object* v_n_890_; lean_object* v_expr_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
lean_dec(v_arithShiftRight_853_);
lean_dec(v_shiftRight_852_);
lean_dec(v_shiftLeft_851_);
lean_dec(v_append_849_);
lean_dec(v_un_848_);
lean_dec(v_bin_847_);
lean_dec(v_extract_846_);
lean_dec(v_const_845_);
lean_dec(v_var_844_);
v_w_888_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_w_888_);
v_w_x27_889_ = lean_ctor_get(v___x_854_, 1);
lean_inc(v_w_x27_889_);
v_n_890_ = lean_ctor_get(v___x_854_, 2);
lean_inc(v_n_890_);
v_expr_891_ = lean_ctor_get(v___x_854_, 3);
lean_inc_ref(v_expr_891_);
lean_dec_ref_known(v___x_854_, 4);
v___x_892_ = lean_apply_5(v_replicate_850_, v_w_888_, v_w_x27_889_, v_n_890_, v_expr_891_, lean_box(0));
v___x_893_ = l_unsafeCast___redArg(v___x_892_);
lean_dec(v___x_892_);
return v___x_893_;
}
case 7:
{
lean_object* v_m_894_; lean_object* v_n_895_; lean_object* v_lhs_896_; lean_object* v_rhs_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec(v_arithShiftRight_853_);
lean_dec(v_shiftRight_852_);
lean_dec(v_replicate_850_);
lean_dec(v_append_849_);
lean_dec(v_un_848_);
lean_dec(v_bin_847_);
lean_dec(v_extract_846_);
lean_dec(v_const_845_);
lean_dec(v_var_844_);
v_m_894_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_m_894_);
v_n_895_ = lean_ctor_get(v___x_854_, 1);
lean_inc(v_n_895_);
v_lhs_896_ = lean_ctor_get(v___x_854_, 2);
lean_inc_ref(v_lhs_896_);
v_rhs_897_ = lean_ctor_get(v___x_854_, 3);
lean_inc_ref(v_rhs_897_);
lean_dec_ref_known(v___x_854_, 4);
v___x_898_ = lean_apply_4(v_shiftLeft_851_, v_m_894_, v_n_895_, v_lhs_896_, v_rhs_897_);
v___x_899_ = l_unsafeCast___redArg(v___x_898_);
lean_dec(v___x_898_);
return v___x_899_;
}
case 8:
{
lean_object* v_m_900_; lean_object* v_n_901_; lean_object* v_lhs_902_; lean_object* v_rhs_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
lean_dec(v_arithShiftRight_853_);
lean_dec(v_shiftLeft_851_);
lean_dec(v_replicate_850_);
lean_dec(v_append_849_);
lean_dec(v_un_848_);
lean_dec(v_bin_847_);
lean_dec(v_extract_846_);
lean_dec(v_const_845_);
lean_dec(v_var_844_);
v_m_900_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_m_900_);
v_n_901_ = lean_ctor_get(v___x_854_, 1);
lean_inc(v_n_901_);
v_lhs_902_ = lean_ctor_get(v___x_854_, 2);
lean_inc_ref(v_lhs_902_);
v_rhs_903_ = lean_ctor_get(v___x_854_, 3);
lean_inc_ref(v_rhs_903_);
lean_dec_ref_known(v___x_854_, 4);
v___x_904_ = lean_apply_4(v_shiftRight_852_, v_m_900_, v_n_901_, v_lhs_902_, v_rhs_903_);
v___x_905_ = l_unsafeCast___redArg(v___x_904_);
lean_dec(v___x_904_);
return v___x_905_;
}
default: 
{
lean_object* v_m_906_; lean_object* v_n_907_; lean_object* v_lhs_908_; lean_object* v_rhs_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
lean_dec(v_shiftRight_852_);
lean_dec(v_shiftLeft_851_);
lean_dec(v_replicate_850_);
lean_dec(v_append_849_);
lean_dec(v_un_848_);
lean_dec(v_bin_847_);
lean_dec(v_extract_846_);
lean_dec(v_const_845_);
lean_dec(v_var_844_);
v_m_906_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_m_906_);
v_n_907_ = lean_ctor_get(v___x_854_, 1);
lean_inc(v_n_907_);
v_lhs_908_ = lean_ctor_get(v___x_854_, 2);
lean_inc_ref(v_lhs_908_);
v_rhs_909_ = lean_ctor_get(v___x_854_, 3);
lean_inc_ref(v_rhs_909_);
lean_dec_ref_known(v___x_854_, 4);
v___x_910_ = lean_apply_4(v_arithShiftRight_853_, v_m_906_, v_n_907_, v_lhs_908_, v_rhs_909_);
v___x_911_ = l_unsafeCast___redArg(v___x_910_);
lean_dec(v___x_910_);
return v___x_911_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_casesOn___override___boxed(lean_object* v_motive_912_, lean_object* v_a_913_, lean_object* v_t_914_, lean_object* v_var_915_, lean_object* v_const_916_, lean_object* v_extract_917_, lean_object* v_bin_918_, lean_object* v_un_919_, lean_object* v_append_920_, lean_object* v_replicate_921_, lean_object* v_shiftLeft_922_, lean_object* v_shiftRight_923_, lean_object* v_arithShiftRight_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Std_Tactic_BVDecide_BVExpr_casesOn___override(v_motive_912_, v_a_913_, v_t_914_, v_var_915_, v_const_916_, v_extract_917_, v_bin_918_, v_un_919_, v_append_920_, v_replicate_921_, v_shiftLeft_922_, v_shiftRight_923_, v_arithShiftRight_924_);
lean_dec_ref(v_t_914_);
lean_dec(v_a_913_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_var___override(lean_object* v_w_926_, lean_object* v_idx_927_){
_start:
{
uint64_t v___x_928_; uint64_t v___x_929_; uint64_t v___x_930_; uint64_t v___x_931_; uint64_t v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_928_ = 5ULL;
v___x_929_ = lean_uint64_of_nat(v_w_926_);
v___x_930_ = lean_uint64_of_nat(v_idx_927_);
v___x_931_ = lean_uint64_mix_hash(v___x_929_, v___x_930_);
v___x_932_ = lean_uint64_mix_hash(v___x_928_, v___x_931_);
v___x_933_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_933_, 0, v_w_926_);
lean_ctor_set(v___x_933_, 1, v_idx_927_);
lean_ctor_set_uint64(v___x_933_, sizeof(void*)*2, v___x_932_);
v___x_934_ = l_unsafeCast___redArg(v___x_933_);
lean_dec_ref_known(v___x_933_, 2);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_const___override(lean_object* v_w_935_, lean_object* v_val_936_){
_start:
{
uint64_t v___x_937_; uint64_t v___x_938_; uint64_t v___x_939_; uint64_t v___x_940_; uint64_t v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_937_ = 7ULL;
v___x_938_ = lean_uint64_of_nat(v_w_935_);
v___x_939_ = l_BitVec_hash(v_w_935_, v_val_936_);
v___x_940_ = lean_uint64_mix_hash(v___x_938_, v___x_939_);
v___x_941_ = lean_uint64_mix_hash(v___x_937_, v___x_940_);
v___x_942_ = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(v___x_942_, 0, v_w_935_);
lean_ctor_set(v___x_942_, 1, v_val_936_);
lean_ctor_set_uint64(v___x_942_, sizeof(void*)*2, v___x_941_);
v___x_943_ = l_unsafeCast___redArg(v___x_942_);
lean_dec_ref_known(v___x_942_, 2);
return v___x_943_;
}
}
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(lean_object* v_x_944_){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = l_unsafeCast___redArg(v_x_944_);
switch(lean_obj_tag(v___x_945_))
{
case 0:
{
uint64_t v_hashCode_946_; 
v_hashCode_946_ = lean_ctor_get_uint64(v___x_945_, sizeof(void*)*2);
lean_dec_ref_known(v___x_945_, 2);
return v_hashCode_946_;
}
case 1:
{
uint64_t v_hashCode_947_; 
v_hashCode_947_ = lean_ctor_get_uint64(v___x_945_, sizeof(void*)*2);
lean_dec_ref_known(v___x_945_, 2);
return v_hashCode_947_;
}
case 3:
{
uint64_t v_hashCode_948_; 
v_hashCode_948_ = lean_ctor_get_uint64(v___x_945_, sizeof(void*)*3);
lean_dec_ref_known(v___x_945_, 3);
return v_hashCode_948_;
}
case 4:
{
uint64_t v_hashCode_949_; 
v_hashCode_949_ = lean_ctor_get_uint64(v___x_945_, sizeof(void*)*3);
lean_dec_ref_known(v___x_945_, 3);
return v_hashCode_949_;
}
case 5:
{
uint64_t v_hashCode_950_; 
v_hashCode_950_ = lean_ctor_get_uint64(v___x_945_, sizeof(void*)*5);
lean_dec_ref_known(v___x_945_, 5);
return v_hashCode_950_;
}
default: 
{
uint64_t v_hashCode_951_; 
v_hashCode_951_ = lean_ctor_get_uint64(v___x_945_, sizeof(void*)*4);
lean_dec(v___x_945_);
return v_hashCode_951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg___boxed(lean_object* v_x_952_){
_start:
{
uint64_t v_res_953_; lean_object* v_r_954_; 
v_res_953_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_x_952_);
lean_dec_ref(v_x_952_);
v_r_954_ = lean_box_uint64(v_res_953_);
return v_r_954_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_extract___override(lean_object* v_w_955_, lean_object* v_start_956_, lean_object* v_len_957_, lean_object* v_expr_958_){
_start:
{
uint64_t v___x_959_; uint64_t v___x_960_; uint64_t v___x_961_; uint64_t v___x_962_; uint64_t v___x_963_; uint64_t v___x_964_; uint64_t v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_959_ = 11ULL;
v___x_960_ = lean_uint64_of_nat(v_start_956_);
v___x_961_ = lean_uint64_of_nat(v_len_957_);
v___x_962_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_expr_958_);
v___x_963_ = lean_uint64_mix_hash(v___x_961_, v___x_962_);
v___x_964_ = lean_uint64_mix_hash(v___x_960_, v___x_963_);
v___x_965_ = lean_uint64_mix_hash(v___x_959_, v___x_964_);
v___x_966_ = lean_alloc_ctor(2, 4, 8);
lean_ctor_set(v___x_966_, 0, v_w_955_);
lean_ctor_set(v___x_966_, 1, v_start_956_);
lean_ctor_set(v___x_966_, 2, v_len_957_);
lean_ctor_set(v___x_966_, 3, v_expr_958_);
lean_ctor_set_uint64(v___x_966_, sizeof(void*)*4, v___x_965_);
v___x_967_ = l_unsafeCast___redArg(v___x_966_);
lean_dec_ref_known(v___x_966_, 4);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin___override(lean_object* v_w_968_, lean_object* v_lhs_969_, uint8_t v_op_970_, lean_object* v_rhs_971_){
_start:
{
uint64_t v___x_972_; uint64_t v___x_973_; uint64_t v___x_974_; uint64_t v___x_975_; uint64_t v___x_976_; uint64_t v___x_977_; uint64_t v___x_978_; uint64_t v___x_979_; uint64_t v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_972_ = 13ULL;
v___x_973_ = lean_uint64_of_nat(v_w_968_);
v___x_974_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_lhs_969_);
v___x_975_ = l_Std_Tactic_BVDecide_instHashableBVBinOp_hash(v_op_970_);
v___x_976_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_rhs_971_);
v___x_977_ = lean_uint64_mix_hash(v___x_975_, v___x_976_);
v___x_978_ = lean_uint64_mix_hash(v___x_974_, v___x_977_);
v___x_979_ = lean_uint64_mix_hash(v___x_973_, v___x_978_);
v___x_980_ = lean_uint64_mix_hash(v___x_972_, v___x_979_);
v___x_981_ = lean_alloc_ctor(3, 3, 9);
lean_ctor_set(v___x_981_, 0, v_w_968_);
lean_ctor_set(v___x_981_, 1, v_lhs_969_);
lean_ctor_set(v___x_981_, 2, v_rhs_971_);
lean_ctor_set_uint64(v___x_981_, sizeof(void*)*3, v___x_980_);
lean_ctor_set_uint8(v___x_981_, sizeof(void*)*3 + 8, v_op_970_);
v___x_982_ = l_unsafeCast___redArg(v___x_981_);
lean_dec_ref_known(v___x_981_, 3);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_bin___override___boxed(lean_object* v_w_983_, lean_object* v_lhs_984_, lean_object* v_op_985_, lean_object* v_rhs_986_){
_start:
{
uint8_t v_op_boxed_987_; lean_object* v_res_988_; 
v_op_boxed_987_ = lean_unbox(v_op_985_);
v_res_988_ = l_Std_Tactic_BVDecide_BVExpr_bin___override(v_w_983_, v_lhs_984_, v_op_boxed_987_, v_rhs_986_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_un___override(lean_object* v_w_989_, lean_object* v_op_990_, lean_object* v_operand_991_){
_start:
{
uint64_t v___x_992_; uint64_t v___x_993_; uint64_t v___x_994_; uint64_t v___x_995_; uint64_t v___x_996_; uint64_t v___x_997_; uint64_t v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_992_ = 17ULL;
v___x_993_ = lean_uint64_of_nat(v_w_989_);
v___x_994_ = l_Std_Tactic_BVDecide_instHashableBVUnOp_hash(v_op_990_);
v___x_995_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_operand_991_);
v___x_996_ = lean_uint64_mix_hash(v___x_994_, v___x_995_);
v___x_997_ = lean_uint64_mix_hash(v___x_993_, v___x_996_);
v___x_998_ = lean_uint64_mix_hash(v___x_992_, v___x_997_);
v___x_999_ = lean_alloc_ctor(4, 3, 8);
lean_ctor_set(v___x_999_, 0, v_w_989_);
lean_ctor_set(v___x_999_, 1, v_op_990_);
lean_ctor_set(v___x_999_, 2, v_operand_991_);
lean_ctor_set_uint64(v___x_999_, sizeof(void*)*3, v___x_998_);
v___x_1000_ = l_unsafeCast___redArg(v___x_999_);
lean_dec_ref_known(v___x_999_, 3);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(lean_object* v_l_1001_, lean_object* v_r_1002_, lean_object* v_w_1003_, lean_object* v_lhs_1004_, lean_object* v_rhs_1005_){
_start:
{
uint64_t v___x_1006_; uint64_t v___x_1007_; uint64_t v___x_1008_; uint64_t v___x_1009_; uint64_t v___x_1010_; uint64_t v___x_1011_; uint64_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1006_ = 19ULL;
v___x_1007_ = lean_uint64_of_nat(v_w_1003_);
v___x_1008_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_lhs_1004_);
v___x_1009_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_rhs_1005_);
v___x_1010_ = lean_uint64_mix_hash(v___x_1008_, v___x_1009_);
v___x_1011_ = lean_uint64_mix_hash(v___x_1007_, v___x_1010_);
v___x_1012_ = lean_uint64_mix_hash(v___x_1006_, v___x_1011_);
v___x_1013_ = lean_alloc_ctor(5, 5, 8);
lean_ctor_set(v___x_1013_, 0, v_l_1001_);
lean_ctor_set(v___x_1013_, 1, v_r_1002_);
lean_ctor_set(v___x_1013_, 2, v_w_1003_);
lean_ctor_set(v___x_1013_, 3, v_lhs_1004_);
lean_ctor_set(v___x_1013_, 4, v_rhs_1005_);
lean_ctor_set_uint64(v___x_1013_, sizeof(void*)*5, v___x_1012_);
v___x_1014_ = l_unsafeCast___redArg(v___x_1013_);
lean_dec_ref_known(v___x_1013_, 5);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_append___override(lean_object* v_l_1015_, lean_object* v_r_1016_, lean_object* v_w_1017_, lean_object* v_lhs_1018_, lean_object* v_rhs_1019_, lean_object* v_h_1020_){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Std_Tactic_BVDecide_BVExpr_append___override___redArg(v_l_1015_, v_r_1016_, v_w_1017_, v_lhs_1018_, v_rhs_1019_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate___override___redArg(lean_object* v_w_1022_, lean_object* v_w_x27_1023_, lean_object* v_n_1024_, lean_object* v_expr_1025_){
_start:
{
uint64_t v___x_1026_; uint64_t v___x_1027_; uint64_t v___x_1028_; uint64_t v___x_1029_; uint64_t v___x_1030_; uint64_t v___x_1031_; uint64_t v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1026_ = 23ULL;
v___x_1027_ = lean_uint64_of_nat(v_w_x27_1023_);
v___x_1028_ = lean_uint64_of_nat(v_n_1024_);
v___x_1029_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_expr_1025_);
v___x_1030_ = lean_uint64_mix_hash(v___x_1028_, v___x_1029_);
v___x_1031_ = lean_uint64_mix_hash(v___x_1027_, v___x_1030_);
v___x_1032_ = lean_uint64_mix_hash(v___x_1026_, v___x_1031_);
v___x_1033_ = lean_alloc_ctor(6, 4, 8);
lean_ctor_set(v___x_1033_, 0, v_w_1022_);
lean_ctor_set(v___x_1033_, 1, v_w_x27_1023_);
lean_ctor_set(v___x_1033_, 2, v_n_1024_);
lean_ctor_set(v___x_1033_, 3, v_expr_1025_);
lean_ctor_set_uint64(v___x_1033_, sizeof(void*)*4, v___x_1032_);
v___x_1034_ = l_unsafeCast___redArg(v___x_1033_);
lean_dec_ref_known(v___x_1033_, 4);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_replicate___override(lean_object* v_w_1035_, lean_object* v_w_x27_1036_, lean_object* v_n_1037_, lean_object* v_expr_1038_, lean_object* v_h_1039_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Std_Tactic_BVDecide_BVExpr_replicate___override___redArg(v_w_1035_, v_w_x27_1036_, v_n_1037_, v_expr_1038_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftLeft___override(lean_object* v_m_1041_, lean_object* v_n_1042_, lean_object* v_lhs_1043_, lean_object* v_rhs_1044_){
_start:
{
uint64_t v___x_1045_; uint64_t v___x_1046_; uint64_t v___x_1047_; uint64_t v___x_1048_; uint64_t v___x_1049_; uint64_t v___x_1050_; uint64_t v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1045_ = 29ULL;
v___x_1046_ = lean_uint64_of_nat(v_m_1041_);
v___x_1047_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_lhs_1043_);
v___x_1048_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_rhs_1044_);
v___x_1049_ = lean_uint64_mix_hash(v___x_1047_, v___x_1048_);
v___x_1050_ = lean_uint64_mix_hash(v___x_1046_, v___x_1049_);
v___x_1051_ = lean_uint64_mix_hash(v___x_1045_, v___x_1050_);
v___x_1052_ = lean_alloc_ctor(7, 4, 8);
lean_ctor_set(v___x_1052_, 0, v_m_1041_);
lean_ctor_set(v___x_1052_, 1, v_n_1042_);
lean_ctor_set(v___x_1052_, 2, v_lhs_1043_);
lean_ctor_set(v___x_1052_, 3, v_rhs_1044_);
lean_ctor_set_uint64(v___x_1052_, sizeof(void*)*4, v___x_1051_);
v___x_1053_ = l_unsafeCast___redArg(v___x_1052_);
lean_dec_ref_known(v___x_1052_, 4);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_shiftRight___override(lean_object* v_m_1054_, lean_object* v_n_1055_, lean_object* v_lhs_1056_, lean_object* v_rhs_1057_){
_start:
{
uint64_t v___x_1058_; uint64_t v___x_1059_; uint64_t v___x_1060_; uint64_t v___x_1061_; uint64_t v___x_1062_; uint64_t v___x_1063_; uint64_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1058_ = 31ULL;
v___x_1059_ = lean_uint64_of_nat(v_m_1054_);
v___x_1060_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_lhs_1056_);
v___x_1061_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_rhs_1057_);
v___x_1062_ = lean_uint64_mix_hash(v___x_1060_, v___x_1061_);
v___x_1063_ = lean_uint64_mix_hash(v___x_1059_, v___x_1062_);
v___x_1064_ = lean_uint64_mix_hash(v___x_1058_, v___x_1063_);
v___x_1065_ = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(v___x_1065_, 0, v_m_1054_);
lean_ctor_set(v___x_1065_, 1, v_n_1055_);
lean_ctor_set(v___x_1065_, 2, v_lhs_1056_);
lean_ctor_set(v___x_1065_, 3, v_rhs_1057_);
lean_ctor_set_uint64(v___x_1065_, sizeof(void*)*4, v___x_1064_);
v___x_1066_ = l_unsafeCast___redArg(v___x_1065_);
lean_dec_ref_known(v___x_1065_, 4);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_arithShiftRight___override(lean_object* v_m_1067_, lean_object* v_n_1068_, lean_object* v_lhs_1069_, lean_object* v_rhs_1070_){
_start:
{
uint64_t v___x_1071_; uint64_t v___x_1072_; uint64_t v___x_1073_; uint64_t v___x_1074_; uint64_t v___x_1075_; uint64_t v___x_1076_; uint64_t v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1071_ = 37ULL;
v___x_1072_ = lean_uint64_of_nat(v_m_1067_);
v___x_1073_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_lhs_1069_);
v___x_1074_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_rhs_1070_);
v___x_1075_ = lean_uint64_mix_hash(v___x_1073_, v___x_1074_);
v___x_1076_ = lean_uint64_mix_hash(v___x_1072_, v___x_1075_);
v___x_1077_ = lean_uint64_mix_hash(v___x_1071_, v___x_1076_);
v___x_1078_ = lean_alloc_ctor(9, 4, 8);
lean_ctor_set(v___x_1078_, 0, v_m_1067_);
lean_ctor_set(v___x_1078_, 1, v_n_1068_);
lean_ctor_set(v___x_1078_, 2, v_lhs_1069_);
lean_ctor_set(v___x_1078_, 3, v_rhs_1070_);
lean_ctor_set_uint64(v___x_1078_, sizeof(void*)*4, v___x_1077_);
v___x_1079_ = l_unsafeCast___redArg(v___x_1078_);
lean_dec_ref_known(v___x_1078_, 4);
return v___x_1079_;
}
}
LEAN_EXPORT uint64_t l_Std_Tactic_BVDecide_BVExpr_hashCode___override(lean_object* v_a_1080_, lean_object* v_x_1081_){
_start:
{
uint64_t v___x_1082_; 
v___x_1082_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_x_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_hashCode___override___boxed(lean_object* v_a_1083_, lean_object* v_x_1084_){
_start:
{
uint64_t v_res_1085_; lean_object* v_r_1086_; 
v_res_1085_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override(v_a_1083_, v_x_1084_);
lean_dec_ref(v_x_1084_);
lean_dec(v_a_1083_);
v_r_1086_ = lean_box_uint64(v_res_1085_);
return v_r_1086_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg(){
_start:
{
lean_object* v___f_1089_; 
v___f_1089_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg___closed__0));
return v___f_1089_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg___boxed(lean_object* v___dummy_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg();
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instHashable(lean_object* v_w_1092_){
_start:
{
lean_object* v___f_1093_; 
v___f_1093_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_instHashable___redArg___closed__0));
return v___f_1093_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instHashable___boxed(lean_object* v_w_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Std_Tactic_BVDecide_BVExpr_instHashable(v_w_1094_);
lean_dec(v_w_1094_);
return v_res_1095_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(lean_object* v_l_1096_, lean_object* v_r_1097_){
_start:
{
size_t v___x_1098_; size_t v___x_1099_; uint8_t v___x_1100_; 
v___x_1098_ = lean_ptr_addr(v_l_1096_);
v___x_1099_ = lean_ptr_addr(v_r_1097_);
v___x_1100_ = lean_usize_dec_eq(v___x_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
uint64_t v___x_1101_; uint64_t v___x_1102_; uint8_t v___x_1103_; 
v___x_1101_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_l_1096_);
v___x_1102_ = l_Std_Tactic_BVDecide_BVExpr_hashCode___override___redArg(v_r_1097_);
v___x_1103_ = lean_uint64_dec_eq(v___x_1101_, v___x_1102_);
if (v___x_1103_ == 0)
{
return v___x_1100_;
}
else
{
if (v___x_1100_ == 0)
{
switch(lean_obj_tag(v_l_1096_))
{
case 0:
{
if (lean_obj_tag(v_r_1097_) == 0)
{
lean_object* v_idx_1104_; lean_object* v_idx_1105_; uint8_t v___x_1106_; 
v_idx_1104_ = lean_ctor_get(v_l_1096_, 1);
v_idx_1105_ = lean_ctor_get(v_r_1097_, 1);
v___x_1106_ = lean_nat_dec_eq(v_idx_1104_, v_idx_1105_);
return v___x_1106_;
}
else
{
return v___x_1100_;
}
}
case 1:
{
if (lean_obj_tag(v_r_1097_) == 1)
{
lean_object* v_val_1107_; lean_object* v_val_1108_; uint8_t v___x_1109_; 
v_val_1107_ = lean_ctor_get(v_l_1096_, 1);
v_val_1108_ = lean_ctor_get(v_r_1097_, 1);
v___x_1109_ = lean_nat_dec_eq(v_val_1107_, v_val_1108_);
return v___x_1109_;
}
else
{
return v___x_1100_;
}
}
case 2:
{
if (lean_obj_tag(v_r_1097_) == 2)
{
lean_object* v_w_1110_; lean_object* v_start_1111_; lean_object* v_expr_1112_; lean_object* v_w_1113_; lean_object* v_start_1114_; lean_object* v_expr_1115_; uint8_t v___y_1117_; uint8_t v___x_1119_; 
v_w_1110_ = lean_ctor_get(v_l_1096_, 0);
v_start_1111_ = lean_ctor_get(v_l_1096_, 1);
v_expr_1112_ = lean_ctor_get(v_l_1096_, 3);
v_w_1113_ = lean_ctor_get(v_r_1097_, 0);
v_start_1114_ = lean_ctor_get(v_r_1097_, 1);
v_expr_1115_ = lean_ctor_get(v_r_1097_, 3);
v___x_1119_ = lean_nat_dec_eq(v_w_1110_, v_w_1113_);
if (v___x_1119_ == 0)
{
v___y_1117_ = v___x_1119_;
goto v___jp_1116_;
}
else
{
uint8_t v___x_1120_; 
v___x_1120_ = lean_nat_dec_eq(v_start_1111_, v_start_1114_);
v___y_1117_ = v___x_1120_;
goto v___jp_1116_;
}
v___jp_1116_:
{
if (v___y_1117_ == 0)
{
return v___y_1117_;
}
else
{
uint8_t v_decide_1118_; 
v_decide_1118_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_expr_1112_, v_expr_1115_);
if (v_decide_1118_ == 0)
{
return v___x_1100_;
}
else
{
return v___y_1117_;
}
}
}
}
else
{
return v___x_1100_;
}
}
case 3:
{
if (lean_obj_tag(v_r_1097_) == 3)
{
lean_object* v_lhs_1121_; uint8_t v_op_1122_; lean_object* v_rhs_1123_; lean_object* v_lhs_1124_; uint8_t v_op_1125_; lean_object* v_rhs_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; 
v_lhs_1121_ = lean_ctor_get(v_l_1096_, 1);
v_op_1122_ = lean_ctor_get_uint8(v_l_1096_, sizeof(void*)*3 + 8);
v_rhs_1123_ = lean_ctor_get(v_l_1096_, 2);
v_lhs_1124_ = lean_ctor_get(v_r_1097_, 1);
v_op_1125_ = lean_ctor_get_uint8(v_r_1097_, sizeof(void*)*3 + 8);
v_rhs_1126_ = lean_ctor_get(v_r_1097_, 2);
v___x_1127_ = l_Std_Tactic_BVDecide_BVBinOp_ctorIdx(v_op_1122_);
v___x_1128_ = l_Std_Tactic_BVDecide_BVBinOp_ctorIdx(v_op_1125_);
v___x_1129_ = lean_nat_dec_eq(v___x_1127_, v___x_1128_);
lean_dec(v___x_1128_);
lean_dec(v___x_1127_);
if (v___x_1129_ == 0)
{
return v___x_1129_;
}
else
{
uint8_t v_decide_1130_; 
v_decide_1130_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_lhs_1121_, v_lhs_1124_);
if (v_decide_1130_ == 0)
{
return v___x_1100_;
}
else
{
uint8_t v_decide_1131_; 
v_decide_1131_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_rhs_1123_, v_rhs_1126_);
if (v_decide_1131_ == 0)
{
return v___x_1100_;
}
else
{
return v___x_1129_;
}
}
}
}
else
{
return v___x_1100_;
}
}
case 4:
{
if (lean_obj_tag(v_r_1097_) == 4)
{
lean_object* v_op_1132_; lean_object* v_operand_1133_; lean_object* v_op_1134_; lean_object* v_operand_1135_; uint8_t v___x_1136_; 
v_op_1132_ = lean_ctor_get(v_l_1096_, 1);
v_operand_1133_ = lean_ctor_get(v_l_1096_, 2);
v_op_1134_ = lean_ctor_get(v_r_1097_, 1);
v_operand_1135_ = lean_ctor_get(v_r_1097_, 2);
v___x_1136_ = l_Std_Tactic_BVDecide_instDecidableEqBVUnOp_decEq(v_op_1132_, v_op_1134_);
if (v___x_1136_ == 0)
{
return v___x_1136_;
}
else
{
uint8_t v_decide_1137_; 
v_decide_1137_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_operand_1133_, v_operand_1135_);
if (v_decide_1137_ == 0)
{
return v___x_1100_;
}
else
{
return v___x_1136_;
}
}
}
else
{
return v___x_1100_;
}
}
case 5:
{
if (lean_obj_tag(v_r_1097_) == 5)
{
lean_object* v_l_1138_; lean_object* v_r_1139_; lean_object* v_lhs_1140_; lean_object* v_rhs_1141_; lean_object* v_l_1142_; lean_object* v_r_1143_; lean_object* v_lhs_1144_; lean_object* v_rhs_1145_; uint8_t v___y_1147_; uint8_t v___x_1150_; 
v_l_1138_ = lean_ctor_get(v_l_1096_, 0);
v_r_1139_ = lean_ctor_get(v_l_1096_, 1);
v_lhs_1140_ = lean_ctor_get(v_l_1096_, 3);
v_rhs_1141_ = lean_ctor_get(v_l_1096_, 4);
v_l_1142_ = lean_ctor_get(v_r_1097_, 0);
v_r_1143_ = lean_ctor_get(v_r_1097_, 1);
v_lhs_1144_ = lean_ctor_get(v_r_1097_, 3);
v_rhs_1145_ = lean_ctor_get(v_r_1097_, 4);
v___x_1150_ = lean_nat_dec_eq(v_l_1138_, v_l_1142_);
if (v___x_1150_ == 0)
{
v___y_1147_ = v___x_1150_;
goto v___jp_1146_;
}
else
{
uint8_t v___x_1151_; 
v___x_1151_ = lean_nat_dec_eq(v_r_1139_, v_r_1143_);
v___y_1147_ = v___x_1151_;
goto v___jp_1146_;
}
v___jp_1146_:
{
if (v___y_1147_ == 0)
{
return v___y_1147_;
}
else
{
uint8_t v_decide_1148_; 
v_decide_1148_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_lhs_1140_, v_lhs_1144_);
if (v_decide_1148_ == 0)
{
return v___x_1100_;
}
else
{
uint8_t v_decide_1149_; 
v_decide_1149_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_rhs_1141_, v_rhs_1145_);
if (v_decide_1149_ == 0)
{
return v___x_1100_;
}
else
{
return v___y_1147_;
}
}
}
}
}
else
{
return v___x_1100_;
}
}
case 6:
{
if (lean_obj_tag(v_r_1097_) == 6)
{
lean_object* v_w_1152_; lean_object* v_n_1153_; lean_object* v_expr_1154_; lean_object* v_w_1155_; lean_object* v_n_1156_; lean_object* v_expr_1157_; uint8_t v___y_1159_; uint8_t v___x_1161_; 
v_w_1152_ = lean_ctor_get(v_l_1096_, 0);
v_n_1153_ = lean_ctor_get(v_l_1096_, 2);
v_expr_1154_ = lean_ctor_get(v_l_1096_, 3);
v_w_1155_ = lean_ctor_get(v_r_1097_, 0);
v_n_1156_ = lean_ctor_get(v_r_1097_, 2);
v_expr_1157_ = lean_ctor_get(v_r_1097_, 3);
v___x_1161_ = lean_nat_dec_eq(v_n_1153_, v_n_1156_);
if (v___x_1161_ == 0)
{
v___y_1159_ = v___x_1161_;
goto v___jp_1158_;
}
else
{
uint8_t v___x_1162_; 
v___x_1162_ = lean_nat_dec_eq(v_w_1152_, v_w_1155_);
v___y_1159_ = v___x_1162_;
goto v___jp_1158_;
}
v___jp_1158_:
{
if (v___y_1159_ == 0)
{
return v___y_1159_;
}
else
{
uint8_t v_decide_1160_; 
v_decide_1160_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_expr_1154_, v_expr_1157_);
if (v_decide_1160_ == 0)
{
return v___x_1100_;
}
else
{
return v___y_1159_;
}
}
}
}
else
{
return v___x_1100_;
}
}
case 7:
{
if (lean_obj_tag(v_r_1097_) == 7)
{
lean_object* v_n_1163_; lean_object* v_lhs_1164_; lean_object* v_rhs_1165_; lean_object* v_n_1166_; lean_object* v_lhs_1167_; lean_object* v_rhs_1168_; uint8_t v___x_1169_; 
v_n_1163_ = lean_ctor_get(v_l_1096_, 1);
v_lhs_1164_ = lean_ctor_get(v_l_1096_, 2);
v_rhs_1165_ = lean_ctor_get(v_l_1096_, 3);
v_n_1166_ = lean_ctor_get(v_r_1097_, 1);
v_lhs_1167_ = lean_ctor_get(v_r_1097_, 2);
v_rhs_1168_ = lean_ctor_get(v_r_1097_, 3);
v___x_1169_ = lean_nat_dec_eq(v_n_1163_, v_n_1166_);
if (v___x_1169_ == 0)
{
return v___x_1169_;
}
else
{
uint8_t v_decide_1170_; 
v_decide_1170_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_lhs_1164_, v_lhs_1167_);
if (v_decide_1170_ == 0)
{
return v___x_1100_;
}
else
{
uint8_t v_decide_1171_; 
v_decide_1171_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_rhs_1165_, v_rhs_1168_);
if (v_decide_1171_ == 0)
{
return v___x_1100_;
}
else
{
return v___x_1169_;
}
}
}
}
else
{
return v___x_1100_;
}
}
case 8:
{
if (lean_obj_tag(v_r_1097_) == 8)
{
lean_object* v_n_1172_; lean_object* v_lhs_1173_; lean_object* v_rhs_1174_; lean_object* v_n_1175_; lean_object* v_lhs_1176_; lean_object* v_rhs_1177_; uint8_t v___x_1178_; 
v_n_1172_ = lean_ctor_get(v_l_1096_, 1);
v_lhs_1173_ = lean_ctor_get(v_l_1096_, 2);
v_rhs_1174_ = lean_ctor_get(v_l_1096_, 3);
v_n_1175_ = lean_ctor_get(v_r_1097_, 1);
v_lhs_1176_ = lean_ctor_get(v_r_1097_, 2);
v_rhs_1177_ = lean_ctor_get(v_r_1097_, 3);
v___x_1178_ = lean_nat_dec_eq(v_n_1172_, v_n_1175_);
if (v___x_1178_ == 0)
{
return v___x_1178_;
}
else
{
uint8_t v_decide_1179_; 
v_decide_1179_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_lhs_1173_, v_lhs_1176_);
if (v_decide_1179_ == 0)
{
return v___x_1100_;
}
else
{
uint8_t v_decide_1180_; 
v_decide_1180_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_rhs_1174_, v_rhs_1177_);
if (v_decide_1180_ == 0)
{
return v___x_1100_;
}
else
{
return v___x_1178_;
}
}
}
}
else
{
return v___x_1100_;
}
}
default: 
{
if (lean_obj_tag(v_r_1097_) == 9)
{
lean_object* v_n_1181_; lean_object* v_lhs_1182_; lean_object* v_rhs_1183_; lean_object* v_n_1184_; lean_object* v_lhs_1185_; lean_object* v_rhs_1186_; uint8_t v___x_1187_; 
v_n_1181_ = lean_ctor_get(v_l_1096_, 1);
v_lhs_1182_ = lean_ctor_get(v_l_1096_, 2);
v_rhs_1183_ = lean_ctor_get(v_l_1096_, 3);
v_n_1184_ = lean_ctor_get(v_r_1097_, 1);
v_lhs_1185_ = lean_ctor_get(v_r_1097_, 2);
v_rhs_1186_ = lean_ctor_get(v_r_1097_, 3);
v___x_1187_ = lean_nat_dec_eq(v_n_1181_, v_n_1184_);
if (v___x_1187_ == 0)
{
return v___x_1187_;
}
else
{
uint8_t v_decide_1188_; 
v_decide_1188_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_lhs_1182_, v_lhs_1185_);
if (v_decide_1188_ == 0)
{
return v___x_1100_;
}
else
{
uint8_t v_decide_1189_; 
v_decide_1189_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_rhs_1183_, v_rhs_1186_);
if (v_decide_1189_ == 0)
{
return v___x_1100_;
}
else
{
return v___x_1187_;
}
}
}
}
else
{
return v___x_1100_;
}
}
}
}
else
{
return v___x_1100_;
}
}
}
else
{
return v___x_1100_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_decEq___redArg___boxed(lean_object* v_l_1190_, lean_object* v_r_1191_){
_start:
{
uint8_t v_res_1192_; lean_object* v_r_1193_; 
v_res_1192_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_l_1190_, v_r_1191_);
lean_dec_ref(v_r_1191_);
lean_dec_ref(v_l_1190_);
v_r_1193_ = lean_box(v_res_1192_);
return v_r_1193_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVExpr_decEq(lean_object* v_w_1194_, lean_object* v_l_1195_, lean_object* v_r_1196_){
_start:
{
uint8_t v___x_1197_; 
v___x_1197_ = l_Std_Tactic_BVDecide_BVExpr_decEq___redArg(v_l_1195_, v_r_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_decEq___boxed(lean_object* v_w_1198_, lean_object* v_l_1199_, lean_object* v_r_1200_){
_start:
{
uint8_t v_res_1201_; lean_object* v_r_1202_; 
v_res_1201_ = l_Std_Tactic_BVDecide_BVExpr_decEq(v_w_1198_, v_l_1199_, v_r_1200_);
lean_dec_ref(v_r_1200_);
lean_dec_ref(v_l_1199_);
lean_dec(v_w_1198_);
v_r_1202_ = lean_box(v_res_1201_);
return v_r_1202_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_toString(lean_object* v_w_1212_, lean_object* v_x_1213_){
_start:
{
switch(lean_obj_tag(v_x_1213_))
{
case 0:
{
lean_object* v_idx_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
lean_dec(v_w_1212_);
v_idx_1214_ = lean_ctor_get(v_x_1213_, 1);
lean_inc(v_idx_1214_);
lean_dec_ref_known(v_x_1213_, 2);
v___x_1215_ = ((lean_object*)(l_Std_Tactic_BVDecide_instReprBVBit_repr___redArg___closed__1));
v___x_1216_ = l_Nat_reprFast(v_idx_1214_);
v___x_1217_ = lean_string_append(v___x_1215_, v___x_1216_);
lean_dec_ref(v___x_1216_);
return v___x_1217_;
}
case 1:
{
lean_object* v_val_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v_val_1218_ = lean_ctor_get(v_x_1213_, 1);
lean_inc(v_val_1218_);
lean_dec_ref_known(v_x_1213_, 2);
v___x_1219_ = l_BitVec_repr(v_w_1212_, v_val_1218_);
v___x_1220_ = l_Std_Format_defWidth;
v___x_1221_ = lean_unsigned_to_nat(0u);
v___x_1222_ = l_Std_Format_pretty(v___x_1219_, v___x_1220_, v___x_1221_, v___x_1221_);
return v___x_1222_;
}
case 2:
{
lean_object* v_w_1223_; lean_object* v_start_1224_; lean_object* v_expr_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v_w_1223_ = lean_ctor_get(v_x_1213_, 0);
lean_inc(v_w_1223_);
v_start_1224_ = lean_ctor_get(v_x_1213_, 1);
lean_inc(v_start_1224_);
v_expr_1225_ = lean_ctor_get(v_x_1213_, 3);
lean_inc_ref(v_expr_1225_);
lean_dec_ref_known(v_x_1213_, 4);
v___x_1226_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1223_, v_expr_1225_);
v___x_1227_ = ((lean_object*)(l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__1));
v___x_1228_ = lean_string_append(v___x_1226_, v___x_1227_);
v___x_1229_ = l_Nat_reprFast(v_start_1224_);
v___x_1230_ = lean_string_append(v___x_1228_, v___x_1229_);
lean_dec_ref(v___x_1229_);
v___x_1231_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__0));
v___x_1232_ = lean_string_append(v___x_1230_, v___x_1231_);
v___x_1233_ = l_Nat_reprFast(v_w_1212_);
v___x_1234_ = lean_string_append(v___x_1232_, v___x_1233_);
lean_dec_ref(v___x_1233_);
v___x_1235_ = ((lean_object*)(l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__2));
v___x_1236_ = lean_string_append(v___x_1234_, v___x_1235_);
return v___x_1236_;
}
case 3:
{
lean_object* v_lhs_1237_; uint8_t v_op_1238_; lean_object* v_rhs_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v_lhs_1237_ = lean_ctor_get(v_x_1213_, 1);
lean_inc_ref(v_lhs_1237_);
v_op_1238_ = lean_ctor_get_uint8(v_x_1213_, sizeof(void*)*3 + 8);
v_rhs_1239_ = lean_ctor_get(v_x_1213_, 2);
lean_inc_ref(v_rhs_1239_);
lean_dec_ref_known(v_x_1213_, 3);
v___x_1240_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__1));
lean_inc(v_w_1212_);
v___x_1241_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1212_, v_lhs_1237_);
v___x_1242_ = lean_string_append(v___x_1240_, v___x_1241_);
lean_dec_ref(v___x_1241_);
v___x_1243_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__2));
v___x_1244_ = lean_string_append(v___x_1242_, v___x_1243_);
v___x_1245_ = l_Std_Tactic_BVDecide_BVBinOp_toString(v_op_1238_);
v___x_1246_ = lean_string_append(v___x_1244_, v___x_1245_);
lean_dec_ref(v___x_1245_);
v___x_1247_ = lean_string_append(v___x_1246_, v___x_1243_);
v___x_1248_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1212_, v_rhs_1239_);
v___x_1249_ = lean_string_append(v___x_1247_, v___x_1248_);
lean_dec_ref(v___x_1248_);
v___x_1250_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__3));
v___x_1251_ = lean_string_append(v___x_1249_, v___x_1250_);
return v___x_1251_;
}
case 4:
{
lean_object* v_op_1252_; lean_object* v_operand_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v_op_1252_ = lean_ctor_get(v_x_1213_, 1);
lean_inc(v_op_1252_);
v_operand_1253_ = lean_ctor_get(v_x_1213_, 2);
lean_inc_ref(v_operand_1253_);
lean_dec_ref_known(v_x_1213_, 3);
v___x_1254_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__1));
v___x_1255_ = l_Std_Tactic_BVDecide_BVUnOp_toString(v_op_1252_);
v___x_1256_ = lean_string_append(v___x_1254_, v___x_1255_);
lean_dec_ref(v___x_1255_);
v___x_1257_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__2));
v___x_1258_ = lean_string_append(v___x_1256_, v___x_1257_);
v___x_1259_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1212_, v_operand_1253_);
v___x_1260_ = lean_string_append(v___x_1258_, v___x_1259_);
lean_dec_ref(v___x_1259_);
v___x_1261_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__3));
v___x_1262_ = lean_string_append(v___x_1260_, v___x_1261_);
return v___x_1262_;
}
case 5:
{
lean_object* v_l_1263_; lean_object* v_r_1264_; lean_object* v_lhs_1265_; lean_object* v_rhs_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_dec(v_w_1212_);
v_l_1263_ = lean_ctor_get(v_x_1213_, 0);
lean_inc(v_l_1263_);
v_r_1264_ = lean_ctor_get(v_x_1213_, 1);
lean_inc(v_r_1264_);
v_lhs_1265_ = lean_ctor_get(v_x_1213_, 3);
lean_inc_ref(v_lhs_1265_);
v_rhs_1266_ = lean_ctor_get(v_x_1213_, 4);
lean_inc_ref(v_rhs_1266_);
lean_dec_ref_known(v_x_1213_, 5);
v___x_1267_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__1));
v___x_1268_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_l_1263_, v_lhs_1265_);
v___x_1269_ = lean_string_append(v___x_1267_, v___x_1268_);
lean_dec_ref(v___x_1268_);
v___x_1270_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__4));
v___x_1271_ = lean_string_append(v___x_1269_, v___x_1270_);
v___x_1272_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_r_1264_, v_rhs_1266_);
v___x_1273_ = lean_string_append(v___x_1271_, v___x_1272_);
lean_dec_ref(v___x_1272_);
v___x_1274_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__3));
v___x_1275_ = lean_string_append(v___x_1273_, v___x_1274_);
return v___x_1275_;
}
case 6:
{
lean_object* v_w_1276_; lean_object* v_n_1277_; lean_object* v_expr_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
lean_dec(v_w_1212_);
v_w_1276_ = lean_ctor_get(v_x_1213_, 0);
lean_inc(v_w_1276_);
v_n_1277_ = lean_ctor_get(v_x_1213_, 2);
lean_inc(v_n_1277_);
v_expr_1278_ = lean_ctor_get(v_x_1213_, 3);
lean_inc_ref(v_expr_1278_);
lean_dec_ref_known(v_x_1213_, 4);
v___x_1279_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__5));
v___x_1280_ = l_Nat_reprFast(v_n_1277_);
v___x_1281_ = lean_string_append(v___x_1279_, v___x_1280_);
lean_dec_ref(v___x_1280_);
v___x_1282_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__2));
v___x_1283_ = lean_string_append(v___x_1281_, v___x_1282_);
v___x_1284_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1276_, v_expr_1278_);
v___x_1285_ = lean_string_append(v___x_1283_, v___x_1284_);
lean_dec_ref(v___x_1284_);
v___x_1286_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__3));
v___x_1287_ = lean_string_append(v___x_1285_, v___x_1286_);
return v___x_1287_;
}
case 7:
{
lean_object* v_n_1288_; lean_object* v_lhs_1289_; lean_object* v_rhs_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v_n_1288_ = lean_ctor_get(v_x_1213_, 1);
lean_inc(v_n_1288_);
v_lhs_1289_ = lean_ctor_get(v_x_1213_, 2);
lean_inc_ref(v_lhs_1289_);
v_rhs_1290_ = lean_ctor_get(v_x_1213_, 3);
lean_inc_ref(v_rhs_1290_);
lean_dec_ref_known(v_x_1213_, 4);
v___x_1291_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__1));
v___x_1292_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1212_, v_lhs_1289_);
v___x_1293_ = lean_string_append(v___x_1291_, v___x_1292_);
lean_dec_ref(v___x_1292_);
v___x_1294_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__6));
v___x_1295_ = lean_string_append(v___x_1293_, v___x_1294_);
v___x_1296_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_n_1288_, v_rhs_1290_);
v___x_1297_ = lean_string_append(v___x_1295_, v___x_1296_);
lean_dec_ref(v___x_1296_);
v___x_1298_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__3));
v___x_1299_ = lean_string_append(v___x_1297_, v___x_1298_);
return v___x_1299_;
}
case 8:
{
lean_object* v_n_1300_; lean_object* v_lhs_1301_; lean_object* v_rhs_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v_n_1300_ = lean_ctor_get(v_x_1213_, 1);
lean_inc(v_n_1300_);
v_lhs_1301_ = lean_ctor_get(v_x_1213_, 2);
lean_inc_ref(v_lhs_1301_);
v_rhs_1302_ = lean_ctor_get(v_x_1213_, 3);
lean_inc_ref(v_rhs_1302_);
lean_dec_ref_known(v_x_1213_, 4);
v___x_1303_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__1));
v___x_1304_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1212_, v_lhs_1301_);
v___x_1305_ = lean_string_append(v___x_1303_, v___x_1304_);
lean_dec_ref(v___x_1304_);
v___x_1306_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__7));
v___x_1307_ = lean_string_append(v___x_1305_, v___x_1306_);
v___x_1308_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_n_1300_, v_rhs_1302_);
v___x_1309_ = lean_string_append(v___x_1307_, v___x_1308_);
lean_dec_ref(v___x_1308_);
v___x_1310_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__3));
v___x_1311_ = lean_string_append(v___x_1309_, v___x_1310_);
return v___x_1311_;
}
default: 
{
lean_object* v_n_1312_; lean_object* v_lhs_1313_; lean_object* v_rhs_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v_n_1312_ = lean_ctor_get(v_x_1213_, 1);
lean_inc(v_n_1312_);
v_lhs_1313_ = lean_ctor_get(v_x_1213_, 2);
lean_inc_ref(v_lhs_1313_);
v_rhs_1314_ = lean_ctor_get(v_x_1213_, 3);
lean_inc_ref(v_rhs_1314_);
lean_dec_ref_known(v_x_1213_, 4);
v___x_1315_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__1));
v___x_1316_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1212_, v_lhs_1313_);
v___x_1317_ = lean_string_append(v___x_1315_, v___x_1316_);
lean_dec_ref(v___x_1316_);
v___x_1318_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__8));
v___x_1319_ = lean_string_append(v___x_1317_, v___x_1318_);
v___x_1320_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_n_1312_, v_rhs_1314_);
v___x_1321_ = lean_string_append(v___x_1319_, v___x_1320_);
lean_dec_ref(v___x_1320_);
v___x_1322_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__3));
v___x_1323_ = lean_string_append(v___x_1321_, v___x_1322_);
return v___x_1323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_instToString(lean_object* v_w_1324_){
_start:
{
lean_object* v___x_1325_; 
v___x_1325_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_BVExpr_toString), 2, 1);
lean_closure_set(v___x_1325_, 0, v_w_1324_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_Assignment_get(lean_object* v_assign_1326_, lean_object* v_idx_1327_){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Lean_RArray_getImpl___redArg(v_assign_1326_, v_idx_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_Assignment_get___boxed(lean_object* v_assign_1329_, lean_object* v_idx_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l_Std_Tactic_BVDecide_BVExpr_Assignment_get(v_assign_1329_, v_idx_1330_);
lean_dec(v_idx_1330_);
lean_dec_ref(v_assign_1329_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_eval(lean_object* v_w_1332_, lean_object* v_assign_1333_, lean_object* v_x_1334_){
_start:
{
switch(lean_obj_tag(v_x_1334_))
{
case 0:
{
lean_object* v_idx_1335_; lean_object* v_packedBv_1336_; lean_object* v_w_1337_; lean_object* v_bv_1338_; uint8_t v___x_1339_; 
v_idx_1335_ = lean_ctor_get(v_x_1334_, 1);
lean_inc(v_idx_1335_);
lean_dec_ref_known(v_x_1334_, 2);
v_packedBv_1336_ = l_Lean_RArray_getImpl___redArg(v_assign_1333_, v_idx_1335_);
lean_dec(v_idx_1335_);
v_w_1337_ = lean_ctor_get(v_packedBv_1336_, 0);
lean_inc(v_w_1337_);
v_bv_1338_ = lean_ctor_get(v_packedBv_1336_, 1);
lean_inc(v_bv_1338_);
lean_dec(v_packedBv_1336_);
v___x_1339_ = lean_nat_dec_eq(v_w_1337_, v_w_1332_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; 
v___x_1340_ = l_BitVec_setWidth(v_w_1337_, v_w_1332_, v_bv_1338_);
lean_dec(v_bv_1338_);
lean_dec(v_w_1332_);
lean_dec(v_w_1337_);
return v___x_1340_;
}
else
{
lean_dec(v_w_1337_);
lean_dec(v_w_1332_);
return v_bv_1338_;
}
}
case 1:
{
lean_object* v_val_1341_; 
lean_dec(v_w_1332_);
v_val_1341_ = lean_ctor_get(v_x_1334_, 1);
lean_inc(v_val_1341_);
lean_dec_ref_known(v_x_1334_, 2);
return v_val_1341_;
}
case 2:
{
lean_object* v_w_1342_; lean_object* v_start_1343_; lean_object* v_expr_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v_w_1342_ = lean_ctor_get(v_x_1334_, 0);
lean_inc(v_w_1342_);
v_start_1343_ = lean_ctor_get(v_x_1334_, 1);
lean_inc(v_start_1343_);
v_expr_1344_ = lean_ctor_get(v_x_1334_, 3);
lean_inc_ref(v_expr_1344_);
lean_dec_ref_known(v_x_1334_, 4);
v___x_1345_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1342_, v_assign_1333_, v_expr_1344_);
v___x_1346_ = l_BitVec_extractLsb_x27___redArg(v_start_1343_, v_w_1332_, v___x_1345_);
lean_dec(v___x_1345_);
lean_dec(v_w_1332_);
lean_dec(v_start_1343_);
return v___x_1346_;
}
case 3:
{
lean_object* v_lhs_1347_; uint8_t v_op_1348_; lean_object* v_rhs_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v_lhs_1347_ = lean_ctor_get(v_x_1334_, 1);
lean_inc_ref(v_lhs_1347_);
v_op_1348_ = lean_ctor_get_uint8(v_x_1334_, sizeof(void*)*3 + 8);
v_rhs_1349_ = lean_ctor_get(v_x_1334_, 2);
lean_inc_ref(v_rhs_1349_);
lean_dec_ref_known(v_x_1334_, 3);
lean_inc_n(v_w_1332_, 2);
v___x_1350_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1332_, v_assign_1333_, v_lhs_1347_);
v___x_1351_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1332_, v_assign_1333_, v_rhs_1349_);
v___x_1352_ = l_Std_Tactic_BVDecide_BVBinOp_eval(v_w_1332_, v_op_1348_, v___x_1350_, v___x_1351_);
lean_dec(v___x_1351_);
lean_dec(v___x_1350_);
lean_dec(v_w_1332_);
return v___x_1352_;
}
case 4:
{
lean_object* v_op_1353_; lean_object* v_operand_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v_op_1353_ = lean_ctor_get(v_x_1334_, 1);
lean_inc(v_op_1353_);
v_operand_1354_ = lean_ctor_get(v_x_1334_, 2);
lean_inc_ref(v_operand_1354_);
lean_dec_ref_known(v_x_1334_, 3);
lean_inc(v_w_1332_);
v___x_1355_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1332_, v_assign_1333_, v_operand_1354_);
v___x_1356_ = l_Std_Tactic_BVDecide_BVUnOp_eval(v_w_1332_, v_op_1353_, v___x_1355_);
lean_dec(v_op_1353_);
return v___x_1356_;
}
case 5:
{
lean_object* v_l_1357_; lean_object* v_r_1358_; lean_object* v_lhs_1359_; lean_object* v_rhs_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
lean_dec(v_w_1332_);
v_l_1357_ = lean_ctor_get(v_x_1334_, 0);
lean_inc(v_l_1357_);
v_r_1358_ = lean_ctor_get(v_x_1334_, 1);
lean_inc_n(v_r_1358_, 2);
v_lhs_1359_ = lean_ctor_get(v_x_1334_, 3);
lean_inc_ref(v_lhs_1359_);
v_rhs_1360_ = lean_ctor_get(v_x_1334_, 4);
lean_inc_ref(v_rhs_1360_);
lean_dec_ref_known(v_x_1334_, 5);
v___x_1361_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_l_1357_, v_assign_1333_, v_lhs_1359_);
v___x_1362_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_r_1358_, v_assign_1333_, v_rhs_1360_);
v___x_1363_ = l_BitVec_append___redArg(v_r_1358_, v___x_1361_, v___x_1362_);
lean_dec(v___x_1362_);
lean_dec(v___x_1361_);
lean_dec(v_r_1358_);
return v___x_1363_;
}
case 6:
{
lean_object* v_w_1364_; lean_object* v_n_1365_; lean_object* v_expr_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
lean_dec(v_w_1332_);
v_w_1364_ = lean_ctor_get(v_x_1334_, 0);
lean_inc_n(v_w_1364_, 2);
v_n_1365_ = lean_ctor_get(v_x_1334_, 2);
lean_inc(v_n_1365_);
v_expr_1366_ = lean_ctor_get(v_x_1334_, 3);
lean_inc_ref(v_expr_1366_);
lean_dec_ref_known(v_x_1334_, 4);
v___x_1367_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1364_, v_assign_1333_, v_expr_1366_);
v___x_1368_ = l_BitVec_replicate(v_w_1364_, v_n_1365_, v___x_1367_);
lean_dec(v___x_1367_);
lean_dec(v_n_1365_);
lean_dec(v_w_1364_);
return v___x_1368_;
}
case 7:
{
lean_object* v_n_1369_; lean_object* v_lhs_1370_; lean_object* v_rhs_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v_n_1369_ = lean_ctor_get(v_x_1334_, 1);
lean_inc(v_n_1369_);
v_lhs_1370_ = lean_ctor_get(v_x_1334_, 2);
lean_inc_ref(v_lhs_1370_);
v_rhs_1371_ = lean_ctor_get(v_x_1334_, 3);
lean_inc_ref(v_rhs_1371_);
lean_dec_ref_known(v_x_1334_, 4);
lean_inc(v_w_1332_);
v___x_1372_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1332_, v_assign_1333_, v_lhs_1370_);
v___x_1373_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_n_1369_, v_assign_1333_, v_rhs_1371_);
v___x_1374_ = l_BitVec_shiftLeft(v_w_1332_, v___x_1372_, v___x_1373_);
lean_dec(v___x_1373_);
lean_dec(v___x_1372_);
lean_dec(v_w_1332_);
return v___x_1374_;
}
case 8:
{
lean_object* v_n_1375_; lean_object* v_lhs_1376_; lean_object* v_rhs_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v_n_1375_ = lean_ctor_get(v_x_1334_, 1);
lean_inc(v_n_1375_);
v_lhs_1376_ = lean_ctor_get(v_x_1334_, 2);
lean_inc_ref(v_lhs_1376_);
v_rhs_1377_ = lean_ctor_get(v_x_1334_, 3);
lean_inc_ref(v_rhs_1377_);
lean_dec_ref_known(v_x_1334_, 4);
v___x_1378_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1332_, v_assign_1333_, v_lhs_1376_);
v___x_1379_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_n_1375_, v_assign_1333_, v_rhs_1377_);
v___x_1380_ = lean_nat_shiftr(v___x_1378_, v___x_1379_);
lean_dec(v___x_1379_);
lean_dec(v___x_1378_);
return v___x_1380_;
}
default: 
{
lean_object* v_n_1381_; lean_object* v_lhs_1382_; lean_object* v_rhs_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v_n_1381_ = lean_ctor_get(v_x_1334_, 1);
lean_inc(v_n_1381_);
v_lhs_1382_ = lean_ctor_get(v_x_1334_, 2);
lean_inc_ref(v_lhs_1382_);
v_rhs_1383_ = lean_ctor_get(v_x_1334_, 3);
lean_inc_ref(v_rhs_1383_);
lean_dec_ref_known(v_x_1334_, 4);
lean_inc(v_w_1332_);
v___x_1384_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1332_, v_assign_1333_, v_lhs_1382_);
v___x_1385_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_n_1381_, v_assign_1333_, v_rhs_1383_);
v___x_1386_ = l_BitVec_sshiftRight(v_w_1332_, v___x_1384_, v___x_1385_);
lean_dec(v___x_1385_);
lean_dec(v_w_1332_);
return v___x_1386_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVExpr_eval___boxed(lean_object* v_w_1387_, lean_object* v_assign_1388_, lean_object* v_x_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1387_, v_assign_1388_, v_x_1389_);
lean_dec_ref(v_assign_1388_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic_0__Std_Tactic_BVDecide_BVExpr_toString_match__1_splitter___redArg(lean_object* v_w_1391_, lean_object* v_x_1392_, lean_object* v_h__1_1393_, lean_object* v_h__2_1394_, lean_object* v_h__3_1395_, lean_object* v_h__4_1396_, lean_object* v_h__5_1397_, lean_object* v_h__6_1398_, lean_object* v_h__7_1399_, lean_object* v_h__8_1400_, lean_object* v_h__9_1401_, lean_object* v_h__10_1402_){
_start:
{
switch(lean_obj_tag(v_x_1392_))
{
case 0:
{
lean_object* v_idx_1403_; lean_object* v___x_1404_; 
lean_dec(v_h__10_1402_);
lean_dec(v_h__9_1401_);
lean_dec(v_h__8_1400_);
lean_dec(v_h__7_1399_);
lean_dec(v_h__6_1398_);
lean_dec(v_h__5_1397_);
lean_dec(v_h__4_1396_);
lean_dec(v_h__3_1395_);
lean_dec(v_h__2_1394_);
v_idx_1403_ = lean_ctor_get(v_x_1392_, 1);
lean_inc(v_idx_1403_);
lean_dec_ref_known(v_x_1392_, 2);
v___x_1404_ = lean_apply_2(v_h__1_1393_, v_w_1391_, v_idx_1403_);
return v___x_1404_;
}
case 1:
{
lean_object* v_val_1405_; lean_object* v___x_1406_; 
lean_dec(v_h__10_1402_);
lean_dec(v_h__9_1401_);
lean_dec(v_h__8_1400_);
lean_dec(v_h__7_1399_);
lean_dec(v_h__6_1398_);
lean_dec(v_h__5_1397_);
lean_dec(v_h__4_1396_);
lean_dec(v_h__3_1395_);
lean_dec(v_h__1_1393_);
v_val_1405_ = lean_ctor_get(v_x_1392_, 1);
lean_inc(v_val_1405_);
lean_dec_ref_known(v_x_1392_, 2);
v___x_1406_ = lean_apply_2(v_h__2_1394_, v_w_1391_, v_val_1405_);
return v___x_1406_;
}
case 2:
{
lean_object* v_w_1407_; lean_object* v_start_1408_; lean_object* v_expr_1409_; lean_object* v___x_1410_; 
lean_dec(v_h__10_1402_);
lean_dec(v_h__9_1401_);
lean_dec(v_h__8_1400_);
lean_dec(v_h__7_1399_);
lean_dec(v_h__6_1398_);
lean_dec(v_h__5_1397_);
lean_dec(v_h__4_1396_);
lean_dec(v_h__2_1394_);
lean_dec(v_h__1_1393_);
v_w_1407_ = lean_ctor_get(v_x_1392_, 0);
lean_inc(v_w_1407_);
v_start_1408_ = lean_ctor_get(v_x_1392_, 1);
lean_inc(v_start_1408_);
v_expr_1409_ = lean_ctor_get(v_x_1392_, 3);
lean_inc_ref(v_expr_1409_);
lean_dec_ref_known(v_x_1392_, 4);
v___x_1410_ = lean_apply_4(v_h__3_1395_, v_w_1391_, v_w_1407_, v_start_1408_, v_expr_1409_);
return v___x_1410_;
}
case 3:
{
lean_object* v_lhs_1411_; uint8_t v_op_1412_; lean_object* v_rhs_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
lean_dec(v_h__10_1402_);
lean_dec(v_h__9_1401_);
lean_dec(v_h__8_1400_);
lean_dec(v_h__7_1399_);
lean_dec(v_h__6_1398_);
lean_dec(v_h__5_1397_);
lean_dec(v_h__3_1395_);
lean_dec(v_h__2_1394_);
lean_dec(v_h__1_1393_);
v_lhs_1411_ = lean_ctor_get(v_x_1392_, 1);
lean_inc_ref(v_lhs_1411_);
v_op_1412_ = lean_ctor_get_uint8(v_x_1392_, sizeof(void*)*3 + 8);
v_rhs_1413_ = lean_ctor_get(v_x_1392_, 2);
lean_inc_ref(v_rhs_1413_);
lean_dec_ref_known(v_x_1392_, 3);
v___x_1414_ = lean_box(v_op_1412_);
v___x_1415_ = lean_apply_4(v_h__4_1396_, v_w_1391_, v_lhs_1411_, v___x_1414_, v_rhs_1413_);
return v___x_1415_;
}
case 4:
{
lean_object* v_op_1416_; lean_object* v_operand_1417_; lean_object* v___x_1418_; 
lean_dec(v_h__10_1402_);
lean_dec(v_h__9_1401_);
lean_dec(v_h__8_1400_);
lean_dec(v_h__7_1399_);
lean_dec(v_h__6_1398_);
lean_dec(v_h__4_1396_);
lean_dec(v_h__3_1395_);
lean_dec(v_h__2_1394_);
lean_dec(v_h__1_1393_);
v_op_1416_ = lean_ctor_get(v_x_1392_, 1);
lean_inc(v_op_1416_);
v_operand_1417_ = lean_ctor_get(v_x_1392_, 2);
lean_inc_ref(v_operand_1417_);
lean_dec_ref_known(v_x_1392_, 3);
v___x_1418_ = lean_apply_3(v_h__5_1397_, v_w_1391_, v_op_1416_, v_operand_1417_);
return v___x_1418_;
}
case 5:
{
lean_object* v_l_1419_; lean_object* v_r_1420_; lean_object* v_lhs_1421_; lean_object* v_rhs_1422_; lean_object* v___x_1423_; 
lean_dec(v_h__10_1402_);
lean_dec(v_h__9_1401_);
lean_dec(v_h__8_1400_);
lean_dec(v_h__7_1399_);
lean_dec(v_h__5_1397_);
lean_dec(v_h__4_1396_);
lean_dec(v_h__3_1395_);
lean_dec(v_h__2_1394_);
lean_dec(v_h__1_1393_);
v_l_1419_ = lean_ctor_get(v_x_1392_, 0);
lean_inc(v_l_1419_);
v_r_1420_ = lean_ctor_get(v_x_1392_, 1);
lean_inc(v_r_1420_);
v_lhs_1421_ = lean_ctor_get(v_x_1392_, 3);
lean_inc_ref(v_lhs_1421_);
v_rhs_1422_ = lean_ctor_get(v_x_1392_, 4);
lean_inc_ref(v_rhs_1422_);
lean_dec_ref_known(v_x_1392_, 5);
v___x_1423_ = lean_apply_6(v_h__6_1398_, v_w_1391_, v_l_1419_, v_r_1420_, v_lhs_1421_, v_rhs_1422_, lean_box(0));
return v___x_1423_;
}
case 6:
{
lean_object* v_w_1424_; lean_object* v_n_1425_; lean_object* v_expr_1426_; lean_object* v___x_1427_; 
lean_dec(v_h__10_1402_);
lean_dec(v_h__9_1401_);
lean_dec(v_h__8_1400_);
lean_dec(v_h__6_1398_);
lean_dec(v_h__5_1397_);
lean_dec(v_h__4_1396_);
lean_dec(v_h__3_1395_);
lean_dec(v_h__2_1394_);
lean_dec(v_h__1_1393_);
v_w_1424_ = lean_ctor_get(v_x_1392_, 0);
lean_inc(v_w_1424_);
v_n_1425_ = lean_ctor_get(v_x_1392_, 2);
lean_inc(v_n_1425_);
v_expr_1426_ = lean_ctor_get(v_x_1392_, 3);
lean_inc_ref(v_expr_1426_);
lean_dec_ref_known(v_x_1392_, 4);
v___x_1427_ = lean_apply_5(v_h__7_1399_, v_w_1391_, v_w_1424_, v_n_1425_, v_expr_1426_, lean_box(0));
return v___x_1427_;
}
case 7:
{
lean_object* v_n_1428_; lean_object* v_lhs_1429_; lean_object* v_rhs_1430_; lean_object* v___x_1431_; 
lean_dec(v_h__10_1402_);
lean_dec(v_h__9_1401_);
lean_dec(v_h__7_1399_);
lean_dec(v_h__6_1398_);
lean_dec(v_h__5_1397_);
lean_dec(v_h__4_1396_);
lean_dec(v_h__3_1395_);
lean_dec(v_h__2_1394_);
lean_dec(v_h__1_1393_);
v_n_1428_ = lean_ctor_get(v_x_1392_, 1);
lean_inc(v_n_1428_);
v_lhs_1429_ = lean_ctor_get(v_x_1392_, 2);
lean_inc_ref(v_lhs_1429_);
v_rhs_1430_ = lean_ctor_get(v_x_1392_, 3);
lean_inc_ref(v_rhs_1430_);
lean_dec_ref_known(v_x_1392_, 4);
v___x_1431_ = lean_apply_4(v_h__8_1400_, v_w_1391_, v_n_1428_, v_lhs_1429_, v_rhs_1430_);
return v___x_1431_;
}
case 8:
{
lean_object* v_n_1432_; lean_object* v_lhs_1433_; lean_object* v_rhs_1434_; lean_object* v___x_1435_; 
lean_dec(v_h__10_1402_);
lean_dec(v_h__8_1400_);
lean_dec(v_h__7_1399_);
lean_dec(v_h__6_1398_);
lean_dec(v_h__5_1397_);
lean_dec(v_h__4_1396_);
lean_dec(v_h__3_1395_);
lean_dec(v_h__2_1394_);
lean_dec(v_h__1_1393_);
v_n_1432_ = lean_ctor_get(v_x_1392_, 1);
lean_inc(v_n_1432_);
v_lhs_1433_ = lean_ctor_get(v_x_1392_, 2);
lean_inc_ref(v_lhs_1433_);
v_rhs_1434_ = lean_ctor_get(v_x_1392_, 3);
lean_inc_ref(v_rhs_1434_);
lean_dec_ref_known(v_x_1392_, 4);
v___x_1435_ = lean_apply_4(v_h__9_1401_, v_w_1391_, v_n_1432_, v_lhs_1433_, v_rhs_1434_);
return v___x_1435_;
}
default: 
{
lean_object* v_n_1436_; lean_object* v_lhs_1437_; lean_object* v_rhs_1438_; lean_object* v___x_1439_; 
lean_dec(v_h__9_1401_);
lean_dec(v_h__8_1400_);
lean_dec(v_h__7_1399_);
lean_dec(v_h__6_1398_);
lean_dec(v_h__5_1397_);
lean_dec(v_h__4_1396_);
lean_dec(v_h__3_1395_);
lean_dec(v_h__2_1394_);
lean_dec(v_h__1_1393_);
v_n_1436_ = lean_ctor_get(v_x_1392_, 1);
lean_inc(v_n_1436_);
v_lhs_1437_ = lean_ctor_get(v_x_1392_, 2);
lean_inc_ref(v_lhs_1437_);
v_rhs_1438_ = lean_ctor_get(v_x_1392_, 3);
lean_inc_ref(v_rhs_1438_);
lean_dec_ref_known(v_x_1392_, 4);
v___x_1439_ = lean_apply_4(v_h__10_1402_, v_w_1391_, v_n_1436_, v_lhs_1437_, v_rhs_1438_);
return v___x_1439_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic_0__Std_Tactic_BVDecide_BVExpr_toString_match__1_splitter(lean_object* v_motive_1440_, lean_object* v_w_1441_, lean_object* v_x_1442_, lean_object* v_h__1_1443_, lean_object* v_h__2_1444_, lean_object* v_h__3_1445_, lean_object* v_h__4_1446_, lean_object* v_h__5_1447_, lean_object* v_h__6_1448_, lean_object* v_h__7_1449_, lean_object* v_h__8_1450_, lean_object* v_h__9_1451_, lean_object* v_h__10_1452_){
_start:
{
switch(lean_obj_tag(v_x_1442_))
{
case 0:
{
lean_object* v_idx_1453_; lean_object* v___x_1454_; 
lean_dec(v_h__10_1452_);
lean_dec(v_h__9_1451_);
lean_dec(v_h__8_1450_);
lean_dec(v_h__7_1449_);
lean_dec(v_h__6_1448_);
lean_dec(v_h__5_1447_);
lean_dec(v_h__4_1446_);
lean_dec(v_h__3_1445_);
lean_dec(v_h__2_1444_);
v_idx_1453_ = lean_ctor_get(v_x_1442_, 1);
lean_inc(v_idx_1453_);
lean_dec_ref_known(v_x_1442_, 2);
v___x_1454_ = lean_apply_2(v_h__1_1443_, v_w_1441_, v_idx_1453_);
return v___x_1454_;
}
case 1:
{
lean_object* v_val_1455_; lean_object* v___x_1456_; 
lean_dec(v_h__10_1452_);
lean_dec(v_h__9_1451_);
lean_dec(v_h__8_1450_);
lean_dec(v_h__7_1449_);
lean_dec(v_h__6_1448_);
lean_dec(v_h__5_1447_);
lean_dec(v_h__4_1446_);
lean_dec(v_h__3_1445_);
lean_dec(v_h__1_1443_);
v_val_1455_ = lean_ctor_get(v_x_1442_, 1);
lean_inc(v_val_1455_);
lean_dec_ref_known(v_x_1442_, 2);
v___x_1456_ = lean_apply_2(v_h__2_1444_, v_w_1441_, v_val_1455_);
return v___x_1456_;
}
case 2:
{
lean_object* v_w_1457_; lean_object* v_start_1458_; lean_object* v_expr_1459_; lean_object* v___x_1460_; 
lean_dec(v_h__10_1452_);
lean_dec(v_h__9_1451_);
lean_dec(v_h__8_1450_);
lean_dec(v_h__7_1449_);
lean_dec(v_h__6_1448_);
lean_dec(v_h__5_1447_);
lean_dec(v_h__4_1446_);
lean_dec(v_h__2_1444_);
lean_dec(v_h__1_1443_);
v_w_1457_ = lean_ctor_get(v_x_1442_, 0);
lean_inc(v_w_1457_);
v_start_1458_ = lean_ctor_get(v_x_1442_, 1);
lean_inc(v_start_1458_);
v_expr_1459_ = lean_ctor_get(v_x_1442_, 3);
lean_inc_ref(v_expr_1459_);
lean_dec_ref_known(v_x_1442_, 4);
v___x_1460_ = lean_apply_4(v_h__3_1445_, v_w_1441_, v_w_1457_, v_start_1458_, v_expr_1459_);
return v___x_1460_;
}
case 3:
{
lean_object* v_lhs_1461_; uint8_t v_op_1462_; lean_object* v_rhs_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
lean_dec(v_h__10_1452_);
lean_dec(v_h__9_1451_);
lean_dec(v_h__8_1450_);
lean_dec(v_h__7_1449_);
lean_dec(v_h__6_1448_);
lean_dec(v_h__5_1447_);
lean_dec(v_h__3_1445_);
lean_dec(v_h__2_1444_);
lean_dec(v_h__1_1443_);
v_lhs_1461_ = lean_ctor_get(v_x_1442_, 1);
lean_inc_ref(v_lhs_1461_);
v_op_1462_ = lean_ctor_get_uint8(v_x_1442_, sizeof(void*)*3 + 8);
v_rhs_1463_ = lean_ctor_get(v_x_1442_, 2);
lean_inc_ref(v_rhs_1463_);
lean_dec_ref_known(v_x_1442_, 3);
v___x_1464_ = lean_box(v_op_1462_);
v___x_1465_ = lean_apply_4(v_h__4_1446_, v_w_1441_, v_lhs_1461_, v___x_1464_, v_rhs_1463_);
return v___x_1465_;
}
case 4:
{
lean_object* v_op_1466_; lean_object* v_operand_1467_; lean_object* v___x_1468_; 
lean_dec(v_h__10_1452_);
lean_dec(v_h__9_1451_);
lean_dec(v_h__8_1450_);
lean_dec(v_h__7_1449_);
lean_dec(v_h__6_1448_);
lean_dec(v_h__4_1446_);
lean_dec(v_h__3_1445_);
lean_dec(v_h__2_1444_);
lean_dec(v_h__1_1443_);
v_op_1466_ = lean_ctor_get(v_x_1442_, 1);
lean_inc(v_op_1466_);
v_operand_1467_ = lean_ctor_get(v_x_1442_, 2);
lean_inc_ref(v_operand_1467_);
lean_dec_ref_known(v_x_1442_, 3);
v___x_1468_ = lean_apply_3(v_h__5_1447_, v_w_1441_, v_op_1466_, v_operand_1467_);
return v___x_1468_;
}
case 5:
{
lean_object* v_l_1469_; lean_object* v_r_1470_; lean_object* v_lhs_1471_; lean_object* v_rhs_1472_; lean_object* v___x_1473_; 
lean_dec(v_h__10_1452_);
lean_dec(v_h__9_1451_);
lean_dec(v_h__8_1450_);
lean_dec(v_h__7_1449_);
lean_dec(v_h__5_1447_);
lean_dec(v_h__4_1446_);
lean_dec(v_h__3_1445_);
lean_dec(v_h__2_1444_);
lean_dec(v_h__1_1443_);
v_l_1469_ = lean_ctor_get(v_x_1442_, 0);
lean_inc(v_l_1469_);
v_r_1470_ = lean_ctor_get(v_x_1442_, 1);
lean_inc(v_r_1470_);
v_lhs_1471_ = lean_ctor_get(v_x_1442_, 3);
lean_inc_ref(v_lhs_1471_);
v_rhs_1472_ = lean_ctor_get(v_x_1442_, 4);
lean_inc_ref(v_rhs_1472_);
lean_dec_ref_known(v_x_1442_, 5);
v___x_1473_ = lean_apply_6(v_h__6_1448_, v_w_1441_, v_l_1469_, v_r_1470_, v_lhs_1471_, v_rhs_1472_, lean_box(0));
return v___x_1473_;
}
case 6:
{
lean_object* v_w_1474_; lean_object* v_n_1475_; lean_object* v_expr_1476_; lean_object* v___x_1477_; 
lean_dec(v_h__10_1452_);
lean_dec(v_h__9_1451_);
lean_dec(v_h__8_1450_);
lean_dec(v_h__6_1448_);
lean_dec(v_h__5_1447_);
lean_dec(v_h__4_1446_);
lean_dec(v_h__3_1445_);
lean_dec(v_h__2_1444_);
lean_dec(v_h__1_1443_);
v_w_1474_ = lean_ctor_get(v_x_1442_, 0);
lean_inc(v_w_1474_);
v_n_1475_ = lean_ctor_get(v_x_1442_, 2);
lean_inc(v_n_1475_);
v_expr_1476_ = lean_ctor_get(v_x_1442_, 3);
lean_inc_ref(v_expr_1476_);
lean_dec_ref_known(v_x_1442_, 4);
v___x_1477_ = lean_apply_5(v_h__7_1449_, v_w_1441_, v_w_1474_, v_n_1475_, v_expr_1476_, lean_box(0));
return v___x_1477_;
}
case 7:
{
lean_object* v_n_1478_; lean_object* v_lhs_1479_; lean_object* v_rhs_1480_; lean_object* v___x_1481_; 
lean_dec(v_h__10_1452_);
lean_dec(v_h__9_1451_);
lean_dec(v_h__7_1449_);
lean_dec(v_h__6_1448_);
lean_dec(v_h__5_1447_);
lean_dec(v_h__4_1446_);
lean_dec(v_h__3_1445_);
lean_dec(v_h__2_1444_);
lean_dec(v_h__1_1443_);
v_n_1478_ = lean_ctor_get(v_x_1442_, 1);
lean_inc(v_n_1478_);
v_lhs_1479_ = lean_ctor_get(v_x_1442_, 2);
lean_inc_ref(v_lhs_1479_);
v_rhs_1480_ = lean_ctor_get(v_x_1442_, 3);
lean_inc_ref(v_rhs_1480_);
lean_dec_ref_known(v_x_1442_, 4);
v___x_1481_ = lean_apply_4(v_h__8_1450_, v_w_1441_, v_n_1478_, v_lhs_1479_, v_rhs_1480_);
return v___x_1481_;
}
case 8:
{
lean_object* v_n_1482_; lean_object* v_lhs_1483_; lean_object* v_rhs_1484_; lean_object* v___x_1485_; 
lean_dec(v_h__10_1452_);
lean_dec(v_h__8_1450_);
lean_dec(v_h__7_1449_);
lean_dec(v_h__6_1448_);
lean_dec(v_h__5_1447_);
lean_dec(v_h__4_1446_);
lean_dec(v_h__3_1445_);
lean_dec(v_h__2_1444_);
lean_dec(v_h__1_1443_);
v_n_1482_ = lean_ctor_get(v_x_1442_, 1);
lean_inc(v_n_1482_);
v_lhs_1483_ = lean_ctor_get(v_x_1442_, 2);
lean_inc_ref(v_lhs_1483_);
v_rhs_1484_ = lean_ctor_get(v_x_1442_, 3);
lean_inc_ref(v_rhs_1484_);
lean_dec_ref_known(v_x_1442_, 4);
v___x_1485_ = lean_apply_4(v_h__9_1451_, v_w_1441_, v_n_1482_, v_lhs_1483_, v_rhs_1484_);
return v___x_1485_;
}
default: 
{
lean_object* v_n_1486_; lean_object* v_lhs_1487_; lean_object* v_rhs_1488_; lean_object* v___x_1489_; 
lean_dec(v_h__9_1451_);
lean_dec(v_h__8_1450_);
lean_dec(v_h__7_1449_);
lean_dec(v_h__6_1448_);
lean_dec(v_h__5_1447_);
lean_dec(v_h__4_1446_);
lean_dec(v_h__3_1445_);
lean_dec(v_h__2_1444_);
lean_dec(v_h__1_1443_);
v_n_1486_ = lean_ctor_get(v_x_1442_, 1);
lean_inc(v_n_1486_);
v_lhs_1487_ = lean_ctor_get(v_x_1442_, 2);
lean_inc_ref(v_lhs_1487_);
v_rhs_1488_ = lean_ctor_get(v_x_1442_, 3);
lean_inc_ref(v_rhs_1488_);
lean_dec_ref_known(v_x_1442_, 4);
v___x_1489_ = lean_apply_4(v_h__10_1452_, v_w_1441_, v_n_1486_, v_lhs_1487_, v_rhs_1488_);
return v___x_1489_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorIdx(uint8_t v_x_1490_){
_start:
{
if (v_x_1490_ == 0)
{
lean_object* v___x_1491_; 
v___x_1491_ = lean_unsigned_to_nat(0u);
return v___x_1491_;
}
else
{
lean_object* v___x_1492_; 
v___x_1492_ = lean_unsigned_to_nat(1u);
return v___x_1492_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorIdx___boxed(lean_object* v_x_1493_){
_start:
{
uint8_t v_x_boxed_1494_; lean_object* v_res_1495_; 
v_x_boxed_1494_ = lean_unbox(v_x_1493_);
v_res_1495_ = l_Std_Tactic_BVDecide_BVBinPred_ctorIdx(v_x_boxed_1494_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorElim___redArg(lean_object* v_k_1496_){
_start:
{
lean_inc(v_k_1496_);
return v_k_1496_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorElim___redArg___boxed(lean_object* v_k_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l_Std_Tactic_BVDecide_BVBinPred_ctorElim___redArg(v_k_1497_);
lean_dec(v_k_1497_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorElim(lean_object* v_motive_1499_, lean_object* v_ctorIdx_1500_, uint8_t v_t_1501_, lean_object* v_h_1502_, lean_object* v_k_1503_){
_start:
{
lean_inc(v_k_1503_);
return v_k_1503_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ctorElim___boxed(lean_object* v_motive_1504_, lean_object* v_ctorIdx_1505_, lean_object* v_t_1506_, lean_object* v_h_1507_, lean_object* v_k_1508_){
_start:
{
uint8_t v_t_boxed_1509_; lean_object* v_res_1510_; 
v_t_boxed_1509_ = lean_unbox(v_t_1506_);
v_res_1510_ = l_Std_Tactic_BVDecide_BVBinPred_ctorElim(v_motive_1504_, v_ctorIdx_1505_, v_t_boxed_1509_, v_h_1507_, v_k_1508_);
lean_dec(v_k_1508_);
lean_dec(v_ctorIdx_1505_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eq_elim___redArg(lean_object* v_eq_1511_){
_start:
{
lean_inc(v_eq_1511_);
return v_eq_1511_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eq_elim___redArg___boxed(lean_object* v_eq_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Std_Tactic_BVDecide_BVBinPred_eq_elim___redArg(v_eq_1512_);
lean_dec(v_eq_1512_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eq_elim(lean_object* v_motive_1514_, uint8_t v_t_1515_, lean_object* v_h_1516_, lean_object* v_eq_1517_){
_start:
{
lean_inc(v_eq_1517_);
return v_eq_1517_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eq_elim___boxed(lean_object* v_motive_1518_, lean_object* v_t_1519_, lean_object* v_h_1520_, lean_object* v_eq_1521_){
_start:
{
uint8_t v_t_boxed_1522_; lean_object* v_res_1523_; 
v_t_boxed_1522_ = lean_unbox(v_t_1519_);
v_res_1523_ = l_Std_Tactic_BVDecide_BVBinPred_eq_elim(v_motive_1518_, v_t_boxed_1522_, v_h_1520_, v_eq_1521_);
lean_dec(v_eq_1521_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ult_elim___redArg(lean_object* v_ult_1524_){
_start:
{
lean_inc(v_ult_1524_);
return v_ult_1524_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ult_elim___redArg___boxed(lean_object* v_ult_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Std_Tactic_BVDecide_BVBinPred_ult_elim___redArg(v_ult_1525_);
lean_dec(v_ult_1525_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ult_elim(lean_object* v_motive_1527_, uint8_t v_t_1528_, lean_object* v_h_1529_, lean_object* v_ult_1530_){
_start:
{
lean_inc(v_ult_1530_);
return v_ult_1530_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_ult_elim___boxed(lean_object* v_motive_1531_, lean_object* v_t_1532_, lean_object* v_h_1533_, lean_object* v_ult_1534_){
_start:
{
uint8_t v_t_boxed_1535_; lean_object* v_res_1536_; 
v_t_boxed_1535_ = lean_unbox(v_t_1532_);
v_res_1536_ = l_Std_Tactic_BVDecide_BVBinPred_ult_elim(v_motive_1531_, v_t_boxed_1535_, v_h_1533_, v_ult_1534_);
lean_dec(v_ult_1534_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_toString(uint8_t v_x_1539_){
_start:
{
if (v_x_1539_ == 0)
{
lean_object* v___x_1540_; 
v___x_1540_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVBinPred_toString___closed__0));
return v___x_1540_;
}
else
{
lean_object* v___x_1541_; 
v___x_1541_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVBinPred_toString___closed__1));
return v___x_1541_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_toString___boxed(lean_object* v_x_1542_){
_start:
{
uint8_t v_x_22__boxed_1543_; lean_object* v_res_1544_; 
v_x_22__boxed_1543_ = lean_unbox(v_x_1542_);
v_res_1544_ = l_Std_Tactic_BVDecide_BVBinPred_toString(v_x_22__boxed_1543_);
return v_res_1544_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVBinPred_eval___redArg(uint8_t v_x_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_){
_start:
{
if (v_x_1547_ == 0)
{
uint8_t v___x_1550_; 
v___x_1550_ = lean_nat_dec_eq(v_a_1548_, v_a_1549_);
return v___x_1550_;
}
else
{
uint8_t v___x_1551_; 
v___x_1551_ = lean_nat_dec_lt(v_a_1548_, v_a_1549_);
return v___x_1551_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eval___redArg___boxed(lean_object* v_x_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_){
_start:
{
uint8_t v_x_101__boxed_1555_; uint8_t v_res_1556_; lean_object* v_r_1557_; 
v_x_101__boxed_1555_ = lean_unbox(v_x_1552_);
v_res_1556_ = l_Std_Tactic_BVDecide_BVBinPred_eval___redArg(v_x_101__boxed_1555_, v_a_1553_, v_a_1554_);
lean_dec(v_a_1554_);
lean_dec(v_a_1553_);
v_r_1557_ = lean_box(v_res_1556_);
return v_r_1557_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVBinPred_eval(lean_object* v_w_1558_, uint8_t v_x_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_){
_start:
{
uint8_t v___x_1562_; 
v___x_1562_ = l_Std_Tactic_BVDecide_BVBinPred_eval___redArg(v_x_1559_, v_a_1560_, v_a_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVBinPred_eval___boxed(lean_object* v_w_1563_, lean_object* v_x_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_){
_start:
{
uint8_t v_x_114__boxed_1567_; uint8_t v_res_1568_; lean_object* v_r_1569_; 
v_x_114__boxed_1567_ = lean_unbox(v_x_1564_);
v_res_1568_ = l_Std_Tactic_BVDecide_BVBinPred_eval(v_w_1563_, v_x_114__boxed_1567_, v_a_1565_, v_a_1566_);
lean_dec(v_a_1566_);
lean_dec(v_a_1565_);
lean_dec(v_w_1563_);
v_r_1569_ = lean_box(v_res_1568_);
return v_r_1569_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorIdx(lean_object* v_x_1570_){
_start:
{
if (lean_obj_tag(v_x_1570_) == 0)
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_unsigned_to_nat(0u);
return v___x_1571_;
}
else
{
lean_object* v___x_1572_; 
v___x_1572_ = lean_unsigned_to_nat(1u);
return v___x_1572_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorIdx___boxed(lean_object* v_x_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Std_Tactic_BVDecide_BVPred_ctorIdx(v_x_1573_);
lean_dec_ref(v_x_1573_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorElim___redArg(lean_object* v_t_1575_, lean_object* v_k_1576_){
_start:
{
if (lean_obj_tag(v_t_1575_) == 0)
{
lean_object* v_w_1577_; lean_object* v_lhs_1578_; uint8_t v_op_1579_; lean_object* v_rhs_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v_w_1577_ = lean_ctor_get(v_t_1575_, 0);
lean_inc(v_w_1577_);
v_lhs_1578_ = lean_ctor_get(v_t_1575_, 1);
lean_inc_ref(v_lhs_1578_);
v_op_1579_ = lean_ctor_get_uint8(v_t_1575_, sizeof(void*)*3);
v_rhs_1580_ = lean_ctor_get(v_t_1575_, 2);
lean_inc_ref(v_rhs_1580_);
lean_dec_ref_known(v_t_1575_, 3);
v___x_1581_ = lean_box(v_op_1579_);
v___x_1582_ = lean_apply_4(v_k_1576_, v_w_1577_, v_lhs_1578_, v___x_1581_, v_rhs_1580_);
return v___x_1582_;
}
else
{
lean_object* v_w_1583_; lean_object* v_expr_1584_; lean_object* v_idx_1585_; lean_object* v___x_1586_; 
v_w_1583_ = lean_ctor_get(v_t_1575_, 0);
lean_inc(v_w_1583_);
v_expr_1584_ = lean_ctor_get(v_t_1575_, 1);
lean_inc_ref(v_expr_1584_);
v_idx_1585_ = lean_ctor_get(v_t_1575_, 2);
lean_inc(v_idx_1585_);
lean_dec_ref_known(v_t_1575_, 3);
v___x_1586_ = lean_apply_3(v_k_1576_, v_w_1583_, v_expr_1584_, v_idx_1585_);
return v___x_1586_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorElim(lean_object* v_motive_1587_, lean_object* v_ctorIdx_1588_, lean_object* v_t_1589_, lean_object* v_h_1590_, lean_object* v_k_1591_){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = l_Std_Tactic_BVDecide_BVPred_ctorElim___redArg(v_t_1589_, v_k_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_ctorElim___boxed(lean_object* v_motive_1593_, lean_object* v_ctorIdx_1594_, lean_object* v_t_1595_, lean_object* v_h_1596_, lean_object* v_k_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Std_Tactic_BVDecide_BVPred_ctorElim(v_motive_1593_, v_ctorIdx_1594_, v_t_1595_, v_h_1596_, v_k_1597_);
lean_dec(v_ctorIdx_1594_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_bin_elim___redArg(lean_object* v_t_1599_, lean_object* v_bin_1600_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Std_Tactic_BVDecide_BVPred_ctorElim___redArg(v_t_1599_, v_bin_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_bin_elim(lean_object* v_motive_1602_, lean_object* v_t_1603_, lean_object* v_h_1604_, lean_object* v_bin_1605_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l_Std_Tactic_BVDecide_BVPred_ctorElim___redArg(v_t_1603_, v_bin_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_getLsbD_elim___redArg(lean_object* v_t_1607_, lean_object* v_getLsbD_1608_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Std_Tactic_BVDecide_BVPred_ctorElim___redArg(v_t_1607_, v_getLsbD_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_getLsbD_elim(lean_object* v_motive_1610_, lean_object* v_t_1611_, lean_object* v_h_1612_, lean_object* v_getLsbD_1613_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l_Std_Tactic_BVDecide_BVPred_ctorElim___redArg(v_t_1611_, v_getLsbD_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_toString(lean_object* v_x_1615_){
_start:
{
if (lean_obj_tag(v_x_1615_) == 0)
{
lean_object* v_w_1616_; lean_object* v_lhs_1617_; uint8_t v_op_1618_; lean_object* v_rhs_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v_w_1616_ = lean_ctor_get(v_x_1615_, 0);
lean_inc_n(v_w_1616_, 2);
v_lhs_1617_ = lean_ctor_get(v_x_1615_, 1);
lean_inc_ref(v_lhs_1617_);
v_op_1618_ = lean_ctor_get_uint8(v_x_1615_, sizeof(void*)*3);
v_rhs_1619_ = lean_ctor_get(v_x_1615_, 2);
lean_inc_ref(v_rhs_1619_);
lean_dec_ref_known(v_x_1615_, 3);
v___x_1620_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__1));
v___x_1621_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1616_, v_lhs_1617_);
v___x_1622_ = lean_string_append(v___x_1620_, v___x_1621_);
lean_dec_ref(v___x_1621_);
v___x_1623_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__2));
v___x_1624_ = lean_string_append(v___x_1622_, v___x_1623_);
v___x_1625_ = l_Std_Tactic_BVDecide_BVBinPred_toString(v_op_1618_);
v___x_1626_ = lean_string_append(v___x_1624_, v___x_1625_);
lean_dec_ref(v___x_1625_);
v___x_1627_ = lean_string_append(v___x_1626_, v___x_1623_);
v___x_1628_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1616_, v_rhs_1619_);
v___x_1629_ = lean_string_append(v___x_1627_, v___x_1628_);
lean_dec_ref(v___x_1628_);
v___x_1630_ = ((lean_object*)(l_Std_Tactic_BVDecide_BVExpr_toString___closed__3));
v___x_1631_ = lean_string_append(v___x_1629_, v___x_1630_);
return v___x_1631_;
}
else
{
lean_object* v_w_1632_; lean_object* v_expr_1633_; lean_object* v_idx_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v_w_1632_ = lean_ctor_get(v_x_1615_, 0);
lean_inc(v_w_1632_);
v_expr_1633_ = lean_ctor_get(v_x_1615_, 1);
lean_inc_ref(v_expr_1633_);
v_idx_1634_ = lean_ctor_get(v_x_1615_, 2);
lean_inc(v_idx_1634_);
lean_dec_ref_known(v_x_1615_, 3);
v___x_1635_ = l_Std_Tactic_BVDecide_BVExpr_toString(v_w_1632_, v_expr_1633_);
v___x_1636_ = ((lean_object*)(l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__1));
v___x_1637_ = lean_string_append(v___x_1635_, v___x_1636_);
v___x_1638_ = l_Nat_reprFast(v_idx_1634_);
v___x_1639_ = lean_string_append(v___x_1637_, v___x_1638_);
lean_dec_ref(v___x_1638_);
v___x_1640_ = ((lean_object*)(l_Std_Tactic_BVDecide_instToStringBVBit___lam__0___closed__2));
v___x_1641_ = lean_string_append(v___x_1639_, v___x_1640_);
return v___x_1641_;
}
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVPred_eval(lean_object* v_assign_1644_, lean_object* v_x_1645_){
_start:
{
if (lean_obj_tag(v_x_1645_) == 0)
{
lean_object* v_w_1646_; lean_object* v_lhs_1647_; uint8_t v_op_1648_; lean_object* v_rhs_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; 
v_w_1646_ = lean_ctor_get(v_x_1645_, 0);
lean_inc_n(v_w_1646_, 2);
v_lhs_1647_ = lean_ctor_get(v_x_1645_, 1);
lean_inc_ref(v_lhs_1647_);
v_op_1648_ = lean_ctor_get_uint8(v_x_1645_, sizeof(void*)*3);
v_rhs_1649_ = lean_ctor_get(v_x_1645_, 2);
lean_inc_ref(v_rhs_1649_);
lean_dec_ref_known(v_x_1645_, 3);
v___x_1650_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1646_, v_assign_1644_, v_lhs_1647_);
v___x_1651_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1646_, v_assign_1644_, v_rhs_1649_);
v___x_1652_ = l_Std_Tactic_BVDecide_BVBinPred_eval___redArg(v_op_1648_, v___x_1650_, v___x_1651_);
lean_dec(v___x_1651_);
lean_dec(v___x_1650_);
return v___x_1652_;
}
else
{
lean_object* v_w_1653_; lean_object* v_expr_1654_; lean_object* v_idx_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; 
v_w_1653_ = lean_ctor_get(v_x_1645_, 0);
lean_inc(v_w_1653_);
v_expr_1654_ = lean_ctor_get(v_x_1645_, 1);
lean_inc_ref(v_expr_1654_);
v_idx_1655_ = lean_ctor_get(v_x_1645_, 2);
lean_inc(v_idx_1655_);
lean_dec_ref_known(v_x_1645_, 3);
v___x_1656_ = l_Std_Tactic_BVDecide_BVExpr_eval(v_w_1653_, v_assign_1644_, v_expr_1654_);
v___x_1657_ = l_Nat_testBit(v___x_1656_, v_idx_1655_);
lean_dec(v_idx_1655_);
lean_dec(v___x_1656_);
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVPred_eval___boxed(lean_object* v_assign_1658_, lean_object* v_x_1659_){
_start:
{
uint8_t v_res_1660_; lean_object* v_r_1661_; 
v_res_1660_ = l_Std_Tactic_BVDecide_BVPred_eval(v_assign_1658_, v_x_1659_);
lean_dec_ref(v_assign_1658_);
v_r_1661_ = lean_box(v_res_1660_);
return v_r_1661_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVLogicalExpr_eval___lam__0(lean_object* v_assign_1662_, lean_object* v_x_1663_){
_start:
{
uint8_t v___x_1664_; 
v___x_1664_ = l_Std_Tactic_BVDecide_BVPred_eval(v_assign_1662_, v_x_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVLogicalExpr_eval___lam__0___boxed(lean_object* v_assign_1665_, lean_object* v_x_1666_){
_start:
{
uint8_t v_res_1667_; lean_object* v_r_1668_; 
v_res_1667_ = l_Std_Tactic_BVDecide_BVLogicalExpr_eval___lam__0(v_assign_1665_, v_x_1666_);
lean_dec_ref(v_assign_1665_);
v_r_1668_ = lean_box(v_res_1667_);
return v_r_1668_;
}
}
LEAN_EXPORT uint8_t l_Std_Tactic_BVDecide_BVLogicalExpr_eval(lean_object* v_assign_1669_, lean_object* v_expr_1670_){
_start:
{
lean_object* v___f_1671_; uint8_t v___x_1672_; 
v___f_1671_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_BVLogicalExpr_eval___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1671_, 0, v_assign_1669_);
v___x_1672_ = l_Std_Tactic_BVDecide_BoolExpr_eval___redArg(v___f_1671_, v_expr_1670_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Std_Tactic_BVDecide_BVLogicalExpr_eval___boxed(lean_object* v_assign_1673_, lean_object* v_expr_1674_){
_start:
{
uint8_t v_res_1675_; lean_object* v_r_1676_; 
v_res_1675_ = l_Std_Tactic_BVDecide_BVLogicalExpr_eval(v_assign_1673_, v_expr_1674_);
v_r_1676_ = lean_box(v_res_1675_);
return v_r_1676_;
}
}
lean_object* runtime_initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_BVDecide_Bitblast_BoolExpr_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_RArray(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Bitblast_BoolExpr_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_RArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Tactic_BVDecide_instInhabitedBVBit = _init_l_Std_Tactic_BVDecide_instInhabitedBVBit();
lean_mark_persistent(l_Std_Tactic_BVDecide_instInhabitedBVBit);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Hashable(uint8_t builtin);
lean_object* initialize_Std_Tactic_BVDecide_Bitblast_BoolExpr_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_RArray(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_BitVec_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Hashable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_BVDecide_Bitblast_BoolExpr_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_RArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_BitVec_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Tactic_BVDecide_Bitblast_BVExpr_Basic(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.Tactic.VCGen.RuleCache
// Imports: public import Lean.Elab.Tactic.Do.VCGen.Split public import Lean.Elab.Tactic.VCGen.Context public import Lean.Elab.Tactic.VCGen.RuleConstruction public import Lean.Elab.Tactic.VCGen.LatticeOp public import Lean.Elab.Tactic.VCGen.Util import Lean.Meta.Sym.InferType
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
lean_object* lean_array_get_size(lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_WPApp_instWP(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_BackwardRule_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppPrefix(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_SpecAttr_SpecProof_key(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_tryMkBackwardRuleFromSpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_14_ = lean_apply_12(v_k_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed(lean_object* v_k_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(v_k_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(lean_object* v_k_29_, uint8_t v_allowLevelAssignments_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; 
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc(v___y_32_);
lean_inc_ref(v___y_31_);
v___f_43_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_43_, 0, v_k_29_);
lean_closure_set(v___f_43_, 1, v___y_31_);
lean_closure_set(v___f_43_, 2, v___y_32_);
lean_closure_set(v___f_43_, 3, v___y_33_);
lean_closure_set(v___f_43_, 4, v___y_34_);
lean_closure_set(v___f_43_, 5, v___y_35_);
lean_closure_set(v___f_43_, 6, v___y_36_);
lean_closure_set(v___f_43_, 7, v___y_37_);
v___x_44_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_30_, v___f_43_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
if (lean_obj_tag(v___x_44_) == 0)
{
return v___x_44_;
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___boxed(lean_object* v_k_53_, lean_object* v_allowLevelAssignments_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_67_; lean_object* v_res_68_; 
v_allowLevelAssignments_boxed_67_ = lean_unbox(v_allowLevelAssignments_54_);
v_res_68_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v_k_53_, v_allowLevelAssignments_boxed_67_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1(lean_object* v_00_u03b1_69_, lean_object* v_k_70_, uint8_t v_allowLevelAssignments_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v_k_70_, v_allowLevelAssignments_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___boxed(lean_object* v_00_u03b1_85_, lean_object* v_k_86_, lean_object* v_allowLevelAssignments_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_100_; lean_object* v_res_101_; 
v_allowLevelAssignments_boxed_100_ = lean_unbox(v_allowLevelAssignments_87_);
v_res_101_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1(v_00_u03b1_85_, v_k_86_, v_allowLevelAssignments_boxed_100_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0(lean_object* v_specThm_102_, lean_object* v_info_103_, lean_object* v___x_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_Elab_Tactic_VCGen_tryMkBackwardRuleFromSpec(v_specThm_102_, v_info_103_, v___x_104_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_126_; 
v_a_118_ = lean_ctor_get(v___x_117_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_126_ == 0)
{
v___x_120_ = v___x_117_;
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v___x_117_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_122_; lean_object* v___x_124_; 
v___x_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_122_, 0, v_a_118_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 0, v___x_122_);
v___x_124_ = v___x_120_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_122_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
else
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_134_; 
v_a_127_ = lean_ctor_get(v___x_117_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_134_ == 0)
{
v___x_129_ = v___x_117_;
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_117_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_132_; 
if (v_isShared_130_ == 0)
{
v___x_132_ = v___x_129_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_a_127_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed(lean_object* v_specThm_135_, lean_object* v_info_136_, lean_object* v___x_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0(v_specThm_135_, v_info_136_, v___x_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec_ref(v_info_136_);
return v_res_150_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(lean_object* v_a_151_, lean_object* v_x_152_){
_start:
{
if (lean_obj_tag(v_x_152_) == 0)
{
uint8_t v___x_153_; 
v___x_153_ = 0;
return v___x_153_;
}
else
{
lean_object* v_key_154_; lean_object* v_tail_155_; uint8_t v___y_157_; lean_object* v_fst_159_; lean_object* v_snd_160_; lean_object* v_fst_161_; lean_object* v_snd_162_; uint8_t v___x_163_; 
v_key_154_ = lean_ctor_get(v_x_152_, 0);
v_tail_155_ = lean_ctor_get(v_x_152_, 2);
v_fst_159_ = lean_ctor_get(v_key_154_, 0);
v_snd_160_ = lean_ctor_get(v_key_154_, 1);
v_fst_161_ = lean_ctor_get(v_a_151_, 0);
v_snd_162_ = lean_ctor_get(v_a_151_, 1);
v___x_163_ = lean_name_eq(v_fst_159_, v_fst_161_);
if (v___x_163_ == 0)
{
v___y_157_ = v___x_163_;
goto v___jp_156_;
}
else
{
lean_object* v_fst_164_; lean_object* v_snd_165_; lean_object* v_fst_166_; lean_object* v_snd_167_; size_t v___x_168_; size_t v___x_169_; uint8_t v___x_170_; 
v_fst_164_ = lean_ctor_get(v_snd_160_, 0);
v_snd_165_ = lean_ctor_get(v_snd_160_, 1);
v_fst_166_ = lean_ctor_get(v_snd_162_, 0);
v_snd_167_ = lean_ctor_get(v_snd_162_, 1);
v___x_168_ = lean_ptr_addr(v_fst_164_);
v___x_169_ = lean_ptr_addr(v_fst_166_);
v___x_170_ = lean_usize_dec_eq(v___x_168_, v___x_169_);
if (v___x_170_ == 0)
{
v_x_152_ = v_tail_155_;
goto _start;
}
else
{
uint8_t v___x_172_; 
v___x_172_ = lean_nat_dec_eq(v_snd_165_, v_snd_167_);
v___y_157_ = v___x_172_;
goto v___jp_156_;
}
}
v___jp_156_:
{
if (v___y_157_ == 0)
{
v_x_152_ = v_tail_155_;
goto _start;
}
else
{
return v___y_157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg___boxed(lean_object* v_a_173_, lean_object* v_x_174_){
_start:
{
uint8_t v_res_175_; lean_object* v_r_176_; 
v_res_175_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_173_, v_x_174_);
lean_dec(v_x_174_);
lean_dec_ref(v_a_173_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_177_, lean_object* v_x_178_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
return v_x_177_;
}
else
{
lean_object* v_key_179_; lean_object* v_value_180_; lean_object* v_tail_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_219_; 
v_key_179_ = lean_ctor_get(v_x_178_, 0);
v_value_180_ = lean_ctor_get(v_x_178_, 1);
v_tail_181_ = lean_ctor_get(v_x_178_, 2);
v_isSharedCheck_219_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_219_ == 0)
{
v___x_183_ = v_x_178_;
v_isShared_184_ = v_isSharedCheck_219_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_tail_181_);
lean_inc(v_value_180_);
lean_inc(v_key_179_);
lean_dec(v_x_178_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_219_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v_fst_185_; lean_object* v_snd_186_; lean_object* v___x_187_; uint64_t v___y_189_; lean_object* v___x_216_; 
v_fst_185_ = lean_ctor_get(v_key_179_, 0);
v_snd_186_ = lean_ctor_get(v_key_179_, 1);
v___x_187_ = lean_array_get_size(v_x_177_);
v___x_216_ = l_unsafeCast___redArg(v_fst_185_);
if (lean_obj_tag(v___x_216_) == 0)
{
uint64_t v___x_217_; 
v___x_217_ = 1723ULL;
v___y_189_ = v___x_217_;
goto v___jp_188_;
}
else
{
uint64_t v_hash_218_; 
v_hash_218_ = lean_ctor_get_uint64(v___x_216_, sizeof(void*)*2);
lean_dec(v___x_216_);
v___y_189_ = v_hash_218_;
goto v___jp_188_;
}
v___jp_188_:
{
lean_object* v_fst_190_; lean_object* v_snd_191_; size_t v___x_192_; size_t v___x_193_; size_t v___x_194_; uint64_t v___x_195_; uint64_t v___x_196_; uint64_t v___x_197_; uint64_t v___x_198_; uint64_t v___x_199_; uint64_t v___x_200_; uint64_t v_fold_201_; uint64_t v___x_202_; uint64_t v___x_203_; uint64_t v___x_204_; size_t v___x_205_; size_t v___x_206_; size_t v___x_207_; size_t v___x_208_; size_t v___x_209_; lean_object* v___x_210_; lean_object* v___x_212_; 
v_fst_190_ = lean_ctor_get(v_snd_186_, 0);
v_snd_191_ = lean_ctor_get(v_snd_186_, 1);
v___x_192_ = lean_ptr_addr(v_fst_190_);
v___x_193_ = ((size_t)3ULL);
v___x_194_ = lean_usize_shift_right(v___x_192_, v___x_193_);
v___x_195_ = lean_usize_to_uint64(v___x_194_);
v___x_196_ = lean_uint64_of_nat(v_snd_191_);
v___x_197_ = lean_uint64_mix_hash(v___x_195_, v___x_196_);
v___x_198_ = lean_uint64_mix_hash(v___y_189_, v___x_197_);
v___x_199_ = 32ULL;
v___x_200_ = lean_uint64_shift_right(v___x_198_, v___x_199_);
v_fold_201_ = lean_uint64_xor(v___x_198_, v___x_200_);
v___x_202_ = 16ULL;
v___x_203_ = lean_uint64_shift_right(v_fold_201_, v___x_202_);
v___x_204_ = lean_uint64_xor(v_fold_201_, v___x_203_);
v___x_205_ = lean_uint64_to_usize(v___x_204_);
v___x_206_ = lean_usize_of_nat(v___x_187_);
v___x_207_ = ((size_t)1ULL);
v___x_208_ = lean_usize_sub(v___x_206_, v___x_207_);
v___x_209_ = lean_usize_land(v___x_205_, v___x_208_);
v___x_210_ = lean_array_uget_borrowed(v_x_177_, v___x_209_);
lean_inc(v___x_210_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 2, v___x_210_);
v___x_212_ = v___x_183_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_key_179_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v_value_180_);
lean_ctor_set(v_reuseFailAlloc_215_, 2, v___x_210_);
v___x_212_ = v_reuseFailAlloc_215_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
lean_object* v___x_213_; 
v___x_213_ = lean_array_uset(v_x_177_, v___x_209_, v___x_212_);
v_x_177_ = v___x_213_;
v_x_178_ = v_tail_181_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(lean_object* v_i_220_, lean_object* v_source_221_, lean_object* v_target_222_){
_start:
{
lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_223_ = lean_array_get_size(v_source_221_);
v___x_224_ = lean_nat_dec_lt(v_i_220_, v___x_223_);
if (v___x_224_ == 0)
{
lean_dec_ref(v_source_221_);
lean_dec(v_i_220_);
return v_target_222_;
}
else
{
lean_object* v_es_225_; lean_object* v___x_226_; lean_object* v_source_227_; lean_object* v_target_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_es_225_ = lean_array_fget(v_source_221_, v_i_220_);
v___x_226_ = lean_box(0);
v_source_227_ = lean_array_fset(v_source_221_, v_i_220_, v___x_226_);
v_target_228_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(v_target_222_, v_es_225_);
v___x_229_ = lean_unsigned_to_nat(1u);
v___x_230_ = lean_nat_add(v_i_220_, v___x_229_);
lean_dec(v_i_220_);
v_i_220_ = v___x_230_;
v_source_221_ = v_source_227_;
v_target_222_ = v_target_228_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(lean_object* v_data_232_){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v_nbuckets_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_233_ = lean_array_get_size(v_data_232_);
v___x_234_ = lean_unsigned_to_nat(2u);
v_nbuckets_235_ = lean_nat_mul(v___x_233_, v___x_234_);
v___x_236_ = lean_unsigned_to_nat(0u);
v___x_237_ = lean_box(0);
v___x_238_ = lean_mk_array(v_nbuckets_235_, v___x_237_);
v___x_239_ = lean_array_propagate_mark(v_data_232_, v___x_238_);
v___x_240_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(v___x_236_, v_data_232_, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(lean_object* v_a_241_, lean_object* v_b_242_, lean_object* v_x_243_){
_start:
{
if (lean_obj_tag(v_x_243_) == 0)
{
lean_dec(v_b_242_);
lean_dec_ref(v_a_241_);
return v_x_243_;
}
else
{
lean_object* v_key_244_; lean_object* v_value_245_; lean_object* v_tail_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_271_; 
v_key_244_ = lean_ctor_get(v_x_243_, 0);
v_value_245_ = lean_ctor_get(v_x_243_, 1);
v_tail_246_ = lean_ctor_get(v_x_243_, 2);
v_isSharedCheck_271_ = !lean_is_exclusive(v_x_243_);
if (v_isSharedCheck_271_ == 0)
{
v___x_248_ = v_x_243_;
v_isShared_249_ = v_isSharedCheck_271_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_tail_246_);
lean_inc(v_value_245_);
lean_inc(v_key_244_);
lean_dec(v_x_243_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_271_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
uint8_t v___y_256_; lean_object* v_fst_258_; lean_object* v_snd_259_; lean_object* v_fst_260_; lean_object* v_snd_261_; uint8_t v___x_262_; 
v_fst_258_ = lean_ctor_get(v_key_244_, 0);
v_snd_259_ = lean_ctor_get(v_key_244_, 1);
v_fst_260_ = lean_ctor_get(v_a_241_, 0);
v_snd_261_ = lean_ctor_get(v_a_241_, 1);
v___x_262_ = lean_name_eq(v_fst_258_, v_fst_260_);
if (v___x_262_ == 0)
{
v___y_256_ = v___x_262_;
goto v___jp_255_;
}
else
{
lean_object* v_fst_263_; lean_object* v_snd_264_; lean_object* v_fst_265_; lean_object* v_snd_266_; size_t v___x_267_; size_t v___x_268_; uint8_t v___x_269_; 
v_fst_263_ = lean_ctor_get(v_snd_259_, 0);
v_snd_264_ = lean_ctor_get(v_snd_259_, 1);
v_fst_265_ = lean_ctor_get(v_snd_261_, 0);
v_snd_266_ = lean_ctor_get(v_snd_261_, 1);
v___x_267_ = lean_ptr_addr(v_fst_263_);
v___x_268_ = lean_ptr_addr(v_fst_265_);
v___x_269_ = lean_usize_dec_eq(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
goto v___jp_250_;
}
else
{
uint8_t v___x_270_; 
v___x_270_ = lean_nat_dec_eq(v_snd_264_, v_snd_266_);
v___y_256_ = v___x_270_;
goto v___jp_255_;
}
}
v___jp_250_:
{
lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_251_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_241_, v_b_242_, v_tail_246_);
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 2, v___x_251_);
v___x_253_ = v___x_248_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_key_244_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_value_245_);
lean_ctor_set(v_reuseFailAlloc_254_, 2, v___x_251_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
v___jp_255_:
{
if (v___y_256_ == 0)
{
goto v___jp_250_;
}
else
{
lean_object* v___x_257_; 
lean_del_object(v___x_248_);
lean_dec(v_value_245_);
lean_dec(v_key_244_);
v___x_257_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_257_, 0, v_a_241_);
lean_ctor_set(v___x_257_, 1, v_b_242_);
lean_ctor_set(v___x_257_, 2, v_tail_246_);
return v___x_257_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(lean_object* v_m_272_, lean_object* v_a_273_, lean_object* v_b_274_){
_start:
{
lean_object* v_size_275_; lean_object* v_buckets_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_334_; 
v_size_275_ = lean_ctor_get(v_m_272_, 0);
v_buckets_276_ = lean_ctor_get(v_m_272_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v_m_272_);
if (v_isSharedCheck_334_ == 0)
{
v___x_278_ = v_m_272_;
v_isShared_279_ = v_isSharedCheck_334_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_buckets_276_);
lean_inc(v_size_275_);
lean_dec(v_m_272_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_334_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v_fst_280_; lean_object* v_snd_281_; lean_object* v___x_282_; uint64_t v___y_284_; lean_object* v___x_331_; 
v_fst_280_ = lean_ctor_get(v_a_273_, 0);
v_snd_281_ = lean_ctor_get(v_a_273_, 1);
v___x_282_ = lean_array_get_size(v_buckets_276_);
v___x_331_ = l_unsafeCast___redArg(v_fst_280_);
if (lean_obj_tag(v___x_331_) == 0)
{
uint64_t v___x_332_; 
v___x_332_ = 1723ULL;
v___y_284_ = v___x_332_;
goto v___jp_283_;
}
else
{
uint64_t v_hash_333_; 
v_hash_333_ = lean_ctor_get_uint64(v___x_331_, sizeof(void*)*2);
lean_dec(v___x_331_);
v___y_284_ = v_hash_333_;
goto v___jp_283_;
}
v___jp_283_:
{
lean_object* v_fst_285_; lean_object* v_snd_286_; size_t v___x_287_; size_t v___x_288_; size_t v___x_289_; uint64_t v___x_290_; uint64_t v___x_291_; uint64_t v___x_292_; uint64_t v___x_293_; uint64_t v___x_294_; uint64_t v___x_295_; uint64_t v_fold_296_; uint64_t v___x_297_; uint64_t v___x_298_; uint64_t v___x_299_; size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; size_t v___x_303_; size_t v___x_304_; lean_object* v_bkt_305_; uint8_t v___x_306_; 
v_fst_285_ = lean_ctor_get(v_snd_281_, 0);
v_snd_286_ = lean_ctor_get(v_snd_281_, 1);
v___x_287_ = lean_ptr_addr(v_fst_285_);
v___x_288_ = ((size_t)3ULL);
v___x_289_ = lean_usize_shift_right(v___x_287_, v___x_288_);
v___x_290_ = lean_usize_to_uint64(v___x_289_);
v___x_291_ = lean_uint64_of_nat(v_snd_286_);
v___x_292_ = lean_uint64_mix_hash(v___x_290_, v___x_291_);
v___x_293_ = lean_uint64_mix_hash(v___y_284_, v___x_292_);
v___x_294_ = 32ULL;
v___x_295_ = lean_uint64_shift_right(v___x_293_, v___x_294_);
v_fold_296_ = lean_uint64_xor(v___x_293_, v___x_295_);
v___x_297_ = 16ULL;
v___x_298_ = lean_uint64_shift_right(v_fold_296_, v___x_297_);
v___x_299_ = lean_uint64_xor(v_fold_296_, v___x_298_);
v___x_300_ = lean_uint64_to_usize(v___x_299_);
v___x_301_ = lean_usize_of_nat(v___x_282_);
v___x_302_ = ((size_t)1ULL);
v___x_303_ = lean_usize_sub(v___x_301_, v___x_302_);
v___x_304_ = lean_usize_land(v___x_300_, v___x_303_);
v_bkt_305_ = lean_array_uget_borrowed(v_buckets_276_, v___x_304_);
v___x_306_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_273_, v_bkt_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; lean_object* v_size_x27_308_; lean_object* v___x_309_; lean_object* v_buckets_x27_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v___x_307_ = lean_unsigned_to_nat(1u);
v_size_x27_308_ = lean_nat_add(v_size_275_, v___x_307_);
lean_dec(v_size_275_);
lean_inc(v_bkt_305_);
v___x_309_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_309_, 0, v_a_273_);
lean_ctor_set(v___x_309_, 1, v_b_274_);
lean_ctor_set(v___x_309_, 2, v_bkt_305_);
v_buckets_x27_310_ = lean_array_uset(v_buckets_276_, v___x_304_, v___x_309_);
v___x_311_ = lean_unsigned_to_nat(4u);
v___x_312_ = lean_nat_mul(v_size_x27_308_, v___x_311_);
v___x_313_ = lean_unsigned_to_nat(3u);
v___x_314_ = lean_nat_div(v___x_312_, v___x_313_);
lean_dec(v___x_312_);
v___x_315_ = lean_array_get_size(v_buckets_x27_310_);
v___x_316_ = lean_nat_dec_le(v___x_314_, v___x_315_);
lean_dec(v___x_314_);
if (v___x_316_ == 0)
{
lean_object* v_val_317_; lean_object* v___x_319_; 
v_val_317_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(v_buckets_x27_310_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 1, v_val_317_);
lean_ctor_set(v___x_278_, 0, v_size_x27_308_);
v___x_319_ = v___x_278_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_size_x27_308_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_val_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
else
{
lean_object* v___x_322_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 1, v_buckets_x27_310_);
lean_ctor_set(v___x_278_, 0, v_size_x27_308_);
v___x_322_ = v___x_278_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_size_x27_308_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v_buckets_x27_310_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
else
{
lean_object* v___x_324_; lean_object* v_buckets_x27_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_329_; 
lean_inc(v_bkt_305_);
v___x_324_ = lean_box(0);
v_buckets_x27_325_ = lean_array_uset(v_buckets_276_, v___x_304_, v___x_324_);
v___x_326_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_273_, v_b_274_, v_bkt_305_);
v___x_327_ = lean_array_uset(v_buckets_x27_325_, v___x_304_, v___x_326_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 1, v___x_327_);
v___x_329_ = v___x_278_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_size_275_);
lean_ctor_set(v_reuseFailAlloc_330_, 1, v___x_327_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(lean_object* v_a_335_, lean_object* v_x_336_){
_start:
{
if (lean_obj_tag(v_x_336_) == 0)
{
lean_object* v___x_337_; 
v___x_337_ = lean_box(0);
return v___x_337_;
}
else
{
lean_object* v_key_338_; lean_object* v_value_339_; lean_object* v_tail_340_; uint8_t v___y_342_; lean_object* v_fst_345_; lean_object* v_snd_346_; lean_object* v_fst_347_; lean_object* v_snd_348_; uint8_t v___x_349_; 
v_key_338_ = lean_ctor_get(v_x_336_, 0);
v_value_339_ = lean_ctor_get(v_x_336_, 1);
v_tail_340_ = lean_ctor_get(v_x_336_, 2);
v_fst_345_ = lean_ctor_get(v_key_338_, 0);
v_snd_346_ = lean_ctor_get(v_key_338_, 1);
v_fst_347_ = lean_ctor_get(v_a_335_, 0);
v_snd_348_ = lean_ctor_get(v_a_335_, 1);
v___x_349_ = lean_name_eq(v_fst_345_, v_fst_347_);
if (v___x_349_ == 0)
{
v___y_342_ = v___x_349_;
goto v___jp_341_;
}
else
{
lean_object* v_fst_350_; lean_object* v_snd_351_; lean_object* v_fst_352_; lean_object* v_snd_353_; size_t v___x_354_; size_t v___x_355_; uint8_t v___x_356_; 
v_fst_350_ = lean_ctor_get(v_snd_346_, 0);
v_snd_351_ = lean_ctor_get(v_snd_346_, 1);
v_fst_352_ = lean_ctor_get(v_snd_348_, 0);
v_snd_353_ = lean_ctor_get(v_snd_348_, 1);
v___x_354_ = lean_ptr_addr(v_fst_350_);
v___x_355_ = lean_ptr_addr(v_fst_352_);
v___x_356_ = lean_usize_dec_eq(v___x_354_, v___x_355_);
if (v___x_356_ == 0)
{
v_x_336_ = v_tail_340_;
goto _start;
}
else
{
uint8_t v___x_358_; 
v___x_358_ = lean_nat_dec_eq(v_snd_351_, v_snd_353_);
v___y_342_ = v___x_358_;
goto v___jp_341_;
}
}
v___jp_341_:
{
if (v___y_342_ == 0)
{
v_x_336_ = v_tail_340_;
goto _start;
}
else
{
lean_object* v___x_344_; 
lean_inc(v_value_339_);
v___x_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_344_, 0, v_value_339_);
return v___x_344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg___boxed(lean_object* v_a_359_, lean_object* v_x_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_359_, v_x_360_);
lean_dec(v_x_360_);
lean_dec_ref(v_a_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(lean_object* v_m_362_, lean_object* v_a_363_){
_start:
{
lean_object* v_buckets_364_; lean_object* v_fst_365_; lean_object* v_snd_366_; lean_object* v___x_367_; uint64_t v___y_369_; lean_object* v___x_392_; 
v_buckets_364_ = lean_ctor_get(v_m_362_, 1);
v_fst_365_ = lean_ctor_get(v_a_363_, 0);
v_snd_366_ = lean_ctor_get(v_a_363_, 1);
v___x_367_ = lean_array_get_size(v_buckets_364_);
v___x_392_ = l_unsafeCast___redArg(v_fst_365_);
if (lean_obj_tag(v___x_392_) == 0)
{
uint64_t v___x_393_; 
v___x_393_ = 1723ULL;
v___y_369_ = v___x_393_;
goto v___jp_368_;
}
else
{
uint64_t v_hash_394_; 
v_hash_394_ = lean_ctor_get_uint64(v___x_392_, sizeof(void*)*2);
lean_dec(v___x_392_);
v___y_369_ = v_hash_394_;
goto v___jp_368_;
}
v___jp_368_:
{
lean_object* v_fst_370_; lean_object* v_snd_371_; size_t v___x_372_; size_t v___x_373_; size_t v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; uint64_t v___x_377_; uint64_t v___x_378_; uint64_t v___x_379_; uint64_t v___x_380_; uint64_t v_fold_381_; uint64_t v___x_382_; uint64_t v___x_383_; uint64_t v___x_384_; size_t v___x_385_; size_t v___x_386_; size_t v___x_387_; size_t v___x_388_; size_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v_fst_370_ = lean_ctor_get(v_snd_366_, 0);
v_snd_371_ = lean_ctor_get(v_snd_366_, 1);
v___x_372_ = lean_ptr_addr(v_fst_370_);
v___x_373_ = ((size_t)3ULL);
v___x_374_ = lean_usize_shift_right(v___x_372_, v___x_373_);
v___x_375_ = lean_usize_to_uint64(v___x_374_);
v___x_376_ = lean_uint64_of_nat(v_snd_371_);
v___x_377_ = lean_uint64_mix_hash(v___x_375_, v___x_376_);
v___x_378_ = lean_uint64_mix_hash(v___y_369_, v___x_377_);
v___x_379_ = 32ULL;
v___x_380_ = lean_uint64_shift_right(v___x_378_, v___x_379_);
v_fold_381_ = lean_uint64_xor(v___x_378_, v___x_380_);
v___x_382_ = 16ULL;
v___x_383_ = lean_uint64_shift_right(v_fold_381_, v___x_382_);
v___x_384_ = lean_uint64_xor(v_fold_381_, v___x_383_);
v___x_385_ = lean_uint64_to_usize(v___x_384_);
v___x_386_ = lean_usize_of_nat(v___x_367_);
v___x_387_ = ((size_t)1ULL);
v___x_388_ = lean_usize_sub(v___x_386_, v___x_387_);
v___x_389_ = lean_usize_land(v___x_385_, v___x_388_);
v___x_390_ = lean_array_uget_borrowed(v_buckets_364_, v___x_389_);
v___x_391_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_363_, v___x_390_);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___boxed(lean_object* v_m_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_m_395_, v_a_396_);
lean_dec_ref(v_a_396_);
lean_dec_ref(v_m_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached(lean_object* v_specThm_400_, lean_object* v_info_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_){
_start:
{
lean_object* v_proof_414_; lean_object* v_excessArgs_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v_key_420_; lean_object* v___x_421_; lean_object* v_specBackwardRuleCache_422_; lean_object* v___x_423_; 
v_proof_414_ = lean_ctor_get(v_specThm_400_, 1);
v_excessArgs_415_ = lean_ctor_get(v_info_401_, 3);
v___x_416_ = l_Lean_Elab_Tactic_VCGen_SpecAttr_SpecProof_key(v_proof_414_);
v___x_417_ = l_Lean_Elab_Tactic_VCGen_WPApp_instWP(v_info_401_);
v___x_418_ = lean_array_get_size(v_excessArgs_415_);
v___x_419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_417_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v_key_420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_420_, 0, v___x_416_);
lean_ctor_set(v_key_420_, 1, v___x_419_);
v___x_421_ = lean_st_ref_get(v_a_403_);
v_specBackwardRuleCache_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc_ref(v_specBackwardRuleCache_422_);
lean_dec(v___x_421_);
v___x_423_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_specBackwardRuleCache_422_, v_key_420_);
lean_dec_ref(v_specBackwardRuleCache_422_);
if (lean_obj_tag(v___x_423_) == 1)
{
lean_object* v___x_424_; 
lean_dec_ref_known(v_key_420_, 2);
lean_dec_ref(v_info_401_);
lean_dec_ref(v_specThm_400_);
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
else
{
lean_object* v___x_425_; lean_object* v___f_426_; uint8_t v___x_427_; lean_object* v___x_428_; 
lean_dec(v___x_423_);
v___x_425_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___closed__0));
v___f_426_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed), 15, 3);
lean_closure_set(v___f_426_, 0, v_specThm_400_);
lean_closure_set(v___f_426_, 1, v_info_401_);
lean_closure_set(v___f_426_, 2, v___x_425_);
v___x_427_ = 0;
v___x_428_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v___f_426_, v___x_427_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_487_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_487_ == 0)
{
v___x_431_ = v___x_428_;
v_isShared_432_ = v_isSharedCheck_487_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_428_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_487_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
if (lean_obj_tag(v_a_429_) == 0)
{
lean_object* v___x_433_; lean_object* v___x_435_; 
lean_dec_ref_known(v_key_420_, 2);
v___x_433_ = lean_box(0);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 0, v___x_433_);
v___x_435_ = v___x_431_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_433_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
else
{
lean_object* v_val_437_; 
v_val_437_ = lean_ctor_get(v_a_429_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v_a_429_, 1);
if (lean_obj_tag(v_val_437_) == 1)
{
lean_object* v_val_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_482_; 
lean_del_object(v___x_431_);
v_val_438_ = lean_ctor_get(v_val_437_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v_val_437_);
if (v_isSharedCheck_482_ == 0)
{
v___x_440_ = v_val_437_;
v_isShared_441_ = v_isSharedCheck_482_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_val_438_);
lean_dec(v_val_437_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_482_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lean_Meta_Sym_BackwardRule_shareCommon(v_val_438_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_473_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_473_ == 0)
{
v___x_445_ = v___x_442_;
v_isShared_446_ = v_isSharedCheck_473_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_473_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
lean_inc(v_a_443_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v_a_443_);
v___x_448_ = v___x_440_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_472_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
lean_object* v___x_449_; lean_object* v_specBackwardRuleCache_450_; lean_object* v_splitBackwardRuleCache_451_; lean_object* v_latticeBackwardRuleCache_452_; lean_object* v_frameBackwardRuleCache_453_; lean_object* v_frameDB_454_; lean_object* v_invariants_455_; lean_object* v_vcs_456_; lean_object* v_simpState_457_; lean_object* v_fuel_458_; lean_object* v_inlineHandledInvariants_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_471_; 
v___x_449_ = lean_st_ref_take(v_a_403_);
v_specBackwardRuleCache_450_ = lean_ctor_get(v___x_449_, 0);
v_splitBackwardRuleCache_451_ = lean_ctor_get(v___x_449_, 1);
v_latticeBackwardRuleCache_452_ = lean_ctor_get(v___x_449_, 2);
v_frameBackwardRuleCache_453_ = lean_ctor_get(v___x_449_, 3);
v_frameDB_454_ = lean_ctor_get(v___x_449_, 4);
v_invariants_455_ = lean_ctor_get(v___x_449_, 5);
v_vcs_456_ = lean_ctor_get(v___x_449_, 6);
v_simpState_457_ = lean_ctor_get(v___x_449_, 7);
v_fuel_458_ = lean_ctor_get(v___x_449_, 8);
v_inlineHandledInvariants_459_ = lean_ctor_get(v___x_449_, 9);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_471_ == 0)
{
v___x_461_ = v___x_449_;
v_isShared_462_ = v_isSharedCheck_471_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_inlineHandledInvariants_459_);
lean_inc(v_fuel_458_);
lean_inc(v_simpState_457_);
lean_inc(v_vcs_456_);
lean_inc(v_invariants_455_);
lean_inc(v_frameDB_454_);
lean_inc(v_frameBackwardRuleCache_453_);
lean_inc(v_latticeBackwardRuleCache_452_);
lean_inc(v_splitBackwardRuleCache_451_);
lean_inc(v_specBackwardRuleCache_450_);
lean_dec(v___x_449_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_471_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_465_; 
v___x_463_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_specBackwardRuleCache_450_, v_key_420_, v_a_443_);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 0, v___x_463_);
v___x_465_ = v___x_461_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_463_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_splitBackwardRuleCache_451_);
lean_ctor_set(v_reuseFailAlloc_470_, 2, v_latticeBackwardRuleCache_452_);
lean_ctor_set(v_reuseFailAlloc_470_, 3, v_frameBackwardRuleCache_453_);
lean_ctor_set(v_reuseFailAlloc_470_, 4, v_frameDB_454_);
lean_ctor_set(v_reuseFailAlloc_470_, 5, v_invariants_455_);
lean_ctor_set(v_reuseFailAlloc_470_, 6, v_vcs_456_);
lean_ctor_set(v_reuseFailAlloc_470_, 7, v_simpState_457_);
lean_ctor_set(v_reuseFailAlloc_470_, 8, v_fuel_458_);
lean_ctor_set(v_reuseFailAlloc_470_, 9, v_inlineHandledInvariants_459_);
v___x_465_ = v_reuseFailAlloc_470_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; lean_object* v___x_468_; 
v___x_466_ = lean_st_ref_put(v_a_403_, v___x_465_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_448_);
v___x_468_ = v___x_445_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_448_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
}
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
lean_del_object(v___x_440_);
lean_dec_ref_known(v_key_420_, 2);
v_a_474_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_442_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_442_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
else
{
lean_object* v___x_483_; lean_object* v___x_485_; 
lean_dec(v_val_437_);
lean_dec_ref_known(v_key_420_, 2);
v___x_483_ = lean_box(0);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 0, v___x_483_);
v___x_485_ = v___x_431_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
lean_dec_ref_known(v_key_420_, 2);
v_a_488_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_428_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_428_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___boxed(lean_object* v_specThm_496_, lean_object* v_info_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached(v_specThm_496_, v_info_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_);
lean_dec(v_a_508_);
lean_dec_ref(v_a_507_);
lean_dec(v_a_506_);
lean_dec_ref(v_a_505_);
lean_dec(v_a_504_);
lean_dec_ref(v_a_503_);
lean_dec(v_a_502_);
lean_dec_ref(v_a_501_);
lean_dec(v_a_500_);
lean_dec(v_a_499_);
lean_dec_ref(v_a_498_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0(lean_object* v_00_u03b2_511_, lean_object* v_m_512_, lean_object* v_a_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_m_512_, v_a_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___boxed(lean_object* v_00_u03b2_515_, lean_object* v_m_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0(v_00_u03b2_515_, v_m_516_, v_a_517_);
lean_dec_ref(v_a_517_);
lean_dec_ref(v_m_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2(lean_object* v_00_u03b2_519_, lean_object* v_m_520_, lean_object* v_a_521_, lean_object* v_b_522_){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_m_520_, v_a_521_, v_b_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(lean_object* v_00_u03b2_524_, lean_object* v_a_525_, lean_object* v_x_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_525_, v_x_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___boxed(lean_object* v_00_u03b2_528_, lean_object* v_a_529_, lean_object* v_x_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(v_00_u03b2_528_, v_a_529_, v_x_530_);
lean_dec(v_x_530_);
lean_dec_ref(v_a_529_);
return v_res_531_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(lean_object* v_00_u03b2_532_, lean_object* v_a_533_, lean_object* v_x_534_){
_start:
{
uint8_t v___x_535_; 
v___x_535_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_533_, v_x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___boxed(lean_object* v_00_u03b2_536_, lean_object* v_a_537_, lean_object* v_x_538_){
_start:
{
uint8_t v_res_539_; lean_object* v_r_540_; 
v_res_539_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(v_00_u03b2_536_, v_a_537_, v_x_538_);
lean_dec(v_x_538_);
lean_dec_ref(v_a_537_);
v_r_540_ = lean_box(v_res_539_);
return v_r_540_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4(lean_object* v_00_u03b2_541_, lean_object* v_data_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(v_data_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5(lean_object* v_00_u03b2_544_, lean_object* v_a_545_, lean_object* v_b_546_, lean_object* v_x_547_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_545_, v_b_546_, v_x_547_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_549_, lean_object* v_i_550_, lean_object* v_source_551_, lean_object* v_target_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(v_i_550_, v_source_551_, v_target_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_554_, lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(v_x_555_, v_x_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg(lean_object* v_splitInfo_567_, lean_object* v_info_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
lean_object* v___y_578_; 
switch(lean_obj_tag(v_splitInfo_567_))
{
case 0:
{
lean_object* v___x_626_; 
v___x_626_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1));
v___y_578_ = v___x_626_;
goto v___jp_577_;
}
case 1:
{
lean_object* v___x_627_; 
v___x_627_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3));
v___y_578_ = v___x_627_;
goto v___jp_577_;
}
case 2:
{
lean_object* v___x_628_; 
v___x_628_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__5));
v___y_578_ = v___x_628_;
goto v___jp_577_;
}
default: 
{
lean_object* v_matcherApp_629_; lean_object* v_matcherName_630_; 
v_matcherApp_629_ = lean_ctor_get(v_splitInfo_567_, 0);
v_matcherName_630_ = lean_ctor_get(v_matcherApp_629_, 1);
lean_inc(v_matcherName_630_);
v___y_578_ = v_matcherName_630_;
goto v___jp_577_;
}
}
v___jp_577_:
{
lean_object* v_excessArgs_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v_key_583_; lean_object* v___x_584_; lean_object* v_splitBackwardRuleCache_585_; lean_object* v___x_586_; 
v_excessArgs_579_ = lean_ctor_get(v_info_568_, 3);
v___x_580_ = l_Lean_Elab_Tactic_VCGen_WPApp_instWP(v_info_568_);
v___x_581_ = lean_array_get_size(v_excessArgs_579_);
v___x_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_582_, 0, v___x_580_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
v_key_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_583_, 0, v___y_578_);
lean_ctor_set(v_key_583_, 1, v___x_582_);
v___x_584_ = lean_st_ref_get(v_a_569_);
v_splitBackwardRuleCache_585_ = lean_ctor_get(v___x_584_, 1);
lean_inc_ref(v_splitBackwardRuleCache_585_);
lean_dec(v___x_584_);
v___x_586_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_splitBackwardRuleCache_585_, v_key_583_);
lean_dec_ref(v_splitBackwardRuleCache_585_);
if (lean_obj_tag(v___x_586_) == 1)
{
lean_object* v_val_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec_ref_known(v_key_583_, 2);
lean_dec_ref(v_info_568_);
lean_dec_ref(v_splitInfo_567_);
v_val_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_val_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
lean_ctor_set_tag(v___x_589_, 0);
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_val_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
else
{
lean_object* v___x_595_; 
lean_dec(v___x_586_);
v___x_595_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplit(v_splitInfo_567_, v_info_568_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_597_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref_known(v___x_595_, 1);
v___x_597_ = l_Lean_Meta_Sym_BackwardRule_shareCommon(v_a_596_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_625_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_625_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_625_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_625_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v_specBackwardRuleCache_603_; lean_object* v_splitBackwardRuleCache_604_; lean_object* v_latticeBackwardRuleCache_605_; lean_object* v_frameBackwardRuleCache_606_; lean_object* v_frameDB_607_; lean_object* v_invariants_608_; lean_object* v_vcs_609_; lean_object* v_simpState_610_; lean_object* v_fuel_611_; lean_object* v_inlineHandledInvariants_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_624_; 
v___x_602_ = lean_st_ref_take(v_a_569_);
v_specBackwardRuleCache_603_ = lean_ctor_get(v___x_602_, 0);
v_splitBackwardRuleCache_604_ = lean_ctor_get(v___x_602_, 1);
v_latticeBackwardRuleCache_605_ = lean_ctor_get(v___x_602_, 2);
v_frameBackwardRuleCache_606_ = lean_ctor_get(v___x_602_, 3);
v_frameDB_607_ = lean_ctor_get(v___x_602_, 4);
v_invariants_608_ = lean_ctor_get(v___x_602_, 5);
v_vcs_609_ = lean_ctor_get(v___x_602_, 6);
v_simpState_610_ = lean_ctor_get(v___x_602_, 7);
v_fuel_611_ = lean_ctor_get(v___x_602_, 8);
v_inlineHandledInvariants_612_ = lean_ctor_get(v___x_602_, 9);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_624_ == 0)
{
v___x_614_ = v___x_602_;
v_isShared_615_ = v_isSharedCheck_624_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_inlineHandledInvariants_612_);
lean_inc(v_fuel_611_);
lean_inc(v_simpState_610_);
lean_inc(v_vcs_609_);
lean_inc(v_invariants_608_);
lean_inc(v_frameDB_607_);
lean_inc(v_frameBackwardRuleCache_606_);
lean_inc(v_latticeBackwardRuleCache_605_);
lean_inc(v_splitBackwardRuleCache_604_);
lean_inc(v_specBackwardRuleCache_603_);
lean_dec(v___x_602_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_624_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_616_; lean_object* v___x_618_; 
lean_inc(v_a_598_);
v___x_616_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_splitBackwardRuleCache_604_, v_key_583_, v_a_598_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 1, v___x_616_);
v___x_618_ = v___x_614_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_specBackwardRuleCache_603_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v___x_616_);
lean_ctor_set(v_reuseFailAlloc_623_, 2, v_latticeBackwardRuleCache_605_);
lean_ctor_set(v_reuseFailAlloc_623_, 3, v_frameBackwardRuleCache_606_);
lean_ctor_set(v_reuseFailAlloc_623_, 4, v_frameDB_607_);
lean_ctor_set(v_reuseFailAlloc_623_, 5, v_invariants_608_);
lean_ctor_set(v_reuseFailAlloc_623_, 6, v_vcs_609_);
lean_ctor_set(v_reuseFailAlloc_623_, 7, v_simpState_610_);
lean_ctor_set(v_reuseFailAlloc_623_, 8, v_fuel_611_);
lean_ctor_set(v_reuseFailAlloc_623_, 9, v_inlineHandledInvariants_612_);
v___x_618_ = v_reuseFailAlloc_623_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_619_; lean_object* v___x_621_; 
v___x_619_ = lean_st_ref_put(v_a_569_, v___x_618_);
if (v_isShared_601_ == 0)
{
v___x_621_ = v___x_600_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_598_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_583_, 2);
return v___x_597_;
}
}
else
{
lean_dec_ref_known(v_key_583_, 2);
return v___x_595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___boxed(lean_object* v_splitInfo_631_, lean_object* v_info_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg(v_splitInfo_631_, v_info_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_, v_a_639_);
lean_dec(v_a_639_);
lean_dec_ref(v_a_638_);
lean_dec(v_a_637_);
lean_dec_ref(v_a_636_);
lean_dec(v_a_635_);
lean_dec_ref(v_a_634_);
lean_dec(v_a_633_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached(lean_object* v_splitInfo_642_, lean_object* v_info_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_, lean_object* v_a_654_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg(v_splitInfo_642_, v_info_643_, v_a_645_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_, v_a_654_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___boxed(lean_object* v_splitInfo_657_, lean_object* v_info_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached(v_splitInfo_657_, v_info_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_);
lean_dec(v_a_669_);
lean_dec_ref(v_a_668_);
lean_dec(v_a_667_);
lean_dec_ref(v_a_666_);
lean_dec(v_a_665_);
lean_dec_ref(v_a_664_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
lean_dec(v_a_661_);
lean_dec(v_a_660_);
lean_dec_ref(v_a_659_);
return v_res_671_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(lean_object* v_a_672_, lean_object* v_x_673_){
_start:
{
if (lean_obj_tag(v_x_673_) == 0)
{
uint8_t v___x_674_; 
v___x_674_ = 0;
return v___x_674_;
}
else
{
lean_object* v_key_675_; lean_object* v_tail_676_; lean_object* v_fst_677_; lean_object* v_snd_678_; lean_object* v_fst_679_; lean_object* v_snd_680_; size_t v___x_681_; size_t v___x_682_; uint8_t v___x_683_; 
v_key_675_ = lean_ctor_get(v_x_673_, 0);
v_tail_676_ = lean_ctor_get(v_x_673_, 2);
v_fst_677_ = lean_ctor_get(v_key_675_, 0);
v_snd_678_ = lean_ctor_get(v_key_675_, 1);
v_fst_679_ = lean_ctor_get(v_a_672_, 0);
v_snd_680_ = lean_ctor_get(v_a_672_, 1);
v___x_681_ = lean_ptr_addr(v_fst_677_);
v___x_682_ = lean_ptr_addr(v_fst_679_);
v___x_683_ = lean_usize_dec_eq(v___x_681_, v___x_682_);
if (v___x_683_ == 0)
{
v_x_673_ = v_tail_676_;
goto _start;
}
else
{
uint8_t v___x_685_; 
v___x_685_ = lean_nat_dec_eq(v_snd_678_, v_snd_680_);
if (v___x_685_ == 0)
{
v_x_673_ = v_tail_676_;
goto _start;
}
else
{
return v___x_685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg___boxed(lean_object* v_a_687_, lean_object* v_x_688_){
_start:
{
uint8_t v_res_689_; lean_object* v_r_690_; 
v_res_689_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(v_a_687_, v_x_688_);
lean_dec(v_x_688_);
lean_dec_ref(v_a_687_);
v_r_690_ = lean_box(v_res_689_);
return v_r_690_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(lean_object* v_a_691_, lean_object* v_b_692_, lean_object* v_x_693_){
_start:
{
if (lean_obj_tag(v_x_693_) == 0)
{
lean_dec(v_b_692_);
lean_dec_ref(v_a_691_);
return v_x_693_;
}
else
{
lean_object* v_key_694_; lean_object* v_value_695_; lean_object* v_tail_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_714_; 
v_key_694_ = lean_ctor_get(v_x_693_, 0);
v_value_695_ = lean_ctor_get(v_x_693_, 1);
v_tail_696_ = lean_ctor_get(v_x_693_, 2);
v_isSharedCheck_714_ = !lean_is_exclusive(v_x_693_);
if (v_isSharedCheck_714_ == 0)
{
v___x_698_ = v_x_693_;
v_isShared_699_ = v_isSharedCheck_714_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_tail_696_);
lean_inc(v_value_695_);
lean_inc(v_key_694_);
lean_dec(v_x_693_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_714_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v_fst_705_; lean_object* v_snd_706_; lean_object* v_fst_707_; lean_object* v_snd_708_; size_t v___x_709_; size_t v___x_710_; uint8_t v___x_711_; 
v_fst_705_ = lean_ctor_get(v_key_694_, 0);
v_snd_706_ = lean_ctor_get(v_key_694_, 1);
v_fst_707_ = lean_ctor_get(v_a_691_, 0);
v_snd_708_ = lean_ctor_get(v_a_691_, 1);
v___x_709_ = lean_ptr_addr(v_fst_705_);
v___x_710_ = lean_ptr_addr(v_fst_707_);
v___x_711_ = lean_usize_dec_eq(v___x_709_, v___x_710_);
if (v___x_711_ == 0)
{
goto v___jp_700_;
}
else
{
uint8_t v___x_712_; 
v___x_712_ = lean_nat_dec_eq(v_snd_706_, v_snd_708_);
if (v___x_712_ == 0)
{
goto v___jp_700_;
}
else
{
lean_object* v___x_713_; 
lean_del_object(v___x_698_);
lean_dec(v_value_695_);
lean_dec(v_key_694_);
v___x_713_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_713_, 0, v_a_691_);
lean_ctor_set(v___x_713_, 1, v_b_692_);
lean_ctor_set(v___x_713_, 2, v_tail_696_);
return v___x_713_;
}
}
v___jp_700_:
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(v_a_691_, v_b_692_, v_tail_696_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 2, v___x_701_);
v___x_703_ = v___x_698_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_key_694_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_value_695_);
lean_ctor_set(v_reuseFailAlloc_704_, 2, v___x_701_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_715_, lean_object* v_x_716_){
_start:
{
if (lean_obj_tag(v_x_716_) == 0)
{
return v_x_715_;
}
else
{
lean_object* v_key_717_; lean_object* v_value_718_; lean_object* v_tail_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_749_; 
v_key_717_ = lean_ctor_get(v_x_716_, 0);
v_value_718_ = lean_ctor_get(v_x_716_, 1);
v_tail_719_ = lean_ctor_get(v_x_716_, 2);
v_isSharedCheck_749_ = !lean_is_exclusive(v_x_716_);
if (v_isSharedCheck_749_ == 0)
{
v___x_721_ = v_x_716_;
v_isShared_722_ = v_isSharedCheck_749_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_tail_719_);
lean_inc(v_value_718_);
lean_inc(v_key_717_);
lean_dec(v_x_716_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_749_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v_fst_723_; lean_object* v_snd_724_; lean_object* v___x_725_; size_t v___x_726_; size_t v___x_727_; size_t v___x_728_; uint64_t v___x_729_; uint64_t v___x_730_; uint64_t v___x_731_; uint64_t v___x_732_; uint64_t v___x_733_; uint64_t v_fold_734_; uint64_t v___x_735_; uint64_t v___x_736_; uint64_t v___x_737_; size_t v___x_738_; size_t v___x_739_; size_t v___x_740_; size_t v___x_741_; size_t v___x_742_; lean_object* v___x_743_; lean_object* v___x_745_; 
v_fst_723_ = lean_ctor_get(v_key_717_, 0);
v_snd_724_ = lean_ctor_get(v_key_717_, 1);
v___x_725_ = lean_array_get_size(v_x_715_);
v___x_726_ = lean_ptr_addr(v_fst_723_);
v___x_727_ = ((size_t)3ULL);
v___x_728_ = lean_usize_shift_right(v___x_726_, v___x_727_);
v___x_729_ = lean_usize_to_uint64(v___x_728_);
v___x_730_ = lean_uint64_of_nat(v_snd_724_);
v___x_731_ = lean_uint64_mix_hash(v___x_729_, v___x_730_);
v___x_732_ = 32ULL;
v___x_733_ = lean_uint64_shift_right(v___x_731_, v___x_732_);
v_fold_734_ = lean_uint64_xor(v___x_731_, v___x_733_);
v___x_735_ = 16ULL;
v___x_736_ = lean_uint64_shift_right(v_fold_734_, v___x_735_);
v___x_737_ = lean_uint64_xor(v_fold_734_, v___x_736_);
v___x_738_ = lean_uint64_to_usize(v___x_737_);
v___x_739_ = lean_usize_of_nat(v___x_725_);
v___x_740_ = ((size_t)1ULL);
v___x_741_ = lean_usize_sub(v___x_739_, v___x_740_);
v___x_742_ = lean_usize_land(v___x_738_, v___x_741_);
v___x_743_ = lean_array_uget_borrowed(v_x_715_, v___x_742_);
lean_inc(v___x_743_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 2, v___x_743_);
v___x_745_ = v___x_721_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_key_717_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_value_718_);
lean_ctor_set(v_reuseFailAlloc_748_, 2, v___x_743_);
v___x_745_ = v_reuseFailAlloc_748_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; 
v___x_746_ = lean_array_uset(v_x_715_, v___x_742_, v___x_745_);
v_x_715_ = v___x_746_;
v_x_716_ = v_tail_719_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4___redArg(lean_object* v_i_750_, lean_object* v_source_751_, lean_object* v_target_752_){
_start:
{
lean_object* v___x_753_; uint8_t v___x_754_; 
v___x_753_ = lean_array_get_size(v_source_751_);
v___x_754_ = lean_nat_dec_lt(v_i_750_, v___x_753_);
if (v___x_754_ == 0)
{
lean_dec_ref(v_source_751_);
lean_dec(v_i_750_);
return v_target_752_;
}
else
{
lean_object* v_es_755_; lean_object* v___x_756_; lean_object* v_source_757_; lean_object* v_target_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v_es_755_ = lean_array_fget(v_source_751_, v_i_750_);
v___x_756_ = lean_box(0);
v_source_757_ = lean_array_fset(v_source_751_, v_i_750_, v___x_756_);
v_target_758_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5___redArg(v_target_752_, v_es_755_);
v___x_759_ = lean_unsigned_to_nat(1u);
v___x_760_ = lean_nat_add(v_i_750_, v___x_759_);
lean_dec(v_i_750_);
v_i_750_ = v___x_760_;
v_source_751_ = v_source_757_;
v_target_752_ = v_target_758_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3___redArg(lean_object* v_data_762_){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v_nbuckets_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_763_ = lean_array_get_size(v_data_762_);
v___x_764_ = lean_unsigned_to_nat(2u);
v_nbuckets_765_ = lean_nat_mul(v___x_763_, v___x_764_);
v___x_766_ = lean_unsigned_to_nat(0u);
v___x_767_ = lean_box(0);
v___x_768_ = lean_mk_array(v_nbuckets_765_, v___x_767_);
v___x_769_ = lean_array_propagate_mark(v_data_762_, v___x_768_);
v___x_770_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4___redArg(v___x_766_, v_data_762_, v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(lean_object* v_m_771_, lean_object* v_a_772_, lean_object* v_b_773_){
_start:
{
lean_object* v_size_774_; lean_object* v_buckets_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_825_; 
v_size_774_ = lean_ctor_get(v_m_771_, 0);
v_buckets_775_ = lean_ctor_get(v_m_771_, 1);
v_isSharedCheck_825_ = !lean_is_exclusive(v_m_771_);
if (v_isSharedCheck_825_ == 0)
{
v___x_777_ = v_m_771_;
v_isShared_778_ = v_isSharedCheck_825_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_buckets_775_);
lean_inc(v_size_774_);
lean_dec(v_m_771_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_825_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v_fst_779_; lean_object* v_snd_780_; lean_object* v___x_781_; size_t v___x_782_; size_t v___x_783_; size_t v___x_784_; uint64_t v___x_785_; uint64_t v___x_786_; uint64_t v___x_787_; uint64_t v___x_788_; uint64_t v___x_789_; uint64_t v_fold_790_; uint64_t v___x_791_; uint64_t v___x_792_; uint64_t v___x_793_; size_t v___x_794_; size_t v___x_795_; size_t v___x_796_; size_t v___x_797_; size_t v___x_798_; lean_object* v_bkt_799_; uint8_t v___x_800_; 
v_fst_779_ = lean_ctor_get(v_a_772_, 0);
v_snd_780_ = lean_ctor_get(v_a_772_, 1);
v___x_781_ = lean_array_get_size(v_buckets_775_);
v___x_782_ = lean_ptr_addr(v_fst_779_);
v___x_783_ = ((size_t)3ULL);
v___x_784_ = lean_usize_shift_right(v___x_782_, v___x_783_);
v___x_785_ = lean_usize_to_uint64(v___x_784_);
v___x_786_ = lean_uint64_of_nat(v_snd_780_);
v___x_787_ = lean_uint64_mix_hash(v___x_785_, v___x_786_);
v___x_788_ = 32ULL;
v___x_789_ = lean_uint64_shift_right(v___x_787_, v___x_788_);
v_fold_790_ = lean_uint64_xor(v___x_787_, v___x_789_);
v___x_791_ = 16ULL;
v___x_792_ = lean_uint64_shift_right(v_fold_790_, v___x_791_);
v___x_793_ = lean_uint64_xor(v_fold_790_, v___x_792_);
v___x_794_ = lean_uint64_to_usize(v___x_793_);
v___x_795_ = lean_usize_of_nat(v___x_781_);
v___x_796_ = ((size_t)1ULL);
v___x_797_ = lean_usize_sub(v___x_795_, v___x_796_);
v___x_798_ = lean_usize_land(v___x_794_, v___x_797_);
v_bkt_799_ = lean_array_uget_borrowed(v_buckets_775_, v___x_798_);
v___x_800_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(v_a_772_, v_bkt_799_);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; lean_object* v_size_x27_802_; lean_object* v___x_803_; lean_object* v_buckets_x27_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; uint8_t v___x_810_; 
v___x_801_ = lean_unsigned_to_nat(1u);
v_size_x27_802_ = lean_nat_add(v_size_774_, v___x_801_);
lean_dec(v_size_774_);
lean_inc(v_bkt_799_);
v___x_803_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_803_, 0, v_a_772_);
lean_ctor_set(v___x_803_, 1, v_b_773_);
lean_ctor_set(v___x_803_, 2, v_bkt_799_);
v_buckets_x27_804_ = lean_array_uset(v_buckets_775_, v___x_798_, v___x_803_);
v___x_805_ = lean_unsigned_to_nat(4u);
v___x_806_ = lean_nat_mul(v_size_x27_802_, v___x_805_);
v___x_807_ = lean_unsigned_to_nat(3u);
v___x_808_ = lean_nat_div(v___x_806_, v___x_807_);
lean_dec(v___x_806_);
v___x_809_ = lean_array_get_size(v_buckets_x27_804_);
v___x_810_ = lean_nat_dec_le(v___x_808_, v___x_809_);
lean_dec(v___x_808_);
if (v___x_810_ == 0)
{
lean_object* v_val_811_; lean_object* v___x_813_; 
v_val_811_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3___redArg(v_buckets_x27_804_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 1, v_val_811_);
lean_ctor_set(v___x_777_, 0, v_size_x27_802_);
v___x_813_ = v___x_777_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_size_x27_802_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_val_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
else
{
lean_object* v___x_816_; 
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 1, v_buckets_x27_804_);
lean_ctor_set(v___x_777_, 0, v_size_x27_802_);
v___x_816_ = v___x_777_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_size_x27_802_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v_buckets_x27_804_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
else
{
lean_object* v___x_818_; lean_object* v_buckets_x27_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_823_; 
lean_inc(v_bkt_799_);
v___x_818_ = lean_box(0);
v_buckets_x27_819_ = lean_array_uset(v_buckets_775_, v___x_798_, v___x_818_);
v___x_820_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(v_a_772_, v_b_773_, v_bkt_799_);
v___x_821_ = lean_array_uset(v_buckets_x27_819_, v___x_798_, v___x_820_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 1, v___x_821_);
v___x_823_ = v___x_777_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_size_774_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v___x_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(lean_object* v_a_826_, lean_object* v_x_827_){
_start:
{
if (lean_obj_tag(v_x_827_) == 0)
{
lean_object* v___x_828_; 
v___x_828_ = lean_box(0);
return v___x_828_;
}
else
{
lean_object* v_key_829_; lean_object* v_value_830_; lean_object* v_tail_831_; lean_object* v_fst_832_; lean_object* v_snd_833_; lean_object* v_fst_834_; lean_object* v_snd_835_; size_t v___x_836_; size_t v___x_837_; uint8_t v___x_838_; 
v_key_829_ = lean_ctor_get(v_x_827_, 0);
v_value_830_ = lean_ctor_get(v_x_827_, 1);
v_tail_831_ = lean_ctor_get(v_x_827_, 2);
v_fst_832_ = lean_ctor_get(v_key_829_, 0);
v_snd_833_ = lean_ctor_get(v_key_829_, 1);
v_fst_834_ = lean_ctor_get(v_a_826_, 0);
v_snd_835_ = lean_ctor_get(v_a_826_, 1);
v___x_836_ = lean_ptr_addr(v_fst_832_);
v___x_837_ = lean_ptr_addr(v_fst_834_);
v___x_838_ = lean_usize_dec_eq(v___x_836_, v___x_837_);
if (v___x_838_ == 0)
{
v_x_827_ = v_tail_831_;
goto _start;
}
else
{
uint8_t v___x_840_; 
v___x_840_ = lean_nat_dec_eq(v_snd_833_, v_snd_835_);
if (v___x_840_ == 0)
{
v_x_827_ = v_tail_831_;
goto _start;
}
else
{
lean_object* v___x_842_; 
lean_inc(v_value_830_);
v___x_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_842_, 0, v_value_830_);
return v___x_842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg___boxed(lean_object* v_a_843_, lean_object* v_x_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(v_a_843_, v_x_844_);
lean_dec(v_x_844_);
lean_dec_ref(v_a_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(lean_object* v_m_846_, lean_object* v_a_847_){
_start:
{
lean_object* v_buckets_848_; lean_object* v_fst_849_; lean_object* v_snd_850_; lean_object* v___x_851_; size_t v___x_852_; size_t v___x_853_; size_t v___x_854_; uint64_t v___x_855_; uint64_t v___x_856_; uint64_t v___x_857_; uint64_t v___x_858_; uint64_t v___x_859_; uint64_t v_fold_860_; uint64_t v___x_861_; uint64_t v___x_862_; uint64_t v___x_863_; size_t v___x_864_; size_t v___x_865_; size_t v___x_866_; size_t v___x_867_; size_t v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v_buckets_848_ = lean_ctor_get(v_m_846_, 1);
v_fst_849_ = lean_ctor_get(v_a_847_, 0);
v_snd_850_ = lean_ctor_get(v_a_847_, 1);
v___x_851_ = lean_array_get_size(v_buckets_848_);
v___x_852_ = lean_ptr_addr(v_fst_849_);
v___x_853_ = ((size_t)3ULL);
v___x_854_ = lean_usize_shift_right(v___x_852_, v___x_853_);
v___x_855_ = lean_usize_to_uint64(v___x_854_);
v___x_856_ = lean_uint64_of_nat(v_snd_850_);
v___x_857_ = lean_uint64_mix_hash(v___x_855_, v___x_856_);
v___x_858_ = 32ULL;
v___x_859_ = lean_uint64_shift_right(v___x_857_, v___x_858_);
v_fold_860_ = lean_uint64_xor(v___x_857_, v___x_859_);
v___x_861_ = 16ULL;
v___x_862_ = lean_uint64_shift_right(v_fold_860_, v___x_861_);
v___x_863_ = lean_uint64_xor(v_fold_860_, v___x_862_);
v___x_864_ = lean_uint64_to_usize(v___x_863_);
v___x_865_ = lean_usize_of_nat(v___x_851_);
v___x_866_ = ((size_t)1ULL);
v___x_867_ = lean_usize_sub(v___x_865_, v___x_866_);
v___x_868_ = lean_usize_land(v___x_864_, v___x_867_);
v___x_869_ = lean_array_uget_borrowed(v_buckets_848_, v___x_868_);
v___x_870_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(v_a_847_, v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg___boxed(lean_object* v_m_871_, lean_object* v_a_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(v_m_871_, v_a_872_);
lean_dec_ref(v_a_872_);
lean_dec_ref(v_m_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(lean_object* v_rhs_874_, lean_object* v_op_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_){
_start:
{
lean_object* v_numConst_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v_key_887_; lean_object* v___x_888_; lean_object* v_latticeBackwardRuleCache_889_; lean_object* v___x_890_; 
v_numConst_884_ = lean_ctor_get(v_op_875_, 1);
v___x_885_ = l_Lean_Expr_getAppPrefix(v_rhs_874_, v_numConst_884_);
v___x_886_ = l_Lean_Expr_getAppNumArgs(v_rhs_874_);
v_key_887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_887_, 0, v___x_885_);
lean_ctor_set(v_key_887_, 1, v___x_886_);
v___x_888_ = lean_st_ref_get(v_a_876_);
v_latticeBackwardRuleCache_889_ = lean_ctor_get(v___x_888_, 2);
lean_inc_ref(v_latticeBackwardRuleCache_889_);
lean_dec(v___x_888_);
v___x_890_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(v_latticeBackwardRuleCache_889_, v_key_887_);
lean_dec_ref(v_latticeBackwardRuleCache_889_);
if (lean_obj_tag(v___x_890_) == 1)
{
lean_object* v_val_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_dec_ref_known(v_key_887_, 2);
lean_dec_ref(v_op_875_);
lean_dec_ref(v_rhs_874_);
v_val_891_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_890_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_val_891_);
lean_dec(v___x_890_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set_tag(v___x_893_, 0);
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_val_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
else
{
lean_object* v___x_899_; 
lean_dec(v___x_890_);
v___x_899_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRule(v_rhs_874_, v_op_875_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_901_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = l_Lean_Meta_Sym_BackwardRule_shareCommon(v_a_900_, v_a_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_, v_a_882_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_929_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_929_ == 0)
{
v___x_904_ = v___x_901_;
v_isShared_905_ = v_isSharedCheck_929_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_901_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_929_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_906_; lean_object* v_specBackwardRuleCache_907_; lean_object* v_splitBackwardRuleCache_908_; lean_object* v_latticeBackwardRuleCache_909_; lean_object* v_frameBackwardRuleCache_910_; lean_object* v_frameDB_911_; lean_object* v_invariants_912_; lean_object* v_vcs_913_; lean_object* v_simpState_914_; lean_object* v_fuel_915_; lean_object* v_inlineHandledInvariants_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_928_; 
v___x_906_ = lean_st_ref_take(v_a_876_);
v_specBackwardRuleCache_907_ = lean_ctor_get(v___x_906_, 0);
v_splitBackwardRuleCache_908_ = lean_ctor_get(v___x_906_, 1);
v_latticeBackwardRuleCache_909_ = lean_ctor_get(v___x_906_, 2);
v_frameBackwardRuleCache_910_ = lean_ctor_get(v___x_906_, 3);
v_frameDB_911_ = lean_ctor_get(v___x_906_, 4);
v_invariants_912_ = lean_ctor_get(v___x_906_, 5);
v_vcs_913_ = lean_ctor_get(v___x_906_, 6);
v_simpState_914_ = lean_ctor_get(v___x_906_, 7);
v_fuel_915_ = lean_ctor_get(v___x_906_, 8);
v_inlineHandledInvariants_916_ = lean_ctor_get(v___x_906_, 9);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_928_ == 0)
{
v___x_918_ = v___x_906_;
v_isShared_919_ = v_isSharedCheck_928_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_inlineHandledInvariants_916_);
lean_inc(v_fuel_915_);
lean_inc(v_simpState_914_);
lean_inc(v_vcs_913_);
lean_inc(v_invariants_912_);
lean_inc(v_frameDB_911_);
lean_inc(v_frameBackwardRuleCache_910_);
lean_inc(v_latticeBackwardRuleCache_909_);
lean_inc(v_splitBackwardRuleCache_908_);
lean_inc(v_specBackwardRuleCache_907_);
lean_dec(v___x_906_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_928_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; lean_object* v___x_922_; 
lean_inc(v_a_902_);
v___x_920_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(v_latticeBackwardRuleCache_909_, v_key_887_, v_a_902_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 2, v___x_920_);
v___x_922_ = v___x_918_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_specBackwardRuleCache_907_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_splitBackwardRuleCache_908_);
lean_ctor_set(v_reuseFailAlloc_927_, 2, v___x_920_);
lean_ctor_set(v_reuseFailAlloc_927_, 3, v_frameBackwardRuleCache_910_);
lean_ctor_set(v_reuseFailAlloc_927_, 4, v_frameDB_911_);
lean_ctor_set(v_reuseFailAlloc_927_, 5, v_invariants_912_);
lean_ctor_set(v_reuseFailAlloc_927_, 6, v_vcs_913_);
lean_ctor_set(v_reuseFailAlloc_927_, 7, v_simpState_914_);
lean_ctor_set(v_reuseFailAlloc_927_, 8, v_fuel_915_);
lean_ctor_set(v_reuseFailAlloc_927_, 9, v_inlineHandledInvariants_916_);
v___x_922_ = v_reuseFailAlloc_927_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_923_ = lean_st_ref_put(v_a_876_, v___x_922_);
if (v_isShared_905_ == 0)
{
v___x_925_ = v___x_904_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_902_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_887_, 2);
return v___x_901_;
}
}
else
{
lean_dec_ref_known(v_key_887_, 2);
return v___x_899_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg___boxed(lean_object* v_rhs_930_, lean_object* v_op_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(v_rhs_930_, v_op_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec(v_a_934_);
lean_dec_ref(v_a_933_);
lean_dec(v_a_932_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached(lean_object* v_rhs_941_, lean_object* v_op_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(v_rhs_941_, v_op_942_, v_a_944_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___boxed(lean_object* v_rhs_956_, lean_object* v_op_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached(v_rhs_956_, v_op_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_);
lean_dec(v_a_968_);
lean_dec_ref(v_a_967_);
lean_dec(v_a_966_);
lean_dec_ref(v_a_965_);
lean_dec(v_a_964_);
lean_dec_ref(v_a_963_);
lean_dec(v_a_962_);
lean_dec_ref(v_a_961_);
lean_dec(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0(lean_object* v_00_u03b2_971_, lean_object* v_m_972_, lean_object* v_a_973_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(v_m_972_, v_a_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___boxed(lean_object* v_00_u03b2_975_, lean_object* v_m_976_, lean_object* v_a_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0(v_00_u03b2_975_, v_m_976_, v_a_977_);
lean_dec_ref(v_a_977_);
lean_dec_ref(v_m_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1(lean_object* v_00_u03b2_979_, lean_object* v_m_980_, lean_object* v_a_981_, lean_object* v_b_982_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(v_m_980_, v_a_981_, v_b_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0(lean_object* v_00_u03b2_984_, lean_object* v_a_985_, lean_object* v_x_986_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(v_a_985_, v_x_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___boxed(lean_object* v_00_u03b2_988_, lean_object* v_a_989_, lean_object* v_x_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0(v_00_u03b2_988_, v_a_989_, v_x_990_);
lean_dec(v_x_990_);
lean_dec_ref(v_a_989_);
return v_res_991_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2(lean_object* v_00_u03b2_992_, lean_object* v_a_993_, lean_object* v_x_994_){
_start:
{
uint8_t v___x_995_; 
v___x_995_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(v_a_993_, v_x_994_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___boxed(lean_object* v_00_u03b2_996_, lean_object* v_a_997_, lean_object* v_x_998_){
_start:
{
uint8_t v_res_999_; lean_object* v_r_1000_; 
v_res_999_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2(v_00_u03b2_996_, v_a_997_, v_x_998_);
lean_dec(v_x_998_);
lean_dec_ref(v_a_997_);
v_r_1000_ = lean_box(v_res_999_);
return v_r_1000_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3(lean_object* v_00_u03b2_1001_, lean_object* v_data_1002_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3___redArg(v_data_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4(lean_object* v_00_u03b2_1004_, lean_object* v_a_1005_, lean_object* v_b_1006_, lean_object* v_x_1007_){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(v_a_1005_, v_b_1006_, v_x_1007_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1009_, lean_object* v_i_1010_, lean_object* v_source_1011_, lean_object* v_target_1012_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4___redArg(v_i_1010_, v_source_1011_, v_target_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1014_, lean_object* v_x_1015_, lean_object* v_x_1016_){
_start:
{
lean_object* v___x_1017_; 
v___x_1017_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5___redArg(v_x_1015_, v_x_1016_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg(lean_object* v_fp_1018_, lean_object* v_info_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_){
_start:
{
lean_object* v_excessArgs_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v_key_1031_; lean_object* v___x_1032_; lean_object* v_frameBackwardRuleCache_1033_; lean_object* v___x_1034_; 
v_excessArgs_1028_ = lean_ctor_get(v_info_1019_, 3);
v___x_1029_ = l_Lean_Elab_Tactic_VCGen_WPApp_instWP(v_info_1019_);
v___x_1030_ = lean_array_get_size(v_excessArgs_1028_);
v_key_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_1031_, 0, v___x_1029_);
lean_ctor_set(v_key_1031_, 1, v___x_1030_);
v___x_1032_ = lean_st_ref_get(v_a_1020_);
v_frameBackwardRuleCache_1033_ = lean_ctor_get(v___x_1032_, 3);
lean_inc_ref(v_frameBackwardRuleCache_1033_);
lean_dec(v___x_1032_);
v___x_1034_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(v_frameBackwardRuleCache_1033_, v_key_1031_);
lean_dec_ref(v_frameBackwardRuleCache_1033_);
if (lean_obj_tag(v___x_1034_) == 1)
{
lean_object* v_val_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec_ref_known(v_key_1031_, 2);
lean_dec_ref(v_info_1019_);
lean_dec_ref(v_fp_1018_);
v_val_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_val_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
lean_ctor_set_tag(v___x_1037_, 0);
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_val_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
else
{
lean_object* v___x_1043_; 
lean_dec(v___x_1034_);
v___x_1043_ = l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRule(v_fp_1018_, v_info_1019_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v_a_1044_; lean_object* v_rule_1045_; lean_object* v_splitVCIdx_1046_; lean_object* v_frameIdx_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1091_; 
v_a_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_a_1044_);
lean_dec_ref_known(v___x_1043_, 1);
v_rule_1045_ = lean_ctor_get(v_a_1044_, 0);
v_splitVCIdx_1046_ = lean_ctor_get(v_a_1044_, 1);
v_frameIdx_1047_ = lean_ctor_get(v_a_1044_, 2);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_a_1044_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1049_ = v_a_1044_;
v_isShared_1050_ = v_isSharedCheck_1091_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_frameIdx_1047_);
lean_inc(v_splitVCIdx_1046_);
lean_inc(v_rule_1045_);
lean_dec(v_a_1044_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1091_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lean_Meta_Sym_BackwardRule_shareCommon(v_rule_1045_, v_a_1021_, v_a_1022_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1082_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1054_ = v___x_1051_;
v_isShared_1055_ = v_isSharedCheck_1082_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1051_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1082_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 0, v_a_1052_);
v___x_1057_ = v___x_1049_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1052_);
lean_ctor_set(v_reuseFailAlloc_1081_, 1, v_splitVCIdx_1046_);
lean_ctor_set(v_reuseFailAlloc_1081_, 2, v_frameIdx_1047_);
v___x_1057_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
lean_object* v___x_1058_; lean_object* v_specBackwardRuleCache_1059_; lean_object* v_splitBackwardRuleCache_1060_; lean_object* v_latticeBackwardRuleCache_1061_; lean_object* v_frameBackwardRuleCache_1062_; lean_object* v_frameDB_1063_; lean_object* v_invariants_1064_; lean_object* v_vcs_1065_; lean_object* v_simpState_1066_; lean_object* v_fuel_1067_; lean_object* v_inlineHandledInvariants_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1080_; 
v___x_1058_ = lean_st_ref_take(v_a_1020_);
v_specBackwardRuleCache_1059_ = lean_ctor_get(v___x_1058_, 0);
v_splitBackwardRuleCache_1060_ = lean_ctor_get(v___x_1058_, 1);
v_latticeBackwardRuleCache_1061_ = lean_ctor_get(v___x_1058_, 2);
v_frameBackwardRuleCache_1062_ = lean_ctor_get(v___x_1058_, 3);
v_frameDB_1063_ = lean_ctor_get(v___x_1058_, 4);
v_invariants_1064_ = lean_ctor_get(v___x_1058_, 5);
v_vcs_1065_ = lean_ctor_get(v___x_1058_, 6);
v_simpState_1066_ = lean_ctor_get(v___x_1058_, 7);
v_fuel_1067_ = lean_ctor_get(v___x_1058_, 8);
v_inlineHandledInvariants_1068_ = lean_ctor_get(v___x_1058_, 9);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1070_ = v___x_1058_;
v_isShared_1071_ = v_isSharedCheck_1080_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_inlineHandledInvariants_1068_);
lean_inc(v_fuel_1067_);
lean_inc(v_simpState_1066_);
lean_inc(v_vcs_1065_);
lean_inc(v_invariants_1064_);
lean_inc(v_frameDB_1063_);
lean_inc(v_frameBackwardRuleCache_1062_);
lean_inc(v_latticeBackwardRuleCache_1061_);
lean_inc(v_splitBackwardRuleCache_1060_);
lean_inc(v_specBackwardRuleCache_1059_);
lean_dec(v___x_1058_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1080_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1072_; lean_object* v___x_1074_; 
lean_inc_ref(v___x_1057_);
v___x_1072_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(v_frameBackwardRuleCache_1062_, v_key_1031_, v___x_1057_);
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 3, v___x_1072_);
v___x_1074_ = v___x_1070_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_specBackwardRuleCache_1059_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_splitBackwardRuleCache_1060_);
lean_ctor_set(v_reuseFailAlloc_1079_, 2, v_latticeBackwardRuleCache_1061_);
lean_ctor_set(v_reuseFailAlloc_1079_, 3, v___x_1072_);
lean_ctor_set(v_reuseFailAlloc_1079_, 4, v_frameDB_1063_);
lean_ctor_set(v_reuseFailAlloc_1079_, 5, v_invariants_1064_);
lean_ctor_set(v_reuseFailAlloc_1079_, 6, v_vcs_1065_);
lean_ctor_set(v_reuseFailAlloc_1079_, 7, v_simpState_1066_);
lean_ctor_set(v_reuseFailAlloc_1079_, 8, v_fuel_1067_);
lean_ctor_set(v_reuseFailAlloc_1079_, 9, v_inlineHandledInvariants_1068_);
v___x_1074_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1075_ = lean_st_ref_put(v_a_1020_, v___x_1074_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1057_);
v___x_1077_ = v___x_1054_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1057_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
lean_del_object(v___x_1049_);
lean_dec(v_frameIdx_1047_);
lean_dec(v_splitVCIdx_1046_);
lean_dec_ref_known(v_key_1031_, 2);
v_a_1083_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1051_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1051_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_1031_, 2);
return v___x_1043_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg___boxed(lean_object* v_fp_1092_, lean_object* v_info_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg(v_fp_1092_, v_info_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_);
lean_dec(v_a_1100_);
lean_dec_ref(v_a_1099_);
lean_dec(v_a_1098_);
lean_dec_ref(v_a_1097_);
lean_dec(v_a_1096_);
lean_dec_ref(v_a_1095_);
lean_dec(v_a_1094_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached(lean_object* v_fp_1103_, lean_object* v_info_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_){
_start:
{
lean_object* v___x_1117_; 
v___x_1117_ = l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg(v_fp_1103_, v_info_1104_, v_a_1106_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___boxed(lean_object* v_fp_1118_, lean_object* v_info_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached(v_fp_1118_, v_info_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_);
lean_dec(v_a_1130_);
lean_dec_ref(v_a_1129_);
lean_dec(v_a_1128_);
lean_dec_ref(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
lean_dec(v_a_1124_);
lean_dec_ref(v_a_1123_);
lean_dec(v_a_1122_);
lean_dec(v_a_1121_);
lean_dec_ref(v_a_1120_);
return v_res_1132_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_RuleConstruction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_LatticeOp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_RuleConstruction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_LatticeOp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_RuleConstruction(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_LatticeOp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_RuleConstruction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_LatticeOp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_VCGen_RuleCache(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.ApplyControlFlow
// Imports: public import Lean.Meta.Tactic.Simp import Init.ByCases import Init.Omega public import Lean.Meta.Sym.Simp.SimpM
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__2;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "apply_ite"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(228, 253, 97, 171, 128, 176, 200, 75)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__5 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__2;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__3_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "apply_cond"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(206, 139, 57, 144, 52, 240, 188, 35)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__5 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_key_4_; lean_object* v_tail_5_; uint8_t v___x_6_; 
v_key_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v___x_6_ = lean_name_eq(v_key_4_, v_a_1_);
if (v___x_6_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0___redArg___boxed(lean_object* v_a_8_, lean_object* v_x_9_){
_start:
{
uint8_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0___redArg(v_a_8_, v_x_9_);
lean_dec(v_x_9_);
lean_dec(v_a_8_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___redArg(lean_object* v_m_12_, lean_object* v_a_13_){
_start:
{
lean_object* v_buckets_14_; lean_object* v___x_15_; uint64_t v___y_17_; lean_object* v___x_31_; 
v_buckets_14_ = lean_ctor_get(v_m_12_, 1);
v___x_15_ = lean_array_get_size(v_buckets_14_);
v___x_31_ = l_unsafeCast___redArg(v_a_13_);
if (lean_obj_tag(v___x_31_) == 0)
{
uint64_t v___x_32_; 
v___x_32_ = 1723ULL;
v___y_17_ = v___x_32_;
goto v___jp_16_;
}
else
{
uint64_t v_hash_33_; 
v_hash_33_ = lean_ctor_get_uint64(v___x_31_, sizeof(void*)*2);
lean_dec(v___x_31_);
v___y_17_ = v_hash_33_;
goto v___jp_16_;
}
v___jp_16_:
{
uint64_t v___x_18_; uint64_t v___x_19_; uint64_t v_fold_20_; uint64_t v___x_21_; uint64_t v___x_22_; uint64_t v___x_23_; size_t v___x_24_; size_t v___x_25_; size_t v___x_26_; size_t v___x_27_; size_t v___x_28_; lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_18_ = 32ULL;
v___x_19_ = lean_uint64_shift_right(v___y_17_, v___x_18_);
v_fold_20_ = lean_uint64_xor(v___y_17_, v___x_19_);
v___x_21_ = 16ULL;
v___x_22_ = lean_uint64_shift_right(v_fold_20_, v___x_21_);
v___x_23_ = lean_uint64_xor(v_fold_20_, v___x_22_);
v___x_24_ = lean_uint64_to_usize(v___x_23_);
v___x_25_ = lean_usize_of_nat(v___x_15_);
v___x_26_ = ((size_t)1ULL);
v___x_27_ = lean_usize_sub(v___x_25_, v___x_26_);
v___x_28_ = lean_usize_land(v___x_24_, v___x_27_);
v___x_29_ = lean_array_uget_borrowed(v_buckets_14_, v___x_28_);
v___x_30_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0___redArg(v_a_13_, v___x_29_);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___redArg___boxed(lean_object* v_m_34_, lean_object* v_a_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___redArg(v_m_34_, v_a_35_);
lean_dec(v_a_35_);
lean_dec_ref(v_m_34_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_41_ = lean_box(0);
v___x_42_ = lean_unsigned_to_nat(5u);
v___x_43_ = lean_mk_empty_array_with_capacity(v___x_42_);
v___x_44_ = lean_array_push(v___x_43_, v___x_41_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg(lean_object* v_headSyms_50_, lean_object* v_x_51_, lean_object* v_x_52_, lean_object* v_x_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
if (lean_obj_tag(v_x_51_) == 5)
{
lean_object* v_fn_61_; lean_object* v_arg_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v_fn_61_ = lean_ctor_get(v_x_51_, 0);
lean_inc_ref(v_fn_61_);
v_arg_62_ = lean_ctor_get(v_x_51_, 1);
lean_inc_ref(v_arg_62_);
lean_dec_ref_known(v_x_51_, 2);
v___x_63_ = lean_array_set(v_x_52_, v_x_53_, v_arg_62_);
v___x_64_ = lean_unsigned_to_nat(1u);
v___x_65_ = lean_nat_sub(v_x_53_, v___x_64_);
lean_dec(v_x_53_);
v_x_51_ = v_fn_61_;
v_x_52_ = v___x_63_;
v_x_53_ = v___x_65_;
goto _start;
}
else
{
lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
lean_dec(v_x_53_);
v___x_67_ = lean_array_get_size(v_x_52_);
v___x_68_ = lean_unsigned_to_nat(0u);
v___x_69_ = lean_nat_dec_eq(v___x_67_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_73_ = lean_unsigned_to_nat(1u);
v___x_74_ = lean_nat_sub(v___x_67_, v___x_73_);
v___x_75_ = lean_array_fget_borrowed(v_x_52_, v___x_74_);
lean_dec(v___x_74_);
lean_inc(v___x_75_);
v___x_76_ = l_Lean_Expr_cleanupAnnotations(v___x_75_);
v___x_77_ = l_Lean_Expr_isApp(v___x_76_);
if (v___x_77_ == 0)
{
lean_dec_ref(v___x_76_);
lean_dec_ref(v_x_52_);
lean_dec_ref(v_x_51_);
goto v___jp_70_;
}
else
{
lean_object* v_arg_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v_arg_78_ = lean_ctor_get(v___x_76_, 1);
lean_inc_ref(v_arg_78_);
v___x_79_ = l_Lean_Expr_appFnCleanup___redArg(v___x_76_);
v___x_80_ = l_Lean_Expr_isApp(v___x_79_);
if (v___x_80_ == 0)
{
lean_dec_ref(v___x_79_);
lean_dec_ref(v_arg_78_);
lean_dec_ref(v_x_52_);
lean_dec_ref(v_x_51_);
goto v___jp_70_;
}
else
{
lean_object* v_arg_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v_arg_81_ = lean_ctor_get(v___x_79_, 1);
lean_inc_ref(v_arg_81_);
v___x_82_ = l_Lean_Expr_appFnCleanup___redArg(v___x_79_);
v___x_83_ = l_Lean_Expr_isApp(v___x_82_);
if (v___x_83_ == 0)
{
lean_dec_ref(v___x_82_);
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_78_);
lean_dec_ref(v_x_52_);
lean_dec_ref(v_x_51_);
goto v___jp_70_;
}
else
{
lean_object* v_arg_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_arg_84_ = lean_ctor_get(v___x_82_, 1);
lean_inc_ref(v_arg_84_);
v___x_85_ = l_Lean_Expr_appFnCleanup___redArg(v___x_82_);
v___x_86_ = l_Lean_Expr_isApp(v___x_85_);
if (v___x_86_ == 0)
{
lean_dec_ref(v___x_85_);
lean_dec_ref(v_arg_84_);
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_78_);
lean_dec_ref(v_x_52_);
lean_dec_ref(v_x_51_);
goto v___jp_70_;
}
else
{
lean_object* v_arg_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v_arg_87_ = lean_ctor_get(v___x_85_, 1);
lean_inc_ref(v_arg_87_);
v___x_88_ = l_Lean_Expr_appFnCleanup___redArg(v___x_85_);
v___x_89_ = l_Lean_Expr_isApp(v___x_88_);
if (v___x_89_ == 0)
{
lean_dec_ref(v___x_88_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_84_);
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_78_);
lean_dec_ref(v_x_52_);
lean_dec_ref(v_x_51_);
goto v___jp_70_;
}
else
{
lean_object* v_arg_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; 
v_arg_90_ = lean_ctor_get(v___x_88_, 1);
lean_inc_ref(v_arg_90_);
v___x_91_ = l_Lean_Expr_appFnCleanup___redArg(v___x_88_);
v___x_92_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__1));
v___x_93_ = l_Lean_Expr_isConstOf(v___x_91_, v___x_92_);
lean_dec_ref(v___x_91_);
if (v___x_93_ == 0)
{
lean_dec_ref(v_arg_90_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_84_);
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_78_);
lean_dec_ref(v_x_52_);
lean_dec_ref(v_x_51_);
goto v___jp_70_;
}
else
{
if (lean_obj_tag(v_x_51_) == 4)
{
lean_object* v_declName_94_; uint8_t v___x_95_; 
v_declName_94_ = lean_ctor_get(v_x_51_, 0);
v___x_95_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___redArg(v_headSyms_50_, v_declName_94_);
if (v___x_95_ == 0)
{
lean_object* v___x_96_; lean_object* v___x_97_; 
lean_dec_ref_known(v_x_51_, 2);
lean_dec_ref(v_arg_90_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_84_);
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_78_);
lean_dec_ref(v_x_52_);
v___x_96_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_96_, 0, v___x_95_);
lean_ctor_set_uint8(v___x_96_, 1, v___x_95_);
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
return v___x_97_;
}
else
{
lean_object* v_params_98_; lean_object* v_fnApp_99_; lean_object* v_newT_100_; lean_object* v_newE_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v_params_98_ = lean_array_pop(v_x_52_);
v_fnApp_99_ = l_Lean_mkAppN(v_x_51_, v_params_98_);
lean_dec_ref(v_params_98_);
lean_inc_ref(v_arg_81_);
lean_inc_ref_n(v_fnApp_99_, 2);
v_newT_100_ = l_Lean_Expr_app___override(v_fnApp_99_, v_arg_81_);
lean_inc_ref(v_arg_78_);
v_newE_101_ = l_Lean_Expr_app___override(v_fnApp_99_, v_arg_78_);
v___x_102_ = lean_box(0);
v___x_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_103_, 0, v_arg_87_);
v___x_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_104_, 0, v_arg_84_);
v___x_105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_105_, 0, v_newT_100_);
v___x_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_106_, 0, v_newE_101_);
v___x_107_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__2, &l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__2);
lean_inc_ref(v___x_103_);
v___x_108_ = lean_array_push(v___x_107_, v___x_103_);
lean_inc_ref(v___x_104_);
v___x_109_ = lean_array_push(v___x_108_, v___x_104_);
v___x_110_ = lean_array_push(v___x_109_, v___x_105_);
v___x_111_ = lean_array_push(v___x_110_, v___x_106_);
v___x_112_ = l_Lean_Meta_mkAppOptM(v___x_92_, v___x_111_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v_a_113_; lean_object* v___x_114_; 
v_a_113_ = lean_ctor_get(v___x_112_, 0);
lean_inc(v_a_113_);
lean_dec_ref_known(v___x_112_, 1);
v___x_114_ = l_Lean_Meta_Sym_shareCommonInc(v_a_113_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_a_115_ = lean_ctor_get(v___x_114_, 0);
lean_inc(v_a_115_);
lean_dec_ref_known(v___x_114_, 1);
v___x_116_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__4));
v___x_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_117_, 0, v_arg_90_);
v___x_118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_118_, 0, v_fnApp_99_);
v___x_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_119_, 0, v_arg_81_);
v___x_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_120_, 0, v_arg_78_);
v___x_121_ = lean_unsigned_to_nat(7u);
v___x_122_ = lean_mk_empty_array_with_capacity(v___x_121_);
v___x_123_ = lean_array_push(v___x_122_, v___x_117_);
v___x_124_ = lean_array_push(v___x_123_, v___x_102_);
v___x_125_ = lean_array_push(v___x_124_, v___x_118_);
v___x_126_ = lean_array_push(v___x_125_, v___x_103_);
v___x_127_ = lean_array_push(v___x_126_, v___x_104_);
v___x_128_ = lean_array_push(v___x_127_, v___x_119_);
v___x_129_ = lean_array_push(v___x_128_, v___x_120_);
v___x_130_ = l_Lean_Meta_mkAppOptM(v___x_116_, v___x_129_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_139_; 
v_a_131_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_139_ == 0)
{
v___x_133_ = v___x_130_;
v_isShared_134_ = v_isSharedCheck_139_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_130_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_139_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_135_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_135_, 0, v_a_115_);
lean_ctor_set(v___x_135_, 1, v_a_131_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*2, v___x_69_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*2 + 1, v___x_69_);
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 0, v___x_135_);
v___x_137_ = v___x_133_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v_a_115_);
v_a_140_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_130_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_130_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_dec_ref_known(v___x_104_, 1);
lean_dec_ref_known(v___x_103_, 1);
lean_dec_ref(v_fnApp_99_);
lean_dec_ref(v_arg_90_);
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_78_);
v_a_148_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_114_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_114_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
lean_dec_ref_known(v___x_104_, 1);
lean_dec_ref_known(v___x_103_, 1);
lean_dec_ref(v_fnApp_99_);
lean_dec_ref(v_arg_90_);
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_78_);
v_a_156_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_112_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_112_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
}
else
{
lean_object* v___x_164_; lean_object* v___x_165_; 
lean_dec_ref(v_arg_90_);
lean_dec_ref(v_arg_87_);
lean_dec_ref(v_arg_84_);
lean_dec_ref(v_arg_81_);
lean_dec_ref(v_arg_78_);
lean_dec_ref(v_x_52_);
lean_dec_ref(v_x_51_);
v___x_164_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_164_, 0, v___x_69_);
lean_ctor_set_uint8(v___x_164_, 1, v___x_69_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
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
lean_object* v___x_166_; lean_object* v___x_167_; 
lean_dec_ref(v_x_52_);
lean_dec_ref(v_x_51_);
v___x_166_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__5));
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
v___jp_70_:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_71_, 0, v___x_69_);
lean_ctor_set_uint8(v___x_71_, 1, v___x_69_);
v___x_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___boxed(lean_object* v_headSyms_168_, lean_object* v_x_169_, lean_object* v_x_170_, lean_object* v_x_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg(v_headSyms_168_, v_x_169_, v_x_170_, v_x_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec_ref(v_headSyms_168_);
return v_res_179_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__0(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_box(0);
v___x_181_ = l_unsafeCast___redArg(v___x_180_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__1(void){
_start:
{
lean_object* v___x_182_; lean_object* v_dummy_183_; 
v___x_182_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__0);
v_dummy_183_ = l_Lean_Expr_sort___override(v___x_182_);
return v_dummy_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc(lean_object* v_headSyms_184_, lean_object* v_e_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_dummy_196_; lean_object* v_nargs_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v_dummy_196_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__1);
v_nargs_197_ = l_Lean_Expr_getAppNumArgs(v_e_185_);
lean_inc(v_nargs_197_);
v___x_198_ = lean_mk_array(v_nargs_197_, v_dummy_196_);
v___x_199_ = lean_unsigned_to_nat(1u);
v___x_200_ = lean_nat_sub(v_nargs_197_, v___x_199_);
lean_dec(v_nargs_197_);
v___x_201_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg(v_headSyms_184_, v_e_185_, v___x_198_, v___x_200_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___boxed(lean_object* v_headSyms_202_, lean_object* v_e_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc(v_headSyms_202_, v_e_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_);
lean_dec(v_a_212_);
lean_dec_ref(v_a_211_);
lean_dec(v_a_210_);
lean_dec_ref(v_a_209_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
lean_dec(v_a_206_);
lean_dec_ref(v_a_205_);
lean_dec(v_a_204_);
lean_dec_ref(v_headSyms_202_);
return v_res_214_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0(lean_object* v_00_u03b2_215_, lean_object* v_m_216_, lean_object* v_a_217_){
_start:
{
uint8_t v___x_218_; 
v___x_218_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___redArg(v_m_216_, v_a_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___boxed(lean_object* v_00_u03b2_219_, lean_object* v_m_220_, lean_object* v_a_221_){
_start:
{
uint8_t v_res_222_; lean_object* v_r_223_; 
v_res_222_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0(v_00_u03b2_219_, v_m_220_, v_a_221_);
lean_dec(v_a_221_);
lean_dec_ref(v_m_220_);
v_r_223_ = lean_box(v_res_222_);
return v_r_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1(lean_object* v_headSyms_224_, lean_object* v_x_225_, lean_object* v_x_226_, lean_object* v_x_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg(v_headSyms_224_, v_x_225_, v_x_226_, v_x_227_, v___y_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___boxed(lean_object* v_headSyms_239_, lean_object* v_x_240_, lean_object* v_x_241_, lean_object* v_x_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1(v_headSyms_239_, v_x_240_, v_x_241_, v_x_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec(v___y_243_);
lean_dec_ref(v_headSyms_239_);
return v_res_253_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0(lean_object* v_00_u03b2_254_, lean_object* v_a_255_, lean_object* v_x_256_){
_start:
{
uint8_t v___x_257_; 
v___x_257_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0___redArg(v_a_255_, v_x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0___boxed(lean_object* v_00_u03b2_258_, lean_object* v_a_259_, lean_object* v_x_260_){
_start:
{
uint8_t v_res_261_; lean_object* v_r_262_; 
v_res_261_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0_spec__0(v_00_u03b2_258_, v_a_259_, v_x_260_);
lean_dec(v_x_260_);
lean_dec(v_a_259_);
v_r_262_ = lean_box(v_res_261_);
return v_r_262_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_266_ = lean_box(0);
v___x_267_ = lean_unsigned_to_nat(4u);
v___x_268_ = lean_mk_empty_array_with_capacity(v___x_267_);
v___x_269_ = lean_array_push(v___x_268_, v___x_266_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg(lean_object* v_headSyms_275_, lean_object* v_x_276_, lean_object* v_x_277_, lean_object* v_x_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
if (lean_obj_tag(v_x_276_) == 5)
{
lean_object* v_fn_286_; lean_object* v_arg_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v_fn_286_ = lean_ctor_get(v_x_276_, 0);
lean_inc_ref(v_fn_286_);
v_arg_287_ = lean_ctor_get(v_x_276_, 1);
lean_inc_ref(v_arg_287_);
lean_dec_ref_known(v_x_276_, 2);
v___x_288_ = lean_array_set(v_x_277_, v_x_278_, v_arg_287_);
v___x_289_ = lean_unsigned_to_nat(1u);
v___x_290_ = lean_nat_sub(v_x_278_, v___x_289_);
lean_dec(v_x_278_);
v_x_276_ = v_fn_286_;
v_x_277_ = v___x_288_;
v_x_278_ = v___x_290_;
goto _start;
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
lean_dec(v_x_278_);
v___x_292_ = lean_array_get_size(v_x_277_);
v___x_293_ = lean_unsigned_to_nat(0u);
v___x_294_ = lean_nat_dec_eq(v___x_292_, v___x_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_298_ = lean_unsigned_to_nat(1u);
v___x_299_ = lean_nat_sub(v___x_292_, v___x_298_);
v___x_300_ = lean_array_fget_borrowed(v_x_277_, v___x_299_);
lean_dec(v___x_299_);
lean_inc(v___x_300_);
v___x_301_ = l_Lean_Expr_cleanupAnnotations(v___x_300_);
v___x_302_ = l_Lean_Expr_isApp(v___x_301_);
if (v___x_302_ == 0)
{
lean_dec_ref(v___x_301_);
lean_dec_ref(v_x_277_);
lean_dec_ref(v_x_276_);
goto v___jp_295_;
}
else
{
lean_object* v_arg_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v_arg_303_ = lean_ctor_get(v___x_301_, 1);
lean_inc_ref(v_arg_303_);
v___x_304_ = l_Lean_Expr_appFnCleanup___redArg(v___x_301_);
v___x_305_ = l_Lean_Expr_isApp(v___x_304_);
if (v___x_305_ == 0)
{
lean_dec_ref(v___x_304_);
lean_dec_ref(v_arg_303_);
lean_dec_ref(v_x_277_);
lean_dec_ref(v_x_276_);
goto v___jp_295_;
}
else
{
lean_object* v_arg_306_; lean_object* v___x_307_; uint8_t v___x_308_; 
v_arg_306_ = lean_ctor_get(v___x_304_, 1);
lean_inc_ref(v_arg_306_);
v___x_307_ = l_Lean_Expr_appFnCleanup___redArg(v___x_304_);
v___x_308_ = l_Lean_Expr_isApp(v___x_307_);
if (v___x_308_ == 0)
{
lean_dec_ref(v___x_307_);
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_303_);
lean_dec_ref(v_x_277_);
lean_dec_ref(v_x_276_);
goto v___jp_295_;
}
else
{
lean_object* v_arg_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v_arg_309_ = lean_ctor_get(v___x_307_, 1);
lean_inc_ref(v_arg_309_);
v___x_310_ = l_Lean_Expr_appFnCleanup___redArg(v___x_307_);
v___x_311_ = l_Lean_Expr_isApp(v___x_310_);
if (v___x_311_ == 0)
{
lean_dec_ref(v___x_310_);
lean_dec_ref(v_arg_309_);
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_303_);
lean_dec_ref(v_x_277_);
lean_dec_ref(v_x_276_);
goto v___jp_295_;
}
else
{
lean_object* v_arg_312_; lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v_arg_312_ = lean_ctor_get(v___x_310_, 1);
lean_inc_ref(v_arg_312_);
v___x_313_ = l_Lean_Expr_appFnCleanup___redArg(v___x_310_);
v___x_314_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__1));
v___x_315_ = l_Lean_Expr_isConstOf(v___x_313_, v___x_314_);
lean_dec_ref(v___x_313_);
if (v___x_315_ == 0)
{
lean_dec_ref(v_arg_312_);
lean_dec_ref(v_arg_309_);
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_303_);
lean_dec_ref(v_x_277_);
lean_dec_ref(v_x_276_);
goto v___jp_295_;
}
else
{
if (lean_obj_tag(v_x_276_) == 4)
{
lean_object* v_declName_316_; uint8_t v___x_317_; 
v_declName_316_ = lean_ctor_get(v_x_276_, 0);
v___x_317_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__0___redArg(v_headSyms_275_, v_declName_316_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec_ref_known(v_x_276_, 2);
lean_dec_ref(v_arg_312_);
lean_dec_ref(v_arg_309_);
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_303_);
lean_dec_ref(v_x_277_);
v___x_318_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_318_, 0, v___x_317_);
lean_ctor_set_uint8(v___x_318_, 1, v___x_317_);
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
else
{
lean_object* v_params_320_; lean_object* v_fnApp_321_; lean_object* v_newT_322_; lean_object* v_newE_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v_params_320_ = lean_array_pop(v_x_277_);
v_fnApp_321_ = l_Lean_mkAppN(v_x_276_, v_params_320_);
lean_dec_ref(v_params_320_);
lean_inc_ref(v_arg_306_);
lean_inc_ref_n(v_fnApp_321_, 2);
v_newT_322_ = l_Lean_Expr_app___override(v_fnApp_321_, v_arg_306_);
lean_inc_ref(v_arg_303_);
v_newE_323_ = l_Lean_Expr_app___override(v_fnApp_321_, v_arg_303_);
v___x_324_ = lean_box(0);
v___x_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_325_, 0, v_arg_309_);
v___x_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_326_, 0, v_newT_322_);
v___x_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_327_, 0, v_newE_323_);
v___x_328_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__2, &l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__2);
lean_inc_ref(v___x_325_);
v___x_329_ = lean_array_push(v___x_328_, v___x_325_);
v___x_330_ = lean_array_push(v___x_329_, v___x_326_);
v___x_331_ = lean_array_push(v___x_330_, v___x_327_);
v___x_332_ = l_Lean_Meta_mkAppOptM(v___x_314_, v___x_331_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_334_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_332_, 1);
v___x_334_ = l_Lean_Meta_Sym_shareCommonInc(v_a_333_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v___x_334_, 1);
v___x_336_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___closed__5));
v___x_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_337_, 0, v_arg_312_);
v___x_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_338_, 0, v_fnApp_321_);
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v_arg_306_);
v___x_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_340_, 0, v_arg_303_);
v___x_341_ = lean_unsigned_to_nat(6u);
v___x_342_ = lean_mk_empty_array_with_capacity(v___x_341_);
v___x_343_ = lean_array_push(v___x_342_, v___x_337_);
v___x_344_ = lean_array_push(v___x_343_, v___x_324_);
v___x_345_ = lean_array_push(v___x_344_, v___x_338_);
v___x_346_ = lean_array_push(v___x_345_, v___x_325_);
v___x_347_ = lean_array_push(v___x_346_, v___x_339_);
v___x_348_ = lean_array_push(v___x_347_, v___x_340_);
v___x_349_ = l_Lean_Meta_mkAppOptM(v___x_336_, v___x_348_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_358_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_358_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_358_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_354_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_354_, 0, v_a_335_);
lean_ctor_set(v___x_354_, 1, v_a_350_);
lean_ctor_set_uint8(v___x_354_, sizeof(void*)*2, v___x_294_);
lean_ctor_set_uint8(v___x_354_, sizeof(void*)*2 + 1, v___x_294_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_354_);
v___x_356_ = v___x_352_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___x_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
lean_dec(v_a_335_);
v_a_359_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_349_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_349_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
lean_dec_ref_known(v___x_325_, 1);
lean_dec_ref(v_fnApp_321_);
lean_dec_ref(v_arg_312_);
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_303_);
v_a_367_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_334_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_334_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
lean_dec_ref_known(v___x_325_, 1);
lean_dec_ref(v_fnApp_321_);
lean_dec_ref(v_arg_312_);
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_303_);
v_a_375_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_332_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_332_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
else
{
lean_object* v___x_383_; lean_object* v___x_384_; 
lean_dec_ref(v_arg_312_);
lean_dec_ref(v_arg_309_);
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_303_);
lean_dec_ref(v_x_277_);
lean_dec_ref(v_x_276_);
v___x_383_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_383_, 0, v___x_294_);
lean_ctor_set_uint8(v___x_383_, 1, v___x_294_);
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
return v___x_384_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; 
lean_dec_ref(v_x_277_);
lean_dec_ref(v_x_276_);
v___x_385_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc_spec__1___redArg___closed__5));
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
return v___x_386_;
}
v___jp_295_:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_296_, 0, v___x_294_);
lean_ctor_set_uint8(v___x_296_, 1, v___x_294_);
v___x_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
return v___x_297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg___boxed(lean_object* v_headSyms_387_, lean_object* v_x_388_, lean_object* v_x_389_, lean_object* v_x_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg(v_headSyms_387_, v_x_388_, v_x_389_, v_x_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec_ref(v_headSyms_387_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc(lean_object* v_headSyms_399_, lean_object* v_e_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_dummy_411_; lean_object* v_nargs_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v_dummy_411_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_applyIteSimproc___closed__1);
v_nargs_412_ = l_Lean_Expr_getAppNumArgs(v_e_400_);
lean_inc(v_nargs_412_);
v___x_413_ = lean_mk_array(v_nargs_412_, v_dummy_411_);
v___x_414_ = lean_unsigned_to_nat(1u);
v___x_415_ = lean_nat_sub(v_nargs_412_, v___x_414_);
lean_dec(v_nargs_412_);
v___x_416_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg(v_headSyms_399_, v_e_400_, v___x_413_, v___x_415_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc___boxed(lean_object* v_headSyms_417_, lean_object* v_e_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc(v_headSyms_417_, v_e_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
lean_dec(v_a_421_);
lean_dec_ref(v_a_420_);
lean_dec(v_a_419_);
lean_dec_ref(v_headSyms_417_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0(lean_object* v_headSyms_430_, lean_object* v_x_431_, lean_object* v_x_432_, lean_object* v_x_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___redArg(v_headSyms_430_, v_x_431_, v_x_432_, v_x_433_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0___boxed(lean_object* v_headSyms_445_, lean_object* v_x_446_, lean_object* v_x_447_, lean_object* v_x_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_Tactic_BVDecide_Normalize_applyCondSimproc_spec__0(v_headSyms_445_, v_x_446_, v_x_447_, v_x_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v_headSyms_445_);
return v_res_459_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Init_ByCases(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Init_ByCases(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_ByCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_ApplyControlFlow(builtin);
}
#ifdef __cplusplus
}
#endif

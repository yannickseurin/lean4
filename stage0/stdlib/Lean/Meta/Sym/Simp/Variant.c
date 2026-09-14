// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Variant
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.ScopedEnvExtension
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
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "symSimpVariantExtension"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(94, 101, 167, 211, 231, 20, 82, 40)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_symSimpVariantExtension;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_box(0);
v___x_10_ = l_unsafeCast___redArg(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__1(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariant_default));
v___x_12_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__0);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set(v___x_13_, 1, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__1, &l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__1_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default___closed__1);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default;
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object* v_x_16_, lean_object* v_a_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_18_, 0, v_a_17_);
lean_inc_ref_n(v___x_18_, 2);
v___x_19_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
lean_ctor_set(v___x_19_, 2, v___x_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object* v_x_20_, lean_object* v_a_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(v_x_20_, v_a_21_);
lean_dec_ref(v_x_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object* v_a_23_, lean_object* v_b_24_, lean_object* v_x_25_){
_start:
{
if (lean_obj_tag(v_x_25_) == 0)
{
lean_dec(v_b_24_);
lean_dec(v_a_23_);
return v_x_25_;
}
else
{
lean_object* v_key_26_; lean_object* v_value_27_; lean_object* v_tail_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_40_; 
v_key_26_ = lean_ctor_get(v_x_25_, 0);
v_value_27_ = lean_ctor_get(v_x_25_, 1);
v_tail_28_ = lean_ctor_get(v_x_25_, 2);
v_isSharedCheck_40_ = !lean_is_exclusive(v_x_25_);
if (v_isSharedCheck_40_ == 0)
{
v___x_30_ = v_x_25_;
v_isShared_31_ = v_isSharedCheck_40_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_tail_28_);
lean_inc(v_value_27_);
lean_inc(v_key_26_);
lean_dec(v_x_25_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_40_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
uint8_t v___x_32_; 
v___x_32_ = lean_name_eq(v_key_26_, v_a_23_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(v_a_23_, v_b_24_, v_tail_28_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 2, v___x_33_);
v___x_35_ = v___x_30_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_key_26_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v_value_27_);
lean_ctor_set(v_reuseFailAlloc_36_, 2, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
else
{
lean_object* v___x_38_; 
lean_dec(v_value_27_);
lean_dec(v_key_26_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 1, v_b_24_);
lean_ctor_set(v___x_30_, 0, v_a_23_);
v___x_38_ = v___x_30_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_a_23_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_b_24_);
lean_ctor_set(v_reuseFailAlloc_39_, 2, v_tail_28_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
if (lean_obj_tag(v_x_42_) == 0)
{
return v_x_41_;
}
else
{
lean_object* v_key_43_; lean_object* v_value_44_; lean_object* v_tail_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_72_; 
v_key_43_ = lean_ctor_get(v_x_42_, 0);
v_value_44_ = lean_ctor_get(v_x_42_, 1);
v_tail_45_ = lean_ctor_get(v_x_42_, 2);
v_isSharedCheck_72_ = !lean_is_exclusive(v_x_42_);
if (v_isSharedCheck_72_ == 0)
{
v___x_47_ = v_x_42_;
v_isShared_48_ = v_isSharedCheck_72_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_tail_45_);
lean_inc(v_value_44_);
lean_inc(v_key_43_);
lean_dec(v_x_42_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_72_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; uint64_t v___y_51_; lean_object* v___x_69_; 
v___x_49_ = lean_array_get_size(v_x_41_);
v___x_69_ = l_unsafeCast___redArg(v_key_43_);
if (lean_obj_tag(v___x_69_) == 0)
{
uint64_t v___x_70_; 
v___x_70_ = 1723ULL;
v___y_51_ = v___x_70_;
goto v___jp_50_;
}
else
{
uint64_t v_hash_71_; 
v_hash_71_ = lean_ctor_get_uint64(v___x_69_, sizeof(void*)*2);
lean_dec(v___x_69_);
v___y_51_ = v_hash_71_;
goto v___jp_50_;
}
v___jp_50_:
{
uint64_t v___x_52_; uint64_t v___x_53_; uint64_t v_fold_54_; uint64_t v___x_55_; uint64_t v___x_56_; uint64_t v___x_57_; size_t v___x_58_; size_t v___x_59_; size_t v___x_60_; size_t v___x_61_; size_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_52_ = 32ULL;
v___x_53_ = lean_uint64_shift_right(v___y_51_, v___x_52_);
v_fold_54_ = lean_uint64_xor(v___y_51_, v___x_53_);
v___x_55_ = 16ULL;
v___x_56_ = lean_uint64_shift_right(v_fold_54_, v___x_55_);
v___x_57_ = lean_uint64_xor(v_fold_54_, v___x_56_);
v___x_58_ = lean_uint64_to_usize(v___x_57_);
v___x_59_ = lean_usize_of_nat(v___x_49_);
v___x_60_ = ((size_t)1ULL);
v___x_61_ = lean_usize_sub(v___x_59_, v___x_60_);
v___x_62_ = lean_usize_land(v___x_58_, v___x_61_);
v___x_63_ = lean_array_uget_borrowed(v_x_41_, v___x_62_);
lean_inc(v___x_63_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 2, v___x_63_);
v___x_65_ = v___x_47_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_key_43_);
lean_ctor_set(v_reuseFailAlloc_68_, 1, v_value_44_);
lean_ctor_set(v_reuseFailAlloc_68_, 2, v___x_63_);
v___x_65_ = v_reuseFailAlloc_68_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; 
v___x_66_ = lean_array_uset(v_x_41_, v___x_62_, v___x_65_);
v_x_41_ = v___x_66_;
v_x_42_ = v_tail_45_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object* v_i_73_, lean_object* v_source_74_, lean_object* v_target_75_){
_start:
{
lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_76_ = lean_array_get_size(v_source_74_);
v___x_77_ = lean_nat_dec_lt(v_i_73_, v___x_76_);
if (v___x_77_ == 0)
{
lean_dec_ref(v_source_74_);
lean_dec(v_i_73_);
return v_target_75_;
}
else
{
lean_object* v_es_78_; lean_object* v___x_79_; lean_object* v_source_80_; lean_object* v_target_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v_es_78_ = lean_array_fget(v_source_74_, v_i_73_);
v___x_79_ = lean_box(0);
v_source_80_ = lean_array_fset(v_source_74_, v_i_73_, v___x_79_);
v_target_81_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(v_target_75_, v_es_78_);
v___x_82_ = lean_unsigned_to_nat(1u);
v___x_83_ = lean_nat_add(v_i_73_, v___x_82_);
lean_dec(v_i_73_);
v_i_73_ = v___x_83_;
v_source_74_ = v_source_80_;
v_target_75_ = v_target_81_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_data_85_){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v_nbuckets_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_86_ = lean_array_get_size(v_data_85_);
v___x_87_ = lean_unsigned_to_nat(2u);
v_nbuckets_88_ = lean_nat_mul(v___x_86_, v___x_87_);
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = lean_box(0);
v___x_91_ = lean_mk_array(v_nbuckets_88_, v___x_90_);
v___x_92_ = lean_array_propagate_mark(v_data_85_, v___x_91_);
v___x_93_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v___x_89_, v_data_85_, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_a_94_, lean_object* v_x_95_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
uint8_t v___x_96_; 
v___x_96_ = 0;
return v___x_96_;
}
else
{
lean_object* v_key_97_; lean_object* v_tail_98_; uint8_t v___x_99_; 
v_key_97_ = lean_ctor_get(v_x_95_, 0);
v_tail_98_ = lean_ctor_get(v_x_95_, 2);
v___x_99_ = lean_name_eq(v_key_97_, v_a_94_);
if (v___x_99_ == 0)
{
v_x_95_ = v_tail_98_;
goto _start;
}
else
{
return v___x_99_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_a_101_, lean_object* v_x_102_){
_start:
{
uint8_t v_res_103_; lean_object* v_r_104_; 
v_res_103_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_101_, v_x_102_);
lean_dec(v_x_102_);
lean_dec(v_a_101_);
v_r_104_ = lean_box(v_res_103_);
return v_r_104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0___redArg(lean_object* v_m_105_, lean_object* v_a_106_, lean_object* v_b_107_){
_start:
{
lean_object* v_size_108_; lean_object* v_buckets_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_156_; 
v_size_108_ = lean_ctor_get(v_m_105_, 0);
v_buckets_109_ = lean_ctor_get(v_m_105_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_m_105_);
if (v_isSharedCheck_156_ == 0)
{
v___x_111_ = v_m_105_;
v_isShared_112_ = v_isSharedCheck_156_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_buckets_109_);
lean_inc(v_size_108_);
lean_dec(v_m_105_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_156_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; uint64_t v___y_115_; lean_object* v___x_153_; 
v___x_113_ = lean_array_get_size(v_buckets_109_);
v___x_153_ = l_unsafeCast___redArg(v_a_106_);
if (lean_obj_tag(v___x_153_) == 0)
{
uint64_t v___x_154_; 
v___x_154_ = 1723ULL;
v___y_115_ = v___x_154_;
goto v___jp_114_;
}
else
{
uint64_t v_hash_155_; 
v_hash_155_ = lean_ctor_get_uint64(v___x_153_, sizeof(void*)*2);
lean_dec(v___x_153_);
v___y_115_ = v_hash_155_;
goto v___jp_114_;
}
v___jp_114_:
{
uint64_t v___x_116_; uint64_t v___x_117_; uint64_t v_fold_118_; uint64_t v___x_119_; uint64_t v___x_120_; uint64_t v___x_121_; size_t v___x_122_; size_t v___x_123_; size_t v___x_124_; size_t v___x_125_; size_t v___x_126_; lean_object* v_bkt_127_; uint8_t v___x_128_; 
v___x_116_ = 32ULL;
v___x_117_ = lean_uint64_shift_right(v___y_115_, v___x_116_);
v_fold_118_ = lean_uint64_xor(v___y_115_, v___x_117_);
v___x_119_ = 16ULL;
v___x_120_ = lean_uint64_shift_right(v_fold_118_, v___x_119_);
v___x_121_ = lean_uint64_xor(v_fold_118_, v___x_120_);
v___x_122_ = lean_uint64_to_usize(v___x_121_);
v___x_123_ = lean_usize_of_nat(v___x_113_);
v___x_124_ = ((size_t)1ULL);
v___x_125_ = lean_usize_sub(v___x_123_, v___x_124_);
v___x_126_ = lean_usize_land(v___x_122_, v___x_125_);
v_bkt_127_ = lean_array_uget_borrowed(v_buckets_109_, v___x_126_);
v___x_128_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_106_, v_bkt_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v_size_x27_130_; lean_object* v___x_131_; lean_object* v_buckets_x27_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_129_ = lean_unsigned_to_nat(1u);
v_size_x27_130_ = lean_nat_add(v_size_108_, v___x_129_);
lean_dec(v_size_108_);
lean_inc(v_bkt_127_);
v___x_131_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_131_, 0, v_a_106_);
lean_ctor_set(v___x_131_, 1, v_b_107_);
lean_ctor_set(v___x_131_, 2, v_bkt_127_);
v_buckets_x27_132_ = lean_array_uset(v_buckets_109_, v___x_126_, v___x_131_);
v___x_133_ = lean_unsigned_to_nat(4u);
v___x_134_ = lean_nat_mul(v_size_x27_130_, v___x_133_);
v___x_135_ = lean_unsigned_to_nat(3u);
v___x_136_ = lean_nat_div(v___x_134_, v___x_135_);
lean_dec(v___x_134_);
v___x_137_ = lean_array_get_size(v_buckets_x27_132_);
v___x_138_ = lean_nat_dec_le(v___x_136_, v___x_137_);
lean_dec(v___x_136_);
if (v___x_138_ == 0)
{
lean_object* v_val_139_; lean_object* v___x_141_; 
v_val_139_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1___redArg(v_buckets_x27_132_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 1, v_val_139_);
lean_ctor_set(v___x_111_, 0, v_size_x27_130_);
v___x_141_ = v___x_111_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_size_x27_130_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v_val_139_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
else
{
lean_object* v___x_144_; 
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 1, v_buckets_x27_132_);
lean_ctor_set(v___x_111_, 0, v_size_x27_130_);
v___x_144_ = v___x_111_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_size_x27_130_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_buckets_x27_132_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
else
{
lean_object* v___x_146_; lean_object* v_buckets_x27_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_151_; 
lean_inc(v_bkt_127_);
v___x_146_ = lean_box(0);
v_buckets_x27_147_ = lean_array_uset(v_buckets_109_, v___x_126_, v___x_146_);
v___x_148_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(v_a_106_, v_b_107_, v_bkt_127_);
v___x_149_ = lean_array_uset(v_buckets_x27_147_, v___x_126_, v___x_148_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 1, v___x_149_);
v___x_151_ = v___x_111_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_size_108_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v___x_149_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object* v_map_157_, lean_object* v_entry_158_){
_start:
{
lean_object* v_name_159_; lean_object* v_variant_160_; lean_object* v___x_161_; 
v_name_159_ = lean_ctor_get(v_entry_158_, 0);
lean_inc(v_name_159_);
v_variant_160_ = lean_ctor_get(v_entry_158_, 1);
lean_inc_ref(v_variant_160_);
lean_dec_ref(v_entry_158_);
v___x_161_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0___redArg(v_map_157_, v_name_159_, v_variant_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(lean_object* v___y_162_){
_start:
{
lean_inc_ref(v___y_162_);
return v___y_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object* v___y_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___lam__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(v___y_163_);
lean_dec_ref(v___y_163_);
return v_res_164_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_box(0);
v___x_172_ = lean_unsigned_to_nat(16u);
v___x_173_ = lean_mk_array(v___x_172_, v___x_171_);
return v___x_173_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_174_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_);
v___x_175_ = lean_unsigned_to_nat(0u);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v___x_174_);
return v___x_176_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_177_; lean_object* v___f_178_; lean_object* v___x_179_; lean_object* v___f_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___f_177_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_));
v___f_178_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_));
v___x_179_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_);
v___f_180_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_));
v___x_181_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_));
v___x_182_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v___f_180_);
lean_ctor_set(v___x_182_, 2, v___x_179_);
lean_ctor_set(v___x_182_, 3, v___f_178_);
lean_ctor_set(v___x_182_, 4, v___f_177_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_);
v___x_185_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2____boxed(lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_();
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_188_, lean_object* v_m_189_, lean_object* v_a_190_, lean_object* v_b_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0___redArg(v_m_189_, v_a_190_, v_b_191_);
return v___x_192_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_193_, lean_object* v_a_194_, lean_object* v_x_195_){
_start:
{
uint8_t v___x_196_; 
v___x_196_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_194_, v_x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_197_, lean_object* v_a_198_, lean_object* v_x_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_197_, v_a_198_, v_x_199_);
lean_dec(v_x_199_);
lean_dec(v_a_198_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b2_202_, lean_object* v_data_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1___redArg(v_data_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_00_u03b2_205_, lean_object* v_a_206_, lean_object* v_b_207_, lean_object* v_x_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__2___redArg(v_a_206_, v_b_207_, v_x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object* v_00_u03b2_210_, lean_object* v_i_211_, lean_object* v_source_212_, lean_object* v_target_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v_i_211_, v_source_212_, v_target_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_215_, lean_object* v_x_216_, lean_object* v_x_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__3___redArg(v_x_216_, v_x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(lean_object* v_a_219_, lean_object* v_x_220_){
_start:
{
if (lean_obj_tag(v_x_220_) == 0)
{
lean_object* v___x_221_; 
v___x_221_ = lean_box(0);
return v___x_221_;
}
else
{
lean_object* v_key_222_; lean_object* v_value_223_; lean_object* v_tail_224_; uint8_t v___x_225_; 
v_key_222_ = lean_ctor_get(v_x_220_, 0);
v_value_223_ = lean_ctor_get(v_x_220_, 1);
v_tail_224_ = lean_ctor_get(v_x_220_, 2);
v___x_225_ = lean_name_eq(v_key_222_, v_a_219_);
if (v___x_225_ == 0)
{
v_x_220_ = v_tail_224_;
goto _start;
}
else
{
lean_object* v___x_227_; 
lean_inc(v_value_223_);
v___x_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_227_, 0, v_value_223_);
return v___x_227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_228_, lean_object* v_x_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(v_a_228_, v_x_229_);
lean_dec(v_x_229_);
lean_dec(v_a_228_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(lean_object* v_m_231_, lean_object* v_a_232_){
_start:
{
lean_object* v_buckets_233_; lean_object* v___x_234_; uint64_t v___y_236_; lean_object* v___x_250_; 
v_buckets_233_ = lean_ctor_get(v_m_231_, 1);
v___x_234_ = lean_array_get_size(v_buckets_233_);
v___x_250_ = l_unsafeCast___redArg(v_a_232_);
if (lean_obj_tag(v___x_250_) == 0)
{
uint64_t v___x_251_; 
v___x_251_ = 1723ULL;
v___y_236_ = v___x_251_;
goto v___jp_235_;
}
else
{
uint64_t v_hash_252_; 
v_hash_252_ = lean_ctor_get_uint64(v___x_250_, sizeof(void*)*2);
lean_dec(v___x_250_);
v___y_236_ = v_hash_252_;
goto v___jp_235_;
}
v___jp_235_:
{
uint64_t v___x_237_; uint64_t v___x_238_; uint64_t v_fold_239_; uint64_t v___x_240_; uint64_t v___x_241_; uint64_t v___x_242_; size_t v___x_243_; size_t v___x_244_; size_t v___x_245_; size_t v___x_246_; size_t v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_237_ = 32ULL;
v___x_238_ = lean_uint64_shift_right(v___y_236_, v___x_237_);
v_fold_239_ = lean_uint64_xor(v___y_236_, v___x_238_);
v___x_240_ = 16ULL;
v___x_241_ = lean_uint64_shift_right(v_fold_239_, v___x_240_);
v___x_242_ = lean_uint64_xor(v_fold_239_, v___x_241_);
v___x_243_ = lean_uint64_to_usize(v___x_242_);
v___x_244_ = lean_usize_of_nat(v___x_234_);
v___x_245_ = ((size_t)1ULL);
v___x_246_ = lean_usize_sub(v___x_244_, v___x_245_);
v___x_247_ = lean_usize_land(v___x_243_, v___x_246_);
v___x_248_ = lean_array_uget_borrowed(v_buckets_233_, v___x_247_);
v___x_249_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(v_a_232_, v___x_248_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg___boxed(lean_object* v_m_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(v_m_253_, v_a_254_);
lean_dec(v_a_254_);
lean_dec_ref(v_m_253_);
return v_res_255_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Std_HashMap_instInhabited___redArg();
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f(lean_object* v_env_257_, lean_object* v_name_258_){
_start:
{
lean_object* v___x_259_; lean_object* v_ext_260_; lean_object* v_toEnvExtension_261_; lean_object* v_asyncMode_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_259_ = l_Lean_Meta_Sym_Simp_symSimpVariantExtension;
v_ext_260_ = lean_ctor_get(v___x_259_, 1);
v_toEnvExtension_261_ = lean_ctor_get(v_ext_260_, 0);
v_asyncMode_262_ = lean_ctor_get(v_toEnvExtension_261_, 2);
v___x_263_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0, &l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0_once, _init_l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___closed__0);
v___x_264_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_263_, v___x_259_, v_env_257_, v_asyncMode_262_);
v___x_265_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(v___x_264_, v_name_258_);
lean_dec(v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f___boxed(lean_object* v_env_266_, lean_object* v_name_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f(v_env_266_, v_name_267_);
lean_dec(v_name_267_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0(lean_object* v_00_u03b2_269_, lean_object* v_m_270_, lean_object* v_a_271_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___redArg(v_m_270_, v_a_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0___boxed(lean_object* v_00_u03b2_273_, lean_object* v_m_274_, lean_object* v_a_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0(v_00_u03b2_273_, v_m_274_, v_a_275_);
lean_dec(v_a_275_);
lean_dec_ref(v_m_274_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0(lean_object* v_00_u03b2_277_, lean_object* v_a_278_, lean_object* v_x_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___redArg(v_a_278_, v_x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_281_, lean_object* v_a_282_, lean_object* v_x_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpVariant_x3f_spec__0_spec__0(v_00_u03b2_281_, v_a_282_, v_x_283_);
lean_dec(v_x_283_);
lean_dec(v_a_282_);
return v_res_284_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_ScopedEnvExtension(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Variant(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default = _init_l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry_default);
l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry = _init_l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedSymSimpVariantEntry);
res = l___private_Lean_Meta_Sym_Simp_Variant_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Variant_3569157790____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Sym_Simp_symSimpVariantExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Sym_Simp_symSimpVariantExtension);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Variant(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_ScopedEnvExtension(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Variant(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Variant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Variant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Variant(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Sym.Arith.Types
// Imports: public import Init.Grind.Ring.CommSemiringAdapter public import Lean.Meta.Sym.SymM
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
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Sym_registerSymExtension___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_SymExtension_getState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedSemiring;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedRing_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedRing;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommRing;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commRing_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commRing_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommRing_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommRing_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commSemiring_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commSemiring_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommSemiring_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommSemiring_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_none_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_none_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default = (const lean_object*)&l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult = (const lean_object*)&l_Lean_Meta_Sym_Arith_instInhabitedClassifyResult_default___closed__0_value;
static const lean_array_object l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_instInhabitedState;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_arithExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_box(0);
v___x_8_ = l_unsafeCast___redArg(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__4(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_9_ = lean_box(0);
v___x_10_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3);
v___x_11_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2);
v___x_12_ = lean_unsigned_to_nat(0u);
v___x_13_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set(v___x_13_, 1, v___x_11_);
lean_ctor_set(v___x_13_, 2, v___x_10_);
lean_ctor_set(v___x_13_, 3, v___x_11_);
lean_ctor_set(v___x_13_, 4, v___x_9_);
lean_ctor_set(v___x_13_, 5, v___x_9_);
lean_ctor_set(v___x_13_, 6, v___x_9_);
lean_ctor_set(v___x_13_, 7, v___x_9_);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__4, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__4_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__4);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default;
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_16_ = lean_box(0);
v___x_17_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__3);
v___x_18_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2);
v___x_19_ = lean_unsigned_to_nat(0u);
v___x_20_ = lean_alloc_ctor(0, 14, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set(v___x_20_, 2, v___x_17_);
lean_ctor_set(v___x_20_, 3, v___x_18_);
lean_ctor_set(v___x_20_, 4, v___x_18_);
lean_ctor_set(v___x_20_, 5, v___x_16_);
lean_ctor_set(v___x_20_, 6, v___x_16_);
lean_ctor_set(v___x_20_, 7, v___x_16_);
lean_ctor_set(v___x_20_, 8, v___x_16_);
lean_ctor_set(v___x_20_, 9, v___x_16_);
lean_ctor_set(v___x_20_, 10, v___x_16_);
lean_ctor_set(v___x_20_, 11, v___x_16_);
lean_ctor_set(v___x_20_, 12, v___x_16_);
lean_ctor_set(v___x_20_, 13, v___x_16_);
return v___x_20_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedRing_default(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0, &l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedRing_default___closed__0);
return v___x_21_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedRing(void){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = l_Lean_Meta_Sym_Arith_instInhabitedRing_default;
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_23_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2);
v___x_24_ = lean_box(0);
v___x_25_ = l_Lean_Meta_Sym_Arith_instInhabitedRing_default;
v___x_26_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
lean_ctor_set(v___x_26_, 1, v___x_24_);
lean_ctor_set(v___x_26_, 2, v___x_24_);
lean_ctor_set(v___x_26_, 3, v___x_23_);
lean_ctor_set(v___x_26_, 4, v___x_23_);
lean_ctor_set(v___x_26_, 5, v___x_24_);
lean_ctor_set(v___x_26_, 6, v___x_24_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0, &l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default___closed__0);
return v___x_27_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default;
return v___x_28_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_29_ = lean_box(0);
v___x_30_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default___closed__2);
v___x_31_ = lean_unsigned_to_nat(0u);
v___x_32_ = l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default;
v___x_33_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_31_);
lean_ctor_set(v___x_33_, 2, v___x_30_);
lean_ctor_set(v___x_33_, 3, v___x_29_);
lean_ctor_set(v___x_33_, 4, v___x_29_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0, &l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default___closed__0);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default;
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx(lean_object* v_x_36_){
_start:
{
switch(lean_obj_tag(v_x_36_))
{
case 0:
{
lean_object* v___x_37_; 
v___x_37_ = lean_unsigned_to_nat(0u);
return v___x_37_;
}
case 1:
{
lean_object* v___x_38_; 
v___x_38_ = lean_unsigned_to_nat(1u);
return v___x_38_;
}
case 2:
{
lean_object* v___x_39_; 
v___x_39_ = lean_unsigned_to_nat(2u);
return v___x_39_;
}
case 3:
{
lean_object* v___x_40_; 
v___x_40_ = lean_unsigned_to_nat(3u);
return v___x_40_;
}
default: 
{
lean_object* v___x_41_; 
v___x_41_ = lean_unsigned_to_nat(4u);
return v___x_41_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx___boxed(lean_object* v_x_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorIdx(v_x_42_);
lean_dec(v_x_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(lean_object* v_t_44_, lean_object* v_k_45_){
_start:
{
if (lean_obj_tag(v_t_44_) == 4)
{
return v_k_45_;
}
else
{
lean_object* v_id_46_; lean_object* v___x_47_; 
v_id_46_ = lean_ctor_get(v_t_44_, 0);
lean_inc(v_id_46_);
lean_dec(v_t_44_);
v___x_47_ = lean_apply_1(v_k_45_, v_id_46_);
return v___x_47_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim(lean_object* v_motive_48_, lean_object* v_ctorIdx_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_k_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_50_, v_k_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___boxed(lean_object* v_motive_54_, lean_object* v_ctorIdx_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_k_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim(v_motive_54_, v_ctorIdx_55_, v_t_56_, v_h_57_, v_k_58_);
lean_dec(v_ctorIdx_55_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commRing_elim___redArg(lean_object* v_t_60_, lean_object* v_commRing_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_60_, v_commRing_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commRing_elim(lean_object* v_motive_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_commRing_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_64_, v_commRing_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommRing_elim___redArg(lean_object* v_t_68_, lean_object* v_nonCommRing_69_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_68_, v_nonCommRing_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommRing_elim(lean_object* v_motive_71_, lean_object* v_t_72_, lean_object* v_h_73_, lean_object* v_nonCommRing_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_72_, v_nonCommRing_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commSemiring_elim___redArg(lean_object* v_t_76_, lean_object* v_commSemiring_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_76_, v_commSemiring_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_commSemiring_elim(lean_object* v_motive_79_, lean_object* v_t_80_, lean_object* v_h_81_, lean_object* v_commSemiring_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_80_, v_commSemiring_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommSemiring_elim___redArg(lean_object* v_t_84_, lean_object* v_nonCommSemiring_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_84_, v_nonCommSemiring_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_nonCommSemiring_elim(lean_object* v_motive_87_, lean_object* v_t_88_, lean_object* v_h_89_, lean_object* v_nonCommSemiring_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_88_, v_nonCommSemiring_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_none_elim___redArg(lean_object* v_t_92_, lean_object* v_none_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_92_, v_none_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_ClassifyResult_none_elim(lean_object* v_motive_95_, lean_object* v_t_96_, lean_object* v_h_97_, lean_object* v_none_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Meta_Sym_Arith_ClassifyResult_ctorElim___redArg(v_t_96_, v_none_98_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1, &l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__1);
v___x_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_109_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2, &l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__2);
v___x_110_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__0));
v___x_111_ = lean_unsigned_to_nat(8u);
v___x_112_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___x_110_);
lean_ctor_set(v___x_112_, 2, v___x_110_);
lean_ctor_set(v___x_112_, 3, v___x_110_);
lean_ctor_set(v___x_112_, 4, v___x_110_);
lean_ctor_set(v___x_112_, 5, v___x_109_);
return v___x_112_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default(void){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3, &l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_instInhabitedState(void){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_Meta_Sym_Arith_instInhabitedState_default;
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_(lean_object* v___x_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_115_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2____boxed(lean_object* v___x_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_(v___x_118_);
return v_res_120_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_121_; lean_object* v___f_122_; 
v___x_121_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3, &l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3_once, _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default___closed__3);
v___f_122_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___lam__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_122_, 0, v___x_121_);
return v___f_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_124_; lean_object* v___x_125_; 
v___f_124_ = lean_obj_once(&l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn___closed__0_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_);
v___x_125_ = l_Lean_Meta_Sym_registerSymExtension___redArg(v___f_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2____boxed(lean_object* v_a_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_();
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___redArg(lean_object* v_a_128_, lean_object* v_a_129_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = l_Lean_Meta_Sym_Arith_arithExt;
v___x_132_ = l_Lean_Meta_Sym_SymExtension_getState___redArg(v___x_131_, v_a_128_, v_a_129_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___redArg___boxed(lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_Meta_Sym_Arith_getArithState___redArg(v_a_133_, v_a_134_);
lean_dec_ref(v_a_134_);
lean_dec(v_a_133_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState(lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Lean_Meta_Sym_Arith_getArithState___redArg(v_a_138_, v_a_141_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getArithState___boxed(lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_Meta_Sym_Arith_getArithState(v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_);
lean_dec(v_a_150_);
lean_dec_ref(v_a_149_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___redArg(lean_object* v_f_153_, lean_object* v_a_154_){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = l_Lean_Meta_Sym_Arith_arithExt;
v___x_157_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(v___x_156_, v_f_153_, v_a_154_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___redArg___boxed(lean_object* v_f_158_, lean_object* v_a_159_, lean_object* v_a_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_Meta_Sym_Arith_modifyArithState___redArg(v_f_158_, v_a_159_);
lean_dec(v_a_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState(lean_object* v_f_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = l_Lean_Meta_Sym_Arith_arithExt;
v___x_171_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(v___x_170_, v_f_162_, v_a_164_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_modifyArithState___boxed(lean_object* v_f_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Meta_Sym_Arith_modifyArithState(v_f_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___redArg(lean_object* v_a_181_, lean_object* v_a_182_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lean_Meta_Sym_Arith_getArithState___redArg(v_a_181_, v_a_182_);
if (lean_obj_tag(v___x_184_) == 0)
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_193_; 
v_a_185_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_193_ == 0)
{
v___x_187_ = v___x_184_;
v_isShared_188_ = v_isSharedCheck_193_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___x_184_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_193_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v_exp_189_; lean_object* v___x_191_; 
v_exp_189_ = lean_ctor_get(v_a_185_, 0);
lean_inc(v_exp_189_);
lean_dec(v_a_185_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 0, v_exp_189_);
v___x_191_ = v___x_187_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_exp_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
else
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_201_; 
v_a_194_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v___x_184_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_184_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_199_; 
if (v_isShared_197_ == 0)
{
v___x_199_ = v___x_196_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_a_194_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___redArg___boxed(lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Meta_Sym_Arith_getExpThreshold___redArg(v_a_202_, v_a_203_);
lean_dec_ref(v_a_203_);
lean_dec(v_a_202_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold(lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_Meta_Sym_Arith_getExpThreshold___redArg(v_a_207_, v_a_210_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_getExpThreshold___boxed(lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_Meta_Sym_Arith_getExpThreshold(v_a_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_);
lean_dec(v_a_219_);
lean_dec_ref(v_a_218_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___lam__0(lean_object* v_exp_222_, lean_object* v_s_223_){
_start:
{
lean_object* v_rings_224_; lean_object* v_semirings_225_; lean_object* v_ncRings_226_; lean_object* v_ncSemirings_227_; lean_object* v_typeClassify_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
v_rings_224_ = lean_ctor_get(v_s_223_, 1);
v_semirings_225_ = lean_ctor_get(v_s_223_, 2);
v_ncRings_226_ = lean_ctor_get(v_s_223_, 3);
v_ncSemirings_227_ = lean_ctor_get(v_s_223_, 4);
v_typeClassify_228_ = lean_ctor_get(v_s_223_, 5);
v_isSharedCheck_235_ = !lean_is_exclusive(v_s_223_);
if (v_isSharedCheck_235_ == 0)
{
lean_object* v_unused_236_; 
v_unused_236_ = lean_ctor_get(v_s_223_, 0);
lean_dec(v_unused_236_);
v___x_230_ = v_s_223_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_typeClassify_228_);
lean_inc(v_ncSemirings_227_);
lean_inc(v_ncRings_226_);
lean_inc(v_semirings_225_);
lean_inc(v_rings_224_);
lean_dec(v_s_223_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v_exp_222_);
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_exp_222_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v_rings_224_);
lean_ctor_set(v_reuseFailAlloc_234_, 2, v_semirings_225_);
lean_ctor_set(v_reuseFailAlloc_234_, 3, v_ncRings_226_);
lean_ctor_set(v_reuseFailAlloc_234_, 4, v_ncSemirings_227_);
lean_ctor_set(v_reuseFailAlloc_234_, 5, v_typeClassify_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(lean_object* v_exp_237_, lean_object* v_a_238_){
_start:
{
lean_object* v___f_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___f_240_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___lam__0), 2, 1);
lean_closure_set(v___f_240_, 0, v_exp_237_);
v___x_241_ = l_Lean_Meta_Sym_Arith_arithExt;
v___x_242_ = l___private_Lean_Meta_Sym_SymM_0__Lean_Meta_Sym_SymExtension_modifyStateImpl___redArg(v___x_241_, v___f_240_, v_a_238_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___redArg___boxed(lean_object* v_exp_243_, lean_object* v_a_244_, lean_object* v_a_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_243_, v_a_244_);
lean_dec(v_a_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold(lean_object* v_exp_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_247_, v_a_249_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_setExpThreshold___boxed(lean_object* v_exp_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_Meta_Sym_Arith_setExpThreshold(v_exp_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_, v_a_262_);
lean_dec(v_a_262_);
lean_dec_ref(v_a_261_);
lean_dec(v_a_260_);
lean_dec_ref(v_a_259_);
lean_dec(v_a_258_);
lean_dec_ref(v_a_257_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___redArg(lean_object* v_exp_265_, lean_object* v_k_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_Meta_Sym_Arith_getArithState___redArg(v_a_268_, v_a_271_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; lean_object* v_exp_276_; lean_object* v___x_277_; 
v_a_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_275_);
lean_dec_ref_known(v___x_274_, 1);
v_exp_276_ = lean_ctor_get(v_a_275_, 0);
lean_inc(v_exp_276_);
lean_dec(v_a_275_);
v___x_277_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_265_, v_a_268_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_r_278_; 
lean_dec_ref_known(v___x_277_, 1);
lean_inc(v_a_272_);
lean_inc_ref(v_a_271_);
lean_inc(v_a_270_);
lean_inc_ref(v_a_269_);
lean_inc(v_a_268_);
lean_inc_ref(v_a_267_);
v_r_278_ = lean_apply_7(v_k_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, lean_box(0));
if (lean_obj_tag(v_r_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_280_; 
v_a_279_ = lean_ctor_get(v_r_278_, 0);
lean_inc(v_a_279_);
lean_dec_ref_known(v_r_278_, 1);
v___x_280_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_276_, v_a_268_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_287_; 
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_287_ == 0)
{
lean_object* v_unused_288_; 
v_unused_288_ = lean_ctor_get(v___x_280_, 0);
lean_dec(v_unused_288_);
v___x_282_ = v___x_280_;
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
else
{
lean_dec(v___x_280_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_285_; 
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v_a_279_);
v___x_285_ = v___x_282_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_a_279_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec(v_a_279_);
v_a_289_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_280_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_280_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_298_; 
v_a_297_ = lean_ctor_get(v_r_278_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v_r_278_, 1);
v___x_298_ = l_Lean_Meta_Sym_Arith_setExpThreshold___redArg(v_exp_276_, v_a_268_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v___x_298_, 0);
lean_dec(v_unused_306_);
v___x_300_ = v___x_298_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_dec(v___x_298_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
lean_ctor_set_tag(v___x_300_, 1);
lean_ctor_set(v___x_300_, 0, v_a_297_);
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_297_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
else
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_314_; 
lean_dec(v_a_297_);
v_a_307_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_314_ == 0)
{
v___x_309_ = v___x_298_;
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_298_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
if (v_isShared_310_ == 0)
{
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_307_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
}
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_dec(v_exp_276_);
lean_dec_ref(v_k_266_);
v_a_315_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_277_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_277_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_dec_ref(v_k_266_);
lean_dec(v_exp_265_);
v_a_323_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_274_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_274_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___redArg___boxed(lean_object* v_exp_331_, lean_object* v_k_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lean_Meta_Sym_Arith_withExpThreshold___redArg(v_exp_331_, v_k_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_, v_a_338_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold(lean_object* v_00_u03b1_341_, lean_object* v_exp_342_, lean_object* v_k_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_Meta_Sym_Arith_withExpThreshold___redArg(v_exp_342_, v_k_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_withExpThreshold___boxed(lean_object* v_00_u03b1_352_, lean_object* v_exp_353_, lean_object* v_k_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Meta_Sym_Arith_withExpThreshold(v_00_u03b1_352_, v_exp_353_, v_k_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
lean_dec(v_a_360_);
lean_dec_ref(v_a_359_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_a_356_);
lean_dec_ref(v_a_355_);
return v_res_362_;
}
}
lean_object* runtime_initialize_Init_Grind_Ring_CommSemiringAdapter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Arith_Types(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Ring_CommSemiringAdapter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedSemiring_default);
l_Lean_Meta_Sym_Arith_instInhabitedSemiring = _init_l_Lean_Meta_Sym_Arith_instInhabitedSemiring();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedSemiring);
l_Lean_Meta_Sym_Arith_instInhabitedRing_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedRing_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedRing_default);
l_Lean_Meta_Sym_Arith_instInhabitedRing = _init_l_Lean_Meta_Sym_Arith_instInhabitedRing();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedRing);
l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedCommRing_default);
l_Lean_Meta_Sym_Arith_instInhabitedCommRing = _init_l_Lean_Meta_Sym_Arith_instInhabitedCommRing();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedCommRing);
l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring_default);
l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring = _init_l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedCommSemiring);
l_Lean_Meta_Sym_Arith_instInhabitedState_default = _init_l_Lean_Meta_Sym_Arith_instInhabitedState_default();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedState_default);
l_Lean_Meta_Sym_Arith_instInhabitedState = _init_l_Lean_Meta_Sym_Arith_instInhabitedState();
lean_mark_persistent(l_Lean_Meta_Sym_Arith_instInhabitedState);
res = l___private_Lean_Meta_Sym_Arith_Types_0__Lean_Meta_Sym_Arith_initFn_00___x40_Lean_Meta_Sym_Arith_Types_1023037793____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Sym_Arith_arithExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Sym_Arith_arithExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Arith_Types(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Ring_CommSemiringAdapter(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Arith_Types(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Ring_CommSemiringAdapter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Arith_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Arith_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Arith_Types(builtin);
}
#ifdef __cplusplus
}
#endif

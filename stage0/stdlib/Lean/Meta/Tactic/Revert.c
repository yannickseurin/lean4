// Lean compiler output
// Module: Lean.Meta.Tactic.Revert
// Imports: public import Lean.Meta.Tactic.Clear
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_MVarId_setKind___redArg(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_collectForwardDeps(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_revert(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Failed to revert `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "`: It is an auxiliary declaration created to represent a recursive reference to an in-progress definition"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_revert___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___lam__0___closed__0;
static const lean_string_object l_Lean_MVarId_revert___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "failed to create binder due to failure when reverting variable dependencies"};
static const lean_object* l_Lean_MVarId_revert___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_revert___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_revert___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_revert___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_revert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "revert"};
static const lean_object* l_Lean_MVarId_revert___closed__0 = (const lean_object*)&l_Lean_MVarId_revert___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_revert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_revert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 122, 252, 27, 38, 131, 244, 91)}};
static const lean_object* l_Lean_MVarId_revert___closed__1 = (const lean_object*)&l_Lean_MVarId_revert___closed__1_value;
static const lean_array_object l_Lean_MVarId_revert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_MVarId_revert___closed__2 = (const lean_object*)&l_Lean_MVarId_revert___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_revertAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "revertAll"};
static const lean_object* l_Lean_MVarId_revertAll___closed__0 = (const lean_object*)&l_Lean_MVarId_revertAll___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_revertAll___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_revertAll___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 62, 121, 47, 113, 229, 251, 224)}};
static const lean_object* l_Lean_MVarId_revertAll___closed__1 = (const lean_object*)&l_Lean_MVarId_revertAll___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(lean_object* v_mvarId_1_, lean_object* v_x_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1_, v_x_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_16_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_16_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_16_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_14_; 
if (v_isShared_12_ == 0)
{
v___x_14_ = v___x_11_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_15_; 
v_reuseFailAlloc_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_15_, 0, v_a_9_);
v___x_14_ = v_reuseFailAlloc_15_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
return v___x_14_;
}
}
}
else
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
v_a_17_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v___x_8_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_8_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_a_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg___boxed(lean_object* v_mvarId_25_, lean_object* v_x_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_25_, v_x_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5(lean_object* v_00_u03b1_33_, lean_object* v_mvarId_34_, lean_object* v_x_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_34_, v_x_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___boxed(lean_object* v_00_u03b1_42_, lean_object* v_mvarId_43_, lean_object* v_x_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5(v_00_u03b1_42_, v_mvarId_43_, v_x_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(lean_object* v_msgData_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___x_57_; lean_object* v_env_58_; lean_object* v___x_59_; lean_object* v_toCold_60_; lean_object* v_mctx_61_; lean_object* v_lctx_62_; lean_object* v_options_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_57_ = lean_st_ref_get(v___y_55_);
v_env_58_ = lean_ctor_get(v___x_57_, 0);
lean_inc_ref(v_env_58_);
lean_dec(v___x_57_);
v___x_59_ = lean_st_ref_get(v___y_53_);
v_toCold_60_ = lean_ctor_get(v___y_54_, 0);
v_mctx_61_ = lean_ctor_get(v___x_59_, 0);
lean_inc_ref(v_mctx_61_);
lean_dec(v___x_59_);
v_lctx_62_ = lean_ctor_get(v___y_52_, 2);
v_options_63_ = lean_ctor_get(v_toCold_60_, 2);
lean_inc_ref(v_options_63_);
lean_inc_ref(v_lctx_62_);
v___x_64_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_64_, 0, v_env_58_);
lean_ctor_set(v___x_64_, 1, v_mctx_61_);
lean_ctor_set(v___x_64_, 2, v_lctx_62_);
lean_ctor_set(v___x_64_, 3, v_options_63_);
v___x_65_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
lean_ctor_set(v___x_65_, 1, v_msgData_51_);
v___x_66_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3___boxed(lean_object* v_msgData_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(v_msgData_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(lean_object* v_msg_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
lean_object* v_ref_80_; lean_object* v___x_81_; lean_object* v_a_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_90_; 
v_ref_80_ = lean_ctor_get(v___y_77_, 2);
v___x_81_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_revert_spec__3_spec__3(v_msg_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_);
v_a_82_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_90_ == 0)
{
v___x_84_ = v___x_81_;
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_a_82_);
lean_dec(v___x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v___x_88_; 
lean_inc(v_ref_80_);
v___x_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_86_, 0, v_ref_80_);
lean_ctor_set(v___x_86_, 1, v_a_82_);
if (v_isShared_85_ == 0)
{
lean_ctor_set_tag(v___x_84_, 1);
lean_ctor_set(v___x_84_, 0, v___x_86_);
v___x_88_ = v___x_84_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_86_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg___boxed(lean_object* v_msg_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v_msg_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
return v_res_97_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__0));
v___x_100_ = l_Lean_stringToMessageData(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__2));
v___x_103_ = l_Lean_stringToMessageData(v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(lean_object* v_as_104_, size_t v_sz_105_, size_t v_i_106_, lean_object* v_b_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v_a_114_; uint8_t v___x_118_; 
v___x_118_ = lean_usize_dec_lt(v_i_106_, v_sz_105_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; 
v___x_119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_119_, 0, v_b_107_);
return v___x_119_;
}
else
{
lean_object* v___x_120_; lean_object* v_a_121_; lean_object* v___x_122_; 
v___x_120_ = lean_box(0);
v_a_121_ = lean_array_uget_borrowed(v_as_104_, v_i_106_);
lean_inc(v_a_121_);
v___x_122_ = l_Lean_FVarId_getDecl___redArg(v_a_121_, v___y_108_, v___y_110_, v___y_111_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v_a_123_; uint8_t v___x_124_; 
v_a_123_ = lean_ctor_get(v___x_122_, 0);
lean_inc(v_a_123_);
lean_dec_ref_known(v___x_122_, 1);
v___x_124_ = l_Lean_LocalDecl_isAuxDecl(v_a_123_);
lean_dec(v_a_123_);
if (v___x_124_ == 0)
{
v_a_114_ = v___x_120_;
goto v___jp_113_;
}
else
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_125_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__1);
lean_inc(v_a_121_);
v___x_126_ = l_Lean_mkFVar(v_a_121_);
v___x_127_ = l_Lean_MessageData_ofExpr(v___x_126_);
v___x_128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_125_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___closed__3);
v___x_130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_128_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v___x_130_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_dec_ref_known(v___x_131_, 1);
v_a_114_ = v___x_120_;
goto v___jp_113_;
}
else
{
return v___x_131_;
}
}
}
else
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_139_; 
v_a_132_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_139_ == 0)
{
v___x_134_ = v___x_122_;
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_122_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_135_ == 0)
{
v___x_137_ = v___x_134_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_a_132_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
v___jp_113_:
{
size_t v___x_115_; size_t v___x_116_; 
v___x_115_ = ((size_t)1ULL);
v___x_116_ = lean_usize_add(v_i_106_, v___x_115_);
v_i_106_ = v___x_116_;
v_b_107_ = v_a_114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4___boxed(lean_object* v_as_140_, lean_object* v_sz_141_, lean_object* v_i_142_, lean_object* v_b_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
size_t v_sz_boxed_149_; size_t v_i_boxed_150_; lean_object* v_res_151_; 
v_sz_boxed_149_ = lean_unbox_usize(v_sz_141_);
lean_dec(v_sz_141_);
v_i_boxed_150_ = lean_unbox_usize(v_i_142_);
lean_dec(v_i_142_);
v_res_151_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(v_as_140_, v_sz_boxed_149_, v_i_boxed_150_, v_b_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec_ref(v_as_140_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(size_t v_sz_152_, size_t v_i_153_, lean_object* v_bs_154_){
_start:
{
uint8_t v___x_155_; 
v___x_155_ = lean_usize_dec_lt(v_i_153_, v_sz_152_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; 
v___x_156_ = l_unsafeCast___redArg(v_bs_154_);
lean_dec_ref(v_bs_154_);
return v___x_156_;
}
else
{
lean_object* v_v_157_; lean_object* v___x_158_; lean_object* v_bs_x27_159_; lean_object* v___x_160_; lean_object* v___x_161_; size_t v___x_162_; size_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v_v_157_ = lean_array_uget(v_bs_154_, v_i_153_);
v___x_158_ = lean_unsigned_to_nat(0u);
v_bs_x27_159_ = lean_array_uset(v_bs_154_, v_i_153_, v___x_158_);
v___x_160_ = l_unsafeCast___redArg(v_v_157_);
lean_dec(v_v_157_);
v___x_161_ = l_Lean_mkFVar(v___x_160_);
v___x_162_ = ((size_t)1ULL);
v___x_163_ = lean_usize_add(v_i_153_, v___x_162_);
v___x_164_ = l_unsafeCast___redArg(v___x_161_);
lean_dec_ref(v___x_161_);
v___x_165_ = lean_array_uset(v_bs_x27_159_, v_i_153_, v___x_164_);
v_i_153_ = v___x_163_;
v_bs_154_ = v___x_165_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0___boxed(lean_object* v_sz_167_, lean_object* v_i_168_, lean_object* v_bs_169_){
_start:
{
size_t v_sz_boxed_170_; size_t v_i_boxed_171_; lean_object* v_res_172_; 
v_sz_boxed_170_ = lean_unbox_usize(v_sz_167_);
lean_dec(v_sz_167_);
v_i_boxed_171_ = lean_unbox_usize(v_i_168_);
lean_dec(v_i_168_);
v_res_172_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(v_sz_boxed_170_, v_i_boxed_171_, v_bs_169_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(size_t v_sz_173_, size_t v_i_174_, lean_object* v_bs_175_){
_start:
{
uint8_t v___x_176_; 
v___x_176_ = lean_usize_dec_lt(v_i_174_, v_sz_173_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
v___x_177_ = l_unsafeCast___redArg(v_bs_175_);
lean_dec_ref(v_bs_175_);
return v___x_177_;
}
else
{
lean_object* v_v_178_; lean_object* v___x_179_; lean_object* v_bs_x27_180_; lean_object* v___x_181_; lean_object* v___x_182_; size_t v___x_183_; size_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_v_178_ = lean_array_uget(v_bs_175_, v_i_174_);
v___x_179_ = lean_unsigned_to_nat(0u);
v_bs_x27_180_ = lean_array_uset(v_bs_175_, v_i_174_, v___x_179_);
v___x_181_ = l_unsafeCast___redArg(v_v_178_);
lean_dec(v_v_178_);
v___x_182_ = l_Lean_Expr_fvarId_x21(v___x_181_);
lean_dec(v___x_181_);
v___x_183_ = ((size_t)1ULL);
v___x_184_ = lean_usize_add(v_i_174_, v___x_183_);
v___x_185_ = l_unsafeCast___redArg(v___x_182_);
lean_dec(v___x_182_);
v___x_186_ = lean_array_uset(v_bs_x27_180_, v_i_174_, v___x_185_);
v_i_174_ = v___x_184_;
v_bs_175_ = v___x_186_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2___boxed(lean_object* v_sz_188_, lean_object* v_i_189_, lean_object* v_bs_190_){
_start:
{
size_t v_sz_boxed_191_; size_t v_i_boxed_192_; lean_object* v_res_193_; 
v_sz_boxed_191_ = lean_unbox_usize(v_sz_188_);
lean_dec(v_sz_188_);
v_i_boxed_192_ = lean_unbox_usize(v_i_189_);
lean_dec(v_i_189_);
v_res_193_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(v_sz_boxed_191_, v_i_boxed_192_, v_bs_190_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(lean_object* v_as_194_, size_t v_sz_195_, size_t v_i_196_, lean_object* v_b_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v_a_204_; uint8_t v___x_208_; 
v___x_208_ = lean_usize_dec_lt(v_i_196_, v_sz_195_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; 
v___x_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_209_, 0, v_b_197_);
return v___x_209_;
}
else
{
lean_object* v_fst_210_; lean_object* v_snd_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_245_; 
v_fst_210_ = lean_ctor_get(v_b_197_, 0);
v_snd_211_ = lean_ctor_get(v_b_197_, 1);
v_isSharedCheck_245_ = !lean_is_exclusive(v_b_197_);
if (v_isSharedCheck_245_ == 0)
{
v___x_213_ = v_b_197_;
v_isShared_214_ = v_isSharedCheck_245_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_snd_211_);
lean_inc(v_fst_210_);
lean_dec(v_b_197_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_245_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v_a_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_a_215_ = lean_array_uget_borrowed(v_as_194_, v_i_196_);
v___x_216_ = l_Lean_Expr_fvarId_x21(v_a_215_);
lean_inc(v___x_216_);
v___x_217_ = l_Lean_FVarId_getDecl___redArg(v___x_216_, v___y_198_, v___y_200_, v___y_201_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; uint8_t v___x_219_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_a_218_);
lean_dec_ref_known(v___x_217_, 1);
v___x_219_ = l_Lean_LocalDecl_isAuxDecl(v_a_218_);
lean_dec(v_a_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_222_; 
lean_dec(v___x_216_);
lean_inc(v_a_215_);
v___x_220_ = lean_array_push(v_snd_211_, v_a_215_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v___x_220_);
v___x_222_ = v___x_213_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_fst_210_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
v_a_204_ = v___x_222_;
goto v___jp_203_;
}
}
else
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_MVarId_clear(v_fst_210_, v___x_216_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_227_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v_a_225_);
v___x_227_ = v___x_213_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_225_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v_snd_211_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
v_a_204_ = v___x_227_;
goto v___jp_203_;
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_del_object(v___x_213_);
lean_dec(v_snd_211_);
v_a_229_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_224_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_224_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec(v___x_216_);
lean_del_object(v___x_213_);
lean_dec(v_snd_211_);
lean_dec(v_fst_210_);
v_a_237_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_217_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_217_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
}
v___jp_203_:
{
size_t v___x_205_; size_t v___x_206_; 
v___x_205_ = ((size_t)1ULL);
v___x_206_ = lean_usize_add(v_i_196_, v___x_205_);
v_i_196_ = v___x_206_;
v_b_197_ = v_a_204_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1___boxed(lean_object* v_as_246_, lean_object* v_sz_247_, lean_object* v_i_248_, lean_object* v_b_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
size_t v_sz_boxed_255_; size_t v_i_boxed_256_; lean_object* v_res_257_; 
v_sz_boxed_255_ = lean_unbox_usize(v_sz_247_);
lean_dec(v_sz_247_);
v_i_boxed_256_ = lean_unbox_usize(v_i_248_);
lean_dec(v_i_248_);
v_res_257_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(v_as_246_, v_sz_boxed_255_, v_i_boxed_256_, v_b_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec_ref(v_as_246_);
return v_res_257_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___lam__0___closed__0(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_258_ = lean_box(0);
v___x_259_ = lean_unsigned_to_nat(16u);
v___x_260_ = lean_mk_array(v___x_259_, v___x_258_);
return v___x_260_;
}
}
static lean_object* _init_l_Lean_MVarId_revert___lam__0___closed__2(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = ((lean_object*)(l_Lean_MVarId_revert___lam__0___closed__1));
v___x_263_ = l_Lean_stringToMessageData(v___x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0(lean_object* v_fvarIds_264_, uint8_t v_preserveOrder_265_, uint8_t v___x_266_, lean_object* v___x_267_, lean_object* v_mvarId_268_, lean_object* v___x_269_, uint8_t v_clearAuxDeclsInsteadOfRevert_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
size_t v___y_277_; lean_object* v___y_278_; lean_object* v___y_279_; lean_object* v___y_280_; uint8_t v___y_281_; lean_object* v_a_282_; lean_object* v___x_498_; 
lean_inc(v_mvarId_268_);
v___x_498_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_268_, v___x_269_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_dec_ref_known(v___x_498_, 1);
if (v_clearAuxDeclsInsteadOfRevert_270_ == 0)
{
lean_object* v___x_499_; size_t v_sz_500_; size_t v___x_501_; lean_object* v___x_502_; 
v___x_499_ = lean_box(0);
v_sz_500_ = lean_array_size(v_fvarIds_264_);
v___x_501_ = ((size_t)0ULL);
v___x_502_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__4(v_fvarIds_264_, v_sz_500_, v___x_501_, v___x_499_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_dec_ref_known(v___x_502_, 1);
goto v___jp_333_;
}
else
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
lean_dec(v_mvarId_268_);
lean_dec(v___x_267_);
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
else
{
goto v___jp_333_;
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec(v_mvarId_268_);
lean_dec(v___x_267_);
v_a_511_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_498_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_498_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
v___jp_276_:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_MVarId_setKind___redArg(v___y_278_, v___y_281_, v___y_279_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_fst_284_; lean_object* v_snd_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_324_; 
lean_dec_ref_known(v___x_283_, 1);
v_fst_284_ = lean_ctor_get(v_a_282_, 0);
v_snd_285_ = lean_ctor_get(v_a_282_, 1);
v_isSharedCheck_324_ = !lean_is_exclusive(v_a_282_);
if (v_isSharedCheck_324_ == 0)
{
v___x_287_ = v_a_282_;
v_isShared_288_ = v_isSharedCheck_324_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_snd_285_);
lean_inc(v_fst_284_);
lean_dec(v_a_282_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_324_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = l_Lean_Expr_getAppFn(v_fst_284_);
lean_dec(v_fst_284_);
v___x_290_ = l_Lean_Expr_mvarId_x21(v___x_289_);
lean_dec_ref(v___x_289_);
lean_inc(v___x_290_);
v___x_291_ = l_Lean_MVarId_setKind___redArg(v___x_290_, v___y_281_, v___y_279_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v___x_292_; 
lean_dec_ref_known(v___x_291_, 1);
lean_inc(v___x_290_);
v___x_292_ = l_Lean_MVarId_setTag___redArg(v___x_290_, v___y_280_, v___y_279_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_306_; 
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_306_ == 0)
{
lean_object* v_unused_307_; 
v_unused_307_ = lean_ctor_get(v___x_292_, 0);
lean_dec(v_unused_307_);
v___x_294_ = v___x_292_;
v_isShared_295_ = v_isSharedCheck_306_;
goto v_resetjp_293_;
}
else
{
lean_dec(v___x_292_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_306_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
size_t v_sz_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_301_; 
v_sz_296_ = lean_array_size(v_snd_285_);
v___x_297_ = l_unsafeCast___redArg(v_snd_285_);
lean_dec(v_snd_285_);
v___x_298_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__2(v_sz_296_, v___y_277_, v___x_297_);
v___x_299_ = l_unsafeCast___redArg(v___x_298_);
lean_dec_ref(v___x_298_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v___x_290_);
lean_ctor_set(v___x_287_, 0, v___x_299_);
v___x_301_ = v___x_287_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v___x_290_);
v___x_301_ = v_reuseFailAlloc_305_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_303_; 
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 0, v___x_301_);
v___x_303_ = v___x_294_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec(v___x_290_);
lean_del_object(v___x_287_);
lean_dec(v_snd_285_);
v_a_308_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_292_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_292_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
lean_dec(v___x_290_);
lean_del_object(v___x_287_);
lean_dec(v_snd_285_);
lean_dec(v___y_280_);
v_a_316_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_323_ == 0)
{
v___x_318_ = v___x_291_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_291_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_319_ == 0)
{
v___x_321_ = v___x_318_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_316_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_dec_ref(v_a_282_);
lean_dec(v___y_280_);
v_a_325_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_283_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_283_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
v___jp_333_:
{
size_t v_sz_334_; size_t v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_sz_334_ = lean_array_size(v_fvarIds_264_);
v___x_335_ = ((size_t)0ULL);
v___x_336_ = l_unsafeCast___redArg(v_fvarIds_264_);
v___x_337_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_revert_spec__0(v_sz_334_, v___x_335_, v___x_336_);
v___x_338_ = l_unsafeCast___redArg(v___x_337_);
lean_dec_ref(v___x_337_);
v___x_339_ = l_Lean_Meta_collectForwardDeps(v___x_338_, v_preserveOrder_265_, v___x_266_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v___x_341_; lean_object* v___x_342_; size_t v_sz_343_; lean_object* v___x_344_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_a_340_);
lean_dec_ref_known(v___x_339_, 1);
v___x_341_ = lean_mk_empty_array_with_capacity(v___x_267_);
v___x_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_342_, 0, v_mvarId_268_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
v_sz_343_ = lean_array_size(v_a_340_);
v___x_344_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revert_spec__1(v_a_340_, v_sz_343_, v___x_335_, v___x_342_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
lean_dec(v_a_340_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; lean_object* v_fst_346_; lean_object* v_snd_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_481_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_a_345_);
lean_dec_ref_known(v___x_344_, 1);
v_fst_346_ = lean_ctor_get(v_a_345_, 0);
v_snd_347_ = lean_ctor_get(v_a_345_, 1);
v_isSharedCheck_481_ = !lean_is_exclusive(v_a_345_);
if (v_isSharedCheck_481_ == 0)
{
v___x_349_ = v_a_345_;
v_isShared_350_ = v_isSharedCheck_481_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_snd_347_);
lean_inc(v_fst_346_);
lean_dec(v_a_345_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_481_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; 
lean_inc(v_fst_346_);
v___x_351_ = l_Lean_MVarId_getTag(v_fst_346_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; uint8_t v___x_353_; lean_object* v___x_354_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v___x_351_, 1);
v___x_353_ = 0;
lean_inc(v_fst_346_);
v___x_354_ = l_Lean_MVarId_setKind___redArg(v_fst_346_, v___x_353_, v___y_272_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_lctx_355_; uint8_t v___x_356_; lean_object* v___x_357_; lean_object* v_mctx_358_; lean_object* v___x_359_; lean_object* v_ngen_360_; lean_object* v___x_361_; lean_object* v_toCold_362_; lean_object* v_quotContext_363_; lean_object* v_nextMacroScope_364_; lean_object* v___x_366_; 
lean_dec_ref_known(v___x_354_, 1);
v_lctx_355_ = lean_ctor_get(v___y_271_, 2);
v___x_356_ = 2;
v___x_357_ = lean_st_ref_get(v___y_272_);
v_mctx_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc_ref(v_mctx_358_);
lean_dec(v___x_357_);
v___x_359_ = lean_st_ref_get(v___y_274_);
v_ngen_360_ = lean_ctor_get(v___x_359_, 2);
lean_inc_ref(v_ngen_360_);
lean_dec(v___x_359_);
v___x_361_ = lean_st_ref_get(v___y_274_);
v_toCold_362_ = lean_ctor_get(v___y_273_, 0);
v_quotContext_363_ = lean_ctor_get(v_toCold_362_, 8);
v_nextMacroScope_364_ = lean_ctor_get(v___x_361_, 1);
lean_inc(v_nextMacroScope_364_);
lean_dec(v___x_361_);
lean_inc_ref(v_lctx_355_);
lean_inc(v_quotContext_363_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 1, v_lctx_355_);
lean_ctor_set(v___x_349_, 0, v_quotContext_363_);
v___x_366_ = v___x_349_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_quotContext_363_);
lean_ctor_set(v_reuseFailAlloc_464_, 1, v_lctx_355_);
v___x_366_ = v_reuseFailAlloc_464_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_367_ = lean_obj_once(&l_Lean_MVarId_revert___lam__0___closed__0, &l_Lean_MVarId_revert___lam__0___closed__0_once, _init_l_Lean_MVarId_revert___lam__0___closed__0);
v___x_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_267_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_369_, 0, v_mctx_358_);
lean_ctor_set(v___x_369_, 1, v_nextMacroScope_364_);
lean_ctor_set(v___x_369_, 2, v_ngen_360_);
lean_ctor_set(v___x_369_, 3, v___x_368_);
lean_inc(v_fst_346_);
v___x_370_ = l_Lean_MetavarContext_revert(v_snd_347_, v_fst_346_, v_preserveOrder_265_, v___x_366_, v___x_369_);
lean_dec_ref(v___x_366_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; lean_object* v_a_372_; lean_object* v_mctx_373_; lean_object* v_nextMacroScope_374_; lean_object* v_ngen_375_; lean_object* v___x_376_; lean_object* v_cache_377_; lean_object* v_zetaDeltaFVarIds_378_; lean_object* v_postponed_379_; lean_object* v_diag_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_406_; 
v_a_371_ = lean_ctor_get(v___x_370_, 1);
lean_inc(v_a_371_);
v_a_372_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_372_);
lean_dec_ref_known(v___x_370_, 2);
v_mctx_373_ = lean_ctor_get(v_a_371_, 0);
lean_inc_ref(v_mctx_373_);
v_nextMacroScope_374_ = lean_ctor_get(v_a_371_, 1);
lean_inc(v_nextMacroScope_374_);
v_ngen_375_ = lean_ctor_get(v_a_371_, 2);
lean_inc_ref(v_ngen_375_);
lean_dec(v_a_371_);
v___x_376_ = lean_st_ref_take(v___y_272_);
v_cache_377_ = lean_ctor_get(v___x_376_, 1);
v_zetaDeltaFVarIds_378_ = lean_ctor_get(v___x_376_, 2);
v_postponed_379_ = lean_ctor_get(v___x_376_, 3);
v_diag_380_ = lean_ctor_get(v___x_376_, 4);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_406_ == 0)
{
lean_object* v_unused_407_; 
v_unused_407_ = lean_ctor_get(v___x_376_, 0);
lean_dec(v_unused_407_);
v___x_382_ = v___x_376_;
v_isShared_383_ = v_isSharedCheck_406_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_diag_380_);
lean_inc(v_postponed_379_);
lean_inc(v_zetaDeltaFVarIds_378_);
lean_inc(v_cache_377_);
lean_dec(v___x_376_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_406_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 0, v_mctx_373_);
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_mctx_373_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v_cache_377_);
lean_ctor_set(v_reuseFailAlloc_405_, 2, v_zetaDeltaFVarIds_378_);
lean_ctor_set(v_reuseFailAlloc_405_, 3, v_postponed_379_);
lean_ctor_set(v_reuseFailAlloc_405_, 4, v_diag_380_);
v___x_385_ = v_reuseFailAlloc_405_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v_env_388_; lean_object* v_auxDeclNGen_389_; lean_object* v_traceState_390_; lean_object* v_cache_391_; lean_object* v_messages_392_; lean_object* v_infoState_393_; lean_object* v_snapshotTasks_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_402_; 
v___x_386_ = lean_st_ref_put(v___y_272_, v___x_385_);
v___x_387_ = lean_st_ref_take(v___y_274_);
v_env_388_ = lean_ctor_get(v___x_387_, 0);
v_auxDeclNGen_389_ = lean_ctor_get(v___x_387_, 3);
v_traceState_390_ = lean_ctor_get(v___x_387_, 4);
v_cache_391_ = lean_ctor_get(v___x_387_, 5);
v_messages_392_ = lean_ctor_get(v___x_387_, 6);
v_infoState_393_ = lean_ctor_get(v___x_387_, 7);
v_snapshotTasks_394_ = lean_ctor_get(v___x_387_, 8);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_402_ == 0)
{
lean_object* v_unused_403_; lean_object* v_unused_404_; 
v_unused_403_ = lean_ctor_get(v___x_387_, 2);
lean_dec(v_unused_403_);
v_unused_404_ = lean_ctor_get(v___x_387_, 1);
lean_dec(v_unused_404_);
v___x_396_ = v___x_387_;
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_snapshotTasks_394_);
lean_inc(v_infoState_393_);
lean_inc(v_messages_392_);
lean_inc(v_cache_391_);
lean_inc(v_traceState_390_);
lean_inc(v_auxDeclNGen_389_);
lean_inc(v_env_388_);
lean_dec(v___x_387_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 2, v_ngen_375_);
lean_ctor_set(v___x_396_, 1, v_nextMacroScope_374_);
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_env_388_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_nextMacroScope_374_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v_ngen_375_);
lean_ctor_set(v_reuseFailAlloc_401_, 3, v_auxDeclNGen_389_);
lean_ctor_set(v_reuseFailAlloc_401_, 4, v_traceState_390_);
lean_ctor_set(v_reuseFailAlloc_401_, 5, v_cache_391_);
lean_ctor_set(v_reuseFailAlloc_401_, 6, v_messages_392_);
lean_ctor_set(v_reuseFailAlloc_401_, 7, v_infoState_393_);
lean_ctor_set(v_reuseFailAlloc_401_, 8, v_snapshotTasks_394_);
v___x_399_ = v_reuseFailAlloc_401_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
lean_object* v___x_400_; 
v___x_400_ = lean_st_ref_put(v___y_274_, v___x_399_);
v___y_277_ = v___x_335_;
v___y_278_ = v_fst_346_;
v___y_279_ = v___y_272_;
v___y_280_ = v_a_352_;
v___y_281_ = v___x_356_;
v_a_282_ = v_a_372_;
goto v___jp_276_;
}
}
}
}
}
else
{
lean_object* v_a_408_; lean_object* v_mctx_409_; lean_object* v_nextMacroScope_410_; lean_object* v_ngen_411_; lean_object* v___x_412_; lean_object* v_cache_413_; lean_object* v_zetaDeltaFVarIds_414_; lean_object* v_postponed_415_; lean_object* v_diag_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_462_; 
lean_dec(v_a_352_);
v_a_408_ = lean_ctor_get(v___x_370_, 1);
lean_inc(v_a_408_);
lean_dec_ref_known(v___x_370_, 2);
v_mctx_409_ = lean_ctor_get(v_a_408_, 0);
lean_inc_ref(v_mctx_409_);
v_nextMacroScope_410_ = lean_ctor_get(v_a_408_, 1);
lean_inc(v_nextMacroScope_410_);
v_ngen_411_ = lean_ctor_get(v_a_408_, 2);
lean_inc_ref(v_ngen_411_);
lean_dec(v_a_408_);
v___x_412_ = lean_st_ref_take(v___y_272_);
v_cache_413_ = lean_ctor_get(v___x_412_, 1);
v_zetaDeltaFVarIds_414_ = lean_ctor_get(v___x_412_, 2);
v_postponed_415_ = lean_ctor_get(v___x_412_, 3);
v_diag_416_ = lean_ctor_get(v___x_412_, 4);
v_isSharedCheck_462_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_462_ == 0)
{
lean_object* v_unused_463_; 
v_unused_463_ = lean_ctor_get(v___x_412_, 0);
lean_dec(v_unused_463_);
v___x_418_ = v___x_412_;
v_isShared_419_ = v_isSharedCheck_462_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_diag_416_);
lean_inc(v_postponed_415_);
lean_inc(v_zetaDeltaFVarIds_414_);
lean_inc(v_cache_413_);
lean_dec(v___x_412_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_462_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v_mctx_409_);
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_mctx_409_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v_cache_413_);
lean_ctor_set(v_reuseFailAlloc_461_, 2, v_zetaDeltaFVarIds_414_);
lean_ctor_set(v_reuseFailAlloc_461_, 3, v_postponed_415_);
lean_ctor_set(v_reuseFailAlloc_461_, 4, v_diag_416_);
v___x_421_ = v_reuseFailAlloc_461_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v_env_424_; lean_object* v_auxDeclNGen_425_; lean_object* v_traceState_426_; lean_object* v_cache_427_; lean_object* v_messages_428_; lean_object* v_infoState_429_; lean_object* v_snapshotTasks_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_458_; 
v___x_422_ = lean_st_ref_put(v___y_272_, v___x_421_);
v___x_423_ = lean_st_ref_take(v___y_274_);
v_env_424_ = lean_ctor_get(v___x_423_, 0);
v_auxDeclNGen_425_ = lean_ctor_get(v___x_423_, 3);
v_traceState_426_ = lean_ctor_get(v___x_423_, 4);
v_cache_427_ = lean_ctor_get(v___x_423_, 5);
v_messages_428_ = lean_ctor_get(v___x_423_, 6);
v_infoState_429_ = lean_ctor_get(v___x_423_, 7);
v_snapshotTasks_430_ = lean_ctor_get(v___x_423_, 8);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_423_);
if (v_isSharedCheck_458_ == 0)
{
lean_object* v_unused_459_; lean_object* v_unused_460_; 
v_unused_459_ = lean_ctor_get(v___x_423_, 2);
lean_dec(v_unused_459_);
v_unused_460_ = lean_ctor_get(v___x_423_, 1);
lean_dec(v_unused_460_);
v___x_432_ = v___x_423_;
v_isShared_433_ = v_isSharedCheck_458_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_snapshotTasks_430_);
lean_inc(v_infoState_429_);
lean_inc(v_messages_428_);
lean_inc(v_cache_427_);
lean_inc(v_traceState_426_);
lean_inc(v_auxDeclNGen_425_);
lean_inc(v_env_424_);
lean_dec(v___x_423_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_458_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 2, v_ngen_411_);
lean_ctor_set(v___x_432_, 1, v_nextMacroScope_410_);
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_env_424_);
lean_ctor_set(v_reuseFailAlloc_457_, 1, v_nextMacroScope_410_);
lean_ctor_set(v_reuseFailAlloc_457_, 2, v_ngen_411_);
lean_ctor_set(v_reuseFailAlloc_457_, 3, v_auxDeclNGen_425_);
lean_ctor_set(v_reuseFailAlloc_457_, 4, v_traceState_426_);
lean_ctor_set(v_reuseFailAlloc_457_, 5, v_cache_427_);
lean_ctor_set(v_reuseFailAlloc_457_, 6, v_messages_428_);
lean_ctor_set(v_reuseFailAlloc_457_, 7, v_infoState_429_);
lean_ctor_set(v_reuseFailAlloc_457_, 8, v_snapshotTasks_430_);
v___x_435_ = v_reuseFailAlloc_457_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v_a_439_; lean_object* v___x_440_; 
v___x_436_ = lean_st_ref_put(v___y_274_, v___x_435_);
v___x_437_ = lean_obj_once(&l_Lean_MVarId_revert___lam__0___closed__2, &l_Lean_MVarId_revert___lam__0___closed__2_once, _init_l_Lean_MVarId_revert___lam__0___closed__2);
v___x_438_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v___x_437_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
v_a_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_a_439_);
lean_dec_ref(v___x_438_);
v___x_440_ = l_Lean_MVarId_setKind___redArg(v_fst_346_, v___x_356_, v___y_272_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; 
v_unused_448_ = lean_ctor_get(v___x_440_, 0);
lean_dec(v_unused_448_);
v___x_442_ = v___x_440_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_dec(v___x_440_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
lean_ctor_set_tag(v___x_442_, 1);
lean_ctor_set(v___x_442_, 0, v_a_439_);
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_439_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
else
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
lean_dec(v_a_439_);
v_a_449_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_440_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_440_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
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
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec(v_a_352_);
lean_del_object(v___x_349_);
lean_dec(v_snd_347_);
lean_dec(v_fst_346_);
lean_dec(v___x_267_);
v_a_465_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_354_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_354_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_del_object(v___x_349_);
lean_dec(v_snd_347_);
lean_dec(v_fst_346_);
lean_dec(v___x_267_);
v_a_473_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_351_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_351_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
lean_dec(v___x_267_);
v_a_482_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_344_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_344_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
else
{
lean_object* v_a_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
lean_dec(v_mvarId_268_);
lean_dec(v___x_267_);
v_a_490_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_497_ == 0)
{
v___x_492_ = v___x_339_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_a_490_);
lean_dec(v___x_339_);
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
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_a_490_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___lam__0___boxed(lean_object* v_fvarIds_519_, lean_object* v_preserveOrder_520_, lean_object* v___x_521_, lean_object* v___x_522_, lean_object* v_mvarId_523_, lean_object* v___x_524_, lean_object* v_clearAuxDeclsInsteadOfRevert_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
uint8_t v_preserveOrder_boxed_531_; uint8_t v___x_8994__boxed_532_; uint8_t v_clearAuxDeclsInsteadOfRevert_boxed_533_; lean_object* v_res_534_; 
v_preserveOrder_boxed_531_ = lean_unbox(v_preserveOrder_520_);
v___x_8994__boxed_532_ = lean_unbox(v___x_521_);
v_clearAuxDeclsInsteadOfRevert_boxed_533_ = lean_unbox(v_clearAuxDeclsInsteadOfRevert_525_);
v_res_534_ = l_Lean_MVarId_revert___lam__0(v_fvarIds_519_, v_preserveOrder_boxed_531_, v___x_8994__boxed_532_, v___x_522_, v_mvarId_523_, v___x_524_, v_clearAuxDeclsInsteadOfRevert_boxed_533_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec_ref(v_fvarIds_519_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert(lean_object* v_mvarId_540_, lean_object* v_fvarIds_541_, uint8_t v_preserveOrder_542_, uint8_t v_clearAuxDeclsInsteadOfRevert_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_549_ = lean_array_get_size(v_fvarIds_541_);
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = lean_nat_dec_eq(v___x_549_, v___x_550_);
if (v___x_551_ == 0)
{
uint8_t v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___f_557_; lean_object* v___x_558_; 
v___x_552_ = 1;
v___x_553_ = ((lean_object*)(l_Lean_MVarId_revert___closed__1));
v___x_554_ = lean_box(v_preserveOrder_542_);
v___x_555_ = lean_box(v___x_552_);
v___x_556_ = lean_box(v_clearAuxDeclsInsteadOfRevert_543_);
lean_inc(v_mvarId_540_);
v___f_557_ = lean_alloc_closure((void*)(l_Lean_MVarId_revert___lam__0___boxed), 12, 7);
lean_closure_set(v___f_557_, 0, v_fvarIds_541_);
lean_closure_set(v___f_557_, 1, v___x_554_);
lean_closure_set(v___f_557_, 2, v___x_555_);
lean_closure_set(v___f_557_, 3, v___x_550_);
lean_closure_set(v___f_557_, 4, v_mvarId_540_);
lean_closure_set(v___f_557_, 5, v___x_553_);
lean_closure_set(v___f_557_, 6, v___x_556_);
v___x_558_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_540_, v___f_557_, v_a_544_, v_a_545_, v_a_546_, v_a_547_);
return v___x_558_;
}
else
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
lean_dec_ref(v_fvarIds_541_);
v___x_559_ = ((lean_object*)(l_Lean_MVarId_revert___closed__2));
v___x_560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
lean_ctor_set(v___x_560_, 1, v_mvarId_540_);
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
return v___x_561_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revert___boxed(lean_object* v_mvarId_562_, lean_object* v_fvarIds_563_, lean_object* v_preserveOrder_564_, lean_object* v_clearAuxDeclsInsteadOfRevert_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
uint8_t v_preserveOrder_boxed_571_; uint8_t v_clearAuxDeclsInsteadOfRevert_boxed_572_; lean_object* v_res_573_; 
v_preserveOrder_boxed_571_ = lean_unbox(v_preserveOrder_564_);
v_clearAuxDeclsInsteadOfRevert_boxed_572_ = lean_unbox(v_clearAuxDeclsInsteadOfRevert_565_);
v_res_573_ = l_Lean_MVarId_revert(v_mvarId_562_, v_fvarIds_563_, v_preserveOrder_boxed_571_, v_clearAuxDeclsInsteadOfRevert_boxed_572_, v_a_566_, v_a_567_, v_a_568_, v_a_569_);
lean_dec(v_a_569_);
lean_dec_ref(v_a_568_);
lean_dec(v_a_567_);
lean_dec_ref(v_a_566_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3(lean_object* v_00_u03b1_574_, lean_object* v_msg_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___redArg(v_msg_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_revert_spec__3___boxed(lean_object* v_00_u03b1_582_, lean_object* v_msg_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_throwError___at___00Lean_MVarId_revert_spec__3(v_00_u03b1_582_, v_msg_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(lean_object* v_as_590_, size_t v_i_591_, size_t v_stop_592_, lean_object* v_b_593_){
_start:
{
lean_object* v___y_595_; uint8_t v___x_599_; 
v___x_599_ = lean_usize_dec_eq(v_i_591_, v_stop_592_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; 
v___x_600_ = lean_array_uget_borrowed(v_as_590_, v_i_591_);
if (lean_obj_tag(v___x_600_) == 0)
{
v___y_595_ = v_b_593_;
goto v___jp_594_;
}
else
{
lean_object* v_val_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_val_601_ = lean_ctor_get(v___x_600_, 0);
v___x_602_ = l_Lean_LocalDecl_fvarId(v_val_601_);
v___x_603_ = lean_array_push(v_b_593_, v___x_602_);
v___y_595_ = v___x_603_;
goto v___jp_594_;
}
}
else
{
return v_b_593_;
}
v___jp_594_:
{
size_t v___x_596_; size_t v___x_597_; 
v___x_596_ = ((size_t)1ULL);
v___x_597_ = lean_usize_add(v_i_591_, v___x_596_);
v_i_591_ = v___x_597_;
v_b_593_ = v___y_595_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2___boxed(lean_object* v_as_604_, lean_object* v_i_605_, lean_object* v_stop_606_, lean_object* v_b_607_){
_start:
{
size_t v_i_boxed_608_; size_t v_stop_boxed_609_; lean_object* v_res_610_; 
v_i_boxed_608_ = lean_unbox_usize(v_i_605_);
lean_dec(v_i_605_);
v_stop_boxed_609_ = lean_unbox_usize(v_stop_606_);
lean_dec(v_stop_606_);
v_res_610_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_as_604_, v_i_boxed_608_, v_stop_boxed_609_, v_b_607_);
lean_dec_ref(v_as_604_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(lean_object* v_x_611_, lean_object* v_x_612_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
lean_object* v_cs_613_; lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v_cs_613_ = lean_ctor_get(v_x_611_, 0);
v___x_614_ = lean_unsigned_to_nat(0u);
v___x_615_ = lean_array_get_size(v_cs_613_);
v___x_616_ = lean_nat_dec_lt(v___x_614_, v___x_615_);
if (v___x_616_ == 0)
{
return v_x_612_;
}
else
{
size_t v___x_617_; size_t v___x_618_; lean_object* v___x_619_; 
v___x_617_ = ((size_t)0ULL);
v___x_618_ = lean_usize_of_nat(v___x_615_);
v___x_619_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_cs_613_, v___x_617_, v___x_618_, v_x_612_);
return v___x_619_;
}
}
else
{
lean_object* v_vs_620_; lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v_vs_620_ = lean_ctor_get(v_x_611_, 0);
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = lean_array_get_size(v_vs_620_);
v___x_623_ = lean_nat_dec_lt(v___x_621_, v___x_622_);
if (v___x_623_ == 0)
{
return v_x_612_;
}
else
{
size_t v___x_624_; size_t v___x_625_; lean_object* v___x_626_; 
v___x_624_ = ((size_t)0ULL);
v___x_625_ = lean_usize_of_nat(v___x_622_);
v___x_626_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_vs_620_, v___x_624_, v___x_625_, v_x_612_);
return v___x_626_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(lean_object* v_as_627_, size_t v_i_628_, size_t v_stop_629_, lean_object* v_b_630_){
_start:
{
uint8_t v___x_631_; 
v___x_631_ = lean_usize_dec_eq(v_i_628_, v_stop_629_);
if (v___x_631_ == 0)
{
lean_object* v___x_632_; lean_object* v___x_633_; size_t v___x_634_; size_t v___x_635_; 
v___x_632_ = lean_array_uget_borrowed(v_as_627_, v_i_628_);
v___x_633_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(v___x_632_, v_b_630_);
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_add(v_i_628_, v___x_634_);
v_i_628_ = v___x_635_;
v_b_630_ = v___x_633_;
goto _start;
}
else
{
return v_b_630_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_as_637_, lean_object* v_i_638_, lean_object* v_stop_639_, lean_object* v_b_640_){
_start:
{
size_t v_i_boxed_641_; size_t v_stop_boxed_642_; lean_object* v_res_643_; 
v_i_boxed_641_ = lean_unbox_usize(v_i_638_);
lean_dec(v_i_638_);
v_stop_boxed_642_ = lean_unbox_usize(v_stop_639_);
lean_dec(v_stop_639_);
v_res_643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_as_637_, v_i_boxed_641_, v_stop_boxed_642_, v_b_640_);
lean_dec_ref(v_as_637_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3___boxed(lean_object* v_x_644_, lean_object* v_x_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(v_x_644_, v_x_645_);
lean_dec_ref(v_x_644_);
return v_res_646_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(lean_object* v_x_648_, size_t v_x_649_, size_t v_x_650_, lean_object* v_x_651_){
_start:
{
if (lean_obj_tag(v_x_648_) == 0)
{
lean_object* v_cs_652_; lean_object* v___x_653_; size_t v___x_654_; lean_object* v_j_655_; lean_object* v___x_656_; size_t v___x_657_; size_t v___x_658_; size_t v___x_659_; size_t v___x_660_; size_t v___x_661_; size_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v_cs_652_ = lean_ctor_get(v_x_648_, 0);
v___x_653_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___closed__0);
v___x_654_ = lean_usize_shift_right(v_x_649_, v_x_650_);
v_j_655_ = lean_usize_to_nat(v___x_654_);
v___x_656_ = lean_array_get_borrowed(v___x_653_, v_cs_652_, v_j_655_);
v___x_657_ = ((size_t)1ULL);
v___x_658_ = lean_usize_shift_left(v___x_657_, v_x_650_);
v___x_659_ = lean_usize_sub(v___x_658_, v___x_657_);
v___x_660_ = lean_usize_land(v_x_649_, v___x_659_);
v___x_661_ = ((size_t)5ULL);
v___x_662_ = lean_usize_sub(v_x_650_, v___x_661_);
v___x_663_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(v___x_656_, v___x_660_, v___x_662_, v_x_651_);
v___x_664_ = lean_unsigned_to_nat(1u);
v___x_665_ = lean_nat_add(v_j_655_, v___x_664_);
lean_dec(v_j_655_);
v___x_666_ = lean_array_get_size(v_cs_652_);
v___x_667_ = lean_nat_dec_lt(v___x_665_, v___x_666_);
if (v___x_667_ == 0)
{
lean_dec(v___x_665_);
return v___x_663_;
}
else
{
size_t v___x_668_; size_t v___x_669_; lean_object* v___x_670_; 
v___x_668_ = lean_usize_of_nat(v___x_665_);
lean_dec(v___x_665_);
v___x_669_ = lean_usize_of_nat(v___x_666_);
v___x_670_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1_spec__2(v_cs_652_, v___x_668_, v___x_669_, v___x_663_);
return v___x_670_;
}
}
else
{
lean_object* v_vs_671_; lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; 
v_vs_671_ = lean_ctor_get(v_x_648_, 0);
v___x_672_ = lean_usize_to_nat(v_x_649_);
v___x_673_ = lean_array_get_size(v_vs_671_);
v___x_674_ = lean_nat_dec_lt(v___x_672_, v___x_673_);
if (v___x_674_ == 0)
{
lean_dec(v___x_672_);
return v_x_651_;
}
else
{
size_t v___x_675_; size_t v___x_676_; lean_object* v___x_677_; 
v___x_675_ = lean_usize_of_nat(v___x_672_);
lean_dec(v___x_672_);
v___x_676_ = lean_usize_of_nat(v___x_673_);
v___x_677_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_vs_671_, v___x_675_, v___x_676_, v_x_651_);
return v___x_677_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1___boxed(lean_object* v_x_678_, lean_object* v_x_679_, lean_object* v_x_680_, lean_object* v_x_681_){
_start:
{
size_t v_x_1372__boxed_682_; size_t v_x_1373__boxed_683_; lean_object* v_res_684_; 
v_x_1372__boxed_682_ = lean_unbox_usize(v_x_679_);
lean_dec(v_x_679_);
v_x_1373__boxed_683_ = lean_unbox_usize(v_x_680_);
lean_dec(v_x_680_);
v_res_684_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(v_x_678_, v_x_1372__boxed_682_, v_x_1373__boxed_683_, v_x_681_);
lean_dec_ref(v_x_678_);
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(lean_object* v_t_685_, lean_object* v_init_686_, lean_object* v_start_687_){
_start:
{
lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = lean_nat_dec_eq(v_start_687_, v___x_688_);
if (v___x_689_ == 0)
{
lean_object* v_root_690_; lean_object* v_tail_691_; size_t v_shift_692_; lean_object* v_tailOff_693_; uint8_t v___x_694_; 
v_root_690_ = lean_ctor_get(v_t_685_, 0);
v_tail_691_ = lean_ctor_get(v_t_685_, 1);
v_shift_692_ = lean_ctor_get_usize(v_t_685_, 4);
v_tailOff_693_ = lean_ctor_get(v_t_685_, 3);
v___x_694_ = lean_nat_dec_le(v_tailOff_693_, v_start_687_);
if (v___x_694_ == 0)
{
size_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; uint8_t v___x_698_; 
v___x_695_ = lean_usize_of_nat(v_start_687_);
v___x_696_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__1(v_root_690_, v___x_695_, v_shift_692_, v_init_686_);
v___x_697_ = lean_array_get_size(v_tail_691_);
v___x_698_ = lean_nat_dec_lt(v___x_688_, v___x_697_);
if (v___x_698_ == 0)
{
return v___x_696_;
}
else
{
size_t v___x_699_; size_t v___x_700_; lean_object* v___x_701_; 
v___x_699_ = ((size_t)0ULL);
v___x_700_ = lean_usize_of_nat(v___x_697_);
v___x_701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_691_, v___x_699_, v___x_700_, v___x_696_);
return v___x_701_;
}
}
else
{
lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; 
v___x_702_ = lean_nat_sub(v_start_687_, v_tailOff_693_);
v___x_703_ = lean_array_get_size(v_tail_691_);
v___x_704_ = lean_nat_dec_lt(v___x_702_, v___x_703_);
if (v___x_704_ == 0)
{
lean_dec(v___x_702_);
return v_init_686_;
}
else
{
size_t v___x_705_; size_t v___x_706_; lean_object* v___x_707_; 
v___x_705_ = lean_usize_of_nat(v___x_702_);
lean_dec(v___x_702_);
v___x_706_ = lean_usize_of_nat(v___x_703_);
v___x_707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_691_, v___x_705_, v___x_706_, v_init_686_);
return v___x_707_;
}
}
}
else
{
lean_object* v_root_708_; lean_object* v_tail_709_; lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v_root_708_ = lean_ctor_get(v_t_685_, 0);
v_tail_709_ = lean_ctor_get(v_t_685_, 1);
v___x_710_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__3(v_root_708_, v_init_686_);
v___x_711_ = lean_array_get_size(v_tail_709_);
v___x_712_ = lean_nat_dec_lt(v___x_688_, v___x_711_);
if (v___x_712_ == 0)
{
return v___x_710_;
}
else
{
size_t v___x_713_; size_t v___x_714_; lean_object* v___x_715_; 
v___x_713_ = ((size_t)0ULL);
v___x_714_ = lean_usize_of_nat(v___x_711_);
v___x_715_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0_spec__2(v_tail_709_, v___x_713_, v___x_714_, v___x_710_);
return v___x_715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0___boxed(lean_object* v_t_716_, lean_object* v_init_717_, lean_object* v_start_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(v_t_716_, v_init_717_, v_start_718_);
lean_dec(v_start_718_);
lean_dec_ref(v_t_716_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(lean_object* v_lctx_720_, lean_object* v_init_721_, lean_object* v_start_722_){
_start:
{
lean_object* v_decls_723_; lean_object* v___x_724_; 
v_decls_723_ = lean_ctor_get(v_lctx_720_, 1);
v___x_724_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0_spec__0(v_decls_723_, v_init_721_, v_start_722_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0___boxed(lean_object* v_lctx_725_, lean_object* v_init_726_, lean_object* v_start_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(v_lctx_725_, v_init_726_, v_start_727_);
lean_dec(v_start_727_);
lean_dec_ref(v_lctx_725_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0(lean_object* v_fvarId_729_, lean_object* v_mvarId_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_729_, v___y_731_, v___y_733_, v___y_734_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v_lctx_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; uint8_t v___x_744_; lean_object* v___x_745_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_a_737_);
lean_dec_ref_known(v___x_736_, 1);
v_lctx_738_ = lean_ctor_get(v___y_731_, 2);
v___x_739_ = ((lean_object*)(l_Lean_MVarId_revert___closed__2));
v___x_740_ = l_Lean_LocalDecl_index(v_a_737_);
lean_dec(v_a_737_);
v___x_741_ = lean_unsigned_to_nat(1u);
v___x_742_ = lean_nat_add(v___x_740_, v___x_741_);
lean_dec(v___x_740_);
v___x_743_ = l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(v_lctx_738_, v___x_739_, v___x_742_);
lean_dec(v___x_742_);
v___x_744_ = 1;
v___x_745_ = l_Lean_MVarId_revert(v_mvarId_730_, v___x_743_, v___x_744_, v___x_744_, v___y_731_, v___y_732_, v___y_733_, v___y_734_);
return v___x_745_;
}
else
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
lean_dec(v_mvarId_730_);
v_a_746_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_736_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_736_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___lam__0___boxed(lean_object* v_fvarId_754_, lean_object* v_mvarId_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_MVarId_revertAfter___lam__0(v_fvarId_754_, v_mvarId_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter(lean_object* v_mvarId_762_, lean_object* v_fvarId_763_, lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_){
_start:
{
lean_object* v___f_769_; lean_object* v___x_770_; 
lean_inc(v_mvarId_762_);
v___f_769_ = lean_alloc_closure((void*)(l_Lean_MVarId_revertAfter___lam__0___boxed), 7, 2);
lean_closure_set(v___f_769_, 0, v_fvarId_763_);
lean_closure_set(v___f_769_, 1, v_mvarId_762_);
v___x_770_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_762_, v___f_769_, v_a_764_, v_a_765_, v_a_766_, v_a_767_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAfter___boxed(lean_object* v_mvarId_771_, lean_object* v_fvarId_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_MVarId_revertAfter(v_mvarId_771_, v_fvarId_772_, v_a_773_, v_a_774_, v_a_775_, v_a_776_);
lean_dec(v_a_776_);
lean_dec_ref(v_a_775_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0(lean_object* v_fvarId_779_, lean_object* v_mvarId_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_779_, v___y_781_, v___y_783_, v___y_784_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v_lctx_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; lean_object* v___x_793_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_787_);
lean_dec_ref_known(v___x_786_, 1);
v_lctx_788_ = lean_ctor_get(v___y_781_, 2);
v___x_789_ = ((lean_object*)(l_Lean_MVarId_revert___closed__2));
v___x_790_ = l_Lean_LocalDecl_index(v_a_787_);
lean_dec(v_a_787_);
v___x_791_ = l_Lean_LocalContext_foldlM___at___00Lean_MVarId_revertAfter_spec__0(v_lctx_788_, v___x_789_, v___x_790_);
lean_dec(v___x_790_);
v___x_792_ = 1;
v___x_793_ = l_Lean_MVarId_revert(v_mvarId_780_, v___x_791_, v___x_792_, v___x_792_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
return v___x_793_;
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec(v_mvarId_780_);
v_a_794_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_786_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_786_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___lam__0___boxed(lean_object* v_fvarId_802_, lean_object* v_mvarId_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Lean_MVarId_revertFrom___lam__0(v_fvarId_802_, v_mvarId_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom(lean_object* v_mvarId_810_, lean_object* v_fvarId_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v___f_817_; lean_object* v___x_818_; 
lean_inc(v_mvarId_810_);
v___f_817_ = lean_alloc_closure((void*)(l_Lean_MVarId_revertFrom___lam__0___boxed), 7, 2);
lean_closure_set(v___f_817_, 0, v_fvarId_811_);
lean_closure_set(v___f_817_, 1, v_mvarId_810_);
v___x_818_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_810_, v___f_817_, v_a_812_, v_a_813_, v_a_814_, v_a_815_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertFrom___boxed(lean_object* v_mvarId_819_, lean_object* v_fvarId_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Lean_MVarId_revertFrom(v_mvarId_819_, v_fvarId_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_);
lean_dec(v_a_824_);
lean_dec_ref(v_a_823_);
lean_dec(v_a_822_);
lean_dec_ref(v_a_821_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(lean_object* v_as_827_, size_t v_sz_828_, size_t v_i_829_, lean_object* v_b_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v_a_836_; uint8_t v___x_840_; 
v___x_840_ = lean_usize_dec_lt(v_i_829_, v_sz_828_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; 
v___x_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_841_, 0, v_b_830_);
return v___x_841_;
}
else
{
lean_object* v_a_842_; lean_object* v___x_843_; 
v_a_842_ = lean_array_uget_borrowed(v_as_827_, v_i_829_);
lean_inc(v_a_842_);
v___x_843_ = l_Lean_FVarId_getDecl___redArg(v_a_842_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_843_) == 0)
{
lean_object* v_a_844_; uint8_t v___x_845_; 
v_a_844_ = lean_ctor_get(v___x_843_, 0);
lean_inc(v_a_844_);
lean_dec_ref_known(v___x_843_, 1);
v___x_845_ = l_Lean_LocalDecl_isAuxDecl(v_a_844_);
lean_dec(v_a_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; 
lean_inc(v_a_842_);
v___x_846_ = lean_array_push(v_b_830_, v_a_842_);
v_a_836_ = v___x_846_;
goto v___jp_835_;
}
else
{
v_a_836_ = v_b_830_;
goto v___jp_835_;
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
lean_dec_ref(v_b_830_);
v_a_847_ = lean_ctor_get(v___x_843_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_843_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_843_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
v___jp_835_:
{
size_t v___x_837_; size_t v___x_838_; 
v___x_837_ = ((size_t)1ULL);
v___x_838_ = lean_usize_add(v_i_829_, v___x_837_);
v_i_829_ = v___x_838_;
v_b_830_ = v_a_836_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg___boxed(lean_object* v_as_855_, lean_object* v_sz_856_, lean_object* v_i_857_, lean_object* v_b_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_){
_start:
{
size_t v_sz_boxed_863_; size_t v_i_boxed_864_; lean_object* v_res_865_; 
v_sz_boxed_863_ = lean_unbox_usize(v_sz_856_);
lean_dec(v_sz_856_);
v_i_boxed_864_ = lean_unbox_usize(v_i_857_);
lean_dec(v_i_857_);
v_res_865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(v_as_855_, v_sz_boxed_863_, v_i_boxed_864_, v_b_858_, v___y_859_, v___y_860_, v___y_861_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec_ref(v_as_855_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___lam__0(lean_object* v_mvarId_866_, lean_object* v___x_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v___x_873_; 
lean_inc(v_mvarId_866_);
v___x_873_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_866_, v___x_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_lctx_874_; lean_object* v___x_875_; lean_object* v___x_876_; size_t v_sz_877_; size_t v___x_878_; lean_object* v___x_879_; 
lean_dec_ref_known(v___x_873_, 1);
v_lctx_874_ = lean_ctor_get(v___y_868_, 2);
v___x_875_ = ((lean_object*)(l_Lean_MVarId_revert___closed__2));
v___x_876_ = l_Lean_LocalContext_getFVarIds(v_lctx_874_);
v_sz_877_ = lean_array_size(v___x_876_);
v___x_878_ = ((size_t)0ULL);
v___x_879_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(v___x_876_, v_sz_877_, v___x_878_, v___x_875_, v___y_868_, v___y_870_, v___y_871_);
lean_dec_ref(v___x_876_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; uint8_t v___x_881_; lean_object* v___x_882_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v___x_881_ = 1;
v___x_882_ = l_Lean_MVarId_revert(v_mvarId_866_, v_a_880_, v___x_881_, v___x_881_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_891_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_891_ == 0)
{
v___x_885_ = v___x_882_;
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_882_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v_snd_887_; lean_object* v___x_889_; 
v_snd_887_ = lean_ctor_get(v_a_883_, 1);
lean_inc(v_snd_887_);
lean_dec(v_a_883_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 0, v_snd_887_);
v___x_889_ = v___x_885_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_snd_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
v_a_892_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_882_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_882_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
else
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
lean_dec(v_mvarId_866_);
v_a_900_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_907_ == 0)
{
v___x_902_ = v___x_879_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___x_879_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_900_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
lean_dec(v_mvarId_866_);
v_a_908_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_873_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_873_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___lam__0___boxed(lean_object* v_mvarId_916_, lean_object* v___x_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lean_MVarId_revertAll___lam__0(v_mvarId_916_, v___x_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll(lean_object* v_mvarId_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
lean_object* v___x_933_; lean_object* v___f_934_; lean_object* v___x_935_; 
v___x_933_ = ((lean_object*)(l_Lean_MVarId_revertAll___closed__1));
lean_inc(v_mvarId_927_);
v___f_934_ = lean_alloc_closure((void*)(l_Lean_MVarId_revertAll___lam__0___boxed), 7, 2);
lean_closure_set(v___f_934_, 0, v_mvarId_927_);
lean_closure_set(v___f_934_, 1, v___x_933_);
v___x_935_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_revert_spec__5___redArg(v_mvarId_927_, v___f_934_, v_a_928_, v_a_929_, v_a_930_, v_a_931_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_revertAll___boxed(lean_object* v_mvarId_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_MVarId_revertAll(v_mvarId_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0(lean_object* v_as_943_, size_t v_sz_944_, size_t v_i_945_, lean_object* v_b_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___redArg(v_as_943_, v_sz_944_, v_i_945_, v_b_946_, v___y_947_, v___y_949_, v___y_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0___boxed(lean_object* v_as_953_, lean_object* v_sz_954_, lean_object* v_i_955_, lean_object* v_b_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
size_t v_sz_boxed_962_; size_t v_i_boxed_963_; lean_object* v_res_964_; 
v_sz_boxed_962_ = lean_unbox_usize(v_sz_954_);
lean_dec(v_sz_954_);
v_i_boxed_963_ = lean_unbox_usize(v_i_955_);
lean_dec(v_i_955_);
v_res_964_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_revertAll_spec__0(v_as_953_, v_sz_boxed_962_, v_i_boxed_963_, v_b_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec_ref(v_as_953_);
return v_res_964_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Clear(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Clear(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Revert(builtin);
}
#ifdef __cplusplus
}
#endif

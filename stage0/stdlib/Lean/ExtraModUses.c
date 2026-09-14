// Lean compiler output
// Module: Lean.ExtraModUses
// Imports: public import Lean.CoreM public import Lean.Compiler.MetaAttr import Init.Data.Range.Polymorphic.Stream
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqIndirectModUse_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqIndirectModUse_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqIndirectModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqIndirectModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqIndirectModUse___closed__0 = (const lean_object*)&l_Lean_instBEqIndirectModUse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqIndirectModUse = (const lean_object*)&l_Lean_instBEqIndirectModUse___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "indirectModUseExt"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(198, 173, 36, 115, 222, 236, 117, 108)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_indirectModUseExt;
static lean_once_cell_t l_Lean_getIndirectModUses___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getIndirectModUses___closed__0;
static lean_once_cell_t l_Lean_getIndirectModUses___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getIndirectModUses___closed__1;
LEAN_EXPORT lean_object* l_Lean_getIndirectModUses(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getIndirectModUses___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordIndirectModUse___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordIndirectModUse___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_recordIndirectModUse___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "recording indirect mod use of `"};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_recordIndirectModUse___redArg___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordIndirectModUse___redArg___lam__4___closed__1;
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "` ("};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__4___closed__2 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__4___closed__2_value;
static lean_once_cell_t l_Lean_recordIndirectModUse___redArg___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordIndirectModUse___redArg___lam__4___closed__3;
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__4___closed__4 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__4___closed__4_value;
static lean_once_cell_t l_Lean_recordIndirectModUse___redArg___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordIndirectModUse___redArg___lam__4___closed__5;
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_recordIndirectModUse___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_recordIndirectModUse___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l_Lean_recordIndirectModUse___redArg___lam__5___closed__1 = (const lean_object*)&l_Lean_recordIndirectModUse___redArg___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqExtraModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqExtraModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqExtraModUse___closed__0 = (const lean_object*)&l_Lean_instBEqExtraModUse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqExtraModUse = (const lean_object*)&l_Lean_instBEqExtraModUse___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableExtraModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableExtraModUse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableExtraModUse___closed__0 = (const lean_object*)&l_Lean_instHashableExtraModUse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableExtraModUse = (const lean_object*)&l_Lean_instHashableExtraModUse___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprExtraModUse_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprExtraModUse_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "isExported"};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_instReprExtraModUse_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__12;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isMeta"};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__14 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__14_value;
static const lean_string_object l_Lean_instReprExtraModUse_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__15 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_instReprExtraModUse_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__16;
static lean_once_cell_t l_Lean_instReprExtraModUse_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__17;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__18 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lean_instReprExtraModUse_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__15_value)}};
static const lean_object* l_Lean_instReprExtraModUse_repr___redArg___closed__19 = (const lean_object*)&l_Lean_instReprExtraModUse_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprExtraModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprExtraModUse_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprExtraModUse___closed__0 = (const lean_object*)&l_Lean_instReprExtraModUse___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprExtraModUse = (const lean_object*)&l_Lean_instReprExtraModUse___closed__0_value;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1(lean_object*);
static const lean_array_object l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ExtraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__13_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__13_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__13_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__14_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed, .m_arity = 7, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__14_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__14_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__15_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__14_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__15_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__15_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
static lean_once_cell_t l_Lean_getExtraModUses___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getExtraModUses___closed__0;
static lean_once_cell_t l_Lean_getExtraModUses___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getExtraModUses___closed__1;
LEAN_EXPORT lean_object* l_Lean_getExtraModUses(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExtraModUses___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_copyExtraModUses(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__0 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__0_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__1;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__2_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__3;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__4_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__5;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__6_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__7;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__10_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__11_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__12_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__5___boxed(lean_object**);
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___redArg___closed__0 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___redArg___closed__0_value;
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___redArg___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "isExtraRevModUseExt"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt;
static const lean_ctor_object l_Lean_isExtraRevModUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_isExtraRevModUse___closed__0 = (const lean_object*)&l_Lean_isExtraRevModUse___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_isExtraRevModUse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isExtraRevModUse___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "recording extra reverse use of current module"};
static const lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__0 = (const lean_object*)&l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instBEqIndirectModUse_beq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_kind_3_; lean_object* v_declName_4_; lean_object* v_kind_5_; lean_object* v_declName_6_; uint8_t v___x_7_; 
v_kind_3_ = lean_ctor_get(v_x_1_, 0);
v_declName_4_ = lean_ctor_get(v_x_1_, 1);
v_kind_5_ = lean_ctor_get(v_x_2_, 0);
v_declName_6_ = lean_ctor_get(v_x_2_, 1);
v___x_7_ = lean_string_dec_eq(v_kind_3_, v_kind_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = lean_name_eq(v_declName_4_, v_declName_6_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqIndirectModUse_beq___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Lean_instBEqIndirectModUse_beq(v_x_9_, v_x_10_);
lean_dec_ref(v_x_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object* v_es_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_array_mk(v_es_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object* v_s_17_, lean_object* v_x_18_){
_start:
{
lean_inc_ref(v_s_17_);
return v_s_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object* v_s_19_, lean_object* v_x_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(v_s_19_, v_x_20_);
lean_dec_ref(v_x_20_);
lean_dec_ref(v_s_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
if (lean_obj_tag(v_x_23_) == 0)
{
return v_x_22_;
}
else
{
lean_object* v_key_24_; lean_object* v_value_25_; lean_object* v_tail_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_53_; 
v_key_24_ = lean_ctor_get(v_x_23_, 0);
v_value_25_ = lean_ctor_get(v_x_23_, 1);
v_tail_26_ = lean_ctor_get(v_x_23_, 2);
v_isSharedCheck_53_ = !lean_is_exclusive(v_x_23_);
if (v_isSharedCheck_53_ == 0)
{
v___x_28_ = v_x_23_;
v_isShared_29_ = v_isSharedCheck_53_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_tail_26_);
lean_inc(v_value_25_);
lean_inc(v_key_24_);
lean_dec(v_x_23_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_53_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; uint64_t v___y_32_; lean_object* v___x_50_; 
v___x_30_ = lean_array_get_size(v_x_22_);
v___x_50_ = l_unsafeCast___redArg(v_key_24_);
if (lean_obj_tag(v___x_50_) == 0)
{
uint64_t v___x_51_; 
v___x_51_ = 1723ULL;
v___y_32_ = v___x_51_;
goto v___jp_31_;
}
else
{
uint64_t v_hash_52_; 
v_hash_52_ = lean_ctor_get_uint64(v___x_50_, sizeof(void*)*2);
lean_dec(v___x_50_);
v___y_32_ = v_hash_52_;
goto v___jp_31_;
}
v___jp_31_:
{
uint64_t v___x_33_; uint64_t v___x_34_; uint64_t v_fold_35_; uint64_t v___x_36_; uint64_t v___x_37_; uint64_t v___x_38_; size_t v___x_39_; size_t v___x_40_; size_t v___x_41_; size_t v___x_42_; size_t v___x_43_; lean_object* v___x_44_; lean_object* v___x_46_; 
v___x_33_ = 32ULL;
v___x_34_ = lean_uint64_shift_right(v___y_32_, v___x_33_);
v_fold_35_ = lean_uint64_xor(v___y_32_, v___x_34_);
v___x_36_ = 16ULL;
v___x_37_ = lean_uint64_shift_right(v_fold_35_, v___x_36_);
v___x_38_ = lean_uint64_xor(v_fold_35_, v___x_37_);
v___x_39_ = lean_uint64_to_usize(v___x_38_);
v___x_40_ = lean_usize_of_nat(v___x_30_);
v___x_41_ = ((size_t)1ULL);
v___x_42_ = lean_usize_sub(v___x_40_, v___x_41_);
v___x_43_ = lean_usize_land(v___x_39_, v___x_42_);
v___x_44_ = lean_array_uget_borrowed(v_x_22_, v___x_43_);
lean_inc(v___x_44_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 2, v___x_44_);
v___x_46_ = v___x_28_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_key_24_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v_value_25_);
lean_ctor_set(v_reuseFailAlloc_49_, 2, v___x_44_);
v___x_46_ = v_reuseFailAlloc_49_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
lean_object* v___x_47_; 
v___x_47_ = lean_array_uset(v_x_22_, v___x_43_, v___x_46_);
v_x_22_ = v___x_47_;
v_x_23_ = v_tail_26_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(lean_object* v_i_54_, lean_object* v_source_55_, lean_object* v_target_56_){
_start:
{
lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_57_ = lean_array_get_size(v_source_55_);
v___x_58_ = lean_nat_dec_lt(v_i_54_, v___x_57_);
if (v___x_58_ == 0)
{
lean_dec_ref(v_source_55_);
lean_dec(v_i_54_);
return v_target_56_;
}
else
{
lean_object* v_es_59_; lean_object* v___x_60_; lean_object* v_source_61_; lean_object* v_target_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v_es_59_ = lean_array_fget(v_source_55_, v_i_54_);
v___x_60_ = lean_box(0);
v_source_61_ = lean_array_fset(v_source_55_, v_i_54_, v___x_60_);
v_target_62_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5___redArg(v_target_56_, v_es_59_);
v___x_63_ = lean_unsigned_to_nat(1u);
v___x_64_ = lean_nat_add(v_i_54_, v___x_63_);
lean_dec(v_i_54_);
v_i_54_ = v___x_64_;
v_source_55_ = v_source_61_;
v_target_56_ = v_target_62_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_data_66_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v_nbuckets_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_67_ = lean_array_get_size(v_data_66_);
v___x_68_ = lean_unsigned_to_nat(2u);
v_nbuckets_69_ = lean_nat_mul(v___x_67_, v___x_68_);
v___x_70_ = lean_unsigned_to_nat(0u);
v___x_71_ = lean_box(0);
v___x_72_ = lean_mk_array(v_nbuckets_69_, v___x_71_);
v___x_73_ = lean_array_propagate_mark(v_data_66_, v___x_72_);
v___x_74_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v___x_70_, v_data_66_, v___x_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0(lean_object* v_val_77_, lean_object* v_x_78_){
_start:
{
lean_object* v___y_80_; 
if (lean_obj_tag(v_x_78_) == 0)
{
lean_object* v___x_83_; 
v___x_83_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0));
v___y_80_ = v___x_83_;
goto v___jp_79_;
}
else
{
lean_object* v_val_84_; 
v_val_84_ = lean_ctor_get(v_x_78_, 0);
lean_inc(v_val_84_);
lean_dec_ref_known(v_x_78_, 1);
v___y_80_ = v_val_84_;
goto v___jp_79_;
}
v___jp_79_:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_array_push(v___y_80_, v_val_77_);
v___x_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_val_85_, lean_object* v_a_86_, lean_object* v_x_87_){
_start:
{
if (lean_obj_tag(v_x_87_) == 0)
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v_val_90_; lean_object* v___x_91_; 
v___x_88_ = lean_box(0);
v___x_89_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0(v_val_85_, v___x_88_);
v_val_90_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_val_90_);
lean_dec(v___x_89_);
v___x_91_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_91_, 0, v_a_86_);
lean_ctor_set(v___x_91_, 1, v_val_90_);
lean_ctor_set(v___x_91_, 2, v_x_87_);
return v___x_91_;
}
else
{
lean_object* v_key_92_; lean_object* v_value_93_; lean_object* v_tail_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_109_; 
v_key_92_ = lean_ctor_get(v_x_87_, 0);
v_value_93_ = lean_ctor_get(v_x_87_, 1);
v_tail_94_ = lean_ctor_get(v_x_87_, 2);
v_isSharedCheck_109_ = !lean_is_exclusive(v_x_87_);
if (v_isSharedCheck_109_ == 0)
{
v___x_96_ = v_x_87_;
v_isShared_97_ = v_isSharedCheck_109_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_tail_94_);
lean_inc(v_value_93_);
lean_inc(v_key_92_);
lean_dec(v_x_87_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_109_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
uint8_t v___x_98_; 
v___x_98_ = lean_name_eq(v_key_92_, v_a_86_);
if (v___x_98_ == 0)
{
lean_object* v_tail_99_; lean_object* v___x_101_; 
v_tail_99_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2(v_val_85_, v_a_86_, v_tail_94_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 2, v_tail_99_);
v___x_101_ = v___x_96_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_key_92_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v_value_93_);
lean_ctor_set(v_reuseFailAlloc_102_, 2, v_tail_99_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
else
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v_val_105_; lean_object* v___x_107_; 
lean_dec(v_key_92_);
v___x_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_103_, 0, v_value_93_);
v___x_104_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0(v_val_85_, v___x_103_);
v_val_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_val_105_);
lean_dec(v___x_104_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 1, v_val_105_);
lean_ctor_set(v___x_96_, 0, v_a_86_);
v___x_107_ = v___x_96_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_a_86_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_val_105_);
lean_ctor_set(v_reuseFailAlloc_108_, 2, v_tail_94_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_a_110_, lean_object* v_x_111_){
_start:
{
if (lean_obj_tag(v_x_111_) == 0)
{
uint8_t v___x_112_; 
v___x_112_ = 0;
return v___x_112_;
}
else
{
lean_object* v_key_113_; lean_object* v_tail_114_; uint8_t v___x_115_; 
v_key_113_ = lean_ctor_get(v_x_111_, 0);
v_tail_114_ = lean_ctor_get(v_x_111_, 2);
v___x_115_ = lean_name_eq(v_key_113_, v_a_110_);
if (v___x_115_ == 0)
{
v_x_111_ = v_tail_114_;
goto _start;
}
else
{
return v___x_115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_a_117_, lean_object* v_x_118_){
_start:
{
uint8_t v_res_119_; lean_object* v_r_120_; 
v_res_119_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_117_, v_x_118_);
lean_dec(v_x_118_);
lean_dec(v_a_117_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0(lean_object* v_val_121_, lean_object* v_m_122_, lean_object* v_a_123_){
_start:
{
size_t v___y_125_; lean_object* v___y_126_; lean_object* v___y_127_; lean_object* v___y_128_; lean_object* v_size_131_; lean_object* v_buckets_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_180_; 
v_size_131_ = lean_ctor_get(v_m_122_, 0);
v_buckets_132_ = lean_ctor_get(v_m_122_, 1);
v_isSharedCheck_180_ = !lean_is_exclusive(v_m_122_);
if (v_isSharedCheck_180_ == 0)
{
v___x_134_ = v_m_122_;
v_isShared_135_ = v_isSharedCheck_180_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_buckets_132_);
lean_inc(v_size_131_);
lean_dec(v_m_122_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_180_;
goto v_resetjp_133_;
}
v___jp_124_:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_array_uset(v___y_126_, v___y_125_, v___y_127_);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___y_128_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
return v___x_130_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; uint64_t v___y_138_; lean_object* v___x_177_; 
v___x_136_ = lean_array_get_size(v_buckets_132_);
v___x_177_ = l_unsafeCast___redArg(v_a_123_);
if (lean_obj_tag(v___x_177_) == 0)
{
uint64_t v___x_178_; 
v___x_178_ = 1723ULL;
v___y_138_ = v___x_178_;
goto v___jp_137_;
}
else
{
uint64_t v_hash_179_; 
v_hash_179_ = lean_ctor_get_uint64(v___x_177_, sizeof(void*)*2);
lean_dec(v___x_177_);
v___y_138_ = v_hash_179_;
goto v___jp_137_;
}
v___jp_137_:
{
uint64_t v___x_139_; uint64_t v___x_140_; uint64_t v_fold_141_; uint64_t v___x_142_; uint64_t v___x_143_; uint64_t v___x_144_; size_t v___x_145_; size_t v___x_146_; size_t v___x_147_; size_t v___x_148_; size_t v___x_149_; lean_object* v_bkt_150_; uint8_t v___x_151_; 
v___x_139_ = 32ULL;
v___x_140_ = lean_uint64_shift_right(v___y_138_, v___x_139_);
v_fold_141_ = lean_uint64_xor(v___y_138_, v___x_140_);
v___x_142_ = 16ULL;
v___x_143_ = lean_uint64_shift_right(v_fold_141_, v___x_142_);
v___x_144_ = lean_uint64_xor(v_fold_141_, v___x_143_);
v___x_145_ = lean_uint64_to_usize(v___x_144_);
v___x_146_ = lean_usize_of_nat(v___x_136_);
v___x_147_ = ((size_t)1ULL);
v___x_148_ = lean_usize_sub(v___x_146_, v___x_147_);
v___x_149_ = lean_usize_land(v___x_145_, v___x_148_);
v_bkt_150_ = lean_array_uget_borrowed(v_buckets_132_, v___x_149_);
v___x_151_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_123_, v_bkt_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v_size_x27_155_; lean_object* v___x_156_; lean_object* v_buckets_x27_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_152_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0));
v___x_153_ = lean_array_push(v___x_152_, v_val_121_);
v___x_154_ = lean_unsigned_to_nat(1u);
v_size_x27_155_ = lean_nat_add(v_size_131_, v___x_154_);
lean_dec(v_size_131_);
lean_inc(v_bkt_150_);
v___x_156_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_156_, 0, v_a_123_);
lean_ctor_set(v___x_156_, 1, v___x_153_);
lean_ctor_set(v___x_156_, 2, v_bkt_150_);
v_buckets_x27_157_ = lean_array_uset(v_buckets_132_, v___x_149_, v___x_156_);
v___x_158_ = lean_unsigned_to_nat(4u);
v___x_159_ = lean_nat_mul(v_size_x27_155_, v___x_158_);
v___x_160_ = lean_unsigned_to_nat(3u);
v___x_161_ = lean_nat_div(v___x_159_, v___x_160_);
lean_dec(v___x_159_);
v___x_162_ = lean_array_get_size(v_buckets_x27_157_);
v___x_163_ = lean_nat_dec_le(v___x_161_, v___x_162_);
lean_dec(v___x_161_);
if (v___x_163_ == 0)
{
lean_object* v_val_164_; lean_object* v___x_166_; 
v_val_164_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1___redArg(v_buckets_x27_157_);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 1, v_val_164_);
lean_ctor_set(v___x_134_, 0, v_size_x27_155_);
v___x_166_ = v___x_134_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_size_x27_155_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v_val_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
else
{
lean_object* v___x_169_; 
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 1, v_buckets_x27_157_);
lean_ctor_set(v___x_134_, 0, v_size_x27_155_);
v___x_169_ = v___x_134_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_size_x27_155_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v_buckets_x27_157_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
else
{
lean_object* v___x_171_; lean_object* v_buckets_x27_172_; lean_object* v_bkt_x27_173_; uint8_t v___x_174_; 
lean_inc(v_bkt_150_);
lean_del_object(v___x_134_);
v___x_171_ = lean_box(0);
v_buckets_x27_172_ = lean_array_uset(v_buckets_132_, v___x_149_, v___x_171_);
lean_inc(v_a_123_);
v_bkt_x27_173_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2(v_val_121_, v_a_123_, v_bkt_150_);
v___x_174_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_123_, v_bkt_x27_173_);
lean_dec(v_a_123_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_nat_sub(v_size_131_, v___x_175_);
lean_dec(v_size_131_);
v___y_125_ = v___x_149_;
v___y_126_ = v_buckets_x27_172_;
v___y_127_ = v_bkt_x27_173_;
v___y_128_ = v___x_176_;
goto v___jp_124_;
}
else
{
v___y_125_ = v___x_149_;
v___y_126_ = v_buckets_x27_172_;
v___y_127_ = v_bkt_x27_173_;
v___y_128_ = v_size_131_;
goto v___jp_124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1(lean_object* v_val_181_, lean_object* v_as_182_, size_t v_sz_183_, size_t v_i_184_, lean_object* v_b_185_){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = lean_usize_dec_lt(v_i_184_, v_sz_183_);
if (v___x_186_ == 0)
{
lean_dec(v_val_181_);
return v_b_185_;
}
else
{
lean_object* v_a_187_; lean_object* v_declName_188_; lean_object* v___x_189_; size_t v___x_190_; size_t v___x_191_; 
v_a_187_ = lean_array_uget_borrowed(v_as_182_, v_i_184_);
v_declName_188_ = lean_ctor_get(v_a_187_, 1);
lean_inc(v_declName_188_);
lean_inc(v_val_181_);
v___x_189_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0(v_val_181_, v_b_185_, v_declName_188_);
v___x_190_ = ((size_t)1ULL);
v___x_191_ = lean_usize_add(v_i_184_, v___x_190_);
v_i_184_ = v___x_191_;
v_b_185_ = v___x_189_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1___boxed(lean_object* v_val_193_, lean_object* v_as_194_, lean_object* v_sz_195_, lean_object* v_i_196_, lean_object* v_b_197_){
_start:
{
size_t v_sz_boxed_198_; size_t v_i_boxed_199_; lean_object* v_res_200_; 
v_sz_boxed_198_ = lean_unbox_usize(v_sz_195_);
lean_dec(v_sz_195_);
v_i_boxed_199_ = lean_unbox_usize(v_i_196_);
lean_dec(v_i_196_);
v_res_200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1(v_val_193_, v_as_194_, v_sz_boxed_198_, v_i_boxed_199_, v_b_197_);
lean_dec_ref(v_as_194_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2(lean_object* v_as_201_, size_t v_sz_202_, size_t v_i_203_, lean_object* v_b_204_){
_start:
{
uint8_t v___x_205_; 
v___x_205_ = lean_usize_dec_lt(v_i_203_, v_sz_202_);
if (v___x_205_ == 0)
{
return v_b_204_;
}
else
{
lean_object* v_snd_206_; 
v_snd_206_ = lean_ctor_get(v_b_204_, 1);
lean_inc(v_snd_206_);
if (lean_obj_tag(v_snd_206_) == 0)
{
lean_object* v_fst_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
v_fst_207_ = lean_ctor_get(v_b_204_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_b_204_);
if (v_isSharedCheck_214_ == 0)
{
lean_object* v_unused_215_; 
v_unused_215_ = lean_ctor_get(v_b_204_, 1);
lean_dec(v_unused_215_);
v___x_209_ = v_b_204_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_fst_207_);
lean_dec(v_b_204_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_fst_207_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_snd_206_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
else
{
lean_object* v_fst_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_240_; 
v_fst_216_ = lean_ctor_get(v_b_204_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v_b_204_);
if (v_isSharedCheck_240_ == 0)
{
lean_object* v_unused_241_; 
v_unused_241_ = lean_ctor_get(v_b_204_, 1);
lean_dec(v_unused_241_);
v___x_218_ = v_b_204_;
v_isShared_219_ = v_isSharedCheck_240_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_fst_216_);
lean_dec(v_b_204_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_240_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v_val_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_239_; 
v_val_220_ = lean_ctor_get(v_snd_206_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v_snd_206_);
if (v_isSharedCheck_239_ == 0)
{
v___x_222_ = v_snd_206_;
v_isShared_223_ = v_isSharedCheck_239_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_val_220_);
lean_dec(v_snd_206_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_239_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v_a_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_228_; 
v_a_224_ = lean_array_uget_borrowed(v_as_201_, v_i_203_);
v___x_225_ = lean_unsigned_to_nat(1u);
v___x_226_ = lean_nat_add(v_val_220_, v___x_225_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_226_);
v___x_228_ = v___x_222_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_226_);
v___x_228_ = v_reuseFailAlloc_238_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
size_t v_sz_229_; size_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v_sz_229_ = lean_array_size(v_a_224_);
v___x_230_ = ((size_t)0ULL);
v___x_231_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__1(v_val_220_, v_a_224_, v_sz_229_, v___x_230_, v_fst_216_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 1, v___x_228_);
lean_ctor_set(v___x_218_, 0, v___x_231_);
v___x_233_ = v___x_218_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_228_);
v___x_233_ = v_reuseFailAlloc_237_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
size_t v___x_234_; size_t v___x_235_; 
v___x_234_ = ((size_t)1ULL);
v___x_235_ = lean_usize_add(v_i_203_, v___x_234_);
v_i_203_ = v___x_235_;
v_b_204_ = v___x_233_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2___boxed(lean_object* v_as_242_, lean_object* v_sz_243_, lean_object* v_i_244_, lean_object* v_b_245_){
_start:
{
size_t v_sz_boxed_246_; size_t v_i_boxed_247_; lean_object* v_res_248_; 
v_sz_boxed_246_ = lean_unbox_usize(v_sz_243_);
lean_dec(v_sz_243_);
v_i_boxed_247_ = lean_unbox_usize(v_i_244_);
lean_dec(v_i_244_);
v_res_248_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2(v_as_242_, v_sz_boxed_246_, v_i_boxed_247_, v_b_245_);
lean_dec_ref(v_as_242_);
return v_res_248_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = lean_box(0);
v___x_250_ = lean_unsigned_to_nat(16u);
v___x_251_ = lean_mk_array(v___x_250_, v___x_249_);
return v___x_251_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v_s_254_; 
v___x_252_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_);
v___x_253_ = lean_unsigned_to_nat(0u);
v_s_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_254_, 0, v___x_253_);
lean_ctor_set(v_s_254_, 1, v___x_252_);
return v_s_254_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_257_; lean_object* v_s_258_; lean_object* v___x_259_; 
v___x_257_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_));
v_s_258_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__1_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_);
v___x_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_259_, 0, v_s_258_);
lean_ctor_set(v___x_259_, 1, v___x_257_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(lean_object* v_es_260_){
_start:
{
lean_object* v___x_261_; size_t v_sz_262_; size_t v___x_263_; lean_object* v___x_264_; lean_object* v_fst_265_; 
v___x_261_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_);
v_sz_262_ = lean_array_size(v_es_260_);
v___x_263_ = ((size_t)0ULL);
v___x_264_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__2(v_es_260_, v_sz_262_, v___x_263_, v___x_261_);
v_fst_265_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_fst_265_);
lean_dec_ref(v___x_264_);
return v_fst_265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object* v_es_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(v_es_266_);
lean_dec_ref(v_es_266_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_));
v___x_285_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2____boxed(lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_();
return v_res_287_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_288_, lean_object* v_a_289_, lean_object* v_x_290_){
_start:
{
uint8_t v___x_291_; 
v___x_291_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___redArg(v_a_289_, v_x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_292_, lean_object* v_a_293_, lean_object* v_x_294_){
_start:
{
uint8_t v_res_295_; lean_object* v_r_296_; 
v_res_295_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_292_, v_a_293_, v_x_294_);
lean_dec(v_x_294_);
lean_dec(v_a_293_);
v_r_296_ = lean_box(v_res_295_);
return v_r_296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b2_297_, lean_object* v_data_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1___redArg(v_data_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2(lean_object* v_00_u03b2_300_, lean_object* v_i_301_, lean_object* v_source_302_, lean_object* v_target_303_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2___redArg(v_i_301_, v_source_302_, v_target_303_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_305_, lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__1_spec__2_spec__5___redArg(v_x_306_, v_x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_getIndirectModUses___closed__0(void){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_Std_HashMap_instInhabited___redArg();
return v___x_309_;
}
}
static lean_object* _init_l_Lean_getIndirectModUses___closed__1(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_obj_once(&l_Lean_getIndirectModUses___closed__0, &l_Lean_getIndirectModUses___closed__0_once, _init_l_Lean_getIndirectModUses___closed__0);
v___x_311_ = lean_box(0);
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
lean_ctor_set(v___x_312_, 1, v___x_310_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_getIndirectModUses(lean_object* v_env_313_, lean_object* v_modIdx_314_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; 
v___x_315_ = lean_obj_once(&l_Lean_getIndirectModUses___closed__1, &l_Lean_getIndirectModUses___closed__1_once, _init_l_Lean_getIndirectModUses___closed__1);
v___x_316_ = l_Lean_indirectModUseExt;
v___x_317_ = 0;
v___x_318_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_315_, v___x_316_, v_env_313_, v_modIdx_314_, v___x_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_getIndirectModUses___boxed(lean_object* v_env_319_, lean_object* v_modIdx_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_getIndirectModUses(v_env_319_, v_modIdx_320_);
lean_dec(v_modIdx_320_);
lean_dec_ref(v_env_319_);
return v_res_321_;
}
}
static lean_object* _init_l_Lean_recordIndirectModUse___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_box(0);
v___x_323_ = l_unsafeCast___redArg(v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__0(lean_object* v___x_324_, lean_object* v___x_325_, lean_object* v_x_326_){
_start:
{
lean_object* v_toEnvExtension_327_; lean_object* v_asyncMode_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_toEnvExtension_327_ = lean_ctor_get(v___x_324_, 0);
v_asyncMode_328_ = lean_ctor_get(v_toEnvExtension_327_, 2);
lean_inc(v_asyncMode_328_);
v___x_329_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__0___closed__0, &l_Lean_recordIndirectModUse___redArg___lam__0___closed__0_once, _init_l_Lean_recordIndirectModUse___redArg___lam__0___closed__0);
v___x_330_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_324_, v_x_326_, v___x_325_, v_asyncMode_328_, v___x_329_);
lean_dec(v_asyncMode_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__1(lean_object* v_modifyEnv_331_, lean_object* v___f_332_, lean_object* v_____r_333_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lean_apply_1(v_modifyEnv_331_, v___f_332_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__2(lean_object* v_toPure_338_, lean_object* v_cls_339_, lean_object* v_____do__lift_340_, lean_object* v_____do__lift_341_){
_start:
{
uint8_t v_hasTrace_342_; 
v_hasTrace_342_ = lean_ctor_get_uint8(v_____do__lift_341_, sizeof(void*)*1);
if (v_hasTrace_342_ == 0)
{
lean_object* v___x_343_; lean_object* v___x_344_; 
lean_dec(v_cls_339_);
v___x_343_ = lean_box(v_hasTrace_342_);
v___x_344_ = lean_apply_2(v_toPure_338_, lean_box(0), v___x_343_);
return v___x_344_;
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; uint8_t v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_345_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__2___closed__1));
v___x_346_ = l_Lean_Name_append(v___x_345_, v_cls_339_);
v___x_347_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_340_, v_____do__lift_341_, v___x_346_);
lean_dec(v___x_346_);
v___x_348_ = lean_box(v___x_347_);
v___x_349_ = lean_apply_2(v_toPure_338_, lean_box(0), v___x_348_);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__2___boxed(lean_object* v_toPure_350_, lean_object* v_cls_351_, lean_object* v_____do__lift_352_, lean_object* v_____do__lift_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lean_recordIndirectModUse___redArg___lam__2(v_toPure_350_, v_cls_351_, v_____do__lift_352_, v_____do__lift_353_);
lean_dec_ref(v_____do__lift_353_);
lean_dec_ref(v_____do__lift_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__3(lean_object* v_toPure_355_, lean_object* v_cls_356_, lean_object* v_toBind_357_, lean_object* v_inst_358_, lean_object* v_____do__lift_359_){
_start:
{
lean_object* v___f_360_; lean_object* v___x_361_; 
v___f_360_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_360_, 0, v_toPure_355_);
lean_closure_set(v___f_360_, 1, v_cls_356_);
lean_closure_set(v___f_360_, 2, v_____do__lift_359_);
v___x_361_ = lean_apply_4(v_toBind_357_, lean_box(0), lean_box(0), v_inst_358_, v___f_360_);
return v___x_361_;
}
}
static lean_object* _init_l_Lean_recordIndirectModUse___redArg___lam__4___closed__1(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__4___closed__0));
v___x_364_ = l_Lean_stringToMessageData(v___x_363_);
return v___x_364_;
}
}
static lean_object* _init_l_Lean_recordIndirectModUse___redArg___lam__4___closed__3(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__4___closed__2));
v___x_367_ = l_Lean_stringToMessageData(v___x_366_);
return v___x_367_;
}
}
static lean_object* _init_l_Lean_recordIndirectModUse___redArg___lam__4___closed__5(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__4___closed__4));
v___x_370_ = l_Lean_stringToMessageData(v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__4(lean_object* v_modifyEnv_371_, lean_object* v___f_372_, lean_object* v_declName_373_, lean_object* v_kind_374_, lean_object* v_inst_375_, lean_object* v_inst_376_, lean_object* v_inst_377_, lean_object* v_inst_378_, lean_object* v_cls_379_, lean_object* v_toBind_380_, lean_object* v___f_381_, uint8_t v_____do__lift_382_){
_start:
{
if (v_____do__lift_382_ == 0)
{
lean_object* v___x_383_; 
lean_dec(v___f_381_);
lean_dec(v_toBind_380_);
lean_dec(v_cls_379_);
lean_dec(v_inst_378_);
lean_dec_ref(v_inst_377_);
lean_dec_ref(v_inst_376_);
lean_dec_ref(v_inst_375_);
lean_dec_ref(v_kind_374_);
lean_dec(v_declName_373_);
v___x_383_ = lean_apply_1(v_modifyEnv_371_, v___f_372_);
return v___x_383_;
}
else
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
lean_dec_ref(v___f_372_);
lean_dec(v_modifyEnv_371_);
v___x_384_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__4___closed__1, &l_Lean_recordIndirectModUse___redArg___lam__4___closed__1_once, _init_l_Lean_recordIndirectModUse___redArg___lam__4___closed__1);
v___x_385_ = l_Lean_MessageData_ofName(v_declName_373_);
v___x_386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__4___closed__3, &l_Lean_recordIndirectModUse___redArg___lam__4___closed__3_once, _init_l_Lean_recordIndirectModUse___redArg___lam__4___closed__3);
v___x_388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = l_Lean_stringToMessageData(v_kind_374_);
v___x_390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_388_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__4___closed__5, &l_Lean_recordIndirectModUse___redArg___lam__4___closed__5_once, _init_l_Lean_recordIndirectModUse___redArg___lam__4___closed__5);
v___x_392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_390_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = l_Lean_addTrace___redArg(v_inst_375_, v_inst_376_, v_inst_377_, v_inst_378_, v_cls_379_, v___x_392_);
v___x_394_ = lean_apply_4(v_toBind_380_, lean_box(0), lean_box(0), v___x_393_, v___f_381_);
return v___x_394_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__4___boxed(lean_object* v_modifyEnv_395_, lean_object* v___f_396_, lean_object* v_declName_397_, lean_object* v_kind_398_, lean_object* v_inst_399_, lean_object* v_inst_400_, lean_object* v_inst_401_, lean_object* v_inst_402_, lean_object* v_cls_403_, lean_object* v_toBind_404_, lean_object* v___f_405_, lean_object* v_____do__lift_406_){
_start:
{
uint8_t v_____do__lift_453__boxed_407_; lean_object* v_res_408_; 
v_____do__lift_453__boxed_407_ = lean_unbox(v_____do__lift_406_);
v_res_408_ = l_Lean_recordIndirectModUse___redArg___lam__4(v_modifyEnv_395_, v___f_396_, v_declName_397_, v_kind_398_, v_inst_399_, v_inst_400_, v_inst_401_, v_inst_402_, v_cls_403_, v_toBind_404_, v___f_405_, v_____do__lift_453__boxed_407_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg___lam__5(lean_object* v___x_412_, lean_object* v_kind_413_, lean_object* v_declName_414_, lean_object* v___x_415_, lean_object* v_inst_416_, lean_object* v_modifyEnv_417_, lean_object* v_toPure_418_, lean_object* v_toBind_419_, lean_object* v_inst_420_, lean_object* v_inst_421_, lean_object* v_inst_422_, lean_object* v_inst_423_, lean_object* v_____do__lift_424_){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_425_ = l_Lean_indirectModUseExt;
v___x_426_ = lean_box(2);
v___x_427_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_412_, v___x_425_, v_____do__lift_424_, v___x_426_);
lean_inc(v_declName_414_);
lean_inc_ref(v_kind_413_);
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v_kind_413_);
lean_ctor_set(v___x_428_, 1, v_declName_414_);
lean_inc_ref(v___x_428_);
v___x_429_ = l_List_elem___redArg(v___x_415_, v___x_428_, v___x_427_);
if (v___x_429_ == 0)
{
lean_object* v_getInheritedTraceOptions_430_; lean_object* v___f_431_; lean_object* v___f_432_; lean_object* v_cls_433_; lean_object* v___f_434_; lean_object* v___f_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v_getInheritedTraceOptions_430_ = lean_ctor_get(v_inst_416_, 2);
lean_inc(v_getInheritedTraceOptions_430_);
v___f_431_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__0), 3, 2);
lean_closure_set(v___f_431_, 0, v___x_425_);
lean_closure_set(v___f_431_, 1, v___x_428_);
lean_inc_ref(v___f_431_);
lean_inc(v_modifyEnv_417_);
v___f_432_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__1), 3, 2);
lean_closure_set(v___f_432_, 0, v_modifyEnv_417_);
lean_closure_set(v___f_432_, 1, v___f_431_);
v_cls_433_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__5___closed__1));
lean_inc_n(v_toBind_419_, 3);
v___f_434_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__3), 5, 4);
lean_closure_set(v___f_434_, 0, v_toPure_418_);
lean_closure_set(v___f_434_, 1, v_cls_433_);
lean_closure_set(v___f_434_, 2, v_toBind_419_);
lean_closure_set(v___f_434_, 3, v_inst_420_);
v___f_435_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__4___boxed), 12, 11);
lean_closure_set(v___f_435_, 0, v_modifyEnv_417_);
lean_closure_set(v___f_435_, 1, v___f_431_);
lean_closure_set(v___f_435_, 2, v_declName_414_);
lean_closure_set(v___f_435_, 3, v_kind_413_);
lean_closure_set(v___f_435_, 4, v_inst_421_);
lean_closure_set(v___f_435_, 5, v_inst_416_);
lean_closure_set(v___f_435_, 6, v_inst_422_);
lean_closure_set(v___f_435_, 7, v_inst_423_);
lean_closure_set(v___f_435_, 8, v_cls_433_);
lean_closure_set(v___f_435_, 9, v_toBind_419_);
lean_closure_set(v___f_435_, 10, v___f_432_);
v___x_436_ = lean_apply_4(v_toBind_419_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_430_, v___f_434_);
v___x_437_ = lean_apply_4(v_toBind_419_, lean_box(0), lean_box(0), v___x_436_, v___f_435_);
return v___x_437_;
}
else
{
lean_object* v___x_438_; lean_object* v___x_439_; 
lean_dec_ref_known(v___x_428_, 2);
lean_dec(v_inst_423_);
lean_dec_ref(v_inst_422_);
lean_dec_ref(v_inst_421_);
lean_dec(v_inst_420_);
lean_dec(v_toBind_419_);
lean_dec(v_modifyEnv_417_);
lean_dec_ref(v_inst_416_);
lean_dec(v_declName_414_);
lean_dec_ref(v_kind_413_);
v___x_438_ = lean_box(0);
v___x_439_ = lean_apply_2(v_toPure_418_, lean_box(0), v___x_438_);
return v___x_439_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse___redArg(lean_object* v_inst_440_, lean_object* v_inst_441_, lean_object* v_inst_442_, lean_object* v_inst_443_, lean_object* v_inst_444_, lean_object* v_inst_445_, lean_object* v_kind_446_, lean_object* v_declName_447_){
_start:
{
lean_object* v_toApplicative_448_; lean_object* v_toBind_449_; lean_object* v_getEnv_450_; lean_object* v_modifyEnv_451_; lean_object* v_toPure_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___f_455_; lean_object* v___x_456_; 
v_toApplicative_448_ = lean_ctor_get(v_inst_440_, 0);
v_toBind_449_ = lean_ctor_get(v_inst_440_, 1);
lean_inc_n(v_toBind_449_, 2);
v_getEnv_450_ = lean_ctor_get(v_inst_441_, 0);
lean_inc(v_getEnv_450_);
v_modifyEnv_451_ = lean_ctor_get(v_inst_441_, 1);
lean_inc(v_modifyEnv_451_);
lean_dec_ref(v_inst_441_);
v_toPure_452_ = lean_ctor_get(v_toApplicative_448_, 1);
lean_inc(v_toPure_452_);
v___x_453_ = ((lean_object*)(l_Lean_instBEqIndirectModUse___closed__0));
v___x_454_ = lean_obj_once(&l_Lean_getIndirectModUses___closed__0, &l_Lean_getIndirectModUses___closed__0_once, _init_l_Lean_getIndirectModUses___closed__0);
v___f_455_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__5), 13, 12);
lean_closure_set(v___f_455_, 0, v___x_454_);
lean_closure_set(v___f_455_, 1, v_kind_446_);
lean_closure_set(v___f_455_, 2, v_declName_447_);
lean_closure_set(v___f_455_, 3, v___x_453_);
lean_closure_set(v___f_455_, 4, v_inst_442_);
lean_closure_set(v___f_455_, 5, v_modifyEnv_451_);
lean_closure_set(v___f_455_, 6, v_toPure_452_);
lean_closure_set(v___f_455_, 7, v_toBind_449_);
lean_closure_set(v___f_455_, 8, v_inst_443_);
lean_closure_set(v___f_455_, 9, v_inst_440_);
lean_closure_set(v___f_455_, 10, v_inst_444_);
lean_closure_set(v___f_455_, 11, v_inst_445_);
v___x_456_ = lean_apply_4(v_toBind_449_, lean_box(0), lean_box(0), v_getEnv_450_, v___f_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordIndirectModUse(lean_object* v_m_457_, lean_object* v_inst_458_, lean_object* v_inst_459_, lean_object* v_inst_460_, lean_object* v_inst_461_, lean_object* v_inst_462_, lean_object* v_inst_463_, lean_object* v_kind_464_, lean_object* v_declName_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_Lean_recordIndirectModUse___redArg(v_inst_458_, v_inst_459_, v_inst_460_, v_inst_461_, v_inst_462_, v_inst_463_, v_kind_464_, v_declName_465_);
return v___x_466_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqExtraModUse_beq(lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
lean_object* v_module_469_; uint8_t v_isExported_470_; uint8_t v_isMeta_471_; lean_object* v_module_472_; uint8_t v_isExported_473_; uint8_t v_isMeta_474_; uint8_t v___y_476_; uint8_t v___x_477_; 
v_module_469_ = lean_ctor_get(v_x_467_, 0);
v_isExported_470_ = lean_ctor_get_uint8(v_x_467_, sizeof(void*)*1);
v_isMeta_471_ = lean_ctor_get_uint8(v_x_467_, sizeof(void*)*1 + 1);
v_module_472_ = lean_ctor_get(v_x_468_, 0);
v_isExported_473_ = lean_ctor_get_uint8(v_x_468_, sizeof(void*)*1);
v_isMeta_474_ = lean_ctor_get_uint8(v_x_468_, sizeof(void*)*1 + 1);
v___x_477_ = lean_name_eq(v_module_469_, v_module_472_);
if (v___x_477_ == 0)
{
return v___x_477_;
}
else
{
if (v_isExported_473_ == 0)
{
if (v_isExported_470_ == 0)
{
v___y_476_ = v___x_477_;
goto v___jp_475_;
}
else
{
return v_isExported_473_;
}
}
else
{
v___y_476_ = v_isExported_470_;
goto v___jp_475_;
}
}
v___jp_475_:
{
if (v___y_476_ == 0)
{
return v___y_476_;
}
else
{
if (v_isMeta_474_ == 0)
{
if (v_isMeta_471_ == 0)
{
return v___y_476_;
}
else
{
return v_isMeta_474_;
}
}
else
{
return v_isMeta_471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object* v_x_478_, lean_object* v_x_479_){
_start:
{
uint8_t v_res_480_; lean_object* v_r_481_; 
v_res_480_ = l_Lean_instBEqExtraModUse_beq(v_x_478_, v_x_479_);
lean_dec_ref(v_x_479_);
lean_dec_ref(v_x_478_);
v_r_481_ = lean_box(v_res_480_);
return v_r_481_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableExtraModUse_hash(lean_object* v_x_484_){
_start:
{
lean_object* v_module_485_; uint8_t v_isExported_486_; uint8_t v_isMeta_487_; uint64_t v___y_489_; uint64_t v___y_490_; uint64_t v___x_496_; uint64_t v___y_498_; lean_object* v___x_502_; 
v_module_485_ = lean_ctor_get(v_x_484_, 0);
v_isExported_486_ = lean_ctor_get_uint8(v_x_484_, sizeof(void*)*1);
v_isMeta_487_ = lean_ctor_get_uint8(v_x_484_, sizeof(void*)*1 + 1);
v___x_496_ = 0ULL;
v___x_502_ = l_unsafeCast___redArg(v_module_485_);
if (lean_obj_tag(v___x_502_) == 0)
{
uint64_t v___x_503_; 
v___x_503_ = 1723ULL;
v___y_498_ = v___x_503_;
goto v___jp_497_;
}
else
{
uint64_t v_hash_504_; 
v_hash_504_ = lean_ctor_get_uint64(v___x_502_, sizeof(void*)*2);
lean_dec(v___x_502_);
v___y_498_ = v_hash_504_;
goto v___jp_497_;
}
v___jp_488_:
{
uint64_t v___x_491_; 
v___x_491_ = lean_uint64_mix_hash(v___y_489_, v___y_490_);
if (v_isMeta_487_ == 0)
{
uint64_t v___x_492_; uint64_t v___x_493_; 
v___x_492_ = 13ULL;
v___x_493_ = lean_uint64_mix_hash(v___x_491_, v___x_492_);
return v___x_493_;
}
else
{
uint64_t v___x_494_; uint64_t v___x_495_; 
v___x_494_ = 11ULL;
v___x_495_ = lean_uint64_mix_hash(v___x_491_, v___x_494_);
return v___x_495_;
}
}
v___jp_497_:
{
uint64_t v___x_499_; 
v___x_499_ = lean_uint64_mix_hash(v___x_496_, v___y_498_);
if (v_isExported_486_ == 0)
{
uint64_t v___x_500_; 
v___x_500_ = 13ULL;
v___y_489_ = v___x_499_;
v___y_490_ = v___x_500_;
goto v___jp_488_;
}
else
{
uint64_t v___x_501_; 
v___x_501_ = 11ULL;
v___y_489_ = v___x_499_;
v___y_490_ = v___x_501_;
goto v___jp_488_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object* v_x_505_){
_start:
{
uint64_t v_res_506_; lean_object* v_r_507_; 
v_res_506_ = l_Lean_instHashableExtraModUse_hash(v_x_505_);
lean_dec_ref(v_x_505_);
v_r_507_ = lean_box_uint64(v_res_506_);
return v_r_507_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprExtraModUse_repr_spec__0(lean_object* v_a_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = lean_nat_to_int(v_a_510_);
return v___x_511_;
}
}
static lean_object* _init_l_Lean_instReprExtraModUse_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_unsigned_to_nat(10u);
v___x_526_ = lean_nat_to_int(v___x_525_);
return v___x_526_;
}
}
static lean_object* _init_l_Lean_instReprExtraModUse_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_unsigned_to_nat(14u);
v___x_534_ = lean_nat_to_int(v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_l_Lean_instReprExtraModUse_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__0));
v___x_540_ = lean_string_length(v___x_539_);
return v___x_540_;
}
}
static lean_object* _init_l_Lean_instReprExtraModUse_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = lean_obj_once(&l_Lean_instReprExtraModUse_repr___redArg___closed__16, &l_Lean_instReprExtraModUse_repr___redArg___closed__16_once, _init_l_Lean_instReprExtraModUse_repr___redArg___closed__16);
v___x_542_ = lean_nat_to_int(v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr___redArg(lean_object* v_x_547_){
_start:
{
lean_object* v_module_548_; uint8_t v_isExported_549_; uint8_t v_isMeta_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v_module_548_ = lean_ctor_get(v_x_547_, 0);
lean_inc(v_module_548_);
v_isExported_549_ = lean_ctor_get_uint8(v_x_547_, sizeof(void*)*1);
v_isMeta_550_ = lean_ctor_get_uint8(v_x_547_, sizeof(void*)*1 + 1);
lean_dec_ref(v_x_547_);
v___x_551_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__5));
v___x_552_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__6));
v___x_553_ = lean_obj_once(&l_Lean_instReprExtraModUse_repr___redArg___closed__7, &l_Lean_instReprExtraModUse_repr___redArg___closed__7_once, _init_l_Lean_instReprExtraModUse_repr___redArg___closed__7);
v___x_554_ = lean_unsigned_to_nat(0u);
v___x_555_ = l_Lean_Name_reprPrec(v_module_548_, v___x_554_);
v___x_556_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_553_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = 0;
v___x_558_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_558_, 0, v___x_556_);
lean_ctor_set_uint8(v___x_558_, sizeof(void*)*1, v___x_557_);
v___x_559_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_552_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
v___x_560_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__9));
v___x_561_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_559_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = lean_box(1);
v___x_563_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_561_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
v___x_564_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__11));
v___x_565_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_563_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
v___x_566_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v___x_551_);
v___x_567_ = lean_obj_once(&l_Lean_instReprExtraModUse_repr___redArg___closed__12, &l_Lean_instReprExtraModUse_repr___redArg___closed__12_once, _init_l_Lean_instReprExtraModUse_repr___redArg___closed__12);
v___x_568_ = l_Bool_repr___redArg(v_isExported_549_);
v___x_569_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_567_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
v___x_570_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_570_, 0, v___x_569_);
lean_ctor_set_uint8(v___x_570_, sizeof(void*)*1, v___x_557_);
v___x_571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_566_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
lean_ctor_set(v___x_572_, 1, v___x_560_);
v___x_573_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v___x_562_);
v___x_574_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__14));
v___x_575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_573_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___x_576_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v___x_551_);
v___x_577_ = l_Bool_repr___redArg(v_isMeta_550_);
v___x_578_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_553_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_579_, 0, v___x_578_);
lean_ctor_set_uint8(v___x_579_, sizeof(void*)*1, v___x_557_);
v___x_580_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_576_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
v___x_581_ = lean_obj_once(&l_Lean_instReprExtraModUse_repr___redArg___closed__17, &l_Lean_instReprExtraModUse_repr___redArg___closed__17_once, _init_l_Lean_instReprExtraModUse_repr___redArg___closed__17);
v___x_582_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__18));
v___x_583_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
lean_ctor_set(v___x_583_, 1, v___x_580_);
v___x_584_ = ((lean_object*)(l_Lean_instReprExtraModUse_repr___redArg___closed__19));
v___x_585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_581_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
v___x_587_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_587_, 0, v___x_586_);
lean_ctor_set_uint8(v___x_587_, sizeof(void*)*1, v___x_557_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr(lean_object* v_x_588_, lean_object* v_prec_589_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_instReprExtraModUse_repr___redArg(v_x_588_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprExtraModUse_repr___boxed(lean_object* v_x_591_, lean_object* v_prec_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_instReprExtraModUse_repr(v_x_591_, v_prec_592_);
lean_dec(v_prec_592_);
return v_res_593_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_596_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_597_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__0);
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg(){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___closed__1);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v___dummy_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg();
return v_res_602_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0(void){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___redArg();
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object* v_x_608_, lean_object* v_x_609_, lean_object* v_entries_610_){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_611_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___x_612_ = lean_array_mk(v_entries_610_);
v___x_613_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_611_);
lean_ctor_set(v___x_613_, 2, v___x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object* v_x_614_, lean_object* v_x_615_, lean_object* v_entries_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(v_x_614_, v_x_615_, v_entries_616_);
lean_dec_ref(v_x_615_);
lean_dec_ref(v_x_614_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object* v_es_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = lean_array_mk(v_es_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object* v_x_620_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__1___closed__0);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object* v_x_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(v_x_622_);
lean_dec_ref(v_x_622_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6___redArg(lean_object* v_x_624_, lean_object* v_x_625_, lean_object* v_x_626_, lean_object* v_x_627_){
_start:
{
lean_object* v_ks_628_; lean_object* v_vs_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_653_; 
v_ks_628_ = lean_ctor_get(v_x_624_, 0);
v_vs_629_ = lean_ctor_get(v_x_624_, 1);
v_isSharedCheck_653_ = !lean_is_exclusive(v_x_624_);
if (v_isSharedCheck_653_ == 0)
{
v___x_631_ = v_x_624_;
v_isShared_632_ = v_isSharedCheck_653_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_vs_629_);
lean_inc(v_ks_628_);
lean_dec(v_x_624_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_653_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_633_ = lean_array_get_size(v_ks_628_);
v___x_634_ = lean_nat_dec_lt(v_x_625_, v___x_633_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_638_; 
lean_dec(v_x_625_);
v___x_635_ = lean_array_push(v_ks_628_, v_x_626_);
v___x_636_ = lean_array_push(v_vs_629_, v_x_627_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 1, v___x_636_);
lean_ctor_set(v___x_631_, 0, v___x_635_);
v___x_638_ = v___x_631_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v___x_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
else
{
lean_object* v_k_x27_640_; uint8_t v___x_641_; 
v_k_x27_640_ = lean_array_fget_borrowed(v_ks_628_, v_x_625_);
v___x_641_ = l_Lean_instBEqExtraModUse_beq(v_x_626_, v_k_x27_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_643_; 
if (v_isShared_632_ == 0)
{
v___x_643_ = v___x_631_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_ks_628_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v_vs_629_);
v___x_643_ = v_reuseFailAlloc_647_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_unsigned_to_nat(1u);
v___x_645_ = lean_nat_add(v_x_625_, v___x_644_);
lean_dec(v_x_625_);
v_x_624_ = v___x_643_;
v_x_625_ = v___x_645_;
goto _start;
}
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_651_; 
v___x_648_ = lean_array_fset(v_ks_628_, v_x_625_, v_x_626_);
v___x_649_ = lean_array_fset(v_vs_629_, v_x_625_, v_x_627_);
lean_dec(v_x_625_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 1, v___x_649_);
lean_ctor_set(v___x_631_, 0, v___x_648_);
v___x_651_ = v___x_631_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v___x_648_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v___x_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5___redArg(lean_object* v_n_654_, lean_object* v_k_655_, lean_object* v_v_656_){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lean_unsigned_to_nat(0u);
v___x_658_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6___redArg(v_n_654_, v___x_657_, v_k_655_, v_v_656_);
return v___x_658_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = lean_box(0);
v___x_660_ = l_unsafeCast___redArg(v___x_659_);
return v___x_660_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object* v_x_662_, size_t v_x_663_, size_t v_x_664_, lean_object* v_x_665_, lean_object* v_x_666_){
_start:
{
if (lean_obj_tag(v_x_662_) == 0)
{
lean_object* v_es_667_; size_t v___x_668_; size_t v___x_669_; lean_object* v_j_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v_es_667_ = lean_ctor_get(v_x_662_, 0);
v___x_668_ = ((size_t)31ULL);
v___x_669_ = lean_usize_land(v_x_663_, v___x_668_);
v_j_670_ = lean_usize_to_nat(v___x_669_);
v___x_671_ = lean_array_get_size(v_es_667_);
v___x_672_ = lean_nat_dec_lt(v_j_670_, v___x_671_);
if (v___x_672_ == 0)
{
lean_dec(v_j_670_);
lean_dec(v_x_666_);
lean_dec_ref(v_x_665_);
return v_x_662_;
}
else
{
lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_711_; 
lean_inc_ref(v_es_667_);
v_isSharedCheck_711_ = !lean_is_exclusive(v_x_662_);
if (v_isSharedCheck_711_ == 0)
{
lean_object* v_unused_712_; 
v_unused_712_ = lean_ctor_get(v_x_662_, 0);
lean_dec(v_unused_712_);
v___x_674_ = v_x_662_;
v_isShared_675_ = v_isSharedCheck_711_;
goto v_resetjp_673_;
}
else
{
lean_dec(v_x_662_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_711_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v_v_676_; lean_object* v___x_677_; lean_object* v_xs_x27_678_; lean_object* v___y_680_; 
v_v_676_ = lean_array_fget(v_es_667_, v_j_670_);
v___x_677_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__0);
v_xs_x27_678_ = lean_array_fset(v_es_667_, v_j_670_, v___x_677_);
switch(lean_obj_tag(v_v_676_))
{
case 0:
{
lean_object* v_key_685_; lean_object* v_val_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_696_; 
v_key_685_ = lean_ctor_get(v_v_676_, 0);
v_val_686_ = lean_ctor_get(v_v_676_, 1);
v_isSharedCheck_696_ = !lean_is_exclusive(v_v_676_);
if (v_isSharedCheck_696_ == 0)
{
v___x_688_ = v_v_676_;
v_isShared_689_ = v_isSharedCheck_696_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_val_686_);
lean_inc(v_key_685_);
lean_dec(v_v_676_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_696_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
uint8_t v___x_690_; 
v___x_690_ = l_Lean_instBEqExtraModUse_beq(v_x_665_, v_key_685_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
lean_del_object(v___x_688_);
v___x_691_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_685_, v_val_686_, v_x_665_, v_x_666_);
v___x_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
v___y_680_ = v___x_692_;
goto v___jp_679_;
}
else
{
lean_object* v___x_694_; 
lean_dec(v_val_686_);
lean_dec(v_key_685_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 1, v_x_666_);
lean_ctor_set(v___x_688_, 0, v_x_665_);
v___x_694_ = v___x_688_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_x_665_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v_x_666_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
v___y_680_ = v___x_694_;
goto v___jp_679_;
}
}
}
}
case 1:
{
lean_object* v_node_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_709_; 
v_node_697_ = lean_ctor_get(v_v_676_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v_v_676_);
if (v_isSharedCheck_709_ == 0)
{
v___x_699_ = v_v_676_;
v_isShared_700_ = v_isSharedCheck_709_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_node_697_);
lean_dec(v_v_676_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_709_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
size_t v___x_701_; size_t v___x_702_; size_t v___x_703_; size_t v___x_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_701_ = ((size_t)5ULL);
v___x_702_ = lean_usize_shift_right(v_x_663_, v___x_701_);
v___x_703_ = ((size_t)1ULL);
v___x_704_ = lean_usize_add(v_x_664_, v___x_703_);
v___x_705_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_node_697_, v___x_702_, v___x_704_, v_x_665_, v_x_666_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 0, v___x_705_);
v___x_707_ = v___x_699_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
v___y_680_ = v___x_707_;
goto v___jp_679_;
}
}
}
default: 
{
lean_object* v___x_710_; 
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v_x_665_);
lean_ctor_set(v___x_710_, 1, v_x_666_);
v___y_680_ = v___x_710_;
goto v___jp_679_;
}
}
v___jp_679_:
{
lean_object* v___x_681_; lean_object* v___x_683_; 
v___x_681_ = lean_array_fset(v_xs_x27_678_, v_j_670_, v___y_680_);
lean_dec(v_j_670_);
if (v_isShared_675_ == 0)
{
lean_ctor_set(v___x_674_, 0, v___x_681_);
v___x_683_ = v___x_674_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v___x_681_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
else
{
lean_object* v_ks_713_; lean_object* v_vs_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_732_; 
v_ks_713_ = lean_ctor_get(v_x_662_, 0);
v_vs_714_ = lean_ctor_get(v_x_662_, 1);
v_isSharedCheck_732_ = !lean_is_exclusive(v_x_662_);
if (v_isSharedCheck_732_ == 0)
{
v___x_716_ = v_x_662_;
v_isShared_717_ = v_isSharedCheck_732_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_vs_714_);
lean_inc(v_ks_713_);
lean_dec(v_x_662_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_732_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_719_; 
if (v_isShared_717_ == 0)
{
v___x_719_ = v___x_716_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_ks_713_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_vs_714_);
v___x_719_ = v_reuseFailAlloc_731_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v_newNode_720_; size_t v___x_721_; uint8_t v___x_722_; 
v_newNode_720_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5___redArg(v___x_719_, v_x_665_, v_x_666_);
v___x_721_ = ((size_t)7ULL);
v___x_722_ = lean_usize_dec_le(v___x_721_, v_x_664_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v___x_723_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_720_);
v___x_724_ = lean_unsigned_to_nat(4u);
v___x_725_ = lean_nat_dec_lt(v___x_723_, v___x_724_);
lean_dec(v___x_723_);
if (v___x_725_ == 0)
{
lean_object* v_ks_726_; lean_object* v_vs_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v_ks_726_ = lean_ctor_get(v_newNode_720_, 0);
lean_inc_ref(v_ks_726_);
v_vs_727_ = lean_ctor_get(v_newNode_720_, 1);
lean_inc_ref(v_vs_727_);
lean_dec_ref(v_newNode_720_);
v___x_728_ = lean_unsigned_to_nat(0u);
v___x_729_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___closed__1);
v___x_730_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(v_x_664_, v_ks_726_, v_vs_727_, v___x_728_, v___x_729_);
lean_dec_ref(v_vs_727_);
lean_dec_ref(v_ks_726_);
return v___x_730_;
}
else
{
return v_newNode_720_;
}
}
else
{
return v_newNode_720_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(size_t v_depth_733_, lean_object* v_keys_734_, lean_object* v_vals_735_, lean_object* v_i_736_, lean_object* v_entries_737_){
_start:
{
lean_object* v___x_738_; uint8_t v___x_739_; 
v___x_738_ = lean_array_get_size(v_keys_734_);
v___x_739_ = lean_nat_dec_lt(v_i_736_, v___x_738_);
if (v___x_739_ == 0)
{
lean_dec(v_i_736_);
return v_entries_737_;
}
else
{
lean_object* v_k_740_; lean_object* v_v_741_; uint64_t v___x_742_; size_t v_h_743_; size_t v___x_744_; lean_object* v___x_745_; size_t v___x_746_; size_t v___x_747_; size_t v___x_748_; size_t v_h_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v_k_740_ = lean_array_fget_borrowed(v_keys_734_, v_i_736_);
v_v_741_ = lean_array_fget_borrowed(v_vals_735_, v_i_736_);
v___x_742_ = l_Lean_instHashableExtraModUse_hash(v_k_740_);
v_h_743_ = lean_uint64_to_usize(v___x_742_);
v___x_744_ = ((size_t)5ULL);
v___x_745_ = lean_unsigned_to_nat(1u);
v___x_746_ = ((size_t)1ULL);
v___x_747_ = lean_usize_sub(v_depth_733_, v___x_746_);
v___x_748_ = lean_usize_mul(v___x_744_, v___x_747_);
v_h_749_ = lean_usize_shift_right(v_h_743_, v___x_748_);
v___x_750_ = lean_nat_add(v_i_736_, v___x_745_);
lean_dec(v_i_736_);
lean_inc(v_v_741_);
lean_inc(v_k_740_);
v___x_751_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_entries_737_, v_h_749_, v_depth_733_, v_k_740_, v_v_741_);
v_i_736_ = v___x_750_;
v_entries_737_ = v___x_751_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_depth_753_, lean_object* v_keys_754_, lean_object* v_vals_755_, lean_object* v_i_756_, lean_object* v_entries_757_){
_start:
{
size_t v_depth_boxed_758_; lean_object* v_res_759_; 
v_depth_boxed_758_ = lean_unbox_usize(v_depth_753_);
lean_dec(v_depth_753_);
v_res_759_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(v_depth_boxed_758_, v_keys_754_, v_vals_755_, v_i_756_, v_entries_757_);
lean_dec_ref(v_vals_755_);
lean_dec_ref(v_keys_754_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object* v_x_760_, lean_object* v_x_761_, lean_object* v_x_762_, lean_object* v_x_763_, lean_object* v_x_764_){
_start:
{
size_t v_x_589__boxed_765_; size_t v_x_590__boxed_766_; lean_object* v_res_767_; 
v_x_589__boxed_765_ = lean_unbox_usize(v_x_761_);
lean_dec(v_x_761_);
v_x_590__boxed_766_ = lean_unbox_usize(v_x_762_);
lean_dec(v_x_762_);
v_res_767_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_x_760_, v_x_589__boxed_765_, v_x_590__boxed_766_, v_x_763_, v_x_764_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2___redArg(lean_object* v_x_768_, lean_object* v_x_769_, lean_object* v_x_770_){
_start:
{
uint64_t v___x_771_; size_t v___x_772_; size_t v___x_773_; lean_object* v___x_774_; 
v___x_771_ = l_Lean_instHashableExtraModUse_hash(v_x_769_);
v___x_772_ = lean_uint64_to_usize(v___x_771_);
v___x_773_ = ((size_t)1ULL);
v___x_774_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_x_768_, v___x_772_, v___x_773_, v_x_769_, v_x_770_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(lean_object* v_m_775_, lean_object* v_k_776_){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = lean_box(0);
v___x_778_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2___redArg(v_m_775_, v_k_776_, v___x_777_);
return v___x_778_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object* v_keys_779_, lean_object* v_i_780_, lean_object* v_k_781_){
_start:
{
lean_object* v___x_782_; uint8_t v___x_783_; 
v___x_782_ = lean_array_get_size(v_keys_779_);
v___x_783_ = lean_nat_dec_lt(v_i_780_, v___x_782_);
if (v___x_783_ == 0)
{
lean_dec(v_i_780_);
return v___x_783_;
}
else
{
lean_object* v_k_x27_784_; uint8_t v___x_785_; 
v_k_x27_784_ = lean_array_fget_borrowed(v_keys_779_, v_i_780_);
v___x_785_ = l_Lean_instBEqExtraModUse_beq(v_k_781_, v_k_x27_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = lean_unsigned_to_nat(1u);
v___x_787_ = lean_nat_add(v_i_780_, v___x_786_);
lean_dec(v_i_780_);
v_i_780_ = v___x_787_;
goto _start;
}
else
{
lean_dec(v_i_780_);
return v___x_783_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_789_, lean_object* v_i_790_, lean_object* v_k_791_){
_start:
{
uint8_t v_res_792_; lean_object* v_r_793_; 
v_res_792_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_keys_789_, v_i_790_, v_k_791_);
lean_dec_ref(v_k_791_);
lean_dec_ref(v_keys_789_);
v_r_793_ = lean_box(v_res_792_);
return v_r_793_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_794_, size_t v_x_795_, lean_object* v_x_796_){
_start:
{
if (lean_obj_tag(v_x_794_) == 0)
{
lean_object* v_es_797_; lean_object* v___x_798_; size_t v___x_799_; size_t v___x_800_; lean_object* v_j_801_; lean_object* v___x_802_; 
v_es_797_ = lean_ctor_get(v_x_794_, 0);
v___x_798_ = lean_box(2);
v___x_799_ = ((size_t)31ULL);
v___x_800_ = lean_usize_land(v_x_795_, v___x_799_);
v_j_801_ = lean_usize_to_nat(v___x_800_);
v___x_802_ = lean_array_get_borrowed(v___x_798_, v_es_797_, v_j_801_);
lean_dec(v_j_801_);
switch(lean_obj_tag(v___x_802_))
{
case 0:
{
lean_object* v_key_803_; uint8_t v___x_804_; 
v_key_803_ = lean_ctor_get(v___x_802_, 0);
v___x_804_ = l_Lean_instBEqExtraModUse_beq(v_x_796_, v_key_803_);
return v___x_804_;
}
case 1:
{
lean_object* v_node_805_; size_t v___x_806_; size_t v___x_807_; 
v_node_805_ = lean_ctor_get(v___x_802_, 0);
v___x_806_ = ((size_t)5ULL);
v___x_807_ = lean_usize_shift_right(v_x_795_, v___x_806_);
v_x_794_ = v_node_805_;
v_x_795_ = v___x_807_;
goto _start;
}
default: 
{
uint8_t v___x_809_; 
v___x_809_ = 0;
return v___x_809_;
}
}
}
else
{
lean_object* v_ks_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v_ks_810_ = lean_ctor_get(v_x_794_, 0);
v___x_811_ = lean_unsigned_to_nat(0u);
v___x_812_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_ks_810_, v___x_811_, v_x_796_);
return v___x_812_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_813_, lean_object* v_x_814_, lean_object* v_x_815_){
_start:
{
size_t v_x_773__boxed_816_; uint8_t v_res_817_; lean_object* v_r_818_; 
v_x_773__boxed_816_ = lean_unbox_usize(v_x_814_);
lean_dec(v_x_814_);
v_res_817_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_813_, v_x_773__boxed_816_, v_x_815_);
lean_dec_ref(v_x_815_);
lean_dec_ref(v_x_813_);
v_r_818_ = lean_box(v_res_817_);
return v_r_818_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(lean_object* v_x_819_, lean_object* v_x_820_){
_start:
{
uint64_t v___x_821_; size_t v___x_822_; uint8_t v___x_823_; 
v___x_821_ = l_Lean_instHashableExtraModUse_hash(v_x_820_);
v___x_822_ = lean_uint64_to_usize(v___x_821_);
v___x_823_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_819_, v___x_822_, v_x_820_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_x_824_, lean_object* v_x_825_){
_start:
{
uint8_t v_res_826_; lean_object* v_r_827_; 
v_res_826_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(v_x_824_, v_x_825_);
lean_dec_ref(v_x_825_);
lean_dec_ref(v_x_824_);
v_r_827_ = lean_box(v_res_826_);
return v_r_827_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___x_835_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__0___closed__0, &l_Lean_recordIndirectModUse___redArg___lam__0___closed__0_once, _init_l_Lean_recordIndirectModUse___redArg___lam__0___closed__0);
v___x_836_ = l_Lean_Name_str___override(v___x_835_, v___x_834_);
return v___x_836_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_));
v___x_838_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_);
v___x_839_ = l_Lean_Name_str___override(v___x_838_, v___x_837_);
return v___x_839_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_841_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___x_842_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_);
v___x_843_ = l_Lean_Name_str___override(v___x_842_, v___x_841_);
return v___x_843_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_844_ = lean_unsigned_to_nat(0u);
v___x_845_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_);
v___x_846_ = l_Lean_Name_num___override(v___x_845_, v___x_844_);
return v___x_846_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_847_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_));
v___x_848_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_);
v___x_849_ = l_Lean_Name_str___override(v___x_848_, v___x_847_);
return v___x_849_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_850_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__5___closed__0));
v___x_851_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_);
v___x_852_ = l_Lean_Name_str___override(v___x_851_, v___x_850_);
return v___x_852_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___f_863_; lean_object* v___f_864_; lean_object* v___f_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_860_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__15_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___x_861_ = lean_box(0);
v___x_862_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__13_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___f_863_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___f_864_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___f_865_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___x_866_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__12_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_);
v___x_867_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
lean_ctor_set(v___x_867_, 1, v___f_865_);
lean_ctor_set(v___x_867_, 2, v___f_864_);
lean_ctor_set(v___x_867_, 3, v___f_863_);
lean_ctor_set(v___x_867_, 4, v___x_862_);
lean_ctor_set(v___x_867_, 5, v___x_861_);
lean_ctor_set(v___x_867_, 6, v___x_860_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__16_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_);
v___x_870_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2____boxed(lean_object* v_a_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_();
return v_res_872_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_873_, lean_object* v_x_874_, lean_object* v_x_875_){
_start:
{
uint8_t v___x_876_; 
v___x_876_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(v_x_874_, v_x_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b2_877_, lean_object* v_x_878_, lean_object* v_x_879_){
_start:
{
uint8_t v_res_880_; lean_object* v_r_881_; 
v_res_880_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0(v_00_u03b2_877_, v_x_878_, v_x_879_);
lean_dec_ref(v_x_879_);
lean_dec_ref(v_x_878_);
v_r_881_ = lean_box(v_res_880_);
return v_r_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2(lean_object* v_00_u03b2_882_, lean_object* v_x_883_, lean_object* v_x_884_, lean_object* v_x_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2___redArg(v_x_883_, v_x_884_, v_x_885_);
return v___x_886_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_887_, lean_object* v_x_888_, size_t v_x_889_, lean_object* v_x_890_){
_start:
{
uint8_t v___x_891_; 
v___x_891_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_888_, v_x_889_, v_x_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_892_, lean_object* v_x_893_, lean_object* v_x_894_, lean_object* v_x_895_){
_start:
{
size_t v_x_973__boxed_896_; uint8_t v_res_897_; lean_object* v_r_898_; 
v_x_973__boxed_896_ = lean_unbox_usize(v_x_894_);
lean_dec(v_x_894_);
v_res_897_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_892_, v_x_893_, v_x_973__boxed_896_, v_x_895_);
lean_dec_ref(v_x_895_);
lean_dec_ref(v_x_893_);
v_r_898_ = lean_box(v_res_897_);
return v_r_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_00_u03b2_899_, lean_object* v_x_900_, size_t v_x_901_, size_t v_x_902_, lean_object* v_x_903_, lean_object* v_x_904_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___redArg(v_x_900_, v_x_901_, v_x_902_, v_x_903_, v_x_904_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_00_u03b2_906_, lean_object* v_x_907_, lean_object* v_x_908_, lean_object* v_x_909_, lean_object* v_x_910_, lean_object* v_x_911_){
_start:
{
size_t v_x_984__boxed_912_; size_t v_x_985__boxed_913_; lean_object* v_res_914_; 
v_x_984__boxed_912_ = lean_unbox_usize(v_x_908_);
lean_dec(v_x_908_);
v_x_985__boxed_913_ = lean_unbox_usize(v_x_909_);
lean_dec(v_x_909_);
v_res_914_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3(v_00_u03b2_906_, v_x_907_, v_x_984__boxed_912_, v_x_985__boxed_913_, v_x_910_, v_x_911_);
return v_res_914_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object* v_00_u03b2_915_, lean_object* v_keys_916_, lean_object* v_vals_917_, lean_object* v_heq_918_, lean_object* v_i_919_, lean_object* v_k_920_){
_start:
{
uint8_t v___x_921_; 
v___x_921_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_keys_916_, v_i_919_, v_k_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_922_, lean_object* v_keys_923_, lean_object* v_vals_924_, lean_object* v_heq_925_, lean_object* v_i_926_, lean_object* v_k_927_){
_start:
{
uint8_t v_res_928_; lean_object* v_r_929_; 
v_res_928_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0_spec__0_spec__2(v_00_u03b2_922_, v_keys_923_, v_vals_924_, v_heq_925_, v_i_926_, v_k_927_);
lean_dec_ref(v_k_927_);
lean_dec_ref(v_vals_924_);
lean_dec_ref(v_keys_923_);
v_r_929_ = lean_box(v_res_928_);
return v_r_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5(lean_object* v_00_u03b2_930_, lean_object* v_n_931_, lean_object* v_k_932_, lean_object* v_v_933_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5___redArg(v_n_931_, v_k_932_, v_v_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6(lean_object* v_00_u03b2_935_, size_t v_depth_936_, lean_object* v_keys_937_, lean_object* v_vals_938_, lean_object* v_heq_939_, lean_object* v_i_940_, lean_object* v_entries_941_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___redArg(v_depth_936_, v_keys_937_, v_vals_938_, v_i_940_, v_entries_941_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_943_, lean_object* v_depth_944_, lean_object* v_keys_945_, lean_object* v_vals_946_, lean_object* v_heq_947_, lean_object* v_i_948_, lean_object* v_entries_949_){
_start:
{
size_t v_depth_boxed_950_; lean_object* v_res_951_; 
v_depth_boxed_950_ = lean_unbox_usize(v_depth_944_);
lean_dec(v_depth_944_);
v_res_951_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__6(v_00_u03b2_943_, v_depth_boxed_950_, v_keys_945_, v_vals_946_, v_heq_947_, v_i_948_, v_entries_949_);
lean_dec_ref(v_vals_946_);
lean_dec_ref(v_keys_945_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_952_, lean_object* v_x_953_, lean_object* v_x_954_, lean_object* v_x_955_, lean_object* v_x_956_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__2_spec__3_spec__5_spec__6___redArg(v_x_953_, v_x_954_, v_x_955_, v_x_956_);
return v___x_957_;
}
}
static lean_object* _init_l_Lean_getExtraModUses___closed__0(void){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_958_;
}
}
static lean_object* _init_l_Lean_getExtraModUses___closed__1(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_959_ = lean_obj_once(&l_Lean_getExtraModUses___closed__0, &l_Lean_getExtraModUses___closed__0_once, _init_l_Lean_getExtraModUses___closed__0);
v___x_960_ = lean_box(0);
v___x_961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
lean_ctor_set(v___x_961_, 1, v___x_959_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExtraModUses(lean_object* v_env_962_, lean_object* v_modIdx_963_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; uint8_t v___x_966_; lean_object* v___x_967_; 
v___x_964_ = lean_obj_once(&l_Lean_getExtraModUses___closed__1, &l_Lean_getExtraModUses___closed__1_once, _init_l_Lean_getExtraModUses___closed__1);
v___x_965_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_966_ = 0;
v___x_967_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_964_, v___x_965_, v_env_962_, v_modIdx_963_, v___x_966_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExtraModUses___boxed(lean_object* v_env_968_, lean_object* v_modIdx_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lean_getExtraModUses(v_env_968_, v_modIdx_969_);
lean_dec(v_modIdx_969_);
lean_dec_ref(v_env_968_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(lean_object* v_as_x27_971_, lean_object* v_b_972_){
_start:
{
if (lean_obj_tag(v_as_x27_971_) == 0)
{
return v_b_972_;
}
else
{
lean_object* v_head_973_; lean_object* v_tail_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; uint8_t v___x_980_; 
v_head_973_ = lean_ctor_get(v_as_x27_971_, 0);
v_tail_974_ = lean_ctor_get(v_as_x27_971_, 1);
v___x_975_ = lean_obj_once(&l_Lean_getExtraModUses___closed__0, &l_Lean_getExtraModUses___closed__0_once, _init_l_Lean_getExtraModUses___closed__0);
v___x_976_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_977_ = lean_box(1);
v___x_978_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__0___closed__0, &l_Lean_recordIndirectModUse___redArg___lam__0___closed__0_once, _init_l_Lean_recordIndirectModUse___redArg___lam__0___closed__0);
lean_inc_ref(v_b_972_);
v___x_979_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_975_, v___x_976_, v_b_972_, v___x_977_, v___x_978_);
v___x_980_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__spec__0___redArg(v___x_979_, v_head_973_);
lean_dec(v___x_979_);
if (v___x_980_ == 0)
{
lean_object* v_toEnvExtension_981_; lean_object* v_asyncMode_982_; lean_object* v___x_983_; 
v_toEnvExtension_981_ = lean_ctor_get(v___x_976_, 0);
v_asyncMode_982_ = lean_ctor_get(v_toEnvExtension_981_, 2);
lean_inc(v_head_973_);
v___x_983_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_976_, v_b_972_, v_head_973_, v_asyncMode_982_, v___x_978_);
v_as_x27_971_ = v_tail_974_;
v_b_972_ = v___x_983_;
goto _start;
}
else
{
v_as_x27_971_ = v_tail_974_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg___boxed(lean_object* v_as_x27_986_, lean_object* v_b_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(v_as_x27_986_, v_b_987_);
lean_dec(v_as_x27_986_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_copyExtraModUses(lean_object* v_src_989_, lean_object* v_dest_990_){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_991_ = lean_obj_once(&l_Lean_getExtraModUses___closed__0, &l_Lean_getExtraModUses___closed__0_once, _init_l_Lean_getExtraModUses___closed__0);
v___x_992_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_993_ = lean_box(1);
v___x_994_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_991_, v___x_992_, v_src_989_, v___x_993_);
v___x_995_ = l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(v___x_994_, v_dest_990_);
lean_dec(v___x_994_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0(lean_object* v_as_996_, lean_object* v_as_x27_997_, lean_object* v_b_998_, lean_object* v_a_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___redArg(v_as_x27_997_, v_b_998_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0___boxed(lean_object* v_as_1001_, lean_object* v_as_x27_1002_, lean_object* v_b_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_List_forIn_x27_loop___at___00Lean_copyExtraModUses_spec__0(v_as_1001_, v_as_x27_1002_, v_b_1003_, v_a_1004_);
lean_dec(v_as_x27_1002_);
lean_dec(v_as_1001_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__0(lean_object* v___x_1006_, lean_object* v_entry_1007_, lean_object* v___x_1008_, lean_object* v_x_1009_){
_start:
{
lean_object* v_toEnvExtension_1010_; lean_object* v_asyncMode_1011_; lean_object* v___x_1012_; 
v_toEnvExtension_1010_ = lean_ctor_get(v___x_1006_, 0);
v_asyncMode_1011_ = lean_ctor_get(v_toEnvExtension_1010_, 2);
lean_inc(v_asyncMode_1011_);
v___x_1012_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1006_, v_x_1009_, v_entry_1007_, v_asyncMode_1011_, v___x_1008_);
lean_dec(v_asyncMode_1011_);
return v___x_1012_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__0));
v___x_1015_ = l_Lean_stringToMessageData(v___x_1014_);
return v___x_1015_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__2));
v___x_1018_ = l_Lean_stringToMessageData(v___x_1017_);
return v___x_1018_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__5(void){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__4));
v___x_1021_ = l_Lean_stringToMessageData(v___x_1020_);
return v___x_1021_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__7(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__6));
v___x_1024_ = l_Lean_stringToMessageData(v___x_1023_);
return v___x_1024_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__9(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__8));
v___x_1027_ = l_Lean_stringToMessageData(v___x_1026_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4(lean_object* v_modifyEnv_1032_, lean_object* v___f_1033_, lean_object* v_inst_1034_, lean_object* v_inst_1035_, lean_object* v_inst_1036_, lean_object* v_inst_1037_, lean_object* v_cls_1038_, lean_object* v_toBind_1039_, lean_object* v___f_1040_, lean_object* v_mod_1041_, lean_object* v_hint_1042_, uint8_t v_isMeta_1043_, uint8_t v_isExporting_1044_, uint8_t v_____do__lift_1045_){
_start:
{
lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1053_; lean_object* v___y_1054_; 
if (v_____do__lift_1045_ == 0)
{
lean_object* v___x_1066_; 
lean_dec(v_hint_1042_);
lean_dec(v_mod_1041_);
lean_dec(v___f_1040_);
lean_dec(v_toBind_1039_);
lean_dec(v_cls_1038_);
lean_dec(v_inst_1037_);
lean_dec_ref(v_inst_1036_);
lean_dec_ref(v_inst_1035_);
lean_dec_ref(v_inst_1034_);
v___x_1066_ = lean_apply_1(v_modifyEnv_1032_, v___f_1033_);
return v___x_1066_;
}
else
{
lean_object* v___x_1067_; lean_object* v___y_1069_; 
lean_dec_ref(v___f_1033_);
lean_dec(v_modifyEnv_1032_);
v___x_1067_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__7);
if (v_isExporting_1044_ == 0)
{
lean_object* v___x_1076_; 
v___x_1076_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__12));
v___y_1069_ = v___x_1076_;
goto v___jp_1068_;
}
else
{
lean_object* v___x_1077_; 
v___x_1077_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__13));
v___y_1069_ = v___x_1077_;
goto v___jp_1068_;
}
v___jp_1068_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
lean_inc_ref(v___y_1069_);
v___x_1070_ = l_Lean_stringToMessageData(v___y_1069_);
v___x_1071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1067_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__9);
v___x_1073_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
if (v_isMeta_1043_ == 0)
{
lean_object* v___x_1074_; 
v___x_1074_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__10));
v___y_1053_ = v___x_1073_;
v___y_1054_ = v___x_1074_;
goto v___jp_1052_;
}
else
{
lean_object* v___x_1075_; 
v___x_1075_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__11));
v___y_1053_ = v___x_1073_;
v___y_1054_ = v___x_1075_;
goto v___jp_1052_;
}
}
}
v___jp_1046_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___y_1047_);
lean_ctor_set(v___x_1049_, 1, v___y_1048_);
v___x_1050_ = l_Lean_addTrace___redArg(v_inst_1034_, v_inst_1035_, v_inst_1036_, v_inst_1037_, v_cls_1038_, v___x_1049_);
v___x_1051_ = lean_apply_4(v_toBind_1039_, lean_box(0), lean_box(0), v___x_1050_, v___f_1040_);
return v___x_1051_;
}
v___jp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; uint8_t v___x_1061_; 
lean_inc_ref(v___y_1054_);
v___x_1055_ = l_Lean_stringToMessageData(v___y_1054_);
v___x_1056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___y_1053_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__1);
v___x_1058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1056_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = l_Lean_MessageData_ofName(v_mod_1041_);
v___x_1060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = l_Lean_Name_isAnonymous(v_hint_1042_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1062_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__3);
v___x_1063_ = l_Lean_MessageData_ofName(v_hint_1042_);
v___x_1064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___y_1047_ = v___x_1060_;
v___y_1048_ = v___x_1064_;
goto v___jp_1046_;
}
else
{
lean_object* v___x_1065_; 
lean_dec(v_hint_1042_);
v___x_1065_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___closed__5);
v___y_1047_ = v___x_1060_;
v___y_1048_ = v___x_1065_;
goto v___jp_1046_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___boxed(lean_object* v_modifyEnv_1078_, lean_object* v___f_1079_, lean_object* v_inst_1080_, lean_object* v_inst_1081_, lean_object* v_inst_1082_, lean_object* v_inst_1083_, lean_object* v_cls_1084_, lean_object* v_toBind_1085_, lean_object* v___f_1086_, lean_object* v_mod_1087_, lean_object* v_hint_1088_, lean_object* v_isMeta_1089_, lean_object* v_isExporting_1090_, lean_object* v_____do__lift_1091_){
_start:
{
uint8_t v_isMeta_boxed_1092_; uint8_t v_isExporting_boxed_1093_; uint8_t v_____do__lift_564__boxed_1094_; lean_object* v_res_1095_; 
v_isMeta_boxed_1092_ = lean_unbox(v_isMeta_1089_);
v_isExporting_boxed_1093_ = lean_unbox(v_isExporting_1090_);
v_____do__lift_564__boxed_1094_ = lean_unbox(v_____do__lift_1091_);
v_res_1095_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4(v_modifyEnv_1078_, v___f_1079_, v_inst_1080_, v_inst_1081_, v_inst_1082_, v_inst_1083_, v_cls_1084_, v_toBind_1085_, v___f_1086_, v_mod_1087_, v_hint_1088_, v_isMeta_boxed_1092_, v_isExporting_boxed_1093_, v_____do__lift_564__boxed_1094_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__1(lean_object* v___x_1096_, lean_object* v___x_1097_, lean_object* v___x_1098_, lean_object* v_entry_1099_, lean_object* v_inst_1100_, lean_object* v_modifyEnv_1101_, lean_object* v_toPure_1102_, lean_object* v_toBind_1103_, lean_object* v_inst_1104_, lean_object* v_inst_1105_, lean_object* v_inst_1106_, lean_object* v_inst_1107_, lean_object* v_mod_1108_, lean_object* v_hint_1109_, uint8_t v_isMeta_1110_, uint8_t v_isExporting_1111_, lean_object* v_____do__lift_1112_){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; 
v___x_1113_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1114_ = lean_box(1);
v___x_1115_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__0___closed__0, &l_Lean_recordIndirectModUse___redArg___lam__0___closed__0_once, _init_l_Lean_recordIndirectModUse___redArg___lam__0___closed__0);
v___x_1116_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1096_, v___x_1113_, v_____do__lift_1112_, v___x_1114_, v___x_1115_);
lean_inc_ref(v_entry_1099_);
v___x_1117_ = l_Lean_PersistentHashMap_contains___redArg(v___x_1097_, v___x_1098_, v___x_1116_, v_entry_1099_);
if (v___x_1117_ == 0)
{
lean_object* v_getInheritedTraceOptions_1118_; lean_object* v___f_1119_; lean_object* v___f_1120_; lean_object* v_cls_1121_; lean_object* v___f_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___f_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v_getInheritedTraceOptions_1118_ = lean_ctor_get(v_inst_1100_, 2);
lean_inc(v_getInheritedTraceOptions_1118_);
v___f_1119_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1119_, 0, v___x_1113_);
lean_closure_set(v___f_1119_, 1, v_entry_1099_);
lean_closure_set(v___f_1119_, 2, v___x_1115_);
lean_inc_ref(v___f_1119_);
lean_inc(v_modifyEnv_1101_);
v___f_1120_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1120_, 0, v_modifyEnv_1101_);
lean_closure_set(v___f_1120_, 1, v___f_1119_);
v_cls_1121_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__5___closed__1));
lean_inc_n(v_toBind_1103_, 3);
v___f_1122_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1122_, 0, v_toPure_1102_);
lean_closure_set(v___f_1122_, 1, v_cls_1121_);
lean_closure_set(v___f_1122_, 2, v_toBind_1103_);
lean_closure_set(v___f_1122_, 3, v_inst_1104_);
v___x_1123_ = lean_box(v_isMeta_1110_);
v___x_1124_ = lean_box(v_isExporting_1111_);
v___f_1125_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_1125_, 0, v_modifyEnv_1101_);
lean_closure_set(v___f_1125_, 1, v___f_1119_);
lean_closure_set(v___f_1125_, 2, v_inst_1105_);
lean_closure_set(v___f_1125_, 3, v_inst_1100_);
lean_closure_set(v___f_1125_, 4, v_inst_1106_);
lean_closure_set(v___f_1125_, 5, v_inst_1107_);
lean_closure_set(v___f_1125_, 6, v_cls_1121_);
lean_closure_set(v___f_1125_, 7, v_toBind_1103_);
lean_closure_set(v___f_1125_, 8, v___f_1120_);
lean_closure_set(v___f_1125_, 9, v_mod_1108_);
lean_closure_set(v___f_1125_, 10, v_hint_1109_);
lean_closure_set(v___f_1125_, 11, v___x_1123_);
lean_closure_set(v___f_1125_, 12, v___x_1124_);
v___x_1126_ = lean_apply_4(v_toBind_1103_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_1118_, v___f_1122_);
v___x_1127_ = lean_apply_4(v_toBind_1103_, lean_box(0), lean_box(0), v___x_1126_, v___f_1125_);
return v___x_1127_;
}
else
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
lean_dec(v_hint_1109_);
lean_dec(v_mod_1108_);
lean_dec(v_inst_1107_);
lean_dec_ref(v_inst_1106_);
lean_dec_ref(v_inst_1105_);
lean_dec(v_inst_1104_);
lean_dec(v_toBind_1103_);
lean_dec(v_modifyEnv_1101_);
lean_dec_ref(v_inst_1100_);
lean_dec_ref(v_entry_1099_);
v___x_1128_ = lean_box(0);
v___x_1129_ = lean_apply_2(v_toPure_1102_, lean_box(0), v___x_1128_);
return v___x_1129_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_1130_ = _args[0];
lean_object* v___x_1131_ = _args[1];
lean_object* v___x_1132_ = _args[2];
lean_object* v_entry_1133_ = _args[3];
lean_object* v_inst_1134_ = _args[4];
lean_object* v_modifyEnv_1135_ = _args[5];
lean_object* v_toPure_1136_ = _args[6];
lean_object* v_toBind_1137_ = _args[7];
lean_object* v_inst_1138_ = _args[8];
lean_object* v_inst_1139_ = _args[9];
lean_object* v_inst_1140_ = _args[10];
lean_object* v_inst_1141_ = _args[11];
lean_object* v_mod_1142_ = _args[12];
lean_object* v_hint_1143_ = _args[13];
lean_object* v_isMeta_1144_ = _args[14];
lean_object* v_isExporting_1145_ = _args[15];
lean_object* v_____do__lift_1146_ = _args[16];
_start:
{
uint8_t v_isMeta_boxed_1147_; uint8_t v_isExporting_boxed_1148_; lean_object* v_res_1149_; 
v_isMeta_boxed_1147_ = lean_unbox(v_isMeta_1144_);
v_isExporting_boxed_1148_ = lean_unbox(v_isExporting_1145_);
v_res_1149_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__1(v___x_1130_, v___x_1131_, v___x_1132_, v_entry_1133_, v_inst_1134_, v_modifyEnv_1135_, v_toPure_1136_, v_toBind_1137_, v_inst_1138_, v_inst_1139_, v_inst_1140_, v_inst_1141_, v_mod_1142_, v_hint_1143_, v_isMeta_boxed_1147_, v_isExporting_boxed_1148_, v_____do__lift_1146_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2(lean_object* v_mod_1150_, uint8_t v_isMeta_1151_, lean_object* v___x_1152_, lean_object* v___x_1153_, lean_object* v___x_1154_, lean_object* v_inst_1155_, lean_object* v_modifyEnv_1156_, lean_object* v_toPure_1157_, lean_object* v_toBind_1158_, lean_object* v_inst_1159_, lean_object* v_inst_1160_, lean_object* v_inst_1161_, lean_object* v_inst_1162_, lean_object* v_hint_1163_, lean_object* v_getEnv_1164_, lean_object* v_____do__lift_1165_){
_start:
{
uint8_t v_isExporting_1166_; lean_object* v_entry_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___f_1170_; lean_object* v___x_1171_; 
v_isExporting_1166_ = lean_ctor_get_uint8(v_____do__lift_1165_, sizeof(void*)*8);
lean_inc(v_mod_1150_);
v_entry_1167_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1167_, 0, v_mod_1150_);
lean_ctor_set_uint8(v_entry_1167_, sizeof(void*)*1, v_isExporting_1166_);
lean_ctor_set_uint8(v_entry_1167_, sizeof(void*)*1 + 1, v_isMeta_1151_);
v___x_1168_ = lean_box(v_isMeta_1151_);
v___x_1169_ = lean_box(v_isExporting_1166_);
lean_inc(v_toBind_1158_);
v___f_1170_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__1___boxed), 17, 16);
lean_closure_set(v___f_1170_, 0, v___x_1152_);
lean_closure_set(v___f_1170_, 1, v___x_1153_);
lean_closure_set(v___f_1170_, 2, v___x_1154_);
lean_closure_set(v___f_1170_, 3, v_entry_1167_);
lean_closure_set(v___f_1170_, 4, v_inst_1155_);
lean_closure_set(v___f_1170_, 5, v_modifyEnv_1156_);
lean_closure_set(v___f_1170_, 6, v_toPure_1157_);
lean_closure_set(v___f_1170_, 7, v_toBind_1158_);
lean_closure_set(v___f_1170_, 8, v_inst_1159_);
lean_closure_set(v___f_1170_, 9, v_inst_1160_);
lean_closure_set(v___f_1170_, 10, v_inst_1161_);
lean_closure_set(v___f_1170_, 11, v_inst_1162_);
lean_closure_set(v___f_1170_, 12, v_mod_1150_);
lean_closure_set(v___f_1170_, 13, v_hint_1163_);
lean_closure_set(v___f_1170_, 14, v___x_1168_);
lean_closure_set(v___f_1170_, 15, v___x_1169_);
v___x_1171_ = lean_apply_4(v_toBind_1158_, lean_box(0), lean_box(0), v_getEnv_1164_, v___f_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2___boxed(lean_object* v_mod_1172_, lean_object* v_isMeta_1173_, lean_object* v___x_1174_, lean_object* v___x_1175_, lean_object* v___x_1176_, lean_object* v_inst_1177_, lean_object* v_modifyEnv_1178_, lean_object* v_toPure_1179_, lean_object* v_toBind_1180_, lean_object* v_inst_1181_, lean_object* v_inst_1182_, lean_object* v_inst_1183_, lean_object* v_inst_1184_, lean_object* v_hint_1185_, lean_object* v_getEnv_1186_, lean_object* v_____do__lift_1187_){
_start:
{
uint8_t v_isMeta_boxed_1188_; lean_object* v_res_1189_; 
v_isMeta_boxed_1188_ = lean_unbox(v_isMeta_1173_);
v_res_1189_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2(v_mod_1172_, v_isMeta_boxed_1188_, v___x_1174_, v___x_1175_, v___x_1176_, v_inst_1177_, v_modifyEnv_1178_, v_toPure_1179_, v_toBind_1180_, v_inst_1181_, v_inst_1182_, v_inst_1183_, v_inst_1184_, v_hint_1185_, v_getEnv_1186_, v_____do__lift_1187_);
lean_dec_ref(v_____do__lift_1187_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(lean_object* v_inst_1190_, lean_object* v_inst_1191_, lean_object* v_inst_1192_, lean_object* v_inst_1193_, lean_object* v_inst_1194_, lean_object* v_inst_1195_, lean_object* v_mod_1196_, uint8_t v_isMeta_1197_, lean_object* v_hint_1198_){
_start:
{
lean_object* v_toApplicative_1199_; lean_object* v_toBind_1200_; lean_object* v_getEnv_1201_; lean_object* v_modifyEnv_1202_; lean_object* v_toPure_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___f_1208_; lean_object* v___x_1209_; 
v_toApplicative_1199_ = lean_ctor_get(v_inst_1190_, 0);
v_toBind_1200_ = lean_ctor_get(v_inst_1190_, 1);
lean_inc_n(v_toBind_1200_, 2);
v_getEnv_1201_ = lean_ctor_get(v_inst_1191_, 0);
lean_inc_n(v_getEnv_1201_, 2);
v_modifyEnv_1202_ = lean_ctor_get(v_inst_1191_, 1);
lean_inc(v_modifyEnv_1202_);
lean_dec_ref(v_inst_1191_);
v_toPure_1203_ = lean_ctor_get(v_toApplicative_1199_, 1);
lean_inc(v_toPure_1203_);
v___x_1204_ = ((lean_object*)(l_Lean_instBEqExtraModUse___closed__0));
v___x_1205_ = ((lean_object*)(l_Lean_instHashableExtraModUse___closed__0));
v___x_1206_ = lean_obj_once(&l_Lean_getExtraModUses___closed__0, &l_Lean_getExtraModUses___closed__0_once, _init_l_Lean_getExtraModUses___closed__0);
v___x_1207_ = lean_box(v_isMeta_1197_);
v___f_1208_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___lam__2___boxed), 16, 15);
lean_closure_set(v___f_1208_, 0, v_mod_1196_);
lean_closure_set(v___f_1208_, 1, v___x_1207_);
lean_closure_set(v___f_1208_, 2, v___x_1206_);
lean_closure_set(v___f_1208_, 3, v___x_1204_);
lean_closure_set(v___f_1208_, 4, v___x_1205_);
lean_closure_set(v___f_1208_, 5, v_inst_1192_);
lean_closure_set(v___f_1208_, 6, v_modifyEnv_1202_);
lean_closure_set(v___f_1208_, 7, v_toPure_1203_);
lean_closure_set(v___f_1208_, 8, v_toBind_1200_);
lean_closure_set(v___f_1208_, 9, v_inst_1193_);
lean_closure_set(v___f_1208_, 10, v_inst_1190_);
lean_closure_set(v___f_1208_, 11, v_inst_1194_);
lean_closure_set(v___f_1208_, 12, v_inst_1195_);
lean_closure_set(v___f_1208_, 13, v_hint_1198_);
lean_closure_set(v___f_1208_, 14, v_getEnv_1201_);
v___x_1209_ = lean_apply_4(v_toBind_1200_, lean_box(0), lean_box(0), v_getEnv_1201_, v___f_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg___boxed(lean_object* v_inst_1210_, lean_object* v_inst_1211_, lean_object* v_inst_1212_, lean_object* v_inst_1213_, lean_object* v_inst_1214_, lean_object* v_inst_1215_, lean_object* v_mod_1216_, lean_object* v_isMeta_1217_, lean_object* v_hint_1218_){
_start:
{
uint8_t v_isMeta_boxed_1219_; lean_object* v_res_1220_; 
v_isMeta_boxed_1219_ = lean_unbox(v_isMeta_1217_);
v_res_1220_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1210_, v_inst_1211_, v_inst_1212_, v_inst_1213_, v_inst_1214_, v_inst_1215_, v_mod_1216_, v_isMeta_boxed_1219_, v_hint_1218_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore(lean_object* v_m_1221_, lean_object* v_inst_1222_, lean_object* v_inst_1223_, lean_object* v_inst_1224_, lean_object* v_inst_1225_, lean_object* v_inst_1226_, lean_object* v_inst_1227_, lean_object* v_mod_1228_, uint8_t v_isMeta_1229_, lean_object* v_hint_1230_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1222_, v_inst_1223_, v_inst_1224_, v_inst_1225_, v_inst_1226_, v_inst_1227_, v_mod_1228_, v_isMeta_1229_, v_hint_1230_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___boxed(lean_object* v_m_1232_, lean_object* v_inst_1233_, lean_object* v_inst_1234_, lean_object* v_inst_1235_, lean_object* v_inst_1236_, lean_object* v_inst_1237_, lean_object* v_inst_1238_, lean_object* v_mod_1239_, lean_object* v_isMeta_1240_, lean_object* v_hint_1241_){
_start:
{
uint8_t v_isMeta_boxed_1242_; lean_object* v_res_1243_; 
v_isMeta_boxed_1242_ = lean_unbox(v_isMeta_1240_);
v_res_1243_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore(v_m_1232_, v_inst_1233_, v_inst_1234_, v_inst_1235_, v_inst_1236_, v_inst_1237_, v_inst_1238_, v_mod_1239_, v_isMeta_boxed_1242_, v_hint_1241_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___lam__0(lean_object* v_modName_1244_, lean_object* v_inst_1245_, lean_object* v_inst_1246_, lean_object* v_inst_1247_, lean_object* v_inst_1248_, lean_object* v_inst_1249_, lean_object* v_inst_1250_, uint8_t v_isMeta_1251_, lean_object* v_toPure_1252_, lean_object* v_____do__lift_1253_){
_start:
{
lean_object* v___x_1254_; uint8_t v___x_1255_; 
v___x_1254_ = l_Lean_Environment_mainModule(v_____do__lift_1253_);
v___x_1255_ = lean_name_eq(v_modName_1244_, v___x_1254_);
lean_dec(v___x_1254_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
lean_dec(v_toPure_1252_);
v___x_1256_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__0___closed__0, &l_Lean_recordIndirectModUse___redArg___lam__0___closed__0_once, _init_l_Lean_recordIndirectModUse___redArg___lam__0___closed__0);
v___x_1257_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1245_, v_inst_1246_, v_inst_1247_, v_inst_1248_, v_inst_1249_, v_inst_1250_, v_modName_1244_, v_isMeta_1251_, v___x_1256_);
return v___x_1257_;
}
else
{
lean_object* v___x_1258_; lean_object* v___x_1259_; 
lean_dec(v_inst_1250_);
lean_dec_ref(v_inst_1249_);
lean_dec(v_inst_1248_);
lean_dec_ref(v_inst_1247_);
lean_dec_ref(v_inst_1246_);
lean_dec_ref(v_inst_1245_);
lean_dec(v_modName_1244_);
v___x_1258_ = lean_box(0);
v___x_1259_ = lean_apply_2(v_toPure_1252_, lean_box(0), v___x_1258_);
return v___x_1259_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___lam__0___boxed(lean_object* v_modName_1260_, lean_object* v_inst_1261_, lean_object* v_inst_1262_, lean_object* v_inst_1263_, lean_object* v_inst_1264_, lean_object* v_inst_1265_, lean_object* v_inst_1266_, lean_object* v_isMeta_1267_, lean_object* v_toPure_1268_, lean_object* v_____do__lift_1269_){
_start:
{
uint8_t v_isMeta_boxed_1270_; lean_object* v_res_1271_; 
v_isMeta_boxed_1270_ = lean_unbox(v_isMeta_1267_);
v_res_1271_ = l_Lean_recordExtraModUse___redArg___lam__0(v_modName_1260_, v_inst_1261_, v_inst_1262_, v_inst_1263_, v_inst_1264_, v_inst_1265_, v_inst_1266_, v_isMeta_boxed_1270_, v_toPure_1268_, v_____do__lift_1269_);
lean_dec_ref(v_____do__lift_1269_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg(lean_object* v_inst_1272_, lean_object* v_inst_1273_, lean_object* v_inst_1274_, lean_object* v_inst_1275_, lean_object* v_inst_1276_, lean_object* v_inst_1277_, lean_object* v_modName_1278_, uint8_t v_isMeta_1279_){
_start:
{
lean_object* v_toApplicative_1280_; lean_object* v_toBind_1281_; lean_object* v_getEnv_1282_; lean_object* v_toPure_1283_; lean_object* v___x_1284_; lean_object* v___f_1285_; lean_object* v___x_1286_; 
v_toApplicative_1280_ = lean_ctor_get(v_inst_1272_, 0);
v_toBind_1281_ = lean_ctor_get(v_inst_1272_, 1);
lean_inc(v_toBind_1281_);
v_getEnv_1282_ = lean_ctor_get(v_inst_1273_, 0);
lean_inc(v_getEnv_1282_);
v_toPure_1283_ = lean_ctor_get(v_toApplicative_1280_, 1);
lean_inc(v_toPure_1283_);
v___x_1284_ = lean_box(v_isMeta_1279_);
v___f_1285_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUse___redArg___lam__0___boxed), 10, 9);
lean_closure_set(v___f_1285_, 0, v_modName_1278_);
lean_closure_set(v___f_1285_, 1, v_inst_1272_);
lean_closure_set(v___f_1285_, 2, v_inst_1273_);
lean_closure_set(v___f_1285_, 3, v_inst_1274_);
lean_closure_set(v___f_1285_, 4, v_inst_1275_);
lean_closure_set(v___f_1285_, 5, v_inst_1276_);
lean_closure_set(v___f_1285_, 6, v_inst_1277_);
lean_closure_set(v___f_1285_, 7, v___x_1284_);
lean_closure_set(v___f_1285_, 8, v_toPure_1283_);
v___x_1286_ = lean_apply_4(v_toBind_1281_, lean_box(0), lean_box(0), v_getEnv_1282_, v___f_1285_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___redArg___boxed(lean_object* v_inst_1287_, lean_object* v_inst_1288_, lean_object* v_inst_1289_, lean_object* v_inst_1290_, lean_object* v_inst_1291_, lean_object* v_inst_1292_, lean_object* v_modName_1293_, lean_object* v_isMeta_1294_){
_start:
{
uint8_t v_isMeta_boxed_1295_; lean_object* v_res_1296_; 
v_isMeta_boxed_1295_ = lean_unbox(v_isMeta_1294_);
v_res_1296_ = l_Lean_recordExtraModUse___redArg(v_inst_1287_, v_inst_1288_, v_inst_1289_, v_inst_1290_, v_inst_1291_, v_inst_1292_, v_modName_1293_, v_isMeta_boxed_1295_);
return v_res_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse(lean_object* v_m_1297_, lean_object* v_inst_1298_, lean_object* v_inst_1299_, lean_object* v_inst_1300_, lean_object* v_inst_1301_, lean_object* v_inst_1302_, lean_object* v_inst_1303_, lean_object* v_modName_1304_, uint8_t v_isMeta_1305_){
_start:
{
lean_object* v___x_1306_; 
v___x_1306_ = l_Lean_recordExtraModUse___redArg(v_inst_1298_, v_inst_1299_, v_inst_1300_, v_inst_1301_, v_inst_1302_, v_inst_1303_, v_modName_1304_, v_isMeta_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUse___boxed(lean_object* v_m_1307_, lean_object* v_inst_1308_, lean_object* v_inst_1309_, lean_object* v_inst_1310_, lean_object* v_inst_1311_, lean_object* v_inst_1312_, lean_object* v_inst_1313_, lean_object* v_modName_1314_, lean_object* v_isMeta_1315_){
_start:
{
uint8_t v_isMeta_boxed_1316_; lean_object* v_res_1317_; 
v_isMeta_boxed_1316_ = lean_unbox(v_isMeta_1315_);
v_res_1317_ = l_Lean_recordExtraModUse(v_m_1307_, v_inst_1308_, v_inst_1309_, v_inst_1310_, v_inst_1311_, v_inst_1312_, v_inst_1313_, v_modName_1314_, v_isMeta_boxed_1316_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__0(lean_object* v_toPure_1318_, lean_object* v_____s_1319_){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = lean_box(0);
v___x_1321_ = lean_apply_2(v_toPure_1318_, lean_box(0), v___x_1320_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__1(lean_object* v___x_1322_, lean_object* v_toPure_1323_, lean_object* v_r_1324_){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1325_, 0, v___x_1322_);
v___x_1326_ = lean_apply_2(v_toPure_1323_, lean_box(0), v___x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__2(lean_object* v_env_1327_, lean_object* v___x_1328_, lean_object* v_inst_1329_, lean_object* v_inst_1330_, lean_object* v_inst_1331_, lean_object* v_inst_1332_, lean_object* v_inst_1333_, lean_object* v_inst_1334_, lean_object* v_declName_1335_, lean_object* v_toBind_1336_, lean_object* v___f_1337_, lean_object* v_a_1338_, lean_object* v_x_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v___x_1341_; lean_object* v_modules_1342_; lean_object* v___x_1343_; lean_object* v_toImport_1344_; lean_object* v_module_1345_; uint8_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1341_ = l_Lean_Environment_header(v_env_1327_);
v_modules_1342_ = lean_ctor_get(v___x_1341_, 3);
lean_inc_ref(v_modules_1342_);
lean_dec_ref(v___x_1341_);
v___x_1343_ = lean_array_get(v___x_1328_, v_modules_1342_, v_a_1338_);
lean_dec_ref(v_modules_1342_);
v_toImport_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc_ref(v_toImport_1344_);
lean_dec(v___x_1343_);
v_module_1345_ = lean_ctor_get(v_toImport_1344_, 0);
lean_inc(v_module_1345_);
lean_dec_ref(v_toImport_1344_);
v___x_1346_ = 0;
v___x_1347_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1329_, v_inst_1330_, v_inst_1331_, v_inst_1332_, v_inst_1333_, v_inst_1334_, v_module_1345_, v___x_1346_, v_declName_1335_);
v___x_1348_ = lean_apply_4(v_toBind_1336_, lean_box(0), lean_box(0), v___x_1347_, v___f_1337_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__2___boxed(lean_object* v_env_1349_, lean_object* v___x_1350_, lean_object* v_inst_1351_, lean_object* v_inst_1352_, lean_object* v_inst_1353_, lean_object* v_inst_1354_, lean_object* v_inst_1355_, lean_object* v_inst_1356_, lean_object* v_declName_1357_, lean_object* v_toBind_1358_, lean_object* v___f_1359_, lean_object* v_a_1360_, lean_object* v_x_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_Lean_recordExtraModUseFromDecl___redArg___lam__2(v_env_1349_, v___x_1350_, v_inst_1351_, v_inst_1352_, v_inst_1353_, v_inst_1354_, v_inst_1355_, v_inst_1356_, v_declName_1357_, v_toBind_1358_, v___f_1359_, v_a_1360_, v_x_1361_, v___y_1362_);
lean_dec(v_a_1360_);
lean_dec_ref(v___x_1350_);
lean_dec_ref(v_env_1349_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__3(lean_object* v_toPure_1364_, lean_object* v_env_1365_, lean_object* v___x_1366_, lean_object* v_inst_1367_, lean_object* v_inst_1368_, lean_object* v_inst_1369_, lean_object* v_inst_1370_, lean_object* v_inst_1371_, lean_object* v_inst_1372_, lean_object* v_declName_1373_, lean_object* v_toBind_1374_, lean_object* v___f_1375_, lean_object* v___x_1376_, lean_object* v___x_1377_, lean_object* v___x_1378_, lean_object* v_____r_1379_){
_start:
{
lean_object* v___y_1381_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1389_ = l_Lean_indirectModUseExt;
v___x_1390_ = lean_box(1);
v___x_1391_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__0___closed__0, &l_Lean_recordIndirectModUse___redArg___lam__0___closed__0_once, _init_l_Lean_recordIndirectModUse___redArg___lam__0___closed__0);
lean_inc_ref(v_env_1365_);
v___x_1392_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1376_, v___x_1389_, v_env_1365_, v___x_1390_, v___x_1391_);
lean_inc(v_declName_1373_);
v___x_1393_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_1377_, v___x_1378_, v___x_1392_, v_declName_1373_);
lean_dec(v___x_1392_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v___x_1394_; 
v___x_1394_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2__spec__0_spec__2___lam__0___closed__0));
v___y_1381_ = v___x_1394_;
goto v___jp_1380_;
}
else
{
lean_object* v_val_1395_; 
v_val_1395_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_val_1395_);
lean_dec_ref_known(v___x_1393_, 1);
v___y_1381_ = v_val_1395_;
goto v___jp_1380_;
}
v___jp_1380_:
{
lean_object* v___x_1382_; lean_object* v___f_1383_; lean_object* v___f_1384_; size_t v_sz_1385_; size_t v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1382_ = lean_box(0);
v___f_1383_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1383_, 0, v___x_1382_);
lean_closure_set(v___f_1383_, 1, v_toPure_1364_);
lean_inc(v_toBind_1374_);
lean_inc_ref(v_inst_1367_);
v___f_1384_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__2___boxed), 14, 11);
lean_closure_set(v___f_1384_, 0, v_env_1365_);
lean_closure_set(v___f_1384_, 1, v___x_1366_);
lean_closure_set(v___f_1384_, 2, v_inst_1367_);
lean_closure_set(v___f_1384_, 3, v_inst_1368_);
lean_closure_set(v___f_1384_, 4, v_inst_1369_);
lean_closure_set(v___f_1384_, 5, v_inst_1370_);
lean_closure_set(v___f_1384_, 6, v_inst_1371_);
lean_closure_set(v___f_1384_, 7, v_inst_1372_);
lean_closure_set(v___f_1384_, 8, v_declName_1373_);
lean_closure_set(v___f_1384_, 9, v_toBind_1374_);
lean_closure_set(v___f_1384_, 10, v___f_1383_);
v_sz_1385_ = lean_array_size(v___y_1381_);
v___x_1386_ = ((size_t)0ULL);
v___x_1387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1367_, v___y_1381_, v___f_1384_, v_sz_1385_, v___x_1386_, v___x_1382_);
v___x_1388_ = lean_apply_4(v_toBind_1374_, lean_box(0), lean_box(0), v___x_1387_, v___f_1375_);
return v___x_1388_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__4(lean_object* v___x_1396_, lean_object* v_inst_1397_, lean_object* v_inst_1398_, lean_object* v_inst_1399_, lean_object* v_inst_1400_, lean_object* v_inst_1401_, lean_object* v_inst_1402_, lean_object* v_declName_1403_, lean_object* v_toBind_1404_, lean_object* v___f_1405_, uint8_t v_isMeta_1406_, lean_object* v_____do__lift_1407_){
_start:
{
uint8_t v___y_1409_; 
if (v_isMeta_1406_ == 0)
{
lean_dec_ref(v_____do__lift_1407_);
v___y_1409_ = v_isMeta_1406_;
goto v___jp_1408_;
}
else
{
uint8_t v___x_1414_; 
lean_inc(v_declName_1403_);
v___x_1414_ = l_Lean_isMarkedMeta(v_____do__lift_1407_, v_declName_1403_);
if (v___x_1414_ == 0)
{
v___y_1409_ = v_isMeta_1406_;
goto v___jp_1408_;
}
else
{
uint8_t v___x_1415_; 
v___x_1415_ = 0;
v___y_1409_ = v___x_1415_;
goto v___jp_1408_;
}
}
v___jp_1408_:
{
lean_object* v_toImport_1410_; lean_object* v_module_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v_toImport_1410_ = lean_ctor_get(v___x_1396_, 0);
lean_inc_ref(v_toImport_1410_);
lean_dec_ref(v___x_1396_);
v_module_1411_ = lean_ctor_get(v_toImport_1410_, 0);
lean_inc(v_module_1411_);
lean_dec_ref(v_toImport_1410_);
v___x_1412_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___redArg(v_inst_1397_, v_inst_1398_, v_inst_1399_, v_inst_1400_, v_inst_1401_, v_inst_1402_, v_module_1411_, v___y_1409_, v_declName_1403_);
v___x_1413_ = lean_apply_4(v_toBind_1404_, lean_box(0), lean_box(0), v___x_1412_, v___f_1405_);
return v___x_1413_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__4___boxed(lean_object* v___x_1416_, lean_object* v_inst_1417_, lean_object* v_inst_1418_, lean_object* v_inst_1419_, lean_object* v_inst_1420_, lean_object* v_inst_1421_, lean_object* v_inst_1422_, lean_object* v_declName_1423_, lean_object* v_toBind_1424_, lean_object* v___f_1425_, lean_object* v_isMeta_1426_, lean_object* v_____do__lift_1427_){
_start:
{
uint8_t v_isMeta_boxed_1428_; lean_object* v_res_1429_; 
v_isMeta_boxed_1428_ = lean_unbox(v_isMeta_1426_);
v_res_1429_ = l_Lean_recordExtraModUseFromDecl___redArg___lam__4(v___x_1416_, v_inst_1417_, v_inst_1418_, v_inst_1419_, v_inst_1420_, v_inst_1421_, v_inst_1422_, v_declName_1423_, v_toBind_1424_, v___f_1425_, v_isMeta_boxed_1428_, v_____do__lift_1427_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__5(lean_object* v_toPure_1430_, lean_object* v_declName_1431_, lean_object* v___x_1432_, lean_object* v_inst_1433_, lean_object* v_inst_1434_, lean_object* v_inst_1435_, lean_object* v_inst_1436_, lean_object* v_inst_1437_, lean_object* v_inst_1438_, lean_object* v_toBind_1439_, lean_object* v___f_1440_, lean_object* v___x_1441_, lean_object* v___x_1442_, lean_object* v___x_1443_, uint8_t v_isMeta_1444_, lean_object* v_getEnv_1445_, lean_object* v_env_1446_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1446_, v_declName_1431_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_dec_ref(v_env_1446_);
lean_dec(v_getEnv_1445_);
lean_dec_ref(v___x_1443_);
lean_dec_ref(v___x_1442_);
lean_dec_ref(v___x_1441_);
lean_dec(v___f_1440_);
lean_dec(v_toBind_1439_);
lean_dec(v_inst_1438_);
lean_dec_ref(v_inst_1437_);
lean_dec(v_inst_1436_);
lean_dec_ref(v_inst_1435_);
lean_dec_ref(v_inst_1434_);
lean_dec_ref(v_inst_1433_);
lean_dec_ref(v___x_1432_);
lean_dec(v_declName_1431_);
goto v___jp_1447_;
}
else
{
lean_object* v_val_1451_; lean_object* v___x_1452_; lean_object* v_modules_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; 
v_val_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_val_1451_);
lean_dec_ref_known(v___x_1450_, 1);
v___x_1452_ = l_Lean_Environment_header(v_env_1446_);
v_modules_1453_ = lean_ctor_get(v___x_1452_, 3);
lean_inc_ref(v_modules_1453_);
lean_dec_ref(v___x_1452_);
v___x_1454_ = lean_array_get_size(v_modules_1453_);
v___x_1455_ = lean_nat_dec_lt(v_val_1451_, v___x_1454_);
if (v___x_1455_ == 0)
{
lean_dec_ref(v_modules_1453_);
lean_dec(v_val_1451_);
lean_dec_ref(v_env_1446_);
lean_dec(v_getEnv_1445_);
lean_dec_ref(v___x_1443_);
lean_dec_ref(v___x_1442_);
lean_dec_ref(v___x_1441_);
lean_dec(v___f_1440_);
lean_dec(v_toBind_1439_);
lean_dec(v_inst_1438_);
lean_dec_ref(v_inst_1437_);
lean_dec(v_inst_1436_);
lean_dec_ref(v_inst_1435_);
lean_dec_ref(v_inst_1434_);
lean_dec_ref(v_inst_1433_);
lean_dec_ref(v___x_1432_);
lean_dec(v_declName_1431_);
goto v___jp_1447_;
}
else
{
lean_object* v___f_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___f_1459_; lean_object* v___x_1460_; 
lean_inc_n(v_toBind_1439_, 2);
lean_inc(v_declName_1431_);
lean_inc(v_inst_1438_);
lean_inc_ref(v_inst_1437_);
lean_inc(v_inst_1436_);
lean_inc_ref(v_inst_1435_);
lean_inc_ref(v_inst_1434_);
lean_inc_ref(v_inst_1433_);
v___f_1456_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__3), 16, 15);
lean_closure_set(v___f_1456_, 0, v_toPure_1430_);
lean_closure_set(v___f_1456_, 1, v_env_1446_);
lean_closure_set(v___f_1456_, 2, v___x_1432_);
lean_closure_set(v___f_1456_, 3, v_inst_1433_);
lean_closure_set(v___f_1456_, 4, v_inst_1434_);
lean_closure_set(v___f_1456_, 5, v_inst_1435_);
lean_closure_set(v___f_1456_, 6, v_inst_1436_);
lean_closure_set(v___f_1456_, 7, v_inst_1437_);
lean_closure_set(v___f_1456_, 8, v_inst_1438_);
lean_closure_set(v___f_1456_, 9, v_declName_1431_);
lean_closure_set(v___f_1456_, 10, v_toBind_1439_);
lean_closure_set(v___f_1456_, 11, v___f_1440_);
lean_closure_set(v___f_1456_, 12, v___x_1441_);
lean_closure_set(v___f_1456_, 13, v___x_1442_);
lean_closure_set(v___f_1456_, 14, v___x_1443_);
v___x_1457_ = lean_array_fget(v_modules_1453_, v_val_1451_);
lean_dec(v_val_1451_);
lean_dec_ref(v_modules_1453_);
v___x_1458_ = lean_box(v_isMeta_1444_);
v___f_1459_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__4___boxed), 12, 11);
lean_closure_set(v___f_1459_, 0, v___x_1457_);
lean_closure_set(v___f_1459_, 1, v_inst_1433_);
lean_closure_set(v___f_1459_, 2, v_inst_1434_);
lean_closure_set(v___f_1459_, 3, v_inst_1435_);
lean_closure_set(v___f_1459_, 4, v_inst_1436_);
lean_closure_set(v___f_1459_, 5, v_inst_1437_);
lean_closure_set(v___f_1459_, 6, v_inst_1438_);
lean_closure_set(v___f_1459_, 7, v_declName_1431_);
lean_closure_set(v___f_1459_, 8, v_toBind_1439_);
lean_closure_set(v___f_1459_, 9, v___f_1456_);
lean_closure_set(v___f_1459_, 10, v___x_1458_);
v___x_1460_ = lean_apply_4(v_toBind_1439_, lean_box(0), lean_box(0), v_getEnv_1445_, v___f_1459_);
return v___x_1460_;
}
}
v___jp_1447_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = lean_box(0);
v___x_1449_ = lean_apply_2(v_toPure_1430_, lean_box(0), v___x_1448_);
return v___x_1449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_toPure_1461_ = _args[0];
lean_object* v_declName_1462_ = _args[1];
lean_object* v___x_1463_ = _args[2];
lean_object* v_inst_1464_ = _args[3];
lean_object* v_inst_1465_ = _args[4];
lean_object* v_inst_1466_ = _args[5];
lean_object* v_inst_1467_ = _args[6];
lean_object* v_inst_1468_ = _args[7];
lean_object* v_inst_1469_ = _args[8];
lean_object* v_toBind_1470_ = _args[9];
lean_object* v___f_1471_ = _args[10];
lean_object* v___x_1472_ = _args[11];
lean_object* v___x_1473_ = _args[12];
lean_object* v___x_1474_ = _args[13];
lean_object* v_isMeta_1475_ = _args[14];
lean_object* v_getEnv_1476_ = _args[15];
lean_object* v_env_1477_ = _args[16];
_start:
{
uint8_t v_isMeta_boxed_1478_; lean_object* v_res_1479_; 
v_isMeta_boxed_1478_ = lean_unbox(v_isMeta_1475_);
v_res_1479_ = l_Lean_recordExtraModUseFromDecl___redArg___lam__5(v_toPure_1461_, v_declName_1462_, v___x_1463_, v_inst_1464_, v_inst_1465_, v_inst_1466_, v_inst_1467_, v_inst_1468_, v_inst_1469_, v_toBind_1470_, v___f_1471_, v___x_1472_, v___x_1473_, v___x_1474_, v_isMeta_boxed_1478_, v_getEnv_1476_, v_env_1477_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg(lean_object* v_inst_1482_, lean_object* v_inst_1483_, lean_object* v_inst_1484_, lean_object* v_inst_1485_, lean_object* v_inst_1486_, lean_object* v_inst_1487_, lean_object* v_declName_1488_, uint8_t v_isMeta_1489_){
_start:
{
lean_object* v_toApplicative_1490_; lean_object* v_toBind_1491_; lean_object* v_getEnv_1492_; lean_object* v_toPure_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___f_1498_; lean_object* v___x_1499_; lean_object* v___f_1500_; lean_object* v___x_1501_; 
v_toApplicative_1490_ = lean_ctor_get(v_inst_1482_, 0);
v_toBind_1491_ = lean_ctor_get(v_inst_1482_, 1);
lean_inc_n(v_toBind_1491_, 2);
v_getEnv_1492_ = lean_ctor_get(v_inst_1483_, 0);
lean_inc_n(v_getEnv_1492_, 2);
v_toPure_1493_ = lean_ctor_get(v_toApplicative_1490_, 1);
lean_inc_n(v_toPure_1493_, 2);
v___x_1494_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___redArg___closed__0));
v___x_1495_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___redArg___closed__1));
v___x_1496_ = lean_obj_once(&l_Lean_getIndirectModUses___closed__0, &l_Lean_getIndirectModUses___closed__0_once, _init_l_Lean_getIndirectModUses___closed__0);
v___x_1497_ = l_Lean_instInhabitedEffectiveImport_default;
v___f_1498_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1498_, 0, v_toPure_1493_);
v___x_1499_ = lean_box(v_isMeta_1489_);
v___f_1500_ = lean_alloc_closure((void*)(l_Lean_recordExtraModUseFromDecl___redArg___lam__5___boxed), 17, 16);
lean_closure_set(v___f_1500_, 0, v_toPure_1493_);
lean_closure_set(v___f_1500_, 1, v_declName_1488_);
lean_closure_set(v___f_1500_, 2, v___x_1497_);
lean_closure_set(v___f_1500_, 3, v_inst_1482_);
lean_closure_set(v___f_1500_, 4, v_inst_1483_);
lean_closure_set(v___f_1500_, 5, v_inst_1484_);
lean_closure_set(v___f_1500_, 6, v_inst_1485_);
lean_closure_set(v___f_1500_, 7, v_inst_1486_);
lean_closure_set(v___f_1500_, 8, v_inst_1487_);
lean_closure_set(v___f_1500_, 9, v_toBind_1491_);
lean_closure_set(v___f_1500_, 10, v___f_1498_);
lean_closure_set(v___f_1500_, 11, v___x_1496_);
lean_closure_set(v___f_1500_, 12, v___x_1494_);
lean_closure_set(v___f_1500_, 13, v___x_1495_);
lean_closure_set(v___f_1500_, 14, v___x_1499_);
lean_closure_set(v___f_1500_, 15, v_getEnv_1492_);
v___x_1501_ = lean_apply_4(v_toBind_1491_, lean_box(0), lean_box(0), v_getEnv_1492_, v___f_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___redArg___boxed(lean_object* v_inst_1502_, lean_object* v_inst_1503_, lean_object* v_inst_1504_, lean_object* v_inst_1505_, lean_object* v_inst_1506_, lean_object* v_inst_1507_, lean_object* v_declName_1508_, lean_object* v_isMeta_1509_){
_start:
{
uint8_t v_isMeta_boxed_1510_; lean_object* v_res_1511_; 
v_isMeta_boxed_1510_ = lean_unbox(v_isMeta_1509_);
v_res_1511_ = l_Lean_recordExtraModUseFromDecl___redArg(v_inst_1502_, v_inst_1503_, v_inst_1504_, v_inst_1505_, v_inst_1506_, v_inst_1507_, v_declName_1508_, v_isMeta_boxed_1510_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl(lean_object* v_m_1512_, lean_object* v_inst_1513_, lean_object* v_inst_1514_, lean_object* v_inst_1515_, lean_object* v_inst_1516_, lean_object* v_inst_1517_, lean_object* v_inst_1518_, lean_object* v_declName_1519_, uint8_t v_isMeta_1520_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l_Lean_recordExtraModUseFromDecl___redArg(v_inst_1513_, v_inst_1514_, v_inst_1515_, v_inst_1516_, v_inst_1517_, v_inst_1518_, v_declName_1519_, v_isMeta_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___boxed(lean_object* v_m_1522_, lean_object* v_inst_1523_, lean_object* v_inst_1524_, lean_object* v_inst_1525_, lean_object* v_inst_1526_, lean_object* v_inst_1527_, lean_object* v_inst_1528_, lean_object* v_declName_1529_, lean_object* v_isMeta_1530_){
_start:
{
uint8_t v_isMeta_boxed_1531_; lean_object* v_res_1532_; 
v_isMeta_boxed_1531_ = lean_unbox(v_isMeta_1530_);
v_res_1532_ = l_Lean_recordExtraModUseFromDecl(v_m_1522_, v_inst_1523_, v_inst_1524_, v_inst_1525_, v_inst_1526_, v_inst_1527_, v_inst_1528_, v_declName_1529_, v_isMeta_boxed_1531_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object* v_s_1533_, lean_object* v_e_1534_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = lean_box(0);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object* v_x_1536_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = lean_box(0);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed(lean_object* v_x_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l___private_Lean_ExtraModUses_0__Lean_initFn___lam__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(v_x_1538_);
lean_dec_ref(v_x_1538_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn___lam__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(lean_object* v_es_1540_){
_start:
{
lean_object* v___x_1541_; 
v___x_1541_ = lean_array_mk(v_es_1540_);
return v___x_1541_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1546_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_));
v___x_1547_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_);
v___x_1548_ = l_Lean_Name_str___override(v___x_1547_, v___x_1546_);
return v___x_1548_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___f_1551_; lean_object* v___f_1552_; lean_object* v___f_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1549_ = lean_box(0);
v___x_1550_ = lean_box(0);
v___f_1551_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_));
v___f_1552_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_));
v___f_1553_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_));
v___x_1554_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_);
v___x_1555_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
lean_ctor_set(v___x_1555_, 1, v___f_1553_);
lean_ctor_set(v___x_1555_, 2, v___f_1552_);
lean_ctor_set(v___x_1555_, 3, v___f_1551_);
lean_ctor_set(v___x_1555_, 4, v___x_1550_);
lean_ctor_set(v___x_1555_, 5, v___x_1549_);
lean_ctor_set(v___x_1555_, 6, v___x_1550_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1557_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_);
v___x_1558_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2____boxed(lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_();
return v_res_1560_;
}
}
LEAN_EXPORT uint8_t l_Lean_isExtraRevModUse(lean_object* v_env_1564_, lean_object* v_modIdx_1565_){
_start:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; uint8_t v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v___x_1566_ = ((lean_object*)(l_Lean_isExtraRevModUse___closed__0));
v___x_1567_ = l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt;
v___x_1568_ = 0;
v___x_1569_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1566_, v___x_1567_, v_env_1564_, v_modIdx_1565_, v___x_1568_);
v___x_1570_ = lean_array_get_size(v___x_1569_);
lean_dec_ref(v___x_1569_);
v___x_1571_ = lean_unsigned_to_nat(0u);
v___x_1572_ = lean_nat_dec_eq(v___x_1570_, v___x_1571_);
if (v___x_1572_ == 0)
{
uint8_t v___x_1573_; 
v___x_1573_ = 1;
return v___x_1573_;
}
else
{
uint8_t v___x_1574_; 
v___x_1574_ = 0;
return v___x_1574_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isExtraRevModUse___boxed(lean_object* v_env_1575_, lean_object* v_modIdx_1576_){
_start:
{
uint8_t v_res_1577_; lean_object* v_r_1578_; 
v_res_1577_ = l_Lean_isExtraRevModUse(v_env_1575_, v_modIdx_1576_);
lean_dec(v_modIdx_1576_);
lean_dec_ref(v_env_1575_);
v_r_1578_ = lean_box(v_res_1577_);
return v_r_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__0(lean_object* v___x_1579_, lean_object* v_x_1580_){
_start:
{
lean_object* v_toEnvExtension_1581_; lean_object* v_asyncMode_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v_toEnvExtension_1581_ = lean_ctor_get(v___x_1579_, 0);
v_asyncMode_1582_ = lean_ctor_get(v_toEnvExtension_1581_, 2);
lean_inc(v_asyncMode_1582_);
v___x_1583_ = lean_box(0);
v___x_1584_ = lean_obj_once(&l_Lean_recordIndirectModUse___redArg___lam__0___closed__0, &l_Lean_recordIndirectModUse___redArg___lam__0___closed__0_once, _init_l_Lean_recordIndirectModUse___redArg___lam__0___closed__0);
v___x_1585_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1579_, v_x_1580_, v___x_1583_, v_asyncMode_1582_, v___x_1584_);
lean_dec(v_asyncMode_1582_);
return v___x_1585_;
}
}
static lean_object* _init_l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1587_ = ((lean_object*)(l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__0));
v___x_1588_ = l_Lean_stringToMessageData(v___x_1587_);
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4(lean_object* v_modifyEnv_1589_, lean_object* v___f_1590_, lean_object* v_inst_1591_, lean_object* v_inst_1592_, lean_object* v_inst_1593_, lean_object* v_inst_1594_, lean_object* v_cls_1595_, lean_object* v_toBind_1596_, lean_object* v___f_1597_, uint8_t v_____do__lift_1598_){
_start:
{
if (v_____do__lift_1598_ == 0)
{
lean_object* v___x_1599_; 
lean_dec(v___f_1597_);
lean_dec(v_toBind_1596_);
lean_dec(v_cls_1595_);
lean_dec(v_inst_1594_);
lean_dec_ref(v_inst_1593_);
lean_dec_ref(v_inst_1592_);
lean_dec_ref(v_inst_1591_);
v___x_1599_ = lean_apply_1(v_modifyEnv_1589_, v___f_1590_);
return v___x_1599_;
}
else
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
lean_dec_ref(v___f_1590_);
lean_dec(v_modifyEnv_1589_);
v___x_1600_ = lean_obj_once(&l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__1, &l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__1_once, _init_l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___closed__1);
v___x_1601_ = l_Lean_addTrace___redArg(v_inst_1591_, v_inst_1592_, v_inst_1593_, v_inst_1594_, v_cls_1595_, v___x_1600_);
v___x_1602_ = lean_apply_4(v_toBind_1596_, lean_box(0), lean_box(0), v___x_1601_, v___f_1597_);
return v___x_1602_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___boxed(lean_object* v_modifyEnv_1603_, lean_object* v___f_1604_, lean_object* v_inst_1605_, lean_object* v_inst_1606_, lean_object* v_inst_1607_, lean_object* v_inst_1608_, lean_object* v_cls_1609_, lean_object* v_toBind_1610_, lean_object* v___f_1611_, lean_object* v_____do__lift_1612_){
_start:
{
uint8_t v_____do__lift_193__boxed_1613_; lean_object* v_res_1614_; 
v_____do__lift_193__boxed_1613_ = lean_unbox(v_____do__lift_1612_);
v_res_1614_ = l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4(v_modifyEnv_1603_, v___f_1604_, v_inst_1605_, v_inst_1606_, v_inst_1607_, v_inst_1608_, v_cls_1609_, v_toBind_1610_, v___f_1611_, v_____do__lift_193__boxed_1613_);
return v_res_1614_;
}
}
static lean_object* _init_l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1615_; lean_object* v___f_1616_; 
v___x_1615_ = l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt;
v___f_1616_ = lean_alloc_closure((void*)(l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1616_, 0, v___x_1615_);
return v___f_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1(lean_object* v___x_1617_, lean_object* v_toPure_1618_, lean_object* v_inst_1619_, lean_object* v_modifyEnv_1620_, lean_object* v_toBind_1621_, lean_object* v_inst_1622_, lean_object* v_inst_1623_, lean_object* v_inst_1624_, lean_object* v_inst_1625_, lean_object* v_____do__lift_1626_){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; uint8_t v___x_1630_; 
v___x_1627_ = l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt;
v___x_1628_ = lean_box(1);
v___x_1629_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_1617_, v___x_1627_, v_____do__lift_1626_, v___x_1628_);
v___x_1630_ = l_List_isEmpty___redArg(v___x_1629_);
lean_dec(v___x_1629_);
if (v___x_1630_ == 0)
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
lean_dec(v_inst_1625_);
lean_dec_ref(v_inst_1624_);
lean_dec_ref(v_inst_1623_);
lean_dec(v_inst_1622_);
lean_dec(v_toBind_1621_);
lean_dec(v_modifyEnv_1620_);
lean_dec_ref(v_inst_1619_);
v___x_1631_ = lean_box(0);
v___x_1632_ = lean_apply_2(v_toPure_1618_, lean_box(0), v___x_1631_);
return v___x_1632_;
}
else
{
lean_object* v_getInheritedTraceOptions_1633_; lean_object* v___f_1634_; lean_object* v___f_1635_; lean_object* v_cls_1636_; lean_object* v___f_1637_; lean_object* v___f_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v_getInheritedTraceOptions_1633_ = lean_ctor_get(v_inst_1619_, 2);
lean_inc(v_getInheritedTraceOptions_1633_);
v___f_1634_ = lean_obj_once(&l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1___closed__0, &l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1___closed__0_once, _init_l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1___closed__0);
lean_inc(v_modifyEnv_1620_);
v___f_1635_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1635_, 0, v_modifyEnv_1620_);
lean_closure_set(v___f_1635_, 1, v___f_1634_);
v_cls_1636_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__5___closed__1));
lean_inc_n(v_toBind_1621_, 3);
v___f_1637_ = lean_alloc_closure((void*)(l_Lean_recordIndirectModUse___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1637_, 0, v_toPure_1618_);
lean_closure_set(v___f_1637_, 1, v_cls_1636_);
lean_closure_set(v___f_1637_, 2, v_toBind_1621_);
lean_closure_set(v___f_1637_, 3, v_inst_1622_);
v___f_1638_ = lean_alloc_closure((void*)(l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_1638_, 0, v_modifyEnv_1620_);
lean_closure_set(v___f_1638_, 1, v___f_1634_);
lean_closure_set(v___f_1638_, 2, v_inst_1623_);
lean_closure_set(v___f_1638_, 3, v_inst_1619_);
lean_closure_set(v___f_1638_, 4, v_inst_1624_);
lean_closure_set(v___f_1638_, 5, v_inst_1625_);
lean_closure_set(v___f_1638_, 6, v_cls_1636_);
lean_closure_set(v___f_1638_, 7, v_toBind_1621_);
lean_closure_set(v___f_1638_, 8, v___f_1635_);
v___x_1639_ = lean_apply_4(v_toBind_1621_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_1633_, v___f_1637_);
v___x_1640_ = lean_apply_4(v_toBind_1621_, lean_box(0), lean_box(0), v___x_1639_, v___f_1638_);
return v___x_1640_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule___redArg(lean_object* v_inst_1641_, lean_object* v_inst_1642_, lean_object* v_inst_1643_, lean_object* v_inst_1644_, lean_object* v_inst_1645_, lean_object* v_inst_1646_){
_start:
{
lean_object* v_toApplicative_1647_; lean_object* v_toBind_1648_; lean_object* v_getEnv_1649_; lean_object* v_modifyEnv_1650_; lean_object* v_toPure_1651_; lean_object* v___x_1652_; lean_object* v___f_1653_; lean_object* v___x_1654_; 
v_toApplicative_1647_ = lean_ctor_get(v_inst_1641_, 0);
v_toBind_1648_ = lean_ctor_get(v_inst_1641_, 1);
lean_inc_n(v_toBind_1648_, 2);
v_getEnv_1649_ = lean_ctor_get(v_inst_1642_, 0);
lean_inc(v_getEnv_1649_);
v_modifyEnv_1650_ = lean_ctor_get(v_inst_1642_, 1);
lean_inc(v_modifyEnv_1650_);
lean_dec_ref(v_inst_1642_);
v_toPure_1651_ = lean_ctor_get(v_toApplicative_1647_, 1);
lean_inc(v_toPure_1651_);
v___x_1652_ = lean_box(0);
v___f_1653_ = lean_alloc_closure((void*)(l_Lean_recordExtraRevUseOfCurrentModule___redArg___lam__1), 10, 9);
lean_closure_set(v___f_1653_, 0, v___x_1652_);
lean_closure_set(v___f_1653_, 1, v_toPure_1651_);
lean_closure_set(v___f_1653_, 2, v_inst_1643_);
lean_closure_set(v___f_1653_, 3, v_modifyEnv_1650_);
lean_closure_set(v___f_1653_, 4, v_toBind_1648_);
lean_closure_set(v___f_1653_, 5, v_inst_1644_);
lean_closure_set(v___f_1653_, 6, v_inst_1641_);
lean_closure_set(v___f_1653_, 7, v_inst_1645_);
lean_closure_set(v___f_1653_, 8, v_inst_1646_);
v___x_1654_ = lean_apply_4(v_toBind_1648_, lean_box(0), lean_box(0), v_getEnv_1649_, v___f_1653_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraRevUseOfCurrentModule(lean_object* v_m_1655_, lean_object* v_inst_1656_, lean_object* v_inst_1657_, lean_object* v_inst_1658_, lean_object* v_inst_1659_, lean_object* v_inst_1660_, lean_object* v_inst_1661_){
_start:
{
lean_object* v___x_1662_; 
v___x_1662_ = l_Lean_recordExtraRevUseOfCurrentModule___redArg(v_inst_1656_, v_inst_1657_, v_inst_1658_, v_inst_1659_, v_inst_1660_, v_inst_1661_);
return v___x_1662_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1664_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__0_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_));
v___x_1665_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_);
v___x_1666_ = l_Lean_Name_str___override(v___x_1665_, v___x_1664_);
return v___x_1666_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1668_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__2_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_));
v___x_1669_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__1_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1670_ = l_Lean_Name_str___override(v___x_1669_, v___x_1668_);
return v___x_1670_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1671_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_));
v___x_1672_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__3_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1673_ = l_Lean_Name_str___override(v___x_1672_, v___x_1671_);
return v___x_1673_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1674_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_));
v___x_1675_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__4_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1676_ = l_Lean_Name_str___override(v___x_1675_, v___x_1674_);
return v___x_1676_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1677_ = lean_unsigned_to_nat(4259277863u);
v___x_1678_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__5_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1679_ = l_Lean_Name_num___override(v___x_1678_, v___x_1677_);
return v___x_1679_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1681_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__7_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_));
v___x_1682_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__6_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1683_ = l_Lean_Name_str___override(v___x_1682_, v___x_1681_);
return v___x_1683_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1685_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_initFn___closed__9_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_));
v___x_1686_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__8_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1687_ = l_Lean_Name_str___override(v___x_1686_, v___x_1685_);
return v___x_1687_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1688_ = lean_unsigned_to_nat(2u);
v___x_1689_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__10_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1690_ = l_Lean_Name_num___override(v___x_1689_, v___x_1688_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1692_; uint8_t v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1692_ = ((lean_object*)(l_Lean_recordIndirectModUse___redArg___lam__5___closed__1));
v___x_1693_ = 0;
v___x_1694_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_, &l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2__once, _init_l___private_Lean_ExtraModUses_0__Lean_initFn___closed__11_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_);
v___x_1695_ = l_Lean_registerTraceClass(v___x_1692_, v___x_1693_, v___x_1694_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2____boxed(lean_object* v_a_1696_){
_start:
{
lean_object* v_res_1697_; 
v_res_1697_ = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_();
return v_res_1697_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_1766255300____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_indirectModUseExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_indirectModUseExt);
lean_dec_ref(res);
res = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_231983239____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_ExtraModUses_0__Lean_extraModUses = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_ExtraModUses_0__Lean_extraModUses);
lean_dec_ref(res);
res = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_2233475121____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_ExtraModUses_0__Lean_isExtraRevModUseExt);
lean_dec_ref(res);
res = l___private_Lean_ExtraModUses_0__Lean_initFn_00___x40_Lean_ExtraModUses_4259277863____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ExtraModUses(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Stream(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ExtraModUses(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ExtraModUses(builtin);
}
#ifdef __cplusplus
}
#endif

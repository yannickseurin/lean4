// Lean compiler output
// Module: Lean.Level
// Imports: public import Init.Data.Array.QSort public import Lean.Data.PersistentHashSet public import Lean.Hygiene public import Init.Data.Option.Coe import Init.Data.Nat.Internal.Linear
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
lean_object* lean_string_length(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_uint64_to_uint32(uint64_t);
uint64_t lean_uint32_to_uint64(uint32_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint64_t lean_uint64_land(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_Name_reprPrec___boxed(lean_object*, lean_object*);
lean_object* l_UInt64_decEq___boxed(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_imax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_imax___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_instInhabitedData___aux__1;
LEAN_EXPORT uint64_t l_Lean_instInhabitedData;
LEAN_EXPORT uint64_t l_Lean_Level_Data_hash(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Level_Data_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instBEqData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_UInt64_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqData___closed__0 = (const lean_object*)&l_Lean_instBEqData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqData = (const lean_object*)&l_Lean_instBEqData___closed__0_value;
LEAN_EXPORT uint32_t l_Lean_Level_Data_depth(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Level_Data_depth___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_Data_hasMVar(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Level_Data_hasMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_Data_hasParam(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Level_Data_hasParam___boxed(lean_object*);
uint64_t lean_level_mk_data(uint64_t, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Level_mkData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprData___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_instReprData___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__0_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " (hasParam := "};
static const lean_object* l_Lean_instReprData___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__1_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_instReprData___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__2_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_instReprData___lam__0___closed__3 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__3_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " (hasMVar := "};
static const lean_object* l_Lean_instReprData___lam__0___closed__4 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__4_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Level.mkData "};
static const lean_object* l_Lean_instReprData___lam__0___closed__5 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__5_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " (depth := "};
static const lean_object* l_Lean_instReprData___lam__0___closed__6 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instReprData___lam__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprData___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprData___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprData___closed__0 = (const lean_object*)&l_Lean_instReprData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprData = (const lean_object*)&l_Lean_instReprData___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedLevelMVarId_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedLevelMVarId_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLevelMVarId_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLevelMVarId;
LEAN_EXPORT uint8_t l_Lean_instBEqLevelMVarId_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqLevelMVarId_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqLevelMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqLevelMVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqLevelMVarId___closed__0 = (const lean_object*)&l_Lean_instBEqLevelMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqLevelMVarId = (const lean_object*)&l_Lean_instBEqLevelMVarId___closed__0_value;
static lean_once_cell_t l_Lean_instHashableLevelMVarId_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_instHashableLevelMVarId_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_instHashableLevelMVarId_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashableLevelMVarId_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableLevelMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableLevelMVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableLevelMVarId___closed__0 = (const lean_object*)&l_Lean_instHashableLevelMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableLevelMVarId = (const lean_object*)&l_Lean_instHashableLevelMVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprLevelMVarId_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprLevelMVarId_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprLevelMVarId_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprLevelMVarId_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprLevelMVarId_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprLevelMVarId_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_instReprLevelMVarId_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__9;
static lean_once_cell_t l_Lean_instReprLevelMVarId_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__10;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__12 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLevelMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLevelMVarId_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLevelMVarId___closed__0 = (const lean_object*)&l_Lean_instReprLevelMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLevelMVarId = (const lean_object*)&l_Lean_instReprLevelMVarId___closed__0_value;
static const lean_closure_object l_Lean_instReprLMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_reprPrec___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLMVarId___closed__0 = (const lean_object*)&l_Lean_instReprLMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLMVarId = (const lean_object*)&l_Lean_instReprLMVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdSet___aux__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdSet;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdSet___aux__1;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdSet;
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___aux__1___redArg();
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___aux__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___redArg();
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_zero_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_zero_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_succ_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_succ_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_max_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_max_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_imax_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_imax_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_param_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_param_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Level_zero___override___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_zero___override___closed__0;
LEAN_EXPORT lean_object* l_Lean_Level_zero___override;
static lean_once_cell_t l_Lean_Level_data___override___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Level_data___override___closed__0;
LEAN_EXPORT uint64_t l_Lean_Level_data___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_data___override___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_succ___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_max___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_imax___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_param___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mvar___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedLevel_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLevel;
static const lean_string_object l_Lean_instReprLevel_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Level.zero"};
static const lean_object* l_Lean_instReprLevel_repr___closed__0 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__1 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__1_value;
static lean_once_cell_t l_Lean_instReprLevel_repr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevel_repr___closed__2;
static lean_once_cell_t l_Lean_instReprLevel_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevel_repr___closed__3;
static const lean_string_object l_Lean_instReprLevel_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Level.succ"};
static const lean_object* l_Lean_instReprLevel_repr___closed__4 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__5 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__5_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__6 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__6_value;
static const lean_string_object l_Lean_instReprLevel_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Level.max"};
static const lean_object* l_Lean_instReprLevel_repr___closed__7 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__7_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__7_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__8 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__9 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__9_value;
static const lean_string_object l_Lean_instReprLevel_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Level.imax"};
static const lean_object* l_Lean_instReprLevel_repr___closed__10 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__10_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__10_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__11 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__11_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__11_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__12 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__12_value;
static const lean_string_object l_Lean_instReprLevel_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Level.param"};
static const lean_object* l_Lean_instReprLevel_repr___closed__13 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__13_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__13_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__14 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__14_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__15 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__15_value;
static const lean_string_object l_Lean_instReprLevel_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Level.mvar"};
static const lean_object* l_Lean_instReprLevel_repr___closed__16 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__16_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__16_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__17 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__17_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__17_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__18 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_instReprLevel_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLevel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLevel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLevel___closed__0 = (const lean_object*)&l_Lean_instReprLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLevel = (const lean_object*)&l_Lean_instReprLevel___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Level_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Level_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Level_instHashable___closed__0 = (const lean_object*)&l_Lean_Level_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instHashable = (const lean_object*)&l_Lean_Level_instHashable___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Level_depth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_depth___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_hasMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hasMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_hasParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hasParam___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_level_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hashEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_level_has_mvar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hasMVarEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_level_has_param(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hasParamEx___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_level_depth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_depthEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_levelZero;
LEAN_EXPORT lean_object* l_Lean_mkLevelMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelSucc(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelMax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelIMax(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Level_one___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_one___closed__0;
LEAN_EXPORT lean_object* l_Lean_Level_one;
LEAN_EXPORT lean_object* l_Lean_levelOne;
LEAN_EXPORT lean_object* l_Lean_mkLevelZeroEx___redArg();
LEAN_EXPORT lean_object* l_Lean_mkLevelZeroEx___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_mkLevelZeroEx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkLevelZeroEx___closed__0;
LEAN_EXPORT lean_object* lean_level_mk_zero(lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_succ(lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_mvar(lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_param(lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_max(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_imax(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isZero(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isZero___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isSucc(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isSucc___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isMax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isMax___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isIMax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isIMax___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isMaxIMax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isMaxIMax___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isParam___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isMVar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Level_mvarId_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Level_mvarId_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Lean.Level"};
static const lean_object* l_Lean_Level_mvarId_x21___closed__0 = (const lean_object*)&l_Lean_Level_mvarId_x21___closed__0_value;
static const lean_string_object l_Lean_Level_mvarId_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Level.mvarId!"};
static const lean_object* l_Lean_Level_mvarId_x21___closed__1 = (const lean_object*)&l_Lean_Level_mvarId_x21___closed__1_value;
static const lean_string_object l_Lean_Level_mvarId_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "metavariable expected"};
static const lean_object* l_Lean_Level_mvarId_x21___closed__2 = (const lean_object*)&l_Lean_Level_mvarId_x21___closed__2_value;
static lean_once_cell_t l_Lean_Level_mvarId_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_mvarId_x21___closed__3;
LEAN_EXPORT lean_object* l_Lean_Level_mvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mvarId_x21___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isNeverZero(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isNeverZero___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isAlwaysZero(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isAlwaysZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ofNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instOfNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_addOffsetAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_addOffset(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isExplicit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isExplicit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getOffsetAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getOffsetAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getOffset(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getLevelOffset(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getLevelOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_toNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_toNat___boxed(lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Level_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Level_instBEq___closed__0 = (const lean_object*)&l_Lean_Level_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instBEq = (const lean_object*)&l_Lean_Level_instBEq___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Level_occurs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_occurs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorToNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorToNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_normLtAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_normLtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_normLtAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_normLtAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_normLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_normLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isAlreadyNormalizedCheap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isAlreadyNormalizedCheap___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkIMaxAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_accMax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkMaxAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkMaxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_skipExplicit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_skipExplicit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Level_normalize_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Level_normalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Level_normalize___closed__0 = (const lean_object*)&l_Lean_Level_normalize___closed__0_value;
static const lean_string_object l_Lean_Level_normalize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Level_normalize___closed__2 = (const lean_object*)&l_Lean_Level_normalize___closed__2_value;
static const lean_string_object l_Lean_Level_normalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Level.normalize"};
static const lean_object* l_Lean_Level_normalize___closed__1 = (const lean_object*)&l_Lean_Level_normalize___closed__1_value;
static lean_once_cell_t l_Lean_Level_normalize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_normalize___closed__3;
LEAN_EXPORT lean_object* l_Lean_Level_normalize(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_normalize___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isEquiv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_dec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_dec___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_num_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_num_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_offset_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_offset_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_maxNode_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_maxNode_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imaxNode_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imaxNode_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_succ(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_max(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imax(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Level_PP_toResult___closed__0 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__0_value;
static const lean_string_object l_Lean_Level_PP_toResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Level_PP_toResult___closed__1 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__1_value;
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_toResult___closed__1_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l_Lean_Level_PP_toResult___closed__2 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__2_value;
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Level_PP_toResult___closed__2_value)}};
static const lean_object* l_Lean_Level_PP_toResult___closed__3 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__3_value;
static const lean_string_object l_Lean_Level_PP_toResult___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\?u"};
static const lean_object* l_Lean_Level_PP_toResult___closed__4 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__4_value;
static lean_once_cell_t l_Lean_Level_PP_toResult___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_toResult___closed__5;
static const lean_string_object l_Lean_Level_PP_toResult___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_Lean_Level_PP_toResult___closed__6 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__6_value;
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_toResult___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_Lean_Level_PP_toResult___closed__7 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__7_value;
static const lean_string_object l_Lean_Level_PP_toResult___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "\?_mvar"};
static const lean_object* l_Lean_Level_PP_toResult___closed__8 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__8_value;
static lean_once_cell_t l_Lean_Level_PP_toResult___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_toResult___closed__9;
LEAN_EXPORT lean_object* l_Lean_Level_PP_toResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_toResult___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0_value;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2;
static const lean_ctor_object l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0_value)}};
static const lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__3 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__3_value;
static const lean_ctor_object l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprData___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__4 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Level_PP_Result_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* l_Lean_Level_PP_Result_format___closed__0 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__0_value;
static const lean_ctor_object l_Lean_Level_PP_Result_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_format___closed__0_value)}};
static const lean_object* l_Lean_Level_PP_Result_format___closed__1 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__1_value;
static const lean_string_object l_Lean_Level_PP_Result_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l_Lean_Level_PP_Result_format___closed__2 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__2_value;
static const lean_ctor_object l_Lean_Level_PP_Result_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_format___closed__2_value)}};
static const lean_object* l_Lean_Level_PP_Result_format___closed__3 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__3_value;
static const lean_string_object l_Lean_Level_PP_Result_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l_Lean_Level_PP_Result_format___closed__4 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__4_value;
static const lean_ctor_object l_Lean_Level_PP_Result_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_format___closed__4_value)}};
static const lean_object* l_Lean_Level_PP_Result_format___closed__5 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_format(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_format___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__0;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__4 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__4_value;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Level"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__3 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__2 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__1 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__5_value_aux_0),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__5_value_aux_1),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__5_value_aux_2),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__4_value),LEAN_SCALAR_PTR_LITERAL(67, 200, 57, 231, 14, 244, 115, 229)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__5 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__5_value;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__6;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__7;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "addLit"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__8 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__8_value;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__9_value_aux_0),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__9_value_aux_1),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__9_value_aux_2),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__8_value),LEAN_SCALAR_PTR_LITERAL(53, 243, 225, 2, 30, 243, 80, 174)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__9 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__9_value;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__10 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__10_value;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__11_value_aux_0),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__11_value_aux_1),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__11_value_aux_2),((lean_object*)&l_Lean_Level_PP_Result_format___closed__2_value),LEAN_SCALAR_PTR_LITERAL(106, 181, 1, 145, 170, 142, 100, 97)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__11 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__11_value;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__12;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__13 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__13_value;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__14 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__14_value;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__15;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__16_value_aux_0),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__16_value_aux_1),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__16_value_aux_2),((lean_object*)&l_Lean_Level_PP_Result_format___closed__4_value),LEAN_SCALAR_PTR_LITERAL(124, 169, 176, 27, 219, 169, 119, 28)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__16 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__16_value;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__17;
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_quote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_quote___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_format(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Level_instToFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_instToFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Level_instToFormat___closed__0 = (const lean_object*)&l_Lean_Level_instToFormat___closed__0_value;
static const lean_closure_object l_Lean_Level_instToFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_instToFormat___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Level_instToFormat___closed__0_value)} };
static const lean_object* l_Lean_Level_instToFormat___closed__1 = (const lean_object*)&l_Lean_Level_instToFormat___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instToFormat = (const lean_object*)&l_Lean_Level_instToFormat___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Level_instToString___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Level_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_instToString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Level_instToFormat___closed__0_value)} };
static const lean_object* l_Lean_Level_instToString___closed__0 = (const lean_object*)&l_Lean_Level_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instToString = (const lean_object*)&l_Lean_Level_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Level_quote(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_quote___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instQuoteMkStr1___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Level_instQuoteMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_instQuoteMkStr1___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Level_instToFormat___closed__0_value)} };
static const lean_object* l_Lean_Level_instQuoteMkStr1___closed__0 = (const lean_object*)&l_Lean_Level_instQuoteMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instQuoteMkStr1 = (const lean_object*)&l_Lean_Level_instQuoteMkStr1___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_simpLevelMax_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_simpLevelMax_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelIMaxCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_simpLevelIMax_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_simpLevelIMax_x27___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.Lean.Level.0.Lean.Level.updateSucc!Impl"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "succ level expected"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.Lean.Level.0.Lean.Level.updateMax!Impl"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "max level expected"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.Lean.Level.0.Lean.Level.updateIMax!Impl"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "imax level expected"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mkNaryMax(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_substParams_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_substParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getParamSubst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getParamSubst___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instantiateParams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_geq_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isIMax_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isIMax_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_geq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_geq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Level_collectMVars_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_collectMVars(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Level_collectMVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_find_x3f_visit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_any(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_any___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_toLevel(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_toLevel___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_imax(lean_object* v_n_1_, lean_object* v_m_2_){
_start:
{
lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(0u);
v___x_4_ = lean_nat_dec_eq(v_m_2_, v___x_3_);
if (v___x_4_ == 0)
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_le(v_n_1_, v_m_2_);
if (v___x_5_ == 0)
{
lean_inc(v_n_1_);
return v_n_1_;
}
else
{
lean_inc(v_m_2_);
return v_m_2_;
}
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Nat_imax___boxed(lean_object* v_n_6_, lean_object* v_m_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Nat_imax(v_n_6_, v_m_7_);
lean_dec(v_m_7_);
lean_dec(v_n_6_);
return v_res_8_;
}
}
static uint64_t _init_l_Lean_instInhabitedData___aux__1(void){
_start:
{
uint64_t v___x_9_; 
v___x_9_ = 0ULL;
return v___x_9_;
}
}
static uint64_t _init_l_Lean_instInhabitedData(void){
_start:
{
uint64_t v___x_10_; 
v___x_10_ = 0ULL;
return v___x_10_;
}
}
LEAN_EXPORT uint64_t l_Lean_Level_Data_hash(uint64_t v_c_11_){
_start:
{
uint32_t v___x_12_; uint64_t v___x_13_; 
v___x_12_ = lean_uint64_to_uint32(v_c_11_);
v___x_13_ = lean_uint32_to_uint64(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_Data_hash___boxed(lean_object* v_c_14_){
_start:
{
uint64_t v_c_boxed_15_; uint64_t v_res_16_; lean_object* v_r_17_; 
v_c_boxed_15_ = lean_unbox_uint64(v_c_14_);
lean_dec_ref(v_c_14_);
v_res_16_ = l_Lean_Level_Data_hash(v_c_boxed_15_);
v_r_17_ = lean_box_uint64(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint32_t l_Lean_Level_Data_depth(uint64_t v_c_20_){
_start:
{
uint64_t v___x_21_; uint64_t v___x_22_; uint32_t v___x_23_; 
v___x_21_ = 40ULL;
v___x_22_ = lean_uint64_shift_right(v_c_20_, v___x_21_);
v___x_23_ = lean_uint64_to_uint32(v___x_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_Data_depth___boxed(lean_object* v_c_24_){
_start:
{
uint64_t v_c_boxed_25_; uint32_t v_res_26_; lean_object* v_r_27_; 
v_c_boxed_25_ = lean_unbox_uint64(v_c_24_);
lean_dec_ref(v_c_24_);
v_res_26_ = l_Lean_Level_Data_depth(v_c_boxed_25_);
v_r_27_ = lean_box_uint32(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_Data_hasMVar(uint64_t v_c_28_){
_start:
{
uint64_t v___x_29_; uint64_t v___x_30_; uint64_t v___x_31_; uint64_t v___x_32_; uint8_t v___x_33_; 
v___x_29_ = 32ULL;
v___x_30_ = lean_uint64_shift_right(v_c_28_, v___x_29_);
v___x_31_ = 1ULL;
v___x_32_ = lean_uint64_land(v___x_30_, v___x_31_);
v___x_33_ = lean_uint64_dec_eq(v___x_32_, v___x_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_Data_hasMVar___boxed(lean_object* v_c_34_){
_start:
{
uint64_t v_c_boxed_35_; uint8_t v_res_36_; lean_object* v_r_37_; 
v_c_boxed_35_ = lean_unbox_uint64(v_c_34_);
lean_dec_ref(v_c_34_);
v_res_36_ = l_Lean_Level_Data_hasMVar(v_c_boxed_35_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_Data_hasParam(uint64_t v_c_38_){
_start:
{
uint64_t v___x_39_; uint64_t v___x_40_; uint64_t v___x_41_; uint64_t v___x_42_; uint8_t v___x_43_; 
v___x_39_ = 33ULL;
v___x_40_ = lean_uint64_shift_right(v_c_38_, v___x_39_);
v___x_41_ = 1ULL;
v___x_42_ = lean_uint64_land(v___x_40_, v___x_41_);
v___x_43_ = lean_uint64_dec_eq(v___x_42_, v___x_41_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_Data_hasParam___boxed(lean_object* v_c_44_){
_start:
{
uint64_t v_c_boxed_45_; uint8_t v_res_46_; lean_object* v_r_47_; 
v_c_boxed_45_ = lean_unbox_uint64(v_c_44_);
lean_dec_ref(v_c_44_);
v_res_46_ = l_Lean_Level_Data_hasParam(v_c_boxed_45_);
v_r_47_ = lean_box(v_res_46_);
return v_r_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mkData___boxed(lean_object* v_h_52_, lean_object* v_depth_53_, lean_object* v_hasMVar_54_, lean_object* v_hasParam_55_){
_start:
{
uint64_t v_h_boxed_56_; uint8_t v_hasMVar_boxed_57_; uint8_t v_hasParam_boxed_58_; uint64_t v_res_59_; lean_object* v_r_60_; 
v_h_boxed_56_ = lean_unbox_uint64(v_h_52_);
lean_dec_ref(v_h_52_);
v_hasMVar_boxed_57_ = lean_unbox(v_hasMVar_54_);
v_hasParam_boxed_58_ = lean_unbox(v_hasParam_55_);
v_res_59_ = lean_level_mk_data(v_h_boxed_56_, v_depth_53_, v_hasMVar_boxed_57_, v_hasParam_boxed_58_);
v_r_60_ = lean_box_uint64(v_res_59_);
return v_r_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprData___lam__0(uint64_t v_v_68_, lean_object* v_prec_69_){
_start:
{
lean_object* v_r_71_; lean_object* v___y_75_; lean_object* v___y_76_; lean_object* v_r_81_; lean_object* v___y_88_; lean_object* v___y_89_; lean_object* v_r_94_; lean_object* v___x_100_; uint64_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v_r_104_; uint32_t v___x_105_; uint32_t v___x_106_; uint8_t v___x_107_; 
v___x_100_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__5));
v___x_101_ = l_Lean_Level_Data_hash(v_v_68_);
v___x_102_ = lean_uint64_to_nat(v___x_101_);
v___x_103_ = l_Nat_reprFast(v___x_102_);
v_r_104_ = lean_string_append(v___x_100_, v___x_103_);
lean_dec_ref(v___x_103_);
v___x_105_ = l_Lean_Level_Data_depth(v_v_68_);
v___x_106_ = 0;
v___x_107_ = lean_uint32_dec_eq(v___x_105_, v___x_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v_r_114_; 
v___x_108_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__6));
v___x_109_ = lean_string_append(v_r_104_, v___x_108_);
v___x_110_ = lean_uint32_to_nat(v___x_105_);
v___x_111_ = l_Nat_reprFast(v___x_110_);
v___x_112_ = lean_string_append(v___x_109_, v___x_111_);
lean_dec_ref(v___x_111_);
v___x_113_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__0));
v_r_114_ = lean_string_append(v___x_112_, v___x_113_);
v_r_94_ = v_r_114_;
goto v___jp_93_;
}
else
{
v_r_94_ = v_r_104_;
goto v___jp_93_;
}
v___jp_70_:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_72_, 0, v_r_71_);
v___x_73_ = l_Repr_addAppParen(v___x_72_, v_prec_69_);
return v___x_73_;
}
v___jp_74_:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v_r_79_; 
v___x_77_ = lean_string_append(v___y_75_, v___y_76_);
v___x_78_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__0));
v_r_79_ = lean_string_append(v___x_77_, v___x_78_);
v_r_71_ = v_r_79_;
goto v___jp_70_;
}
v___jp_80_:
{
uint8_t v___x_82_; 
v___x_82_ = l_Lean_Level_Data_hasParam(v_v_68_);
if (v___x_82_ == 0)
{
v_r_71_ = v_r_81_;
goto v___jp_70_;
}
else
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__1));
v___x_84_ = lean_string_append(v_r_81_, v___x_83_);
if (v___x_82_ == 0)
{
lean_object* v___x_85_; 
v___x_85_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__2));
v___y_75_ = v___x_84_;
v___y_76_ = v___x_85_;
goto v___jp_74_;
}
else
{
lean_object* v___x_86_; 
v___x_86_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__3));
v___y_75_ = v___x_84_;
v___y_76_ = v___x_86_;
goto v___jp_74_;
}
}
}
v___jp_87_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v_r_92_; 
v___x_90_ = lean_string_append(v___y_88_, v___y_89_);
v___x_91_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__0));
v_r_92_ = lean_string_append(v___x_90_, v___x_91_);
v_r_81_ = v_r_92_;
goto v___jp_80_;
}
v___jp_93_:
{
uint8_t v___x_95_; 
v___x_95_ = l_Lean_Level_Data_hasMVar(v_v_68_);
if (v___x_95_ == 0)
{
v_r_81_ = v_r_94_;
goto v___jp_80_;
}
else
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__4));
v___x_97_ = lean_string_append(v_r_94_, v___x_96_);
if (v___x_95_ == 0)
{
lean_object* v___x_98_; 
v___x_98_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__2));
v___y_88_ = v___x_97_;
v___y_89_ = v___x_98_;
goto v___jp_87_;
}
else
{
lean_object* v___x_99_; 
v___x_99_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__3));
v___y_88_ = v___x_97_;
v___y_89_ = v___x_99_;
goto v___jp_87_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprData___lam__0___boxed(lean_object* v_v_115_, lean_object* v_prec_116_){
_start:
{
uint64_t v_v_boxed_117_; lean_object* v_res_118_; 
v_v_boxed_117_ = lean_unbox_uint64(v_v_115_);
lean_dec_ref(v_v_115_);
v_res_118_ = l_Lean_instReprData___lam__0(v_v_boxed_117_, v_prec_116_);
lean_dec(v_prec_116_);
return v_res_118_;
}
}
static lean_object* _init_l_Lean_instInhabitedLevelMVarId_default___closed__0(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_box(0);
v___x_122_ = l_unsafeCast___redArg(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_instInhabitedLevelMVarId_default(void){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = lean_obj_once(&l_Lean_instInhabitedLevelMVarId_default___closed__0, &l_Lean_instInhabitedLevelMVarId_default___closed__0_once, _init_l_Lean_instInhabitedLevelMVarId_default___closed__0);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_instInhabitedLevelMVarId(void){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_instInhabitedLevelMVarId_default;
return v___x_124_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqLevelMVarId_beq(lean_object* v_x_125_, lean_object* v_x_126_){
_start:
{
uint8_t v___x_127_; 
v___x_127_ = lean_name_eq(v_x_125_, v_x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqLevelMVarId_beq___boxed(lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = l_Lean_instBEqLevelMVarId_beq(v_x_128_, v_x_129_);
lean_dec(v_x_129_);
lean_dec(v_x_128_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
static uint64_t _init_l_Lean_instHashableLevelMVarId_hash___closed__0(void){
_start:
{
uint64_t v___x_134_; uint64_t v___x_135_; uint64_t v___x_136_; 
v___x_134_ = 1723ULL;
v___x_135_ = 0ULL;
v___x_136_ = lean_uint64_mix_hash(v___x_135_, v___x_134_);
return v___x_136_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableLevelMVarId_hash(lean_object* v_x_137_){
_start:
{
uint64_t v___x_138_; lean_object* v___x_139_; 
v___x_138_ = 0ULL;
v___x_139_ = l_unsafeCast___redArg(v_x_137_);
if (lean_obj_tag(v___x_139_) == 0)
{
uint64_t v___x_140_; 
v___x_140_ = lean_uint64_once(&l_Lean_instHashableLevelMVarId_hash___closed__0, &l_Lean_instHashableLevelMVarId_hash___closed__0_once, _init_l_Lean_instHashableLevelMVarId_hash___closed__0);
return v___x_140_;
}
else
{
uint64_t v_hash_141_; uint64_t v___x_142_; 
v_hash_141_ = lean_ctor_get_uint64(v___x_139_, sizeof(void*)*2);
lean_dec(v___x_139_);
v___x_142_ = lean_uint64_mix_hash(v___x_138_, v_hash_141_);
return v___x_142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableLevelMVarId_hash___boxed(lean_object* v_x_143_){
_start:
{
uint64_t v_res_144_; lean_object* v_r_145_; 
v_res_144_ = l_Lean_instHashableLevelMVarId_hash(v_x_143_);
lean_dec(v_x_143_);
v_r_145_ = lean_box_uint64(v_res_144_);
return v_r_145_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprLevelMVarId_repr_spec__0(lean_object* v_a_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_nat_to_int(v_a_148_);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(8u);
v___x_164_ = lean_nat_to_int(v___x_163_);
return v___x_164_;
}
}
static lean_object* _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = ((lean_object*)(l_Lean_instReprLevelMVarId_repr___redArg___closed__0));
v___x_167_ = lean_string_length(v___x_166_);
return v___x_167_;
}
}
static lean_object* _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = lean_obj_once(&l_Lean_instReprLevelMVarId_repr___redArg___closed__9, &l_Lean_instReprLevelMVarId_repr___redArg___closed__9_once, _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__9);
v___x_169_ = lean_nat_to_int(v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr___redArg(lean_object* v_x_174_){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_175_ = ((lean_object*)(l_Lean_instReprLevelMVarId_repr___redArg___closed__6));
v___x_176_ = lean_obj_once(&l_Lean_instReprLevelMVarId_repr___redArg___closed__7, &l_Lean_instReprLevelMVarId_repr___redArg___closed__7_once, _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__7);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = l_Lean_Name_reprPrec(v_x_174_, v___x_177_);
v___x_179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_176_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = 0;
v___x_181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_181_, 0, v___x_179_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*1, v___x_180_);
v___x_182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_175_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
v___x_183_ = lean_obj_once(&l_Lean_instReprLevelMVarId_repr___redArg___closed__10, &l_Lean_instReprLevelMVarId_repr___redArg___closed__10_once, _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__10);
v___x_184_ = ((lean_object*)(l_Lean_instReprLevelMVarId_repr___redArg___closed__11));
v___x_185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_182_);
v___x_186_ = ((lean_object*)(l_Lean_instReprLevelMVarId_repr___redArg___closed__12));
v___x_187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_185_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_183_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*1, v___x_180_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr(lean_object* v_x_190_, lean_object* v_prec_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l_Lean_instReprLevelMVarId_repr___redArg(v_x_190_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr___boxed(lean_object* v_x_193_, lean_object* v_prec_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_instReprLevelMVarId_repr(v_x_193_, v_prec_194_);
lean_dec(v_prec_194_);
return v_res_195_;
}
}
static lean_object* _init_l_Lean_instInhabitedLMVarIdSet___aux__1(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_box(1);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_instInhabitedLMVarIdSet(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_box(1);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionLMVarIdSet___aux__1(void){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = lean_box(1);
return v___x_202_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionLMVarIdSet(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lean_box(1);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__0(lean_object* v_f_204_, lean_object* v_a_205_, lean_object* v_b_206_, lean_object* v_c_207_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_apply_2(v_f_204_, v_a_205_, v_c_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__1(lean_object* v_toPure_209_, lean_object* v_____do__lift_210_){
_start:
{
lean_object* v_a_211_; lean_object* v___x_212_; 
v_a_211_ = lean_ctor_get(v_____do__lift_210_, 0);
lean_inc(v_a_211_);
lean_dec_ref(v_____do__lift_210_);
v___x_212_ = lean_apply_2(v_toPure_209_, lean_box(0), v_a_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg(lean_object* v_inst_213_, lean_object* v_m_214_, lean_object* v_init_215_, lean_object* v_f_216_){
_start:
{
lean_object* v_toApplicative_217_; lean_object* v_toBind_218_; lean_object* v_toPure_219_; lean_object* v___f_220_; lean_object* v___x_221_; lean_object* v___f_222_; lean_object* v___x_223_; 
v_toApplicative_217_ = lean_ctor_get(v_inst_213_, 0);
v_toBind_218_ = lean_ctor_get(v_inst_213_, 1);
lean_inc(v_toBind_218_);
v_toPure_219_ = lean_ctor_get(v_toApplicative_217_, 1);
lean_inc(v_toPure_219_);
v___f_220_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_220_, 0, v_f_216_);
v___x_221_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_213_, v___f_220_, v_init_215_, v_m_214_);
v___f_222_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_222_, 0, v_toPure_219_);
v___x_223_ = lean_apply_4(v_toBind_218_, lean_box(0), lean_box(0), v___x_221_, v___f_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1(lean_object* v_m_224_, lean_object* v_inst_225_, lean_object* v_00_u03b2_226_, lean_object* v_m_227_, lean_object* v_init_228_, lean_object* v_f_229_){
_start:
{
lean_object* v_toApplicative_230_; lean_object* v_toBind_231_; lean_object* v_toPure_232_; lean_object* v___f_233_; lean_object* v___x_234_; lean_object* v___f_235_; lean_object* v___x_236_; 
v_toApplicative_230_ = lean_ctor_get(v_inst_225_, 0);
v_toBind_231_ = lean_ctor_get(v_inst_225_, 1);
lean_inc(v_toBind_231_);
v_toPure_232_ = lean_ctor_get(v_toApplicative_230_, 1);
lean_inc(v_toPure_232_);
v___f_233_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_233_, 0, v_f_229_);
v___x_234_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_225_, v___f_233_, v_init_228_, v_m_227_);
v___f_235_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_235_, 0, v_toPure_232_);
v___x_236_ = lean_apply_4(v_toBind_231_, lean_box(0), lean_box(0), v___x_234_, v___f_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg(lean_object* v_inst_237_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1), 6, 2);
lean_closure_set(v___x_238_, 0, lean_box(0));
lean_closure_set(v___x_238_, 1, v_inst_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad(lean_object* v_m_239_, lean_object* v_inst_240_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1), 6, 2);
lean_closure_set(v___x_241_, 0, lean_box(0));
lean_closure_set(v___x_241_, 1, v_inst_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___aux__1___redArg(){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = lean_box(1);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___aux__1___redArg___boxed(lean_object* v___dummy_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_instEmptyCollectionLMVarIdMap___aux__1___redArg();
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___aux__1(lean_object* v_00_u03b1_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_box(1);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___redArg(){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_box(1);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___redArg___boxed(lean_object* v___dummy_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_instEmptyCollectionLMVarIdMap___redArg();
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap(lean_object* v_00_u03b1_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_box(1);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1___redArg___lam__0(lean_object* v_f_254_, lean_object* v_a_255_, lean_object* v_b_256_, lean_object* v_c_257_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v_a_255_);
lean_ctor_set(v___x_258_, 1, v_b_256_);
v___x_259_ = lean_apply_2(v_f_254_, v___x_258_, v_c_257_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1___redArg(lean_object* v_inst_260_, lean_object* v_m_261_, lean_object* v_init_262_, lean_object* v_f_263_){
_start:
{
lean_object* v_toApplicative_264_; lean_object* v_toBind_265_; lean_object* v_toPure_266_; lean_object* v___f_267_; lean_object* v___x_268_; lean_object* v___f_269_; lean_object* v___x_270_; 
v_toApplicative_264_ = lean_ctor_get(v_inst_260_, 0);
v_toBind_265_ = lean_ctor_get(v_inst_260_, 1);
lean_inc(v_toBind_265_);
v_toPure_266_ = lean_ctor_get(v_toApplicative_264_, 1);
lean_inc(v_toPure_266_);
v___f_267_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_267_, 0, v_f_263_);
v___x_268_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_260_, v___f_267_, v_init_262_, v_m_261_);
v___f_269_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_269_, 0, v_toPure_266_);
v___x_270_ = lean_apply_4(v_toBind_265_, lean_box(0), lean_box(0), v___x_268_, v___f_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1(lean_object* v_m_271_, lean_object* v_00_u03b1_272_, lean_object* v_inst_273_, lean_object* v_00_u03b2_274_, lean_object* v_m_275_, lean_object* v_init_276_, lean_object* v_f_277_){
_start:
{
lean_object* v_toApplicative_278_; lean_object* v_toBind_279_; lean_object* v_toPure_280_; lean_object* v___f_281_; lean_object* v___x_282_; lean_object* v___f_283_; lean_object* v___x_284_; 
v_toApplicative_278_ = lean_ctor_get(v_inst_273_, 0);
v_toBind_279_ = lean_ctor_get(v_inst_273_, 1);
lean_inc(v_toBind_279_);
v_toPure_280_ = lean_ctor_get(v_toApplicative_278_, 1);
lean_inc(v_toPure_280_);
v___f_281_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_281_, 0, v_f_277_);
v___x_282_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_273_, v___f_281_, v_init_276_, v_m_275_);
v___f_283_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_283_, 0, v_toPure_280_);
v___x_284_ = lean_apply_4(v_toBind_279_, lean_box(0), lean_box(0), v___x_282_, v___f_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg(lean_object* v_inst_285_){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_286_, 0, lean_box(0));
lean_closure_set(v___x_286_, 1, lean_box(0));
lean_closure_set(v___x_286_, 2, v_inst_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad(lean_object* v_m_287_, lean_object* v_00_u03b1_288_, lean_object* v_inst_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_290_, 0, lean_box(0));
lean_closure_set(v___x_290_, 1, lean_box(0));
lean_closure_set(v___x_290_, 2, v_inst_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap___redArg(){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_box(1);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap___redArg___boxed(lean_object* v___dummy_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_instInhabitedLMVarIdMap___redArg();
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap(lean_object* v_00_u03b1_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_box(1);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorIdx(lean_object* v_x_297_){
_start:
{
switch(lean_obj_tag(v_x_297_))
{
case 0:
{
lean_object* v___x_298_; 
v___x_298_ = lean_unsigned_to_nat(0u);
return v___x_298_;
}
case 1:
{
lean_object* v___x_299_; 
v___x_299_ = lean_unsigned_to_nat(1u);
return v___x_299_;
}
case 2:
{
lean_object* v___x_300_; 
v___x_300_ = lean_unsigned_to_nat(2u);
return v___x_300_;
}
case 3:
{
lean_object* v___x_301_; 
v___x_301_ = lean_unsigned_to_nat(3u);
return v___x_301_;
}
case 4:
{
lean_object* v___x_302_; 
v___x_302_ = lean_unsigned_to_nat(4u);
return v___x_302_;
}
default: 
{
lean_object* v___x_303_; 
v___x_303_ = lean_unsigned_to_nat(5u);
return v___x_303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorIdx___boxed(lean_object* v_x_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Level_ctorIdx(v_x_304_);
lean_dec(v_x_304_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim___redArg(lean_object* v_t_306_, lean_object* v_k_307_){
_start:
{
switch(lean_obj_tag(v_t_306_))
{
case 0:
{
return v_k_307_;
}
case 2:
{
lean_object* v_a_308_; lean_object* v_a_309_; lean_object* v___x_310_; 
v_a_308_ = lean_ctor_get(v_t_306_, 0);
lean_inc(v_a_308_);
v_a_309_ = lean_ctor_get(v_t_306_, 1);
lean_inc(v_a_309_);
lean_dec_ref_known(v_t_306_, 2);
v___x_310_ = lean_apply_2(v_k_307_, v_a_308_, v_a_309_);
return v___x_310_;
}
case 3:
{
lean_object* v_a_311_; lean_object* v_a_312_; lean_object* v___x_313_; 
v_a_311_ = lean_ctor_get(v_t_306_, 0);
lean_inc(v_a_311_);
v_a_312_ = lean_ctor_get(v_t_306_, 1);
lean_inc(v_a_312_);
lean_dec_ref_known(v_t_306_, 2);
v___x_313_ = lean_apply_2(v_k_307_, v_a_311_, v_a_312_);
return v___x_313_;
}
default: 
{
lean_object* v_a_314_; lean_object* v___x_315_; 
v_a_314_ = lean_ctor_get(v_t_306_, 0);
lean_inc(v_a_314_);
lean_dec(v_t_306_);
v___x_315_ = lean_apply_1(v_k_307_, v_a_314_);
return v___x_315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim(lean_object* v_motive_316_, lean_object* v_ctorIdx_317_, lean_object* v_t_318_, lean_object* v_h_319_, lean_object* v_k_320_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = l_Lean_Level_ctorElim___redArg(v_t_318_, v_k_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim___boxed(lean_object* v_motive_322_, lean_object* v_ctorIdx_323_, lean_object* v_t_324_, lean_object* v_h_325_, lean_object* v_k_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Level_ctorElim(v_motive_322_, v_ctorIdx_323_, v_t_324_, v_h_325_, v_k_326_);
lean_dec(v_ctorIdx_323_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_zero_elim___redArg(lean_object* v_t_328_, lean_object* v_zero_329_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l_Lean_Level_ctorElim___redArg(v_t_328_, v_zero_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_zero_elim(lean_object* v_motive_331_, lean_object* v_t_332_, lean_object* v_h_333_, lean_object* v_zero_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Level_ctorElim___redArg(v_t_332_, v_zero_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_succ_elim___redArg(lean_object* v_t_336_, lean_object* v_succ_337_){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = l_Lean_Level_ctorElim___redArg(v_t_336_, v_succ_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_succ_elim(lean_object* v_motive_339_, lean_object* v_t_340_, lean_object* v_h_341_, lean_object* v_succ_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lean_Level_ctorElim___redArg(v_t_340_, v_succ_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_max_elim___redArg(lean_object* v_t_344_, lean_object* v_max_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = l_Lean_Level_ctorElim___redArg(v_t_344_, v_max_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_max_elim(lean_object* v_motive_347_, lean_object* v_t_348_, lean_object* v_h_349_, lean_object* v_max_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lean_Level_ctorElim___redArg(v_t_348_, v_max_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_imax_elim___redArg(lean_object* v_t_352_, lean_object* v_imax_353_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lean_Level_ctorElim___redArg(v_t_352_, v_imax_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_imax_elim(lean_object* v_motive_355_, lean_object* v_t_356_, lean_object* v_h_357_, lean_object* v_imax_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_Level_ctorElim___redArg(v_t_356_, v_imax_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_param_elim___redArg(lean_object* v_t_360_, lean_object* v_param_361_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_Lean_Level_ctorElim___redArg(v_t_360_, v_param_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_param_elim(lean_object* v_motive_363_, lean_object* v_t_364_, lean_object* v_h_365_, lean_object* v_param_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lean_Level_ctorElim___redArg(v_t_364_, v_param_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvar_elim___redArg(lean_object* v_t_368_, lean_object* v_mvar_369_){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = l_Lean_Level_ctorElim___redArg(v_t_368_, v_mvar_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvar_elim(lean_object* v_motive_371_, lean_object* v_t_372_, lean_object* v_h_373_, lean_object* v_mvar_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Level_ctorElim___redArg(v_t_372_, v_mvar_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___redArg(lean_object* v_t_376_, lean_object* v_zero_377_, lean_object* v_succ_378_, lean_object* v_max_379_, lean_object* v_imax_380_, lean_object* v_param_381_, lean_object* v_mvar_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_unsafeCast___redArg(v_t_376_);
switch(lean_obj_tag(v___x_383_))
{
case 0:
{
lean_object* v___x_384_; 
lean_dec(v_mvar_382_);
lean_dec(v_param_381_);
lean_dec(v_imax_380_);
lean_dec(v_max_379_);
lean_dec(v_succ_378_);
v___x_384_ = l_unsafeCast___redArg(v_zero_377_);
return v___x_384_;
}
case 1:
{
lean_object* v_a_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
lean_dec(v_mvar_382_);
lean_dec(v_param_381_);
lean_dec(v_imax_380_);
lean_dec(v_max_379_);
v_a_385_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v___x_383_, 1);
v___x_386_ = lean_apply_1(v_succ_378_, v_a_385_);
v___x_387_ = l_unsafeCast___redArg(v___x_386_);
lean_dec(v___x_386_);
return v___x_387_;
}
case 2:
{
lean_object* v_a_388_; lean_object* v_a_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
lean_dec(v_mvar_382_);
lean_dec(v_param_381_);
lean_dec(v_imax_380_);
lean_dec(v_succ_378_);
v_a_388_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_388_);
v_a_389_ = lean_ctor_get(v___x_383_, 1);
lean_inc(v_a_389_);
lean_dec_ref_known(v___x_383_, 2);
v___x_390_ = lean_apply_2(v_max_379_, v_a_388_, v_a_389_);
v___x_391_ = l_unsafeCast___redArg(v___x_390_);
lean_dec(v___x_390_);
return v___x_391_;
}
case 3:
{
lean_object* v_a_392_; lean_object* v_a_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
lean_dec(v_mvar_382_);
lean_dec(v_param_381_);
lean_dec(v_max_379_);
lean_dec(v_succ_378_);
v_a_392_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_392_);
v_a_393_ = lean_ctor_get(v___x_383_, 1);
lean_inc(v_a_393_);
lean_dec_ref_known(v___x_383_, 2);
v___x_394_ = lean_apply_2(v_imax_380_, v_a_392_, v_a_393_);
v___x_395_ = l_unsafeCast___redArg(v___x_394_);
lean_dec(v___x_394_);
return v___x_395_;
}
case 4:
{
lean_object* v_a_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
lean_dec(v_mvar_382_);
lean_dec(v_imax_380_);
lean_dec(v_max_379_);
lean_dec(v_succ_378_);
v_a_396_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_396_);
lean_dec_ref_known(v___x_383_, 1);
v___x_397_ = lean_apply_1(v_param_381_, v_a_396_);
v___x_398_ = l_unsafeCast___redArg(v___x_397_);
lean_dec(v___x_397_);
return v___x_398_;
}
default: 
{
lean_object* v_a_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
lean_dec(v_param_381_);
lean_dec(v_imax_380_);
lean_dec(v_max_379_);
lean_dec(v_succ_378_);
v_a_399_ = lean_ctor_get(v___x_383_, 0);
lean_inc(v_a_399_);
lean_dec_ref_known(v___x_383_, 1);
v___x_400_ = lean_apply_1(v_mvar_382_, v_a_399_);
v___x_401_ = l_unsafeCast___redArg(v___x_400_);
lean_dec(v___x_400_);
return v___x_401_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___redArg___boxed(lean_object* v_t_402_, lean_object* v_zero_403_, lean_object* v_succ_404_, lean_object* v_max_405_, lean_object* v_imax_406_, lean_object* v_param_407_, lean_object* v_mvar_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Level_casesOn___override___redArg(v_t_402_, v_zero_403_, v_succ_404_, v_max_405_, v_imax_406_, v_param_407_, v_mvar_408_);
lean_dec(v_zero_403_);
lean_dec(v_t_402_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override(lean_object* v_motive_410_, lean_object* v_t_411_, lean_object* v_zero_412_, lean_object* v_succ_413_, lean_object* v_max_414_, lean_object* v_imax_415_, lean_object* v_param_416_, lean_object* v_mvar_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_unsafeCast___redArg(v_t_411_);
switch(lean_obj_tag(v___x_418_))
{
case 0:
{
lean_object* v___x_419_; 
lean_dec(v_mvar_417_);
lean_dec(v_param_416_);
lean_dec(v_imax_415_);
lean_dec(v_max_414_);
lean_dec(v_succ_413_);
v___x_419_ = l_unsafeCast___redArg(v_zero_412_);
return v___x_419_;
}
case 1:
{
lean_object* v_a_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
lean_dec(v_mvar_417_);
lean_dec(v_param_416_);
lean_dec(v_imax_415_);
lean_dec(v_max_414_);
v_a_420_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_418_, 1);
v___x_421_ = lean_apply_1(v_succ_413_, v_a_420_);
v___x_422_ = l_unsafeCast___redArg(v___x_421_);
lean_dec(v___x_421_);
return v___x_422_;
}
case 2:
{
lean_object* v_a_423_; lean_object* v_a_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
lean_dec(v_mvar_417_);
lean_dec(v_param_416_);
lean_dec(v_imax_415_);
lean_dec(v_succ_413_);
v_a_423_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_423_);
v_a_424_ = lean_ctor_get(v___x_418_, 1);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_418_, 2);
v___x_425_ = lean_apply_2(v_max_414_, v_a_423_, v_a_424_);
v___x_426_ = l_unsafeCast___redArg(v___x_425_);
lean_dec(v___x_425_);
return v___x_426_;
}
case 3:
{
lean_object* v_a_427_; lean_object* v_a_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
lean_dec(v_mvar_417_);
lean_dec(v_param_416_);
lean_dec(v_max_414_);
lean_dec(v_succ_413_);
v_a_427_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_427_);
v_a_428_ = lean_ctor_get(v___x_418_, 1);
lean_inc(v_a_428_);
lean_dec_ref_known(v___x_418_, 2);
v___x_429_ = lean_apply_2(v_imax_415_, v_a_427_, v_a_428_);
v___x_430_ = l_unsafeCast___redArg(v___x_429_);
lean_dec(v___x_429_);
return v___x_430_;
}
case 4:
{
lean_object* v_a_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
lean_dec(v_mvar_417_);
lean_dec(v_imax_415_);
lean_dec(v_max_414_);
lean_dec(v_succ_413_);
v_a_431_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_431_);
lean_dec_ref_known(v___x_418_, 1);
v___x_432_ = lean_apply_1(v_param_416_, v_a_431_);
v___x_433_ = l_unsafeCast___redArg(v___x_432_);
lean_dec(v___x_432_);
return v___x_433_;
}
default: 
{
lean_object* v_a_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
lean_dec(v_param_416_);
lean_dec(v_imax_415_);
lean_dec(v_max_414_);
lean_dec(v_succ_413_);
v_a_434_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_434_);
lean_dec_ref_known(v___x_418_, 1);
v___x_435_ = lean_apply_1(v_mvar_417_, v_a_434_);
v___x_436_ = l_unsafeCast___redArg(v___x_435_);
lean_dec(v___x_435_);
return v___x_436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___boxed(lean_object* v_motive_437_, lean_object* v_t_438_, lean_object* v_zero_439_, lean_object* v_succ_440_, lean_object* v_max_441_, lean_object* v_imax_442_, lean_object* v_param_443_, lean_object* v_mvar_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_Level_casesOn___override(v_motive_437_, v_t_438_, v_zero_439_, v_succ_440_, v_max_441_, v_imax_442_, v_param_443_, v_mvar_444_);
lean_dec(v_zero_439_);
lean_dec(v_t_438_);
return v_res_445_;
}
}
static lean_object* _init_l_Lean_Level_zero___override___closed__0(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_box(0);
v___x_447_ = l_unsafeCast___redArg(v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l_Lean_Level_zero___override(void){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = lean_obj_once(&l_Lean_Level_zero___override___closed__0, &l_Lean_Level_zero___override___closed__0_once, _init_l_Lean_Level_zero___override___closed__0);
return v___x_448_;
}
}
static uint64_t _init_l_Lean_Level_data___override___closed__0(void){
_start:
{
uint8_t v___x_449_; lean_object* v___x_450_; uint64_t v___x_451_; uint64_t v___x_452_; 
v___x_449_ = 0;
v___x_450_ = lean_unsigned_to_nat(0u);
v___x_451_ = 2221ULL;
v___x_452_ = lean_level_mk_data(v___x_451_, v___x_450_, v___x_449_, v___x_449_);
return v___x_452_;
}
}
LEAN_EXPORT uint64_t l_Lean_Level_data___override(lean_object* v_x_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_unsafeCast___redArg(v_x_453_);
switch(lean_obj_tag(v___x_454_))
{
case 0:
{
uint64_t v___x_455_; 
v___x_455_ = lean_uint64_once(&l_Lean_Level_data___override___closed__0, &l_Lean_Level_data___override___closed__0_once, _init_l_Lean_Level_data___override___closed__0);
return v___x_455_;
}
case 2:
{
uint64_t v_data_456_; 
v_data_456_ = lean_ctor_get_uint64(v___x_454_, sizeof(void*)*2);
lean_dec_ref_known(v___x_454_, 2);
return v_data_456_;
}
case 3:
{
uint64_t v_data_457_; 
v_data_457_ = lean_ctor_get_uint64(v___x_454_, sizeof(void*)*2);
lean_dec_ref_known(v___x_454_, 2);
return v_data_457_;
}
default: 
{
uint64_t v_data_458_; 
v_data_458_ = lean_ctor_get_uint64(v___x_454_, sizeof(void*)*1);
lean_dec(v___x_454_);
return v_data_458_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_data___override___boxed(lean_object* v_x_459_){
_start:
{
uint64_t v_res_460_; lean_object* v_r_461_; 
v_res_460_ = l_Lean_Level_data___override(v_x_459_);
lean_dec(v_x_459_);
v_r_461_ = lean_box_uint64(v_res_460_);
return v_r_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_succ___override(lean_object* v_a_462_){
_start:
{
uint64_t v___x_463_; uint64_t v___x_464_; uint64_t v___x_465_; uint64_t v___x_466_; uint32_t v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; uint8_t v___x_472_; uint64_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_463_ = 2243ULL;
v___x_464_ = l_Lean_Level_data___override(v_a_462_);
v___x_465_ = l_Lean_Level_Data_hash(v___x_464_);
v___x_466_ = lean_uint64_mix_hash(v___x_463_, v___x_465_);
v___x_467_ = l_Lean_Level_Data_depth(v___x_464_);
v___x_468_ = lean_uint32_to_nat(v___x_467_);
v___x_469_ = lean_unsigned_to_nat(1u);
v___x_470_ = lean_nat_add(v___x_468_, v___x_469_);
lean_dec(v___x_468_);
v___x_471_ = l_Lean_Level_Data_hasMVar(v___x_464_);
v___x_472_ = l_Lean_Level_Data_hasParam(v___x_464_);
v___x_473_ = lean_level_mk_data(v___x_466_, v___x_470_, v___x_471_, v___x_472_);
v___x_474_ = lean_alloc_ctor(1, 1, 8);
lean_ctor_set(v___x_474_, 0, v_a_462_);
lean_ctor_set_uint64(v___x_474_, sizeof(void*)*1, v___x_473_);
v___x_475_ = l_unsafeCast___redArg(v___x_474_);
lean_dec_ref_known(v___x_474_, 1);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_max___override(lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
uint64_t v___x_478_; uint64_t v___x_479_; uint64_t v___x_480_; uint64_t v___x_481_; uint64_t v___x_482_; uint64_t v___x_483_; uint64_t v___x_484_; uint8_t v___y_486_; lean_object* v___y_487_; uint8_t v___y_488_; lean_object* v___y_493_; uint8_t v___y_494_; lean_object* v___y_498_; uint32_t v___x_503_; lean_object* v___x_504_; uint32_t v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_478_ = 2251ULL;
v___x_479_ = l_Lean_Level_data___override(v_a_476_);
v___x_480_ = l_Lean_Level_Data_hash(v___x_479_);
v___x_481_ = l_Lean_Level_data___override(v_a_477_);
v___x_482_ = l_Lean_Level_Data_hash(v___x_481_);
v___x_483_ = lean_uint64_mix_hash(v___x_480_, v___x_482_);
v___x_484_ = lean_uint64_mix_hash(v___x_478_, v___x_483_);
v___x_503_ = l_Lean_Level_Data_depth(v___x_479_);
v___x_504_ = lean_uint32_to_nat(v___x_503_);
v___x_505_ = l_Lean_Level_Data_depth(v___x_481_);
v___x_506_ = lean_uint32_to_nat(v___x_505_);
v___x_507_ = lean_nat_dec_le(v___x_504_, v___x_506_);
if (v___x_507_ == 0)
{
lean_dec(v___x_506_);
v___y_498_ = v___x_504_;
goto v___jp_497_;
}
else
{
lean_dec(v___x_504_);
v___y_498_ = v___x_506_;
goto v___jp_497_;
}
v___jp_485_:
{
uint64_t v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_level_mk_data(v___x_484_, v___y_487_, v___y_486_, v___y_488_);
v___x_490_ = lean_alloc_ctor(2, 2, 8);
lean_ctor_set(v___x_490_, 0, v_a_476_);
lean_ctor_set(v___x_490_, 1, v_a_477_);
lean_ctor_set_uint64(v___x_490_, sizeof(void*)*2, v___x_489_);
v___x_491_ = l_unsafeCast___redArg(v___x_490_);
lean_dec_ref_known(v___x_490_, 2);
return v___x_491_;
}
v___jp_492_:
{
uint8_t v___x_495_; 
v___x_495_ = l_Lean_Level_Data_hasParam(v___x_479_);
if (v___x_495_ == 0)
{
uint8_t v___x_496_; 
v___x_496_ = l_Lean_Level_Data_hasParam(v___x_481_);
v___y_486_ = v___y_494_;
v___y_487_ = v___y_493_;
v___y_488_ = v___x_496_;
goto v___jp_485_;
}
else
{
v___y_486_ = v___y_494_;
v___y_487_ = v___y_493_;
v___y_488_ = v___x_495_;
goto v___jp_485_;
}
}
v___jp_497_:
{
lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_499_ = lean_unsigned_to_nat(1u);
v___x_500_ = lean_nat_add(v___y_498_, v___x_499_);
lean_dec(v___y_498_);
v___x_501_ = l_Lean_Level_Data_hasMVar(v___x_479_);
if (v___x_501_ == 0)
{
uint8_t v___x_502_; 
v___x_502_ = l_Lean_Level_Data_hasMVar(v___x_481_);
v___y_493_ = v___x_500_;
v___y_494_ = v___x_502_;
goto v___jp_492_;
}
else
{
v___y_493_ = v___x_500_;
v___y_494_ = v___x_501_;
goto v___jp_492_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_imax___override(lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
uint64_t v___x_510_; uint64_t v___x_511_; uint64_t v___x_512_; uint64_t v___x_513_; uint64_t v___x_514_; uint64_t v___x_515_; uint64_t v___x_516_; uint8_t v___y_518_; lean_object* v___y_519_; uint8_t v___y_520_; lean_object* v___y_525_; uint8_t v___y_526_; lean_object* v___y_530_; uint32_t v___x_535_; lean_object* v___x_536_; uint32_t v___x_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v___x_510_ = 2267ULL;
v___x_511_ = l_Lean_Level_data___override(v_a_508_);
v___x_512_ = l_Lean_Level_Data_hash(v___x_511_);
v___x_513_ = l_Lean_Level_data___override(v_a_509_);
v___x_514_ = l_Lean_Level_Data_hash(v___x_513_);
v___x_515_ = lean_uint64_mix_hash(v___x_512_, v___x_514_);
v___x_516_ = lean_uint64_mix_hash(v___x_510_, v___x_515_);
v___x_535_ = l_Lean_Level_Data_depth(v___x_511_);
v___x_536_ = lean_uint32_to_nat(v___x_535_);
v___x_537_ = l_Lean_Level_Data_depth(v___x_513_);
v___x_538_ = lean_uint32_to_nat(v___x_537_);
v___x_539_ = lean_nat_dec_le(v___x_536_, v___x_538_);
if (v___x_539_ == 0)
{
lean_dec(v___x_538_);
v___y_530_ = v___x_536_;
goto v___jp_529_;
}
else
{
lean_dec(v___x_536_);
v___y_530_ = v___x_538_;
goto v___jp_529_;
}
v___jp_517_:
{
uint64_t v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_521_ = lean_level_mk_data(v___x_516_, v___y_519_, v___y_518_, v___y_520_);
v___x_522_ = lean_alloc_ctor(3, 2, 8);
lean_ctor_set(v___x_522_, 0, v_a_508_);
lean_ctor_set(v___x_522_, 1, v_a_509_);
lean_ctor_set_uint64(v___x_522_, sizeof(void*)*2, v___x_521_);
v___x_523_ = l_unsafeCast___redArg(v___x_522_);
lean_dec_ref_known(v___x_522_, 2);
return v___x_523_;
}
v___jp_524_:
{
uint8_t v___x_527_; 
v___x_527_ = l_Lean_Level_Data_hasParam(v___x_511_);
if (v___x_527_ == 0)
{
uint8_t v___x_528_; 
v___x_528_ = l_Lean_Level_Data_hasParam(v___x_513_);
v___y_518_ = v___y_526_;
v___y_519_ = v___y_525_;
v___y_520_ = v___x_528_;
goto v___jp_517_;
}
else
{
v___y_518_ = v___y_526_;
v___y_519_ = v___y_525_;
v___y_520_ = v___x_527_;
goto v___jp_517_;
}
}
v___jp_529_:
{
lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = lean_nat_add(v___y_530_, v___x_531_);
lean_dec(v___y_530_);
v___x_533_ = l_Lean_Level_Data_hasMVar(v___x_511_);
if (v___x_533_ == 0)
{
uint8_t v___x_534_; 
v___x_534_ = l_Lean_Level_Data_hasMVar(v___x_513_);
v___y_525_ = v___x_532_;
v___y_526_ = v___x_534_;
goto v___jp_524_;
}
else
{
v___y_525_ = v___x_532_;
v___y_526_ = v___x_533_;
goto v___jp_524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_param___override(lean_object* v_a_540_){
_start:
{
uint64_t v___x_541_; uint64_t v___y_543_; lean_object* v___x_551_; 
v___x_541_ = 2239ULL;
v___x_551_ = l_unsafeCast___redArg(v_a_540_);
if (lean_obj_tag(v___x_551_) == 0)
{
uint64_t v___x_552_; 
v___x_552_ = 1723ULL;
v___y_543_ = v___x_552_;
goto v___jp_542_;
}
else
{
uint64_t v_hash_553_; 
v_hash_553_ = lean_ctor_get_uint64(v___x_551_, sizeof(void*)*2);
lean_dec(v___x_551_);
v___y_543_ = v_hash_553_;
goto v___jp_542_;
}
v___jp_542_:
{
uint64_t v___x_544_; lean_object* v___x_545_; uint8_t v___x_546_; uint8_t v___x_547_; uint64_t v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_544_ = lean_uint64_mix_hash(v___x_541_, v___y_543_);
v___x_545_ = lean_unsigned_to_nat(0u);
v___x_546_ = 0;
v___x_547_ = 1;
v___x_548_ = lean_level_mk_data(v___x_544_, v___x_545_, v___x_546_, v___x_547_);
v___x_549_ = lean_alloc_ctor(4, 1, 8);
lean_ctor_set(v___x_549_, 0, v_a_540_);
lean_ctor_set_uint64(v___x_549_, sizeof(void*)*1, v___x_548_);
v___x_550_ = l_unsafeCast___redArg(v___x_549_);
lean_dec_ref_known(v___x_549_, 1);
return v___x_550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvar___override(lean_object* v_a_554_){
_start:
{
uint64_t v___x_555_; uint64_t v___x_556_; uint64_t v___x_557_; lean_object* v___x_558_; uint8_t v___x_559_; uint8_t v___x_560_; uint64_t v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_555_ = 2237ULL;
v___x_556_ = l_Lean_instHashableLevelMVarId_hash(v_a_554_);
v___x_557_ = lean_uint64_mix_hash(v___x_555_, v___x_556_);
v___x_558_ = lean_unsigned_to_nat(0u);
v___x_559_ = 1;
v___x_560_ = 0;
v___x_561_ = lean_level_mk_data(v___x_557_, v___x_558_, v___x_559_, v___x_560_);
v___x_562_ = lean_alloc_ctor(5, 1, 8);
lean_ctor_set(v___x_562_, 0, v_a_554_);
lean_ctor_set_uint64(v___x_562_, sizeof(void*)*1, v___x_561_);
v___x_563_ = l_unsafeCast___redArg(v___x_562_);
lean_dec_ref_known(v___x_562_, 1);
return v___x_563_;
}
}
static lean_object* _init_l_Lean_instInhabitedLevel_default(void){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = lean_obj_once(&l_Lean_Level_zero___override___closed__0, &l_Lean_Level_zero___override___closed__0_once, _init_l_Lean_Level_zero___override___closed__0);
return v___x_564_;
}
}
static lean_object* _init_l_Lean_instInhabitedLevel(void){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = lean_obj_once(&l_Lean_Level_zero___override___closed__0, &l_Lean_Level_zero___override___closed__0_once, _init_l_Lean_Level_zero___override___closed__0);
return v___x_565_;
}
}
static lean_object* _init_l_Lean_instReprLevel_repr___closed__2(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = lean_unsigned_to_nat(2u);
v___x_570_ = lean_nat_to_int(v___x_569_);
return v___x_570_;
}
}
static lean_object* _init_l_Lean_instReprLevel_repr___closed__3(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_unsigned_to_nat(1u);
v___x_572_ = lean_nat_to_int(v___x_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevel_repr(lean_object* v_x_603_, lean_object* v_prec_604_){
_start:
{
lean_object* v___y_606_; 
switch(lean_obj_tag(v_x_603_))
{
case 0:
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = lean_unsigned_to_nat(1024u);
v___x_613_ = lean_nat_dec_le(v___x_612_, v_prec_604_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; 
v___x_614_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_606_ = v___x_614_;
goto v___jp_605_;
}
else
{
lean_object* v___x_615_; 
v___x_615_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_606_ = v___x_615_;
goto v___jp_605_;
}
}
case 1:
{
lean_object* v_a_616_; lean_object* v___x_617_; lean_object* v___y_619_; uint8_t v___x_627_; 
v_a_616_ = lean_ctor_get(v_x_603_, 0);
lean_inc(v_a_616_);
lean_dec_ref_known(v_x_603_, 1);
v___x_617_ = lean_unsigned_to_nat(1024u);
v___x_627_ = lean_nat_dec_le(v___x_617_, v_prec_604_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; 
v___x_628_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_619_ = v___x_628_;
goto v___jp_618_;
}
else
{
lean_object* v___x_629_; 
v___x_629_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_619_ = v___x_629_;
goto v___jp_618_;
}
v___jp_618_:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; uint8_t v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_620_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__6));
v___x_621_ = l_Lean_instReprLevel_repr(v_a_616_, v___x_617_);
v___x_622_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
lean_inc(v___y_619_);
v___x_623_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_623_, 0, v___y_619_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = 0;
v___x_625_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_625_, 0, v___x_623_);
lean_ctor_set_uint8(v___x_625_, sizeof(void*)*1, v___x_624_);
v___x_626_ = l_Repr_addAppParen(v___x_625_, v_prec_604_);
return v___x_626_;
}
}
case 2:
{
lean_object* v_a_630_; lean_object* v_a_631_; lean_object* v___x_632_; lean_object* v___y_634_; uint8_t v___x_646_; 
v_a_630_ = lean_ctor_get(v_x_603_, 0);
lean_inc(v_a_630_);
v_a_631_ = lean_ctor_get(v_x_603_, 1);
lean_inc(v_a_631_);
lean_dec_ref_known(v_x_603_, 2);
v___x_632_ = lean_unsigned_to_nat(1024u);
v___x_646_ = lean_nat_dec_le(v___x_632_, v_prec_604_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; 
v___x_647_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_634_ = v___x_647_;
goto v___jp_633_;
}
else
{
lean_object* v___x_648_; 
v___x_648_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_634_ = v___x_648_;
goto v___jp_633_;
}
v___jp_633_:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; uint8_t v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_635_ = lean_box(1);
v___x_636_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__9));
v___x_637_ = l_Lean_instReprLevel_repr(v_a_630_, v___x_632_);
v___x_638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
lean_ctor_set(v___x_639_, 1, v___x_635_);
v___x_640_ = l_Lean_instReprLevel_repr(v_a_631_, v___x_632_);
v___x_641_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
lean_inc(v___y_634_);
v___x_642_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_642_, 0, v___y_634_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = 0;
v___x_644_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set_uint8(v___x_644_, sizeof(void*)*1, v___x_643_);
v___x_645_ = l_Repr_addAppParen(v___x_644_, v_prec_604_);
return v___x_645_;
}
}
case 3:
{
lean_object* v_a_649_; lean_object* v_a_650_; lean_object* v___x_651_; lean_object* v___y_653_; uint8_t v___x_665_; 
v_a_649_ = lean_ctor_get(v_x_603_, 0);
lean_inc(v_a_649_);
v_a_650_ = lean_ctor_get(v_x_603_, 1);
lean_inc(v_a_650_);
lean_dec_ref_known(v_x_603_, 2);
v___x_651_ = lean_unsigned_to_nat(1024u);
v___x_665_ = lean_nat_dec_le(v___x_651_, v_prec_604_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; 
v___x_666_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_653_ = v___x_666_;
goto v___jp_652_;
}
else
{
lean_object* v___x_667_; 
v___x_667_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_653_ = v___x_667_;
goto v___jp_652_;
}
v___jp_652_:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; uint8_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_654_ = lean_box(1);
v___x_655_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__12));
v___x_656_ = l_Lean_instReprLevel_repr(v_a_649_, v___x_651_);
v___x_657_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_655_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___x_654_);
v___x_659_ = l_Lean_instReprLevel_repr(v_a_650_, v___x_651_);
v___x_660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_658_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
lean_inc(v___y_653_);
v___x_661_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_661_, 0, v___y_653_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
v___x_662_ = 0;
v___x_663_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set_uint8(v___x_663_, sizeof(void*)*1, v___x_662_);
v___x_664_ = l_Repr_addAppParen(v___x_663_, v_prec_604_);
return v___x_664_;
}
}
case 4:
{
lean_object* v_a_668_; lean_object* v___y_670_; lean_object* v___x_679_; uint8_t v___x_680_; 
v_a_668_ = lean_ctor_get(v_x_603_, 0);
lean_inc(v_a_668_);
lean_dec_ref_known(v_x_603_, 1);
v___x_679_ = lean_unsigned_to_nat(1024u);
v___x_680_ = lean_nat_dec_le(v___x_679_, v_prec_604_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; 
v___x_681_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_670_ = v___x_681_;
goto v___jp_669_;
}
else
{
lean_object* v___x_682_; 
v___x_682_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_670_ = v___x_682_;
goto v___jp_669_;
}
v___jp_669_:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; uint8_t v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_671_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__15));
v___x_672_ = lean_unsigned_to_nat(1024u);
v___x_673_ = l_Lean_Name_reprPrec(v_a_668_, v___x_672_);
v___x_674_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_671_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
lean_inc(v___y_670_);
v___x_675_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_675_, 0, v___y_670_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v___x_676_ = 0;
v___x_677_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_677_, 0, v___x_675_);
lean_ctor_set_uint8(v___x_677_, sizeof(void*)*1, v___x_676_);
v___x_678_ = l_Repr_addAppParen(v___x_677_, v_prec_604_);
return v___x_678_;
}
}
default: 
{
lean_object* v_a_683_; lean_object* v___y_685_; lean_object* v___x_694_; uint8_t v___x_695_; 
v_a_683_ = lean_ctor_get(v_x_603_, 0);
lean_inc(v_a_683_);
lean_dec_ref_known(v_x_603_, 1);
v___x_694_ = lean_unsigned_to_nat(1024u);
v___x_695_ = lean_nat_dec_le(v___x_694_, v_prec_604_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; 
v___x_696_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_685_ = v___x_696_;
goto v___jp_684_;
}
else
{
lean_object* v___x_697_; 
v___x_697_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_685_ = v___x_697_;
goto v___jp_684_;
}
v___jp_684_:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_686_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__18));
v___x_687_ = lean_unsigned_to_nat(1024u);
v___x_688_ = l_Lean_Name_reprPrec(v_a_683_, v___x_687_);
v___x_689_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_686_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
lean_inc(v___y_685_);
v___x_690_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_690_, 0, v___y_685_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = 0;
v___x_692_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_692_, 0, v___x_690_);
lean_ctor_set_uint8(v___x_692_, sizeof(void*)*1, v___x_691_);
v___x_693_ = l_Repr_addAppParen(v___x_692_, v_prec_604_);
return v___x_693_;
}
}
}
v___jp_605_:
{
lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_607_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__1));
lean_inc(v___y_606_);
v___x_608_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_608_, 0, v___y_606_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = 0;
v___x_610_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_610_, 0, v___x_608_);
lean_ctor_set_uint8(v___x_610_, sizeof(void*)*1, v___x_609_);
v___x_611_ = l_Repr_addAppParen(v___x_610_, v_prec_604_);
return v___x_611_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevel_repr___boxed(lean_object* v_x_698_, lean_object* v_prec_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lean_instReprLevel_repr(v_x_698_, v_prec_699_);
lean_dec(v_prec_699_);
return v_res_700_;
}
}
LEAN_EXPORT uint64_t l_Lean_Level_hash(lean_object* v_u_703_){
_start:
{
uint64_t v___x_704_; uint64_t v___x_705_; 
v___x_704_ = l_Lean_Level_data___override(v_u_703_);
v___x_705_ = l_Lean_Level_Data_hash(v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hash___boxed(lean_object* v_u_706_){
_start:
{
uint64_t v_res_707_; lean_object* v_r_708_; 
v_res_707_ = l_Lean_Level_hash(v_u_706_);
lean_dec(v_u_706_);
v_r_708_ = lean_box_uint64(v_res_707_);
return v_r_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_depth(lean_object* v_u_711_){
_start:
{
uint64_t v___x_712_; uint32_t v___x_713_; lean_object* v___x_714_; 
v___x_712_ = l_Lean_Level_data___override(v_u_711_);
v___x_713_ = l_Lean_Level_Data_depth(v___x_712_);
v___x_714_ = lean_uint32_to_nat(v___x_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_depth___boxed(lean_object* v_u_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lean_Level_depth(v_u_715_);
lean_dec(v_u_715_);
return v_res_716_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_hasMVar(lean_object* v_u_717_){
_start:
{
uint64_t v___x_718_; uint8_t v___x_719_; 
v___x_718_ = l_Lean_Level_data___override(v_u_717_);
v___x_719_ = l_Lean_Level_Data_hasMVar(v___x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hasMVar___boxed(lean_object* v_u_720_){
_start:
{
uint8_t v_res_721_; lean_object* v_r_722_; 
v_res_721_ = l_Lean_Level_hasMVar(v_u_720_);
lean_dec(v_u_720_);
v_r_722_ = lean_box(v_res_721_);
return v_r_722_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_hasParam(lean_object* v_u_723_){
_start:
{
uint64_t v___x_724_; uint8_t v___x_725_; 
v___x_724_ = l_Lean_Level_data___override(v_u_723_);
v___x_725_ = l_Lean_Level_Data_hasParam(v___x_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hasParam___boxed(lean_object* v_u_726_){
_start:
{
uint8_t v_res_727_; lean_object* v_r_728_; 
v_res_727_ = l_Lean_Level_hasParam(v_u_726_);
lean_dec(v_u_726_);
v_r_728_ = lean_box(v_res_727_);
return v_r_728_;
}
}
LEAN_EXPORT uint32_t lean_level_hash(lean_object* v_u_729_){
_start:
{
uint64_t v___x_730_; uint32_t v___x_731_; 
v___x_730_ = l_Lean_Level_hash(v_u_729_);
lean_dec(v_u_729_);
v___x_731_ = lean_uint64_to_uint32(v___x_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hashEx___boxed(lean_object* v_u_732_){
_start:
{
uint32_t v_res_733_; lean_object* v_r_734_; 
v_res_733_ = lean_level_hash(v_u_732_);
v_r_734_ = lean_box_uint32(v_res_733_);
return v_r_734_;
}
}
LEAN_EXPORT uint8_t lean_level_has_mvar(lean_object* v_u_735_){
_start:
{
uint8_t v___x_736_; 
v___x_736_ = l_Lean_Level_hasMVar(v_u_735_);
lean_dec(v_u_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hasMVarEx___boxed(lean_object* v_u_737_){
_start:
{
uint8_t v_res_738_; lean_object* v_r_739_; 
v_res_738_ = lean_level_has_mvar(v_u_737_);
v_r_739_ = lean_box(v_res_738_);
return v_r_739_;
}
}
LEAN_EXPORT uint8_t lean_level_has_param(lean_object* v_u_740_){
_start:
{
uint8_t v___x_741_; 
v___x_741_ = l_Lean_Level_hasParam(v_u_740_);
lean_dec(v_u_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hasParamEx___boxed(lean_object* v_u_742_){
_start:
{
uint8_t v_res_743_; lean_object* v_r_744_; 
v_res_743_ = lean_level_has_param(v_u_742_);
v_r_744_ = lean_box(v_res_743_);
return v_r_744_;
}
}
LEAN_EXPORT uint32_t lean_level_depth(lean_object* v_u_745_){
_start:
{
uint64_t v___x_746_; uint32_t v___x_747_; 
v___x_746_ = l_Lean_Level_data___override(v_u_745_);
lean_dec(v_u_745_);
v___x_747_ = l_Lean_Level_Data_depth(v___x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_depthEx___boxed(lean_object* v_u_748_){
_start:
{
uint32_t v_res_749_; lean_object* v_r_750_; 
v_res_749_ = lean_level_depth(v_u_748_);
v_r_750_ = lean_box_uint32(v_res_749_);
return v_r_750_;
}
}
static lean_object* _init_l_Lean_levelZero(void){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = lean_obj_once(&l_Lean_Level_zero___override___closed__0, &l_Lean_Level_zero___override___closed__0_once, _init_l_Lean_Level_zero___override___closed__0);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelMVar(lean_object* v_mvarId_752_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_Lean_Level_mvar___override(v_mvarId_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelParam(lean_object* v_name_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Lean_Level_param___override(v_name_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelSucc(lean_object* v_u_756_){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = l_Lean_Level_succ___override(v_u_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelMax(lean_object* v_u_758_, lean_object* v_v_759_){
_start:
{
lean_object* v___x_760_; 
v___x_760_ = l_Lean_Level_max___override(v_u_758_, v_v_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelIMax(lean_object* v_u_761_, lean_object* v_v_762_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l_Lean_Level_imax___override(v_u_761_, v_v_762_);
return v___x_763_;
}
}
static lean_object* _init_l_Lean_Level_one___closed__0(void){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = lean_obj_once(&l_Lean_Level_zero___override___closed__0, &l_Lean_Level_zero___override___closed__0_once, _init_l_Lean_Level_zero___override___closed__0);
v___x_765_ = l_Lean_Level_succ___override(v___x_764_);
return v___x_765_;
}
}
static lean_object* _init_l_Lean_Level_one(void){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = lean_obj_once(&l_Lean_Level_one___closed__0, &l_Lean_Level_one___closed__0_once, _init_l_Lean_Level_one___closed__0);
return v___x_766_;
}
}
static lean_object* _init_l_Lean_levelOne(void){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = lean_obj_once(&l_Lean_Level_one___closed__0, &l_Lean_Level_one___closed__0_once, _init_l_Lean_Level_one___closed__0);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelZeroEx___redArg(){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = lean_obj_once(&l_Lean_Level_zero___override___closed__0, &l_Lean_Level_zero___override___closed__0_once, _init_l_Lean_Level_zero___override___closed__0);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelZeroEx___redArg___boxed(lean_object* v___dummy_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lean_mkLevelZeroEx___redArg();
return v_res_771_;
}
}
static lean_object* _init_l_Lean_mkLevelZeroEx___closed__0(void){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_mkLevelZeroEx___redArg();
return v___x_772_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_zero(lean_object* v_x_773_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = lean_obj_once(&l_Lean_mkLevelZeroEx___closed__0, &l_Lean_mkLevelZeroEx___closed__0_once, _init_l_Lean_mkLevelZeroEx___closed__0);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_succ(lean_object* v_u_775_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l_Lean_Level_succ___override(v_u_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_mvar(lean_object* v_mvarId_777_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = l_Lean_Level_mvar___override(v_mvarId_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_param(lean_object* v_name_779_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lean_Level_param___override(v_name_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_max(lean_object* v_u_781_, lean_object* v_v_782_){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l_Lean_Level_max___override(v_u_781_, v_v_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_imax(lean_object* v_u_784_, lean_object* v_v_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l_Lean_Level_imax___override(v_u_784_, v_v_785_);
return v___x_786_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isZero(lean_object* v_x_787_){
_start:
{
if (lean_obj_tag(v_x_787_) == 0)
{
uint8_t v___x_788_; 
v___x_788_ = 1;
return v___x_788_;
}
else
{
uint8_t v___x_789_; 
v___x_789_ = 0;
return v___x_789_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isZero___boxed(lean_object* v_x_790_){
_start:
{
uint8_t v_res_791_; lean_object* v_r_792_; 
v_res_791_ = l_Lean_Level_isZero(v_x_790_);
lean_dec(v_x_790_);
v_r_792_ = lean_box(v_res_791_);
return v_r_792_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isSucc(lean_object* v_x_793_){
_start:
{
if (lean_obj_tag(v_x_793_) == 1)
{
uint8_t v___x_794_; 
v___x_794_ = 1;
return v___x_794_;
}
else
{
uint8_t v___x_795_; 
v___x_795_ = 0;
return v___x_795_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isSucc___boxed(lean_object* v_x_796_){
_start:
{
uint8_t v_res_797_; lean_object* v_r_798_; 
v_res_797_ = l_Lean_Level_isSucc(v_x_796_);
lean_dec(v_x_796_);
v_r_798_ = lean_box(v_res_797_);
return v_r_798_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isMax(lean_object* v_x_799_){
_start:
{
if (lean_obj_tag(v_x_799_) == 2)
{
uint8_t v___x_800_; 
v___x_800_ = 1;
return v___x_800_;
}
else
{
uint8_t v___x_801_; 
v___x_801_ = 0;
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isMax___boxed(lean_object* v_x_802_){
_start:
{
uint8_t v_res_803_; lean_object* v_r_804_; 
v_res_803_ = l_Lean_Level_isMax(v_x_802_);
lean_dec(v_x_802_);
v_r_804_ = lean_box(v_res_803_);
return v_r_804_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isIMax(lean_object* v_x_805_){
_start:
{
if (lean_obj_tag(v_x_805_) == 3)
{
uint8_t v___x_806_; 
v___x_806_ = 1;
return v___x_806_;
}
else
{
uint8_t v___x_807_; 
v___x_807_ = 0;
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isIMax___boxed(lean_object* v_x_808_){
_start:
{
uint8_t v_res_809_; lean_object* v_r_810_; 
v_res_809_ = l_Lean_Level_isIMax(v_x_808_);
lean_dec(v_x_808_);
v_r_810_ = lean_box(v_res_809_);
return v_r_810_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isMaxIMax(lean_object* v_x_811_){
_start:
{
switch(lean_obj_tag(v_x_811_))
{
case 2:
{
uint8_t v___x_812_; 
v___x_812_ = 1;
return v___x_812_;
}
case 3:
{
uint8_t v___x_813_; 
v___x_813_ = 1;
return v___x_813_;
}
default: 
{
uint8_t v___x_814_; 
v___x_814_ = 0;
return v___x_814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isMaxIMax___boxed(lean_object* v_x_815_){
_start:
{
uint8_t v_res_816_; lean_object* v_r_817_; 
v_res_816_ = l_Lean_Level_isMaxIMax(v_x_815_);
lean_dec(v_x_815_);
v_r_817_ = lean_box(v_res_816_);
return v_r_817_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isParam(lean_object* v_x_818_){
_start:
{
if (lean_obj_tag(v_x_818_) == 4)
{
uint8_t v___x_819_; 
v___x_819_ = 1;
return v___x_819_;
}
else
{
uint8_t v___x_820_; 
v___x_820_ = 0;
return v___x_820_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isParam___boxed(lean_object* v_x_821_){
_start:
{
uint8_t v_res_822_; lean_object* v_r_823_; 
v_res_822_ = l_Lean_Level_isParam(v_x_821_);
lean_dec(v_x_821_);
v_r_823_ = lean_box(v_res_822_);
return v_r_823_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isMVar(lean_object* v_x_824_){
_start:
{
if (lean_obj_tag(v_x_824_) == 5)
{
uint8_t v___x_825_; 
v___x_825_ = 1;
return v___x_825_;
}
else
{
uint8_t v___x_826_; 
v___x_826_ = 0;
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isMVar___boxed(lean_object* v_x_827_){
_start:
{
uint8_t v_res_828_; lean_object* v_r_829_; 
v_res_828_ = l_Lean_Level_isMVar(v_x_827_);
lean_dec(v_x_827_);
v_r_829_ = lean_box(v_res_828_);
return v_r_829_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Level_mvarId_x21_spec__0(lean_object* v_msg_830_){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = l_Lean_instInhabitedLevelMVarId_default;
v___x_832_ = lean_panic_fn_borrowed(v___x_831_, v_msg_830_);
return v___x_832_;
}
}
static lean_object* _init_l_Lean_Level_mvarId_x21___closed__3(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_836_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__2));
v___x_837_ = lean_unsigned_to_nat(19u);
v___x_838_ = lean_unsigned_to_nat(196u);
v___x_839_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__1));
v___x_840_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_841_ = l_mkPanicMessageWithDecl(v___x_840_, v___x_839_, v___x_838_, v___x_837_, v___x_836_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvarId_x21(lean_object* v_x_842_){
_start:
{
if (lean_obj_tag(v_x_842_) == 5)
{
lean_object* v_a_843_; 
v_a_843_ = lean_ctor_get(v_x_842_, 0);
lean_inc(v_a_843_);
return v_a_843_;
}
else
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = lean_obj_once(&l_Lean_Level_mvarId_x21___closed__3, &l_Lean_Level_mvarId_x21___closed__3_once, _init_l_Lean_Level_mvarId_x21___closed__3);
v___x_845_ = l_panic___at___00Lean_Level_mvarId_x21_spec__0(v___x_844_);
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvarId_x21___boxed(lean_object* v_x_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lean_Level_mvarId_x21(v_x_846_);
lean_dec(v_x_846_);
return v_res_847_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isNeverZero(lean_object* v_x_848_){
_start:
{
switch(lean_obj_tag(v_x_848_))
{
case 0:
{
uint8_t v___x_849_; 
v___x_849_ = 0;
return v___x_849_;
}
case 1:
{
uint8_t v___x_850_; 
v___x_850_ = 1;
return v___x_850_;
}
case 2:
{
lean_object* v_a_851_; lean_object* v_a_852_; uint8_t v___x_853_; 
v_a_851_ = lean_ctor_get(v_x_848_, 0);
v_a_852_ = lean_ctor_get(v_x_848_, 1);
v___x_853_ = l_Lean_Level_isNeverZero(v_a_851_);
if (v___x_853_ == 0)
{
v_x_848_ = v_a_852_;
goto _start;
}
else
{
return v___x_853_;
}
}
case 3:
{
lean_object* v_a_855_; 
v_a_855_ = lean_ctor_get(v_x_848_, 1);
v_x_848_ = v_a_855_;
goto _start;
}
default: 
{
uint8_t v___x_857_; 
v___x_857_ = 0;
return v___x_857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isNeverZero___boxed(lean_object* v_x_858_){
_start:
{
uint8_t v_res_859_; lean_object* v_r_860_; 
v_res_859_ = l_Lean_Level_isNeverZero(v_x_858_);
lean_dec(v_x_858_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isAlwaysZero(lean_object* v_x_861_){
_start:
{
switch(lean_obj_tag(v_x_861_))
{
case 0:
{
uint8_t v___x_862_; 
v___x_862_ = 1;
return v___x_862_;
}
case 2:
{
lean_object* v_a_863_; lean_object* v_a_864_; uint8_t v___x_865_; 
v_a_863_ = lean_ctor_get(v_x_861_, 0);
v_a_864_ = lean_ctor_get(v_x_861_, 1);
v___x_865_ = l_Lean_Level_isAlwaysZero(v_a_863_);
if (v___x_865_ == 0)
{
return v___x_865_;
}
else
{
v_x_861_ = v_a_864_;
goto _start;
}
}
case 3:
{
lean_object* v_a_867_; 
v_a_867_ = lean_ctor_get(v_x_861_, 1);
v_x_861_ = v_a_867_;
goto _start;
}
default: 
{
uint8_t v___x_869_; 
v___x_869_ = 0;
return v___x_869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isAlwaysZero___boxed(lean_object* v_x_870_){
_start:
{
uint8_t v_res_871_; lean_object* v_r_872_; 
v_res_871_ = l_Lean_Level_isAlwaysZero(v_x_870_);
lean_dec(v_x_870_);
v_r_872_ = lean_box(v_res_871_);
return v_r_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ofNat(lean_object* v_x_873_){
_start:
{
lean_object* v_zero_874_; uint8_t v_isZero_875_; 
v_zero_874_ = lean_unsigned_to_nat(0u);
v_isZero_875_ = lean_nat_dec_eq(v_x_873_, v_zero_874_);
if (v_isZero_875_ == 1)
{
lean_object* v___x_876_; 
v___x_876_ = lean_obj_once(&l_Lean_Level_zero___override___closed__0, &l_Lean_Level_zero___override___closed__0_once, _init_l_Lean_Level_zero___override___closed__0);
return v___x_876_;
}
else
{
lean_object* v_one_877_; lean_object* v_n_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v_one_877_ = lean_unsigned_to_nat(1u);
v_n_878_ = lean_nat_sub(v_x_873_, v_one_877_);
v___x_879_ = l_Lean_Level_ofNat(v_n_878_);
lean_dec(v_n_878_);
v___x_880_ = l_Lean_Level_succ___override(v___x_879_);
return v___x_880_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ofNat___boxed(lean_object* v_x_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lean_Level_ofNat(v_x_881_);
lean_dec(v_x_881_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instOfNat(lean_object* v_n_883_){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = l_Lean_Level_ofNat(v_n_883_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instOfNat___boxed(lean_object* v_n_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lean_Level_instOfNat(v_n_885_);
lean_dec(v_n_885_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_addOffsetAux(lean_object* v_x_887_, lean_object* v_x_888_){
_start:
{
lean_object* v_zero_889_; uint8_t v_isZero_890_; 
v_zero_889_ = lean_unsigned_to_nat(0u);
v_isZero_890_ = lean_nat_dec_eq(v_x_887_, v_zero_889_);
if (v_isZero_890_ == 1)
{
lean_dec(v_x_887_);
return v_x_888_;
}
else
{
lean_object* v_one_891_; lean_object* v_n_892_; lean_object* v___x_893_; 
v_one_891_ = lean_unsigned_to_nat(1u);
v_n_892_ = lean_nat_sub(v_x_887_, v_one_891_);
lean_dec(v_x_887_);
v___x_893_ = l_Lean_Level_succ___override(v_x_888_);
v_x_887_ = v_n_892_;
v_x_888_ = v___x_893_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_addOffset(lean_object* v_u_895_, lean_object* v_n_896_){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = l_Lean_Level_addOffsetAux(v_n_896_, v_u_895_);
return v___x_897_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isExplicit(lean_object* v_x_898_){
_start:
{
switch(lean_obj_tag(v_x_898_))
{
case 0:
{
uint8_t v___x_899_; 
v___x_899_ = 1;
return v___x_899_;
}
case 1:
{
lean_object* v_a_900_; uint8_t v___x_901_; 
v_a_900_ = lean_ctor_get(v_x_898_, 0);
v___x_901_ = l_Lean_Level_hasMVar(v_a_900_);
if (v___x_901_ == 0)
{
uint8_t v___x_902_; 
v___x_902_ = l_Lean_Level_hasParam(v_a_900_);
if (v___x_902_ == 0)
{
v_x_898_ = v_a_900_;
goto _start;
}
else
{
return v___x_901_;
}
}
else
{
uint8_t v___x_904_; 
v___x_904_ = 0;
return v___x_904_;
}
}
default: 
{
uint8_t v___x_905_; 
v___x_905_ = 0;
return v___x_905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isExplicit___boxed(lean_object* v_x_906_){
_start:
{
uint8_t v_res_907_; lean_object* v_r_908_; 
v_res_907_ = l_Lean_Level_isExplicit(v_x_906_);
lean_dec(v_x_906_);
v_r_908_ = lean_box(v_res_907_);
return v_r_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getOffsetAux(lean_object* v_x_909_, lean_object* v_x_910_){
_start:
{
if (lean_obj_tag(v_x_909_) == 1)
{
lean_object* v_a_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_a_911_ = lean_ctor_get(v_x_909_, 0);
v___x_912_ = lean_unsigned_to_nat(1u);
v___x_913_ = lean_nat_add(v_x_910_, v___x_912_);
lean_dec(v_x_910_);
v_x_909_ = v_a_911_;
v_x_910_ = v___x_913_;
goto _start;
}
else
{
return v_x_910_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getOffsetAux___boxed(lean_object* v_x_915_, lean_object* v_x_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lean_Level_getOffsetAux(v_x_915_, v_x_916_);
lean_dec(v_x_915_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getOffset(lean_object* v_lvl_918_){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_919_ = lean_unsigned_to_nat(0u);
v___x_920_ = l_Lean_Level_getOffsetAux(v_lvl_918_, v___x_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getOffset___boxed(lean_object* v_lvl_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_Level_getOffset(v_lvl_921_);
lean_dec(v_lvl_921_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getLevelOffset(lean_object* v_x_923_){
_start:
{
if (lean_obj_tag(v_x_923_) == 1)
{
lean_object* v_a_924_; 
v_a_924_ = lean_ctor_get(v_x_923_, 0);
v_x_923_ = v_a_924_;
goto _start;
}
else
{
lean_inc(v_x_923_);
return v_x_923_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getLevelOffset___boxed(lean_object* v_x_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_Level_getLevelOffset(v_x_926_);
lean_dec(v_x_926_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_toNat(lean_object* v_lvl_928_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = l_Lean_Level_getLevelOffset(v_lvl_928_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = l_Lean_Level_getOffset(v_lvl_928_);
v___x_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
return v___x_931_;
}
else
{
lean_object* v___x_932_; 
lean_dec(v___x_929_);
v___x_932_ = lean_box(0);
return v___x_932_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_toNat___boxed(lean_object* v_lvl_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lean_Level_toNat(v_lvl_933_);
lean_dec(v_lvl_933_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_beq___boxed(lean_object* v_a_937_, lean_object* v_b_938_){
_start:
{
uint8_t v_res_939_; lean_object* v_r_940_; 
v_res_939_ = lean_level_eq(v_a_937_, v_b_938_);
lean_dec(v_b_938_);
lean_dec(v_a_937_);
v_r_940_ = lean_box(v_res_939_);
return v_r_940_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_occurs(lean_object* v_x_943_, lean_object* v_x_944_){
_start:
{
switch(lean_obj_tag(v_x_944_))
{
case 1:
{
lean_object* v_a_945_; uint8_t v___x_946_; 
v_a_945_ = lean_ctor_get(v_x_944_, 0);
v___x_946_ = lean_level_eq(v_x_943_, v_x_944_);
if (v___x_946_ == 0)
{
v_x_944_ = v_a_945_;
goto _start;
}
else
{
return v___x_946_;
}
}
case 2:
{
lean_object* v_a_948_; lean_object* v_a_949_; uint8_t v___y_951_; uint8_t v___x_953_; 
v_a_948_ = lean_ctor_get(v_x_944_, 0);
v_a_949_ = lean_ctor_get(v_x_944_, 1);
v___x_953_ = lean_level_eq(v_x_943_, v_x_944_);
if (v___x_953_ == 0)
{
uint8_t v___x_954_; 
v___x_954_ = l_Lean_Level_occurs(v_x_943_, v_a_948_);
v___y_951_ = v___x_954_;
goto v___jp_950_;
}
else
{
v___y_951_ = v___x_953_;
goto v___jp_950_;
}
v___jp_950_:
{
if (v___y_951_ == 0)
{
v_x_944_ = v_a_949_;
goto _start;
}
else
{
return v___y_951_;
}
}
}
case 3:
{
lean_object* v_a_955_; lean_object* v_a_956_; uint8_t v___y_958_; uint8_t v___x_960_; 
v_a_955_ = lean_ctor_get(v_x_944_, 0);
v_a_956_ = lean_ctor_get(v_x_944_, 1);
v___x_960_ = lean_level_eq(v_x_943_, v_x_944_);
if (v___x_960_ == 0)
{
uint8_t v___x_961_; 
v___x_961_ = l_Lean_Level_occurs(v_x_943_, v_a_955_);
v___y_958_ = v___x_961_;
goto v___jp_957_;
}
else
{
v___y_958_ = v___x_960_;
goto v___jp_957_;
}
v___jp_957_:
{
if (v___y_958_ == 0)
{
v_x_944_ = v_a_956_;
goto _start;
}
else
{
return v___y_958_;
}
}
}
default: 
{
uint8_t v___x_962_; 
v___x_962_ = lean_level_eq(v_x_943_, v_x_944_);
return v___x_962_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_occurs___boxed(lean_object* v_x_963_, lean_object* v_x_964_){
_start:
{
uint8_t v_res_965_; lean_object* v_r_966_; 
v_res_965_ = l_Lean_Level_occurs(v_x_963_, v_x_964_);
lean_dec(v_x_964_);
lean_dec(v_x_963_);
v_r_966_ = lean_box(v_res_965_);
return v_r_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorToNat(lean_object* v_x_967_){
_start:
{
switch(lean_obj_tag(v_x_967_))
{
case 0:
{
lean_object* v___x_968_; 
v___x_968_ = lean_unsigned_to_nat(0u);
return v___x_968_;
}
case 1:
{
lean_object* v___x_969_; 
v___x_969_ = lean_unsigned_to_nat(3u);
return v___x_969_;
}
case 2:
{
lean_object* v___x_970_; 
v___x_970_ = lean_unsigned_to_nat(4u);
return v___x_970_;
}
case 3:
{
lean_object* v___x_971_; 
v___x_971_ = lean_unsigned_to_nat(5u);
return v___x_971_;
}
case 4:
{
lean_object* v___x_972_; 
v___x_972_ = lean_unsigned_to_nat(1u);
return v___x_972_;
}
default: 
{
lean_object* v___x_973_; 
v___x_973_ = lean_unsigned_to_nat(2u);
return v___x_973_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorToNat___boxed(lean_object* v_x_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_Level_ctorToNat(v_x_974_);
lean_dec(v_x_974_);
return v_res_975_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_normLtAux(lean_object* v_x_976_, lean_object* v_x_977_, lean_object* v_x_978_, lean_object* v_x_979_){
_start:
{
lean_object* v_l_u2081_981_; lean_object* v_k_u2081_982_; lean_object* v_l_u2082_983_; lean_object* v_k_u2082_984_; lean_object* v_l_u2081_989_; lean_object* v_k_u2081_990_; lean_object* v_l_u2082_991_; lean_object* v_k_u2082_992_; 
switch(lean_obj_tag(v_x_976_))
{
case 1:
{
lean_object* v_a_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v_a_998_ = lean_ctor_get(v_x_976_, 0);
v___x_999_ = lean_unsigned_to_nat(1u);
v___x_1000_ = lean_nat_add(v_x_977_, v___x_999_);
lean_dec(v_x_977_);
v_x_976_ = v_a_998_;
v_x_977_ = v___x_1000_;
goto _start;
}
case 2:
{
switch(lean_obj_tag(v_x_978_))
{
case 1:
{
lean_object* v_a_1002_; 
v_a_1002_ = lean_ctor_get(v_x_978_, 0);
v_l_u2081_981_ = v_x_976_;
v_k_u2081_982_ = v_x_977_;
v_l_u2082_983_ = v_a_1002_;
v_k_u2082_984_ = v_x_979_;
goto v___jp_980_;
}
case 2:
{
lean_object* v_a_1003_; lean_object* v_a_1004_; lean_object* v_a_1005_; lean_object* v_a_1006_; uint8_t v___x_1010_; 
v_a_1003_ = lean_ctor_get(v_x_976_, 0);
v_a_1004_ = lean_ctor_get(v_x_976_, 1);
v_a_1005_ = lean_ctor_get(v_x_978_, 0);
v_a_1006_ = lean_ctor_get(v_x_978_, 1);
v___x_1010_ = lean_level_eq(v_x_976_, v_x_978_);
if (v___x_1010_ == 0)
{
uint8_t v___x_1011_; 
lean_dec(v_x_979_);
lean_dec(v_x_977_);
v___x_1011_ = lean_level_eq(v_a_1003_, v_a_1005_);
if (v___x_1011_ == 0)
{
goto v___jp_1007_;
}
else
{
if (v___x_1010_ == 0)
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_unsigned_to_nat(0u);
v_x_976_ = v_a_1004_;
v_x_977_ = v___x_1012_;
v_x_978_ = v_a_1006_;
v_x_979_ = v___x_1012_;
goto _start;
}
else
{
goto v___jp_1007_;
}
}
}
else
{
uint8_t v___x_1014_; 
v___x_1014_ = lean_nat_dec_lt(v_x_977_, v_x_979_);
lean_dec(v_x_979_);
lean_dec(v_x_977_);
return v___x_1014_;
}
v___jp_1007_:
{
lean_object* v___x_1008_; 
v___x_1008_ = lean_unsigned_to_nat(0u);
v_x_976_ = v_a_1003_;
v_x_977_ = v___x_1008_;
v_x_978_ = v_a_1005_;
v_x_979_ = v___x_1008_;
goto _start;
}
}
default: 
{
v_l_u2081_989_ = v_x_976_;
v_k_u2081_990_ = v_x_977_;
v_l_u2082_991_ = v_x_978_;
v_k_u2082_992_ = v_x_979_;
goto v___jp_988_;
}
}
}
case 3:
{
switch(lean_obj_tag(v_x_978_))
{
case 1:
{
lean_object* v_a_1015_; 
v_a_1015_ = lean_ctor_get(v_x_978_, 0);
v_l_u2081_981_ = v_x_976_;
v_k_u2081_982_ = v_x_977_;
v_l_u2082_983_ = v_a_1015_;
v_k_u2082_984_ = v_x_979_;
goto v___jp_980_;
}
case 3:
{
lean_object* v_a_1016_; lean_object* v_a_1017_; lean_object* v_a_1018_; lean_object* v_a_1019_; uint8_t v___x_1023_; 
v_a_1016_ = lean_ctor_get(v_x_976_, 0);
v_a_1017_ = lean_ctor_get(v_x_976_, 1);
v_a_1018_ = lean_ctor_get(v_x_978_, 0);
v_a_1019_ = lean_ctor_get(v_x_978_, 1);
v___x_1023_ = lean_level_eq(v_x_976_, v_x_978_);
if (v___x_1023_ == 0)
{
uint8_t v___x_1024_; 
lean_dec(v_x_979_);
lean_dec(v_x_977_);
v___x_1024_ = lean_level_eq(v_a_1016_, v_a_1018_);
if (v___x_1024_ == 0)
{
goto v___jp_1020_;
}
else
{
if (v___x_1023_ == 0)
{
lean_object* v___x_1025_; 
v___x_1025_ = lean_unsigned_to_nat(0u);
v_x_976_ = v_a_1017_;
v_x_977_ = v___x_1025_;
v_x_978_ = v_a_1019_;
v_x_979_ = v___x_1025_;
goto _start;
}
else
{
goto v___jp_1020_;
}
}
}
else
{
uint8_t v___x_1027_; 
v___x_1027_ = lean_nat_dec_lt(v_x_977_, v_x_979_);
lean_dec(v_x_979_);
lean_dec(v_x_977_);
return v___x_1027_;
}
v___jp_1020_:
{
lean_object* v___x_1021_; 
v___x_1021_ = lean_unsigned_to_nat(0u);
v_x_976_ = v_a_1016_;
v_x_977_ = v___x_1021_;
v_x_978_ = v_a_1018_;
v_x_979_ = v___x_1021_;
goto _start;
}
}
default: 
{
v_l_u2081_989_ = v_x_976_;
v_k_u2081_990_ = v_x_977_;
v_l_u2082_991_ = v_x_978_;
v_k_u2082_992_ = v_x_979_;
goto v___jp_988_;
}
}
}
case 4:
{
switch(lean_obj_tag(v_x_978_))
{
case 1:
{
lean_object* v_a_1028_; 
v_a_1028_ = lean_ctor_get(v_x_978_, 0);
v_l_u2081_981_ = v_x_976_;
v_k_u2081_982_ = v_x_977_;
v_l_u2082_983_ = v_a_1028_;
v_k_u2082_984_ = v_x_979_;
goto v___jp_980_;
}
case 4:
{
lean_object* v_a_1029_; lean_object* v_a_1030_; uint8_t v___x_1031_; 
v_a_1029_ = lean_ctor_get(v_x_976_, 0);
v_a_1030_ = lean_ctor_get(v_x_978_, 0);
v___x_1031_ = lean_name_eq(v_a_1029_, v_a_1030_);
if (v___x_1031_ == 0)
{
uint8_t v___x_1032_; 
lean_dec(v_x_979_);
lean_dec(v_x_977_);
v___x_1032_ = l_Lean_Name_lt(v_a_1029_, v_a_1030_);
return v___x_1032_;
}
else
{
uint8_t v___x_1033_; 
v___x_1033_ = lean_nat_dec_lt(v_x_977_, v_x_979_);
lean_dec(v_x_979_);
lean_dec(v_x_977_);
return v___x_1033_;
}
}
default: 
{
v_l_u2081_989_ = v_x_976_;
v_k_u2081_990_ = v_x_977_;
v_l_u2082_991_ = v_x_978_;
v_k_u2082_992_ = v_x_979_;
goto v___jp_988_;
}
}
}
case 5:
{
switch(lean_obj_tag(v_x_978_))
{
case 1:
{
lean_object* v_a_1034_; 
v_a_1034_ = lean_ctor_get(v_x_978_, 0);
v_l_u2081_981_ = v_x_976_;
v_k_u2081_982_ = v_x_977_;
v_l_u2082_983_ = v_a_1034_;
v_k_u2082_984_ = v_x_979_;
goto v___jp_980_;
}
case 5:
{
lean_object* v_a_1035_; lean_object* v_a_1036_; uint8_t v___x_1037_; 
v_a_1035_ = lean_ctor_get(v_x_976_, 0);
v_a_1036_ = lean_ctor_get(v_x_978_, 0);
v___x_1037_ = lean_name_eq(v_a_1035_, v_a_1036_);
if (v___x_1037_ == 0)
{
uint8_t v___x_1038_; 
lean_dec(v_x_979_);
lean_dec(v_x_977_);
v___x_1038_ = l_Lean_Name_lt(v_a_1035_, v_a_1036_);
return v___x_1038_;
}
else
{
uint8_t v___x_1039_; 
v___x_1039_ = lean_nat_dec_lt(v_x_977_, v_x_979_);
lean_dec(v_x_979_);
lean_dec(v_x_977_);
return v___x_1039_;
}
}
default: 
{
v_l_u2081_989_ = v_x_976_;
v_k_u2081_990_ = v_x_977_;
v_l_u2082_991_ = v_x_978_;
v_k_u2082_992_ = v_x_979_;
goto v___jp_988_;
}
}
}
default: 
{
if (lean_obj_tag(v_x_978_) == 1)
{
lean_object* v_a_1040_; 
v_a_1040_ = lean_ctor_get(v_x_978_, 0);
v_l_u2081_981_ = v_x_976_;
v_k_u2081_982_ = v_x_977_;
v_l_u2082_983_ = v_a_1040_;
v_k_u2082_984_ = v_x_979_;
goto v___jp_980_;
}
else
{
v_l_u2081_989_ = v_x_976_;
v_k_u2081_990_ = v_x_977_;
v_l_u2082_991_ = v_x_978_;
v_k_u2082_992_ = v_x_979_;
goto v___jp_988_;
}
}
}
v___jp_980_:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = lean_unsigned_to_nat(1u);
v___x_986_ = lean_nat_add(v_k_u2082_984_, v___x_985_);
lean_dec(v_k_u2082_984_);
v_x_976_ = v_l_u2081_981_;
v_x_977_ = v_k_u2081_982_;
v_x_978_ = v_l_u2082_983_;
v_x_979_ = v___x_986_;
goto _start;
}
v___jp_988_:
{
uint8_t v___x_993_; 
v___x_993_ = lean_level_eq(v_l_u2081_989_, v_l_u2082_991_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; lean_object* v___x_995_; uint8_t v___x_996_; 
lean_dec(v_k_u2082_992_);
lean_dec(v_k_u2081_990_);
v___x_994_ = l_Lean_Level_ctorToNat(v_l_u2081_989_);
v___x_995_ = l_Lean_Level_ctorToNat(v_l_u2082_991_);
v___x_996_ = lean_nat_dec_lt(v___x_994_, v___x_995_);
lean_dec(v___x_995_);
lean_dec(v___x_994_);
return v___x_996_;
}
else
{
uint8_t v___x_997_; 
v___x_997_ = lean_nat_dec_lt(v_k_u2081_990_, v_k_u2082_992_);
lean_dec(v_k_u2082_992_);
lean_dec(v_k_u2081_990_);
return v___x_997_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_normLtAux___boxed(lean_object* v_x_1041_, lean_object* v_x_1042_, lean_object* v_x_1043_, lean_object* v_x_1044_){
_start:
{
uint8_t v_res_1045_; lean_object* v_r_1046_; 
v_res_1045_ = l_Lean_Level_normLtAux(v_x_1041_, v_x_1042_, v_x_1043_, v_x_1044_);
lean_dec(v_x_1043_);
lean_dec(v_x_1041_);
v_r_1046_ = lean_box(v_res_1045_);
return v_r_1046_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_normLtAux_match__1_splitter___redArg(lean_object* v_x_1047_, lean_object* v_x_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_, lean_object* v_h__1_1051_, lean_object* v_h__2_1052_, lean_object* v_h__3_1053_, lean_object* v_h__4_1054_, lean_object* v_h__5_1055_, lean_object* v_h__6_1056_, lean_object* v_h__7_1057_){
_start:
{
switch(lean_obj_tag(v_x_1047_))
{
case 1:
{
lean_object* v_a_1058_; lean_object* v___x_1059_; 
lean_dec(v_h__7_1057_);
lean_dec(v_h__6_1056_);
lean_dec(v_h__5_1055_);
lean_dec(v_h__4_1054_);
lean_dec(v_h__3_1053_);
lean_dec(v_h__2_1052_);
v_a_1058_ = lean_ctor_get(v_x_1047_, 0);
lean_inc(v_a_1058_);
lean_dec_ref_known(v_x_1047_, 1);
v___x_1059_ = lean_apply_4(v_h__1_1051_, v_a_1058_, v_x_1048_, v_x_1049_, v_x_1050_);
return v___x_1059_;
}
case 2:
{
lean_dec(v_h__6_1056_);
lean_dec(v_h__5_1055_);
lean_dec(v_h__4_1054_);
lean_dec(v_h__1_1051_);
switch(lean_obj_tag(v_x_1049_))
{
case 1:
{
lean_object* v_a_1060_; lean_object* v___x_1061_; 
lean_dec(v_h__7_1057_);
lean_dec(v_h__3_1053_);
v_a_1060_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v_x_1049_, 1);
v___x_1061_ = lean_apply_5(v_h__2_1052_, v_x_1047_, v_x_1048_, v_a_1060_, v_x_1050_, lean_box(0));
return v___x_1061_;
}
case 2:
{
lean_object* v_a_1062_; lean_object* v_a_1063_; lean_object* v_a_1064_; lean_object* v_a_1065_; lean_object* v___x_1066_; 
lean_dec(v_h__7_1057_);
lean_dec(v_h__2_1052_);
v_a_1062_ = lean_ctor_get(v_x_1047_, 0);
lean_inc(v_a_1062_);
v_a_1063_ = lean_ctor_get(v_x_1047_, 1);
lean_inc(v_a_1063_);
lean_dec_ref_known(v_x_1047_, 2);
v_a_1064_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1064_);
v_a_1065_ = lean_ctor_get(v_x_1049_, 1);
lean_inc(v_a_1065_);
lean_dec_ref_known(v_x_1049_, 2);
v___x_1066_ = lean_apply_6(v_h__3_1053_, v_a_1062_, v_a_1063_, v_x_1048_, v_a_1064_, v_a_1065_, v_x_1050_);
return v___x_1066_;
}
default: 
{
lean_object* v___x_1067_; 
lean_dec(v_h__3_1053_);
lean_dec(v_h__2_1052_);
v___x_1067_ = lean_apply_10(v_h__7_1057_, v_x_1047_, v_x_1048_, v_x_1049_, v_x_1050_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1067_;
}
}
}
case 3:
{
lean_dec(v_h__6_1056_);
lean_dec(v_h__5_1055_);
lean_dec(v_h__3_1053_);
lean_dec(v_h__1_1051_);
switch(lean_obj_tag(v_x_1049_))
{
case 1:
{
lean_object* v_a_1068_; lean_object* v___x_1069_; 
lean_dec(v_h__7_1057_);
lean_dec(v_h__4_1054_);
v_a_1068_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v_x_1049_, 1);
v___x_1069_ = lean_apply_5(v_h__2_1052_, v_x_1047_, v_x_1048_, v_a_1068_, v_x_1050_, lean_box(0));
return v___x_1069_;
}
case 3:
{
lean_object* v_a_1070_; lean_object* v_a_1071_; lean_object* v_a_1072_; lean_object* v_a_1073_; lean_object* v___x_1074_; 
lean_dec(v_h__7_1057_);
lean_dec(v_h__2_1052_);
v_a_1070_ = lean_ctor_get(v_x_1047_, 0);
lean_inc(v_a_1070_);
v_a_1071_ = lean_ctor_get(v_x_1047_, 1);
lean_inc(v_a_1071_);
lean_dec_ref_known(v_x_1047_, 2);
v_a_1072_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1072_);
v_a_1073_ = lean_ctor_get(v_x_1049_, 1);
lean_inc(v_a_1073_);
lean_dec_ref_known(v_x_1049_, 2);
v___x_1074_ = lean_apply_6(v_h__4_1054_, v_a_1070_, v_a_1071_, v_x_1048_, v_a_1072_, v_a_1073_, v_x_1050_);
return v___x_1074_;
}
default: 
{
lean_object* v___x_1075_; 
lean_dec(v_h__4_1054_);
lean_dec(v_h__2_1052_);
v___x_1075_ = lean_apply_10(v_h__7_1057_, v_x_1047_, v_x_1048_, v_x_1049_, v_x_1050_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1075_;
}
}
}
case 4:
{
lean_dec(v_h__6_1056_);
lean_dec(v_h__4_1054_);
lean_dec(v_h__3_1053_);
lean_dec(v_h__1_1051_);
switch(lean_obj_tag(v_x_1049_))
{
case 1:
{
lean_object* v_a_1076_; lean_object* v___x_1077_; 
lean_dec(v_h__7_1057_);
lean_dec(v_h__5_1055_);
v_a_1076_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v_x_1049_, 1);
v___x_1077_ = lean_apply_5(v_h__2_1052_, v_x_1047_, v_x_1048_, v_a_1076_, v_x_1050_, lean_box(0));
return v___x_1077_;
}
case 4:
{
lean_object* v_a_1078_; lean_object* v_a_1079_; lean_object* v___x_1080_; 
lean_dec(v_h__7_1057_);
lean_dec(v_h__2_1052_);
v_a_1078_ = lean_ctor_get(v_x_1047_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v_x_1047_, 1);
v_a_1079_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1079_);
lean_dec_ref_known(v_x_1049_, 1);
v___x_1080_ = lean_apply_4(v_h__5_1055_, v_a_1078_, v_x_1048_, v_a_1079_, v_x_1050_);
return v___x_1080_;
}
default: 
{
lean_object* v___x_1081_; 
lean_dec(v_h__5_1055_);
lean_dec(v_h__2_1052_);
v___x_1081_ = lean_apply_10(v_h__7_1057_, v_x_1047_, v_x_1048_, v_x_1049_, v_x_1050_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1081_;
}
}
}
case 5:
{
lean_dec(v_h__5_1055_);
lean_dec(v_h__4_1054_);
lean_dec(v_h__3_1053_);
lean_dec(v_h__1_1051_);
switch(lean_obj_tag(v_x_1049_))
{
case 1:
{
lean_object* v_a_1082_; lean_object* v___x_1083_; 
lean_dec(v_h__7_1057_);
lean_dec(v_h__6_1056_);
v_a_1082_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v_x_1049_, 1);
v___x_1083_ = lean_apply_5(v_h__2_1052_, v_x_1047_, v_x_1048_, v_a_1082_, v_x_1050_, lean_box(0));
return v___x_1083_;
}
case 5:
{
lean_object* v_a_1084_; lean_object* v_a_1085_; lean_object* v___x_1086_; 
lean_dec(v_h__7_1057_);
lean_dec(v_h__2_1052_);
v_a_1084_ = lean_ctor_get(v_x_1047_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v_x_1047_, 1);
v_a_1085_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1085_);
lean_dec_ref_known(v_x_1049_, 1);
v___x_1086_ = lean_apply_4(v_h__6_1056_, v_a_1084_, v_x_1048_, v_a_1085_, v_x_1050_);
return v___x_1086_;
}
default: 
{
lean_object* v___x_1087_; 
lean_dec(v_h__6_1056_);
lean_dec(v_h__2_1052_);
v___x_1087_ = lean_apply_10(v_h__7_1057_, v_x_1047_, v_x_1048_, v_x_1049_, v_x_1050_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1087_;
}
}
}
default: 
{
lean_dec(v_h__6_1056_);
lean_dec(v_h__5_1055_);
lean_dec(v_h__4_1054_);
lean_dec(v_h__3_1053_);
lean_dec(v_h__1_1051_);
if (lean_obj_tag(v_x_1049_) == 1)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; 
lean_dec(v_h__7_1057_);
v_a_1088_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v_x_1049_, 1);
v___x_1089_ = lean_apply_5(v_h__2_1052_, v_x_1047_, v_x_1048_, v_a_1088_, v_x_1050_, lean_box(0));
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; 
lean_dec(v_h__2_1052_);
v___x_1090_ = lean_apply_10(v_h__7_1057_, v_x_1047_, v_x_1048_, v_x_1049_, v_x_1050_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1090_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_normLtAux_match__1_splitter(lean_object* v_motive_1091_, lean_object* v_x_1092_, lean_object* v_x_1093_, lean_object* v_x_1094_, lean_object* v_x_1095_, lean_object* v_h__1_1096_, lean_object* v_h__2_1097_, lean_object* v_h__3_1098_, lean_object* v_h__4_1099_, lean_object* v_h__5_1100_, lean_object* v_h__6_1101_, lean_object* v_h__7_1102_){
_start:
{
switch(lean_obj_tag(v_x_1092_))
{
case 1:
{
lean_object* v_a_1103_; lean_object* v___x_1104_; 
lean_dec(v_h__7_1102_);
lean_dec(v_h__6_1101_);
lean_dec(v_h__5_1100_);
lean_dec(v_h__4_1099_);
lean_dec(v_h__3_1098_);
lean_dec(v_h__2_1097_);
v_a_1103_ = lean_ctor_get(v_x_1092_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v_x_1092_, 1);
v___x_1104_ = lean_apply_4(v_h__1_1096_, v_a_1103_, v_x_1093_, v_x_1094_, v_x_1095_);
return v___x_1104_;
}
case 2:
{
lean_dec(v_h__6_1101_);
lean_dec(v_h__5_1100_);
lean_dec(v_h__4_1099_);
lean_dec(v_h__1_1096_);
switch(lean_obj_tag(v_x_1094_))
{
case 1:
{
lean_object* v_a_1105_; lean_object* v___x_1106_; 
lean_dec(v_h__7_1102_);
lean_dec(v_h__3_1098_);
v_a_1105_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v_x_1094_, 1);
v___x_1106_ = lean_apply_5(v_h__2_1097_, v_x_1092_, v_x_1093_, v_a_1105_, v_x_1095_, lean_box(0));
return v___x_1106_;
}
case 2:
{
lean_object* v_a_1107_; lean_object* v_a_1108_; lean_object* v_a_1109_; lean_object* v_a_1110_; lean_object* v___x_1111_; 
lean_dec(v_h__7_1102_);
lean_dec(v_h__2_1097_);
v_a_1107_ = lean_ctor_get(v_x_1092_, 0);
lean_inc(v_a_1107_);
v_a_1108_ = lean_ctor_get(v_x_1092_, 1);
lean_inc(v_a_1108_);
lean_dec_ref_known(v_x_1092_, 2);
v_a_1109_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_a_1109_);
v_a_1110_ = lean_ctor_get(v_x_1094_, 1);
lean_inc(v_a_1110_);
lean_dec_ref_known(v_x_1094_, 2);
v___x_1111_ = lean_apply_6(v_h__3_1098_, v_a_1107_, v_a_1108_, v_x_1093_, v_a_1109_, v_a_1110_, v_x_1095_);
return v___x_1111_;
}
default: 
{
lean_object* v___x_1112_; 
lean_dec(v_h__3_1098_);
lean_dec(v_h__2_1097_);
v___x_1112_ = lean_apply_10(v_h__7_1102_, v_x_1092_, v_x_1093_, v_x_1094_, v_x_1095_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1112_;
}
}
}
case 3:
{
lean_dec(v_h__6_1101_);
lean_dec(v_h__5_1100_);
lean_dec(v_h__3_1098_);
lean_dec(v_h__1_1096_);
switch(lean_obj_tag(v_x_1094_))
{
case 1:
{
lean_object* v_a_1113_; lean_object* v___x_1114_; 
lean_dec(v_h__7_1102_);
lean_dec(v_h__4_1099_);
v_a_1113_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_a_1113_);
lean_dec_ref_known(v_x_1094_, 1);
v___x_1114_ = lean_apply_5(v_h__2_1097_, v_x_1092_, v_x_1093_, v_a_1113_, v_x_1095_, lean_box(0));
return v___x_1114_;
}
case 3:
{
lean_object* v_a_1115_; lean_object* v_a_1116_; lean_object* v_a_1117_; lean_object* v_a_1118_; lean_object* v___x_1119_; 
lean_dec(v_h__7_1102_);
lean_dec(v_h__2_1097_);
v_a_1115_ = lean_ctor_get(v_x_1092_, 0);
lean_inc(v_a_1115_);
v_a_1116_ = lean_ctor_get(v_x_1092_, 1);
lean_inc(v_a_1116_);
lean_dec_ref_known(v_x_1092_, 2);
v_a_1117_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_a_1117_);
v_a_1118_ = lean_ctor_get(v_x_1094_, 1);
lean_inc(v_a_1118_);
lean_dec_ref_known(v_x_1094_, 2);
v___x_1119_ = lean_apply_6(v_h__4_1099_, v_a_1115_, v_a_1116_, v_x_1093_, v_a_1117_, v_a_1118_, v_x_1095_);
return v___x_1119_;
}
default: 
{
lean_object* v___x_1120_; 
lean_dec(v_h__4_1099_);
lean_dec(v_h__2_1097_);
v___x_1120_ = lean_apply_10(v_h__7_1102_, v_x_1092_, v_x_1093_, v_x_1094_, v_x_1095_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1120_;
}
}
}
case 4:
{
lean_dec(v_h__6_1101_);
lean_dec(v_h__4_1099_);
lean_dec(v_h__3_1098_);
lean_dec(v_h__1_1096_);
switch(lean_obj_tag(v_x_1094_))
{
case 1:
{
lean_object* v_a_1121_; lean_object* v___x_1122_; 
lean_dec(v_h__7_1102_);
lean_dec(v_h__5_1100_);
v_a_1121_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v_x_1094_, 1);
v___x_1122_ = lean_apply_5(v_h__2_1097_, v_x_1092_, v_x_1093_, v_a_1121_, v_x_1095_, lean_box(0));
return v___x_1122_;
}
case 4:
{
lean_object* v_a_1123_; lean_object* v_a_1124_; lean_object* v___x_1125_; 
lean_dec(v_h__7_1102_);
lean_dec(v_h__2_1097_);
v_a_1123_ = lean_ctor_get(v_x_1092_, 0);
lean_inc(v_a_1123_);
lean_dec_ref_known(v_x_1092_, 1);
v_a_1124_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_a_1124_);
lean_dec_ref_known(v_x_1094_, 1);
v___x_1125_ = lean_apply_4(v_h__5_1100_, v_a_1123_, v_x_1093_, v_a_1124_, v_x_1095_);
return v___x_1125_;
}
default: 
{
lean_object* v___x_1126_; 
lean_dec(v_h__5_1100_);
lean_dec(v_h__2_1097_);
v___x_1126_ = lean_apply_10(v_h__7_1102_, v_x_1092_, v_x_1093_, v_x_1094_, v_x_1095_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1126_;
}
}
}
case 5:
{
lean_dec(v_h__5_1100_);
lean_dec(v_h__4_1099_);
lean_dec(v_h__3_1098_);
lean_dec(v_h__1_1096_);
switch(lean_obj_tag(v_x_1094_))
{
case 1:
{
lean_object* v_a_1127_; lean_object* v___x_1128_; 
lean_dec(v_h__7_1102_);
lean_dec(v_h__6_1101_);
v_a_1127_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_a_1127_);
lean_dec_ref_known(v_x_1094_, 1);
v___x_1128_ = lean_apply_5(v_h__2_1097_, v_x_1092_, v_x_1093_, v_a_1127_, v_x_1095_, lean_box(0));
return v___x_1128_;
}
case 5:
{
lean_object* v_a_1129_; lean_object* v_a_1130_; lean_object* v___x_1131_; 
lean_dec(v_h__7_1102_);
lean_dec(v_h__2_1097_);
v_a_1129_ = lean_ctor_get(v_x_1092_, 0);
lean_inc(v_a_1129_);
lean_dec_ref_known(v_x_1092_, 1);
v_a_1130_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_a_1130_);
lean_dec_ref_known(v_x_1094_, 1);
v___x_1131_ = lean_apply_4(v_h__6_1101_, v_a_1129_, v_x_1093_, v_a_1130_, v_x_1095_);
return v___x_1131_;
}
default: 
{
lean_object* v___x_1132_; 
lean_dec(v_h__6_1101_);
lean_dec(v_h__2_1097_);
v___x_1132_ = lean_apply_10(v_h__7_1102_, v_x_1092_, v_x_1093_, v_x_1094_, v_x_1095_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1132_;
}
}
}
default: 
{
lean_dec(v_h__6_1101_);
lean_dec(v_h__5_1100_);
lean_dec(v_h__4_1099_);
lean_dec(v_h__3_1098_);
lean_dec(v_h__1_1096_);
if (lean_obj_tag(v_x_1094_) == 1)
{
lean_object* v_a_1133_; lean_object* v___x_1134_; 
lean_dec(v_h__7_1102_);
v_a_1133_ = lean_ctor_get(v_x_1094_, 0);
lean_inc(v_a_1133_);
lean_dec_ref_known(v_x_1094_, 1);
v___x_1134_ = lean_apply_5(v_h__2_1097_, v_x_1092_, v_x_1093_, v_a_1133_, v_x_1095_, lean_box(0));
return v___x_1134_;
}
else
{
lean_object* v___x_1135_; 
lean_dec(v_h__2_1097_);
v___x_1135_ = lean_apply_10(v_h__7_1102_, v_x_1092_, v_x_1093_, v_x_1094_, v_x_1095_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1135_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Level_normLt(lean_object* v_l_u2081_1136_, lean_object* v_l_u2082_1137_){
_start:
{
lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1138_ = lean_unsigned_to_nat(0u);
v___x_1139_ = l_Lean_Level_normLtAux(v_l_u2081_1136_, v___x_1138_, v_l_u2082_1137_, v___x_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_normLt___boxed(lean_object* v_l_u2081_1140_, lean_object* v_l_u2082_1141_){
_start:
{
uint8_t v_res_1142_; lean_object* v_r_1143_; 
v_res_1142_ = l_Lean_Level_normLt(v_l_u2081_1140_, v_l_u2082_1141_);
lean_dec(v_l_u2082_1141_);
lean_dec(v_l_u2081_1140_);
v_r_1143_ = lean_box(v_res_1142_);
return v_r_1143_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isAlreadyNormalizedCheap(lean_object* v_x_1144_){
_start:
{
switch(lean_obj_tag(v_x_1144_))
{
case 0:
{
uint8_t v___x_1145_; 
v___x_1145_ = 1;
return v___x_1145_;
}
case 4:
{
uint8_t v___x_1146_; 
v___x_1146_ = 1;
return v___x_1146_;
}
case 5:
{
uint8_t v___x_1147_; 
v___x_1147_ = 1;
return v___x_1147_;
}
case 1:
{
lean_object* v_a_1148_; 
v_a_1148_ = lean_ctor_get(v_x_1144_, 0);
v_x_1144_ = v_a_1148_;
goto _start;
}
default: 
{
uint8_t v___x_1150_; 
v___x_1150_ = 0;
return v___x_1150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isAlreadyNormalizedCheap___boxed(lean_object* v_x_1151_){
_start:
{
uint8_t v_res_1152_; lean_object* v_r_1153_; 
v_res_1152_ = l_Lean_Level_isAlreadyNormalizedCheap(v_x_1151_);
lean_dec(v_x_1151_);
v_r_1153_ = lean_box(v_res_1152_);
return v_r_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkIMaxAux(lean_object* v_x_1154_, lean_object* v_x_1155_){
_start:
{
lean_object* v_u_u2081_1157_; lean_object* v_u_u2082_1158_; 
if (lean_obj_tag(v_x_1155_) == 0)
{
lean_dec(v_x_1154_);
return v_x_1155_;
}
else
{
switch(lean_obj_tag(v_x_1154_))
{
case 0:
{
return v_x_1155_;
}
case 1:
{
lean_object* v_a_1161_; 
v_a_1161_ = lean_ctor_get(v_x_1154_, 0);
if (lean_obj_tag(v_a_1161_) == 0)
{
lean_dec_ref_known(v_x_1154_, 1);
return v_x_1155_;
}
else
{
v_u_u2081_1157_ = v_x_1154_;
v_u_u2082_1158_ = v_x_1155_;
goto v___jp_1156_;
}
}
default: 
{
v_u_u2081_1157_ = v_x_1154_;
v_u_u2082_1158_ = v_x_1155_;
goto v___jp_1156_;
}
}
}
v___jp_1156_:
{
uint8_t v___x_1159_; 
v___x_1159_ = lean_level_eq(v_u_u2081_1157_, v_u_u2082_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; 
v___x_1160_ = l_Lean_Level_imax___override(v_u_u2081_1157_, v_u_u2082_1158_);
return v___x_1160_;
}
else
{
lean_dec(v_u_u2082_1158_);
return v_u_u2081_1157_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux(lean_object* v_normalize_1162_, lean_object* v_x_1163_, uint8_t v_x_1164_, lean_object* v_x_1165_){
_start:
{
if (lean_obj_tag(v_x_1163_) == 2)
{
lean_object* v_a_1166_; lean_object* v_a_1167_; lean_object* v___x_1168_; 
v_a_1166_ = lean_ctor_get(v_x_1163_, 0);
lean_inc(v_a_1166_);
v_a_1167_ = lean_ctor_get(v_x_1163_, 1);
lean_inc(v_a_1167_);
lean_dec_ref_known(v_x_1163_, 2);
lean_inc_ref(v_normalize_1162_);
v___x_1168_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux(v_normalize_1162_, v_a_1166_, v_x_1164_, v_x_1165_);
v_x_1163_ = v_a_1167_;
v_x_1165_ = v___x_1168_;
goto _start;
}
else
{
if (v_x_1164_ == 0)
{
lean_object* v___x_1170_; uint8_t v___x_1171_; 
lean_inc_ref(v_normalize_1162_);
v___x_1170_ = lean_apply_1(v_normalize_1162_, v_x_1163_);
v___x_1171_ = 1;
v_x_1163_ = v___x_1170_;
v_x_1164_ = v___x_1171_;
goto _start;
}
else
{
lean_object* v___x_1173_; 
lean_dec_ref(v_normalize_1162_);
v___x_1173_ = lean_array_push(v_x_1165_, v_x_1163_);
return v___x_1173_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___boxed(lean_object* v_normalize_1174_, lean_object* v_x_1175_, lean_object* v_x_1176_, lean_object* v_x_1177_){
_start:
{
uint8_t v_x_31__boxed_1178_; lean_object* v_res_1179_; 
v_x_31__boxed_1178_ = lean_unbox(v_x_1176_);
v_res_1179_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux(v_normalize_1174_, v_x_1175_, v_x_31__boxed_1178_, v_x_1177_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_accMax(lean_object* v_result_1180_, lean_object* v_prev_1181_, lean_object* v_offset_1182_){
_start:
{
uint8_t v___x_1183_; 
v___x_1183_ = l_Lean_Level_isZero(v_result_1180_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1184_ = l_Lean_Level_addOffsetAux(v_offset_1182_, v_prev_1181_);
v___x_1185_ = l_Lean_Level_max___override(v_result_1180_, v___x_1184_);
return v___x_1185_;
}
else
{
lean_object* v___x_1186_; 
lean_dec(v_result_1180_);
v___x_1186_ = l_Lean_Level_addOffsetAux(v_offset_1182_, v_prev_1181_);
return v___x_1186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkMaxAux(lean_object* v_lvls_1187_, lean_object* v_extraK_1188_, lean_object* v_i_1189_, lean_object* v_prev_1190_, lean_object* v_prevK_1191_, lean_object* v_result_1192_){
_start:
{
lean_object* v___x_1193_; uint8_t v___x_1194_; 
v___x_1193_ = lean_array_get_size(v_lvls_1187_);
v___x_1194_ = lean_nat_dec_lt(v_i_1189_, v___x_1193_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
lean_dec(v_i_1189_);
v___x_1195_ = lean_nat_add(v_extraK_1188_, v_prevK_1191_);
lean_dec(v_prevK_1191_);
v___x_1196_ = l___private_Lean_Level_0__Lean_Level_accMax(v_result_1192_, v_prev_1190_, v___x_1195_);
return v___x_1196_;
}
else
{
lean_object* v_lvl_1197_; lean_object* v_curr_1198_; lean_object* v_currK_1199_; uint8_t v___x_1200_; 
v_lvl_1197_ = lean_array_fget_borrowed(v_lvls_1187_, v_i_1189_);
v_curr_1198_ = l_Lean_Level_getLevelOffset(v_lvl_1197_);
v_currK_1199_ = l_Lean_Level_getOffset(v_lvl_1197_);
v___x_1200_ = lean_level_eq(v_curr_1198_, v_prev_1190_);
if (v___x_1200_ == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1201_ = lean_unsigned_to_nat(1u);
v___x_1202_ = lean_nat_add(v_i_1189_, v___x_1201_);
lean_dec(v_i_1189_);
v___x_1203_ = lean_nat_add(v_extraK_1188_, v_prevK_1191_);
lean_dec(v_prevK_1191_);
v___x_1204_ = l___private_Lean_Level_0__Lean_Level_accMax(v_result_1192_, v_prev_1190_, v___x_1203_);
v_i_1189_ = v___x_1202_;
v_prev_1190_ = v_curr_1198_;
v_prevK_1191_ = v_currK_1199_;
v_result_1192_ = v___x_1204_;
goto _start;
}
else
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
lean_dec(v_prevK_1191_);
lean_dec(v_prev_1190_);
v___x_1206_ = lean_unsigned_to_nat(1u);
v___x_1207_ = lean_nat_add(v_i_1189_, v___x_1206_);
lean_dec(v_i_1189_);
v_i_1189_ = v___x_1207_;
v_prev_1190_ = v_curr_1198_;
v_prevK_1191_ = v_currK_1199_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkMaxAux___boxed(lean_object* v_lvls_1209_, lean_object* v_extraK_1210_, lean_object* v_i_1211_, lean_object* v_prev_1212_, lean_object* v_prevK_1213_, lean_object* v_result_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l___private_Lean_Level_0__Lean_Level_mkMaxAux(v_lvls_1209_, v_extraK_1210_, v_i_1211_, v_prev_1212_, v_prevK_1213_, v_result_1214_);
lean_dec(v_extraK_1210_);
lean_dec_ref(v_lvls_1209_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_skipExplicit(lean_object* v_lvls_1216_, lean_object* v_i_1217_){
_start:
{
lean_object* v___x_1218_; uint8_t v___x_1219_; 
v___x_1218_ = lean_array_get_size(v_lvls_1216_);
v___x_1219_ = lean_nat_dec_lt(v_i_1217_, v___x_1218_);
if (v___x_1219_ == 0)
{
return v_i_1217_;
}
else
{
lean_object* v_lvl_1220_; lean_object* v___x_1221_; uint8_t v___x_1222_; 
v_lvl_1220_ = lean_array_fget_borrowed(v_lvls_1216_, v_i_1217_);
v___x_1221_ = l_Lean_Level_getLevelOffset(v_lvl_1220_);
v___x_1222_ = l_Lean_Level_isZero(v___x_1221_);
lean_dec(v___x_1221_);
if (v___x_1222_ == 0)
{
return v_i_1217_;
}
else
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = lean_unsigned_to_nat(1u);
v___x_1224_ = lean_nat_add(v_i_1217_, v___x_1223_);
lean_dec(v_i_1217_);
v_i_1217_ = v___x_1224_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_skipExplicit___boxed(lean_object* v_lvls_1226_, lean_object* v_i_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l___private_Lean_Level_0__Lean_Level_skipExplicit(v_lvls_1226_, v_i_1227_);
lean_dec_ref(v_lvls_1226_);
return v_res_1228_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux(lean_object* v_lvls_1229_, lean_object* v_maxExplicit_1230_, lean_object* v_i_1231_){
_start:
{
lean_object* v___x_1232_; uint8_t v___x_1233_; 
v___x_1232_ = lean_array_get_size(v_lvls_1229_);
v___x_1233_ = lean_nat_dec_lt(v_i_1231_, v___x_1232_);
if (v___x_1233_ == 0)
{
lean_dec(v_i_1231_);
return v___x_1233_;
}
else
{
lean_object* v_lvl_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; 
v_lvl_1234_ = lean_array_fget_borrowed(v_lvls_1229_, v_i_1231_);
v___x_1235_ = l_Lean_Level_getOffset(v_lvl_1234_);
v___x_1236_ = lean_nat_dec_le(v_maxExplicit_1230_, v___x_1235_);
lean_dec(v___x_1235_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = lean_unsigned_to_nat(1u);
v___x_1238_ = lean_nat_add(v_i_1231_, v___x_1237_);
lean_dec(v_i_1231_);
v_i_1231_ = v___x_1238_;
goto _start;
}
else
{
lean_dec(v_i_1231_);
return v___x_1236_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux___boxed(lean_object* v_lvls_1240_, lean_object* v_maxExplicit_1241_, lean_object* v_i_1242_){
_start:
{
uint8_t v_res_1243_; lean_object* v_r_1244_; 
v_res_1243_ = l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux(v_lvls_1240_, v_maxExplicit_1241_, v_i_1242_);
lean_dec(v_maxExplicit_1241_);
lean_dec_ref(v_lvls_1240_);
v_r_1244_ = lean_box(v_res_1243_);
return v_r_1244_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed(lean_object* v_lvls_1245_, lean_object* v_firstNonExplicit_1246_){
_start:
{
lean_object* v___x_1247_; uint8_t v___x_1248_; 
v___x_1247_ = lean_unsigned_to_nat(0u);
v___x_1248_ = lean_nat_dec_eq(v_firstNonExplicit_1246_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v_max_1253_; uint8_t v___x_1254_; 
v___x_1249_ = l_Lean_instInhabitedLevel;
v___x_1250_ = lean_unsigned_to_nat(1u);
v___x_1251_ = lean_nat_sub(v_firstNonExplicit_1246_, v___x_1250_);
v___x_1252_ = lean_array_get_borrowed(v___x_1249_, v_lvls_1245_, v___x_1251_);
lean_dec(v___x_1251_);
v_max_1253_ = l_Lean_Level_getOffset(v___x_1252_);
v___x_1254_ = l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux(v_lvls_1245_, v_max_1253_, v_firstNonExplicit_1246_);
lean_dec(v_max_1253_);
return v___x_1254_;
}
else
{
uint8_t v___x_1255_; 
lean_dec(v_firstNonExplicit_1246_);
v___x_1255_ = 0;
return v___x_1255_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed___boxed(lean_object* v_lvls_1256_, lean_object* v_firstNonExplicit_1257_){
_start:
{
uint8_t v_res_1258_; lean_object* v_r_1259_; 
v_res_1258_ = l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed(v_lvls_1256_, v_firstNonExplicit_1257_);
lean_dec_ref(v_lvls_1256_);
v_r_1259_ = lean_box(v_res_1258_);
return v_r_1259_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Level_normalize_spec__2(lean_object* v_msg_1260_){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = l_Lean_instInhabitedLevel;
v___x_1262_ = lean_panic_fn_borrowed(v___x_1261_, v_msg_1260_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(lean_object* v_hi_1263_, lean_object* v_pivot_1264_, lean_object* v_as_1265_, lean_object* v_i_1266_, lean_object* v_k_1267_){
_start:
{
uint8_t v___x_1268_; 
v___x_1268_ = lean_nat_dec_lt(v_k_1267_, v_hi_1263_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
lean_dec(v_k_1267_);
v___x_1269_ = lean_array_fswap(v_as_1265_, v_i_1266_, v_hi_1263_);
v___x_1270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1270_, 0, v_i_1266_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
return v___x_1270_;
}
else
{
lean_object* v___x_1271_; uint8_t v___x_1272_; 
v___x_1271_ = lean_array_fget_borrowed(v_as_1265_, v_k_1267_);
v___x_1272_ = l_Lean_Level_normLt(v___x_1271_, v_pivot_1264_);
if (v___x_1272_ == 0)
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1273_ = lean_unsigned_to_nat(1u);
v___x_1274_ = lean_nat_add(v_k_1267_, v___x_1273_);
lean_dec(v_k_1267_);
v_k_1267_ = v___x_1274_;
goto _start;
}
else
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1276_ = lean_array_fswap(v_as_1265_, v_i_1266_, v_k_1267_);
v___x_1277_ = lean_unsigned_to_nat(1u);
v___x_1278_ = lean_nat_add(v_i_1266_, v___x_1277_);
lean_dec(v_i_1266_);
v___x_1279_ = lean_nat_add(v_k_1267_, v___x_1277_);
lean_dec(v_k_1267_);
v_as_1265_ = v___x_1276_;
v_i_1266_ = v___x_1278_;
v_k_1267_ = v___x_1279_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg___boxed(lean_object* v_hi_1281_, lean_object* v_pivot_1282_, lean_object* v_as_1283_, lean_object* v_i_1284_, lean_object* v_k_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(v_hi_1281_, v_pivot_1282_, v_as_1283_, v_i_1284_, v_k_1285_);
lean_dec(v_pivot_1282_);
lean_dec(v_hi_1281_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(lean_object* v_n_1287_, lean_object* v_as_1288_, lean_object* v_lo_1289_, lean_object* v_hi_1290_){
_start:
{
lean_object* v___y_1292_; uint8_t v___x_1302_; 
v___x_1302_ = lean_nat_dec_lt(v_lo_1289_, v_hi_1290_);
if (v___x_1302_ == 0)
{
lean_dec(v_lo_1289_);
return v_as_1288_;
}
else
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v_mid_1305_; lean_object* v___y_1307_; lean_object* v___y_1313_; lean_object* v___x_1318_; lean_object* v___x_1319_; uint8_t v___x_1320_; 
v___x_1303_ = lean_nat_add(v_lo_1289_, v_hi_1290_);
v___x_1304_ = lean_unsigned_to_nat(1u);
v_mid_1305_ = lean_nat_shiftr(v___x_1303_, v___x_1304_);
lean_dec(v___x_1303_);
v___x_1318_ = lean_array_fget_borrowed(v_as_1288_, v_mid_1305_);
v___x_1319_ = lean_array_fget_borrowed(v_as_1288_, v_lo_1289_);
v___x_1320_ = l_Lean_Level_normLt(v___x_1318_, v___x_1319_);
if (v___x_1320_ == 0)
{
v___y_1313_ = v_as_1288_;
goto v___jp_1312_;
}
else
{
lean_object* v___x_1321_; 
v___x_1321_ = lean_array_fswap(v_as_1288_, v_lo_1289_, v_mid_1305_);
v___y_1313_ = v___x_1321_;
goto v___jp_1312_;
}
v___jp_1306_:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; uint8_t v___x_1310_; 
v___x_1308_ = lean_array_fget_borrowed(v___y_1307_, v_mid_1305_);
v___x_1309_ = lean_array_fget_borrowed(v___y_1307_, v_hi_1290_);
v___x_1310_ = l_Lean_Level_normLt(v___x_1308_, v___x_1309_);
if (v___x_1310_ == 0)
{
lean_dec(v_mid_1305_);
v___y_1292_ = v___y_1307_;
goto v___jp_1291_;
}
else
{
lean_object* v___x_1311_; 
v___x_1311_ = lean_array_fswap(v___y_1307_, v_mid_1305_, v_hi_1290_);
lean_dec(v_mid_1305_);
v___y_1292_ = v___x_1311_;
goto v___jp_1291_;
}
}
v___jp_1312_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; 
v___x_1314_ = lean_array_fget_borrowed(v___y_1313_, v_hi_1290_);
v___x_1315_ = lean_array_fget_borrowed(v___y_1313_, v_lo_1289_);
v___x_1316_ = l_Lean_Level_normLt(v___x_1314_, v___x_1315_);
if (v___x_1316_ == 0)
{
v___y_1307_ = v___y_1313_;
goto v___jp_1306_;
}
else
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_array_fswap(v___y_1313_, v_lo_1289_, v_hi_1290_);
v___y_1307_ = v___x_1317_;
goto v___jp_1306_;
}
}
}
v___jp_1291_:
{
lean_object* v_pivot_1293_; lean_object* v___x_1294_; lean_object* v_fst_1295_; lean_object* v_snd_1296_; uint8_t v___x_1297_; 
v_pivot_1293_ = lean_array_fget(v___y_1292_, v_hi_1290_);
lean_inc_n(v_lo_1289_, 2);
v___x_1294_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(v_hi_1290_, v_pivot_1293_, v___y_1292_, v_lo_1289_, v_lo_1289_);
lean_dec(v_pivot_1293_);
v_fst_1295_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_fst_1295_);
v_snd_1296_ = lean_ctor_get(v___x_1294_, 1);
lean_inc(v_snd_1296_);
lean_dec_ref(v___x_1294_);
v___x_1297_ = lean_nat_dec_le(v_hi_1290_, v_fst_1295_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1298_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(v_n_1287_, v_snd_1296_, v_lo_1289_, v_fst_1295_);
v___x_1299_ = lean_unsigned_to_nat(1u);
v___x_1300_ = lean_nat_add(v_fst_1295_, v___x_1299_);
lean_dec(v_fst_1295_);
v_as_1288_ = v___x_1298_;
v_lo_1289_ = v___x_1300_;
goto _start;
}
else
{
lean_dec(v_fst_1295_);
lean_dec(v_lo_1289_);
return v_snd_1296_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg___boxed(lean_object* v_n_1322_, lean_object* v_as_1323_, lean_object* v_lo_1324_, lean_object* v_hi_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(v_n_1322_, v_as_1323_, v_lo_1324_, v_hi_1325_);
lean_dec(v_hi_1325_);
lean_dec(v_n_1322_);
return v_res_1326_;
}
}
static lean_object* _init_l_Lean_Level_normalize___closed__3(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1331_ = ((lean_object*)(l_Lean_Level_normalize___closed__2));
v___x_1332_ = lean_unsigned_to_nat(11u);
v___x_1333_ = lean_unsigned_to_nat(404u);
v___x_1334_ = ((lean_object*)(l_Lean_Level_normalize___closed__1));
v___x_1335_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_1336_ = l_mkPanicMessageWithDecl(v___x_1335_, v___x_1334_, v___x_1333_, v___x_1332_, v___x_1331_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_normalize(lean_object* v_l_1337_){
_start:
{
uint8_t v___x_1338_; 
v___x_1338_ = l_Lean_Level_isAlreadyNormalizedCheap(v_l_1337_);
if (v___x_1338_ == 0)
{
lean_object* v_k_1339_; lean_object* v_u_1340_; 
v_k_1339_ = l_Lean_Level_getOffset(v_l_1337_);
v_u_1340_ = l_Lean_Level_getLevelOffset(v_l_1337_);
switch(lean_obj_tag(v_u_1340_))
{
case 2:
{
lean_object* v_a_1341_; lean_object* v_a_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v_lvls_1346_; lean_object* v_lvls_1347_; lean_object* v___x_1348_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1359_; lean_object* v___x_1363_; lean_object* v___y_1365_; lean_object* v___y_1366_; uint8_t v___x_1368_; 
v_a_1341_ = lean_ctor_get(v_u_1340_, 0);
lean_inc(v_a_1341_);
v_a_1342_ = lean_ctor_get(v_u_1340_, 1);
lean_inc(v_a_1342_);
lean_dec_ref_known(v_u_1340_, 2);
v___x_1343_ = l_Lean_instInhabitedLevel;
v___x_1344_ = lean_unsigned_to_nat(0u);
v___x_1345_ = ((lean_object*)(l_Lean_Level_normalize___closed__0));
v_lvls_1346_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(v_a_1341_, v___x_1338_, v___x_1345_);
v_lvls_1347_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(v_a_1342_, v___x_1338_, v_lvls_1346_);
v___x_1348_ = lean_unsigned_to_nat(1u);
v___x_1363_ = lean_array_get_size(v_lvls_1347_);
v___x_1368_ = lean_nat_dec_eq(v___x_1363_, v___x_1344_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; lean_object* v___y_1371_; uint8_t v___x_1373_; 
v___x_1369_ = lean_nat_sub(v___x_1363_, v___x_1348_);
v___x_1373_ = lean_nat_dec_le(v___x_1344_, v___x_1369_);
if (v___x_1373_ == 0)
{
lean_inc(v___x_1369_);
v___y_1371_ = v___x_1369_;
goto v___jp_1370_;
}
else
{
v___y_1371_ = v___x_1344_;
goto v___jp_1370_;
}
v___jp_1370_:
{
uint8_t v___x_1372_; 
v___x_1372_ = lean_nat_dec_le(v___y_1371_, v___x_1369_);
if (v___x_1372_ == 0)
{
lean_dec(v___x_1369_);
lean_inc(v___y_1371_);
v___y_1365_ = v___y_1371_;
v___y_1366_ = v___y_1371_;
goto v___jp_1364_;
}
else
{
v___y_1365_ = v___y_1371_;
v___y_1366_ = v___x_1369_;
goto v___jp_1364_;
}
}
}
else
{
v___y_1359_ = v_lvls_1347_;
goto v___jp_1358_;
}
v___jp_1349_:
{
lean_object* v_lvl_u2081_1352_; lean_object* v_prev_1353_; lean_object* v_prevK_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v_lvl_u2081_1352_ = lean_array_get_borrowed(v___x_1343_, v___y_1350_, v___y_1351_);
v_prev_1353_ = l_Lean_Level_getLevelOffset(v_lvl_u2081_1352_);
v_prevK_1354_ = l_Lean_Level_getOffset(v_lvl_u2081_1352_);
v___x_1355_ = lean_nat_add(v___y_1351_, v___x_1348_);
lean_dec(v___y_1351_);
v___x_1356_ = lean_obj_once(&l_Lean_Level_zero___override___closed__0, &l_Lean_Level_zero___override___closed__0_once, _init_l_Lean_Level_zero___override___closed__0);
v___x_1357_ = l___private_Lean_Level_0__Lean_Level_mkMaxAux(v___y_1350_, v_k_1339_, v___x_1355_, v_prev_1353_, v_prevK_1354_, v___x_1356_);
lean_dec(v_k_1339_);
lean_dec_ref(v___y_1350_);
return v___x_1357_;
}
v___jp_1358_:
{
lean_object* v_firstNonExplicit_1360_; uint8_t v___x_1361_; 
v_firstNonExplicit_1360_ = l___private_Lean_Level_0__Lean_Level_skipExplicit(v___y_1359_, v___x_1344_);
lean_inc(v_firstNonExplicit_1360_);
v___x_1361_ = l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed(v___y_1359_, v_firstNonExplicit_1360_);
if (v___x_1361_ == 0)
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_nat_sub(v_firstNonExplicit_1360_, v___x_1348_);
lean_dec(v_firstNonExplicit_1360_);
v___y_1350_ = v___y_1359_;
v___y_1351_ = v___x_1362_;
goto v___jp_1349_;
}
else
{
v___y_1350_ = v___y_1359_;
v___y_1351_ = v_firstNonExplicit_1360_;
goto v___jp_1349_;
}
}
v___jp_1364_:
{
lean_object* v___x_1367_; 
v___x_1367_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(v___x_1363_, v_lvls_1347_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
v___y_1359_ = v___x_1367_;
goto v___jp_1358_;
}
}
case 3:
{
lean_object* v_a_1374_; lean_object* v_a_1375_; uint8_t v___x_1376_; 
v_a_1374_ = lean_ctor_get(v_u_1340_, 0);
lean_inc(v_a_1374_);
v_a_1375_ = lean_ctor_get(v_u_1340_, 1);
lean_inc(v_a_1375_);
lean_dec_ref_known(v_u_1340_, 2);
v___x_1376_ = l_Lean_Level_isNeverZero(v_a_1375_);
if (v___x_1376_ == 0)
{
lean_object* v_l_u2081_1377_; lean_object* v_l_u2082_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v_l_u2081_1377_ = l_Lean_Level_normalize(v_a_1374_);
lean_dec(v_a_1374_);
v_l_u2082_1378_ = l_Lean_Level_normalize(v_a_1375_);
lean_dec(v_a_1375_);
v___x_1379_ = l___private_Lean_Level_0__Lean_Level_mkIMaxAux(v_l_u2081_1377_, v_l_u2082_1378_);
v___x_1380_ = l_Lean_Level_addOffsetAux(v_k_1339_, v___x_1379_);
return v___x_1380_;
}
else
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1381_ = l_Lean_Level_max___override(v_a_1374_, v_a_1375_);
v___x_1382_ = l_Lean_Level_normalize(v___x_1381_);
lean_dec(v___x_1381_);
v___x_1383_ = l_Lean_Level_addOffsetAux(v_k_1339_, v___x_1382_);
return v___x_1383_;
}
}
default: 
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
lean_dec(v_u_1340_);
lean_dec(v_k_1339_);
v___x_1384_ = lean_obj_once(&l_Lean_Level_normalize___closed__3, &l_Lean_Level_normalize___closed__3_once, _init_l_Lean_Level_normalize___closed__3);
v___x_1385_ = l_panic___at___00Lean_Level_normalize_spec__2(v___x_1384_);
return v___x_1385_;
}
}
}
else
{
lean_inc(v_l_1337_);
return v_l_1337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(lean_object* v_x_1386_, uint8_t v_x_1387_, lean_object* v_x_1388_){
_start:
{
if (lean_obj_tag(v_x_1386_) == 2)
{
lean_object* v_a_1389_; lean_object* v_a_1390_; lean_object* v___x_1391_; 
v_a_1389_ = lean_ctor_get(v_x_1386_, 0);
lean_inc(v_a_1389_);
v_a_1390_ = lean_ctor_get(v_x_1386_, 1);
lean_inc(v_a_1390_);
lean_dec_ref_known(v_x_1386_, 2);
v___x_1391_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(v_a_1389_, v_x_1387_, v_x_1388_);
v_x_1386_ = v_a_1390_;
v_x_1388_ = v___x_1391_;
goto _start;
}
else
{
if (v_x_1387_ == 0)
{
lean_object* v___x_1393_; uint8_t v___x_1394_; 
v___x_1393_ = l_Lean_Level_normalize(v_x_1386_);
lean_dec(v_x_1386_);
v___x_1394_ = 1;
v_x_1386_ = v___x_1393_;
v_x_1387_ = v___x_1394_;
goto _start;
}
else
{
lean_object* v___x_1396_; 
v___x_1396_ = lean_array_push(v_x_1388_, v_x_1386_);
return v___x_1396_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0___boxed(lean_object* v_x_1397_, lean_object* v_x_1398_, lean_object* v_x_1399_){
_start:
{
uint8_t v_x_484__boxed_1400_; lean_object* v_res_1401_; 
v_x_484__boxed_1400_ = lean_unbox(v_x_1398_);
v_res_1401_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(v_x_1397_, v_x_484__boxed_1400_, v_x_1399_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_normalize___boxed(lean_object* v_l_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l_Lean_Level_normalize(v_l_1402_);
lean_dec(v_l_1402_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1(lean_object* v_n_1404_, lean_object* v_as_1405_, lean_object* v_lo_1406_, lean_object* v_hi_1407_, lean_object* v_w_1408_, lean_object* v_hlo_1409_, lean_object* v_hhi_1410_){
_start:
{
lean_object* v___x_1411_; 
v___x_1411_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(v_n_1404_, v_as_1405_, v_lo_1406_, v_hi_1407_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___boxed(lean_object* v_n_1412_, lean_object* v_as_1413_, lean_object* v_lo_1414_, lean_object* v_hi_1415_, lean_object* v_w_1416_, lean_object* v_hlo_1417_, lean_object* v_hhi_1418_){
_start:
{
lean_object* v_res_1419_; 
v_res_1419_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1(v_n_1412_, v_as_1413_, v_lo_1414_, v_hi_1415_, v_w_1416_, v_hlo_1417_, v_hhi_1418_);
lean_dec(v_hi_1415_);
lean_dec(v_n_1412_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1(lean_object* v_n_1420_, lean_object* v_lo_1421_, lean_object* v_hi_1422_, lean_object* v_hhi_1423_, lean_object* v_pivot_1424_, lean_object* v_as_1425_, lean_object* v_i_1426_, lean_object* v_k_1427_, lean_object* v_ilo_1428_, lean_object* v_ik_1429_, lean_object* v_w_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(v_hi_1422_, v_pivot_1424_, v_as_1425_, v_i_1426_, v_k_1427_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___boxed(lean_object* v_n_1432_, lean_object* v_lo_1433_, lean_object* v_hi_1434_, lean_object* v_hhi_1435_, lean_object* v_pivot_1436_, lean_object* v_as_1437_, lean_object* v_i_1438_, lean_object* v_k_1439_, lean_object* v_ilo_1440_, lean_object* v_ik_1441_, lean_object* v_w_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1(v_n_1432_, v_lo_1433_, v_hi_1434_, v_hhi_1435_, v_pivot_1436_, v_as_1437_, v_i_1438_, v_k_1439_, v_ilo_1440_, v_ik_1441_, v_w_1442_);
lean_dec(v_pivot_1436_);
lean_dec(v_hi_1434_);
lean_dec(v_lo_1433_);
lean_dec(v_n_1432_);
return v_res_1443_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isEquiv(lean_object* v_u_1444_, lean_object* v_v_1445_){
_start:
{
uint8_t v___x_1446_; 
v___x_1446_ = lean_level_eq(v_u_1444_, v_v_1445_);
if (v___x_1446_ == 0)
{
lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; 
v___x_1447_ = l_Lean_Level_normalize(v_u_1444_);
v___x_1448_ = l_Lean_Level_normalize(v_v_1445_);
v___x_1449_ = lean_level_eq(v___x_1447_, v___x_1448_);
lean_dec(v___x_1448_);
lean_dec(v___x_1447_);
return v___x_1449_;
}
else
{
return v___x_1446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isEquiv___boxed(lean_object* v_u_1450_, lean_object* v_v_1451_){
_start:
{
uint8_t v_res_1452_; lean_object* v_r_1453_; 
v_res_1452_ = l_Lean_Level_isEquiv(v_u_1450_, v_v_1451_);
lean_dec(v_v_1451_);
lean_dec(v_u_1450_);
v_r_1453_ = lean_box(v_res_1452_);
return v_r_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_dec(lean_object* v_x_1454_){
_start:
{
lean_object* v_l_u2081_1456_; lean_object* v_l_u2082_1457_; 
switch(lean_obj_tag(v_x_1454_))
{
case 0:
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_box(0);
return v___x_1470_;
}
case 1:
{
lean_object* v_a_1471_; lean_object* v___x_1472_; 
v_a_1471_ = lean_ctor_get(v_x_1454_, 0);
lean_inc(v_a_1471_);
v___x_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1472_, 0, v_a_1471_);
return v___x_1472_;
}
case 2:
{
lean_object* v_a_1473_; lean_object* v_a_1474_; 
v_a_1473_ = lean_ctor_get(v_x_1454_, 0);
v_a_1474_ = lean_ctor_get(v_x_1454_, 1);
v_l_u2081_1456_ = v_a_1473_;
v_l_u2082_1457_ = v_a_1474_;
goto v___jp_1455_;
}
case 3:
{
lean_object* v_a_1475_; lean_object* v_a_1476_; 
v_a_1475_ = lean_ctor_get(v_x_1454_, 0);
v_a_1476_ = lean_ctor_get(v_x_1454_, 1);
v_l_u2081_1456_ = v_a_1475_;
v_l_u2082_1457_ = v_a_1476_;
goto v___jp_1455_;
}
default: 
{
lean_object* v___x_1477_; 
v___x_1477_ = lean_box(0);
return v___x_1477_;
}
}
v___jp_1455_:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lean_Level_dec(v_l_u2081_1456_);
if (lean_obj_tag(v___x_1458_) == 0)
{
return v___x_1458_;
}
else
{
lean_object* v_val_1459_; lean_object* v___x_1460_; 
v_val_1459_ = lean_ctor_get(v___x_1458_, 0);
lean_inc(v_val_1459_);
lean_dec_ref_known(v___x_1458_, 1);
v___x_1460_ = l_Lean_Level_dec(v_l_u2082_1457_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_dec(v_val_1459_);
return v___x_1460_;
}
else
{
lean_object* v_val_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1469_; 
v_val_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1469_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_val_1461_);
lean_dec(v___x_1460_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1469_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1465_; lean_object* v___x_1467_; 
v___x_1465_ = l_Lean_Level_max___override(v_val_1459_, v_val_1461_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1465_);
v___x_1467_ = v___x_1463_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_dec___boxed(lean_object* v_x_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_Lean_Level_dec(v_x_1478_);
lean_dec(v_x_1478_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorIdx(lean_object* v_x_1480_){
_start:
{
switch(lean_obj_tag(v_x_1480_))
{
case 0:
{
lean_object* v___x_1481_; 
v___x_1481_ = lean_unsigned_to_nat(0u);
return v___x_1481_;
}
case 1:
{
lean_object* v___x_1482_; 
v___x_1482_ = lean_unsigned_to_nat(1u);
return v___x_1482_;
}
case 2:
{
lean_object* v___x_1483_; 
v___x_1483_ = lean_unsigned_to_nat(2u);
return v___x_1483_;
}
case 3:
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_unsigned_to_nat(3u);
return v___x_1484_;
}
default: 
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_unsigned_to_nat(4u);
return v___x_1485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorIdx___boxed(lean_object* v_x_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Lean_Level_PP_Result_ctorIdx(v_x_1486_);
lean_dec_ref(v_x_1486_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim___redArg(lean_object* v_t_1488_, lean_object* v_k_1489_){
_start:
{
if (lean_obj_tag(v_t_1488_) == 2)
{
lean_object* v_a_1490_; lean_object* v_a_1491_; lean_object* v___x_1492_; 
v_a_1490_ = lean_ctor_get(v_t_1488_, 0);
lean_inc_ref(v_a_1490_);
v_a_1491_ = lean_ctor_get(v_t_1488_, 1);
lean_inc(v_a_1491_);
lean_dec_ref_known(v_t_1488_, 2);
v___x_1492_ = lean_apply_2(v_k_1489_, v_a_1490_, v_a_1491_);
return v___x_1492_;
}
else
{
lean_object* v_a_1493_; lean_object* v___x_1494_; 
v_a_1493_ = lean_ctor_get(v_t_1488_, 0);
lean_inc(v_a_1493_);
lean_dec_ref(v_t_1488_);
v___x_1494_ = lean_apply_1(v_k_1489_, v_a_1493_);
return v___x_1494_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim(lean_object* v_motive__1_1495_, lean_object* v_ctorIdx_1496_, lean_object* v_t_1497_, lean_object* v_h_1498_, lean_object* v_k_1499_){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1497_, v_k_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim___boxed(lean_object* v_motive__1_1501_, lean_object* v_ctorIdx_1502_, lean_object* v_t_1503_, lean_object* v_h_1504_, lean_object* v_k_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lean_Level_PP_Result_ctorElim(v_motive__1_1501_, v_ctorIdx_1502_, v_t_1503_, v_h_1504_, v_k_1505_);
lean_dec(v_ctorIdx_1502_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_leaf_elim___redArg(lean_object* v_t_1507_, lean_object* v_leaf_1508_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1507_, v_leaf_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_leaf_elim(lean_object* v_motive__1_1510_, lean_object* v_t_1511_, lean_object* v_h_1512_, lean_object* v_leaf_1513_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1511_, v_leaf_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_num_elim___redArg(lean_object* v_t_1515_, lean_object* v_num_1516_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1515_, v_num_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_num_elim(lean_object* v_motive__1_1518_, lean_object* v_t_1519_, lean_object* v_h_1520_, lean_object* v_num_1521_){
_start:
{
lean_object* v___x_1522_; 
v___x_1522_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1519_, v_num_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_offset_elim___redArg(lean_object* v_t_1523_, lean_object* v_offset_1524_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1523_, v_offset_1524_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_offset_elim(lean_object* v_motive__1_1526_, lean_object* v_t_1527_, lean_object* v_h_1528_, lean_object* v_offset_1529_){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1527_, v_offset_1529_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_maxNode_elim___redArg(lean_object* v_t_1531_, lean_object* v_maxNode_1532_){
_start:
{
lean_object* v___x_1533_; 
v___x_1533_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1531_, v_maxNode_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_maxNode_elim(lean_object* v_motive__1_1534_, lean_object* v_t_1535_, lean_object* v_h_1536_, lean_object* v_maxNode_1537_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1535_, v_maxNode_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imaxNode_elim___redArg(lean_object* v_t_1539_, lean_object* v_imaxNode_1540_){
_start:
{
lean_object* v___x_1541_; 
v___x_1541_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1539_, v_imaxNode_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imaxNode_elim(lean_object* v_motive__1_1542_, lean_object* v_t_1543_, lean_object* v_h_1544_, lean_object* v_imaxNode_1545_){
_start:
{
lean_object* v___x_1546_; 
v___x_1546_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1543_, v_imaxNode_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_succ(lean_object* v_x_1547_){
_start:
{
switch(lean_obj_tag(v_x_1547_))
{
case 2:
{
lean_object* v_a_1548_; lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1558_; 
v_a_1548_ = lean_ctor_get(v_x_1547_, 0);
v_a_1549_ = lean_ctor_get(v_x_1547_, 1);
v_isSharedCheck_1558_ = !lean_is_exclusive(v_x_1547_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1551_ = v_x_1547_;
v_isShared_1552_ = v_isSharedCheck_1558_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_inc(v_a_1548_);
lean_dec(v_x_1547_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1558_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1556_; 
v___x_1553_ = lean_unsigned_to_nat(1u);
v___x_1554_ = lean_nat_add(v_a_1549_, v___x_1553_);
lean_dec(v_a_1549_);
if (v_isShared_1552_ == 0)
{
lean_ctor_set(v___x_1551_, 1, v___x_1554_);
v___x_1556_ = v___x_1551_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v_a_1548_);
lean_ctor_set(v_reuseFailAlloc_1557_, 1, v___x_1554_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
case 1:
{
lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1568_; 
v_a_1559_ = lean_ctor_get(v_x_1547_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_x_1547_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1561_ = v_x_1547_;
v_isShared_1562_ = v_isSharedCheck_1568_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v_x_1547_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1568_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1566_; 
v___x_1563_ = lean_unsigned_to_nat(1u);
v___x_1564_ = lean_nat_add(v_a_1559_, v___x_1563_);
lean_dec(v_a_1559_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v___x_1564_);
v___x_1566_ = v___x_1561_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v___x_1564_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
default: 
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = lean_unsigned_to_nat(1u);
v___x_1570_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1570_, 0, v_x_1547_);
lean_ctor_set(v___x_1570_, 1, v___x_1569_);
return v___x_1570_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_max(lean_object* v_x_1571_, lean_object* v_x_1572_){
_start:
{
if (lean_obj_tag(v_x_1572_) == 3)
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1581_; 
v_a_1573_ = lean_ctor_get(v_x_1572_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v_x_1572_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1575_ = v_x_1572_;
v_isShared_1576_ = v_isSharedCheck_1581_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v_x_1572_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1581_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1577_; lean_object* v___x_1579_; 
v___x_1577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1577_, 0, v_x_1571_);
lean_ctor_set(v___x_1577_, 1, v_a_1573_);
if (v_isShared_1576_ == 0)
{
lean_ctor_set(v___x_1575_, 0, v___x_1577_);
v___x_1579_ = v___x_1575_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1577_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
else
{
lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1582_ = lean_box(0);
v___x_1583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1583_, 0, v_x_1572_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1584_, 0, v_x_1571_);
lean_ctor_set(v___x_1584_, 1, v___x_1583_);
v___x_1585_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
return v___x_1585_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imax(lean_object* v_x_1586_, lean_object* v_x_1587_){
_start:
{
if (lean_obj_tag(v_x_1587_) == 4)
{
lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1596_; 
v_a_1588_ = lean_ctor_get(v_x_1587_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_x_1587_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1590_ = v_x_1587_;
v_isShared_1591_ = v_isSharedCheck_1596_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v_x_1587_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1596_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1592_; lean_object* v___x_1594_; 
v___x_1592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1592_, 0, v_x_1586_);
lean_ctor_set(v___x_1592_, 1, v_a_1588_);
if (v_isShared_1591_ == 0)
{
lean_ctor_set(v___x_1590_, 0, v___x_1592_);
v___x_1594_ = v___x_1590_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1592_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
else
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1597_ = lean_box(0);
v___x_1598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1598_, 0, v_x_1587_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
v___x_1599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1599_, 0, v_x_1586_);
lean_ctor_set(v___x_1599_, 1, v___x_1598_);
v___x_1600_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1599_);
return v___x_1600_;
}
}
}
static lean_object* _init_l_Lean_Level_PP_toResult___closed__5(void){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1609_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__4));
v___x_1610_ = lean_obj_once(&l_Lean_instInhabitedLevelMVarId_default___closed__0, &l_Lean_instInhabitedLevelMVarId_default___closed__0_once, _init_l_Lean_instInhabitedLevelMVarId_default___closed__0);
v___x_1611_ = l_Lean_Name_str___override(v___x_1610_, v___x_1609_);
return v___x_1611_;
}
}
static lean_object* _init_l_Lean_Level_PP_toResult___closed__9(void){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1616_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__8));
v___x_1617_ = lean_obj_once(&l_Lean_instInhabitedLevelMVarId_default___closed__0, &l_Lean_instInhabitedLevelMVarId_default___closed__0_once, _init_l_Lean_instInhabitedLevelMVarId_default___closed__0);
v___x_1618_ = l_Lean_Name_str___override(v___x_1617_, v___x_1616_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_toResult(lean_object* v_l_1619_, lean_object* v_a_1620_){
_start:
{
switch(lean_obj_tag(v_l_1619_))
{
case 0:
{
lean_object* v___x_1621_; 
v___x_1621_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__0));
return v___x_1621_;
}
case 1:
{
lean_object* v_a_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v_a_1622_ = lean_ctor_get(v_l_1619_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v_l_1619_, 1);
v___x_1623_ = l_Lean_Level_PP_toResult(v_a_1622_, v_a_1620_);
v___x_1624_ = l_Lean_Level_PP_Result_succ(v___x_1623_);
return v___x_1624_;
}
case 2:
{
lean_object* v_a_1625_; lean_object* v_a_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
v_a_1625_ = lean_ctor_get(v_l_1619_, 0);
lean_inc(v_a_1625_);
v_a_1626_ = lean_ctor_get(v_l_1619_, 1);
lean_inc(v_a_1626_);
lean_dec_ref_known(v_l_1619_, 2);
v___x_1627_ = l_Lean_Level_PP_toResult(v_a_1625_, v_a_1620_);
v___x_1628_ = l_Lean_Level_PP_toResult(v_a_1626_, v_a_1620_);
v___x_1629_ = l_Lean_Level_PP_Result_max(v___x_1627_, v___x_1628_);
return v___x_1629_;
}
case 3:
{
lean_object* v_a_1630_; lean_object* v_a_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v_a_1630_ = lean_ctor_get(v_l_1619_, 0);
lean_inc(v_a_1630_);
v_a_1631_ = lean_ctor_get(v_l_1619_, 1);
lean_inc(v_a_1631_);
lean_dec_ref_known(v_l_1619_, 2);
v___x_1632_ = l_Lean_Level_PP_toResult(v_a_1630_, v_a_1620_);
v___x_1633_ = l_Lean_Level_PP_toResult(v_a_1631_, v_a_1620_);
v___x_1634_ = l_Lean_Level_PP_Result_imax(v___x_1632_, v___x_1633_);
return v___x_1634_;
}
case 4:
{
lean_object* v_a_1635_; lean_object* v___x_1636_; 
v_a_1635_ = lean_ctor_get(v_l_1619_, 0);
lean_inc(v_a_1635_);
lean_dec_ref_known(v_l_1619_, 1);
v___x_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1636_, 0, v_a_1635_);
return v___x_1636_;
}
default: 
{
uint8_t v_mvars_1637_; 
v_mvars_1637_ = lean_ctor_get_uint8(v_a_1620_, sizeof(void*)*1);
if (v_mvars_1637_ == 0)
{
lean_object* v___x_1638_; 
lean_dec_ref_known(v_l_1619_, 1);
v___x_1638_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__3));
return v___x_1638_;
}
else
{
lean_object* v_a_1639_; lean_object* v_lIndex_x3f_1640_; lean_object* v___x_1641_; 
v_a_1639_ = lean_ctor_get(v_l_1619_, 0);
lean_inc_n(v_a_1639_, 2);
lean_dec_ref_known(v_l_1619_, 1);
v_lIndex_x3f_1640_ = lean_ctor_get(v_a_1620_, 0);
lean_inc_ref(v_lIndex_x3f_1640_);
v___x_1641_ = lean_apply_1(v_lIndex_x3f_1640_, v_a_1639_);
if (lean_obj_tag(v___x_1641_) == 1)
{
lean_object* v_val_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1653_; 
lean_dec(v_a_1639_);
v_val_1642_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1644_ = v___x_1641_;
v_isShared_1645_ = v_isSharedCheck_1653_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_val_1642_);
lean_dec(v___x_1641_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1653_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1651_; 
v___x_1646_ = lean_obj_once(&l_Lean_Level_PP_toResult___closed__5, &l_Lean_Level_PP_toResult___closed__5_once, _init_l_Lean_Level_PP_toResult___closed__5);
v___x_1647_ = lean_unsigned_to_nat(1u);
v___x_1648_ = lean_nat_add(v_val_1642_, v___x_1647_);
lean_dec(v_val_1642_);
v___x_1649_ = l_Lean_Name_num___override(v___x_1646_, v___x_1648_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1649_);
v___x_1651_ = v___x_1644_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v___x_1649_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
else
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
lean_dec(v___x_1641_);
v___x_1654_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__7));
v___x_1655_ = lean_obj_once(&l_Lean_Level_PP_toResult___closed__9, &l_Lean_Level_PP_toResult___closed__9_once, _init_l_Lean_Level_PP_toResult___closed__9);
v___x_1656_ = l_Lean_Name_replacePrefix(v_a_1639_, v___x_1654_, v___x_1655_);
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
return v___x_1657_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_toResult___boxed(lean_object* v_l_1658_, lean_object* v_a_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_Lean_Level_PP_toResult(v_l_1658_, v_a_1659_);
lean_dec_ref(v_a_1659_);
return v_res_1660_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0));
v___x_1663_ = lean_string_length(v___x_1662_);
return v___x_1663_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2(void){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1664_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1, &l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1_once, _init_l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1);
v___x_1665_ = lean_nat_to_int(v___x_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(lean_object* v_x_1670_, uint8_t v_x_1671_){
_start:
{
if (v_x_1671_ == 0)
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; uint8_t v___x_1678_; lean_object* v___x_1679_; 
v___x_1672_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2, &l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2_once, _init_l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2);
v___x_1673_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__3));
v___x_1674_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
lean_ctor_set(v___x_1674_, 1, v_x_1670_);
v___x_1675_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__4));
v___x_1676_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1674_);
lean_ctor_set(v___x_1676_, 1, v___x_1675_);
v___x_1677_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1672_);
lean_ctor_set(v___x_1677_, 1, v___x_1676_);
v___x_1678_ = 0;
v___x_1679_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1679_, 0, v___x_1677_);
lean_ctor_set_uint8(v___x_1679_, sizeof(void*)*1, v___x_1678_);
return v___x_1679_;
}
else
{
return v_x_1670_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___boxed(lean_object* v_x_1680_, lean_object* v_x_1681_){
_start:
{
uint8_t v_x_57__boxed_1682_; lean_object* v_res_1683_; 
v_x_57__boxed_1682_ = lean_unbox(v_x_1681_);
v_res_1683_ = l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(v_x_1680_, v_x_57__boxed_1682_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_format(lean_object* v_x_1693_, uint8_t v_x_1694_){
_start:
{
switch(lean_obj_tag(v_x_1693_))
{
case 0:
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1704_; 
v_a_1695_ = lean_ctor_get(v_x_1693_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v_x_1693_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1697_ = v_x_1693_;
v_isShared_1698_ = v_isSharedCheck_1704_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v_x_1693_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1704_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
uint8_t v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1702_; 
v___x_1699_ = 1;
v___x_1700_ = l_Lean_Name_toString(v_a_1695_, v___x_1699_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set_tag(v___x_1697_, 3);
lean_ctor_set(v___x_1697_, 0, v___x_1700_);
v___x_1702_ = v___x_1697_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1700_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
case 1:
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1713_; 
v_a_1705_ = lean_ctor_get(v_x_1693_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v_x_1693_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1707_ = v_x_1693_;
v_isShared_1708_ = v_isSharedCheck_1713_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v_x_1693_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1713_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1709_; lean_object* v___x_1711_; 
v___x_1709_ = l_Nat_reprFast(v_a_1705_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set_tag(v___x_1707_, 3);
lean_ctor_set(v___x_1707_, 0, v___x_1709_);
v___x_1711_ = v___x_1707_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
case 2:
{
lean_object* v_a_1714_; lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1734_; 
v_a_1714_ = lean_ctor_get(v_x_1693_, 0);
v_a_1715_ = lean_ctor_get(v_x_1693_, 1);
v_isSharedCheck_1734_ = !lean_is_exclusive(v_x_1693_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1717_ = v_x_1693_;
v_isShared_1718_ = v_isSharedCheck_1734_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_inc(v_a_1714_);
lean_dec(v_x_1693_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1734_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v_zero_1719_; uint8_t v_isZero_1720_; 
v_zero_1719_ = lean_unsigned_to_nat(0u);
v_isZero_1720_ = lean_nat_dec_eq(v_a_1715_, v_zero_1719_);
if (v_isZero_1720_ == 1)
{
lean_del_object(v___x_1717_);
lean_dec(v_a_1715_);
v_x_1693_ = v_a_1714_;
goto _start;
}
else
{
lean_object* v_one_1722_; lean_object* v_n_1723_; lean_object* v_f_x27_1724_; lean_object* v___x_1725_; lean_object* v___x_1727_; 
v_one_1722_ = lean_unsigned_to_nat(1u);
v_n_1723_ = lean_nat_sub(v_a_1715_, v_one_1722_);
lean_dec(v_a_1715_);
v_f_x27_1724_ = l_Lean_Level_PP_Result_format(v_a_1714_, v_isZero_1720_);
v___x_1725_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__1));
if (v_isShared_1718_ == 0)
{
lean_ctor_set_tag(v___x_1717_, 5);
lean_ctor_set(v___x_1717_, 1, v___x_1725_);
lean_ctor_set(v___x_1717_, 0, v_f_x27_1724_);
v___x_1727_ = v___x_1717_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_f_x27_1724_);
lean_ctor_set(v_reuseFailAlloc_1733_, 1, v___x_1725_);
v___x_1727_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1728_ = lean_nat_add(v_n_1723_, v_one_1722_);
lean_dec(v_n_1723_);
v___x_1729_ = l_Nat_reprFast(v___x_1728_);
v___x_1730_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
v___x_1731_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1727_);
lean_ctor_set(v___x_1731_, 1, v___x_1730_);
v___x_1732_ = l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(v___x_1731_, v_x_1694_);
return v___x_1732_;
}
}
}
}
case 3:
{
lean_object* v_a_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
v_a_1735_ = lean_ctor_get(v_x_1693_, 0);
lean_inc(v_a_1735_);
lean_dec_ref_known(v_x_1693_, 1);
v___x_1736_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__3));
v___x_1737_ = l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(v_a_1735_);
v___x_1738_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1736_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
v___x_1739_ = 0;
v___x_1740_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1740_, 0, v___x_1738_);
lean_ctor_set_uint8(v___x_1740_, sizeof(void*)*1, v___x_1739_);
v___x_1741_ = l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(v___x_1740_, v_x_1694_);
return v___x_1741_;
}
default: 
{
lean_object* v_a_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; uint8_t v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_a_1742_ = lean_ctor_get(v_x_1693_, 0);
lean_inc(v_a_1742_);
lean_dec_ref_known(v_x_1693_, 1);
v___x_1743_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__5));
v___x_1744_ = l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(v_a_1742_);
v___x_1745_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1743_);
lean_ctor_set(v___x_1745_, 1, v___x_1744_);
v___x_1746_ = 0;
v___x_1747_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1747_, 0, v___x_1745_);
lean_ctor_set_uint8(v___x_1747_, sizeof(void*)*1, v___x_1746_);
v___x_1748_ = l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(v___x_1747_, v_x_1694_);
return v___x_1748_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(lean_object* v_x_1749_){
_start:
{
if (lean_obj_tag(v_x_1749_) == 0)
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_box(0);
return v___x_1750_;
}
else
{
lean_object* v_head_1751_; lean_object* v_tail_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1764_; 
v_head_1751_ = lean_ctor_get(v_x_1749_, 0);
v_tail_1752_ = lean_ctor_get(v_x_1749_, 1);
v_isSharedCheck_1764_ = !lean_is_exclusive(v_x_1749_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1754_ = v_x_1749_;
v_isShared_1755_ = v_isSharedCheck_1764_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_tail_1752_);
lean_inc(v_head_1751_);
lean_dec(v_x_1749_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1764_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1756_; uint8_t v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1760_; 
v___x_1756_ = lean_box(1);
v___x_1757_ = 0;
v___x_1758_ = l_Lean_Level_PP_Result_format(v_head_1751_, v___x_1757_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set_tag(v___x_1754_, 5);
lean_ctor_set(v___x_1754_, 1, v___x_1758_);
lean_ctor_set(v___x_1754_, 0, v___x_1756_);
v___x_1760_ = v___x_1754_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v___x_1756_);
lean_ctor_set(v_reuseFailAlloc_1763_, 1, v___x_1758_);
v___x_1760_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1761_ = l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(v_tail_1752_);
v___x_1762_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1760_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
return v___x_1762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_format___boxed(lean_object* v_x_1765_, lean_object* v_x_1766_){
_start:
{
uint8_t v_x_270__boxed_1767_; lean_object* v_res_1768_; 
v_x_270__boxed_1767_ = lean_unbox(v_x_1766_);
v_res_1768_ = l_Lean_Level_PP_Result_format(v_x_1765_, v_x_270__boxed_1767_);
return v_res_1768_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__0(void){
_start:
{
uint8_t v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = 0;
v___x_1770_ = lean_box(0);
v___x_1771_ = l_Lean_SourceInfo_fromRef(v___x_1770_, v___x_1769_);
return v___x_1771_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__6(void){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1781_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0));
v___x_1782_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_1783_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1782_);
lean_ctor_set(v___x_1783_, 1, v___x_1781_);
return v___x_1783_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__7(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1784_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__0));
v___x_1785_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_1786_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1785_);
lean_ctor_set(v___x_1786_, 1, v___x_1784_);
return v___x_1786_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__12(void){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1799_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__2));
v___x_1800_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_1801_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
lean_ctor_set(v___x_1801_, 1, v___x_1799_);
return v___x_1801_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__15(void){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Array_mkArray0___redArg();
return v___x_1805_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__17(void){
_start:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1811_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__4));
v___x_1812_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_1813_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1812_);
lean_ctor_set(v___x_1813_, 1, v___x_1811_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_quote(lean_object* v_r_1814_, lean_object* v_prec_1815_){
_start:
{
lean_object* v_s_1817_; 
switch(lean_obj_tag(v_r_1814_))
{
case 0:
{
lean_object* v_a_1825_; lean_object* v___x_1826_; 
v_a_1825_ = lean_ctor_get(v_r_1814_, 0);
lean_inc(v_a_1825_);
lean_dec_ref_known(v_r_1814_, 1);
v___x_1826_ = l_Lean_mkIdent(v_a_1825_);
return v___x_1826_;
}
case 1:
{
lean_object* v_a_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v_a_1827_ = lean_ctor_get(v_r_1814_, 0);
lean_inc(v_a_1827_);
lean_dec_ref_known(v_r_1814_, 1);
v___x_1828_ = l_Nat_reprFast(v_a_1827_);
v___x_1829_ = lean_box(2);
v___x_1830_ = l_Lean_Syntax_mkNumLit(v___x_1828_, v___x_1829_);
return v___x_1830_;
}
case 2:
{
lean_object* v_a_1831_; lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1855_; 
v_a_1831_ = lean_ctor_get(v_r_1814_, 0);
v_a_1832_ = lean_ctor_get(v_r_1814_, 1);
v_isSharedCheck_1855_ = !lean_is_exclusive(v_r_1814_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1834_ = v_r_1814_;
v_isShared_1835_ = v_isSharedCheck_1855_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_inc(v_a_1831_);
lean_dec(v_r_1814_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1855_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v_zero_1836_; uint8_t v_isZero_1837_; 
v_zero_1836_ = lean_unsigned_to_nat(0u);
v_isZero_1837_ = lean_nat_dec_eq(v_a_1832_, v_zero_1836_);
if (v_isZero_1837_ == 1)
{
lean_del_object(v___x_1834_);
lean_dec(v_a_1832_);
v_r_1814_ = v_a_1831_;
goto _start;
}
else
{
lean_object* v_one_1839_; lean_object* v_n_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1848_; 
v_one_1839_ = lean_unsigned_to_nat(1u);
v_n_1840_ = lean_nat_sub(v_a_1832_, v_one_1839_);
lean_dec(v_a_1832_);
v___x_1841_ = lean_box(0);
v___x_1842_ = l_Lean_SourceInfo_fromRef(v___x_1841_, v_isZero_1837_);
v___x_1843_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__9));
v___x_1844_ = lean_unsigned_to_nat(65u);
v___x_1845_ = l_Lean_Level_PP_Result_quote(v_a_1831_, v___x_1844_);
v___x_1846_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__10));
lean_inc(v___x_1842_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 1, v___x_1846_);
lean_ctor_set(v___x_1834_, 0, v___x_1842_);
v___x_1848_ = v___x_1834_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1842_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v___x_1846_);
v___x_1848_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1849_ = lean_nat_add(v_n_1840_, v_one_1839_);
lean_dec(v_n_1840_);
v___x_1850_ = l_Nat_reprFast(v___x_1849_);
v___x_1851_ = lean_box(2);
v___x_1852_ = l_Lean_Syntax_mkNumLit(v___x_1850_, v___x_1851_);
v___x_1853_ = l_Lean_Syntax_node3(v___x_1842_, v___x_1843_, v___x_1845_, v___x_1848_, v___x_1852_);
v_s_1817_ = v___x_1853_;
goto v___jp_1816_;
}
}
}
}
case 3:
{
lean_object* v_a_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; size_t v_sz_1863_; size_t v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_a_1856_ = lean_ctor_get(v_r_1814_, 0);
lean_inc(v_a_1856_);
lean_dec_ref_known(v_r_1814_, 1);
v___x_1857_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_1858_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__11));
v___x_1859_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__12, &l_Lean_Level_PP_Result_quote___closed__12_once, _init_l_Lean_Level_PP_Result_quote___closed__12);
v___x_1860_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__14));
v___x_1861_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__15, &l_Lean_Level_PP_Result_quote___closed__15_once, _init_l_Lean_Level_PP_Result_quote___closed__15);
v___x_1862_ = lean_array_mk(v_a_1856_);
v_sz_1863_ = lean_array_size(v___x_1862_);
v___x_1864_ = ((size_t)0ULL);
v___x_1865_ = l_unsafeCast___redArg(v___x_1862_);
lean_dec_ref(v___x_1862_);
v___x_1866_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(v_sz_1863_, v___x_1864_, v___x_1865_);
v___x_1867_ = l_unsafeCast___redArg(v___x_1866_);
lean_dec_ref(v___x_1866_);
v___x_1868_ = l_unsafeCast___redArg(v___x_1867_);
lean_dec(v___x_1867_);
v___x_1869_ = l_Array_append___redArg(v___x_1861_, v___x_1868_);
lean_dec(v___x_1868_);
v___x_1870_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1870_, 0, v___x_1857_);
lean_ctor_set(v___x_1870_, 1, v___x_1860_);
lean_ctor_set(v___x_1870_, 2, v___x_1869_);
v___x_1871_ = l_Lean_Syntax_node2(v___x_1857_, v___x_1858_, v___x_1859_, v___x_1870_);
v_s_1817_ = v___x_1871_;
goto v___jp_1816_;
}
default: 
{
lean_object* v_a_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; size_t v_sz_1879_; size_t v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v_a_1872_ = lean_ctor_get(v_r_1814_, 0);
lean_inc(v_a_1872_);
lean_dec_ref_known(v_r_1814_, 1);
v___x_1873_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_1874_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__16));
v___x_1875_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__17, &l_Lean_Level_PP_Result_quote___closed__17_once, _init_l_Lean_Level_PP_Result_quote___closed__17);
v___x_1876_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__14));
v___x_1877_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__15, &l_Lean_Level_PP_Result_quote___closed__15_once, _init_l_Lean_Level_PP_Result_quote___closed__15);
v___x_1878_ = lean_array_mk(v_a_1872_);
v_sz_1879_ = lean_array_size(v___x_1878_);
v___x_1880_ = ((size_t)0ULL);
v___x_1881_ = l_unsafeCast___redArg(v___x_1878_);
lean_dec_ref(v___x_1878_);
v___x_1882_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(v_sz_1879_, v___x_1880_, v___x_1881_);
v___x_1883_ = l_unsafeCast___redArg(v___x_1882_);
lean_dec_ref(v___x_1882_);
v___x_1884_ = l_unsafeCast___redArg(v___x_1883_);
lean_dec(v___x_1883_);
v___x_1885_ = l_Array_append___redArg(v___x_1877_, v___x_1884_);
lean_dec(v___x_1884_);
v___x_1886_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1873_);
lean_ctor_set(v___x_1886_, 1, v___x_1876_);
lean_ctor_set(v___x_1886_, 2, v___x_1885_);
v___x_1887_ = l_Lean_Syntax_node2(v___x_1873_, v___x_1874_, v___x_1875_, v___x_1886_);
v_s_1817_ = v___x_1887_;
goto v___jp_1816_;
}
}
v___jp_1816_:
{
lean_object* v___x_1818_; uint8_t v___x_1819_; 
v___x_1818_ = lean_unsigned_to_nat(0u);
v___x_1819_ = lean_nat_dec_lt(v___x_1818_, v_prec_1815_);
if (v___x_1819_ == 0)
{
return v_s_1817_;
}
else
{
lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1820_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_1821_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__5));
v___x_1822_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__6, &l_Lean_Level_PP_Result_quote___closed__6_once, _init_l_Lean_Level_PP_Result_quote___closed__6);
v___x_1823_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__7, &l_Lean_Level_PP_Result_quote___closed__7_once, _init_l_Lean_Level_PP_Result_quote___closed__7);
v___x_1824_ = l_Lean_Syntax_node3(v___x_1820_, v___x_1821_, v___x_1822_, v_s_1817_, v___x_1823_);
return v___x_1824_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(size_t v_sz_1888_, size_t v_i_1889_, lean_object* v_bs_1890_){
_start:
{
uint8_t v___x_1891_; 
v___x_1891_ = lean_usize_dec_lt(v_i_1889_, v_sz_1888_);
if (v___x_1891_ == 0)
{
lean_object* v___x_1892_; 
v___x_1892_ = l_unsafeCast___redArg(v_bs_1890_);
lean_dec_ref(v_bs_1890_);
return v___x_1892_;
}
else
{
lean_object* v_v_1893_; lean_object* v___x_1894_; lean_object* v_bs_x27_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; size_t v___x_1899_; size_t v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v_v_1893_ = lean_array_uget(v_bs_1890_, v_i_1889_);
v___x_1894_ = lean_unsigned_to_nat(0u);
v_bs_x27_1895_ = lean_array_uset(v_bs_1890_, v_i_1889_, v___x_1894_);
v___x_1896_ = l_unsafeCast___redArg(v_v_1893_);
lean_dec(v_v_1893_);
v___x_1897_ = lean_unsigned_to_nat(1024u);
v___x_1898_ = l_Lean_Level_PP_Result_quote(v___x_1896_, v___x_1897_);
v___x_1899_ = ((size_t)1ULL);
v___x_1900_ = lean_usize_add(v_i_1889_, v___x_1899_);
v___x_1901_ = l_unsafeCast___redArg(v___x_1898_);
lean_dec(v___x_1898_);
v___x_1902_ = lean_array_uset(v_bs_x27_1895_, v_i_1889_, v___x_1901_);
v_i_1889_ = v___x_1900_;
v_bs_1890_ = v___x_1902_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0___boxed(lean_object* v_sz_1904_, lean_object* v_i_1905_, lean_object* v_bs_1906_){
_start:
{
size_t v_sz_boxed_1907_; size_t v_i_boxed_1908_; lean_object* v_res_1909_; 
v_sz_boxed_1907_ = lean_unbox_usize(v_sz_1904_);
lean_dec(v_sz_1904_);
v_i_boxed_1908_ = lean_unbox_usize(v_i_1905_);
lean_dec(v_i_1905_);
v_res_1909_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(v_sz_boxed_1907_, v_i_boxed_1908_, v_bs_1906_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_quote___boxed(lean_object* v_r_1910_, lean_object* v_prec_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lean_Level_PP_Result_quote(v_r_1910_, v_prec_1911_);
lean_dec(v_prec_1911_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_format(lean_object* v_u_1913_, uint8_t v_mvars_1914_, lean_object* v_lIndex_x3f_1915_){
_start:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; uint8_t v___x_1918_; lean_object* v___x_1919_; 
v___x_1916_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1916_, 0, v_lIndex_x3f_1915_);
lean_ctor_set_uint8(v___x_1916_, sizeof(void*)*1, v_mvars_1914_);
v___x_1917_ = l_Lean_Level_PP_toResult(v_u_1913_, v___x_1916_);
lean_dec_ref_known(v___x_1916_, 1);
v___x_1918_ = 1;
v___x_1919_ = l_Lean_Level_PP_Result_format(v___x_1917_, v___x_1918_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_format___boxed(lean_object* v_u_1920_, lean_object* v_mvars_1921_, lean_object* v_lIndex_x3f_1922_){
_start:
{
uint8_t v_mvars_boxed_1923_; lean_object* v_res_1924_; 
v_mvars_boxed_1923_ = lean_unbox(v_mvars_1921_);
v_res_1924_ = l_Lean_Level_format(v_u_1920_, v_mvars_boxed_1923_, v_lIndex_x3f_1922_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__0(lean_object* v_x_1925_){
_start:
{
lean_object* v___x_1926_; 
v___x_1926_ = lean_box(0);
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__0___boxed(lean_object* v_x_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_Lean_Level_instToFormat___lam__0(v_x_1927_);
lean_dec(v_x_1927_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__1(lean_object* v___f_1929_, lean_object* v_u_1930_){
_start:
{
uint8_t v___x_1931_; lean_object* v___x_1932_; 
v___x_1931_ = 1;
v___x_1932_ = l_Lean_Level_format(v_u_1930_, v___x_1931_, v___f_1929_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instToString___lam__1(lean_object* v___f_1937_, lean_object* v_u_1938_){
_start:
{
uint8_t v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1939_ = 1;
v___x_1940_ = l_Lean_Level_format(v_u_1938_, v___x_1939_, v___f_1937_);
v___x_1941_ = l_Std_Format_defWidth;
v___x_1942_ = lean_unsigned_to_nat(0u);
v___x_1943_ = l_Std_Format_pretty(v___x_1940_, v___x_1941_, v___x_1942_, v___x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_quote(lean_object* v_u_1947_, lean_object* v_prec_1948_, uint8_t v_mvars_1949_, lean_object* v_lIndex_x3f_1950_){
_start:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1951_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1951_, 0, v_lIndex_x3f_1950_);
lean_ctor_set_uint8(v___x_1951_, sizeof(void*)*1, v_mvars_1949_);
v___x_1952_ = l_Lean_Level_PP_toResult(v_u_1947_, v___x_1951_);
lean_dec_ref_known(v___x_1951_, 1);
v___x_1953_ = l_Lean_Level_PP_Result_quote(v___x_1952_, v_prec_1948_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_quote___boxed(lean_object* v_u_1954_, lean_object* v_prec_1955_, lean_object* v_mvars_1956_, lean_object* v_lIndex_x3f_1957_){
_start:
{
uint8_t v_mvars_boxed_1958_; lean_object* v_res_1959_; 
v_mvars_boxed_1958_ = lean_unbox(v_mvars_1956_);
v_res_1959_ = l_Lean_Level_quote(v_u_1954_, v_prec_1955_, v_mvars_boxed_1958_, v_lIndex_x3f_1957_);
lean_dec(v_prec_1955_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instQuoteMkStr1___lam__1(lean_object* v___f_1960_, lean_object* v_u_1961_){
_start:
{
lean_object* v___x_1962_; uint8_t v___x_1963_; lean_object* v___x_1964_; 
v___x_1962_ = lean_unsigned_to_nat(0u);
v___x_1963_ = 1;
v___x_1964_ = l_Lean_Level_quote(v_u_1961_, v___x_1962_, v___x_1963_, v___f_1960_);
return v___x_1964_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(lean_object* v_u_1968_, lean_object* v_v_1969_){
_start:
{
uint8_t v___y_1971_; uint8_t v___x_1977_; 
v___x_1977_ = l_Lean_Level_isExplicit(v_v_1969_);
if (v___x_1977_ == 0)
{
v___y_1971_ = v___x_1977_;
goto v___jp_1970_;
}
else
{
lean_object* v___x_1978_; lean_object* v___x_1979_; uint8_t v___x_1980_; 
v___x_1978_ = l_Lean_Level_getOffset(v_v_1969_);
v___x_1979_ = l_Lean_Level_getOffset(v_u_1968_);
v___x_1980_ = lean_nat_dec_le(v___x_1978_, v___x_1979_);
lean_dec(v___x_1979_);
lean_dec(v___x_1978_);
v___y_1971_ = v___x_1980_;
goto v___jp_1970_;
}
v___jp_1970_:
{
uint8_t v___x_1972_; 
v___x_1972_ = 1;
if (v___y_1971_ == 0)
{
if (lean_obj_tag(v_u_1968_) == 2)
{
lean_object* v_a_1973_; lean_object* v_a_1974_; uint8_t v___x_1975_; 
v_a_1973_ = lean_ctor_get(v_u_1968_, 0);
v_a_1974_ = lean_ctor_get(v_u_1968_, 1);
v___x_1975_ = lean_level_eq(v_v_1969_, v_a_1973_);
if (v___x_1975_ == 0)
{
uint8_t v___x_1976_; 
v___x_1976_ = lean_level_eq(v_v_1969_, v_a_1974_);
return v___x_1976_;
}
else
{
return v___x_1972_;
}
}
else
{
return v___y_1971_;
}
}
else
{
return v___x_1972_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0___boxed(lean_object* v_u_1981_, lean_object* v_v_1982_){
_start:
{
uint8_t v_res_1983_; lean_object* v_r_1984_; 
v_res_1983_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_u_1981_, v_v_1982_);
lean_dec(v_v_1982_);
lean_dec(v_u_1981_);
v_r_1984_ = lean_box(v_res_1983_);
return v_r_1984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore(lean_object* v_u_1985_, lean_object* v_v_1986_, lean_object* v_elseK_1987_){
_start:
{
uint8_t v___x_1988_; 
v___x_1988_ = lean_level_eq(v_u_1985_, v_v_1986_);
if (v___x_1988_ == 0)
{
uint8_t v___x_1989_; 
v___x_1989_ = l_Lean_Level_isZero(v_u_1985_);
if (v___x_1989_ == 0)
{
uint8_t v___x_1990_; 
v___x_1990_ = l_Lean_Level_isZero(v_v_1986_);
if (v___x_1990_ == 0)
{
uint8_t v___x_1991_; 
v___x_1991_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_u_1985_, v_v_1986_);
if (v___x_1991_ == 0)
{
uint8_t v___x_1992_; 
v___x_1992_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_v_1986_, v_u_1985_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; lean_object* v___x_1994_; uint8_t v___x_1995_; 
v___x_1993_ = l_Lean_Level_getLevelOffset(v_u_1985_);
v___x_1994_ = l_Lean_Level_getLevelOffset(v_v_1986_);
v___x_1995_ = lean_level_eq(v___x_1993_, v___x_1994_);
lean_dec(v___x_1994_);
lean_dec(v___x_1993_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1996_ = lean_box(0);
v___x_1997_ = lean_apply_1(v_elseK_1987_, v___x_1996_);
return v___x_1997_;
}
else
{
lean_object* v___x_1998_; lean_object* v___x_1999_; uint8_t v___x_2000_; 
lean_dec_ref(v_elseK_1987_);
v___x_1998_ = l_Lean_Level_getOffset(v_v_1986_);
v___x_1999_ = l_Lean_Level_getOffset(v_u_1985_);
v___x_2000_ = lean_nat_dec_le(v___x_1998_, v___x_1999_);
lean_dec(v___x_1999_);
lean_dec(v___x_1998_);
if (v___x_2000_ == 0)
{
lean_inc(v_v_1986_);
return v_v_1986_;
}
else
{
lean_inc(v_u_1985_);
return v_u_1985_;
}
}
}
else
{
lean_dec_ref(v_elseK_1987_);
lean_inc(v_v_1986_);
return v_v_1986_;
}
}
else
{
lean_dec_ref(v_elseK_1987_);
lean_inc(v_u_1985_);
return v_u_1985_;
}
}
else
{
lean_dec_ref(v_elseK_1987_);
lean_inc(v_u_1985_);
return v_u_1985_;
}
}
else
{
lean_dec_ref(v_elseK_1987_);
lean_inc(v_v_1986_);
return v_v_1986_;
}
}
else
{
lean_dec_ref(v_elseK_1987_);
lean_inc(v_u_1985_);
return v_u_1985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore___boxed(lean_object* v_u_2001_, lean_object* v_v_2002_, lean_object* v_elseK_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore(v_u_2001_, v_v_2002_, v_elseK_2003_);
lean_dec(v_v_2002_);
lean_dec(v_u_2001_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelMax_x27(lean_object* v_u_2005_, lean_object* v_v_2006_){
_start:
{
uint8_t v___x_2007_; 
v___x_2007_ = lean_level_eq(v_u_2005_, v_v_2006_);
if (v___x_2007_ == 0)
{
uint8_t v___x_2008_; 
v___x_2008_ = l_Lean_Level_isZero(v_u_2005_);
if (v___x_2008_ == 0)
{
uint8_t v___x_2009_; 
v___x_2009_ = l_Lean_Level_isZero(v_v_2006_);
if (v___x_2009_ == 0)
{
uint8_t v___x_2010_; 
v___x_2010_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_u_2005_, v_v_2006_);
if (v___x_2010_ == 0)
{
uint8_t v___x_2011_; 
v___x_2011_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_v_2006_, v_u_2005_);
if (v___x_2011_ == 0)
{
lean_object* v___x_2012_; lean_object* v___x_2013_; uint8_t v___x_2014_; 
v___x_2012_ = l_Lean_Level_getLevelOffset(v_u_2005_);
v___x_2013_ = l_Lean_Level_getLevelOffset(v_v_2006_);
v___x_2014_ = lean_level_eq(v___x_2012_, v___x_2013_);
lean_dec(v___x_2013_);
lean_dec(v___x_2012_);
if (v___x_2014_ == 0)
{
lean_object* v___x_2015_; 
v___x_2015_ = l_Lean_Level_max___override(v_u_2005_, v_v_2006_);
return v___x_2015_;
}
else
{
lean_object* v___x_2016_; lean_object* v___x_2017_; uint8_t v___x_2018_; 
v___x_2016_ = l_Lean_Level_getOffset(v_v_2006_);
v___x_2017_ = l_Lean_Level_getOffset(v_u_2005_);
v___x_2018_ = lean_nat_dec_le(v___x_2016_, v___x_2017_);
lean_dec(v___x_2017_);
lean_dec(v___x_2016_);
if (v___x_2018_ == 0)
{
lean_dec(v_u_2005_);
return v_v_2006_;
}
else
{
lean_dec(v_v_2006_);
return v_u_2005_;
}
}
}
else
{
lean_dec(v_u_2005_);
return v_v_2006_;
}
}
else
{
lean_dec(v_v_2006_);
return v_u_2005_;
}
}
else
{
lean_dec(v_v_2006_);
return v_u_2005_;
}
}
else
{
lean_dec(v_u_2005_);
return v_v_2006_;
}
}
else
{
lean_dec(v_v_2006_);
return v_u_2005_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_simpLevelMax_x27(lean_object* v_u_2019_, lean_object* v_v_2020_, lean_object* v_d_2021_){
_start:
{
uint8_t v___x_2022_; 
v___x_2022_ = lean_level_eq(v_u_2019_, v_v_2020_);
if (v___x_2022_ == 0)
{
uint8_t v___x_2023_; 
v___x_2023_ = l_Lean_Level_isZero(v_u_2019_);
if (v___x_2023_ == 0)
{
uint8_t v___x_2024_; 
v___x_2024_ = l_Lean_Level_isZero(v_v_2020_);
if (v___x_2024_ == 0)
{
uint8_t v___x_2025_; 
v___x_2025_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_u_2019_, v_v_2020_);
if (v___x_2025_ == 0)
{
uint8_t v___x_2026_; 
v___x_2026_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_v_2020_, v_u_2019_);
if (v___x_2026_ == 0)
{
lean_object* v___x_2027_; lean_object* v___x_2028_; uint8_t v___x_2029_; 
v___x_2027_ = l_Lean_Level_getLevelOffset(v_u_2019_);
v___x_2028_ = l_Lean_Level_getLevelOffset(v_v_2020_);
v___x_2029_ = lean_level_eq(v___x_2027_, v___x_2028_);
lean_dec(v___x_2028_);
lean_dec(v___x_2027_);
if (v___x_2029_ == 0)
{
lean_inc(v_d_2021_);
return v_d_2021_;
}
else
{
lean_object* v___x_2030_; lean_object* v___x_2031_; uint8_t v___x_2032_; 
v___x_2030_ = l_Lean_Level_getOffset(v_v_2020_);
v___x_2031_ = l_Lean_Level_getOffset(v_u_2019_);
v___x_2032_ = lean_nat_dec_le(v___x_2030_, v___x_2031_);
lean_dec(v___x_2031_);
lean_dec(v___x_2030_);
if (v___x_2032_ == 0)
{
lean_inc(v_v_2020_);
return v_v_2020_;
}
else
{
lean_inc(v_u_2019_);
return v_u_2019_;
}
}
}
else
{
lean_inc(v_v_2020_);
return v_v_2020_;
}
}
else
{
lean_inc(v_u_2019_);
return v_u_2019_;
}
}
else
{
lean_inc(v_u_2019_);
return v_u_2019_;
}
}
else
{
lean_inc(v_v_2020_);
return v_v_2020_;
}
}
else
{
lean_inc(v_u_2019_);
return v_u_2019_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_simpLevelMax_x27___boxed(lean_object* v_u_2033_, lean_object* v_v_2034_, lean_object* v_d_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = l_Lean_simpLevelMax_x27(v_u_2033_, v_v_2034_, v_d_2035_);
lean_dec(v_d_2035_);
lean_dec(v_v_2034_);
lean_dec(v_u_2033_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelIMaxCore(lean_object* v_u_2037_, lean_object* v_v_2038_, lean_object* v_elseK_2039_){
_start:
{
uint8_t v___x_2040_; 
v___x_2040_ = l_Lean_Level_isNeverZero(v_v_2038_);
if (v___x_2040_ == 0)
{
uint8_t v___x_2041_; 
v___x_2041_ = l_Lean_Level_isZero(v_v_2038_);
if (v___x_2041_ == 0)
{
uint8_t v___x_2042_; 
v___x_2042_ = l_Lean_Level_isZero(v_u_2037_);
if (v___x_2042_ == 0)
{
uint8_t v___x_2043_; 
v___x_2043_ = lean_level_eq(v_u_2037_, v_v_2038_);
lean_dec(v_v_2038_);
if (v___x_2043_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
lean_dec(v_u_2037_);
v___x_2044_ = lean_box(0);
v___x_2045_ = lean_apply_1(v_elseK_2039_, v___x_2044_);
return v___x_2045_;
}
else
{
lean_dec_ref(v_elseK_2039_);
return v_u_2037_;
}
}
else
{
lean_dec_ref(v_elseK_2039_);
lean_dec(v_u_2037_);
return v_v_2038_;
}
}
else
{
lean_dec_ref(v_elseK_2039_);
lean_dec(v_u_2037_);
return v_v_2038_;
}
}
else
{
lean_object* v___x_2046_; 
lean_dec_ref(v_elseK_2039_);
v___x_2046_ = l_Lean_mkLevelMax_x27(v_u_2037_, v_v_2038_);
return v___x_2046_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelIMax_x27(lean_object* v_u_2047_, lean_object* v_v_2048_){
_start:
{
uint8_t v___x_2049_; 
v___x_2049_ = l_Lean_Level_isNeverZero(v_v_2048_);
if (v___x_2049_ == 0)
{
uint8_t v___x_2050_; 
v___x_2050_ = l_Lean_Level_isZero(v_v_2048_);
if (v___x_2050_ == 0)
{
uint8_t v___x_2051_; 
v___x_2051_ = l_Lean_Level_isZero(v_u_2047_);
if (v___x_2051_ == 0)
{
uint8_t v___x_2052_; 
v___x_2052_ = lean_level_eq(v_u_2047_, v_v_2048_);
if (v___x_2052_ == 0)
{
lean_object* v___x_2053_; 
v___x_2053_ = l_Lean_Level_imax___override(v_u_2047_, v_v_2048_);
return v___x_2053_;
}
else
{
lean_dec(v_v_2048_);
return v_u_2047_;
}
}
else
{
lean_dec(v_u_2047_);
return v_v_2048_;
}
}
else
{
lean_dec(v_u_2047_);
return v_v_2048_;
}
}
else
{
lean_object* v___x_2054_; 
v___x_2054_ = l_Lean_mkLevelMax_x27(v_u_2047_, v_v_2048_);
return v___x_2054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_simpLevelIMax_x27(lean_object* v_u_2055_, lean_object* v_v_2056_, lean_object* v_d_2057_){
_start:
{
uint8_t v___x_2058_; 
v___x_2058_ = l_Lean_Level_isNeverZero(v_v_2056_);
if (v___x_2058_ == 0)
{
uint8_t v___x_2059_; 
v___x_2059_ = l_Lean_Level_isZero(v_v_2056_);
if (v___x_2059_ == 0)
{
uint8_t v___x_2060_; 
v___x_2060_ = l_Lean_Level_isZero(v_u_2055_);
if (v___x_2060_ == 0)
{
uint8_t v___x_2061_; 
v___x_2061_ = lean_level_eq(v_u_2055_, v_v_2056_);
lean_dec(v_v_2056_);
if (v___x_2061_ == 0)
{
lean_dec(v_u_2055_);
lean_inc(v_d_2057_);
return v_d_2057_;
}
else
{
return v_u_2055_;
}
}
else
{
lean_dec(v_u_2055_);
return v_v_2056_;
}
}
else
{
lean_dec(v_u_2055_);
return v_v_2056_;
}
}
else
{
lean_object* v___x_2062_; 
v___x_2062_ = l_Lean_mkLevelMax_x27(v_u_2055_, v_v_2056_);
return v___x_2062_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_simpLevelIMax_x27___boxed(lean_object* v_u_2063_, lean_object* v_v_2064_, lean_object* v_d_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Lean_simpLevelIMax_x27(v_u_2063_, v_v_2064_, v_d_2065_);
lean_dec(v_d_2065_);
return v_res_2066_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2069_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__1));
v___x_2070_ = lean_unsigned_to_nat(14u);
v___x_2071_ = lean_unsigned_to_nat(567u);
v___x_2072_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__0));
v___x_2073_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_2074_ = l_mkPanicMessageWithDecl(v___x_2073_, v___x_2072_, v___x_2071_, v___x_2070_, v___x_2069_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl(lean_object* v_lvl_2075_, lean_object* v_newLvl_2076_){
_start:
{
if (lean_obj_tag(v_lvl_2075_) == 1)
{
lean_object* v_a_2077_; size_t v___x_2078_; size_t v___x_2079_; uint8_t v___x_2080_; 
v_a_2077_ = lean_ctor_get(v_lvl_2075_, 0);
v___x_2078_ = lean_ptr_addr(v_a_2077_);
v___x_2079_ = lean_ptr_addr(v_newLvl_2076_);
v___x_2080_ = lean_usize_dec_eq(v___x_2078_, v___x_2079_);
if (v___x_2080_ == 0)
{
lean_object* v___x_2081_; 
v___x_2081_ = l_Lean_Level_succ___override(v_newLvl_2076_);
return v___x_2081_;
}
else
{
lean_dec(v_newLvl_2076_);
lean_inc_ref(v_lvl_2075_);
return v_lvl_2075_;
}
}
else
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
lean_dec(v_newLvl_2076_);
v___x_2082_ = l_Lean_instInhabitedLevel;
v___x_2083_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2, &l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2_once, _init_l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2);
v___x_2084_ = l_panic___redArg(v___x_2082_, v___x_2083_);
return v___x_2084_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___boxed(lean_object* v_lvl_2085_, lean_object* v_newLvl_2086_){
_start:
{
lean_object* v_res_2087_; 
v_res_2087_ = l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl(v_lvl_2085_, v_newLvl_2086_);
lean_dec(v_lvl_2085_);
return v_res_2087_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2090_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__1));
v___x_2091_ = lean_unsigned_to_nat(19u);
v___x_2092_ = lean_unsigned_to_nat(578u);
v___x_2093_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__0));
v___x_2094_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_2095_ = l_mkPanicMessageWithDecl(v___x_2094_, v___x_2093_, v___x_2092_, v___x_2091_, v___x_2090_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl(lean_object* v_lvl_2096_, lean_object* v_newLhs_2097_, lean_object* v_newRhs_2098_){
_start:
{
if (lean_obj_tag(v_lvl_2096_) == 2)
{
lean_object* v_a_2099_; lean_object* v_a_2100_; size_t v___x_2101_; size_t v___x_2102_; uint8_t v___x_2103_; 
v_a_2099_ = lean_ctor_get(v_lvl_2096_, 0);
v_a_2100_ = lean_ctor_get(v_lvl_2096_, 1);
v___x_2101_ = lean_ptr_addr(v_a_2099_);
v___x_2102_ = lean_ptr_addr(v_newLhs_2097_);
v___x_2103_ = lean_usize_dec_eq(v___x_2101_, v___x_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; 
v___x_2104_ = l_Lean_mkLevelMax_x27(v_newLhs_2097_, v_newRhs_2098_);
return v___x_2104_;
}
else
{
size_t v___x_2105_; size_t v___x_2106_; uint8_t v___x_2107_; 
v___x_2105_ = lean_ptr_addr(v_a_2100_);
v___x_2106_ = lean_ptr_addr(v_newRhs_2098_);
v___x_2107_ = lean_usize_dec_eq(v___x_2105_, v___x_2106_);
if (v___x_2107_ == 0)
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_mkLevelMax_x27(v_newLhs_2097_, v_newRhs_2098_);
return v___x_2108_;
}
else
{
lean_object* v___x_2109_; 
v___x_2109_ = l_Lean_simpLevelMax_x27(v_newLhs_2097_, v_newRhs_2098_, v_lvl_2096_);
lean_dec(v_newRhs_2098_);
lean_dec(v_newLhs_2097_);
return v___x_2109_;
}
}
}
else
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
lean_dec(v_newRhs_2098_);
lean_dec(v_newLhs_2097_);
v___x_2110_ = l_Lean_instInhabitedLevel;
v___x_2111_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2, &l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2_once, _init_l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2);
v___x_2112_ = l_panic___redArg(v___x_2110_, v___x_2111_);
return v___x_2112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___boxed(lean_object* v_lvl_2113_, lean_object* v_newLhs_2114_, lean_object* v_newRhs_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl(v_lvl_2113_, v_newLhs_2114_, v_newRhs_2115_);
lean_dec(v_lvl_2113_);
return v_res_2116_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2119_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__1));
v___x_2120_ = lean_unsigned_to_nat(20u);
v___x_2121_ = lean_unsigned_to_nat(589u);
v___x_2122_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__0));
v___x_2123_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_2124_ = l_mkPanicMessageWithDecl(v___x_2123_, v___x_2122_, v___x_2121_, v___x_2120_, v___x_2119_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl(lean_object* v_lvl_2125_, lean_object* v_newLhs_2126_, lean_object* v_newRhs_2127_){
_start:
{
if (lean_obj_tag(v_lvl_2125_) == 3)
{
lean_object* v_a_2128_; lean_object* v_a_2129_; size_t v___x_2130_; size_t v___x_2131_; uint8_t v___x_2132_; 
v_a_2128_ = lean_ctor_get(v_lvl_2125_, 0);
v_a_2129_ = lean_ctor_get(v_lvl_2125_, 1);
v___x_2130_ = lean_ptr_addr(v_a_2128_);
v___x_2131_ = lean_ptr_addr(v_newLhs_2126_);
v___x_2132_ = lean_usize_dec_eq(v___x_2130_, v___x_2131_);
if (v___x_2132_ == 0)
{
lean_object* v___x_2133_; 
v___x_2133_ = l_Lean_mkLevelIMax_x27(v_newLhs_2126_, v_newRhs_2127_);
return v___x_2133_;
}
else
{
size_t v___x_2134_; size_t v___x_2135_; uint8_t v___x_2136_; 
v___x_2134_ = lean_ptr_addr(v_a_2129_);
v___x_2135_ = lean_ptr_addr(v_newRhs_2127_);
v___x_2136_ = lean_usize_dec_eq(v___x_2134_, v___x_2135_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Lean_mkLevelIMax_x27(v_newLhs_2126_, v_newRhs_2127_);
return v___x_2137_;
}
else
{
lean_object* v___x_2138_; 
v___x_2138_ = l_Lean_simpLevelIMax_x27(v_newLhs_2126_, v_newRhs_2127_, v_lvl_2125_);
return v___x_2138_;
}
}
}
else
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
lean_dec(v_newRhs_2127_);
lean_dec(v_newLhs_2126_);
v___x_2139_ = l_Lean_instInhabitedLevel;
v___x_2140_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2, &l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2_once, _init_l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2);
v___x_2141_ = l_panic___redArg(v___x_2139_, v___x_2140_);
return v___x_2141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___boxed(lean_object* v_lvl_2142_, lean_object* v_newLhs_2143_, lean_object* v_newRhs_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl(v_lvl_2142_, v_newLhs_2143_, v_newRhs_2144_);
lean_dec(v_lvl_2142_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mkNaryMax(lean_object* v_x_2146_){
_start:
{
if (lean_obj_tag(v_x_2146_) == 0)
{
lean_object* v___x_2147_; 
v___x_2147_ = lean_obj_once(&l_Lean_Level_zero___override___closed__0, &l_Lean_Level_zero___override___closed__0_once, _init_l_Lean_Level_zero___override___closed__0);
return v___x_2147_;
}
else
{
lean_object* v_tail_2148_; 
v_tail_2148_ = lean_ctor_get(v_x_2146_, 1);
if (lean_obj_tag(v_tail_2148_) == 0)
{
lean_object* v_head_2149_; 
v_head_2149_ = lean_ctor_get(v_x_2146_, 0);
lean_inc(v_head_2149_);
lean_dec_ref_known(v_x_2146_, 2);
return v_head_2149_;
}
else
{
lean_object* v_head_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
lean_inc(v_tail_2148_);
v_head_2150_ = lean_ctor_get(v_x_2146_, 0);
lean_inc(v_head_2150_);
lean_dec_ref_known(v_x_2146_, 2);
v___x_2151_ = l_Lean_Level_mkNaryMax(v_tail_2148_);
v___x_2152_ = l_Lean_mkLevelMax_x27(v_head_2150_, v___x_2151_);
return v___x_2152_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_substParams_go(lean_object* v_s_2153_, lean_object* v_u_2154_){
_start:
{
switch(lean_obj_tag(v_u_2154_))
{
case 0:
{
lean_dec_ref(v_s_2153_);
return v_u_2154_;
}
case 1:
{
lean_object* v_a_2155_; uint8_t v___x_2156_; 
v_a_2155_ = lean_ctor_get(v_u_2154_, 0);
v___x_2156_ = l_Lean_Level_hasParam(v_u_2154_);
if (v___x_2156_ == 0)
{
lean_dec_ref(v_s_2153_);
return v_u_2154_;
}
else
{
lean_object* v___x_2157_; size_t v___x_2158_; size_t v___x_2159_; uint8_t v___x_2160_; 
lean_inc(v_a_2155_);
v___x_2157_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2153_, v_a_2155_);
v___x_2158_ = lean_ptr_addr(v_a_2155_);
v___x_2159_ = lean_ptr_addr(v___x_2157_);
v___x_2160_ = lean_usize_dec_eq(v___x_2158_, v___x_2159_);
if (v___x_2160_ == 0)
{
lean_object* v___x_2161_; 
lean_dec_ref_known(v_u_2154_, 1);
v___x_2161_ = l_Lean_Level_succ___override(v___x_2157_);
return v___x_2161_;
}
else
{
lean_dec(v___x_2157_);
return v_u_2154_;
}
}
}
case 2:
{
lean_object* v_a_2162_; lean_object* v_a_2163_; uint8_t v___x_2164_; 
v_a_2162_ = lean_ctor_get(v_u_2154_, 0);
v_a_2163_ = lean_ctor_get(v_u_2154_, 1);
v___x_2164_ = l_Lean_Level_hasParam(v_u_2154_);
if (v___x_2164_ == 0)
{
lean_dec_ref(v_s_2153_);
return v_u_2154_;
}
else
{
lean_object* v___x_2165_; lean_object* v___x_2166_; size_t v___x_2167_; size_t v___x_2168_; uint8_t v___x_2169_; 
lean_inc(v_a_2162_);
lean_inc_ref(v_s_2153_);
v___x_2165_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2153_, v_a_2162_);
lean_inc(v_a_2163_);
v___x_2166_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2153_, v_a_2163_);
v___x_2167_ = lean_ptr_addr(v_a_2162_);
v___x_2168_ = lean_ptr_addr(v___x_2165_);
v___x_2169_ = lean_usize_dec_eq(v___x_2167_, v___x_2168_);
if (v___x_2169_ == 0)
{
lean_object* v___x_2170_; 
lean_dec_ref_known(v_u_2154_, 2);
v___x_2170_ = l_Lean_mkLevelMax_x27(v___x_2165_, v___x_2166_);
return v___x_2170_;
}
else
{
size_t v___x_2171_; size_t v___x_2172_; uint8_t v___x_2173_; 
v___x_2171_ = lean_ptr_addr(v_a_2163_);
v___x_2172_ = lean_ptr_addr(v___x_2166_);
v___x_2173_ = lean_usize_dec_eq(v___x_2171_, v___x_2172_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; 
lean_dec_ref_known(v_u_2154_, 2);
v___x_2174_ = l_Lean_mkLevelMax_x27(v___x_2165_, v___x_2166_);
return v___x_2174_;
}
else
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Lean_simpLevelMax_x27(v___x_2165_, v___x_2166_, v_u_2154_);
lean_dec_ref_known(v_u_2154_, 2);
lean_dec(v___x_2166_);
lean_dec(v___x_2165_);
return v___x_2175_;
}
}
}
}
case 3:
{
lean_object* v_a_2176_; lean_object* v_a_2177_; uint8_t v___x_2178_; 
v_a_2176_ = lean_ctor_get(v_u_2154_, 0);
v_a_2177_ = lean_ctor_get(v_u_2154_, 1);
v___x_2178_ = l_Lean_Level_hasParam(v_u_2154_);
if (v___x_2178_ == 0)
{
lean_dec_ref(v_s_2153_);
return v_u_2154_;
}
else
{
lean_object* v___x_2179_; lean_object* v___x_2180_; size_t v___x_2181_; size_t v___x_2182_; uint8_t v___x_2183_; 
lean_inc(v_a_2176_);
lean_inc_ref(v_s_2153_);
v___x_2179_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2153_, v_a_2176_);
lean_inc(v_a_2177_);
v___x_2180_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2153_, v_a_2177_);
v___x_2181_ = lean_ptr_addr(v_a_2176_);
v___x_2182_ = lean_ptr_addr(v___x_2179_);
v___x_2183_ = lean_usize_dec_eq(v___x_2181_, v___x_2182_);
if (v___x_2183_ == 0)
{
lean_object* v___x_2184_; 
lean_dec_ref_known(v_u_2154_, 2);
v___x_2184_ = l_Lean_mkLevelIMax_x27(v___x_2179_, v___x_2180_);
return v___x_2184_;
}
else
{
size_t v___x_2185_; size_t v___x_2186_; uint8_t v___x_2187_; 
v___x_2185_ = lean_ptr_addr(v_a_2177_);
v___x_2186_ = lean_ptr_addr(v___x_2180_);
v___x_2187_ = lean_usize_dec_eq(v___x_2185_, v___x_2186_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; 
lean_dec_ref_known(v_u_2154_, 2);
v___x_2188_ = l_Lean_mkLevelIMax_x27(v___x_2179_, v___x_2180_);
return v___x_2188_;
}
else
{
lean_object* v___x_2189_; 
v___x_2189_ = l_Lean_simpLevelIMax_x27(v___x_2179_, v___x_2180_, v_u_2154_);
lean_dec_ref_known(v_u_2154_, 2);
return v___x_2189_;
}
}
}
}
case 4:
{
lean_object* v_a_2190_; lean_object* v___x_2191_; 
v_a_2190_ = lean_ctor_get(v_u_2154_, 0);
lean_inc(v_a_2190_);
v___x_2191_ = lean_apply_1(v_s_2153_, v_a_2190_);
if (lean_obj_tag(v___x_2191_) == 0)
{
return v_u_2154_;
}
else
{
lean_object* v_val_2192_; 
lean_dec_ref_known(v_u_2154_, 1);
v_val_2192_ = lean_ctor_get(v___x_2191_, 0);
lean_inc(v_val_2192_);
lean_dec_ref_known(v___x_2191_, 1);
return v_val_2192_;
}
}
default: 
{
lean_dec_ref(v_s_2153_);
return v_u_2154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_substParams(lean_object* v_u_2193_, lean_object* v_s_2194_){
_start:
{
lean_object* v___x_2195_; 
v___x_2195_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2194_, v_u_2193_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getParamSubst(lean_object* v_x_2196_, lean_object* v_x_2197_, lean_object* v_x_2198_){
_start:
{
if (lean_obj_tag(v_x_2196_) == 1)
{
if (lean_obj_tag(v_x_2197_) == 1)
{
lean_object* v_head_2199_; lean_object* v_tail_2200_; lean_object* v_head_2201_; lean_object* v_tail_2202_; uint8_t v___x_2203_; 
v_head_2199_ = lean_ctor_get(v_x_2196_, 0);
v_tail_2200_ = lean_ctor_get(v_x_2196_, 1);
v_head_2201_ = lean_ctor_get(v_x_2197_, 0);
v_tail_2202_ = lean_ctor_get(v_x_2197_, 1);
v___x_2203_ = lean_name_eq(v_head_2199_, v_x_2198_);
if (v___x_2203_ == 0)
{
v_x_2196_ = v_tail_2200_;
v_x_2197_ = v_tail_2202_;
goto _start;
}
else
{
lean_object* v___x_2205_; 
lean_inc(v_head_2201_);
v___x_2205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2205_, 0, v_head_2201_);
return v___x_2205_;
}
}
else
{
lean_object* v___x_2206_; 
v___x_2206_ = lean_box(0);
return v___x_2206_;
}
}
else
{
lean_object* v___x_2207_; 
v___x_2207_ = lean_box(0);
return v___x_2207_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getParamSubst___boxed(lean_object* v_x_2208_, lean_object* v_x_2209_, lean_object* v_x_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lean_Level_getParamSubst(v_x_2208_, v_x_2209_, v_x_2210_);
lean_dec(v_x_2210_);
lean_dec(v_x_2209_);
lean_dec(v_x_2208_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instantiateParams(lean_object* v_u_2212_, lean_object* v_paramNames_2213_, lean_object* v_vs_2214_){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = lean_alloc_closure((void*)(l_Lean_Level_getParamSubst___boxed), 3, 2);
lean_closure_set(v___x_2215_, 0, v_paramNames_2213_);
lean_closure_set(v___x_2215_, 1, v_vs_2214_);
v___x_2216_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v___x_2215_, v_u_2212_);
return v___x_2216_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_geq_go(lean_object* v_u_2217_, lean_object* v_v_2218_){
_start:
{
uint8_t v___y_2220_; uint8_t v___y_2234_; lean_object* v_u_u2081_2236_; lean_object* v_u_u2082_2237_; lean_object* v_v_2238_; uint8_t v___x_2241_; 
v___x_2241_ = lean_level_eq(v_u_2217_, v_v_2218_);
if (v___x_2241_ == 0)
{
switch(lean_obj_tag(v_v_2218_))
{
case 0:
{
uint8_t v___x_2242_; 
v___x_2242_ = 1;
return v___x_2242_;
}
case 2:
{
lean_object* v_a_2243_; lean_object* v_a_2244_; uint8_t v___x_2245_; 
v_a_2243_ = lean_ctor_get(v_v_2218_, 0);
v_a_2244_ = lean_ctor_get(v_v_2218_, 1);
v___x_2245_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_2217_, v_a_2243_);
if (v___x_2245_ == 0)
{
return v___x_2245_;
}
else
{
v_v_2218_ = v_a_2244_;
goto _start;
}
}
case 1:
{
switch(lean_obj_tag(v_u_2217_))
{
case 2:
{
lean_object* v_a_2247_; lean_object* v_a_2248_; 
v_a_2247_ = lean_ctor_get(v_u_2217_, 0);
v_a_2248_ = lean_ctor_get(v_u_2217_, 1);
v_u_u2081_2236_ = v_a_2247_;
v_u_u2082_2237_ = v_a_2248_;
v_v_2238_ = v_v_2218_;
goto v___jp_2235_;
}
case 3:
{
lean_object* v_a_2249_; 
v_a_2249_ = lean_ctor_get(v_u_2217_, 1);
v_u_2217_ = v_a_2249_;
goto _start;
}
case 1:
{
lean_object* v_a_2251_; lean_object* v_a_2252_; 
v_a_2251_ = lean_ctor_get(v_v_2218_, 0);
v_a_2252_ = lean_ctor_get(v_u_2217_, 0);
v_u_2217_ = v_a_2252_;
v_v_2218_ = v_a_2251_;
goto _start;
}
default: 
{
goto v___jp_2224_;
}
}
}
default: 
{
switch(lean_obj_tag(v_u_2217_))
{
case 2:
{
lean_object* v_a_2254_; lean_object* v_a_2255_; 
v_a_2254_ = lean_ctor_get(v_u_2217_, 0);
v_a_2255_ = lean_ctor_get(v_u_2217_, 1);
v_u_u2081_2236_ = v_a_2254_;
v_u_u2082_2237_ = v_a_2255_;
v_v_2238_ = v_v_2218_;
goto v___jp_2235_;
}
case 3:
{
lean_object* v_a_2256_; 
v_a_2256_ = lean_ctor_get(v_u_2217_, 1);
v_u_2217_ = v_a_2256_;
goto _start;
}
default: 
{
goto v___jp_2224_;
}
}
}
}
}
else
{
return v___x_2241_;
}
v___jp_2219_:
{
if (v___y_2220_ == 0)
{
return v___y_2220_;
}
else
{
lean_object* v___x_2221_; lean_object* v___x_2222_; uint8_t v___x_2223_; 
v___x_2221_ = l_Lean_Level_getOffset(v_v_2218_);
v___x_2222_ = l_Lean_Level_getOffset(v_u_2217_);
v___x_2223_ = lean_nat_dec_le(v___x_2221_, v___x_2222_);
lean_dec(v___x_2222_);
lean_dec(v___x_2221_);
return v___x_2223_;
}
}
v___jp_2224_:
{
if (lean_obj_tag(v_v_2218_) == 3)
{
lean_object* v_a_2225_; lean_object* v_a_2226_; uint8_t v___x_2227_; 
v_a_2225_ = lean_ctor_get(v_v_2218_, 0);
v_a_2226_ = lean_ctor_get(v_v_2218_, 1);
v___x_2227_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_2217_, v_a_2225_);
if (v___x_2227_ == 0)
{
return v___x_2227_;
}
else
{
v_v_2218_ = v_a_2226_;
goto _start;
}
}
else
{
lean_object* v_v_x27_2229_; lean_object* v___x_2230_; uint8_t v___x_2231_; 
v_v_x27_2229_ = l_Lean_Level_getLevelOffset(v_v_2218_);
v___x_2230_ = l_Lean_Level_getLevelOffset(v_u_2217_);
v___x_2231_ = lean_level_eq(v___x_2230_, v_v_x27_2229_);
lean_dec(v___x_2230_);
if (v___x_2231_ == 0)
{
uint8_t v___x_2232_; 
v___x_2232_ = l_Lean_Level_isZero(v_v_x27_2229_);
lean_dec(v_v_x27_2229_);
v___y_2220_ = v___x_2232_;
goto v___jp_2219_;
}
else
{
lean_dec(v_v_x27_2229_);
v___y_2220_ = v___x_2231_;
goto v___jp_2219_;
}
}
}
v___jp_2233_:
{
if (v___y_2234_ == 0)
{
goto v___jp_2224_;
}
else
{
return v___y_2234_;
}
}
v___jp_2235_:
{
uint8_t v___x_2239_; 
v___x_2239_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_u2081_2236_, v_v_2238_);
if (v___x_2239_ == 0)
{
uint8_t v___x_2240_; 
v___x_2240_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_u2082_2237_, v_v_2238_);
v___y_2234_ = v___x_2240_;
goto v___jp_2233_;
}
else
{
v___y_2234_ = v___x_2239_;
goto v___jp_2233_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go___boxed(lean_object* v_u_2258_, lean_object* v_v_2259_){
_start:
{
uint8_t v_res_2260_; lean_object* v_r_2261_; 
v_res_2260_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_2258_, v_v_2259_);
lean_dec(v_v_2259_);
lean_dec(v_u_2258_);
v_r_2261_ = lean_box(v_res_2260_);
return v_r_2261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go_match__1_splitter___redArg(lean_object* v_u_2262_, lean_object* v_v_2263_, lean_object* v_h__1_2264_, lean_object* v_h__2_2265_, lean_object* v_h__3_2266_, lean_object* v_h__4_2267_, lean_object* v_h__5_2268_, lean_object* v_h__6_2269_){
_start:
{
switch(lean_obj_tag(v_v_2263_))
{
case 0:
{
lean_object* v___x_2270_; 
lean_dec(v_h__6_2269_);
lean_dec(v_h__5_2268_);
lean_dec(v_h__4_2267_);
lean_dec(v_h__3_2266_);
lean_dec(v_h__2_2265_);
v___x_2270_ = lean_apply_1(v_h__1_2264_, v_u_2262_);
return v___x_2270_;
}
case 2:
{
lean_object* v_a_2271_; lean_object* v_a_2272_; lean_object* v___x_2273_; 
lean_dec(v_h__6_2269_);
lean_dec(v_h__5_2268_);
lean_dec(v_h__4_2267_);
lean_dec(v_h__3_2266_);
lean_dec(v_h__1_2264_);
v_a_2271_ = lean_ctor_get(v_v_2263_, 0);
lean_inc(v_a_2271_);
v_a_2272_ = lean_ctor_get(v_v_2263_, 1);
lean_inc(v_a_2272_);
lean_dec_ref_known(v_v_2263_, 2);
v___x_2273_ = lean_apply_3(v_h__2_2265_, v_u_2262_, v_a_2271_, v_a_2272_);
return v___x_2273_;
}
case 1:
{
lean_dec(v_h__2_2265_);
lean_dec(v_h__1_2264_);
switch(lean_obj_tag(v_u_2262_))
{
case 2:
{
lean_object* v_a_2274_; lean_object* v_a_2275_; lean_object* v___x_2276_; 
lean_dec(v_h__6_2269_);
lean_dec(v_h__5_2268_);
lean_dec(v_h__4_2267_);
v_a_2274_ = lean_ctor_get(v_u_2262_, 0);
lean_inc(v_a_2274_);
v_a_2275_ = lean_ctor_get(v_u_2262_, 1);
lean_inc(v_a_2275_);
lean_dec_ref_known(v_u_2262_, 2);
v___x_2276_ = lean_apply_5(v_h__3_2266_, v_a_2274_, v_a_2275_, v_v_2263_, lean_box(0), lean_box(0));
return v___x_2276_;
}
case 3:
{
lean_object* v_a_2277_; lean_object* v_a_2278_; lean_object* v___x_2279_; 
lean_dec(v_h__6_2269_);
lean_dec(v_h__5_2268_);
lean_dec(v_h__3_2266_);
v_a_2277_ = lean_ctor_get(v_u_2262_, 0);
lean_inc(v_a_2277_);
v_a_2278_ = lean_ctor_get(v_u_2262_, 1);
lean_inc(v_a_2278_);
lean_dec_ref_known(v_u_2262_, 2);
v___x_2279_ = lean_apply_5(v_h__4_2267_, v_a_2277_, v_a_2278_, v_v_2263_, lean_box(0), lean_box(0));
return v___x_2279_;
}
case 1:
{
lean_object* v_a_2280_; lean_object* v_a_2281_; lean_object* v___x_2282_; 
lean_dec(v_h__6_2269_);
lean_dec(v_h__4_2267_);
lean_dec(v_h__3_2266_);
v_a_2280_ = lean_ctor_get(v_v_2263_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v_v_2263_, 1);
v_a_2281_ = lean_ctor_get(v_u_2262_, 0);
lean_inc(v_a_2281_);
lean_dec_ref_known(v_u_2262_, 1);
v___x_2282_ = lean_apply_2(v_h__5_2268_, v_a_2281_, v_a_2280_);
return v___x_2282_;
}
default: 
{
lean_object* v___x_2283_; 
lean_dec(v_h__5_2268_);
lean_dec(v_h__4_2267_);
lean_dec(v_h__3_2266_);
v___x_2283_ = lean_apply_7(v_h__6_2269_, v_u_2262_, v_v_2263_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2283_;
}
}
}
default: 
{
lean_dec(v_h__5_2268_);
lean_dec(v_h__2_2265_);
lean_dec(v_h__1_2264_);
switch(lean_obj_tag(v_u_2262_))
{
case 2:
{
lean_object* v_a_2284_; lean_object* v_a_2285_; lean_object* v___x_2286_; 
lean_dec(v_h__6_2269_);
lean_dec(v_h__4_2267_);
v_a_2284_ = lean_ctor_get(v_u_2262_, 0);
lean_inc(v_a_2284_);
v_a_2285_ = lean_ctor_get(v_u_2262_, 1);
lean_inc(v_a_2285_);
lean_dec_ref_known(v_u_2262_, 2);
v___x_2286_ = lean_apply_5(v_h__3_2266_, v_a_2284_, v_a_2285_, v_v_2263_, lean_box(0), lean_box(0));
return v___x_2286_;
}
case 3:
{
lean_object* v_a_2287_; lean_object* v_a_2288_; lean_object* v___x_2289_; 
lean_dec(v_h__6_2269_);
lean_dec(v_h__3_2266_);
v_a_2287_ = lean_ctor_get(v_u_2262_, 0);
lean_inc(v_a_2287_);
v_a_2288_ = lean_ctor_get(v_u_2262_, 1);
lean_inc(v_a_2288_);
lean_dec_ref_known(v_u_2262_, 2);
v___x_2289_ = lean_apply_5(v_h__4_2267_, v_a_2287_, v_a_2288_, v_v_2263_, lean_box(0), lean_box(0));
return v___x_2289_;
}
default: 
{
lean_object* v___x_2290_; 
lean_dec(v_h__4_2267_);
lean_dec(v_h__3_2266_);
v___x_2290_ = lean_apply_7(v_h__6_2269_, v_u_2262_, v_v_2263_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2290_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go_match__1_splitter(lean_object* v_motive_2291_, lean_object* v_u_2292_, lean_object* v_v_2293_, lean_object* v_h__1_2294_, lean_object* v_h__2_2295_, lean_object* v_h__3_2296_, lean_object* v_h__4_2297_, lean_object* v_h__5_2298_, lean_object* v_h__6_2299_){
_start:
{
switch(lean_obj_tag(v_v_2293_))
{
case 0:
{
lean_object* v___x_2300_; 
lean_dec(v_h__6_2299_);
lean_dec(v_h__5_2298_);
lean_dec(v_h__4_2297_);
lean_dec(v_h__3_2296_);
lean_dec(v_h__2_2295_);
v___x_2300_ = lean_apply_1(v_h__1_2294_, v_u_2292_);
return v___x_2300_;
}
case 2:
{
lean_object* v_a_2301_; lean_object* v_a_2302_; lean_object* v___x_2303_; 
lean_dec(v_h__6_2299_);
lean_dec(v_h__5_2298_);
lean_dec(v_h__4_2297_);
lean_dec(v_h__3_2296_);
lean_dec(v_h__1_2294_);
v_a_2301_ = lean_ctor_get(v_v_2293_, 0);
lean_inc(v_a_2301_);
v_a_2302_ = lean_ctor_get(v_v_2293_, 1);
lean_inc(v_a_2302_);
lean_dec_ref_known(v_v_2293_, 2);
v___x_2303_ = lean_apply_3(v_h__2_2295_, v_u_2292_, v_a_2301_, v_a_2302_);
return v___x_2303_;
}
case 1:
{
lean_dec(v_h__2_2295_);
lean_dec(v_h__1_2294_);
switch(lean_obj_tag(v_u_2292_))
{
case 2:
{
lean_object* v_a_2304_; lean_object* v_a_2305_; lean_object* v___x_2306_; 
lean_dec(v_h__6_2299_);
lean_dec(v_h__5_2298_);
lean_dec(v_h__4_2297_);
v_a_2304_ = lean_ctor_get(v_u_2292_, 0);
lean_inc(v_a_2304_);
v_a_2305_ = lean_ctor_get(v_u_2292_, 1);
lean_inc(v_a_2305_);
lean_dec_ref_known(v_u_2292_, 2);
v___x_2306_ = lean_apply_5(v_h__3_2296_, v_a_2304_, v_a_2305_, v_v_2293_, lean_box(0), lean_box(0));
return v___x_2306_;
}
case 3:
{
lean_object* v_a_2307_; lean_object* v_a_2308_; lean_object* v___x_2309_; 
lean_dec(v_h__6_2299_);
lean_dec(v_h__5_2298_);
lean_dec(v_h__3_2296_);
v_a_2307_ = lean_ctor_get(v_u_2292_, 0);
lean_inc(v_a_2307_);
v_a_2308_ = lean_ctor_get(v_u_2292_, 1);
lean_inc(v_a_2308_);
lean_dec_ref_known(v_u_2292_, 2);
v___x_2309_ = lean_apply_5(v_h__4_2297_, v_a_2307_, v_a_2308_, v_v_2293_, lean_box(0), lean_box(0));
return v___x_2309_;
}
case 1:
{
lean_object* v_a_2310_; lean_object* v_a_2311_; lean_object* v___x_2312_; 
lean_dec(v_h__6_2299_);
lean_dec(v_h__4_2297_);
lean_dec(v_h__3_2296_);
v_a_2310_ = lean_ctor_get(v_v_2293_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v_v_2293_, 1);
v_a_2311_ = lean_ctor_get(v_u_2292_, 0);
lean_inc(v_a_2311_);
lean_dec_ref_known(v_u_2292_, 1);
v___x_2312_ = lean_apply_2(v_h__5_2298_, v_a_2311_, v_a_2310_);
return v___x_2312_;
}
default: 
{
lean_object* v___x_2313_; 
lean_dec(v_h__5_2298_);
lean_dec(v_h__4_2297_);
lean_dec(v_h__3_2296_);
v___x_2313_ = lean_apply_7(v_h__6_2299_, v_u_2292_, v_v_2293_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2313_;
}
}
}
default: 
{
lean_dec(v_h__5_2298_);
lean_dec(v_h__2_2295_);
lean_dec(v_h__1_2294_);
switch(lean_obj_tag(v_u_2292_))
{
case 2:
{
lean_object* v_a_2314_; lean_object* v_a_2315_; lean_object* v___x_2316_; 
lean_dec(v_h__6_2299_);
lean_dec(v_h__4_2297_);
v_a_2314_ = lean_ctor_get(v_u_2292_, 0);
lean_inc(v_a_2314_);
v_a_2315_ = lean_ctor_get(v_u_2292_, 1);
lean_inc(v_a_2315_);
lean_dec_ref_known(v_u_2292_, 2);
v___x_2316_ = lean_apply_5(v_h__3_2296_, v_a_2314_, v_a_2315_, v_v_2293_, lean_box(0), lean_box(0));
return v___x_2316_;
}
case 3:
{
lean_object* v_a_2317_; lean_object* v_a_2318_; lean_object* v___x_2319_; 
lean_dec(v_h__6_2299_);
lean_dec(v_h__3_2296_);
v_a_2317_ = lean_ctor_get(v_u_2292_, 0);
lean_inc(v_a_2317_);
v_a_2318_ = lean_ctor_get(v_u_2292_, 1);
lean_inc(v_a_2318_);
lean_dec_ref_known(v_u_2292_, 2);
v___x_2319_ = lean_apply_5(v_h__4_2297_, v_a_2317_, v_a_2318_, v_v_2293_, lean_box(0), lean_box(0));
return v___x_2319_;
}
default: 
{
lean_object* v___x_2320_; 
lean_dec(v_h__4_2297_);
lean_dec(v_h__3_2296_);
v___x_2320_ = lean_apply_7(v_h__6_2299_, v_u_2292_, v_v_2293_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2320_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isIMax_match__1_splitter___redArg(lean_object* v_x_2321_, lean_object* v_h__1_2322_, lean_object* v_h__2_2323_){
_start:
{
if (lean_obj_tag(v_x_2321_) == 3)
{
lean_object* v_a_2324_; lean_object* v_a_2325_; lean_object* v___x_2326_; 
lean_dec(v_h__2_2323_);
v_a_2324_ = lean_ctor_get(v_x_2321_, 0);
lean_inc(v_a_2324_);
v_a_2325_ = lean_ctor_get(v_x_2321_, 1);
lean_inc(v_a_2325_);
lean_dec_ref_known(v_x_2321_, 2);
v___x_2326_ = lean_apply_2(v_h__1_2322_, v_a_2324_, v_a_2325_);
return v___x_2326_;
}
else
{
lean_object* v___x_2327_; 
lean_dec(v_h__1_2322_);
v___x_2327_ = lean_apply_2(v_h__2_2323_, v_x_2321_, lean_box(0));
return v___x_2327_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isIMax_match__1_splitter(lean_object* v_motive_2328_, lean_object* v_x_2329_, lean_object* v_h__1_2330_, lean_object* v_h__2_2331_){
_start:
{
if (lean_obj_tag(v_x_2329_) == 3)
{
lean_object* v_a_2332_; lean_object* v_a_2333_; lean_object* v___x_2334_; 
lean_dec(v_h__2_2331_);
v_a_2332_ = lean_ctor_get(v_x_2329_, 0);
lean_inc(v_a_2332_);
v_a_2333_ = lean_ctor_get(v_x_2329_, 1);
lean_inc(v_a_2333_);
lean_dec_ref_known(v_x_2329_, 2);
v___x_2334_ = lean_apply_2(v_h__1_2330_, v_a_2332_, v_a_2333_);
return v___x_2334_;
}
else
{
lean_object* v___x_2335_; 
lean_dec(v_h__1_2330_);
v___x_2335_ = lean_apply_2(v_h__2_2331_, v_x_2329_, lean_box(0));
return v___x_2335_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Level_geq(lean_object* v_u_2336_, lean_object* v_v_2337_){
_start:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; uint8_t v___x_2340_; 
v___x_2338_ = l_Lean_Level_normalize(v_u_2336_);
v___x_2339_ = l_Lean_Level_normalize(v_v_2337_);
v___x_2340_ = l___private_Lean_Level_0__Lean_Level_geq_go(v___x_2338_, v___x_2339_);
lean_dec(v___x_2339_);
lean_dec(v___x_2338_);
return v___x_2340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_geq___boxed(lean_object* v_u_2341_, lean_object* v_v_2342_){
_start:
{
uint8_t v_res_2343_; lean_object* v_r_2344_; 
v_res_2343_ = l_Lean_Level_geq(v_u_2341_, v_v_2342_);
lean_dec(v_v_2342_);
lean_dec(v_u_2341_);
v_r_2344_ = lean_box(v_res_2343_);
return v_r_2344_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Level_collectMVars_spec__1___redArg(lean_object* v_k_2345_, lean_object* v_v_2346_, lean_object* v_t_2347_){
_start:
{
if (lean_obj_tag(v_t_2347_) == 0)
{
lean_object* v_size_2348_; lean_object* v_k_2349_; lean_object* v_v_2350_; lean_object* v_l_2351_; lean_object* v_r_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2632_; 
v_size_2348_ = lean_ctor_get(v_t_2347_, 0);
v_k_2349_ = lean_ctor_get(v_t_2347_, 1);
v_v_2350_ = lean_ctor_get(v_t_2347_, 2);
v_l_2351_ = lean_ctor_get(v_t_2347_, 3);
v_r_2352_ = lean_ctor_get(v_t_2347_, 4);
v_isSharedCheck_2632_ = !lean_is_exclusive(v_t_2347_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2354_ = v_t_2347_;
v_isShared_2355_ = v_isSharedCheck_2632_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_r_2352_);
lean_inc(v_l_2351_);
lean_inc(v_v_2350_);
lean_inc(v_k_2349_);
lean_inc(v_size_2348_);
lean_dec(v_t_2347_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2632_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
uint8_t v___x_2356_; 
v___x_2356_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2345_, v_k_2349_);
switch(v___x_2356_)
{
case 0:
{
lean_object* v_impl_2357_; lean_object* v___x_2358_; 
lean_dec(v_size_2348_);
v_impl_2357_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Level_collectMVars_spec__1___redArg(v_k_2345_, v_v_2346_, v_l_2351_);
v___x_2358_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2352_) == 0)
{
lean_object* v_size_2359_; lean_object* v_size_2360_; lean_object* v_k_2361_; lean_object* v_v_2362_; lean_object* v_l_2363_; lean_object* v_r_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; uint8_t v___x_2367_; 
v_size_2359_ = lean_ctor_get(v_r_2352_, 0);
v_size_2360_ = lean_ctor_get(v_impl_2357_, 0);
lean_inc(v_size_2360_);
v_k_2361_ = lean_ctor_get(v_impl_2357_, 1);
lean_inc(v_k_2361_);
v_v_2362_ = lean_ctor_get(v_impl_2357_, 2);
lean_inc(v_v_2362_);
v_l_2363_ = lean_ctor_get(v_impl_2357_, 3);
lean_inc(v_l_2363_);
v_r_2364_ = lean_ctor_get(v_impl_2357_, 4);
lean_inc(v_r_2364_);
v___x_2365_ = lean_unsigned_to_nat(3u);
v___x_2366_ = lean_nat_mul(v___x_2365_, v_size_2359_);
v___x_2367_ = lean_nat_dec_lt(v___x_2366_, v_size_2360_);
lean_dec(v___x_2366_);
if (v___x_2367_ == 0)
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2371_; 
lean_dec(v_r_2364_);
lean_dec(v_l_2363_);
lean_dec(v_v_2362_);
lean_dec(v_k_2361_);
v___x_2368_ = lean_nat_add(v___x_2358_, v_size_2360_);
lean_dec(v_size_2360_);
v___x_2369_ = lean_nat_add(v___x_2368_, v_size_2359_);
lean_dec(v___x_2368_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 3, v_impl_2357_);
lean_ctor_set(v___x_2354_, 0, v___x_2369_);
v___x_2371_ = v___x_2354_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2372_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2372_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2372_, 3, v_impl_2357_);
lean_ctor_set(v_reuseFailAlloc_2372_, 4, v_r_2352_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
else
{
lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2438_; 
v_isSharedCheck_2438_ = !lean_is_exclusive(v_impl_2357_);
if (v_isSharedCheck_2438_ == 0)
{
lean_object* v_unused_2439_; lean_object* v_unused_2440_; lean_object* v_unused_2441_; lean_object* v_unused_2442_; lean_object* v_unused_2443_; 
v_unused_2439_ = lean_ctor_get(v_impl_2357_, 4);
lean_dec(v_unused_2439_);
v_unused_2440_ = lean_ctor_get(v_impl_2357_, 3);
lean_dec(v_unused_2440_);
v_unused_2441_ = lean_ctor_get(v_impl_2357_, 2);
lean_dec(v_unused_2441_);
v_unused_2442_ = lean_ctor_get(v_impl_2357_, 1);
lean_dec(v_unused_2442_);
v_unused_2443_ = lean_ctor_get(v_impl_2357_, 0);
lean_dec(v_unused_2443_);
v___x_2374_ = v_impl_2357_;
v_isShared_2375_ = v_isSharedCheck_2438_;
goto v_resetjp_2373_;
}
else
{
lean_dec(v_impl_2357_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2438_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v_size_2376_; lean_object* v_size_2377_; lean_object* v_k_2378_; lean_object* v_v_2379_; lean_object* v_l_2380_; lean_object* v_r_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; uint8_t v___x_2384_; 
v_size_2376_ = lean_ctor_get(v_l_2363_, 0);
v_size_2377_ = lean_ctor_get(v_r_2364_, 0);
v_k_2378_ = lean_ctor_get(v_r_2364_, 1);
v_v_2379_ = lean_ctor_get(v_r_2364_, 2);
v_l_2380_ = lean_ctor_get(v_r_2364_, 3);
v_r_2381_ = lean_ctor_get(v_r_2364_, 4);
v___x_2382_ = lean_unsigned_to_nat(2u);
v___x_2383_ = lean_nat_mul(v___x_2382_, v_size_2376_);
v___x_2384_ = lean_nat_dec_lt(v_size_2377_, v___x_2383_);
lean_dec(v___x_2383_);
if (v___x_2384_ == 0)
{
lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2413_; 
lean_inc(v_r_2381_);
lean_inc(v_l_2380_);
lean_inc(v_v_2379_);
lean_inc(v_k_2378_);
v_isSharedCheck_2413_ = !lean_is_exclusive(v_r_2364_);
if (v_isSharedCheck_2413_ == 0)
{
lean_object* v_unused_2414_; lean_object* v_unused_2415_; lean_object* v_unused_2416_; lean_object* v_unused_2417_; lean_object* v_unused_2418_; 
v_unused_2414_ = lean_ctor_get(v_r_2364_, 4);
lean_dec(v_unused_2414_);
v_unused_2415_ = lean_ctor_get(v_r_2364_, 3);
lean_dec(v_unused_2415_);
v_unused_2416_ = lean_ctor_get(v_r_2364_, 2);
lean_dec(v_unused_2416_);
v_unused_2417_ = lean_ctor_get(v_r_2364_, 1);
lean_dec(v_unused_2417_);
v_unused_2418_ = lean_ctor_get(v_r_2364_, 0);
lean_dec(v_unused_2418_);
v___x_2386_ = v_r_2364_;
v_isShared_2387_ = v_isSharedCheck_2413_;
goto v_resetjp_2385_;
}
else
{
lean_dec(v_r_2364_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2413_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2393_; lean_object* v___x_2401_; lean_object* v___y_2403_; 
v___x_2388_ = lean_nat_add(v___x_2358_, v_size_2360_);
lean_dec(v_size_2360_);
v___x_2389_ = lean_nat_add(v___x_2388_, v_size_2359_);
lean_dec(v___x_2388_);
v___x_2401_ = lean_nat_add(v___x_2358_, v_size_2376_);
if (lean_obj_tag(v_l_2380_) == 0)
{
lean_object* v_size_2411_; 
v_size_2411_ = lean_ctor_get(v_l_2380_, 0);
lean_inc(v_size_2411_);
v___y_2403_ = v_size_2411_;
goto v___jp_2402_;
}
else
{
lean_object* v___x_2412_; 
v___x_2412_ = lean_unsigned_to_nat(0u);
v___y_2403_ = v___x_2412_;
goto v___jp_2402_;
}
v___jp_2390_:
{
lean_object* v___x_2394_; lean_object* v___x_2396_; 
v___x_2394_ = lean_nat_add(v___y_2392_, v___y_2393_);
lean_dec(v___y_2393_);
lean_dec(v___y_2392_);
if (v_isShared_2387_ == 0)
{
lean_ctor_set(v___x_2386_, 4, v_r_2352_);
lean_ctor_set(v___x_2386_, 3, v_r_2381_);
lean_ctor_set(v___x_2386_, 2, v_v_2350_);
lean_ctor_set(v___x_2386_, 1, v_k_2349_);
lean_ctor_set(v___x_2386_, 0, v___x_2394_);
v___x_2396_ = v___x_2386_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v___x_2394_);
lean_ctor_set(v_reuseFailAlloc_2400_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2400_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2400_, 3, v_r_2381_);
lean_ctor_set(v_reuseFailAlloc_2400_, 4, v_r_2352_);
v___x_2396_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
lean_object* v___x_2398_; 
if (v_isShared_2375_ == 0)
{
lean_ctor_set(v___x_2374_, 4, v___x_2396_);
lean_ctor_set(v___x_2374_, 3, v___y_2391_);
lean_ctor_set(v___x_2374_, 2, v_v_2379_);
lean_ctor_set(v___x_2374_, 1, v_k_2378_);
lean_ctor_set(v___x_2374_, 0, v___x_2389_);
v___x_2398_ = v___x_2374_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v___x_2389_);
lean_ctor_set(v_reuseFailAlloc_2399_, 1, v_k_2378_);
lean_ctor_set(v_reuseFailAlloc_2399_, 2, v_v_2379_);
lean_ctor_set(v_reuseFailAlloc_2399_, 3, v___y_2391_);
lean_ctor_set(v_reuseFailAlloc_2399_, 4, v___x_2396_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
v___jp_2402_:
{
lean_object* v___x_2404_; lean_object* v___x_2406_; 
v___x_2404_ = lean_nat_add(v___x_2401_, v___y_2403_);
lean_dec(v___y_2403_);
lean_dec(v___x_2401_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v_l_2380_);
lean_ctor_set(v___x_2354_, 3, v_l_2363_);
lean_ctor_set(v___x_2354_, 2, v_v_2362_);
lean_ctor_set(v___x_2354_, 1, v_k_2361_);
lean_ctor_set(v___x_2354_, 0, v___x_2404_);
v___x_2406_ = v___x_2354_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v_k_2361_);
lean_ctor_set(v_reuseFailAlloc_2410_, 2, v_v_2362_);
lean_ctor_set(v_reuseFailAlloc_2410_, 3, v_l_2363_);
lean_ctor_set(v_reuseFailAlloc_2410_, 4, v_l_2380_);
v___x_2406_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_nat_add(v___x_2358_, v_size_2359_);
if (lean_obj_tag(v_r_2381_) == 0)
{
lean_object* v_size_2408_; 
v_size_2408_ = lean_ctor_get(v_r_2381_, 0);
lean_inc(v_size_2408_);
v___y_2391_ = v___x_2406_;
v___y_2392_ = v___x_2407_;
v___y_2393_ = v_size_2408_;
goto v___jp_2390_;
}
else
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_unsigned_to_nat(0u);
v___y_2391_ = v___x_2406_;
v___y_2392_ = v___x_2407_;
v___y_2393_ = v___x_2409_;
goto v___jp_2390_;
}
}
}
}
}
else
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2424_; 
lean_del_object(v___x_2354_);
v___x_2419_ = lean_nat_add(v___x_2358_, v_size_2360_);
lean_dec(v_size_2360_);
v___x_2420_ = lean_nat_add(v___x_2419_, v_size_2359_);
lean_dec(v___x_2419_);
v___x_2421_ = lean_nat_add(v___x_2358_, v_size_2359_);
v___x_2422_ = lean_nat_add(v___x_2421_, v_size_2377_);
lean_dec(v___x_2421_);
lean_inc_ref(v_r_2352_);
if (v_isShared_2375_ == 0)
{
lean_ctor_set(v___x_2374_, 4, v_r_2352_);
lean_ctor_set(v___x_2374_, 3, v_r_2364_);
lean_ctor_set(v___x_2374_, 2, v_v_2350_);
lean_ctor_set(v___x_2374_, 1, v_k_2349_);
lean_ctor_set(v___x_2374_, 0, v___x_2422_);
v___x_2424_ = v___x_2374_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v___x_2422_);
lean_ctor_set(v_reuseFailAlloc_2437_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2437_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2437_, 3, v_r_2364_);
lean_ctor_set(v_reuseFailAlloc_2437_, 4, v_r_2352_);
v___x_2424_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2431_; 
v_isSharedCheck_2431_ = !lean_is_exclusive(v_r_2352_);
if (v_isSharedCheck_2431_ == 0)
{
lean_object* v_unused_2432_; lean_object* v_unused_2433_; lean_object* v_unused_2434_; lean_object* v_unused_2435_; lean_object* v_unused_2436_; 
v_unused_2432_ = lean_ctor_get(v_r_2352_, 4);
lean_dec(v_unused_2432_);
v_unused_2433_ = lean_ctor_get(v_r_2352_, 3);
lean_dec(v_unused_2433_);
v_unused_2434_ = lean_ctor_get(v_r_2352_, 2);
lean_dec(v_unused_2434_);
v_unused_2435_ = lean_ctor_get(v_r_2352_, 1);
lean_dec(v_unused_2435_);
v_unused_2436_ = lean_ctor_get(v_r_2352_, 0);
lean_dec(v_unused_2436_);
v___x_2426_ = v_r_2352_;
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
else
{
lean_dec(v_r_2352_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2431_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2429_; 
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 4, v___x_2424_);
lean_ctor_set(v___x_2426_, 3, v_l_2363_);
lean_ctor_set(v___x_2426_, 2, v_v_2362_);
lean_ctor_set(v___x_2426_, 1, v_k_2361_);
lean_ctor_set(v___x_2426_, 0, v___x_2420_);
v___x_2429_ = v___x_2426_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v___x_2420_);
lean_ctor_set(v_reuseFailAlloc_2430_, 1, v_k_2361_);
lean_ctor_set(v_reuseFailAlloc_2430_, 2, v_v_2362_);
lean_ctor_set(v_reuseFailAlloc_2430_, 3, v_l_2363_);
lean_ctor_set(v_reuseFailAlloc_2430_, 4, v___x_2424_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
return v___x_2429_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2444_; 
v_l_2444_ = lean_ctor_get(v_impl_2357_, 3);
lean_inc(v_l_2444_);
if (lean_obj_tag(v_l_2444_) == 0)
{
lean_object* v_r_2445_; lean_object* v_k_2446_; lean_object* v_v_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2458_; 
v_r_2445_ = lean_ctor_get(v_impl_2357_, 4);
v_k_2446_ = lean_ctor_get(v_impl_2357_, 1);
v_v_2447_ = lean_ctor_get(v_impl_2357_, 2);
v_isSharedCheck_2458_ = !lean_is_exclusive(v_impl_2357_);
if (v_isSharedCheck_2458_ == 0)
{
lean_object* v_unused_2459_; lean_object* v_unused_2460_; 
v_unused_2459_ = lean_ctor_get(v_impl_2357_, 3);
lean_dec(v_unused_2459_);
v_unused_2460_ = lean_ctor_get(v_impl_2357_, 0);
lean_dec(v_unused_2460_);
v___x_2449_ = v_impl_2357_;
v_isShared_2450_ = v_isSharedCheck_2458_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_r_2445_);
lean_inc(v_v_2447_);
lean_inc(v_k_2446_);
lean_dec(v_impl_2357_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2458_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2451_; lean_object* v___x_2453_; 
v___x_2451_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2445_);
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 3, v_r_2445_);
lean_ctor_set(v___x_2449_, 2, v_v_2350_);
lean_ctor_set(v___x_2449_, 1, v_k_2349_);
lean_ctor_set(v___x_2449_, 0, v___x_2358_);
v___x_2453_ = v___x_2449_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v___x_2358_);
lean_ctor_set(v_reuseFailAlloc_2457_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2457_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2457_, 3, v_r_2445_);
lean_ctor_set(v_reuseFailAlloc_2457_, 4, v_r_2445_);
v___x_2453_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
lean_object* v___x_2455_; 
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v___x_2453_);
lean_ctor_set(v___x_2354_, 3, v_l_2444_);
lean_ctor_set(v___x_2354_, 2, v_v_2447_);
lean_ctor_set(v___x_2354_, 1, v_k_2446_);
lean_ctor_set(v___x_2354_, 0, v___x_2451_);
v___x_2455_ = v___x_2354_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v___x_2451_);
lean_ctor_set(v_reuseFailAlloc_2456_, 1, v_k_2446_);
lean_ctor_set(v_reuseFailAlloc_2456_, 2, v_v_2447_);
lean_ctor_set(v_reuseFailAlloc_2456_, 3, v_l_2444_);
lean_ctor_set(v_reuseFailAlloc_2456_, 4, v___x_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
else
{
lean_object* v_r_2461_; 
v_r_2461_ = lean_ctor_get(v_impl_2357_, 4);
lean_inc(v_r_2461_);
if (lean_obj_tag(v_r_2461_) == 0)
{
lean_object* v_k_2462_; lean_object* v_v_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2486_; 
v_k_2462_ = lean_ctor_get(v_impl_2357_, 1);
v_v_2463_ = lean_ctor_get(v_impl_2357_, 2);
v_isSharedCheck_2486_ = !lean_is_exclusive(v_impl_2357_);
if (v_isSharedCheck_2486_ == 0)
{
lean_object* v_unused_2487_; lean_object* v_unused_2488_; lean_object* v_unused_2489_; 
v_unused_2487_ = lean_ctor_get(v_impl_2357_, 4);
lean_dec(v_unused_2487_);
v_unused_2488_ = lean_ctor_get(v_impl_2357_, 3);
lean_dec(v_unused_2488_);
v_unused_2489_ = lean_ctor_get(v_impl_2357_, 0);
lean_dec(v_unused_2489_);
v___x_2465_ = v_impl_2357_;
v_isShared_2466_ = v_isSharedCheck_2486_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_v_2463_);
lean_inc(v_k_2462_);
lean_dec(v_impl_2357_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2486_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v_k_2467_; lean_object* v_v_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2482_; 
v_k_2467_ = lean_ctor_get(v_r_2461_, 1);
v_v_2468_ = lean_ctor_get(v_r_2461_, 2);
v_isSharedCheck_2482_ = !lean_is_exclusive(v_r_2461_);
if (v_isSharedCheck_2482_ == 0)
{
lean_object* v_unused_2483_; lean_object* v_unused_2484_; lean_object* v_unused_2485_; 
v_unused_2483_ = lean_ctor_get(v_r_2461_, 4);
lean_dec(v_unused_2483_);
v_unused_2484_ = lean_ctor_get(v_r_2461_, 3);
lean_dec(v_unused_2484_);
v_unused_2485_ = lean_ctor_get(v_r_2461_, 0);
lean_dec(v_unused_2485_);
v___x_2470_ = v_r_2461_;
v_isShared_2471_ = v_isSharedCheck_2482_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_v_2468_);
lean_inc(v_k_2467_);
lean_dec(v_r_2461_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2482_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2472_; lean_object* v___x_2474_; 
v___x_2472_ = lean_unsigned_to_nat(3u);
if (v_isShared_2471_ == 0)
{
lean_ctor_set(v___x_2470_, 4, v_l_2444_);
lean_ctor_set(v___x_2470_, 3, v_l_2444_);
lean_ctor_set(v___x_2470_, 2, v_v_2463_);
lean_ctor_set(v___x_2470_, 1, v_k_2462_);
lean_ctor_set(v___x_2470_, 0, v___x_2358_);
v___x_2474_ = v___x_2470_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v___x_2358_);
lean_ctor_set(v_reuseFailAlloc_2481_, 1, v_k_2462_);
lean_ctor_set(v_reuseFailAlloc_2481_, 2, v_v_2463_);
lean_ctor_set(v_reuseFailAlloc_2481_, 3, v_l_2444_);
lean_ctor_set(v_reuseFailAlloc_2481_, 4, v_l_2444_);
v___x_2474_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
lean_object* v___x_2476_; 
if (v_isShared_2466_ == 0)
{
lean_ctor_set(v___x_2465_, 4, v_l_2444_);
lean_ctor_set(v___x_2465_, 2, v_v_2350_);
lean_ctor_set(v___x_2465_, 1, v_k_2349_);
lean_ctor_set(v___x_2465_, 0, v___x_2358_);
v___x_2476_ = v___x_2465_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v___x_2358_);
lean_ctor_set(v_reuseFailAlloc_2480_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2480_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2480_, 3, v_l_2444_);
lean_ctor_set(v_reuseFailAlloc_2480_, 4, v_l_2444_);
v___x_2476_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
lean_object* v___x_2478_; 
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v___x_2476_);
lean_ctor_set(v___x_2354_, 3, v___x_2474_);
lean_ctor_set(v___x_2354_, 2, v_v_2468_);
lean_ctor_set(v___x_2354_, 1, v_k_2467_);
lean_ctor_set(v___x_2354_, 0, v___x_2472_);
v___x_2478_ = v___x_2354_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2472_);
lean_ctor_set(v_reuseFailAlloc_2479_, 1, v_k_2467_);
lean_ctor_set(v_reuseFailAlloc_2479_, 2, v_v_2468_);
lean_ctor_set(v_reuseFailAlloc_2479_, 3, v___x_2474_);
lean_ctor_set(v_reuseFailAlloc_2479_, 4, v___x_2476_);
v___x_2478_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
return v___x_2478_;
}
}
}
}
}
}
else
{
lean_object* v___x_2490_; lean_object* v___x_2492_; 
v___x_2490_ = lean_unsigned_to_nat(2u);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v_r_2461_);
lean_ctor_set(v___x_2354_, 3, v_impl_2357_);
lean_ctor_set(v___x_2354_, 0, v___x_2490_);
v___x_2492_ = v___x_2354_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v___x_2490_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2493_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2493_, 3, v_impl_2357_);
lean_ctor_set(v_reuseFailAlloc_2493_, 4, v_r_2461_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
}
}
case 1:
{
lean_object* v___x_2495_; 
lean_dec(v_v_2350_);
lean_dec(v_k_2349_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 2, v_v_2346_);
lean_ctor_set(v___x_2354_, 1, v_k_2345_);
v___x_2495_ = v___x_2354_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_size_2348_);
lean_ctor_set(v_reuseFailAlloc_2496_, 1, v_k_2345_);
lean_ctor_set(v_reuseFailAlloc_2496_, 2, v_v_2346_);
lean_ctor_set(v_reuseFailAlloc_2496_, 3, v_l_2351_);
lean_ctor_set(v_reuseFailAlloc_2496_, 4, v_r_2352_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
default: 
{
lean_object* v_impl_2497_; lean_object* v___x_2498_; 
lean_dec(v_size_2348_);
v_impl_2497_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Level_collectMVars_spec__1___redArg(v_k_2345_, v_v_2346_, v_r_2352_);
v___x_2498_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2351_) == 0)
{
lean_object* v_size_2499_; lean_object* v_size_2500_; lean_object* v_k_2501_; lean_object* v_v_2502_; lean_object* v_l_2503_; lean_object* v_r_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; uint8_t v___x_2507_; 
v_size_2499_ = lean_ctor_get(v_l_2351_, 0);
v_size_2500_ = lean_ctor_get(v_impl_2497_, 0);
lean_inc(v_size_2500_);
v_k_2501_ = lean_ctor_get(v_impl_2497_, 1);
lean_inc(v_k_2501_);
v_v_2502_ = lean_ctor_get(v_impl_2497_, 2);
lean_inc(v_v_2502_);
v_l_2503_ = lean_ctor_get(v_impl_2497_, 3);
lean_inc(v_l_2503_);
v_r_2504_ = lean_ctor_get(v_impl_2497_, 4);
lean_inc(v_r_2504_);
v___x_2505_ = lean_unsigned_to_nat(3u);
v___x_2506_ = lean_nat_mul(v___x_2505_, v_size_2499_);
v___x_2507_ = lean_nat_dec_lt(v___x_2506_, v_size_2500_);
lean_dec(v___x_2506_);
if (v___x_2507_ == 0)
{
lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2511_; 
lean_dec(v_r_2504_);
lean_dec(v_l_2503_);
lean_dec(v_v_2502_);
lean_dec(v_k_2501_);
v___x_2508_ = lean_nat_add(v___x_2498_, v_size_2499_);
v___x_2509_ = lean_nat_add(v___x_2508_, v_size_2500_);
lean_dec(v_size_2500_);
lean_dec(v___x_2508_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v_impl_2497_);
lean_ctor_set(v___x_2354_, 0, v___x_2509_);
v___x_2511_ = v___x_2354_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v___x_2509_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2512_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2512_, 3, v_l_2351_);
lean_ctor_set(v_reuseFailAlloc_2512_, 4, v_impl_2497_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
else
{
lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2576_; 
v_isSharedCheck_2576_ = !lean_is_exclusive(v_impl_2497_);
if (v_isSharedCheck_2576_ == 0)
{
lean_object* v_unused_2577_; lean_object* v_unused_2578_; lean_object* v_unused_2579_; lean_object* v_unused_2580_; lean_object* v_unused_2581_; 
v_unused_2577_ = lean_ctor_get(v_impl_2497_, 4);
lean_dec(v_unused_2577_);
v_unused_2578_ = lean_ctor_get(v_impl_2497_, 3);
lean_dec(v_unused_2578_);
v_unused_2579_ = lean_ctor_get(v_impl_2497_, 2);
lean_dec(v_unused_2579_);
v_unused_2580_ = lean_ctor_get(v_impl_2497_, 1);
lean_dec(v_unused_2580_);
v_unused_2581_ = lean_ctor_get(v_impl_2497_, 0);
lean_dec(v_unused_2581_);
v___x_2514_ = v_impl_2497_;
v_isShared_2515_ = v_isSharedCheck_2576_;
goto v_resetjp_2513_;
}
else
{
lean_dec(v_impl_2497_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2576_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v_size_2516_; lean_object* v_k_2517_; lean_object* v_v_2518_; lean_object* v_l_2519_; lean_object* v_r_2520_; lean_object* v_size_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; uint8_t v___x_2524_; 
v_size_2516_ = lean_ctor_get(v_l_2503_, 0);
v_k_2517_ = lean_ctor_get(v_l_2503_, 1);
v_v_2518_ = lean_ctor_get(v_l_2503_, 2);
v_l_2519_ = lean_ctor_get(v_l_2503_, 3);
v_r_2520_ = lean_ctor_get(v_l_2503_, 4);
v_size_2521_ = lean_ctor_get(v_r_2504_, 0);
v___x_2522_ = lean_unsigned_to_nat(2u);
v___x_2523_ = lean_nat_mul(v___x_2522_, v_size_2521_);
v___x_2524_ = lean_nat_dec_lt(v_size_2516_, v___x_2523_);
lean_dec(v___x_2523_);
if (v___x_2524_ == 0)
{
lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2552_; 
lean_inc(v_r_2520_);
lean_inc(v_l_2519_);
lean_inc(v_v_2518_);
lean_inc(v_k_2517_);
v_isSharedCheck_2552_ = !lean_is_exclusive(v_l_2503_);
if (v_isSharedCheck_2552_ == 0)
{
lean_object* v_unused_2553_; lean_object* v_unused_2554_; lean_object* v_unused_2555_; lean_object* v_unused_2556_; lean_object* v_unused_2557_; 
v_unused_2553_ = lean_ctor_get(v_l_2503_, 4);
lean_dec(v_unused_2553_);
v_unused_2554_ = lean_ctor_get(v_l_2503_, 3);
lean_dec(v_unused_2554_);
v_unused_2555_ = lean_ctor_get(v_l_2503_, 2);
lean_dec(v_unused_2555_);
v_unused_2556_ = lean_ctor_get(v_l_2503_, 1);
lean_dec(v_unused_2556_);
v_unused_2557_ = lean_ctor_get(v_l_2503_, 0);
lean_dec(v_unused_2557_);
v___x_2526_ = v_l_2503_;
v_isShared_2527_ = v_isSharedCheck_2552_;
goto v_resetjp_2525_;
}
else
{
lean_dec(v_l_2503_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2552_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2533_; lean_object* v___y_2542_; 
v___x_2528_ = lean_nat_add(v___x_2498_, v_size_2499_);
v___x_2529_ = lean_nat_add(v___x_2528_, v_size_2500_);
lean_dec(v_size_2500_);
if (lean_obj_tag(v_l_2519_) == 0)
{
lean_object* v_size_2550_; 
v_size_2550_ = lean_ctor_get(v_l_2519_, 0);
lean_inc(v_size_2550_);
v___y_2542_ = v_size_2550_;
goto v___jp_2541_;
}
else
{
lean_object* v___x_2551_; 
v___x_2551_ = lean_unsigned_to_nat(0u);
v___y_2542_ = v___x_2551_;
goto v___jp_2541_;
}
v___jp_2530_:
{
lean_object* v___x_2534_; lean_object* v___x_2536_; 
v___x_2534_ = lean_nat_add(v___y_2531_, v___y_2533_);
lean_dec(v___y_2533_);
lean_dec(v___y_2531_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 4, v_r_2504_);
lean_ctor_set(v___x_2526_, 3, v_r_2520_);
lean_ctor_set(v___x_2526_, 2, v_v_2502_);
lean_ctor_set(v___x_2526_, 1, v_k_2501_);
lean_ctor_set(v___x_2526_, 0, v___x_2534_);
v___x_2536_ = v___x_2526_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2534_);
lean_ctor_set(v_reuseFailAlloc_2540_, 1, v_k_2501_);
lean_ctor_set(v_reuseFailAlloc_2540_, 2, v_v_2502_);
lean_ctor_set(v_reuseFailAlloc_2540_, 3, v_r_2520_);
lean_ctor_set(v_reuseFailAlloc_2540_, 4, v_r_2504_);
v___x_2536_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
lean_object* v___x_2538_; 
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 4, v___x_2536_);
lean_ctor_set(v___x_2514_, 3, v___y_2532_);
lean_ctor_set(v___x_2514_, 2, v_v_2518_);
lean_ctor_set(v___x_2514_, 1, v_k_2517_);
lean_ctor_set(v___x_2514_, 0, v___x_2529_);
v___x_2538_ = v___x_2514_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2529_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v_k_2517_);
lean_ctor_set(v_reuseFailAlloc_2539_, 2, v_v_2518_);
lean_ctor_set(v_reuseFailAlloc_2539_, 3, v___y_2532_);
lean_ctor_set(v_reuseFailAlloc_2539_, 4, v___x_2536_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
v___jp_2541_:
{
lean_object* v___x_2543_; lean_object* v___x_2545_; 
v___x_2543_ = lean_nat_add(v___x_2528_, v___y_2542_);
lean_dec(v___y_2542_);
lean_dec(v___x_2528_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v_l_2519_);
lean_ctor_set(v___x_2354_, 0, v___x_2543_);
v___x_2545_ = v___x_2354_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v___x_2543_);
lean_ctor_set(v_reuseFailAlloc_2549_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2549_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2549_, 3, v_l_2351_);
lean_ctor_set(v_reuseFailAlloc_2549_, 4, v_l_2519_);
v___x_2545_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
lean_object* v___x_2546_; 
v___x_2546_ = lean_nat_add(v___x_2498_, v_size_2521_);
if (lean_obj_tag(v_r_2520_) == 0)
{
lean_object* v_size_2547_; 
v_size_2547_ = lean_ctor_get(v_r_2520_, 0);
lean_inc(v_size_2547_);
v___y_2531_ = v___x_2546_;
v___y_2532_ = v___x_2545_;
v___y_2533_ = v_size_2547_;
goto v___jp_2530_;
}
else
{
lean_object* v___x_2548_; 
v___x_2548_ = lean_unsigned_to_nat(0u);
v___y_2531_ = v___x_2546_;
v___y_2532_ = v___x_2545_;
v___y_2533_ = v___x_2548_;
goto v___jp_2530_;
}
}
}
}
}
else
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2562_; 
lean_del_object(v___x_2354_);
v___x_2558_ = lean_nat_add(v___x_2498_, v_size_2499_);
v___x_2559_ = lean_nat_add(v___x_2558_, v_size_2500_);
lean_dec(v_size_2500_);
v___x_2560_ = lean_nat_add(v___x_2558_, v_size_2516_);
lean_dec(v___x_2558_);
lean_inc_ref(v_l_2351_);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 4, v_l_2503_);
lean_ctor_set(v___x_2514_, 3, v_l_2351_);
lean_ctor_set(v___x_2514_, 2, v_v_2350_);
lean_ctor_set(v___x_2514_, 1, v_k_2349_);
lean_ctor_set(v___x_2514_, 0, v___x_2560_);
v___x_2562_ = v___x_2514_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v___x_2560_);
lean_ctor_set(v_reuseFailAlloc_2575_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2575_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2575_, 3, v_l_2351_);
lean_ctor_set(v_reuseFailAlloc_2575_, 4, v_l_2503_);
v___x_2562_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
v_isSharedCheck_2569_ = !lean_is_exclusive(v_l_2351_);
if (v_isSharedCheck_2569_ == 0)
{
lean_object* v_unused_2570_; lean_object* v_unused_2571_; lean_object* v_unused_2572_; lean_object* v_unused_2573_; lean_object* v_unused_2574_; 
v_unused_2570_ = lean_ctor_get(v_l_2351_, 4);
lean_dec(v_unused_2570_);
v_unused_2571_ = lean_ctor_get(v_l_2351_, 3);
lean_dec(v_unused_2571_);
v_unused_2572_ = lean_ctor_get(v_l_2351_, 2);
lean_dec(v_unused_2572_);
v_unused_2573_ = lean_ctor_get(v_l_2351_, 1);
lean_dec(v_unused_2573_);
v_unused_2574_ = lean_ctor_get(v_l_2351_, 0);
lean_dec(v_unused_2574_);
v___x_2564_ = v_l_2351_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_dec(v_l_2351_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 4, v_r_2504_);
lean_ctor_set(v___x_2564_, 3, v___x_2562_);
lean_ctor_set(v___x_2564_, 2, v_v_2502_);
lean_ctor_set(v___x_2564_, 1, v_k_2501_);
lean_ctor_set(v___x_2564_, 0, v___x_2559_);
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v___x_2559_);
lean_ctor_set(v_reuseFailAlloc_2568_, 1, v_k_2501_);
lean_ctor_set(v_reuseFailAlloc_2568_, 2, v_v_2502_);
lean_ctor_set(v_reuseFailAlloc_2568_, 3, v___x_2562_);
lean_ctor_set(v_reuseFailAlloc_2568_, 4, v_r_2504_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2582_; 
v_l_2582_ = lean_ctor_get(v_impl_2497_, 3);
lean_inc(v_l_2582_);
if (lean_obj_tag(v_l_2582_) == 0)
{
lean_object* v_r_2583_; lean_object* v_k_2584_; lean_object* v_v_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2608_; 
v_r_2583_ = lean_ctor_get(v_impl_2497_, 4);
v_k_2584_ = lean_ctor_get(v_impl_2497_, 1);
v_v_2585_ = lean_ctor_get(v_impl_2497_, 2);
v_isSharedCheck_2608_ = !lean_is_exclusive(v_impl_2497_);
if (v_isSharedCheck_2608_ == 0)
{
lean_object* v_unused_2609_; lean_object* v_unused_2610_; 
v_unused_2609_ = lean_ctor_get(v_impl_2497_, 3);
lean_dec(v_unused_2609_);
v_unused_2610_ = lean_ctor_get(v_impl_2497_, 0);
lean_dec(v_unused_2610_);
v___x_2587_ = v_impl_2497_;
v_isShared_2588_ = v_isSharedCheck_2608_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_r_2583_);
lean_inc(v_v_2585_);
lean_inc(v_k_2584_);
lean_dec(v_impl_2497_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2608_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v_k_2589_; lean_object* v_v_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2604_; 
v_k_2589_ = lean_ctor_get(v_l_2582_, 1);
v_v_2590_ = lean_ctor_get(v_l_2582_, 2);
v_isSharedCheck_2604_ = !lean_is_exclusive(v_l_2582_);
if (v_isSharedCheck_2604_ == 0)
{
lean_object* v_unused_2605_; lean_object* v_unused_2606_; lean_object* v_unused_2607_; 
v_unused_2605_ = lean_ctor_get(v_l_2582_, 4);
lean_dec(v_unused_2605_);
v_unused_2606_ = lean_ctor_get(v_l_2582_, 3);
lean_dec(v_unused_2606_);
v_unused_2607_ = lean_ctor_get(v_l_2582_, 0);
lean_dec(v_unused_2607_);
v___x_2592_ = v_l_2582_;
v_isShared_2593_ = v_isSharedCheck_2604_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_v_2590_);
lean_inc(v_k_2589_);
lean_dec(v_l_2582_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2604_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2594_; lean_object* v___x_2596_; 
v___x_2594_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2583_, 2);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 4, v_r_2583_);
lean_ctor_set(v___x_2592_, 3, v_r_2583_);
lean_ctor_set(v___x_2592_, 2, v_v_2350_);
lean_ctor_set(v___x_2592_, 1, v_k_2349_);
lean_ctor_set(v___x_2592_, 0, v___x_2498_);
v___x_2596_ = v___x_2592_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v___x_2498_);
lean_ctor_set(v_reuseFailAlloc_2603_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2603_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2603_, 3, v_r_2583_);
lean_ctor_set(v_reuseFailAlloc_2603_, 4, v_r_2583_);
v___x_2596_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
lean_object* v___x_2598_; 
lean_inc(v_r_2583_);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 3, v_r_2583_);
lean_ctor_set(v___x_2587_, 0, v___x_2498_);
v___x_2598_ = v___x_2587_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v___x_2498_);
lean_ctor_set(v_reuseFailAlloc_2602_, 1, v_k_2584_);
lean_ctor_set(v_reuseFailAlloc_2602_, 2, v_v_2585_);
lean_ctor_set(v_reuseFailAlloc_2602_, 3, v_r_2583_);
lean_ctor_set(v_reuseFailAlloc_2602_, 4, v_r_2583_);
v___x_2598_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
lean_object* v___x_2600_; 
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v___x_2598_);
lean_ctor_set(v___x_2354_, 3, v___x_2596_);
lean_ctor_set(v___x_2354_, 2, v_v_2590_);
lean_ctor_set(v___x_2354_, 1, v_k_2589_);
lean_ctor_set(v___x_2354_, 0, v___x_2594_);
v___x_2600_ = v___x_2354_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v___x_2594_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v_k_2589_);
lean_ctor_set(v_reuseFailAlloc_2601_, 2, v_v_2590_);
lean_ctor_set(v_reuseFailAlloc_2601_, 3, v___x_2596_);
lean_ctor_set(v_reuseFailAlloc_2601_, 4, v___x_2598_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
}
}
}
else
{
lean_object* v_r_2611_; 
v_r_2611_ = lean_ctor_get(v_impl_2497_, 4);
lean_inc(v_r_2611_);
if (lean_obj_tag(v_r_2611_) == 0)
{
lean_object* v_k_2612_; lean_object* v_v_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2624_; 
v_k_2612_ = lean_ctor_get(v_impl_2497_, 1);
v_v_2613_ = lean_ctor_get(v_impl_2497_, 2);
v_isSharedCheck_2624_ = !lean_is_exclusive(v_impl_2497_);
if (v_isSharedCheck_2624_ == 0)
{
lean_object* v_unused_2625_; lean_object* v_unused_2626_; lean_object* v_unused_2627_; 
v_unused_2625_ = lean_ctor_get(v_impl_2497_, 4);
lean_dec(v_unused_2625_);
v_unused_2626_ = lean_ctor_get(v_impl_2497_, 3);
lean_dec(v_unused_2626_);
v_unused_2627_ = lean_ctor_get(v_impl_2497_, 0);
lean_dec(v_unused_2627_);
v___x_2615_ = v_impl_2497_;
v_isShared_2616_ = v_isSharedCheck_2624_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_v_2613_);
lean_inc(v_k_2612_);
lean_dec(v_impl_2497_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2624_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2617_; lean_object* v___x_2619_; 
v___x_2617_ = lean_unsigned_to_nat(3u);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 4, v_l_2582_);
lean_ctor_set(v___x_2615_, 2, v_v_2350_);
lean_ctor_set(v___x_2615_, 1, v_k_2349_);
lean_ctor_set(v___x_2615_, 0, v___x_2498_);
v___x_2619_ = v___x_2615_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v___x_2498_);
lean_ctor_set(v_reuseFailAlloc_2623_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2623_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2623_, 3, v_l_2582_);
lean_ctor_set(v_reuseFailAlloc_2623_, 4, v_l_2582_);
v___x_2619_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
lean_object* v___x_2621_; 
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v_r_2611_);
lean_ctor_set(v___x_2354_, 3, v___x_2619_);
lean_ctor_set(v___x_2354_, 2, v_v_2613_);
lean_ctor_set(v___x_2354_, 1, v_k_2612_);
lean_ctor_set(v___x_2354_, 0, v___x_2617_);
v___x_2621_ = v___x_2354_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2617_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v_k_2612_);
lean_ctor_set(v_reuseFailAlloc_2622_, 2, v_v_2613_);
lean_ctor_set(v_reuseFailAlloc_2622_, 3, v___x_2619_);
lean_ctor_set(v_reuseFailAlloc_2622_, 4, v_r_2611_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
}
else
{
lean_object* v___x_2628_; lean_object* v___x_2630_; 
v___x_2628_ = lean_unsigned_to_nat(2u);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 4, v_impl_2497_);
lean_ctor_set(v___x_2354_, 3, v_r_2611_);
lean_ctor_set(v___x_2354_, 0, v___x_2628_);
v___x_2630_ = v___x_2354_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v___x_2628_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v_k_2349_);
lean_ctor_set(v_reuseFailAlloc_2631_, 2, v_v_2350_);
lean_ctor_set(v_reuseFailAlloc_2631_, 3, v_r_2611_);
lean_ctor_set(v_reuseFailAlloc_2631_, 4, v_impl_2497_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
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
lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2633_ = lean_unsigned_to_nat(1u);
v___x_2634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2633_);
lean_ctor_set(v___x_2634_, 1, v_k_2345_);
lean_ctor_set(v___x_2634_, 2, v_v_2346_);
lean_ctor_set(v___x_2634_, 3, v_t_2347_);
lean_ctor_set(v___x_2634_, 4, v_t_2347_);
return v___x_2634_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0___redArg(lean_object* v_k_2635_, lean_object* v_t_2636_){
_start:
{
if (lean_obj_tag(v_t_2636_) == 0)
{
lean_object* v_k_2637_; lean_object* v_l_2638_; lean_object* v_r_2639_; uint8_t v___x_2640_; 
v_k_2637_ = lean_ctor_get(v_t_2636_, 1);
v_l_2638_ = lean_ctor_get(v_t_2636_, 3);
v_r_2639_ = lean_ctor_get(v_t_2636_, 4);
v___x_2640_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2635_, v_k_2637_);
switch(v___x_2640_)
{
case 0:
{
v_t_2636_ = v_l_2638_;
goto _start;
}
case 1:
{
uint8_t v___x_2642_; 
v___x_2642_ = 1;
return v___x_2642_;
}
default: 
{
v_t_2636_ = v_r_2639_;
goto _start;
}
}
}
else
{
uint8_t v___x_2644_; 
v___x_2644_ = 0;
return v___x_2644_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0___redArg___boxed(lean_object* v_k_2645_, lean_object* v_t_2646_){
_start:
{
uint8_t v_res_2647_; lean_object* v_r_2648_; 
v_res_2647_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0___redArg(v_k_2645_, v_t_2646_);
lean_dec(v_t_2646_);
lean_dec(v_k_2645_);
v_r_2648_ = lean_box(v_res_2647_);
return v_r_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_collectMVars(lean_object* v_u_2649_, lean_object* v_s_2650_){
_start:
{
lean_object* v_u_2652_; lean_object* v_v_2653_; 
switch(lean_obj_tag(v_u_2649_))
{
case 1:
{
lean_object* v_a_2656_; 
v_a_2656_ = lean_ctor_get(v_u_2649_, 0);
lean_inc(v_a_2656_);
lean_dec_ref_known(v_u_2649_, 1);
v_u_2649_ = v_a_2656_;
goto _start;
}
case 2:
{
lean_object* v_a_2658_; lean_object* v_a_2659_; 
v_a_2658_ = lean_ctor_get(v_u_2649_, 0);
lean_inc(v_a_2658_);
v_a_2659_ = lean_ctor_get(v_u_2649_, 1);
lean_inc(v_a_2659_);
lean_dec_ref_known(v_u_2649_, 2);
v_u_2652_ = v_a_2658_;
v_v_2653_ = v_a_2659_;
goto v___jp_2651_;
}
case 3:
{
lean_object* v_a_2660_; lean_object* v_a_2661_; 
v_a_2660_ = lean_ctor_get(v_u_2649_, 0);
lean_inc(v_a_2660_);
v_a_2661_ = lean_ctor_get(v_u_2649_, 1);
lean_inc(v_a_2661_);
lean_dec_ref_known(v_u_2649_, 2);
v_u_2652_ = v_a_2660_;
v_v_2653_ = v_a_2661_;
goto v___jp_2651_;
}
case 5:
{
lean_object* v_a_2662_; uint8_t v___x_2663_; 
v_a_2662_ = lean_ctor_get(v_u_2649_, 0);
lean_inc(v_a_2662_);
lean_dec_ref_known(v_u_2649_, 1);
v___x_2663_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0___redArg(v_a_2662_, v_s_2650_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2664_ = lean_box(0);
v___x_2665_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Level_collectMVars_spec__1___redArg(v_a_2662_, v___x_2664_, v_s_2650_);
return v___x_2665_;
}
else
{
lean_dec(v_a_2662_);
return v_s_2650_;
}
}
default: 
{
lean_dec(v_u_2649_);
return v_s_2650_;
}
}
v___jp_2651_:
{
lean_object* v___x_2654_; 
v___x_2654_ = l_Lean_Level_collectMVars(v_v_2653_, v_s_2650_);
v_u_2649_ = v_u_2652_;
v_s_2650_ = v___x_2654_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0(lean_object* v_00_u03b2_2666_, lean_object* v_k_2667_, lean_object* v_t_2668_){
_start:
{
uint8_t v___x_2669_; 
v___x_2669_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0___redArg(v_k_2667_, v_t_2668_);
return v___x_2669_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0___boxed(lean_object* v_00_u03b2_2670_, lean_object* v_k_2671_, lean_object* v_t_2672_){
_start:
{
uint8_t v_res_2673_; lean_object* v_r_2674_; 
v_res_2673_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Level_collectMVars_spec__0(v_00_u03b2_2670_, v_k_2671_, v_t_2672_);
lean_dec(v_t_2672_);
lean_dec(v_k_2671_);
v_r_2674_ = lean_box(v_res_2673_);
return v_r_2674_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Level_collectMVars_spec__1(lean_object* v_00_u03b2_2675_, lean_object* v_k_2676_, lean_object* v_v_2677_, lean_object* v_t_2678_, lean_object* v_hl_2679_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Level_collectMVars_spec__1___redArg(v_k_2676_, v_v_2677_, v_t_2678_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_find_x3f_visit(lean_object* v_p_2681_, lean_object* v_u_2682_){
_start:
{
lean_object* v_u_2684_; lean_object* v_v_2685_; lean_object* v___x_2688_; uint8_t v___x_2689_; 
lean_inc_ref(v_p_2681_);
lean_inc(v_u_2682_);
v___x_2688_ = lean_apply_1(v_p_2681_, v_u_2682_);
v___x_2689_ = lean_unbox(v___x_2688_);
if (v___x_2689_ == 0)
{
switch(lean_obj_tag(v_u_2682_))
{
case 1:
{
lean_object* v_a_2690_; 
v_a_2690_ = lean_ctor_get(v_u_2682_, 0);
lean_inc(v_a_2690_);
lean_dec_ref_known(v_u_2682_, 1);
v_u_2682_ = v_a_2690_;
goto _start;
}
case 2:
{
lean_object* v_a_2692_; lean_object* v_a_2693_; 
v_a_2692_ = lean_ctor_get(v_u_2682_, 0);
lean_inc(v_a_2692_);
v_a_2693_ = lean_ctor_get(v_u_2682_, 1);
lean_inc(v_a_2693_);
lean_dec_ref_known(v_u_2682_, 2);
v_u_2684_ = v_a_2692_;
v_v_2685_ = v_a_2693_;
goto v___jp_2683_;
}
case 3:
{
lean_object* v_a_2694_; lean_object* v_a_2695_; 
v_a_2694_ = lean_ctor_get(v_u_2682_, 0);
lean_inc(v_a_2694_);
v_a_2695_ = lean_ctor_get(v_u_2682_, 1);
lean_inc(v_a_2695_);
lean_dec_ref_known(v_u_2682_, 2);
v_u_2684_ = v_a_2694_;
v_v_2685_ = v_a_2695_;
goto v___jp_2683_;
}
default: 
{
lean_object* v___x_2696_; 
lean_dec(v_u_2682_);
lean_dec_ref(v_p_2681_);
v___x_2696_ = lean_box(0);
return v___x_2696_;
}
}
}
else
{
lean_object* v___x_2697_; 
lean_dec_ref(v_p_2681_);
v___x_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2697_, 0, v_u_2682_);
return v___x_2697_;
}
v___jp_2683_:
{
lean_object* v___x_2686_; 
lean_inc_ref(v_p_2681_);
v___x_2686_ = l___private_Lean_Level_0__Lean_Level_find_x3f_visit(v_p_2681_, v_u_2684_);
if (lean_obj_tag(v___x_2686_) == 0)
{
v_u_2682_ = v_v_2685_;
goto _start;
}
else
{
lean_dec(v_v_2685_);
lean_dec_ref(v_p_2681_);
return v___x_2686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_find_x3f(lean_object* v_u_2698_, lean_object* v_p_2699_){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = l___private_Lean_Level_0__Lean_Level_find_x3f_visit(v_p_2699_, v_u_2698_);
return v___x_2700_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_any(lean_object* v_u_2701_, lean_object* v_p_2702_){
_start:
{
lean_object* v___x_2703_; 
v___x_2703_ = l___private_Lean_Level_0__Lean_Level_find_x3f_visit(v_p_2702_, v_u_2701_);
if (lean_obj_tag(v___x_2703_) == 0)
{
uint8_t v___x_2704_; 
v___x_2704_ = 0;
return v___x_2704_;
}
else
{
uint8_t v___x_2705_; 
lean_dec_ref_known(v___x_2703_, 1);
v___x_2705_ = 1;
return v___x_2705_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_any___boxed(lean_object* v_u_2706_, lean_object* v_p_2707_){
_start:
{
uint8_t v_res_2708_; lean_object* v_r_2709_; 
v_res_2708_ = l_Lean_Level_any(v_u_2706_, v_p_2707_);
v_r_2709_ = lean_box(v_res_2708_);
return v_r_2709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Nat_toLevel(lean_object* v_n_2710_){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = l_Lean_Level_ofNat(v_n_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Nat_toLevel___boxed(lean_object* v_n_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Lean_Nat_toLevel(v_n_2712_);
lean_dec(v_n_2712_);
return v_res_2713_;
}
}
lean_object* runtime_initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_PersistentHashSet(uint8_t builtin);
lean_object* runtime_initialize_Lean_Hygiene(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Level(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Hygiene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedData___aux__1 = _init_l_Lean_instInhabitedData___aux__1();
l_Lean_instInhabitedData = _init_l_Lean_instInhabitedData();
l_Lean_instInhabitedLevelMVarId_default = _init_l_Lean_instInhabitedLevelMVarId_default();
lean_mark_persistent(l_Lean_instInhabitedLevelMVarId_default);
l_Lean_instInhabitedLevelMVarId = _init_l_Lean_instInhabitedLevelMVarId();
lean_mark_persistent(l_Lean_instInhabitedLevelMVarId);
l_Lean_instInhabitedLMVarIdSet___aux__1 = _init_l_Lean_instInhabitedLMVarIdSet___aux__1();
lean_mark_persistent(l_Lean_instInhabitedLMVarIdSet___aux__1);
l_Lean_instInhabitedLMVarIdSet = _init_l_Lean_instInhabitedLMVarIdSet();
lean_mark_persistent(l_Lean_instInhabitedLMVarIdSet);
l_Lean_instEmptyCollectionLMVarIdSet___aux__1 = _init_l_Lean_instEmptyCollectionLMVarIdSet___aux__1();
lean_mark_persistent(l_Lean_instEmptyCollectionLMVarIdSet___aux__1);
l_Lean_instEmptyCollectionLMVarIdSet = _init_l_Lean_instEmptyCollectionLMVarIdSet();
lean_mark_persistent(l_Lean_instEmptyCollectionLMVarIdSet);
l_Lean_Level_zero___override = _init_l_Lean_Level_zero___override();
lean_mark_persistent(l_Lean_Level_zero___override);
l_Lean_instInhabitedLevel_default = _init_l_Lean_instInhabitedLevel_default();
lean_mark_persistent(l_Lean_instInhabitedLevel_default);
l_Lean_instInhabitedLevel = _init_l_Lean_instInhabitedLevel();
lean_mark_persistent(l_Lean_instInhabitedLevel);
l_Lean_levelZero = _init_l_Lean_levelZero();
lean_mark_persistent(l_Lean_levelZero);
l_Lean_Level_one = _init_l_Lean_Level_one();
lean_mark_persistent(l_Lean_Level_one);
l_Lean_levelOne = _init_l_Lean_levelOne();
lean_mark_persistent(l_Lean_levelOne);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Level(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* initialize_Lean_Data_PersistentHashSet(uint8_t builtin);
lean_object* initialize_Lean_Hygiene(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Level(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_PersistentHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Hygiene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Level(builtin);
}
#ifdef __cplusplus
}
#endif

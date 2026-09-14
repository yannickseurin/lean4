// Lean compiler output
// Module: Lean.Structure
// Imports: public import Lean.ProjFns public import Lean.Exception public import Init.While import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_eraseReps___redArg(lean_object*, lean_object*);
uint8_t l_Array_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_lt___boxed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_While_0__repeatM_erased___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_isSuffixOf(lean_object*, lean_object*);
lean_object* l_Array_erase___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_instReprBinderInfo_repr(uint8_t, lean_object*);
lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedConstructorVal_default;
static lean_once_cell_t l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedStructureFieldInfo_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedStructureFieldInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedStructureFieldInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureFieldInfo_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureFieldInfo;
static const lean_string_object l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprStructureFieldInfo_repr_spec__2(lean_object*);
static const lean_string_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fieldName"};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprStructureFieldInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "projFn"};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_instReprStructureFieldInfo_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__12;
static const lean_string_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "subobject\?"};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_instReprStructureFieldInfo_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__15;
static const lean_string_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "binderInfo"};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__16 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__17 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__17_value;
static const lean_string_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "autoParam\?"};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__18 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__18_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__19 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__19_value;
static const lean_string_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__20 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__20_value;
static lean_once_cell_t l_Lean_instReprStructureFieldInfo_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__21;
static lean_once_cell_t l_Lean_instReprStructureFieldInfo_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__22;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__23 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__23_value;
static const lean_ctor_object l_Lean_instReprStructureFieldInfo_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__20_value)}};
static const lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg___closed__24 = (const lean_object*)&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__24_value;
LEAN_EXPORT lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprStructureFieldInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprStructureFieldInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprStructureFieldInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprStructureFieldInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprStructureFieldInfo___closed__0 = (const lean_object*)&l_Lean_instReprStructureFieldInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprStructureFieldInfo = (const lean_object*)&l_Lean_instReprStructureFieldInfo___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_StructureFieldInfo_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_StructureFieldInfo_lt___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedStructureParentInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedStructureParentInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureParentInfo_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureParentInfo;
static const lean_array_object l_Lean_instInhabitedStructureInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedStructureInfo_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedStructureInfo_default___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedStructureInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedStructureInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureInfo_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureInfo;
LEAN_EXPORT uint8_t l_Lean_StructureInfo_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_StructureInfo_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_StructureInfo_getProjFn_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_StructureInfo_getProjFn_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedStructureState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedStructureState_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedStructureState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedStructureState_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureState_default;
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_instInhabitedStructureState;
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___closed__0_value;
static const lean_array_object l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__3_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Structure_0__Lean_initFn___closed__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Structure_0__Lean_initFn___closed__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Structure_0__Lean_initFn___closed__3_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__3_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Structure_0__Lean_initFn___closed__3_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Structure_0__Lean_initFn___closed__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Structure"};
static const lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Structure_0__Lean_initFn___closed__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__6_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__6_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Structure_0__Lean_initFn___closed__7_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Structure_0__Lean_initFn___lam__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__7_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Structure_0__Lean_initFn___closed__7_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Structure_0__Lean_initFn___closed__8_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Structure_0__Lean_initFn___lam__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__8_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Structure_0__Lean_initFn___closed__8_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__9_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__9_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__10_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__10_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Structure_0__Lean_initFn___closed__11_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "structureExt"};
static const lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__11_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Structure_0__Lean_initFn___closed__11_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__12_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__12_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Structure_0__Lean_initFn___closed__13_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Structure_0__Lean_initFn___lam__3_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__13_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Structure_0__Lean_initFn___closed__13_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__14_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__14_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__15_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__15_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__16_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__16_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__17_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__17_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__18_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__18_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_structureExt;
static const lean_array_object l_Lean_instInhabitedStructureDescr_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedStructureDescr_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedStructureDescr_default___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedStructureDescr_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedStructureDescr_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureDescr_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureDescr;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_registerStructure_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_registerStructure_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_registerStructure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_registerStructure___closed__0 = (const lean_object*)&l_Lean_registerStructure___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_registerStructure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setStructureParents___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setStructureParents___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_setStructureParents___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "cannot set structure parents for `"};
static const lean_object* l_Lean_setStructureParents___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_setStructureParents___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_setStructureParents___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setStructureParents___redArg___lam__1___closed__1;
static const lean_string_object l_Lean_setStructureParents___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "`, structure not defined in current module"};
static const lean_object* l_Lean_setStructureParents___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_setStructureParents___redArg___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_setStructureParents___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setStructureParents___redArg___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_setStructureParents___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_setStructureParents___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_setStructureParents___redArg___closed__0 = (const lean_object*)&l_Lean_setStructureParents___redArg___closed__0_value;
static const lean_closure_object l_Lean_setStructureParents___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_setStructureParents___redArg___closed__1 = (const lean_object*)&l_Lean_setStructureParents___redArg___closed__1_value;
static lean_once_cell_t l_Lean_setStructureParents___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setStructureParents___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setStructureParents___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setStructureParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStructureInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getStructureInfo_spec__0(lean_object*);
static const lean_string_object l_Lean_getStructureInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Structure"};
static const lean_object* l_Lean_getStructureInfo___closed__0 = (const lean_object*)&l_Lean_getStructureInfo___closed__0_value;
static const lean_string_object l_Lean_getStructureInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.getStructureInfo"};
static const lean_object* l_Lean_getStructureInfo___closed__1 = (const lean_object*)&l_Lean_getStructureInfo___closed__1_value;
static const lean_string_object l_Lean_getStructureInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structure expected"};
static const lean_object* l_Lean_getStructureInfo___closed__2 = (const lean_object*)&l_Lean_getStructureInfo___closed__2_value;
static lean_once_cell_t l_Lean_getStructureInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getStructureInfo___closed__3;
LEAN_EXPORT lean_object* l_Lean_getStructureInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getStructureCtor_spec__0(lean_object*);
static const lean_string_object l_Lean_getStructureCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.getStructureCtor"};
static const lean_object* l_Lean_getStructureCtor___closed__0 = (const lean_object*)&l_Lean_getStructureCtor___closed__0_value;
static lean_once_cell_t l_Lean_getStructureCtor___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getStructureCtor___closed__1;
static const lean_string_object l_Lean_getStructureCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ill-formed environment"};
static const lean_object* l_Lean_getStructureCtor___closed__2 = (const lean_object*)&l_Lean_getStructureCtor___closed__2_value;
static lean_once_cell_t l_Lean_getStructureCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getStructureCtor___closed__3;
LEAN_EXPORT lean_object* l_Lean_getStructureCtor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getFieldInfo_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStructureParentInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStructureSubobjects(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_findField_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_findField_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_findField_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_findField_x3f_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_findField_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findField_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findParentProjStruct_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findParentProjStruct_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkFlatCtorOfStructCtorName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_flat_ctor"};
static const lean_object* l_Lean_mkFlatCtorOfStructCtorName___closed__0 = (const lean_object*)&l_Lean_mkFlatCtorOfStructCtorName___closed__0_value;
static const lean_ctor_object l_Lean_mkFlatCtorOfStructCtorName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkFlatCtorOfStructCtorName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 244, 96, 108, 193, 103, 182, 1)}};
static const lean_object* l_Lean_mkFlatCtorOfStructCtorName___closed__1 = (const lean_object*)&l_Lean_mkFlatCtorOfStructCtorName___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkFlatCtorOfStructCtorName(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_getStructureFieldsFlattened___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isStructure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isStructure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjFnForField_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjFnInfoForField_x3f(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkDefaultFnOfProjFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_default"};
static const lean_object* l_Lean_mkDefaultFnOfProjFn___closed__0 = (const lean_object*)&l_Lean_mkDefaultFnOfProjFn___closed__0_value;
static const lean_ctor_object l_Lean_mkDefaultFnOfProjFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkDefaultFnOfProjFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(150, 118, 55, 225, 252, 34, 96, 112)}};
static const lean_object* l_Lean_mkDefaultFnOfProjFn___closed__1 = (const lean_object*)&l_Lean_mkDefaultFnOfProjFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkDefaultFnOfProjFn(lean_object*);
static const lean_string_object l_Lean_mkInheritedDefaultFnOfProjFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "_inherited_default"};
static const lean_object* l_Lean_mkInheritedDefaultFnOfProjFn___closed__0 = (const lean_object*)&l_Lean_mkInheritedDefaultFnOfProjFn___closed__0_value;
static const lean_ctor_object l_Lean_mkInheritedDefaultFnOfProjFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkInheritedDefaultFnOfProjFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 137, 199, 23, 68, 254, 123, 5)}};
static const lean_object* l_Lean_mkInheritedDefaultFnOfProjFn___closed__1 = (const lean_object*)&l_Lean_mkInheritedDefaultFnOfProjFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkInheritedDefaultFnOfProjFn(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getFnForFieldUsing_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_getDefaultFnForField_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkDefaultFnOfProjFn, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getDefaultFnForField_x3f___closed__0 = (const lean_object*)&l_Lean_getDefaultFnForField_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getDefaultFnForField_x3f(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_getEffectiveDefaultFnForField_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkInheritedDefaultFnOfProjFn, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getEffectiveDefaultFnForField_x3f___closed__0 = (const lean_object*)&l_Lean_getEffectiveDefaultFnForField_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getEffectiveDefaultFnForField_x3f(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkAutoParamFnOfProjFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_autoParam"};
static const lean_object* l_Lean_mkAutoParamFnOfProjFn___closed__0 = (const lean_object*)&l_Lean_mkAutoParamFnOfProjFn___closed__0_value;
static const lean_ctor_object l_Lean_mkAutoParamFnOfProjFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkAutoParamFnOfProjFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(126, 175, 123, 123, 31, 136, 163, 222)}};
static const lean_object* l_Lean_mkAutoParamFnOfProjFn___closed__1 = (const lean_object*)&l_Lean_mkAutoParamFnOfProjFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkAutoParamFnOfProjFn(lean_object*);
static const lean_closure_object l_Lean_getAutoParamFnForField_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkAutoParamFnOfProjFn, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getAutoParamFnForField_x3f___closed__0 = (const lean_object*)&l_Lean_getAutoParamFnForField_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getAutoParamFnForField_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getPathToBaseStructure_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_isNonRecStructure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isNonRecStructure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getNonRecStructureCtor_x3f_spec__0(lean_object*);
static const lean_string_object l_Lean_getNonRecStructureCtor_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.getNonRecStructureCtor\?"};
static const lean_object* l_Lean_getNonRecStructureCtor_x3f___closed__0 = (const lean_object*)&l_Lean_getNonRecStructureCtor_x3f___closed__0_value;
static lean_once_cell_t l_Lean_getNonRecStructureCtor_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getNonRecStructureCtor_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_getNonRecStructureCtor_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getNonRecStructureNumFields(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedStructureResolutionState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedStructureResolutionState_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureResolutionState_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureResolutionState;
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_structureResolutionExt;
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getStructureResolutionOrder_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getStructureResolutionOrder_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_setStructureResolutionOrder(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureResolutionOrderConflict_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedStructureResolutionOrderConflict;
static const lean_array_object l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__0_value;
static const lean_array_object l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__1_value;
static const lean_ctor_object l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__0_value),((lean_object*)&l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__1_value)}};
static const lean_object* l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedStructureResolutionOrderResult_default = (const lean_object*)&l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedStructureResolutionOrderResult = (const lean_object*)&l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__5(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__0_value;
static const lean_closure_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__1_value;
static const lean_closure_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__2 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__2_value;
static const lean_closure_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__3 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__3_value;
static const lean_closure_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__4 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__4_value;
static const lean_closure_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__5 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__5_value;
static const lean_closure_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__6 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__6_value;
static const lean_ctor_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__0_value),((lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__1_value)}};
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__7 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__7_value;
static const lean_ctor_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__7_value),((lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__2_value),((lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__3_value),((lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__4_value),((lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__5_value)}};
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__8 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__8_value;
static const lean_ctor_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__8_value),((lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__6_value)}};
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9_value;
LEAN_EXPORT uint8_t l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__6(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__7(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__0;
static const lean_ctor_object l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__1 = (const lean_object*)&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_mergeStructureResolutionOrders___redArg___lam__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__10___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_mergeStructureResolutionOrders___redArg___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_lt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__12___closed__0 = (const lean_object*)&l_Lean_mergeStructureResolutionOrders___redArg___lam__12___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__13(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_mergeStructureResolutionOrders___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__14___closed__0 = (const lean_object*)&l_Lean_mergeStructureResolutionOrders___redArg___lam__14___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__14(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_mergeStructureResolutionOrders___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_computeStructureResolutionOrder___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_computeStructureResolutionOrder___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_computeStructureResolutionOrder___redArg___closed__0 = (const lean_object*)&l_Lean_computeStructureResolutionOrder___redArg___closed__0_value;
static const lean_closure_object l_Lean_mergeStructureResolutionOrders___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mergeStructureResolutionOrders___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mergeStructureResolutionOrders___redArg___closed__0 = (const lean_object*)&l_Lean_mergeStructureResolutionOrders___redArg___closed__0_value;
static const lean_closure_object l_Lean_mergeStructureResolutionOrders___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mergeStructureResolutionOrders___redArg___lam__1, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_mergeStructureResolutionOrders___redArg___closed__0_value)} };
static const lean_object* l_Lean_mergeStructureResolutionOrders___redArg___closed__1 = (const lean_object*)&l_Lean_mergeStructureResolutionOrders___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStructureResolutionOrder___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStructureResolutionOrder___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_getStructureResolutionOrder___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getStructureResolutionOrder___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getStructureResolutionOrder___redArg___closed__0 = (const lean_object*)&l_Lean_getStructureResolutionOrder___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_getStructureResolutionOrder___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStructureResolutionOrder(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAllParentStructures___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAllParentStructures___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getAllParentStructures(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_unsafeCast___redArg(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__1(void){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_3_ = 0;
v___x_4_ = lean_box(0);
v___x_5_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_6_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_5_);
lean_ctor_set(v___x_6_, 2, v___x_4_);
lean_ctor_set(v___x_6_, 3, v___x_4_);
lean_ctor_set_uint8(v___x_6_, sizeof(void*)*4, v___x_3_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureFieldInfo_default(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__1, &l_Lean_instInhabitedStructureFieldInfo_default___closed__1_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__1);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureFieldInfo(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_instInhabitedStructureFieldInfo_default;
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0(lean_object* v_x_15_, lean_object* v_x_16_){
_start:
{
if (lean_obj_tag(v_x_15_) == 0)
{
lean_object* v___x_17_; 
v___x_17_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__1));
return v___x_17_;
}
else
{
lean_object* v_val_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v_val_18_ = lean_ctor_get(v_x_15_, 0);
lean_inc(v_val_18_);
lean_dec_ref_known(v_x_15_, 1);
v___x_19_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__3));
v___x_20_ = lean_unsigned_to_nat(1024u);
v___x_21_ = l_Lean_Name_reprPrec(v_val_18_, v___x_20_);
v___x_22_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_19_);
lean_ctor_set(v___x_22_, 1, v___x_21_);
v___x_23_ = l_Repr_addAppParen(v___x_22_, v_x_16_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___boxed(lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0(v_x_24_, v_x_25_);
lean_dec(v_x_25_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__1(lean_object* v_x_27_, lean_object* v_x_28_){
_start:
{
if (lean_obj_tag(v_x_27_) == 0)
{
lean_object* v___x_29_; 
v___x_29_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__1));
return v___x_29_;
}
else
{
lean_object* v_val_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_val_30_ = lean_ctor_get(v_x_27_, 0);
lean_inc(v_val_30_);
lean_dec_ref_known(v_x_27_, 1);
v___x_31_ = ((lean_object*)(l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0___closed__3));
v___x_32_ = lean_unsigned_to_nat(1024u);
v___x_33_ = l_Lean_instReprExpr_repr(v_val_30_, v___x_32_);
v___x_34_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_31_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
v___x_35_ = l_Repr_addAppParen(v___x_34_, v_x_28_);
return v___x_35_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__1___boxed(lean_object* v_x_36_, lean_object* v_x_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__1(v_x_36_, v_x_37_);
lean_dec(v_x_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprStructureFieldInfo_repr_spec__2(lean_object* v_a_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_nat_to_int(v_a_39_);
return v___x_40_;
}
}
static lean_object* _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_unsigned_to_nat(13u);
v___x_55_ = lean_nat_to_int(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_unsigned_to_nat(10u);
v___x_63_ = lean_nat_to_int(v___x_62_);
return v___x_63_;
}
}
static lean_object* _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_unsigned_to_nat(14u);
v___x_68_ = lean_nat_to_int(v___x_67_);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__0));
v___x_77_ = lean_string_length(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = lean_obj_once(&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__21, &l_Lean_instReprStructureFieldInfo_repr___redArg___closed__21_once, _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__21);
v___x_79_ = lean_nat_to_int(v___x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprStructureFieldInfo_repr___redArg(lean_object* v_x_84_){
_start:
{
lean_object* v_fieldName_85_; lean_object* v_projFn_86_; lean_object* v_subobject_x3f_87_; uint8_t v_binderInfo_88_; lean_object* v_autoParam_x3f_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_fieldName_85_ = lean_ctor_get(v_x_84_, 0);
lean_inc(v_fieldName_85_);
v_projFn_86_ = lean_ctor_get(v_x_84_, 1);
lean_inc(v_projFn_86_);
v_subobject_x3f_87_ = lean_ctor_get(v_x_84_, 2);
lean_inc(v_subobject_x3f_87_);
v_binderInfo_88_ = lean_ctor_get_uint8(v_x_84_, sizeof(void*)*4);
v_autoParam_x3f_89_ = lean_ctor_get(v_x_84_, 3);
lean_inc(v_autoParam_x3f_89_);
lean_dec_ref(v_x_84_);
v___x_90_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__5));
v___x_91_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__6));
v___x_92_ = lean_obj_once(&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__7, &l_Lean_instReprStructureFieldInfo_repr___redArg___closed__7_once, _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__7);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = l_Lean_Name_reprPrec(v_fieldName_85_, v___x_93_);
v___x_95_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_92_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = 0;
v___x_97_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_97_, 0, v___x_95_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*1, v___x_96_);
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_91_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
v___x_99_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__9));
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_box(1);
v___x_102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set(v___x_102_, 1, v___x_101_);
v___x_103_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__11));
v___x_104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_90_);
v___x_106_ = lean_obj_once(&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__12, &l_Lean_instReprStructureFieldInfo_repr___redArg___closed__12_once, _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__12);
v___x_107_ = l_Lean_Name_reprPrec(v_projFn_86_, v___x_93_);
v___x_108_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set_uint8(v___x_109_, sizeof(void*)*1, v___x_96_);
v___x_110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_105_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v___x_99_);
v___x_112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set(v___x_112_, 1, v___x_101_);
v___x_113_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__14));
v___x_114_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_112_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___x_90_);
v___x_116_ = lean_obj_once(&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__15, &l_Lean_instReprStructureFieldInfo_repr___redArg___closed__15_once, _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__15);
v___x_117_ = l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__0(v_subobject_x3f_87_, v___x_93_);
v___x_118_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*1, v___x_96_);
v___x_120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_115_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_99_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_101_);
v___x_123_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__17));
v___x_124_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_122_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
v___x_125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_90_);
v___x_126_ = l_Lean_instReprBinderInfo_repr(v_binderInfo_88_, v___x_93_);
v___x_127_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_116_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set_uint8(v___x_128_, sizeof(void*)*1, v___x_96_);
v___x_129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_125_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_99_);
v___x_131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v___x_101_);
v___x_132_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__19));
v___x_133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_131_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v___x_90_);
v___x_135_ = l_Option_repr___at___00Lean_instReprStructureFieldInfo_repr_spec__1(v_autoParam_x3f_89_, v___x_93_);
v___x_136_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_116_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set_uint8(v___x_137_, sizeof(void*)*1, v___x_96_);
v___x_138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_134_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = lean_obj_once(&l_Lean_instReprStructureFieldInfo_repr___redArg___closed__22, &l_Lean_instReprStructureFieldInfo_repr___redArg___closed__22_once, _init_l_Lean_instReprStructureFieldInfo_repr___redArg___closed__22);
v___x_140_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__23));
v___x_141_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v___x_138_);
v___x_142_ = ((lean_object*)(l_Lean_instReprStructureFieldInfo_repr___redArg___closed__24));
v___x_143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_141_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_139_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
v___x_145_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_145_, 0, v___x_144_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*1, v___x_96_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprStructureFieldInfo_repr(lean_object* v_x_146_, lean_object* v_prec_147_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_instReprStructureFieldInfo_repr___redArg(v_x_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprStructureFieldInfo_repr___boxed(lean_object* v_x_149_, lean_object* v_prec_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Lean_instReprStructureFieldInfo_repr(v_x_149_, v_prec_150_);
lean_dec(v_prec_150_);
return v_res_151_;
}
}
LEAN_EXPORT uint8_t l_Lean_StructureFieldInfo_lt(lean_object* v_i_u2081_154_, lean_object* v_i_u2082_155_){
_start:
{
lean_object* v_fieldName_156_; lean_object* v_fieldName_157_; uint8_t v___x_158_; 
v_fieldName_156_ = lean_ctor_get(v_i_u2081_154_, 0);
v_fieldName_157_ = lean_ctor_get(v_i_u2082_155_, 0);
v___x_158_ = l_Lean_Name_quickLt(v_fieldName_156_, v_fieldName_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_StructureFieldInfo_lt___boxed(lean_object* v_i_u2081_159_, lean_object* v_i_u2082_160_){
_start:
{
uint8_t v_res_161_; lean_object* v_r_162_; 
v_res_161_ = l_Lean_StructureFieldInfo_lt(v_i_u2081_159_, v_i_u2082_160_);
lean_dec_ref(v_i_u2082_160_);
lean_dec_ref(v_i_u2081_159_);
v_r_162_ = lean_box(v_res_161_);
return v_r_162_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureParentInfo_default___closed__0(void){
_start:
{
uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = 0;
v___x_164_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_165_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_165_, 0, v___x_164_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*2, v___x_163_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureParentInfo_default(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&l_Lean_instInhabitedStructureParentInfo_default___closed__0, &l_Lean_instInhabitedStructureParentInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureParentInfo_default___closed__0);
return v___x_166_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureParentInfo(void){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_instInhabitedStructureParentInfo_default;
return v___x_167_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureInfo_default___closed__1(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_170_ = ((lean_object*)(l_Lean_instInhabitedStructureInfo_default___closed__0));
v___x_171_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_172_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v___x_170_);
lean_ctor_set(v___x_172_, 2, v___x_170_);
lean_ctor_set(v___x_172_, 3, v___x_170_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureInfo_default(void){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&l_Lean_instInhabitedStructureInfo_default___closed__1, &l_Lean_instInhabitedStructureInfo_default___closed__1_once, _init_l_Lean_instInhabitedStructureInfo_default___closed__1);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureInfo(void){
_start:
{
lean_object* v___x_174_; 
v___x_174_ = l_Lean_instInhabitedStructureInfo_default;
return v___x_174_;
}
}
LEAN_EXPORT uint8_t l_Lean_StructureInfo_lt(lean_object* v_i_u2081_175_, lean_object* v_i_u2082_176_){
_start:
{
lean_object* v_structName_177_; lean_object* v_structName_178_; uint8_t v___x_179_; 
v_structName_177_ = lean_ctor_get(v_i_u2081_175_, 0);
v_structName_178_ = lean_ctor_get(v_i_u2082_176_, 0);
v___x_179_ = l_Lean_Name_quickLt(v_structName_177_, v_structName_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_StructureInfo_lt___boxed(lean_object* v_i_u2081_180_, lean_object* v_i_u2082_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_Lean_StructureInfo_lt(v_i_u2081_180_, v_i_u2082_181_);
lean_dec_ref(v_i_u2082_181_);
lean_dec_ref(v_i_u2081_180_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___redArg(lean_object* v_as_184_, lean_object* v_k_185_, lean_object* v_x_186_, lean_object* v_x_187_){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v_m_190_; lean_object* v_a_191_; uint8_t v___x_192_; 
v___x_188_ = lean_nat_add(v_x_186_, v_x_187_);
v___x_189_ = lean_unsigned_to_nat(1u);
v_m_190_ = lean_nat_shiftr(v___x_188_, v___x_189_);
lean_dec(v___x_188_);
v_a_191_ = lean_array_fget_borrowed(v_as_184_, v_m_190_);
v___x_192_ = l_Lean_StructureFieldInfo_lt(v_a_191_, v_k_185_);
if (v___x_192_ == 0)
{
uint8_t v___x_193_; 
lean_dec(v_x_187_);
v___x_193_ = l_Lean_StructureFieldInfo_lt(v_k_185_, v_a_191_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; 
lean_dec(v_m_190_);
lean_dec(v_x_186_);
lean_inc(v_a_191_);
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v_a_191_);
return v___x_194_;
}
else
{
lean_object* v___x_195_; uint8_t v___x_196_; lean_object* v___x_197_; uint8_t v___y_199_; 
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = lean_nat_dec_eq(v_m_190_, v___x_195_);
v___x_197_ = lean_nat_sub(v_m_190_, v___x_189_);
lean_dec(v_m_190_);
if (v___x_196_ == 0)
{
uint8_t v___x_202_; 
v___x_202_ = lean_nat_dec_lt(v___x_197_, v_x_186_);
v___y_199_ = v___x_202_;
goto v___jp_198_;
}
else
{
v___y_199_ = v___x_196_;
goto v___jp_198_;
}
v___jp_198_:
{
if (v___y_199_ == 0)
{
v_x_187_ = v___x_197_;
goto _start;
}
else
{
lean_object* v___x_201_; 
lean_dec(v___x_197_);
lean_dec(v_x_186_);
v___x_201_ = lean_box(0);
return v___x_201_;
}
}
}
}
else
{
lean_object* v___x_203_; uint8_t v___x_204_; 
lean_dec(v_x_186_);
v___x_203_ = lean_nat_add(v_m_190_, v___x_189_);
lean_dec(v_m_190_);
v___x_204_ = lean_nat_dec_le(v___x_203_, v_x_187_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
lean_dec(v___x_203_);
lean_dec(v_x_187_);
v___x_205_ = lean_box(0);
return v___x_205_;
}
else
{
v_x_186_ = v___x_203_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___redArg___boxed(lean_object* v_as_207_, lean_object* v_k_208_, lean_object* v_x_209_, lean_object* v_x_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___redArg(v_as_207_, v_k_208_, v_x_209_, v_x_210_);
lean_dec_ref(v_k_208_);
lean_dec_ref(v_as_207_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_StructureInfo_getProjFn_x3f(lean_object* v_info_212_, lean_object* v_i_213_){
_start:
{
lean_object* v_fieldNames_214_; lean_object* v_fieldInfo_215_; lean_object* v___x_216_; uint8_t v___x_217_; 
v_fieldNames_214_ = lean_ctor_get(v_info_212_, 1);
v_fieldInfo_215_ = lean_ctor_get(v_info_212_, 2);
v___x_216_ = lean_array_get_size(v_fieldNames_214_);
v___x_217_ = lean_nat_dec_lt(v_i_213_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
v___x_218_ = lean_box(0);
return v___x_218_;
}
else
{
lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_219_ = lean_unsigned_to_nat(0u);
v___x_220_ = lean_array_get_size(v_fieldInfo_215_);
v___x_221_ = lean_nat_dec_lt(v___x_219_, v___x_220_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
v___x_222_ = lean_box(0);
return v___x_222_;
}
else
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_223_ = lean_box(0);
v___x_224_ = lean_unsigned_to_nat(1u);
v___x_225_ = lean_nat_sub(v___x_220_, v___x_224_);
v___x_226_ = lean_nat_dec_le(v___x_219_, v___x_225_);
if (v___x_226_ == 0)
{
lean_dec(v___x_225_);
return v___x_223_;
}
else
{
lean_object* v_fieldName_227_; lean_object* v___x_228_; uint8_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_fieldName_227_ = lean_array_fget_borrowed(v_fieldNames_214_, v_i_213_);
v___x_228_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_229_ = 0;
lean_inc(v_fieldName_227_);
v___x_230_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_230_, 0, v_fieldName_227_);
lean_ctor_set(v___x_230_, 1, v___x_228_);
lean_ctor_set(v___x_230_, 2, v___x_223_);
lean_ctor_set(v___x_230_, 3, v___x_223_);
lean_ctor_set_uint8(v___x_230_, sizeof(void*)*4, v___x_229_);
v___x_231_ = l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___redArg(v_fieldInfo_215_, v___x_230_, v___x_219_, v___x_225_);
lean_dec_ref_known(v___x_230_, 4);
if (lean_obj_tag(v___x_231_) == 0)
{
return v___x_223_;
}
else
{
lean_object* v_val_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_240_; 
v_val_232_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_240_ == 0)
{
v___x_234_ = v___x_231_;
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_val_232_);
lean_dec(v___x_231_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_240_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v_projFn_236_; lean_object* v___x_238_; 
v_projFn_236_ = lean_ctor_get(v_val_232_, 1);
lean_inc(v_projFn_236_);
lean_dec(v_val_232_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v_projFn_236_);
v___x_238_ = v___x_234_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_projFn_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_StructureInfo_getProjFn_x3f___boxed(lean_object* v_info_241_, lean_object* v_i_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_StructureInfo_getProjFn_x3f(v_info_241_, v_i_242_);
lean_dec(v_i_242_);
lean_dec_ref(v_info_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0(lean_object* v_as_244_, lean_object* v_k_245_, lean_object* v_x_246_, lean_object* v_x_247_, lean_object* v_x_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___redArg(v_as_244_, v_k_245_, v_x_246_, v_x_247_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___boxed(lean_object* v_as_250_, lean_object* v_k_251_, lean_object* v_x_252_, lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0(v_as_250_, v_k_251_, v_x_252_, v_x_253_, v_x_254_);
lean_dec_ref(v_k_251_);
lean_dec_ref(v_as_250_);
return v_res_255_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureState_default___closed__0(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_256_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureState_default___closed__1(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = lean_obj_once(&l_Lean_instInhabitedStructureState_default___closed__0, &l_Lean_instInhabitedStructureState_default___closed__0_once, _init_l_Lean_instInhabitedStructureState_default___closed__0);
v___x_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureState_default(void){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lean_obj_once(&l_Lean_instInhabitedStructureState_default___closed__1, &l_Lean_instInhabitedStructureState_default___closed__1_once, _init_l_Lean_instInhabitedStructureState_default___closed__1);
return v___x_259_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_instInhabitedStructureState(void){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_instInhabitedStructureState_default;
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object* v_x_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lean_box(0);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object* v_x_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(v_x_263_);
lean_dec_ref(v_x_263_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__1(size_t v_sz_265_, size_t v_i_266_, lean_object* v_bs_267_){
_start:
{
uint8_t v___x_268_; 
v___x_268_ = lean_usize_dec_lt(v_i_266_, v_sz_265_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = l_unsafeCast___redArg(v_bs_267_);
lean_dec_ref(v_bs_267_);
return v___x_269_;
}
else
{
lean_object* v_v_270_; lean_object* v___x_271_; lean_object* v_snd_272_; lean_object* v___x_273_; lean_object* v_bs_x27_274_; size_t v___x_275_; size_t v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_v_270_ = lean_array_uget_borrowed(v_bs_267_, v_i_266_);
v___x_271_ = l_unsafeCast___redArg(v_v_270_);
v_snd_272_ = lean_ctor_get(v___x_271_, 1);
lean_inc(v_snd_272_);
lean_dec(v___x_271_);
v___x_273_ = lean_unsigned_to_nat(0u);
v_bs_x27_274_ = lean_array_uset(v_bs_267_, v_i_266_, v___x_273_);
v___x_275_ = ((size_t)1ULL);
v___x_276_ = lean_usize_add(v_i_266_, v___x_275_);
v___x_277_ = l_unsafeCast___redArg(v_snd_272_);
lean_dec(v_snd_272_);
v___x_278_ = lean_array_uset(v_bs_x27_274_, v_i_266_, v___x_277_);
v_i_266_ = v___x_276_;
v_bs_267_ = v___x_278_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__1___boxed(lean_object* v_sz_280_, lean_object* v_i_281_, lean_object* v_bs_282_){
_start:
{
size_t v_sz_boxed_283_; size_t v_i_boxed_284_; lean_object* v_res_285_; 
v_sz_boxed_283_ = lean_unbox_usize(v_sz_280_);
lean_dec(v_sz_280_);
v_i_boxed_284_ = lean_unbox_usize(v_i_281_);
lean_dec(v_i_281_);
v_res_285_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__1(v_sz_boxed_283_, v_i_boxed_284_, v_bs_282_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object* v_ps_286_, lean_object* v_k_287_, lean_object* v_v_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v_k_287_);
lean_ctor_set(v___x_289_, 1, v_v_288_);
v___x_290_ = lean_array_push(v_ps_286_, v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9___redArg(lean_object* v_f_291_, lean_object* v_keys_292_, lean_object* v_vals_293_, lean_object* v_i_294_, lean_object* v_acc_295_){
_start:
{
lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_296_ = lean_array_get_size(v_keys_292_);
v___x_297_ = lean_nat_dec_lt(v_i_294_, v___x_296_);
if (v___x_297_ == 0)
{
lean_dec(v_i_294_);
lean_dec(v_f_291_);
return v_acc_295_;
}
else
{
lean_object* v_k_298_; lean_object* v_v_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_k_298_ = lean_array_fget_borrowed(v_keys_292_, v_i_294_);
v_v_299_ = lean_array_fget_borrowed(v_vals_293_, v_i_294_);
lean_inc(v_f_291_);
lean_inc(v_v_299_);
lean_inc(v_k_298_);
v___x_300_ = lean_apply_3(v_f_291_, v_acc_295_, v_k_298_, v_v_299_);
v___x_301_ = lean_unsigned_to_nat(1u);
v___x_302_ = lean_nat_add(v_i_294_, v___x_301_);
lean_dec(v_i_294_);
v_i_294_ = v___x_302_;
v_acc_295_ = v___x_300_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9___redArg___boxed(lean_object* v_f_304_, lean_object* v_keys_305_, lean_object* v_vals_306_, lean_object* v_i_307_, lean_object* v_acc_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9___redArg(v_f_304_, v_keys_305_, v_vals_306_, v_i_307_, v_acc_308_);
lean_dec_ref(v_vals_306_);
lean_dec_ref(v_keys_305_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8___redArg(lean_object* v_f_310_, lean_object* v_as_311_, size_t v_i_312_, size_t v_stop_313_, lean_object* v_b_314_){
_start:
{
lean_object* v___y_316_; uint8_t v___x_320_; 
v___x_320_ = lean_usize_dec_eq(v_i_312_, v_stop_313_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; 
v___x_321_ = lean_array_uget_borrowed(v_as_311_, v_i_312_);
switch(lean_obj_tag(v___x_321_))
{
case 0:
{
lean_object* v_key_322_; lean_object* v_val_323_; lean_object* v___x_324_; 
v_key_322_ = lean_ctor_get(v___x_321_, 0);
v_val_323_ = lean_ctor_get(v___x_321_, 1);
lean_inc(v_f_310_);
lean_inc(v_val_323_);
lean_inc(v_key_322_);
v___x_324_ = lean_apply_3(v_f_310_, v_b_314_, v_key_322_, v_val_323_);
v___y_316_ = v___x_324_;
goto v___jp_315_;
}
case 1:
{
lean_object* v_node_325_; lean_object* v___x_326_; 
v_node_325_ = lean_ctor_get(v___x_321_, 0);
lean_inc(v_f_310_);
v___x_326_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_310_, v_node_325_, v_b_314_);
v___y_316_ = v___x_326_;
goto v___jp_315_;
}
default: 
{
v___y_316_ = v_b_314_;
goto v___jp_315_;
}
}
}
else
{
lean_dec(v_f_310_);
return v_b_314_;
}
v___jp_315_:
{
size_t v___x_317_; size_t v___x_318_; 
v___x_317_ = ((size_t)1ULL);
v___x_318_ = lean_usize_add(v_i_312_, v___x_317_);
v_i_312_ = v___x_318_;
v_b_314_ = v___y_316_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_f_327_, lean_object* v_x_328_, lean_object* v_x_329_){
_start:
{
if (lean_obj_tag(v_x_328_) == 0)
{
lean_object* v_es_330_; lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v_es_330_ = lean_ctor_get(v_x_328_, 0);
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_332_ = lean_array_get_size(v_es_330_);
v___x_333_ = lean_nat_dec_lt(v___x_331_, v___x_332_);
if (v___x_333_ == 0)
{
lean_dec(v_f_327_);
return v_x_329_;
}
else
{
size_t v___x_334_; size_t v___x_335_; lean_object* v___x_336_; 
v___x_334_ = ((size_t)0ULL);
v___x_335_ = lean_usize_of_nat(v___x_332_);
v___x_336_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8___redArg(v_f_327_, v_es_330_, v___x_334_, v___x_335_, v_x_329_);
return v___x_336_;
}
}
else
{
lean_object* v_ks_337_; lean_object* v_vs_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_ks_337_ = lean_ctor_get(v_x_328_, 0);
v_vs_338_ = lean_ctor_get(v_x_328_, 1);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9___redArg(v_f_327_, v_ks_337_, v_vs_338_, v___x_339_, v_x_329_);
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_f_341_, lean_object* v_x_342_, lean_object* v_x_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_341_, v_x_342_, v_x_343_);
lean_dec_ref(v_x_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8___redArg___boxed(lean_object* v_f_345_, lean_object* v_as_346_, lean_object* v_i_347_, lean_object* v_stop_348_, lean_object* v_b_349_){
_start:
{
size_t v_i_boxed_350_; size_t v_stop_boxed_351_; lean_object* v_res_352_; 
v_i_boxed_350_ = lean_unbox_usize(v_i_347_);
lean_dec(v_i_347_);
v_stop_boxed_351_ = lean_unbox_usize(v_stop_348_);
lean_dec(v_stop_348_);
v_res_352_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8___redArg(v_f_345_, v_as_346_, v_i_boxed_350_, v_stop_boxed_351_, v_b_349_);
lean_dec_ref(v_as_346_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg___lam__0(lean_object* v_f_353_, lean_object* v_x1_354_, lean_object* v_x2_355_, lean_object* v_x3_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lean_apply_3(v_f_353_, v_x1_354_, v_x2_355_, v_x3_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_map_358_, lean_object* v_f_359_, lean_object* v_init_360_){
_start:
{
lean_object* v___f_361_; lean_object* v___x_362_; 
v___f_361_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_361_, 0, v_f_359_);
v___x_362_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v___f_361_, v_map_358_, v_init_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_map_363_, lean_object* v_f_364_, lean_object* v_init_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg(v_map_363_, v_f_364_, v_init_365_);
lean_dec_ref(v_map_363_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg(lean_object* v_m_370_){
_start:
{
lean_object* v___f_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___f_371_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___closed__0));
v___x_372_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___closed__1));
v___x_373_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg(v_m_370_, v___f_371_, v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_m_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg(v_m_374_);
lean_dec_ref(v_m_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object* v_hi_376_, lean_object* v_pivot_377_, lean_object* v_as_378_, lean_object* v_i_379_, lean_object* v_k_380_){
_start:
{
uint8_t v___x_381_; 
v___x_381_ = lean_nat_dec_lt(v_k_380_, v_hi_376_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; lean_object* v___x_383_; 
lean_dec(v_k_380_);
v___x_382_ = lean_array_fswap(v_as_378_, v_i_379_, v_hi_376_);
v___x_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_383_, 0, v_i_379_);
lean_ctor_set(v___x_383_, 1, v___x_382_);
return v___x_383_;
}
else
{
lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_384_ = lean_array_fget_borrowed(v_as_378_, v_k_380_);
v___x_385_ = l_Lean_StructureInfo_lt(v___x_384_, v_pivot_377_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = lean_unsigned_to_nat(1u);
v___x_387_ = lean_nat_add(v_k_380_, v___x_386_);
lean_dec(v_k_380_);
v_k_380_ = v___x_387_;
goto _start;
}
else
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_389_ = lean_array_fswap(v_as_378_, v_i_379_, v_k_380_);
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = lean_nat_add(v_i_379_, v___x_390_);
lean_dec(v_i_379_);
v___x_392_ = lean_nat_add(v_k_380_, v___x_390_);
lean_dec(v_k_380_);
v_as_378_ = v___x_389_;
v_i_379_ = v___x_391_;
v_k_380_ = v___x_392_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object* v_hi_394_, lean_object* v_pivot_395_, lean_object* v_as_396_, lean_object* v_i_397_, lean_object* v_k_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_394_, v_pivot_395_, v_as_396_, v_i_397_, v_k_398_);
lean_dec_ref(v_pivot_395_);
lean_dec(v_hi_394_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg(lean_object* v_n_400_, lean_object* v_as_401_, lean_object* v_lo_402_, lean_object* v_hi_403_){
_start:
{
lean_object* v___y_405_; uint8_t v___x_415_; 
v___x_415_ = lean_nat_dec_lt(v_lo_402_, v_hi_403_);
if (v___x_415_ == 0)
{
lean_dec(v_lo_402_);
return v_as_401_;
}
else
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v_mid_418_; lean_object* v___y_420_; lean_object* v___y_426_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_416_ = lean_nat_add(v_lo_402_, v_hi_403_);
v___x_417_ = lean_unsigned_to_nat(1u);
v_mid_418_ = lean_nat_shiftr(v___x_416_, v___x_417_);
lean_dec(v___x_416_);
v___x_431_ = lean_array_fget_borrowed(v_as_401_, v_mid_418_);
v___x_432_ = lean_array_fget_borrowed(v_as_401_, v_lo_402_);
v___x_433_ = l_Lean_StructureInfo_lt(v___x_431_, v___x_432_);
if (v___x_433_ == 0)
{
v___y_426_ = v_as_401_;
goto v___jp_425_;
}
else
{
lean_object* v___x_434_; 
v___x_434_ = lean_array_fswap(v_as_401_, v_lo_402_, v_mid_418_);
v___y_426_ = v___x_434_;
goto v___jp_425_;
}
v___jp_419_:
{
lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_421_ = lean_array_fget_borrowed(v___y_420_, v_mid_418_);
v___x_422_ = lean_array_fget_borrowed(v___y_420_, v_hi_403_);
v___x_423_ = l_Lean_StructureInfo_lt(v___x_421_, v___x_422_);
if (v___x_423_ == 0)
{
lean_dec(v_mid_418_);
v___y_405_ = v___y_420_;
goto v___jp_404_;
}
else
{
lean_object* v___x_424_; 
v___x_424_ = lean_array_fswap(v___y_420_, v_mid_418_, v_hi_403_);
lean_dec(v_mid_418_);
v___y_405_ = v___x_424_;
goto v___jp_404_;
}
}
v___jp_425_:
{
lean_object* v___x_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_427_ = lean_array_fget_borrowed(v___y_426_, v_hi_403_);
v___x_428_ = lean_array_fget_borrowed(v___y_426_, v_lo_402_);
v___x_429_ = l_Lean_StructureInfo_lt(v___x_427_, v___x_428_);
if (v___x_429_ == 0)
{
v___y_420_ = v___y_426_;
goto v___jp_419_;
}
else
{
lean_object* v___x_430_; 
v___x_430_ = lean_array_fswap(v___y_426_, v_lo_402_, v_hi_403_);
v___y_420_ = v___x_430_;
goto v___jp_419_;
}
}
}
v___jp_404_:
{
lean_object* v_pivot_406_; lean_object* v___x_407_; lean_object* v_fst_408_; lean_object* v_snd_409_; uint8_t v___x_410_; 
v_pivot_406_ = lean_array_fget(v___y_405_, v_hi_403_);
lean_inc_n(v_lo_402_, 2);
v___x_407_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_403_, v_pivot_406_, v___y_405_, v_lo_402_, v_lo_402_);
lean_dec(v_pivot_406_);
v_fst_408_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_fst_408_);
v_snd_409_ = lean_ctor_get(v___x_407_, 1);
lean_inc(v_snd_409_);
lean_dec_ref(v___x_407_);
v___x_410_ = lean_nat_dec_le(v_hi_403_, v_fst_408_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_411_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg(v_n_400_, v_snd_409_, v_lo_402_, v_fst_408_);
v___x_412_ = lean_unsigned_to_nat(1u);
v___x_413_ = lean_nat_add(v_fst_408_, v___x_412_);
lean_dec(v_fst_408_);
v_as_401_ = v___x_411_;
v_lo_402_ = v___x_413_;
goto _start;
}
else
{
lean_dec(v_fst_408_);
lean_dec(v_lo_402_);
return v_snd_409_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_n_435_, lean_object* v_as_436_, lean_object* v_lo_437_, lean_object* v_hi_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg(v_n_435_, v_as_436_, v_lo_437_, v_hi_438_);
lean_dec(v_hi_438_);
lean_dec(v_n_435_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object* v___x_440_, lean_object* v_x_441_, lean_object* v_s_442_){
_start:
{
lean_object* v_snd_443_; lean_object* v___x_444_; size_t v_sz_445_; size_t v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___y_452_; lean_object* v___y_453_; uint8_t v___x_456_; 
v_snd_443_ = lean_ctor_get(v_s_442_, 1);
v___x_444_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg(v_snd_443_);
v_sz_445_ = lean_array_size(v___x_444_);
v___x_446_ = ((size_t)0ULL);
v___x_447_ = l_unsafeCast___redArg(v___x_444_);
lean_dec_ref(v___x_444_);
v___x_448_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__1(v_sz_445_, v___x_446_, v___x_447_);
v___x_449_ = l_unsafeCast___redArg(v___x_448_);
lean_dec_ref(v___x_448_);
v___x_450_ = lean_array_get_size(v___x_449_);
v___x_456_ = lean_nat_dec_eq(v___x_450_, v___x_440_);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___y_460_; uint8_t v___x_462_; 
v___x_457_ = lean_unsigned_to_nat(1u);
v___x_458_ = lean_nat_sub(v___x_450_, v___x_457_);
v___x_462_ = lean_nat_dec_le(v___x_440_, v___x_458_);
if (v___x_462_ == 0)
{
lean_dec(v___x_440_);
lean_inc(v___x_458_);
v___y_460_ = v___x_458_;
goto v___jp_459_;
}
else
{
v___y_460_ = v___x_440_;
goto v___jp_459_;
}
v___jp_459_:
{
uint8_t v___x_461_; 
v___x_461_ = lean_nat_dec_le(v___y_460_, v___x_458_);
if (v___x_461_ == 0)
{
lean_dec(v___x_458_);
lean_inc(v___y_460_);
v___y_452_ = v___y_460_;
v___y_453_ = v___y_460_;
goto v___jp_451_;
}
else
{
v___y_452_ = v___y_460_;
v___y_453_ = v___x_458_;
goto v___jp_451_;
}
}
}
else
{
lean_object* v___x_463_; 
lean_dec(v___x_440_);
lean_inc_n(v___x_449_, 2);
v___x_463_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_463_, 0, v___x_449_);
lean_ctor_set(v___x_463_, 1, v___x_449_);
lean_ctor_set(v___x_463_, 2, v___x_449_);
return v___x_463_;
}
v___jp_451_:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg(v___x_450_, v___x_449_, v___y_452_, v___y_453_);
lean_dec(v___y_453_);
lean_inc_ref_n(v___x_454_, 2);
v___x_455_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
lean_ctor_set(v___x_455_, 2, v___x_454_);
return v___x_455_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object* v___x_464_, lean_object* v_x_465_, lean_object* v_s_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l___private_Lean_Structure_0__Lean_initFn___lam__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(v___x_464_, v_x_465_, v_s_466_);
lean_dec_ref(v_s_466_);
lean_dec_ref(v_x_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object* v___x_468_, lean_object* v_x_469_){
_start:
{
lean_object* v_snd_470_; lean_object* v___x_471_; size_t v_sz_472_; size_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v_snd_470_ = lean_ctor_get(v_x_469_, 1);
v___x_471_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg(v_snd_470_);
v_sz_472_ = lean_array_size(v___x_471_);
v___x_473_ = ((size_t)0ULL);
v___x_474_ = l_unsafeCast___redArg(v___x_471_);
lean_dec_ref(v___x_471_);
v___x_475_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__1(v_sz_472_, v___x_473_, v___x_474_);
v___x_476_ = l_unsafeCast___redArg(v___x_475_);
lean_dec_ref(v___x_475_);
v___x_477_ = lean_array_get_size(v___x_476_);
v___x_478_ = lean_nat_dec_eq(v___x_477_, v___x_468_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___y_482_; uint8_t v___x_486_; 
v___x_479_ = lean_unsigned_to_nat(1u);
v___x_480_ = lean_nat_sub(v___x_477_, v___x_479_);
v___x_486_ = lean_nat_dec_le(v___x_468_, v___x_480_);
if (v___x_486_ == 0)
{
lean_dec(v___x_468_);
lean_inc(v___x_480_);
v___y_482_ = v___x_480_;
goto v___jp_481_;
}
else
{
v___y_482_ = v___x_468_;
goto v___jp_481_;
}
v___jp_481_:
{
uint8_t v___x_483_; 
v___x_483_ = lean_nat_dec_le(v___y_482_, v___x_480_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
lean_dec(v___x_480_);
lean_inc(v___y_482_);
v___x_484_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg(v___x_477_, v___x_476_, v___y_482_, v___y_482_);
lean_dec(v___y_482_);
return v___x_484_;
}
else
{
lean_object* v___x_485_; 
v___x_485_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg(v___x_477_, v___x_476_, v___y_482_, v___x_480_);
lean_dec(v___x_480_);
return v___x_485_;
}
}
}
else
{
lean_dec(v___x_468_);
return v___x_476_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object* v___x_487_, lean_object* v_x_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l___private_Lean_Structure_0__Lean_initFn___lam__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(v___x_487_, v_x_488_);
lean_dec_ref(v_x_488_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__9___redArg(lean_object* v_x_490_, lean_object* v_x_491_, lean_object* v_x_492_, lean_object* v_x_493_){
_start:
{
lean_object* v_ks_494_; lean_object* v_vs_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_519_; 
v_ks_494_ = lean_ctor_get(v_x_490_, 0);
v_vs_495_ = lean_ctor_get(v_x_490_, 1);
v_isSharedCheck_519_ = !lean_is_exclusive(v_x_490_);
if (v_isSharedCheck_519_ == 0)
{
v___x_497_ = v_x_490_;
v_isShared_498_ = v_isSharedCheck_519_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_vs_495_);
lean_inc(v_ks_494_);
lean_dec(v_x_490_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_519_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; uint8_t v___x_500_; 
v___x_499_ = lean_array_get_size(v_ks_494_);
v___x_500_ = lean_nat_dec_lt(v_x_491_, v___x_499_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_504_; 
lean_dec(v_x_491_);
v___x_501_ = lean_array_push(v_ks_494_, v_x_492_);
v___x_502_ = lean_array_push(v_vs_495_, v_x_493_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 1, v___x_502_);
lean_ctor_set(v___x_497_, 0, v___x_501_);
v___x_504_ = v___x_497_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_501_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
else
{
lean_object* v_k_x27_506_; uint8_t v___x_507_; 
v_k_x27_506_ = lean_array_fget_borrowed(v_ks_494_, v_x_491_);
v___x_507_ = lean_name_eq(v_x_492_, v_k_x27_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_509_; 
if (v_isShared_498_ == 0)
{
v___x_509_ = v___x_497_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_ks_494_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_vs_495_);
v___x_509_ = v_reuseFailAlloc_513_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = lean_unsigned_to_nat(1u);
v___x_511_ = lean_nat_add(v_x_491_, v___x_510_);
lean_dec(v_x_491_);
v_x_490_ = v___x_509_;
v_x_491_ = v___x_511_;
goto _start;
}
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_514_ = lean_array_fset(v_ks_494_, v_x_491_, v_x_492_);
v___x_515_ = lean_array_fset(v_vs_495_, v_x_491_, v_x_493_);
lean_dec(v_x_491_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 1, v___x_515_);
lean_ctor_set(v___x_497_, 0, v___x_514_);
v___x_517_ = v___x_497_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg(lean_object* v_n_520_, lean_object* v_k_521_, lean_object* v_v_522_){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_unsigned_to_nat(0u);
v___x_524_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__9___redArg(v_n_520_, v___x_523_, v_k_521_, v_v_522_);
return v___x_524_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_box(0);
v___x_526_ = l_unsafeCast___redArg(v___x_525_);
return v___x_526_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg(lean_object* v_x_528_, size_t v_x_529_, size_t v_x_530_, lean_object* v_x_531_, lean_object* v_x_532_){
_start:
{
if (lean_obj_tag(v_x_528_) == 0)
{
lean_object* v_es_533_; size_t v___x_534_; size_t v___x_535_; lean_object* v_j_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v_es_533_ = lean_ctor_get(v_x_528_, 0);
v___x_534_ = ((size_t)31ULL);
v___x_535_ = lean_usize_land(v_x_529_, v___x_534_);
v_j_536_ = lean_usize_to_nat(v___x_535_);
v___x_537_ = lean_array_get_size(v_es_533_);
v___x_538_ = lean_nat_dec_lt(v_j_536_, v___x_537_);
if (v___x_538_ == 0)
{
lean_dec(v_j_536_);
lean_dec(v_x_532_);
lean_dec(v_x_531_);
return v_x_528_;
}
else
{
lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_577_; 
lean_inc_ref(v_es_533_);
v_isSharedCheck_577_ = !lean_is_exclusive(v_x_528_);
if (v_isSharedCheck_577_ == 0)
{
lean_object* v_unused_578_; 
v_unused_578_ = lean_ctor_get(v_x_528_, 0);
lean_dec(v_unused_578_);
v___x_540_ = v_x_528_;
v_isShared_541_ = v_isSharedCheck_577_;
goto v_resetjp_539_;
}
else
{
lean_dec(v_x_528_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_577_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v_v_542_; lean_object* v___x_543_; lean_object* v_xs_x27_544_; lean_object* v___y_546_; 
v_v_542_ = lean_array_fget(v_es_533_, v_j_536_);
v___x_543_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__0);
v_xs_x27_544_ = lean_array_fset(v_es_533_, v_j_536_, v___x_543_);
switch(lean_obj_tag(v_v_542_))
{
case 0:
{
lean_object* v_key_551_; lean_object* v_val_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_562_; 
v_key_551_ = lean_ctor_get(v_v_542_, 0);
v_val_552_ = lean_ctor_get(v_v_542_, 1);
v_isSharedCheck_562_ = !lean_is_exclusive(v_v_542_);
if (v_isSharedCheck_562_ == 0)
{
v___x_554_ = v_v_542_;
v_isShared_555_ = v_isSharedCheck_562_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_val_552_);
lean_inc(v_key_551_);
lean_dec(v_v_542_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_562_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
uint8_t v___x_556_; 
v___x_556_ = lean_name_eq(v_x_531_, v_key_551_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; lean_object* v___x_558_; 
lean_del_object(v___x_554_);
v___x_557_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_551_, v_val_552_, v_x_531_, v_x_532_);
v___x_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
v___y_546_ = v___x_558_;
goto v___jp_545_;
}
else
{
lean_object* v___x_560_; 
lean_dec(v_val_552_);
lean_dec(v_key_551_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v_x_532_);
lean_ctor_set(v___x_554_, 0, v_x_531_);
v___x_560_ = v___x_554_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_x_531_);
lean_ctor_set(v_reuseFailAlloc_561_, 1, v_x_532_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
v___y_546_ = v___x_560_;
goto v___jp_545_;
}
}
}
}
case 1:
{
lean_object* v_node_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_575_; 
v_node_563_ = lean_ctor_get(v_v_542_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v_v_542_);
if (v_isSharedCheck_575_ == 0)
{
v___x_565_ = v_v_542_;
v_isShared_566_ = v_isSharedCheck_575_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_node_563_);
lean_dec(v_v_542_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_575_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
size_t v___x_567_; size_t v___x_568_; size_t v___x_569_; size_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_567_ = ((size_t)5ULL);
v___x_568_ = lean_usize_shift_right(v_x_529_, v___x_567_);
v___x_569_ = ((size_t)1ULL);
v___x_570_ = lean_usize_add(v_x_530_, v___x_569_);
v___x_571_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg(v_node_563_, v___x_568_, v___x_570_, v_x_531_, v_x_532_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 0, v___x_571_);
v___x_573_ = v___x_565_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
v___y_546_ = v___x_573_;
goto v___jp_545_;
}
}
}
default: 
{
lean_object* v___x_576_; 
v___x_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_576_, 0, v_x_531_);
lean_ctor_set(v___x_576_, 1, v_x_532_);
v___y_546_ = v___x_576_;
goto v___jp_545_;
}
}
v___jp_545_:
{
lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_547_ = lean_array_fset(v_xs_x27_544_, v_j_536_, v___y_546_);
lean_dec(v_j_536_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_547_);
v___x_549_ = v___x_540_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
else
{
lean_object* v_ks_579_; lean_object* v_vs_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_598_; 
v_ks_579_ = lean_ctor_get(v_x_528_, 0);
v_vs_580_ = lean_ctor_get(v_x_528_, 1);
v_isSharedCheck_598_ = !lean_is_exclusive(v_x_528_);
if (v_isSharedCheck_598_ == 0)
{
v___x_582_ = v_x_528_;
v_isShared_583_ = v_isSharedCheck_598_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_vs_580_);
lean_inc(v_ks_579_);
lean_dec(v_x_528_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_598_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_ks_579_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_vs_580_);
v___x_585_ = v_reuseFailAlloc_597_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v_newNode_586_; size_t v___x_587_; uint8_t v___x_588_; 
v_newNode_586_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg(v___x_585_, v_x_531_, v_x_532_);
v___x_587_ = ((size_t)7ULL);
v___x_588_ = lean_usize_dec_le(v___x_587_, v_x_530_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v___x_589_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_586_);
v___x_590_ = lean_unsigned_to_nat(4u);
v___x_591_ = lean_nat_dec_lt(v___x_589_, v___x_590_);
lean_dec(v___x_589_);
if (v___x_591_ == 0)
{
lean_object* v_ks_592_; lean_object* v_vs_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_ks_592_ = lean_ctor_get(v_newNode_586_, 0);
lean_inc_ref(v_ks_592_);
v_vs_593_ = lean_ctor_get(v_newNode_586_, 1);
lean_inc_ref(v_vs_593_);
lean_dec_ref(v_newNode_586_);
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___closed__1);
v___x_596_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg(v_x_530_, v_ks_592_, v_vs_593_, v___x_594_, v___x_595_);
lean_dec_ref(v_vs_593_);
lean_dec_ref(v_ks_592_);
return v___x_596_;
}
else
{
return v_newNode_586_;
}
}
else
{
return v_newNode_586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg(size_t v_depth_599_, lean_object* v_keys_600_, lean_object* v_vals_601_, lean_object* v_i_602_, lean_object* v_entries_603_){
_start:
{
lean_object* v___x_604_; uint8_t v___x_605_; 
v___x_604_ = lean_array_get_size(v_keys_600_);
v___x_605_ = lean_nat_dec_lt(v_i_602_, v___x_604_);
if (v___x_605_ == 0)
{
lean_dec(v_i_602_);
return v_entries_603_;
}
else
{
lean_object* v_k_606_; lean_object* v_v_607_; uint64_t v___y_609_; lean_object* v___x_620_; 
v_k_606_ = lean_array_fget_borrowed(v_keys_600_, v_i_602_);
v_v_607_ = lean_array_fget_borrowed(v_vals_601_, v_i_602_);
v___x_620_ = l_unsafeCast___redArg(v_k_606_);
if (lean_obj_tag(v___x_620_) == 0)
{
uint64_t v___x_621_; 
v___x_621_ = 1723ULL;
v___y_609_ = v___x_621_;
goto v___jp_608_;
}
else
{
uint64_t v_hash_622_; 
v_hash_622_ = lean_ctor_get_uint64(v___x_620_, sizeof(void*)*2);
lean_dec(v___x_620_);
v___y_609_ = v_hash_622_;
goto v___jp_608_;
}
v___jp_608_:
{
size_t v_h_610_; size_t v___x_611_; lean_object* v___x_612_; size_t v___x_613_; size_t v___x_614_; size_t v___x_615_; size_t v_h_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_h_610_ = lean_uint64_to_usize(v___y_609_);
v___x_611_ = ((size_t)5ULL);
v___x_612_ = lean_unsigned_to_nat(1u);
v___x_613_ = ((size_t)1ULL);
v___x_614_ = lean_usize_sub(v_depth_599_, v___x_613_);
v___x_615_ = lean_usize_mul(v___x_611_, v___x_614_);
v_h_616_ = lean_usize_shift_right(v_h_610_, v___x_615_);
v___x_617_ = lean_nat_add(v_i_602_, v___x_612_);
lean_dec(v_i_602_);
lean_inc(v_v_607_);
lean_inc(v_k_606_);
v___x_618_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg(v_entries_603_, v_h_616_, v_depth_599_, v_k_606_, v_v_607_);
v_i_602_ = v___x_617_;
v_entries_603_ = v___x_618_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_depth_623_, lean_object* v_keys_624_, lean_object* v_vals_625_, lean_object* v_i_626_, lean_object* v_entries_627_){
_start:
{
size_t v_depth_boxed_628_; lean_object* v_res_629_; 
v_depth_boxed_628_ = lean_unbox_usize(v_depth_623_);
lean_dec(v_depth_623_);
v_res_629_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg(v_depth_boxed_628_, v_keys_624_, v_vals_625_, v_i_626_, v_entries_627_);
lean_dec_ref(v_vals_625_);
lean_dec_ref(v_keys_624_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg___boxed(lean_object* v_x_630_, lean_object* v_x_631_, lean_object* v_x_632_, lean_object* v_x_633_, lean_object* v_x_634_){
_start:
{
size_t v_x_1850__boxed_635_; size_t v_x_1851__boxed_636_; lean_object* v_res_637_; 
v_x_1850__boxed_635_ = lean_unbox_usize(v_x_631_);
lean_dec(v_x_631_);
v_x_1851__boxed_636_ = lean_unbox_usize(v_x_632_);
lean_dec(v_x_632_);
v_res_637_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_630_, v_x_1850__boxed_635_, v_x_1851__boxed_636_, v_x_633_, v_x_634_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3___redArg(lean_object* v_x_638_, lean_object* v_x_639_, lean_object* v_x_640_){
_start:
{
uint64_t v___y_642_; lean_object* v___x_646_; 
v___x_646_ = l_unsafeCast___redArg(v_x_639_);
if (lean_obj_tag(v___x_646_) == 0)
{
uint64_t v___x_647_; 
v___x_647_ = 1723ULL;
v___y_642_ = v___x_647_;
goto v___jp_641_;
}
else
{
uint64_t v_hash_648_; 
v_hash_648_ = lean_ctor_get_uint64(v___x_646_, sizeof(void*)*2);
lean_dec(v___x_646_);
v___y_642_ = v_hash_648_;
goto v___jp_641_;
}
v___jp_641_:
{
size_t v___x_643_; size_t v___x_644_; lean_object* v___x_645_; 
v___x_643_ = lean_uint64_to_usize(v___y_642_);
v___x_644_ = ((size_t)1ULL);
v___x_645_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_638_, v___x_643_, v___x_644_, v_x_639_, v_x_640_);
return v___x_645_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__3_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object* v___x_649_, lean_object* v_x_650_, lean_object* v_e_651_){
_start:
{
lean_object* v_snd_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_661_; 
v_snd_652_ = lean_ctor_get(v_x_650_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v_x_650_);
if (v_isSharedCheck_661_ == 0)
{
lean_object* v_unused_662_; 
v_unused_662_ = lean_ctor_get(v_x_650_, 0);
lean_dec(v_unused_662_);
v___x_654_ = v_x_650_;
v_isShared_655_ = v_isSharedCheck_661_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_snd_652_);
lean_dec(v_x_650_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_661_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v_structName_656_; lean_object* v___x_657_; lean_object* v___x_659_; 
v_structName_656_ = lean_ctor_get(v_e_651_, 0);
lean_inc(v_structName_656_);
v___x_657_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3___redArg(v_snd_652_, v_structName_656_, v_e_651_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 1, v___x_657_);
lean_ctor_set(v___x_654_, 0, v___x_649_);
v___x_659_ = v___x_654_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_649_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object* v___x_663_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_663_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object* v___x_666_, lean_object* v___y_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l___private_Lean_Structure_0__Lean_initFn___lam__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(v___x_666_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(lean_object* v___x_669_, lean_object* v_x_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_669_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object* v___x_674_, lean_object* v_x_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l___private_Lean_Structure_0__Lean_initFn___lam__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(v___x_674_, v_x_675_, v___y_676_);
lean_dec_ref(v___y_676_);
lean_dec_ref(v_x_675_);
return v_res_678_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_681_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_initFn___closed__1_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_));
v___x_682_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_683_ = l_Lean_Name_str___override(v___x_682_, v___x_681_);
return v___x_683_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_685_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_initFn___closed__3_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_));
v___x_686_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__2_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___x_687_ = l_Lean_Name_str___override(v___x_686_, v___x_685_);
return v___x_687_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__6_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_initFn___closed__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_));
v___x_690_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___x_691_ = l_Lean_Name_str___override(v___x_690_, v___x_689_);
return v___x_691_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__9_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_unsigned_to_nat(0u);
v___x_697_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__6_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__6_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__6_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___x_698_ = l_Lean_Name_num___override(v___x_697_, v___x_696_);
return v___x_698_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__10_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_699_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_initFn___closed__3_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_));
v___x_700_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__9_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__9_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__9_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___x_701_ = l_Lean_Name_str___override(v___x_700_, v___x_699_);
return v___x_701_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__12_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_703_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_initFn___closed__11_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_));
v___x_704_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__10_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__10_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__10_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___x_705_ = l_Lean_Name_str___override(v___x_704_, v___x_703_);
return v___x_705_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__14_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_708_ = lean_obj_once(&l_Lean_instInhabitedStructureState_default___closed__1, &l_Lean_instInhabitedStructureState_default___closed__1_once, _init_l_Lean_instInhabitedStructureState_default___closed__1);
v___x_709_ = lean_box(0);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_709_);
lean_ctor_set(v___x_710_, 1, v___x_708_);
return v___x_710_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__15_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_711_; lean_object* v___f_712_; 
v___x_711_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__14_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__14_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__14_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___f_712_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_initFn___lam__4_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_712_, 0, v___x_711_);
return v___f_712_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__16_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_713_; lean_object* v___f_714_; 
v___x_713_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__14_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__14_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__14_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___f_714_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_initFn___lam__5_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed), 4, 1);
lean_closure_set(v___f_714_, 0, v___x_713_);
return v___f_714_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__17_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___f_717_; lean_object* v___f_718_; lean_object* v___f_719_; lean_object* v___f_720_; lean_object* v___f_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_715_ = lean_box(0);
v___x_716_ = lean_box(2);
v___f_717_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_));
v___f_718_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_initFn___closed__7_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_));
v___f_719_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_initFn___closed__13_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_));
v___f_720_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__16_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__16_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__16_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___f_721_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__15_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__15_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__15_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___x_722_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__12_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__12_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__12_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___x_723_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
lean_ctor_set(v___x_723_, 1, v___f_721_);
lean_ctor_set(v___x_723_, 2, v___f_720_);
lean_ctor_set(v___x_723_, 3, v___f_719_);
lean_ctor_set(v___x_723_, 4, v___f_718_);
lean_ctor_set(v___x_723_, 5, v___f_717_);
lean_ctor_set(v___x_723_, 6, v___x_716_);
lean_ctor_set(v___x_723_, 7, v___x_715_);
return v___x_723_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__18_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___f_724_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_initFn___closed__8_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_));
v___x_725_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__17_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__17_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__17_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___x_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
lean_ctor_set(v___x_726_, 1, v___f_724_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__18_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__18_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__18_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_);
v___x_729_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2____boxed(lean_object* v_a_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_();
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_732_, lean_object* v_m_733_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___redArg(v_m_733_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b2_735_, lean_object* v_m_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0(v_00_u03b2_735_, v_m_736_);
lean_dec_ref(v_m_736_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2(lean_object* v_n_738_, lean_object* v_as_739_, lean_object* v_lo_740_, lean_object* v_hi_741_, lean_object* v_w_742_, lean_object* v_hlo_743_, lean_object* v_hhi_744_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___redArg(v_n_738_, v_as_739_, v_lo_740_, v_hi_741_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_746_, lean_object* v_as_747_, lean_object* v_lo_748_, lean_object* v_hi_749_, lean_object* v_w_750_, lean_object* v_hlo_751_, lean_object* v_hhi_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2(v_n_746_, v_as_747_, v_lo_748_, v_hi_749_, v_w_750_, v_hlo_751_, v_hhi_752_);
lean_dec(v_hi_749_);
lean_dec(v_n_746_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3(lean_object* v_00_u03b2_754_, lean_object* v_x_755_, lean_object* v_x_756_, lean_object* v_x_757_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3___redArg(v_x_755_, v_x_756_, v_x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03c3_759_, lean_object* v_00_u03b2_760_, lean_object* v_map_761_, lean_object* v_f_762_, lean_object* v_init_763_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___redArg(v_map_761_, v_f_762_, v_init_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03c3_765_, lean_object* v_00_u03b2_766_, lean_object* v_map_767_, lean_object* v_f_768_, lean_object* v_init_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0(v_00_u03c3_765_, v_00_u03b2_766_, v_map_767_, v_f_768_, v_init_769_);
lean_dec_ref(v_map_767_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_n_771_, lean_object* v_lo_772_, lean_object* v_hi_773_, lean_object* v_hhi_774_, lean_object* v_pivot_775_, lean_object* v_as_776_, lean_object* v_i_777_, lean_object* v_k_778_, lean_object* v_ilo_779_, lean_object* v_ik_780_, lean_object* v_w_781_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_773_, v_pivot_775_, v_as_776_, v_i_777_, v_k_778_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_n_783_, lean_object* v_lo_784_, lean_object* v_hi_785_, lean_object* v_hhi_786_, lean_object* v_pivot_787_, lean_object* v_as_788_, lean_object* v_i_789_, lean_object* v_k_790_, lean_object* v_ilo_791_, lean_object* v_ik_792_, lean_object* v_w_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__2_spec__3(v_n_783_, v_lo_784_, v_hi_785_, v_hhi_786_, v_pivot_787_, v_as_788_, v_i_789_, v_k_790_, v_ilo_791_, v_ik_792_, v_w_793_);
lean_dec_ref(v_pivot_787_);
lean_dec(v_hi_785_);
lean_dec(v_lo_784_);
lean_dec(v_n_783_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5(lean_object* v_00_u03b2_795_, lean_object* v_x_796_, size_t v_x_797_, size_t v_x_798_, lean_object* v_x_799_, lean_object* v_x_800_){
_start:
{
lean_object* v___x_801_; 
v___x_801_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_796_, v_x_797_, v_x_798_, v_x_799_, v_x_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object* v_00_u03b2_802_, lean_object* v_x_803_, lean_object* v_x_804_, lean_object* v_x_805_, lean_object* v_x_806_, lean_object* v_x_807_){
_start:
{
size_t v_x_2245__boxed_808_; size_t v_x_2246__boxed_809_; lean_object* v_res_810_; 
v_x_2245__boxed_808_ = lean_unbox_usize(v_x_804_);
lean_dec(v_x_804_);
v_x_2246__boxed_809_ = lean_unbox_usize(v_x_805_);
lean_dec(v_x_805_);
v_res_810_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5(v_00_u03b2_802_, v_x_803_, v_x_2245__boxed_808_, v_x_2246__boxed_809_, v_x_806_, v_x_807_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_map_811_, lean_object* v_f_812_, lean_object* v_init_813_){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_812_, v_map_811_, v_init_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_map_815_, lean_object* v_f_816_, lean_object* v_init_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_map_815_, v_f_816_, v_init_817_);
lean_dec_ref(v_map_815_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03c3_819_, lean_object* v_00_u03b2_820_, lean_object* v_map_821_, lean_object* v_f_822_, lean_object* v_init_823_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_822_, v_map_821_, v_init_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_825_, lean_object* v_00_u03b2_826_, lean_object* v_map_827_, lean_object* v_f_828_, lean_object* v_init_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03c3_825_, v_00_u03b2_826_, v_map_827_, v_f_828_, v_init_829_);
lean_dec_ref(v_map_827_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7(lean_object* v_00_u03b2_831_, lean_object* v_n_832_, lean_object* v_k_833_, lean_object* v_v_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7___redArg(v_n_832_, v_k_833_, v_v_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8(lean_object* v_00_u03b2_836_, size_t v_depth_837_, lean_object* v_keys_838_, lean_object* v_vals_839_, lean_object* v_heq_840_, lean_object* v_i_841_, lean_object* v_entries_842_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8___redArg(v_depth_837_, v_keys_838_, v_vals_839_, v_i_841_, v_entries_842_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b2_844_, lean_object* v_depth_845_, lean_object* v_keys_846_, lean_object* v_vals_847_, lean_object* v_heq_848_, lean_object* v_i_849_, lean_object* v_entries_850_){
_start:
{
size_t v_depth_boxed_851_; lean_object* v_res_852_; 
v_depth_boxed_851_ = lean_unbox_usize(v_depth_845_);
lean_dec(v_depth_845_);
v_res_852_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__8(v_00_u03b2_844_, v_depth_boxed_851_, v_keys_846_, v_vals_847_, v_heq_848_, v_i_849_, v_entries_850_);
lean_dec_ref(v_vals_847_);
lean_dec_ref(v_keys_846_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03c3_853_, lean_object* v_00_u03b1_854_, lean_object* v_00_u03b2_855_, lean_object* v_f_856_, lean_object* v_x_857_, lean_object* v_x_858_){
_start:
{
lean_object* v___x_859_; 
v___x_859_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_856_, v_x_857_, v_x_858_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03c3_860_, lean_object* v_00_u03b1_861_, lean_object* v_00_u03b2_862_, lean_object* v_f_863_, lean_object* v_x_864_, lean_object* v_x_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5(v_00_u03c3_860_, v_00_u03b1_861_, v_00_u03b2_862_, v_f_863_, v_x_864_, v_x_865_);
lean_dec_ref(v_x_864_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__9(lean_object* v_00_u03b2_867_, lean_object* v_x_868_, lean_object* v_x_869_, lean_object* v_x_870_, lean_object* v_x_871_){
_start:
{
lean_object* v___x_872_; 
v___x_872_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__3_spec__5_spec__7_spec__9___redArg(v_x_868_, v_x_869_, v_x_870_, v_x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8(lean_object* v_00_u03b1_873_, lean_object* v_00_u03b2_874_, lean_object* v_00_u03c3_875_, lean_object* v_f_876_, lean_object* v_as_877_, size_t v_i_878_, size_t v_stop_879_, lean_object* v_b_880_){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8___redArg(v_f_876_, v_as_877_, v_i_878_, v_stop_879_, v_b_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8___boxed(lean_object* v_00_u03b1_882_, lean_object* v_00_u03b2_883_, lean_object* v_00_u03c3_884_, lean_object* v_f_885_, lean_object* v_as_886_, lean_object* v_i_887_, lean_object* v_stop_888_, lean_object* v_b_889_){
_start:
{
size_t v_i_boxed_890_; size_t v_stop_boxed_891_; lean_object* v_res_892_; 
v_i_boxed_890_ = lean_unbox_usize(v_i_887_);
lean_dec(v_i_887_);
v_stop_boxed_891_ = lean_unbox_usize(v_stop_888_);
lean_dec(v_stop_888_);
v_res_892_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__8(v_00_u03b1_882_, v_00_u03b2_883_, v_00_u03c3_884_, v_f_885_, v_as_886_, v_i_boxed_890_, v_stop_boxed_891_, v_b_889_);
lean_dec_ref(v_as_886_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9(lean_object* v_00_u03c3_893_, lean_object* v_00_u03b1_894_, lean_object* v_00_u03b2_895_, lean_object* v_f_896_, lean_object* v_keys_897_, lean_object* v_vals_898_, lean_object* v_heq_899_, lean_object* v_i_900_, lean_object* v_acc_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9___redArg(v_f_896_, v_keys_897_, v_vals_898_, v_i_900_, v_acc_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9___boxed(lean_object* v_00_u03c3_903_, lean_object* v_00_u03b1_904_, lean_object* v_00_u03b2_905_, lean_object* v_f_906_, lean_object* v_keys_907_, lean_object* v_vals_908_, lean_object* v_heq_909_, lean_object* v_i_910_, lean_object* v_acc_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5_spec__9(v_00_u03c3_903_, v_00_u03b1_904_, v_00_u03b2_905_, v_f_906_, v_keys_907_, v_vals_908_, v_heq_909_, v_i_910_, v_acc_911_);
lean_dec_ref(v_vals_908_);
lean_dec_ref(v_keys_907_);
return v_res_912_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureDescr_default___closed__1(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_915_ = ((lean_object*)(l_Lean_instInhabitedStructureDescr_default___closed__0));
v___x_916_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
lean_ctor_set(v___x_917_, 1, v___x_915_);
return v___x_917_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureDescr_default(void){
_start:
{
lean_object* v___x_918_; 
v___x_918_ = lean_obj_once(&l_Lean_instInhabitedStructureDescr_default___closed__1, &l_Lean_instInhabitedStructureDescr_default___closed__1_once, _init_l_Lean_instInhabitedStructureDescr_default___closed__1);
return v___x_918_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureDescr(void){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = l_Lean_instInhabitedStructureDescr_default;
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_registerStructure_spec__0(size_t v_sz_920_, size_t v_i_921_, lean_object* v_bs_922_){
_start:
{
uint8_t v___x_923_; 
v___x_923_ = lean_usize_dec_lt(v_i_921_, v_sz_920_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; 
v___x_924_ = l_unsafeCast___redArg(v_bs_922_);
lean_dec_ref(v_bs_922_);
return v___x_924_;
}
else
{
lean_object* v_v_925_; lean_object* v___x_926_; lean_object* v_fieldName_927_; lean_object* v___x_928_; lean_object* v_bs_x27_929_; size_t v___x_930_; size_t v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_v_925_ = lean_array_uget_borrowed(v_bs_922_, v_i_921_);
v___x_926_ = l_unsafeCast___redArg(v_v_925_);
v_fieldName_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_fieldName_927_);
lean_dec(v___x_926_);
v___x_928_ = lean_unsigned_to_nat(0u);
v_bs_x27_929_ = lean_array_uset(v_bs_922_, v_i_921_, v___x_928_);
v___x_930_ = ((size_t)1ULL);
v___x_931_ = lean_usize_add(v_i_921_, v___x_930_);
v___x_932_ = l_unsafeCast___redArg(v_fieldName_927_);
lean_dec(v_fieldName_927_);
v___x_933_ = lean_array_uset(v_bs_x27_929_, v_i_921_, v___x_932_);
v_i_921_ = v___x_931_;
v_bs_922_ = v___x_933_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_registerStructure_spec__0___boxed(lean_object* v_sz_935_, lean_object* v_i_936_, lean_object* v_bs_937_){
_start:
{
size_t v_sz_boxed_938_; size_t v_i_boxed_939_; lean_object* v_res_940_; 
v_sz_boxed_938_ = lean_unbox_usize(v_sz_935_);
lean_dec(v_sz_935_);
v_i_boxed_939_ = lean_unbox_usize(v_i_936_);
lean_dec(v_i_936_);
v_res_940_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_registerStructure_spec__0(v_sz_boxed_938_, v_i_boxed_939_, v_bs_937_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1___redArg(lean_object* v_hi_941_, lean_object* v_pivot_942_, lean_object* v_as_943_, lean_object* v_i_944_, lean_object* v_k_945_){
_start:
{
uint8_t v___x_946_; 
v___x_946_ = lean_nat_dec_lt(v_k_945_, v_hi_941_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; lean_object* v___x_948_; 
lean_dec(v_k_945_);
v___x_947_ = lean_array_fswap(v_as_943_, v_i_944_, v_hi_941_);
v___x_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_948_, 0, v_i_944_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
return v___x_948_;
}
else
{
lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_949_ = lean_array_fget_borrowed(v_as_943_, v_k_945_);
v___x_950_ = l_Lean_StructureFieldInfo_lt(v___x_949_, v_pivot_942_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = lean_unsigned_to_nat(1u);
v___x_952_ = lean_nat_add(v_k_945_, v___x_951_);
lean_dec(v_k_945_);
v_k_945_ = v___x_952_;
goto _start;
}
else
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_954_ = lean_array_fswap(v_as_943_, v_i_944_, v_k_945_);
v___x_955_ = lean_unsigned_to_nat(1u);
v___x_956_ = lean_nat_add(v_i_944_, v___x_955_);
lean_dec(v_i_944_);
v___x_957_ = lean_nat_add(v_k_945_, v___x_955_);
lean_dec(v_k_945_);
v_as_943_ = v___x_954_;
v_i_944_ = v___x_956_;
v_k_945_ = v___x_957_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1___redArg___boxed(lean_object* v_hi_959_, lean_object* v_pivot_960_, lean_object* v_as_961_, lean_object* v_i_962_, lean_object* v_k_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1___redArg(v_hi_959_, v_pivot_960_, v_as_961_, v_i_962_, v_k_963_);
lean_dec_ref(v_pivot_960_);
lean_dec(v_hi_959_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___redArg(lean_object* v_n_965_, lean_object* v_as_966_, lean_object* v_lo_967_, lean_object* v_hi_968_){
_start:
{
lean_object* v___y_970_; uint8_t v___x_980_; 
v___x_980_ = lean_nat_dec_lt(v_lo_967_, v_hi_968_);
if (v___x_980_ == 0)
{
lean_dec(v_lo_967_);
return v_as_966_;
}
else
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v_mid_983_; lean_object* v___y_985_; lean_object* v___y_991_; lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; 
v___x_981_ = lean_nat_add(v_lo_967_, v_hi_968_);
v___x_982_ = lean_unsigned_to_nat(1u);
v_mid_983_ = lean_nat_shiftr(v___x_981_, v___x_982_);
lean_dec(v___x_981_);
v___x_996_ = lean_array_fget_borrowed(v_as_966_, v_mid_983_);
v___x_997_ = lean_array_fget_borrowed(v_as_966_, v_lo_967_);
v___x_998_ = l_Lean_StructureFieldInfo_lt(v___x_996_, v___x_997_);
if (v___x_998_ == 0)
{
v___y_991_ = v_as_966_;
goto v___jp_990_;
}
else
{
lean_object* v___x_999_; 
v___x_999_ = lean_array_fswap(v_as_966_, v_lo_967_, v_mid_983_);
v___y_991_ = v___x_999_;
goto v___jp_990_;
}
v___jp_984_:
{
lean_object* v___x_986_; lean_object* v___x_987_; uint8_t v___x_988_; 
v___x_986_ = lean_array_fget_borrowed(v___y_985_, v_mid_983_);
v___x_987_ = lean_array_fget_borrowed(v___y_985_, v_hi_968_);
v___x_988_ = l_Lean_StructureFieldInfo_lt(v___x_986_, v___x_987_);
if (v___x_988_ == 0)
{
lean_dec(v_mid_983_);
v___y_970_ = v___y_985_;
goto v___jp_969_;
}
else
{
lean_object* v___x_989_; 
v___x_989_ = lean_array_fswap(v___y_985_, v_mid_983_, v_hi_968_);
lean_dec(v_mid_983_);
v___y_970_ = v___x_989_;
goto v___jp_969_;
}
}
v___jp_990_:
{
lean_object* v___x_992_; lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_992_ = lean_array_fget_borrowed(v___y_991_, v_hi_968_);
v___x_993_ = lean_array_fget_borrowed(v___y_991_, v_lo_967_);
v___x_994_ = l_Lean_StructureFieldInfo_lt(v___x_992_, v___x_993_);
if (v___x_994_ == 0)
{
v___y_985_ = v___y_991_;
goto v___jp_984_;
}
else
{
lean_object* v___x_995_; 
v___x_995_ = lean_array_fswap(v___y_991_, v_lo_967_, v_hi_968_);
v___y_985_ = v___x_995_;
goto v___jp_984_;
}
}
}
v___jp_969_:
{
lean_object* v_pivot_971_; lean_object* v___x_972_; lean_object* v_fst_973_; lean_object* v_snd_974_; uint8_t v___x_975_; 
v_pivot_971_ = lean_array_fget(v___y_970_, v_hi_968_);
lean_inc_n(v_lo_967_, 2);
v___x_972_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1___redArg(v_hi_968_, v_pivot_971_, v___y_970_, v_lo_967_, v_lo_967_);
lean_dec(v_pivot_971_);
v_fst_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_fst_973_);
v_snd_974_ = lean_ctor_get(v___x_972_, 1);
lean_inc(v_snd_974_);
lean_dec_ref(v___x_972_);
v___x_975_ = lean_nat_dec_le(v_hi_968_, v_fst_973_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_976_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___redArg(v_n_965_, v_snd_974_, v_lo_967_, v_fst_973_);
v___x_977_ = lean_unsigned_to_nat(1u);
v___x_978_ = lean_nat_add(v_fst_973_, v___x_977_);
lean_dec(v_fst_973_);
v_as_966_ = v___x_976_;
v_lo_967_ = v___x_978_;
goto _start;
}
else
{
lean_dec(v_fst_973_);
lean_dec(v_lo_967_);
return v_snd_974_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___redArg___boxed(lean_object* v_n_1000_, lean_object* v_as_1001_, lean_object* v_lo_1002_, lean_object* v_hi_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___redArg(v_n_1000_, v_as_1001_, v_lo_1002_, v_hi_1003_);
lean_dec(v_hi_1003_);
lean_dec(v_n_1000_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerStructure(lean_object* v_env_1007_, lean_object* v_e_1008_){
_start:
{
lean_object* v_structName_1009_; lean_object* v_fields_1010_; lean_object* v___x_1011_; size_t v_sz_1012_; size_t v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___y_1018_; lean_object* v___x_1025_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___x_1030_; uint8_t v___x_1031_; 
v_structName_1009_ = lean_ctor_get(v_e_1008_, 0);
lean_inc(v_structName_1009_);
v_fields_1010_ = lean_ctor_get(v_e_1008_, 1);
lean_inc_ref(v_fields_1010_);
lean_dec_ref(v_e_1008_);
v___x_1011_ = l___private_Lean_Structure_0__Lean_structureExt;
v_sz_1012_ = lean_array_size(v_fields_1010_);
v___x_1013_ = ((size_t)0ULL);
v___x_1014_ = l_unsafeCast___redArg(v_fields_1010_);
v___x_1015_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_registerStructure_spec__0(v_sz_1012_, v___x_1013_, v___x_1014_);
v___x_1016_ = l_unsafeCast___redArg(v___x_1015_);
lean_dec_ref(v___x_1015_);
v___x_1025_ = lean_array_get_size(v_fields_1010_);
v___x_1030_ = lean_unsigned_to_nat(0u);
v___x_1031_ = lean_nat_dec_eq(v___x_1025_, v___x_1030_);
if (v___x_1031_ == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___y_1035_; uint8_t v___x_1037_; 
v___x_1032_ = lean_unsigned_to_nat(1u);
v___x_1033_ = lean_nat_sub(v___x_1025_, v___x_1032_);
v___x_1037_ = lean_nat_dec_le(v___x_1030_, v___x_1033_);
if (v___x_1037_ == 0)
{
lean_inc(v___x_1033_);
v___y_1035_ = v___x_1033_;
goto v___jp_1034_;
}
else
{
v___y_1035_ = v___x_1030_;
goto v___jp_1034_;
}
v___jp_1034_:
{
uint8_t v___x_1036_; 
v___x_1036_ = lean_nat_dec_le(v___y_1035_, v___x_1033_);
if (v___x_1036_ == 0)
{
lean_dec(v___x_1033_);
lean_inc(v___y_1035_);
v___y_1027_ = v___y_1035_;
v___y_1028_ = v___y_1035_;
goto v___jp_1026_;
}
else
{
v___y_1027_ = v___y_1035_;
v___y_1028_ = v___x_1033_;
goto v___jp_1026_;
}
}
}
else
{
v___y_1018_ = v_fields_1010_;
goto v___jp_1017_;
}
v___jp_1017_:
{
lean_object* v_toEnvExtension_1019_; lean_object* v_asyncMode_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v_toEnvExtension_1019_ = lean_ctor_get(v___x_1011_, 0);
v_asyncMode_1020_ = lean_ctor_get(v_toEnvExtension_1019_, 2);
v___x_1021_ = ((lean_object*)(l_Lean_registerStructure___closed__0));
v___x_1022_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1022_, 0, v_structName_1009_);
lean_ctor_set(v___x_1022_, 1, v___x_1016_);
lean_ctor_set(v___x_1022_, 2, v___y_1018_);
lean_ctor_set(v___x_1022_, 3, v___x_1021_);
v___x_1023_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_1024_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1011_, v_env_1007_, v___x_1022_, v_asyncMode_1020_, v___x_1023_);
return v___x_1024_;
}
v___jp_1026_:
{
lean_object* v___x_1029_; 
v___x_1029_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___redArg(v___x_1025_, v_fields_1010_, v___y_1027_, v___y_1028_);
lean_dec(v___y_1028_);
v___y_1018_ = v___x_1029_;
goto v___jp_1017_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1(lean_object* v_n_1038_, lean_object* v_as_1039_, lean_object* v_lo_1040_, lean_object* v_hi_1041_, lean_object* v_w_1042_, lean_object* v_hlo_1043_, lean_object* v_hhi_1044_){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___redArg(v_n_1038_, v_as_1039_, v_lo_1040_, v_hi_1041_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1___boxed(lean_object* v_n_1046_, lean_object* v_as_1047_, lean_object* v_lo_1048_, lean_object* v_hi_1049_, lean_object* v_w_1050_, lean_object* v_hlo_1051_, lean_object* v_hhi_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1(v_n_1046_, v_as_1047_, v_lo_1048_, v_hi_1049_, v_w_1050_, v_hlo_1051_, v_hhi_1052_);
lean_dec(v_hi_1049_);
lean_dec(v_n_1046_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1(lean_object* v_n_1054_, lean_object* v_lo_1055_, lean_object* v_hi_1056_, lean_object* v_hhi_1057_, lean_object* v_pivot_1058_, lean_object* v_as_1059_, lean_object* v_i_1060_, lean_object* v_k_1061_, lean_object* v_ilo_1062_, lean_object* v_ik_1063_, lean_object* v_w_1064_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1___redArg(v_hi_1056_, v_pivot_1058_, v_as_1059_, v_i_1060_, v_k_1061_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1___boxed(lean_object* v_n_1066_, lean_object* v_lo_1067_, lean_object* v_hi_1068_, lean_object* v_hhi_1069_, lean_object* v_pivot_1070_, lean_object* v_as_1071_, lean_object* v_i_1072_, lean_object* v_k_1073_, lean_object* v_ilo_1074_, lean_object* v_ik_1075_, lean_object* v_w_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_registerStructure_spec__1_spec__1(v_n_1066_, v_lo_1067_, v_hi_1068_, v_hhi_1069_, v_pivot_1070_, v_as_1071_, v_i_1072_, v_k_1073_, v_ilo_1074_, v_ik_1075_, v_w_1076_);
lean_dec_ref(v_pivot_1070_);
lean_dec(v_hi_1068_);
lean_dec(v_lo_1067_);
lean_dec(v_n_1066_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_setStructureParents___redArg___lam__0(lean_object* v_val_1078_, lean_object* v_parentInfo_1079_, lean_object* v___x_1080_, lean_object* v_asyncMode_1081_, lean_object* v___x_1082_, lean_object* v_env_1083_){
_start:
{
lean_object* v_structName_1084_; lean_object* v_fieldNames_1085_; lean_object* v_fieldInfo_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1094_; 
v_structName_1084_ = lean_ctor_get(v_val_1078_, 0);
v_fieldNames_1085_ = lean_ctor_get(v_val_1078_, 1);
v_fieldInfo_1086_ = lean_ctor_get(v_val_1078_, 2);
v_isSharedCheck_1094_ = !lean_is_exclusive(v_val_1078_);
if (v_isSharedCheck_1094_ == 0)
{
lean_object* v_unused_1095_; 
v_unused_1095_ = lean_ctor_get(v_val_1078_, 3);
lean_dec(v_unused_1095_);
v___x_1088_ = v_val_1078_;
v_isShared_1089_ = v_isSharedCheck_1094_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_fieldInfo_1086_);
lean_inc(v_fieldNames_1085_);
lean_inc(v_structName_1084_);
lean_dec(v_val_1078_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1094_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1091_; 
if (v_isShared_1089_ == 0)
{
lean_ctor_set(v___x_1088_, 3, v_parentInfo_1079_);
v___x_1091_ = v___x_1088_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_structName_1084_);
lean_ctor_set(v_reuseFailAlloc_1093_, 1, v_fieldNames_1085_);
lean_ctor_set(v_reuseFailAlloc_1093_, 2, v_fieldInfo_1086_);
lean_ctor_set(v_reuseFailAlloc_1093_, 3, v_parentInfo_1079_);
v___x_1091_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1080_, v_env_1083_, v___x_1091_, v_asyncMode_1081_, v___x_1082_);
return v___x_1092_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setStructureParents___redArg___lam__0___boxed(lean_object* v_val_1096_, lean_object* v_parentInfo_1097_, lean_object* v___x_1098_, lean_object* v_asyncMode_1099_, lean_object* v___x_1100_, lean_object* v_env_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_setStructureParents___redArg___lam__0(v_val_1096_, v_parentInfo_1097_, v___x_1098_, v_asyncMode_1099_, v___x_1100_, v_env_1101_);
lean_dec(v_asyncMode_1099_);
return v_res_1102_;
}
}
static lean_object* _init_l_Lean_setStructureParents___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1104_ = ((lean_object*)(l_Lean_setStructureParents___redArg___lam__1___closed__0));
v___x_1105_ = l_Lean_stringToMessageData(v___x_1104_);
return v___x_1105_;
}
}
static lean_object* _init_l_Lean_setStructureParents___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = ((lean_object*)(l_Lean_setStructureParents___redArg___lam__1___closed__2));
v___x_1108_ = l_Lean_stringToMessageData(v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_setStructureParents___redArg___lam__1(lean_object* v___x_1109_, lean_object* v___x_1110_, lean_object* v___x_1111_, lean_object* v_structName_1112_, lean_object* v_parentInfo_1113_, lean_object* v_modifyEnv_1114_, lean_object* v_inst_1115_, lean_object* v_inst_1116_, lean_object* v_____do__lift_1117_){
_start:
{
lean_object* v___x_1118_; lean_object* v_toEnvExtension_1119_; lean_object* v_asyncMode_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v_snd_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1139_; 
v___x_1118_ = l___private_Lean_Structure_0__Lean_structureExt;
v_toEnvExtension_1119_ = lean_ctor_get(v___x_1118_, 0);
v_asyncMode_1120_ = lean_ctor_get(v_toEnvExtension_1119_, 2);
v___x_1121_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_1122_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1109_, v___x_1118_, v_____do__lift_1117_, v_asyncMode_1120_, v___x_1121_);
v_snd_1123_ = lean_ctor_get(v___x_1122_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1139_ == 0)
{
lean_object* v_unused_1140_; 
v_unused_1140_ = lean_ctor_get(v___x_1122_, 0);
lean_dec(v_unused_1140_);
v___x_1125_ = v___x_1122_;
v_isShared_1126_ = v_isSharedCheck_1139_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_snd_1123_);
lean_dec(v___x_1122_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1139_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; 
lean_inc(v_structName_1112_);
v___x_1127_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_1110_, v___x_1111_, v_snd_1123_, v_structName_1112_);
lean_dec(v_snd_1123_);
if (lean_obj_tag(v___x_1127_) == 1)
{
lean_object* v_val_1128_; lean_object* v___f_1129_; lean_object* v___x_1130_; 
lean_del_object(v___x_1125_);
lean_dec_ref(v_inst_1116_);
lean_dec_ref(v_inst_1115_);
lean_dec(v_structName_1112_);
v_val_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_val_1128_);
lean_dec_ref_known(v___x_1127_, 1);
lean_inc(v_asyncMode_1120_);
v___f_1129_ = lean_alloc_closure((void*)(l_Lean_setStructureParents___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1129_, 0, v_val_1128_);
lean_closure_set(v___f_1129_, 1, v_parentInfo_1113_);
lean_closure_set(v___f_1129_, 2, v___x_1118_);
lean_closure_set(v___f_1129_, 3, v_asyncMode_1120_);
lean_closure_set(v___f_1129_, 4, v___x_1121_);
v___x_1130_ = lean_apply_1(v_modifyEnv_1114_, v___f_1129_);
return v___x_1130_;
}
else
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1134_; 
lean_dec(v___x_1127_);
lean_dec(v_modifyEnv_1114_);
lean_dec_ref(v_parentInfo_1113_);
v___x_1131_ = lean_obj_once(&l_Lean_setStructureParents___redArg___lam__1___closed__1, &l_Lean_setStructureParents___redArg___lam__1___closed__1_once, _init_l_Lean_setStructureParents___redArg___lam__1___closed__1);
v___x_1132_ = l_Lean_MessageData_ofName(v_structName_1112_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set_tag(v___x_1125_, 7);
lean_ctor_set(v___x_1125_, 1, v___x_1132_);
lean_ctor_set(v___x_1125_, 0, v___x_1131_);
v___x_1134_ = v___x_1125_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___x_1131_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v___x_1132_);
v___x_1134_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = lean_obj_once(&l_Lean_setStructureParents___redArg___lam__1___closed__3, &l_Lean_setStructureParents___redArg___lam__1___closed__3_once, _init_l_Lean_setStructureParents___redArg___lam__1___closed__3);
v___x_1136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1134_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
v___x_1137_ = l_Lean_throwError___redArg(v_inst_1115_, v_inst_1116_, v___x_1136_);
return v___x_1137_;
}
}
}
}
}
static lean_object* _init_l_Lean_setStructureParents___redArg___closed__2(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1143_ = l_Lean_instInhabitedStructureState_default;
v___x_1144_ = lean_box(0);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
lean_ctor_set(v___x_1145_, 1, v___x_1143_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_setStructureParents___redArg(lean_object* v_inst_1146_, lean_object* v_inst_1147_, lean_object* v_inst_1148_, lean_object* v_structName_1149_, lean_object* v_parentInfo_1150_){
_start:
{
lean_object* v_toBind_1151_; lean_object* v_getEnv_1152_; lean_object* v_modifyEnv_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___f_1157_; lean_object* v___x_1158_; 
v_toBind_1151_ = lean_ctor_get(v_inst_1146_, 1);
lean_inc(v_toBind_1151_);
v_getEnv_1152_ = lean_ctor_get(v_inst_1147_, 0);
lean_inc(v_getEnv_1152_);
v_modifyEnv_1153_ = lean_ctor_get(v_inst_1147_, 1);
lean_inc(v_modifyEnv_1153_);
lean_dec_ref(v_inst_1147_);
v___x_1154_ = ((lean_object*)(l_Lean_setStructureParents___redArg___closed__0));
v___x_1155_ = ((lean_object*)(l_Lean_setStructureParents___redArg___closed__1));
v___x_1156_ = lean_obj_once(&l_Lean_setStructureParents___redArg___closed__2, &l_Lean_setStructureParents___redArg___closed__2_once, _init_l_Lean_setStructureParents___redArg___closed__2);
v___f_1157_ = lean_alloc_closure((void*)(l_Lean_setStructureParents___redArg___lam__1), 9, 8);
lean_closure_set(v___f_1157_, 0, v___x_1156_);
lean_closure_set(v___f_1157_, 1, v___x_1154_);
lean_closure_set(v___f_1157_, 2, v___x_1155_);
lean_closure_set(v___f_1157_, 3, v_structName_1149_);
lean_closure_set(v___f_1157_, 4, v_parentInfo_1150_);
lean_closure_set(v___f_1157_, 5, v_modifyEnv_1153_);
lean_closure_set(v___f_1157_, 6, v_inst_1146_);
lean_closure_set(v___f_1157_, 7, v_inst_1148_);
v___x_1158_ = lean_apply_4(v_toBind_1151_, lean_box(0), lean_box(0), v_getEnv_1152_, v___f_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_setStructureParents(lean_object* v_m_1159_, lean_object* v_inst_1160_, lean_object* v_inst_1161_, lean_object* v_inst_1162_, lean_object* v_structName_1163_, lean_object* v_parentInfo_1164_){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = l_Lean_setStructureParents___redArg(v_inst_1160_, v_inst_1161_, v_inst_1162_, v_structName_1163_, v_parentInfo_1164_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1___redArg(lean_object* v_as_1166_, lean_object* v_k_1167_, lean_object* v_x_1168_, lean_object* v_x_1169_){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v_m_1172_; lean_object* v_a_1173_; uint8_t v___x_1174_; 
v___x_1170_ = lean_nat_add(v_x_1168_, v_x_1169_);
v___x_1171_ = lean_unsigned_to_nat(1u);
v_m_1172_ = lean_nat_shiftr(v___x_1170_, v___x_1171_);
lean_dec(v___x_1170_);
v_a_1173_ = lean_array_fget_borrowed(v_as_1166_, v_m_1172_);
v___x_1174_ = l_Lean_StructureInfo_lt(v_a_1173_, v_k_1167_);
if (v___x_1174_ == 0)
{
uint8_t v___x_1175_; 
lean_dec(v_x_1169_);
v___x_1175_ = l_Lean_StructureInfo_lt(v_k_1167_, v_a_1173_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; 
lean_dec(v_m_1172_);
lean_dec(v_x_1168_);
lean_inc(v_a_1173_);
v___x_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1176_, 0, v_a_1173_);
return v___x_1176_;
}
else
{
lean_object* v___x_1177_; uint8_t v___x_1178_; lean_object* v___x_1179_; uint8_t v___y_1181_; 
v___x_1177_ = lean_unsigned_to_nat(0u);
v___x_1178_ = lean_nat_dec_eq(v_m_1172_, v___x_1177_);
v___x_1179_ = lean_nat_sub(v_m_1172_, v___x_1171_);
lean_dec(v_m_1172_);
if (v___x_1178_ == 0)
{
uint8_t v___x_1184_; 
v___x_1184_ = lean_nat_dec_lt(v___x_1179_, v_x_1168_);
v___y_1181_ = v___x_1184_;
goto v___jp_1180_;
}
else
{
v___y_1181_ = v___x_1178_;
goto v___jp_1180_;
}
v___jp_1180_:
{
if (v___y_1181_ == 0)
{
v_x_1169_ = v___x_1179_;
goto _start;
}
else
{
lean_object* v___x_1183_; 
lean_dec(v___x_1179_);
lean_dec(v_x_1168_);
v___x_1183_ = lean_box(0);
return v___x_1183_;
}
}
}
}
else
{
lean_object* v___x_1185_; uint8_t v___x_1186_; 
lean_dec(v_x_1168_);
v___x_1185_ = lean_nat_add(v_m_1172_, v___x_1171_);
lean_dec(v_m_1172_);
v___x_1186_ = lean_nat_dec_le(v___x_1185_, v_x_1169_);
if (v___x_1186_ == 0)
{
lean_object* v___x_1187_; 
lean_dec(v___x_1185_);
lean_dec(v_x_1169_);
v___x_1187_ = lean_box(0);
return v___x_1187_;
}
else
{
v_x_1168_ = v___x_1185_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1___redArg___boxed(lean_object* v_as_1189_, lean_object* v_k_1190_, lean_object* v_x_1191_, lean_object* v_x_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1___redArg(v_as_1189_, v_k_1190_, v_x_1191_, v_x_1192_);
lean_dec_ref(v_k_1190_);
lean_dec_ref(v_as_1189_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1194_, lean_object* v_vals_1195_, lean_object* v_i_1196_, lean_object* v_k_1197_){
_start:
{
lean_object* v___x_1198_; uint8_t v___x_1199_; 
v___x_1198_ = lean_array_get_size(v_keys_1194_);
v___x_1199_ = lean_nat_dec_lt(v_i_1196_, v___x_1198_);
if (v___x_1199_ == 0)
{
lean_object* v___x_1200_; 
lean_dec(v_i_1196_);
v___x_1200_ = lean_box(0);
return v___x_1200_;
}
else
{
lean_object* v_k_x27_1201_; uint8_t v___x_1202_; 
v_k_x27_1201_ = lean_array_fget_borrowed(v_keys_1194_, v_i_1196_);
v___x_1202_ = lean_name_eq(v_k_1197_, v_k_x27_1201_);
if (v___x_1202_ == 0)
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = lean_unsigned_to_nat(1u);
v___x_1204_ = lean_nat_add(v_i_1196_, v___x_1203_);
lean_dec(v_i_1196_);
v_i_1196_ = v___x_1204_;
goto _start;
}
else
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = lean_array_fget_borrowed(v_vals_1195_, v_i_1196_);
lean_dec(v_i_1196_);
lean_inc(v___x_1206_);
v___x_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1206_);
return v___x_1207_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1208_, lean_object* v_vals_1209_, lean_object* v_i_1210_, lean_object* v_k_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1208_, v_vals_1209_, v_i_1210_, v_k_1211_);
lean_dec(v_k_1211_);
lean_dec_ref(v_vals_1209_);
lean_dec_ref(v_keys_1208_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0___redArg(lean_object* v_x_1213_, size_t v_x_1214_, lean_object* v_x_1215_){
_start:
{
if (lean_obj_tag(v_x_1213_) == 0)
{
lean_object* v_es_1216_; lean_object* v___x_1217_; size_t v___x_1218_; size_t v___x_1219_; lean_object* v_j_1220_; lean_object* v___x_1221_; 
v_es_1216_ = lean_ctor_get(v_x_1213_, 0);
v___x_1217_ = lean_box(2);
v___x_1218_ = ((size_t)31ULL);
v___x_1219_ = lean_usize_land(v_x_1214_, v___x_1218_);
v_j_1220_ = lean_usize_to_nat(v___x_1219_);
v___x_1221_ = lean_array_get_borrowed(v___x_1217_, v_es_1216_, v_j_1220_);
lean_dec(v_j_1220_);
switch(lean_obj_tag(v___x_1221_))
{
case 0:
{
lean_object* v_key_1222_; lean_object* v_val_1223_; uint8_t v___x_1224_; 
v_key_1222_ = lean_ctor_get(v___x_1221_, 0);
v_val_1223_ = lean_ctor_get(v___x_1221_, 1);
v___x_1224_ = lean_name_eq(v_x_1215_, v_key_1222_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; 
v___x_1225_ = lean_box(0);
return v___x_1225_;
}
else
{
lean_object* v___x_1226_; 
lean_inc(v_val_1223_);
v___x_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_val_1223_);
return v___x_1226_;
}
}
case 1:
{
lean_object* v_node_1227_; size_t v___x_1228_; size_t v___x_1229_; 
v_node_1227_ = lean_ctor_get(v___x_1221_, 0);
v___x_1228_ = ((size_t)5ULL);
v___x_1229_ = lean_usize_shift_right(v_x_1214_, v___x_1228_);
v_x_1213_ = v_node_1227_;
v_x_1214_ = v___x_1229_;
goto _start;
}
default: 
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_box(0);
return v___x_1231_;
}
}
}
else
{
lean_object* v_ks_1232_; lean_object* v_vs_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v_ks_1232_ = lean_ctor_get(v_x_1213_, 0);
v_vs_1233_ = lean_ctor_get(v_x_1213_, 1);
v___x_1234_ = lean_unsigned_to_nat(0u);
v___x_1235_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1___redArg(v_ks_1232_, v_vs_1233_, v___x_1234_, v_x_1215_);
return v___x_1235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_1236_, lean_object* v_x_1237_, lean_object* v_x_1238_){
_start:
{
size_t v_x_414__boxed_1239_; lean_object* v_res_1240_; 
v_x_414__boxed_1239_ = lean_unbox_usize(v_x_1237_);
lean_dec(v_x_1237_);
v_res_1240_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0___redArg(v_x_1236_, v_x_414__boxed_1239_, v_x_1238_);
lean_dec(v_x_1238_);
lean_dec_ref(v_x_1236_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___redArg(lean_object* v_x_1241_, lean_object* v_x_1242_){
_start:
{
uint64_t v___y_1244_; lean_object* v___x_1247_; 
v___x_1247_ = l_unsafeCast___redArg(v_x_1242_);
if (lean_obj_tag(v___x_1247_) == 0)
{
uint64_t v___x_1248_; 
v___x_1248_ = 1723ULL;
v___y_1244_ = v___x_1248_;
goto v___jp_1243_;
}
else
{
uint64_t v_hash_1249_; 
v_hash_1249_ = lean_ctor_get_uint64(v___x_1247_, sizeof(void*)*2);
lean_dec(v___x_1247_);
v___y_1244_ = v_hash_1249_;
goto v___jp_1243_;
}
v___jp_1243_:
{
size_t v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = lean_uint64_to_usize(v___y_1244_);
v___x_1246_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0___redArg(v_x_1241_, v___x_1245_, v_x_1242_);
return v___x_1246_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___redArg___boxed(lean_object* v_x_1250_, lean_object* v_x_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___redArg(v_x_1250_, v_x_1251_);
lean_dec(v_x_1251_);
lean_dec_ref(v_x_1250_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureInfo_x3f(lean_object* v_env_1253_, lean_object* v_structName_1254_){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = lean_obj_once(&l_Lean_setStructureParents___redArg___closed__2, &l_Lean_setStructureParents___redArg___closed__2_once, _init_l_Lean_setStructureParents___redArg___closed__2);
v___x_1256_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1253_, v_structName_1254_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v___x_1257_; lean_object* v_toEnvExtension_1258_; lean_object* v_asyncMode_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v_snd_1262_; lean_object* v___x_1263_; 
v___x_1257_ = l___private_Lean_Structure_0__Lean_structureExt;
v_toEnvExtension_1258_ = lean_ctor_get(v___x_1257_, 0);
v_asyncMode_1259_ = lean_ctor_get(v_toEnvExtension_1258_, 2);
v___x_1260_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_1261_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1255_, v___x_1257_, v_env_1253_, v_asyncMode_1259_, v___x_1260_);
v_snd_1262_ = lean_ctor_get(v___x_1261_, 1);
lean_inc(v_snd_1262_);
lean_dec(v___x_1261_);
v___x_1263_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___redArg(v_snd_1262_, v_structName_1254_);
lean_dec(v_structName_1254_);
lean_dec(v_snd_1262_);
return v___x_1263_;
}
else
{
lean_object* v_val_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; uint8_t v___x_1270_; 
v_val_1264_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_val_1264_);
lean_dec_ref_known(v___x_1256_, 1);
v___x_1265_ = l___private_Lean_Structure_0__Lean_structureExt;
v___x_1266_ = 0;
v___x_1267_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1255_, v___x_1265_, v_env_1253_, v_val_1264_, v___x_1266_);
lean_dec(v_val_1264_);
lean_dec_ref(v_env_1253_);
v___x_1268_ = lean_unsigned_to_nat(0u);
v___x_1269_ = lean_array_get_size(v___x_1267_);
v___x_1270_ = lean_nat_dec_lt(v___x_1268_, v___x_1269_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; 
lean_dec_ref(v___x_1267_);
lean_dec(v_structName_1254_);
v___x_1271_ = lean_box(0);
return v___x_1271_;
}
else
{
lean_object* v___x_1272_; lean_object* v___x_1273_; uint8_t v___x_1274_; 
v___x_1272_ = lean_unsigned_to_nat(1u);
v___x_1273_ = lean_nat_sub(v___x_1269_, v___x_1272_);
v___x_1274_ = lean_nat_dec_le(v___x_1268_, v___x_1273_);
if (v___x_1274_ == 0)
{
lean_object* v___x_1275_; 
lean_dec(v___x_1273_);
lean_dec_ref(v___x_1267_);
lean_dec(v_structName_1254_);
v___x_1275_ = lean_box(0);
return v___x_1275_;
}
else
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1276_ = ((lean_object*)(l_Lean_instInhabitedStructureInfo_default___closed__0));
v___x_1277_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1277_, 0, v_structName_1254_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
lean_ctor_set(v___x_1277_, 2, v___x_1276_);
lean_ctor_set(v___x_1277_, 3, v___x_1276_);
v___x_1278_ = l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1___redArg(v___x_1267_, v___x_1277_, v___x_1268_, v___x_1273_);
lean_dec_ref_known(v___x_1277_, 4);
lean_dec_ref(v___x_1267_);
return v___x_1278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0(lean_object* v_00_u03b2_1279_, lean_object* v_x_1280_, lean_object* v_x_1281_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___redArg(v_x_1280_, v_x_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___boxed(lean_object* v_00_u03b2_1283_, lean_object* v_x_1284_, lean_object* v_x_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0(v_00_u03b2_1283_, v_x_1284_, v_x_1285_);
lean_dec(v_x_1285_);
lean_dec_ref(v_x_1284_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1(lean_object* v_as_1287_, lean_object* v_k_1288_, lean_object* v_x_1289_, lean_object* v_x_1290_, lean_object* v_x_1291_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1___redArg(v_as_1287_, v_k_1288_, v_x_1289_, v_x_1290_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1___boxed(lean_object* v_as_1293_, lean_object* v_k_1294_, lean_object* v_x_1295_, lean_object* v_x_1296_, lean_object* v_x_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_Array_binSearchAux___at___00Lean_getStructureInfo_x3f_spec__1(v_as_1293_, v_k_1294_, v_x_1295_, v_x_1296_, v_x_1297_);
lean_dec_ref(v_k_1294_);
lean_dec_ref(v_as_1293_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1299_, lean_object* v_x_1300_, size_t v_x_1301_, lean_object* v_x_1302_){
_start:
{
lean_object* v___x_1303_; 
v___x_1303_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0___redArg(v_x_1300_, v_x_1301_, v_x_1302_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1304_, lean_object* v_x_1305_, lean_object* v_x_1306_, lean_object* v_x_1307_){
_start:
{
size_t v_x_550__boxed_1308_; lean_object* v_res_1309_; 
v_x_550__boxed_1308_ = lean_unbox_usize(v_x_1306_);
lean_dec(v_x_1306_);
v_res_1309_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0(v_00_u03b2_1304_, v_x_1305_, v_x_550__boxed_1308_, v_x_1307_);
lean_dec(v_x_1307_);
lean_dec_ref(v_x_1305_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1310_, lean_object* v_keys_1311_, lean_object* v_vals_1312_, lean_object* v_heq_1313_, lean_object* v_i_1314_, lean_object* v_k_1315_){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1311_, v_vals_1312_, v_i_1314_, v_k_1315_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1317_, lean_object* v_keys_1318_, lean_object* v_vals_1319_, lean_object* v_heq_1320_, lean_object* v_i_1321_, lean_object* v_k_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1317_, v_keys_1318_, v_vals_1319_, v_heq_1320_, v_i_1321_, v_k_1322_);
lean_dec(v_k_1322_);
lean_dec_ref(v_vals_1319_);
lean_dec_ref(v_keys_1318_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getStructureInfo_spec__0(lean_object* v_msg_1324_){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = l_Lean_instInhabitedStructureInfo_default;
v___x_1326_ = lean_panic_fn_borrowed(v___x_1325_, v_msg_1324_);
return v___x_1326_;
}
}
static lean_object* _init_l_Lean_getStructureInfo___closed__3(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1330_ = ((lean_object*)(l_Lean_getStructureInfo___closed__2));
v___x_1331_ = lean_unsigned_to_nat(4u);
v___x_1332_ = lean_unsigned_to_nat(139u);
v___x_1333_ = ((lean_object*)(l_Lean_getStructureInfo___closed__1));
v___x_1334_ = ((lean_object*)(l_Lean_getStructureInfo___closed__0));
v___x_1335_ = l_mkPanicMessageWithDecl(v___x_1334_, v___x_1333_, v___x_1332_, v___x_1331_, v___x_1330_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureInfo(lean_object* v_env_1336_, lean_object* v_structName_1337_){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = l_Lean_getStructureInfo_x3f(v_env_1336_, v_structName_1337_);
if (lean_obj_tag(v___x_1338_) == 1)
{
lean_object* v_val_1339_; 
v_val_1339_ = lean_ctor_get(v___x_1338_, 0);
lean_inc(v_val_1339_);
lean_dec_ref_known(v___x_1338_, 1);
return v_val_1339_;
}
else
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
lean_dec(v___x_1338_);
v___x_1340_ = lean_obj_once(&l_Lean_getStructureInfo___closed__3, &l_Lean_getStructureInfo___closed__3_once, _init_l_Lean_getStructureInfo___closed__3);
v___x_1341_ = l_panic___at___00Lean_getStructureInfo_spec__0(v___x_1340_);
return v___x_1341_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getStructureCtor_spec__0(lean_object* v_msg_1342_){
_start:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = l_Lean_instInhabitedConstructorVal_default;
v___x_1344_ = lean_panic_fn_borrowed(v___x_1343_, v_msg_1342_);
return v___x_1344_;
}
}
static lean_object* _init_l_Lean_getStructureCtor___closed__1(void){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1346_ = ((lean_object*)(l_Lean_getStructureInfo___closed__2));
v___x_1347_ = lean_unsigned_to_nat(9u);
v___x_1348_ = lean_unsigned_to_nat(154u);
v___x_1349_ = ((lean_object*)(l_Lean_getStructureCtor___closed__0));
v___x_1350_ = ((lean_object*)(l_Lean_getStructureInfo___closed__0));
v___x_1351_ = l_mkPanicMessageWithDecl(v___x_1350_, v___x_1349_, v___x_1348_, v___x_1347_, v___x_1346_);
return v___x_1351_;
}
}
static lean_object* _init_l_Lean_getStructureCtor___closed__3(void){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1353_ = ((lean_object*)(l_Lean_getStructureCtor___closed__2));
v___x_1354_ = lean_unsigned_to_nat(11u);
v___x_1355_ = lean_unsigned_to_nat(153u);
v___x_1356_ = ((lean_object*)(l_Lean_getStructureCtor___closed__0));
v___x_1357_ = ((lean_object*)(l_Lean_getStructureInfo___closed__0));
v___x_1358_ = l_mkPanicMessageWithDecl(v___x_1357_, v___x_1356_, v___x_1355_, v___x_1354_, v___x_1353_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureCtor(lean_object* v_env_1359_, lean_object* v_constName_1360_){
_start:
{
uint8_t v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = 0;
lean_inc_ref(v_env_1359_);
v___x_1368_ = l_Lean_Environment_find_x3f(v_env_1359_, v_constName_1360_, v___x_1367_);
if (lean_obj_tag(v___x_1368_) == 1)
{
lean_object* v_val_1369_; 
v_val_1369_ = lean_ctor_get(v___x_1368_, 0);
lean_inc(v_val_1369_);
lean_dec_ref_known(v___x_1368_, 1);
if (lean_obj_tag(v_val_1369_) == 5)
{
lean_object* v_val_1370_; lean_object* v_ctors_1371_; 
v_val_1370_ = lean_ctor_get(v_val_1369_, 0);
lean_inc_ref(v_val_1370_);
lean_dec_ref_known(v_val_1369_, 1);
v_ctors_1371_ = lean_ctor_get(v_val_1370_, 4);
lean_inc(v_ctors_1371_);
lean_dec_ref(v_val_1370_);
if (lean_obj_tag(v_ctors_1371_) == 1)
{
lean_object* v_tail_1372_; 
v_tail_1372_ = lean_ctor_get(v_ctors_1371_, 1);
if (lean_obj_tag(v_tail_1372_) == 0)
{
lean_object* v_head_1373_; lean_object* v___x_1374_; 
v_head_1373_ = lean_ctor_get(v_ctors_1371_, 0);
lean_inc(v_head_1373_);
lean_dec_ref_known(v_ctors_1371_, 2);
v___x_1374_ = l_Lean_Environment_find_x3f(v_env_1359_, v_head_1373_, v___x_1367_);
if (lean_obj_tag(v___x_1374_) == 1)
{
lean_object* v_val_1375_; 
v_val_1375_ = lean_ctor_get(v___x_1374_, 0);
lean_inc(v_val_1375_);
lean_dec_ref_known(v___x_1374_, 1);
if (lean_obj_tag(v_val_1375_) == 6)
{
lean_object* v_val_1376_; 
v_val_1376_ = lean_ctor_get(v_val_1375_, 0);
lean_inc_ref(v_val_1376_);
lean_dec_ref_known(v_val_1375_, 1);
return v_val_1376_;
}
else
{
lean_dec(v_val_1375_);
goto v___jp_1364_;
}
}
else
{
lean_dec(v___x_1374_);
goto v___jp_1364_;
}
}
else
{
lean_dec_ref_known(v_ctors_1371_, 2);
lean_dec_ref(v_env_1359_);
goto v___jp_1361_;
}
}
else
{
lean_dec(v_ctors_1371_);
lean_dec_ref(v_env_1359_);
goto v___jp_1361_;
}
}
else
{
lean_dec(v_val_1369_);
lean_dec_ref(v_env_1359_);
goto v___jp_1361_;
}
}
else
{
lean_dec(v___x_1368_);
lean_dec_ref(v_env_1359_);
goto v___jp_1361_;
}
v___jp_1361_:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = lean_obj_once(&l_Lean_getStructureCtor___closed__1, &l_Lean_getStructureCtor___closed__1_once, _init_l_Lean_getStructureCtor___closed__1);
v___x_1363_ = l_panic___at___00Lean_getStructureCtor_spec__0(v___x_1362_);
return v___x_1363_;
}
v___jp_1364_:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1365_ = lean_obj_once(&l_Lean_getStructureCtor___closed__3, &l_Lean_getStructureCtor___closed__3_once, _init_l_Lean_getStructureCtor___closed__3);
v___x_1366_ = l_panic___at___00Lean_getStructureCtor_spec__0(v___x_1365_);
return v___x_1366_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureFields(lean_object* v_env_1377_, lean_object* v_structName_1378_){
_start:
{
lean_object* v___x_1379_; lean_object* v_fieldNames_1380_; 
v___x_1379_ = l_Lean_getStructureInfo(v_env_1377_, v_structName_1378_);
v_fieldNames_1380_ = lean_ctor_get(v___x_1379_, 1);
lean_inc_ref(v_fieldNames_1380_);
lean_dec_ref(v___x_1379_);
return v_fieldNames_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_getFieldInfo_x3f(lean_object* v_env_1381_, lean_object* v_structName_1382_, lean_object* v_fieldName_1383_){
_start:
{
lean_object* v___x_1384_; 
v___x_1384_ = l_Lean_getStructureInfo_x3f(v_env_1381_, v_structName_1382_);
if (lean_obj_tag(v___x_1384_) == 1)
{
lean_object* v_val_1385_; lean_object* v_fieldInfo_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; uint8_t v___x_1389_; 
v_val_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_val_1385_);
lean_dec_ref_known(v___x_1384_, 1);
v_fieldInfo_1386_ = lean_ctor_get(v_val_1385_, 2);
lean_inc_ref(v_fieldInfo_1386_);
lean_dec(v_val_1385_);
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = lean_array_get_size(v_fieldInfo_1386_);
v___x_1389_ = lean_nat_dec_lt(v___x_1387_, v___x_1388_);
if (v___x_1389_ == 0)
{
lean_object* v___x_1390_; 
lean_dec_ref(v_fieldInfo_1386_);
lean_dec(v_fieldName_1383_);
v___x_1390_ = lean_box(0);
return v___x_1390_;
}
else
{
lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; 
v___x_1391_ = lean_unsigned_to_nat(1u);
v___x_1392_ = lean_nat_sub(v___x_1388_, v___x_1391_);
v___x_1393_ = lean_nat_dec_le(v___x_1387_, v___x_1392_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; 
lean_dec(v___x_1392_);
lean_dec_ref(v_fieldInfo_1386_);
lean_dec(v_fieldName_1383_);
v___x_1394_ = lean_box(0);
return v___x_1394_;
}
else
{
lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1395_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_1396_ = lean_box(0);
v___x_1397_ = 0;
v___x_1398_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1398_, 0, v_fieldName_1383_);
lean_ctor_set(v___x_1398_, 1, v___x_1395_);
lean_ctor_set(v___x_1398_, 2, v___x_1396_);
lean_ctor_set(v___x_1398_, 3, v___x_1396_);
lean_ctor_set_uint8(v___x_1398_, sizeof(void*)*4, v___x_1397_);
v___x_1399_ = l_Array_binSearchAux___at___00Lean_StructureInfo_getProjFn_x3f_spec__0___redArg(v_fieldInfo_1386_, v___x_1398_, v___x_1387_, v___x_1392_);
lean_dec_ref_known(v___x_1398_, 4);
lean_dec_ref(v_fieldInfo_1386_);
return v___x_1399_;
}
}
}
else
{
lean_object* v___x_1400_; 
lean_dec(v___x_1384_);
lean_dec(v_fieldName_1383_);
v___x_1400_ = lean_box(0);
return v___x_1400_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isSubobjectField_x3f(lean_object* v_env_1401_, lean_object* v_structName_1402_, lean_object* v_fieldName_1403_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Lean_getFieldInfo_x3f(v_env_1401_, v_structName_1402_, v_fieldName_1403_);
if (lean_obj_tag(v___x_1404_) == 1)
{
lean_object* v_val_1405_; lean_object* v_subobject_x3f_1406_; 
v_val_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_val_1405_);
lean_dec_ref_known(v___x_1404_, 1);
v_subobject_x3f_1406_ = lean_ctor_get(v_val_1405_, 2);
lean_inc(v_subobject_x3f_1406_);
lean_dec(v_val_1405_);
return v_subobject_x3f_1406_;
}
else
{
lean_object* v___x_1407_; 
lean_dec(v___x_1404_);
v___x_1407_ = lean_box(0);
return v___x_1407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureParentInfo(lean_object* v_env_1408_, lean_object* v_structName_1409_){
_start:
{
lean_object* v___x_1410_; lean_object* v_parentInfo_1411_; 
v___x_1410_ = l_Lean_getStructureInfo(v_env_1408_, v_structName_1409_);
v_parentInfo_1411_ = lean_ctor_get(v___x_1410_, 3);
lean_inc_ref(v_parentInfo_1411_);
lean_dec_ref(v___x_1410_);
return v_parentInfo_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0_spec__0(lean_object* v_env_1412_, lean_object* v_structName_1413_, lean_object* v_as_1414_, size_t v_i_1415_, size_t v_stop_1416_, lean_object* v_b_1417_){
_start:
{
lean_object* v___y_1419_; uint8_t v___x_1423_; 
v___x_1423_ = lean_usize_dec_eq(v_i_1415_, v_stop_1416_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1424_ = lean_array_uget_borrowed(v_as_1414_, v_i_1415_);
lean_inc(v___x_1424_);
lean_inc(v_structName_1413_);
lean_inc_ref(v_env_1412_);
v___x_1425_ = l_Lean_isSubobjectField_x3f(v_env_1412_, v_structName_1413_, v___x_1424_);
if (lean_obj_tag(v___x_1425_) == 0)
{
v___y_1419_ = v_b_1417_;
goto v___jp_1418_;
}
else
{
lean_object* v_val_1426_; lean_object* v___x_1427_; 
v_val_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_val_1426_);
lean_dec_ref_known(v___x_1425_, 1);
v___x_1427_ = lean_array_push(v_b_1417_, v_val_1426_);
v___y_1419_ = v___x_1427_;
goto v___jp_1418_;
}
}
else
{
lean_dec(v_structName_1413_);
lean_dec_ref(v_env_1412_);
return v_b_1417_;
}
v___jp_1418_:
{
size_t v___x_1420_; size_t v___x_1421_; 
v___x_1420_ = ((size_t)1ULL);
v___x_1421_ = lean_usize_add(v_i_1415_, v___x_1420_);
v_i_1415_ = v___x_1421_;
v_b_1417_ = v___y_1419_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0_spec__0___boxed(lean_object* v_env_1428_, lean_object* v_structName_1429_, lean_object* v_as_1430_, lean_object* v_i_1431_, lean_object* v_stop_1432_, lean_object* v_b_1433_){
_start:
{
size_t v_i_boxed_1434_; size_t v_stop_boxed_1435_; lean_object* v_res_1436_; 
v_i_boxed_1434_ = lean_unbox_usize(v_i_1431_);
lean_dec(v_i_1431_);
v_stop_boxed_1435_ = lean_unbox_usize(v_stop_1432_);
lean_dec(v_stop_1432_);
v_res_1436_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0_spec__0(v_env_1428_, v_structName_1429_, v_as_1430_, v_i_boxed_1434_, v_stop_boxed_1435_, v_b_1433_);
lean_dec_ref(v_as_1430_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0(lean_object* v_env_1437_, lean_object* v_structName_1438_, lean_object* v_as_1439_, lean_object* v_start_1440_, lean_object* v_stop_1441_){
_start:
{
lean_object* v___x_1442_; uint8_t v___x_1443_; 
v___x_1442_ = ((lean_object*)(l_Lean_instInhabitedStructureInfo_default___closed__0));
v___x_1443_ = lean_nat_dec_lt(v_start_1440_, v_stop_1441_);
if (v___x_1443_ == 0)
{
lean_dec(v_structName_1438_);
lean_dec_ref(v_env_1437_);
return v___x_1442_;
}
else
{
lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = lean_array_get_size(v_as_1439_);
v___x_1445_ = lean_nat_dec_le(v_stop_1441_, v___x_1444_);
if (v___x_1445_ == 0)
{
uint8_t v___x_1446_; 
v___x_1446_ = lean_nat_dec_lt(v_start_1440_, v___x_1444_);
if (v___x_1446_ == 0)
{
lean_dec(v_structName_1438_);
lean_dec_ref(v_env_1437_);
return v___x_1442_;
}
else
{
size_t v___x_1447_; size_t v___x_1448_; lean_object* v___x_1449_; 
v___x_1447_ = lean_usize_of_nat(v_start_1440_);
v___x_1448_ = lean_usize_of_nat(v___x_1444_);
v___x_1449_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0_spec__0(v_env_1437_, v_structName_1438_, v_as_1439_, v___x_1447_, v___x_1448_, v___x_1442_);
return v___x_1449_;
}
}
else
{
size_t v___x_1450_; size_t v___x_1451_; lean_object* v___x_1452_; 
v___x_1450_ = lean_usize_of_nat(v_start_1440_);
v___x_1451_ = lean_usize_of_nat(v_stop_1441_);
v___x_1452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0_spec__0(v_env_1437_, v_structName_1438_, v_as_1439_, v___x_1450_, v___x_1451_, v___x_1442_);
return v___x_1452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0___boxed(lean_object* v_env_1453_, lean_object* v_structName_1454_, lean_object* v_as_1455_, lean_object* v_start_1456_, lean_object* v_stop_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0(v_env_1453_, v_structName_1454_, v_as_1455_, v_start_1456_, v_stop_1457_);
lean_dec(v_stop_1457_);
lean_dec(v_start_1456_);
lean_dec_ref(v_as_1455_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureSubobjects(lean_object* v_env_1459_, lean_object* v_structName_1460_){
_start:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
lean_inc(v_structName_1460_);
lean_inc_ref(v_env_1459_);
v___x_1461_ = l_Lean_getStructureFields(v_env_1459_, v_structName_1460_);
v___x_1462_ = lean_unsigned_to_nat(0u);
v___x_1463_ = lean_array_get_size(v___x_1461_);
v___x_1464_ = l_Array_filterMapM___at___00Lean_getStructureSubobjects_spec__0(v_env_1459_, v_structName_1460_, v___x_1461_, v___x_1462_, v___x_1463_);
lean_dec_ref(v___x_1461_);
return v___x_1464_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_findField_x3f_spec__0_spec__0(lean_object* v_a_1465_, lean_object* v_as_1466_, size_t v_i_1467_, size_t v_stop_1468_){
_start:
{
uint8_t v___x_1469_; 
v___x_1469_ = lean_usize_dec_eq(v_i_1467_, v_stop_1468_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; uint8_t v___x_1471_; 
v___x_1470_ = lean_array_uget_borrowed(v_as_1466_, v_i_1467_);
v___x_1471_ = lean_name_eq(v_a_1465_, v___x_1470_);
if (v___x_1471_ == 0)
{
size_t v___x_1472_; size_t v___x_1473_; 
v___x_1472_ = ((size_t)1ULL);
v___x_1473_ = lean_usize_add(v_i_1467_, v___x_1472_);
v_i_1467_ = v___x_1473_;
goto _start;
}
else
{
return v___x_1471_;
}
}
else
{
uint8_t v___x_1475_; 
v___x_1475_ = 0;
return v___x_1475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_findField_x3f_spec__0_spec__0___boxed(lean_object* v_a_1476_, lean_object* v_as_1477_, lean_object* v_i_1478_, lean_object* v_stop_1479_){
_start:
{
size_t v_i_boxed_1480_; size_t v_stop_boxed_1481_; uint8_t v_res_1482_; lean_object* v_r_1483_; 
v_i_boxed_1480_ = lean_unbox_usize(v_i_1478_);
lean_dec(v_i_1478_);
v_stop_boxed_1481_ = lean_unbox_usize(v_stop_1479_);
lean_dec(v_stop_1479_);
v_res_1482_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_findField_x3f_spec__0_spec__0(v_a_1476_, v_as_1477_, v_i_boxed_1480_, v_stop_boxed_1481_);
lean_dec_ref(v_as_1477_);
lean_dec(v_a_1476_);
v_r_1483_ = lean_box(v_res_1482_);
return v_r_1483_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_findField_x3f_spec__0(lean_object* v_as_1484_, lean_object* v_a_1485_){
_start:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; uint8_t v___x_1488_; 
v___x_1486_ = lean_unsigned_to_nat(0u);
v___x_1487_ = lean_array_get_size(v_as_1484_);
v___x_1488_ = lean_nat_dec_lt(v___x_1486_, v___x_1487_);
if (v___x_1488_ == 0)
{
return v___x_1488_;
}
else
{
if (v___x_1488_ == 0)
{
return v___x_1488_;
}
else
{
size_t v___x_1489_; size_t v___x_1490_; uint8_t v___x_1491_; 
v___x_1489_ = ((size_t)0ULL);
v___x_1490_ = lean_usize_of_nat(v___x_1487_);
v___x_1491_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_findField_x3f_spec__0_spec__0(v_a_1485_, v_as_1484_, v___x_1489_, v___x_1490_);
return v___x_1491_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_findField_x3f_spec__0___boxed(lean_object* v_as_1492_, lean_object* v_a_1493_){
_start:
{
uint8_t v_res_1494_; lean_object* v_r_1495_; 
v_res_1494_ = l_Array_contains___at___00Lean_findField_x3f_spec__0(v_as_1492_, v_a_1493_);
lean_dec(v_a_1493_);
lean_dec_ref(v_as_1492_);
v_r_1495_ = lean_box(v_res_1494_);
return v_r_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_findField_x3f(lean_object* v_env_1499_, lean_object* v_structName_1500_, lean_object* v_fieldName_1501_){
_start:
{
lean_object* v___x_1502_; uint8_t v___x_1503_; 
lean_inc(v_structName_1500_);
lean_inc_ref(v_env_1499_);
v___x_1502_ = l_Lean_getStructureFields(v_env_1499_, v_structName_1500_);
v___x_1503_ = l_Array_contains___at___00Lean_findField_x3f_spec__0(v___x_1502_, v_fieldName_1501_);
lean_dec_ref(v___x_1502_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; size_t v_sz_1507_; size_t v___x_1508_; lean_object* v___x_1509_; lean_object* v_fst_1510_; 
lean_inc_ref(v_env_1499_);
v___x_1504_ = l_Lean_getStructureSubobjects(v_env_1499_, v_structName_1500_);
v___x_1505_ = lean_box(0);
v___x_1506_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1___closed__0));
v_sz_1507_ = lean_array_size(v___x_1504_);
v___x_1508_ = ((size_t)0ULL);
v___x_1509_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1(v_env_1499_, v_fieldName_1501_, v___x_1504_, v_sz_1507_, v___x_1508_, v___x_1506_);
lean_dec_ref(v___x_1504_);
v_fst_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_fst_1510_);
lean_dec_ref(v___x_1509_);
if (lean_obj_tag(v_fst_1510_) == 0)
{
return v___x_1505_;
}
else
{
lean_object* v_val_1511_; 
v_val_1511_ = lean_ctor_get(v_fst_1510_, 0);
lean_inc(v_val_1511_);
lean_dec_ref_known(v_fst_1510_, 1);
return v_val_1511_;
}
}
else
{
lean_object* v___x_1512_; 
lean_dec_ref(v_env_1499_);
v___x_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1512_, 0, v_structName_1500_);
return v___x_1512_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1(lean_object* v_env_1513_, lean_object* v_fieldName_1514_, lean_object* v_as_1515_, size_t v_sz_1516_, size_t v_i_1517_, lean_object* v_b_1518_){
_start:
{
uint8_t v___x_1519_; 
v___x_1519_ = lean_usize_dec_lt(v_i_1517_, v_sz_1516_);
if (v___x_1519_ == 0)
{
lean_dec_ref(v_env_1513_);
lean_inc_ref(v_b_1518_);
return v_b_1518_;
}
else
{
lean_object* v___x_1520_; lean_object* v_a_1521_; lean_object* v___x_1522_; 
v___x_1520_ = lean_box(0);
v_a_1521_ = lean_array_uget_borrowed(v_as_1515_, v_i_1517_);
lean_inc(v_a_1521_);
lean_inc_ref(v_env_1513_);
v___x_1522_ = l_Lean_findField_x3f(v_env_1513_, v_a_1521_, v_fieldName_1514_);
if (lean_obj_tag(v___x_1522_) == 1)
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
lean_dec_ref(v_env_1513_);
v___x_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1522_);
v___x_1524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
lean_ctor_set(v___x_1524_, 1, v___x_1520_);
return v___x_1524_;
}
else
{
lean_object* v___x_1525_; size_t v___x_1526_; size_t v___x_1527_; 
lean_dec(v___x_1522_);
v___x_1525_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1___closed__0));
v___x_1526_ = ((size_t)1ULL);
v___x_1527_ = lean_usize_add(v_i_1517_, v___x_1526_);
v_i_1517_ = v___x_1527_;
v_b_1518_ = v___x_1525_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1___boxed(lean_object* v_env_1529_, lean_object* v_fieldName_1530_, lean_object* v_as_1531_, lean_object* v_sz_1532_, lean_object* v_i_1533_, lean_object* v_b_1534_){
_start:
{
size_t v_sz_boxed_1535_; size_t v_i_boxed_1536_; lean_object* v_res_1537_; 
v_sz_boxed_1535_ = lean_unbox_usize(v_sz_1532_);
lean_dec(v_sz_1532_);
v_i_boxed_1536_ = lean_unbox_usize(v_i_1533_);
lean_dec(v_i_1533_);
v_res_1537_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1(v_env_1529_, v_fieldName_1530_, v_as_1531_, v_sz_boxed_1535_, v_i_boxed_1536_, v_b_1534_);
lean_dec_ref(v_b_1534_);
lean_dec_ref(v_as_1531_);
lean_dec(v_fieldName_1530_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_findField_x3f___boxed(lean_object* v_env_1538_, lean_object* v_structName_1539_, lean_object* v_fieldName_1540_){
_start:
{
lean_object* v_res_1541_; 
v_res_1541_ = l_Lean_findField_x3f(v_env_1538_, v_structName_1539_, v_fieldName_1540_);
lean_dec(v_fieldName_1540_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1(lean_object* v_projName_1545_, lean_object* v_as_1546_, size_t v_sz_1547_, size_t v_i_1548_, lean_object* v_b_1549_){
_start:
{
uint8_t v___x_1550_; 
v___x_1550_ = lean_usize_dec_lt(v_i_1548_, v_sz_1547_);
if (v___x_1550_ == 0)
{
lean_inc_ref(v_b_1549_);
return v_b_1549_;
}
else
{
lean_object* v_a_1551_; lean_object* v_projFn_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; 
v_a_1551_ = lean_array_uget_borrowed(v_as_1546_, v_i_1548_);
v_projFn_1552_ = lean_ctor_get(v_a_1551_, 1);
v___x_1553_ = lean_box(0);
v___x_1554_ = l_Lean_Name_isSuffixOf(v_projName_1545_, v_projFn_1552_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; size_t v___x_1556_; size_t v___x_1557_; 
v___x_1555_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1___closed__0));
v___x_1556_ = ((size_t)1ULL);
v___x_1557_ = lean_usize_add(v_i_1548_, v___x_1556_);
v_i_1548_ = v___x_1557_;
v_b_1549_ = v___x_1555_;
goto _start;
}
else
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
lean_inc(v_a_1551_);
v___x_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1559_, 0, v_a_1551_);
v___x_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
v___x_1561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1560_);
lean_ctor_set(v___x_1561_, 1, v___x_1553_);
return v___x_1561_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1___boxed(lean_object* v_projName_1562_, lean_object* v_as_1563_, lean_object* v_sz_1564_, lean_object* v_i_1565_, lean_object* v_b_1566_){
_start:
{
size_t v_sz_boxed_1567_; size_t v_i_boxed_1568_; lean_object* v_res_1569_; 
v_sz_boxed_1567_ = lean_unbox_usize(v_sz_1564_);
lean_dec(v_sz_1564_);
v_i_boxed_1568_ = lean_unbox_usize(v_i_1565_);
lean_dec(v_i_1565_);
v_res_1569_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1(v_projName_1562_, v_as_1563_, v_sz_boxed_1567_, v_i_boxed_1568_, v_b_1566_);
lean_dec_ref(v_b_1566_);
lean_dec_ref(v_as_1563_);
lean_dec(v_projName_1562_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go(lean_object* v_env_1570_, lean_object* v_projName_1571_, lean_object* v_structName_1572_, lean_object* v_a_1573_){
_start:
{
uint8_t v___x_1574_; 
v___x_1574_ = l_Lean_NameSet_contains(v_a_1573_, v_structName_1572_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; lean_object* v___x_1599_; size_t v_sz_1600_; size_t v___x_1601_; lean_object* v___x_1602_; lean_object* v_fst_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1620_; 
lean_inc(v_structName_1572_);
lean_inc_ref(v_env_1570_);
v___x_1575_ = l_Lean_getStructureParentInfo(v_env_1570_, v_structName_1572_);
v___x_1599_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1___closed__0));
v_sz_1600_ = lean_array_size(v___x_1575_);
v___x_1601_ = ((size_t)0ULL);
v___x_1602_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__1(v_projName_1571_, v___x_1575_, v_sz_1600_, v___x_1601_, v___x_1599_);
v_fst_1603_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1620_ == 0)
{
lean_object* v_unused_1621_; 
v_unused_1621_ = lean_ctor_get(v___x_1602_, 1);
lean_dec(v_unused_1621_);
v___x_1605_ = v___x_1602_;
v_isShared_1606_ = v_isSharedCheck_1620_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_fst_1603_);
lean_dec(v___x_1602_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1620_;
goto v_resetjp_1604_;
}
v___jp_1576_:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; size_t v_sz_1580_; size_t v___x_1581_; lean_object* v___x_1582_; lean_object* v_fst_1583_; lean_object* v_fst_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1597_; 
v___x_1577_ = l_Lean_NameSet_insert(v_a_1573_, v_structName_1572_);
v___x_1578_ = lean_box(0);
v___x_1579_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1___closed__0));
v_sz_1580_ = lean_array_size(v___x_1575_);
v___x_1581_ = ((size_t)0ULL);
v___x_1582_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__0(v_env_1570_, v_projName_1571_, v___x_1575_, v_sz_1580_, v___x_1581_, v___x_1579_, v___x_1577_);
lean_dec_ref(v___x_1575_);
v_fst_1583_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_fst_1583_);
v_fst_1584_ = lean_ctor_get(v_fst_1583_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v_fst_1583_);
if (v_isSharedCheck_1597_ == 0)
{
lean_object* v_unused_1598_; 
v_unused_1598_ = lean_ctor_get(v_fst_1583_, 1);
lean_dec(v_unused_1598_);
v___x_1586_ = v_fst_1583_;
v_isShared_1587_ = v_isSharedCheck_1597_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_fst_1584_);
lean_dec(v_fst_1583_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1597_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
if (lean_obj_tag(v_fst_1584_) == 0)
{
lean_object* v_snd_1588_; lean_object* v___x_1590_; 
v_snd_1588_ = lean_ctor_get(v___x_1582_, 1);
lean_inc(v_snd_1588_);
lean_dec_ref(v___x_1582_);
if (v_isShared_1587_ == 0)
{
lean_ctor_set(v___x_1586_, 1, v_snd_1588_);
lean_ctor_set(v___x_1586_, 0, v___x_1578_);
v___x_1590_ = v___x_1586_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1578_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v_snd_1588_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
else
{
lean_object* v_snd_1592_; lean_object* v_val_1593_; lean_object* v___x_1595_; 
v_snd_1592_ = lean_ctor_get(v___x_1582_, 1);
lean_inc(v_snd_1592_);
lean_dec_ref(v___x_1582_);
v_val_1593_ = lean_ctor_get(v_fst_1584_, 0);
lean_inc(v_val_1593_);
lean_dec_ref_known(v_fst_1584_, 1);
if (v_isShared_1587_ == 0)
{
lean_ctor_set(v___x_1586_, 1, v_snd_1592_);
lean_ctor_set(v___x_1586_, 0, v_val_1593_);
v___x_1595_ = v___x_1586_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_val_1593_);
lean_ctor_set(v_reuseFailAlloc_1596_, 1, v_snd_1592_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
v_resetjp_1604_:
{
if (lean_obj_tag(v_fst_1603_) == 0)
{
lean_del_object(v___x_1605_);
goto v___jp_1576_;
}
else
{
lean_object* v_val_1607_; 
v_val_1607_ = lean_ctor_get(v_fst_1603_, 0);
lean_inc(v_val_1607_);
lean_dec_ref_known(v_fst_1603_, 1);
if (lean_obj_tag(v_val_1607_) == 1)
{
lean_object* v_val_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1619_; 
lean_dec_ref(v___x_1575_);
lean_dec(v_structName_1572_);
lean_dec_ref(v_env_1570_);
v_val_1608_ = lean_ctor_get(v_val_1607_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v_val_1607_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1610_ = v_val_1607_;
v_isShared_1611_ = v_isSharedCheck_1619_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_val_1608_);
lean_dec(v_val_1607_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1619_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v_structName_1612_; lean_object* v___x_1614_; 
v_structName_1612_ = lean_ctor_get(v_val_1608_, 0);
lean_inc(v_structName_1612_);
lean_dec(v_val_1608_);
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v_structName_1612_);
v___x_1614_ = v___x_1610_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_structName_1612_);
v___x_1614_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
lean_object* v___x_1616_; 
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 1, v_a_1573_);
lean_ctor_set(v___x_1605_, 0, v___x_1614_);
v___x_1616_ = v___x_1605_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1614_);
lean_ctor_set(v_reuseFailAlloc_1617_, 1, v_a_1573_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
else
{
lean_dec(v_val_1607_);
lean_del_object(v___x_1605_);
goto v___jp_1576_;
}
}
}
}
else
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
lean_dec(v_structName_1572_);
lean_dec_ref(v_env_1570_);
v___x_1622_ = lean_box(0);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
lean_ctor_set(v___x_1623_, 1, v_a_1573_);
return v___x_1623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__0(lean_object* v_env_1624_, lean_object* v_projName_1625_, lean_object* v_as_1626_, size_t v_sz_1627_, size_t v_i_1628_, lean_object* v_b_1629_, lean_object* v___y_1630_){
_start:
{
uint8_t v___x_1631_; 
v___x_1631_ = lean_usize_dec_lt(v_i_1628_, v_sz_1627_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; 
lean_dec_ref(v_env_1624_);
v___x_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1632_, 0, v_b_1629_);
lean_ctor_set(v___x_1632_, 1, v___y_1630_);
return v___x_1632_;
}
else
{
lean_object* v_a_1633_; lean_object* v_structName_1634_; lean_object* v___x_1635_; lean_object* v_fst_1636_; lean_object* v_snd_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1651_; 
lean_dec_ref(v_b_1629_);
v_a_1633_ = lean_array_uget_borrowed(v_as_1626_, v_i_1628_);
v_structName_1634_ = lean_ctor_get(v_a_1633_, 0);
lean_inc(v_structName_1634_);
lean_inc_ref(v_env_1624_);
v___x_1635_ = l___private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go(v_env_1624_, v_projName_1625_, v_structName_1634_, v___y_1630_);
v_fst_1636_ = lean_ctor_get(v___x_1635_, 0);
v_snd_1637_ = lean_ctor_get(v___x_1635_, 1);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1639_ = v___x_1635_;
v_isShared_1640_ = v_isSharedCheck_1651_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_snd_1637_);
lean_inc(v_fst_1636_);
lean_dec(v___x_1635_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1651_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_box(0);
if (lean_obj_tag(v_fst_1636_) == 1)
{
lean_object* v___x_1642_; lean_object* v___x_1644_; 
lean_dec_ref(v_env_1624_);
v___x_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1642_, 0, v_fst_1636_);
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 1, v___x_1641_);
lean_ctor_set(v___x_1639_, 0, v___x_1642_);
v___x_1644_ = v___x_1639_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1642_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v___x_1641_);
v___x_1644_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
lean_object* v___x_1645_; 
v___x_1645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
lean_ctor_set(v___x_1645_, 1, v_snd_1637_);
return v___x_1645_;
}
}
else
{
lean_object* v___x_1647_; size_t v___x_1648_; size_t v___x_1649_; 
lean_del_object(v___x_1639_);
lean_dec(v_fst_1636_);
v___x_1647_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_findField_x3f_spec__1___closed__0));
v___x_1648_ = ((size_t)1ULL);
v___x_1649_ = lean_usize_add(v_i_1628_, v___x_1648_);
v_i_1628_ = v___x_1649_;
v_b_1629_ = v___x_1647_;
v___y_1630_ = v_snd_1637_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__0___boxed(lean_object* v_env_1652_, lean_object* v_projName_1653_, lean_object* v_as_1654_, lean_object* v_sz_1655_, lean_object* v_i_1656_, lean_object* v_b_1657_, lean_object* v___y_1658_){
_start:
{
size_t v_sz_boxed_1659_; size_t v_i_boxed_1660_; lean_object* v_res_1661_; 
v_sz_boxed_1659_ = lean_unbox_usize(v_sz_1655_);
lean_dec(v_sz_1655_);
v_i_boxed_1660_ = lean_unbox_usize(v_i_1656_);
lean_dec(v_i_1656_);
v_res_1661_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go_spec__0(v_env_1652_, v_projName_1653_, v_as_1654_, v_sz_boxed_1659_, v_i_boxed_1660_, v_b_1657_, v___y_1658_);
lean_dec_ref(v_as_1654_);
lean_dec(v_projName_1653_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go___boxed(lean_object* v_env_1662_, lean_object* v_projName_1663_, lean_object* v_structName_1664_, lean_object* v_a_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l___private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go(v_env_1662_, v_projName_1663_, v_structName_1664_, v_a_1665_);
lean_dec(v_projName_1663_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_findParentProjStruct_x3f(lean_object* v_env_1667_, lean_object* v_structName_1668_, lean_object* v_projName_1669_){
_start:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v_fst_1672_; 
v___x_1670_ = l_Lean_NameSet_empty;
v___x_1671_ = l___private_Lean_Structure_0__Lean_findParentProjStruct_x3f_go(v_env_1667_, v_projName_1669_, v_structName_1668_, v___x_1670_);
v_fst_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_fst_1672_);
lean_dec_ref(v___x_1671_);
return v_fst_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_findParentProjStruct_x3f___boxed(lean_object* v_env_1673_, lean_object* v_structName_1674_, lean_object* v_projName_1675_){
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l_Lean_findParentProjStruct_x3f(v_env_1673_, v_structName_1674_, v_projName_1675_);
lean_dec(v_projName_1675_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFlatCtorOfStructCtorName(lean_object* v_structCtorName_1680_){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = ((lean_object*)(l_Lean_mkFlatCtorOfStructCtorName___closed__1));
v___x_1682_ = l_Lean_Name_append(v_structCtorName_1680_, v___x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux_spec__0(lean_object* v_env_1683_, lean_object* v_structName_1684_, uint8_t v_includeSubobjectFields_1685_, lean_object* v_as_1686_, size_t v_i_1687_, size_t v_stop_1688_, lean_object* v_b_1689_){
_start:
{
lean_object* v___y_1691_; uint8_t v___x_1695_; 
v___x_1695_ = lean_usize_dec_eq(v_i_1687_, v_stop_1688_);
if (v___x_1695_ == 0)
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = lean_array_uget_borrowed(v_as_1686_, v_i_1687_);
lean_inc(v___x_1696_);
lean_inc(v_structName_1684_);
lean_inc_ref(v_env_1683_);
v___x_1697_ = l_Lean_isSubobjectField_x3f(v_env_1683_, v_structName_1684_, v___x_1696_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v___x_1698_; 
lean_inc(v___x_1696_);
v___x_1698_ = lean_array_push(v_b_1689_, v___x_1696_);
v___y_1691_ = v___x_1698_;
goto v___jp_1690_;
}
else
{
if (v_includeSubobjectFields_1685_ == 0)
{
lean_object* v_val_1699_; lean_object* v___x_1700_; 
v_val_1699_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_val_1699_);
lean_dec_ref_known(v___x_1697_, 1);
lean_inc_ref(v_env_1683_);
v___x_1700_ = l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(v_env_1683_, v_val_1699_, v_b_1689_, v_includeSubobjectFields_1685_);
v___y_1691_ = v___x_1700_;
goto v___jp_1690_;
}
else
{
lean_object* v_val_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v_val_1701_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_val_1701_);
lean_dec_ref_known(v___x_1697_, 1);
lean_inc(v___x_1696_);
v___x_1702_ = lean_array_push(v_b_1689_, v___x_1696_);
lean_inc_ref(v_env_1683_);
v___x_1703_ = l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(v_env_1683_, v_val_1701_, v___x_1702_, v_includeSubobjectFields_1685_);
v___y_1691_ = v___x_1703_;
goto v___jp_1690_;
}
}
}
else
{
lean_dec(v_structName_1684_);
lean_dec_ref(v_env_1683_);
return v_b_1689_;
}
v___jp_1690_:
{
size_t v___x_1692_; size_t v___x_1693_; 
v___x_1692_ = ((size_t)1ULL);
v___x_1693_ = lean_usize_add(v_i_1687_, v___x_1692_);
v_i_1687_ = v___x_1693_;
v_b_1689_ = v___y_1691_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(lean_object* v_env_1704_, lean_object* v_structName_1705_, lean_object* v_fullNames_1706_, uint8_t v_includeSubobjectFields_1707_){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
lean_inc(v_structName_1705_);
lean_inc_ref(v_env_1704_);
v___x_1708_ = l_Lean_getStructureFields(v_env_1704_, v_structName_1705_);
v___x_1709_ = lean_unsigned_to_nat(0u);
v___x_1710_ = lean_array_get_size(v___x_1708_);
v___x_1711_ = lean_nat_dec_lt(v___x_1709_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_dec_ref(v___x_1708_);
lean_dec(v_structName_1705_);
lean_dec_ref(v_env_1704_);
return v_fullNames_1706_;
}
else
{
uint8_t v___x_1712_; 
v___x_1712_ = lean_nat_dec_le(v___x_1710_, v___x_1710_);
if (v___x_1712_ == 0)
{
if (v___x_1711_ == 0)
{
lean_dec_ref(v___x_1708_);
lean_dec(v_structName_1705_);
lean_dec_ref(v_env_1704_);
return v_fullNames_1706_;
}
else
{
size_t v___x_1713_; size_t v___x_1714_; lean_object* v___x_1715_; 
v___x_1713_ = ((size_t)0ULL);
v___x_1714_ = lean_usize_of_nat(v___x_1710_);
v___x_1715_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux_spec__0(v_env_1704_, v_structName_1705_, v_includeSubobjectFields_1707_, v___x_1708_, v___x_1713_, v___x_1714_, v_fullNames_1706_);
lean_dec_ref(v___x_1708_);
return v___x_1715_;
}
}
else
{
size_t v___x_1716_; size_t v___x_1717_; lean_object* v___x_1718_; 
v___x_1716_ = ((size_t)0ULL);
v___x_1717_ = lean_usize_of_nat(v___x_1710_);
v___x_1718_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux_spec__0(v_env_1704_, v_structName_1705_, v_includeSubobjectFields_1707_, v___x_1708_, v___x_1716_, v___x_1717_, v_fullNames_1706_);
lean_dec_ref(v___x_1708_);
return v___x_1718_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___boxed(lean_object* v_env_1719_, lean_object* v_structName_1720_, lean_object* v_fullNames_1721_, lean_object* v_includeSubobjectFields_1722_){
_start:
{
uint8_t v_includeSubobjectFields_boxed_1723_; lean_object* v_res_1724_; 
v_includeSubobjectFields_boxed_1723_ = lean_unbox(v_includeSubobjectFields_1722_);
v_res_1724_ = l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(v_env_1719_, v_structName_1720_, v_fullNames_1721_, v_includeSubobjectFields_boxed_1723_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux_spec__0___boxed(lean_object* v_env_1725_, lean_object* v_structName_1726_, lean_object* v_includeSubobjectFields_1727_, lean_object* v_as_1728_, lean_object* v_i_1729_, lean_object* v_stop_1730_, lean_object* v_b_1731_){
_start:
{
uint8_t v_includeSubobjectFields_boxed_1732_; size_t v_i_boxed_1733_; size_t v_stop_boxed_1734_; lean_object* v_res_1735_; 
v_includeSubobjectFields_boxed_1732_ = lean_unbox(v_includeSubobjectFields_1727_);
v_i_boxed_1733_ = lean_unbox_usize(v_i_1729_);
lean_dec(v_i_1729_);
v_stop_boxed_1734_ = lean_unbox_usize(v_stop_1730_);
lean_dec(v_stop_1730_);
v_res_1735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux_spec__0(v_env_1725_, v_structName_1726_, v_includeSubobjectFields_boxed_1732_, v_as_1728_, v_i_boxed_1733_, v_stop_boxed_1734_, v_b_1731_);
lean_dec_ref(v_as_1728_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureFieldsFlattened(lean_object* v_env_1736_, lean_object* v_structName_1737_, uint8_t v_includeSubobjectFields_1738_){
_start:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = ((lean_object*)(l_Lean_instInhabitedStructureInfo_default___closed__0));
v___x_1740_ = l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(v_env_1736_, v_structName_1737_, v___x_1739_, v_includeSubobjectFields_1738_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureFieldsFlattened___boxed(lean_object* v_env_1741_, lean_object* v_structName_1742_, lean_object* v_includeSubobjectFields_1743_){
_start:
{
uint8_t v_includeSubobjectFields_boxed_1744_; lean_object* v_res_1745_; 
v_includeSubobjectFields_boxed_1744_ = lean_unbox(v_includeSubobjectFields_1743_);
v_res_1745_ = l_Lean_getStructureFieldsFlattened(v_env_1741_, v_structName_1742_, v_includeSubobjectFields_boxed_1744_);
return v_res_1745_;
}
}
LEAN_EXPORT uint8_t l_Lean_isStructure(lean_object* v_env_1746_, lean_object* v_constName_1747_){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = l_Lean_getStructureInfo_x3f(v_env_1746_, v_constName_1747_);
if (lean_obj_tag(v___x_1748_) == 0)
{
uint8_t v___x_1749_; 
v___x_1749_ = 0;
return v___x_1749_;
}
else
{
uint8_t v___x_1750_; 
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = 1;
return v___x_1750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isStructure___boxed(lean_object* v_env_1751_, lean_object* v_constName_1752_){
_start:
{
uint8_t v_res_1753_; lean_object* v_r_1754_; 
v_res_1753_ = l_Lean_isStructure(v_env_1751_, v_constName_1752_);
v_r_1754_ = lean_box(v_res_1753_);
return v_r_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjFnForField_x3f(lean_object* v_env_1755_, lean_object* v_structName_1756_, lean_object* v_fieldName_1757_){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = l_Lean_getFieldInfo_x3f(v_env_1755_, v_structName_1756_, v_fieldName_1757_);
if (lean_obj_tag(v___x_1758_) == 1)
{
lean_object* v_val_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1767_; 
v_val_1759_ = lean_ctor_get(v___x_1758_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1758_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1761_ = v___x_1758_;
v_isShared_1762_ = v_isSharedCheck_1767_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_val_1759_);
lean_dec(v___x_1758_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1767_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v_projFn_1763_; lean_object* v___x_1765_; 
v_projFn_1763_ = lean_ctor_get(v_val_1759_, 1);
lean_inc(v_projFn_1763_);
lean_dec(v_val_1759_);
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 0, v_projFn_1763_);
v___x_1765_ = v___x_1761_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_projFn_1763_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
else
{
lean_object* v___x_1768_; 
lean_dec(v___x_1758_);
v___x_1768_ = lean_box(0);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getProjFnInfoForField_x3f(lean_object* v_env_1769_, lean_object* v_structName_1770_, lean_object* v_fieldName_1771_){
_start:
{
lean_object* v___x_1772_; 
lean_inc_ref(v_env_1769_);
v___x_1772_ = l_Lean_getProjFnForField_x3f(v_env_1769_, v_structName_1770_, v_fieldName_1771_);
if (lean_obj_tag(v___x_1772_) == 1)
{
lean_object* v_val_1773_; lean_object* v___x_1774_; 
v_val_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc_n(v_val_1773_, 2);
lean_dec_ref_known(v___x_1772_, 1);
v___x_1774_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_1769_, v_val_1773_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v___x_1775_; 
lean_dec(v_val_1773_);
v___x_1775_ = lean_box(0);
return v___x_1775_;
}
else
{
lean_object* v_val_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1784_; 
v_val_1776_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1778_ = v___x_1774_;
v_isShared_1779_ = v_isSharedCheck_1784_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_val_1776_);
lean_dec(v___x_1774_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1784_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1780_; lean_object* v___x_1782_; 
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v_val_1773_);
lean_ctor_set(v___x_1780_, 1, v_val_1776_);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1780_);
v___x_1782_ = v___x_1778_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
else
{
lean_object* v___x_1785_; 
lean_dec(v___x_1772_);
lean_dec_ref(v_env_1769_);
v___x_1785_ = lean_box(0);
return v___x_1785_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefaultFnOfProjFn(lean_object* v_projFn_1789_){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1790_ = ((lean_object*)(l_Lean_mkDefaultFnOfProjFn___closed__1));
v___x_1791_ = l_Lean_Name_append(v_projFn_1789_, v___x_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkInheritedDefaultFnOfProjFn(lean_object* v_projFn_1795_){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1796_ = ((lean_object*)(l_Lean_mkInheritedDefaultFnOfProjFn___closed__1));
v___x_1797_ = l_Lean_Name_append(v_projFn_1795_, v___x_1796_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getFnForFieldUsing_x3f(lean_object* v_mkName_1798_, lean_object* v_env_1799_, lean_object* v_structName_1800_, lean_object* v_fieldName_1801_){
_start:
{
lean_object* v___x_1802_; 
lean_inc(v_fieldName_1801_);
lean_inc(v_structName_1800_);
lean_inc_ref(v_env_1799_);
v___x_1802_ = l_Lean_getProjFnForField_x3f(v_env_1799_, v_structName_1800_, v_fieldName_1801_);
if (lean_obj_tag(v___x_1802_) == 1)
{
lean_object* v_val_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1814_; 
lean_dec(v_fieldName_1801_);
lean_dec(v_structName_1800_);
v_val_1803_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1805_ = v___x_1802_;
v_isShared_1806_ = v_isSharedCheck_1814_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_val_1803_);
lean_dec(v___x_1802_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1814_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v_defFn_1807_; uint8_t v___x_1808_; uint8_t v___x_1809_; 
v_defFn_1807_ = lean_apply_1(v_mkName_1798_, v_val_1803_);
v___x_1808_ = 1;
lean_inc(v_defFn_1807_);
v___x_1809_ = l_Lean_Environment_contains(v_env_1799_, v_defFn_1807_, v___x_1808_);
if (v___x_1809_ == 0)
{
lean_object* v___x_1810_; 
lean_dec(v_defFn_1807_);
lean_del_object(v___x_1805_);
v___x_1810_ = lean_box(0);
return v___x_1810_;
}
else
{
lean_object* v___x_1812_; 
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 0, v_defFn_1807_);
v___x_1812_ = v___x_1805_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_defFn_1807_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
}
else
{
lean_object* v___x_1815_; lean_object* v_defFn_1816_; uint8_t v___x_1817_; uint8_t v___x_1818_; 
lean_dec(v___x_1802_);
v___x_1815_ = l_Lean_Name_append(v_structName_1800_, v_fieldName_1801_);
v_defFn_1816_ = lean_apply_1(v_mkName_1798_, v___x_1815_);
v___x_1817_ = 1;
lean_inc(v_defFn_1816_);
v___x_1818_ = l_Lean_Environment_contains(v_env_1799_, v_defFn_1816_, v___x_1817_);
if (v___x_1818_ == 0)
{
lean_object* v___x_1819_; 
lean_dec(v_defFn_1816_);
v___x_1819_ = lean_box(0);
return v___x_1819_;
}
else
{
lean_object* v___x_1820_; 
v___x_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1820_, 0, v_defFn_1816_);
return v___x_1820_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDefaultFnForField_x3f(lean_object* v_env_1822_, lean_object* v_structName_1823_, lean_object* v_fieldName_1824_){
_start:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = ((lean_object*)(l_Lean_getDefaultFnForField_x3f___closed__0));
v___x_1826_ = l___private_Lean_Structure_0__Lean_getFnForFieldUsing_x3f(v___x_1825_, v_env_1822_, v_structName_1823_, v_fieldName_1824_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_Lean_getEffectiveDefaultFnForField_x3f(lean_object* v_env_1828_, lean_object* v_structName_1829_, lean_object* v_fieldName_1830_){
_start:
{
lean_object* v___x_1831_; 
lean_inc(v_fieldName_1830_);
lean_inc(v_structName_1829_);
lean_inc_ref(v_env_1828_);
v___x_1831_ = l_Lean_getDefaultFnForField_x3f(v_env_1828_, v_structName_1829_, v_fieldName_1830_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1832_ = ((lean_object*)(l_Lean_getEffectiveDefaultFnForField_x3f___closed__0));
v___x_1833_ = l___private_Lean_Structure_0__Lean_getFnForFieldUsing_x3f(v___x_1832_, v_env_1828_, v_structName_1829_, v_fieldName_1830_);
return v___x_1833_;
}
else
{
lean_dec(v_fieldName_1830_);
lean_dec(v_structName_1829_);
lean_dec_ref(v_env_1828_);
return v___x_1831_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAutoParamFnOfProjFn(lean_object* v_projFn_1837_){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = ((lean_object*)(l_Lean_mkAutoParamFnOfProjFn___closed__1));
v___x_1839_ = l_Lean_Name_append(v_projFn_1837_, v___x_1838_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAutoParamFnForField_x3f(lean_object* v_env_1841_, lean_object* v_structName_1842_, lean_object* v_fieldName_1843_){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1844_ = ((lean_object*)(l_Lean_getAutoParamFnForField_x3f___closed__0));
v___x_1845_ = l___private_Lean_Structure_0__Lean_getFnForFieldUsing_x3f(v___x_1844_, v_env_1841_, v_structName_1842_, v_fieldName_1843_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__0(lean_object* v_path_1846_, lean_object* v_env_1847_, lean_object* v_baseStructName_1848_, lean_object* v_as_1849_, lean_object* v_i_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v_snd_1853_; lean_object* v___x_1857_; uint8_t v___x_1858_; 
v___x_1857_ = lean_array_get_size(v_as_1849_);
v___x_1858_ = lean_nat_dec_lt(v_i_1850_, v___x_1857_);
if (v___x_1858_ == 0)
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
lean_dec(v_i_1850_);
lean_dec_ref(v_env_1847_);
lean_dec(v_path_1846_);
v___x_1859_ = lean_box(0);
v___x_1860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1859_);
lean_ctor_set(v___x_1860_, 1, v___y_1851_);
return v___x_1860_;
}
else
{
lean_object* v___x_1861_; lean_object* v_subobject_x3f_1862_; 
v___x_1861_ = lean_array_fget_borrowed(v_as_1849_, v_i_1850_);
v_subobject_x3f_1862_ = lean_ctor_get(v___x_1861_, 2);
if (lean_obj_tag(v_subobject_x3f_1862_) == 1)
{
lean_object* v_projFn_1863_; lean_object* v_val_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v_fst_1867_; 
v_projFn_1863_ = lean_ctor_get(v___x_1861_, 1);
v_val_1864_ = lean_ctor_get(v_subobject_x3f_1862_, 0);
lean_inc(v_path_1846_);
lean_inc(v_projFn_1863_);
v___x_1865_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1865_, 0, v_projFn_1863_);
lean_ctor_set(v___x_1865_, 1, v_path_1846_);
lean_inc(v_val_1864_);
lean_inc_ref(v_env_1847_);
v___x_1866_ = l___private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go(v_env_1847_, v_baseStructName_1848_, v_val_1864_, v___x_1865_, v___y_1851_);
v_fst_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_fst_1867_);
if (lean_obj_tag(v_fst_1867_) == 0)
{
lean_object* v_snd_1868_; 
v_snd_1868_ = lean_ctor_get(v___x_1866_, 1);
lean_inc(v_snd_1868_);
lean_dec_ref(v___x_1866_);
v_snd_1853_ = v_snd_1868_;
goto v___jp_1852_;
}
else
{
lean_dec_ref_known(v_fst_1867_, 1);
lean_dec(v_i_1850_);
lean_dec_ref(v_env_1847_);
lean_dec(v_path_1846_);
return v___x_1866_;
}
}
else
{
v_snd_1853_ = v___y_1851_;
goto v___jp_1852_;
}
}
v___jp_1852_:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1854_ = lean_unsigned_to_nat(1u);
v___x_1855_ = lean_nat_add(v_i_1850_, v___x_1854_);
lean_dec(v_i_1850_);
v_i_1850_ = v___x_1855_;
v___y_1851_ = v_snd_1853_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go(lean_object* v_env_1869_, lean_object* v_baseStructName_1870_, lean_object* v_structName_1871_, lean_object* v_path_1872_, lean_object* v_a_1873_){
_start:
{
uint8_t v___x_1887_; 
v___x_1887_ = lean_name_eq(v_baseStructName_1870_, v_structName_1871_);
if (v___x_1887_ == 0)
{
uint8_t v___x_1888_; 
v___x_1888_ = l_Lean_NameSet_contains(v_a_1873_, v_structName_1871_);
if (v___x_1888_ == 0)
{
goto v___jp_1874_;
}
else
{
if (v___x_1887_ == 0)
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_dec(v_path_1872_);
lean_dec(v_structName_1871_);
lean_dec_ref(v_env_1869_);
v___x_1889_ = lean_box(0);
v___x_1890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1889_);
lean_ctor_set(v___x_1890_, 1, v_a_1873_);
return v___x_1890_;
}
else
{
goto v___jp_1874_;
}
}
}
else
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; 
lean_dec(v_structName_1871_);
lean_dec_ref(v_env_1869_);
v___x_1891_ = l_List_reverse___redArg(v_path_1872_);
v___x_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
v___x_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
lean_ctor_set(v___x_1893_, 1, v_a_1873_);
return v___x_1893_;
}
v___jp_1874_:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; 
lean_inc(v_structName_1871_);
v___x_1875_ = l_Lean_NameSet_insert(v_a_1873_, v_structName_1871_);
lean_inc_ref(v_env_1869_);
v___x_1876_ = l_Lean_getStructureInfo_x3f(v_env_1869_, v_structName_1871_);
if (lean_obj_tag(v___x_1876_) == 1)
{
lean_object* v_val_1877_; lean_object* v_fieldInfo_1878_; lean_object* v_parentInfo_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v_fst_1882_; 
v_val_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc(v_val_1877_);
lean_dec_ref_known(v___x_1876_, 1);
v_fieldInfo_1878_ = lean_ctor_get(v_val_1877_, 2);
lean_inc_ref(v_fieldInfo_1878_);
v_parentInfo_1879_ = lean_ctor_get(v_val_1877_, 3);
lean_inc_ref(v_parentInfo_1879_);
lean_dec(v_val_1877_);
v___x_1880_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_env_1869_);
lean_inc(v_path_1872_);
v___x_1881_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__0(v_path_1872_, v_env_1869_, v_baseStructName_1870_, v_fieldInfo_1878_, v___x_1880_, v___x_1875_);
lean_dec_ref(v_fieldInfo_1878_);
v_fst_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_fst_1882_);
if (lean_obj_tag(v_fst_1882_) == 0)
{
lean_object* v_snd_1883_; lean_object* v___x_1884_; 
v_snd_1883_ = lean_ctor_get(v___x_1881_, 1);
lean_inc(v_snd_1883_);
lean_dec_ref(v___x_1881_);
v___x_1884_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__1(v_path_1872_, v_env_1869_, v_baseStructName_1870_, v_parentInfo_1879_, v___x_1880_, v_snd_1883_);
lean_dec_ref(v_parentInfo_1879_);
return v___x_1884_;
}
else
{
lean_dec_ref_known(v_fst_1882_, 1);
lean_dec_ref(v_parentInfo_1879_);
lean_dec(v_path_1872_);
lean_dec_ref(v_env_1869_);
return v___x_1881_;
}
}
else
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
lean_dec(v___x_1876_);
lean_dec(v_path_1872_);
lean_dec_ref(v_env_1869_);
v___x_1885_ = lean_box(0);
v___x_1886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1885_);
lean_ctor_set(v___x_1886_, 1, v___x_1875_);
return v___x_1886_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__1(lean_object* v_path_1894_, lean_object* v_env_1895_, lean_object* v_baseStructName_1896_, lean_object* v_as_1897_, lean_object* v_i_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v___x_1900_; uint8_t v___x_1901_; 
v___x_1900_ = lean_array_get_size(v_as_1897_);
v___x_1901_ = lean_nat_dec_lt(v_i_1898_, v___x_1900_);
if (v___x_1901_ == 0)
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
lean_dec(v_i_1898_);
lean_dec_ref(v_env_1895_);
lean_dec(v_path_1894_);
v___x_1902_ = lean_box(0);
v___x_1903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
lean_ctor_set(v___x_1903_, 1, v___y_1899_);
return v___x_1903_;
}
else
{
lean_object* v___x_1904_; lean_object* v_structName_1905_; lean_object* v_projFn_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v_fst_1909_; 
v___x_1904_ = lean_array_fget_borrowed(v_as_1897_, v_i_1898_);
v_structName_1905_ = lean_ctor_get(v___x_1904_, 0);
v_projFn_1906_ = lean_ctor_get(v___x_1904_, 1);
lean_inc(v_path_1894_);
lean_inc(v_projFn_1906_);
v___x_1907_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1907_, 0, v_projFn_1906_);
lean_ctor_set(v___x_1907_, 1, v_path_1894_);
lean_inc(v_structName_1905_);
lean_inc_ref(v_env_1895_);
v___x_1908_ = l___private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go(v_env_1895_, v_baseStructName_1896_, v_structName_1905_, v___x_1907_, v___y_1899_);
v_fst_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_fst_1909_);
if (lean_obj_tag(v_fst_1909_) == 0)
{
lean_object* v_snd_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v_snd_1910_ = lean_ctor_get(v___x_1908_, 1);
lean_inc(v_snd_1910_);
lean_dec_ref(v___x_1908_);
v___x_1911_ = lean_unsigned_to_nat(1u);
v___x_1912_ = lean_nat_add(v_i_1898_, v___x_1911_);
lean_dec(v_i_1898_);
v_i_1898_ = v___x_1912_;
v___y_1899_ = v_snd_1910_;
goto _start;
}
else
{
lean_dec_ref_known(v_fst_1909_, 1);
lean_dec(v_i_1898_);
lean_dec_ref(v_env_1895_);
lean_dec(v_path_1894_);
return v___x_1908_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__1___boxed(lean_object* v_path_1914_, lean_object* v_env_1915_, lean_object* v_baseStructName_1916_, lean_object* v_as_1917_, lean_object* v_i_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__1(v_path_1914_, v_env_1915_, v_baseStructName_1916_, v_as_1917_, v_i_1918_, v___y_1919_);
lean_dec_ref(v_as_1917_);
lean_dec(v_baseStructName_1916_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__0___boxed(lean_object* v_path_1921_, lean_object* v_env_1922_, lean_object* v_baseStructName_1923_, lean_object* v_as_1924_, lean_object* v_i_1925_, lean_object* v___y_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l___private_Init_Data_Array_Basic_0__Array_firstM_go___at___00__private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go_spec__0(v_path_1921_, v_env_1922_, v_baseStructName_1923_, v_as_1924_, v_i_1925_, v___y_1926_);
lean_dec_ref(v_as_1924_);
lean_dec(v_baseStructName_1923_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go___boxed(lean_object* v_env_1928_, lean_object* v_baseStructName_1929_, lean_object* v_structName_1930_, lean_object* v_path_1931_, lean_object* v_a_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l___private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go(v_env_1928_, v_baseStructName_1929_, v_structName_1930_, v_path_1931_, v_a_1932_);
lean_dec(v_baseStructName_1929_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object* v_env_1934_, lean_object* v_baseStructName_1935_, lean_object* v_structName_1936_){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v_fst_1940_; 
v___x_1937_ = lean_box(0);
v___x_1938_ = l_Lean_NameSet_empty;
v___x_1939_ = l___private_Lean_Structure_0__Lean_getPathToBaseStructure_x3f_go(v_env_1934_, v_baseStructName_1935_, v_structName_1936_, v___x_1937_, v___x_1938_);
v_fst_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_fst_1940_);
lean_dec_ref(v___x_1939_);
return v_fst_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_getPathToBaseStructure_x3f___boxed(lean_object* v_env_1941_, lean_object* v_baseStructName_1942_, lean_object* v_structName_1943_){
_start:
{
lean_object* v_res_1944_; 
v_res_1944_ = l_Lean_getPathToBaseStructure_x3f(v_env_1941_, v_baseStructName_1942_, v_structName_1943_);
lean_dec(v_baseStructName_1942_);
return v_res_1944_;
}
}
LEAN_EXPORT uint8_t l_Lean_isNonRecStructure(lean_object* v_env_1945_, lean_object* v_constName_1946_){
_start:
{
uint8_t v___x_1947_; lean_object* v___x_1948_; 
v___x_1947_ = 0;
v___x_1948_ = l_Lean_Environment_find_x3f(v_env_1945_, v_constName_1946_, v___x_1947_);
if (lean_obj_tag(v___x_1948_) == 1)
{
lean_object* v_val_1949_; 
v_val_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_val_1949_);
lean_dec_ref_known(v___x_1948_, 1);
if (lean_obj_tag(v_val_1949_) == 5)
{
lean_object* v_val_1950_; lean_object* v_numIndices_1951_; lean_object* v_ctors_1952_; uint8_t v_isRec_1953_; lean_object* v___x_1954_; uint8_t v___x_1955_; 
v_val_1950_ = lean_ctor_get(v_val_1949_, 0);
lean_inc_ref(v_val_1950_);
lean_dec_ref_known(v_val_1949_, 1);
v_numIndices_1951_ = lean_ctor_get(v_val_1950_, 2);
lean_inc(v_numIndices_1951_);
v_ctors_1952_ = lean_ctor_get(v_val_1950_, 4);
lean_inc(v_ctors_1952_);
v_isRec_1953_ = lean_ctor_get_uint8(v_val_1950_, sizeof(void*)*6);
lean_dec_ref(v_val_1950_);
v___x_1954_ = lean_unsigned_to_nat(0u);
v___x_1955_ = lean_nat_dec_eq(v_numIndices_1951_, v___x_1954_);
lean_dec(v_numIndices_1951_);
if (v___x_1955_ == 0)
{
lean_dec(v_ctors_1952_);
return v___x_1955_;
}
else
{
if (lean_obj_tag(v_ctors_1952_) == 1)
{
lean_object* v_tail_1956_; 
v_tail_1956_ = lean_ctor_get(v_ctors_1952_, 1);
lean_inc(v_tail_1956_);
lean_dec_ref_known(v_ctors_1952_, 2);
if (lean_obj_tag(v_tail_1956_) == 0)
{
if (v_isRec_1953_ == 0)
{
return v___x_1955_;
}
else
{
return v___x_1947_;
}
}
else
{
lean_dec(v_tail_1956_);
return v___x_1947_;
}
}
else
{
lean_dec(v_ctors_1952_);
return v___x_1947_;
}
}
}
else
{
lean_dec(v_val_1949_);
return v___x_1947_;
}
}
else
{
lean_dec(v___x_1948_);
return v___x_1947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isNonRecStructure___boxed(lean_object* v_env_1957_, lean_object* v_constName_1958_){
_start:
{
uint8_t v_res_1959_; lean_object* v_r_1960_; 
v_res_1959_ = l_Lean_isNonRecStructure(v_env_1957_, v_constName_1958_);
v_r_1960_ = lean_box(v_res_1959_);
return v_r_1960_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getNonRecStructureCtor_x3f_spec__0(lean_object* v_msg_1961_){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1962_ = lean_box(0);
v___x_1963_ = lean_panic_fn_borrowed(v___x_1962_, v_msg_1961_);
return v___x_1963_;
}
}
static lean_object* _init_l_Lean_getNonRecStructureCtor_x3f___closed__1(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1965_ = ((lean_object*)(l_Lean_getStructureCtor___closed__2));
v___x_1966_ = lean_unsigned_to_nat(11u);
v___x_1967_ = lean_unsigned_to_nat(374u);
v___x_1968_ = ((lean_object*)(l_Lean_getNonRecStructureCtor_x3f___closed__0));
v___x_1969_ = ((lean_object*)(l_Lean_getStructureInfo___closed__0));
v___x_1970_ = l_mkPanicMessageWithDecl(v___x_1969_, v___x_1968_, v___x_1967_, v___x_1966_, v___x_1965_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_getNonRecStructureCtor_x3f(lean_object* v_env_1971_, lean_object* v_constName_1972_){
_start:
{
uint8_t v___x_1976_; lean_object* v___x_1977_; 
v___x_1976_ = 0;
lean_inc_ref(v_env_1971_);
v___x_1977_ = l_Lean_Environment_find_x3f(v_env_1971_, v_constName_1972_, v___x_1976_);
if (lean_obj_tag(v___x_1977_) == 1)
{
lean_object* v_val_1978_; 
v_val_1978_ = lean_ctor_get(v___x_1977_, 0);
lean_inc(v_val_1978_);
lean_dec_ref_known(v___x_1977_, 1);
if (lean_obj_tag(v_val_1978_) == 5)
{
lean_object* v_val_1979_; lean_object* v_numIndices_1980_; lean_object* v_ctors_1981_; uint8_t v_isRec_1982_; lean_object* v___x_1983_; uint8_t v___x_1984_; 
v_val_1979_ = lean_ctor_get(v_val_1978_, 0);
lean_inc_ref(v_val_1979_);
lean_dec_ref_known(v_val_1978_, 1);
v_numIndices_1980_ = lean_ctor_get(v_val_1979_, 2);
lean_inc(v_numIndices_1980_);
v_ctors_1981_ = lean_ctor_get(v_val_1979_, 4);
lean_inc(v_ctors_1981_);
v_isRec_1982_ = lean_ctor_get_uint8(v_val_1979_, sizeof(void*)*6);
lean_dec_ref(v_val_1979_);
v___x_1983_ = lean_unsigned_to_nat(0u);
v___x_1984_ = lean_nat_dec_eq(v_numIndices_1980_, v___x_1983_);
lean_dec(v_numIndices_1980_);
if (v___x_1984_ == 0)
{
lean_object* v___x_1985_; 
lean_dec(v_ctors_1981_);
lean_dec_ref(v_env_1971_);
v___x_1985_ = lean_box(0);
return v___x_1985_;
}
else
{
if (lean_obj_tag(v_ctors_1981_) == 1)
{
lean_object* v_tail_1986_; 
v_tail_1986_ = lean_ctor_get(v_ctors_1981_, 1);
if (lean_obj_tag(v_tail_1986_) == 0)
{
if (v_isRec_1982_ == 0)
{
lean_object* v_head_1987_; lean_object* v___x_1988_; 
v_head_1987_ = lean_ctor_get(v_ctors_1981_, 0);
lean_inc(v_head_1987_);
lean_dec_ref_known(v_ctors_1981_, 2);
v___x_1988_ = l_Lean_Environment_find_x3f(v_env_1971_, v_head_1987_, v_isRec_1982_);
if (lean_obj_tag(v___x_1988_) == 1)
{
lean_object* v_val_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1997_; 
v_val_1989_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1991_ = v___x_1988_;
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_val_1989_);
lean_dec(v___x_1988_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1997_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
if (lean_obj_tag(v_val_1989_) == 6)
{
lean_object* v_val_1993_; lean_object* v___x_1995_; 
v_val_1993_ = lean_ctor_get(v_val_1989_, 0);
lean_inc_ref(v_val_1993_);
lean_dec_ref_known(v_val_1989_, 1);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 0, v_val_1993_);
v___x_1995_ = v___x_1991_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_val_1993_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
else
{
lean_del_object(v___x_1991_);
lean_dec(v_val_1989_);
goto v___jp_1973_;
}
}
}
else
{
lean_dec(v___x_1988_);
goto v___jp_1973_;
}
}
else
{
lean_object* v___x_1998_; 
lean_dec_ref_known(v_ctors_1981_, 2);
lean_dec_ref(v_env_1971_);
v___x_1998_ = lean_box(0);
return v___x_1998_;
}
}
else
{
lean_object* v___x_1999_; 
lean_dec_ref_known(v_ctors_1981_, 2);
lean_dec_ref(v_env_1971_);
v___x_1999_ = lean_box(0);
return v___x_1999_;
}
}
else
{
lean_object* v___x_2000_; 
lean_dec(v_ctors_1981_);
lean_dec_ref(v_env_1971_);
v___x_2000_ = lean_box(0);
return v___x_2000_;
}
}
}
else
{
lean_object* v___x_2001_; 
lean_dec(v_val_1978_);
lean_dec_ref(v_env_1971_);
v___x_2001_ = lean_box(0);
return v___x_2001_;
}
}
else
{
lean_object* v___x_2002_; 
lean_dec(v___x_1977_);
lean_dec_ref(v_env_1971_);
v___x_2002_ = lean_box(0);
return v___x_2002_;
}
v___jp_1973_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = lean_obj_once(&l_Lean_getNonRecStructureCtor_x3f___closed__1, &l_Lean_getNonRecStructureCtor_x3f___closed__1_once, _init_l_Lean_getNonRecStructureCtor_x3f___closed__1);
v___x_1975_ = l_panic___at___00Lean_getNonRecStructureCtor_x3f_spec__0(v___x_1974_);
return v___x_1975_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getNonRecStructureNumFields(lean_object* v_env_2003_, lean_object* v_constName_2004_){
_start:
{
uint8_t v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = 0;
lean_inc_ref(v_env_2003_);
v___x_2006_ = l_Lean_Environment_find_x3f(v_env_2003_, v_constName_2004_, v___x_2005_);
if (lean_obj_tag(v___x_2006_) == 1)
{
lean_object* v_val_2007_; 
v_val_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_val_2007_);
lean_dec_ref_known(v___x_2006_, 1);
if (lean_obj_tag(v_val_2007_) == 5)
{
lean_object* v_val_2008_; lean_object* v_numIndices_2009_; lean_object* v_ctors_2010_; uint8_t v_isRec_2011_; lean_object* v___x_2012_; uint8_t v___x_2013_; 
v_val_2008_ = lean_ctor_get(v_val_2007_, 0);
lean_inc_ref(v_val_2008_);
lean_dec_ref_known(v_val_2007_, 1);
v_numIndices_2009_ = lean_ctor_get(v_val_2008_, 2);
lean_inc(v_numIndices_2009_);
v_ctors_2010_ = lean_ctor_get(v_val_2008_, 4);
lean_inc(v_ctors_2010_);
v_isRec_2011_ = lean_ctor_get_uint8(v_val_2008_, sizeof(void*)*6);
lean_dec_ref(v_val_2008_);
v___x_2012_ = lean_unsigned_to_nat(0u);
v___x_2013_ = lean_nat_dec_eq(v_numIndices_2009_, v___x_2012_);
lean_dec(v_numIndices_2009_);
if (v___x_2013_ == 0)
{
lean_dec(v_ctors_2010_);
lean_dec_ref(v_env_2003_);
return v___x_2012_;
}
else
{
if (lean_obj_tag(v_ctors_2010_) == 1)
{
lean_object* v_tail_2014_; 
v_tail_2014_ = lean_ctor_get(v_ctors_2010_, 1);
if (lean_obj_tag(v_tail_2014_) == 0)
{
if (v_isRec_2011_ == 0)
{
lean_object* v_head_2015_; lean_object* v___x_2016_; 
v_head_2015_ = lean_ctor_get(v_ctors_2010_, 0);
lean_inc(v_head_2015_);
lean_dec_ref_known(v_ctors_2010_, 2);
v___x_2016_ = l_Lean_Environment_find_x3f(v_env_2003_, v_head_2015_, v_isRec_2011_);
if (lean_obj_tag(v___x_2016_) == 1)
{
lean_object* v_val_2017_; 
v_val_2017_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_val_2017_);
lean_dec_ref_known(v___x_2016_, 1);
if (lean_obj_tag(v_val_2017_) == 6)
{
lean_object* v_val_2018_; lean_object* v_numFields_2019_; 
v_val_2018_ = lean_ctor_get(v_val_2017_, 0);
lean_inc_ref(v_val_2018_);
lean_dec_ref_known(v_val_2017_, 1);
v_numFields_2019_ = lean_ctor_get(v_val_2018_, 4);
lean_inc(v_numFields_2019_);
lean_dec_ref(v_val_2018_);
return v_numFields_2019_;
}
else
{
lean_dec(v_val_2017_);
return v___x_2012_;
}
}
else
{
lean_dec(v___x_2016_);
return v___x_2012_;
}
}
else
{
lean_dec_ref_known(v_ctors_2010_, 2);
lean_dec_ref(v_env_2003_);
return v___x_2012_;
}
}
else
{
lean_dec_ref_known(v_ctors_2010_, 2);
lean_dec_ref(v_env_2003_);
return v___x_2012_;
}
}
else
{
lean_dec(v_ctors_2010_);
lean_dec_ref(v_env_2003_);
return v___x_2012_;
}
}
}
else
{
lean_object* v___x_2020_; 
lean_dec(v_val_2007_);
lean_dec_ref(v_env_2003_);
v___x_2020_ = lean_unsigned_to_nat(0u);
return v___x_2020_;
}
}
else
{
lean_object* v___x_2021_; 
lean_dec(v___x_2006_);
lean_dec_ref(v_env_2003_);
v___x_2021_ = lean_unsigned_to_nat(0u);
return v___x_2021_;
}
}
}
static lean_object* _init_l_Lean_instInhabitedStructureResolutionState_default___closed__0(void){
_start:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2022_ = lean_obj_once(&l_Lean_instInhabitedStructureState_default___closed__0, &l_Lean_instInhabitedStructureState_default___closed__0_once, _init_l_Lean_instInhabitedStructureState_default___closed__0);
v___x_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
return v___x_2023_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureResolutionState_default(void){
_start:
{
lean_object* v___x_2024_; 
v___x_2024_ = lean_obj_once(&l_Lean_instInhabitedStructureResolutionState_default___closed__0, &l_Lean_instInhabitedStructureResolutionState_default___closed__0_once, _init_l_Lean_instInhabitedStructureResolutionState_default___closed__0);
return v___x_2024_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureResolutionState(void){
_start:
{
lean_object* v___x_2025_; 
v___x_2025_ = l_Lean_instInhabitedStructureResolutionState_default;
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_(lean_object* v___x_2026_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2026_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2____boxed(lean_object* v___x_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_(v___x_2029_);
return v_res_2031_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2032_; lean_object* v___f_2033_; 
v___x_2032_ = lean_obj_once(&l_Lean_instInhabitedStructureResolutionState_default___closed__0, &l_Lean_instInhabitedStructureResolutionState_default___closed__0_once, _init_l_Lean_instInhabitedStructureResolutionState_default___closed__0);
v___f_2033_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_initFn___lam__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_2033_, 0, v___x_2032_);
return v___f_2033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___f_2035_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_, &l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2__once, _init_l___private_Lean_Structure_0__Lean_initFn___closed__0_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_);
v___x_2036_ = lean_box(0);
v___x_2037_ = lean_box(1);
v___x_2038_ = l_Lean_registerEnvExtension___redArg(v___f_2035_, v___x_2036_, v___x_2037_);
return v___x_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2____boxed(lean_object* v_a_2039_){
_start:
{
lean_object* v_res_2040_; 
v_res_2040_ = l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_();
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getStructureResolutionOrder_x3f(lean_object* v_env_2041_, lean_object* v_structName_2042_){
_start:
{
lean_object* v___x_2043_; lean_object* v_asyncMode_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2043_ = l_Lean_structureResolutionExt;
v_asyncMode_2044_ = lean_ctor_get(v___x_2043_, 2);
v___x_2045_ = l_Lean_instInhabitedStructureResolutionState_default;
v___x_2046_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_2047_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2045_, v___x_2043_, v_env_2041_, v_asyncMode_2044_, v___x_2046_);
v___x_2048_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_getStructureInfo_x3f_spec__0___redArg(v___x_2047_, v_structName_2042_);
lean_dec(v___x_2047_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_getStructureResolutionOrder_x3f___boxed(lean_object* v_env_2049_, lean_object* v_structName_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l___private_Lean_Structure_0__Lean_getStructureResolutionOrder_x3f(v_env_2049_, v_structName_2050_);
lean_dec(v_structName_2050_);
return v_res_2051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg___lam__0(lean_object* v___x_2052_, lean_object* v___x_2053_, lean_object* v_structName_2054_, lean_object* v_resolutionOrder_2055_, lean_object* v_s_2056_){
_start:
{
lean_object* v___x_2057_; 
v___x_2057_ = l_Lean_PersistentHashMap_insert___redArg(v___x_2052_, v___x_2053_, v_s_2056_, v_structName_2054_, v_resolutionOrder_2055_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg___lam__1(lean_object* v___f_2058_, lean_object* v_env_2059_){
_start:
{
lean_object* v___x_2060_; lean_object* v_asyncMode_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2060_ = l_Lean_structureResolutionExt;
v_asyncMode_2061_ = lean_ctor_get(v___x_2060_, 2);
v___x_2062_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_2063_ = l_Lean_EnvExtension_modifyState___redArg(v___x_2060_, v_env_2059_, v___f_2058_, v_asyncMode_2061_, v___x_2062_);
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg(lean_object* v_inst_2064_, lean_object* v_structName_2065_, lean_object* v_resolutionOrder_2066_){
_start:
{
lean_object* v_modifyEnv_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___f_2070_; lean_object* v___f_2071_; lean_object* v___x_2072_; 
v_modifyEnv_2067_ = lean_ctor_get(v_inst_2064_, 1);
lean_inc(v_modifyEnv_2067_);
lean_dec_ref(v_inst_2064_);
v___x_2068_ = ((lean_object*)(l_Lean_setStructureParents___redArg___closed__0));
v___x_2069_ = ((lean_object*)(l_Lean_setStructureParents___redArg___closed__1));
v___f_2070_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2070_, 0, v___x_2068_);
lean_closure_set(v___f_2070_, 1, v___x_2069_);
lean_closure_set(v___f_2070_, 2, v_structName_2065_);
lean_closure_set(v___f_2070_, 3, v_resolutionOrder_2066_);
v___f_2071_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2071_, 0, v___f_2070_);
v___x_2072_ = lean_apply_1(v_modifyEnv_2067_, v___f_2071_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_setStructureResolutionOrder(lean_object* v_m_2073_, lean_object* v_inst_2074_, lean_object* v_structName_2075_, lean_object* v_resolutionOrder_2076_){
_start:
{
lean_object* v___x_2077_; 
v___x_2077_ = l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg(v_inst_2074_, v_structName_2075_, v_resolutionOrder_2076_);
return v___x_2077_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__1(void){
_start:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; uint8_t v___x_2082_; lean_object* v___x_2083_; 
v___x_2080_ = ((lean_object*)(l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__0));
v___x_2081_ = lean_obj_once(&l_Lean_instInhabitedStructureFieldInfo_default___closed__0, &l_Lean_instInhabitedStructureFieldInfo_default___closed__0_once, _init_l_Lean_instInhabitedStructureFieldInfo_default___closed__0);
v___x_2082_ = 0;
v___x_2083_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2083_, 0, v___x_2081_);
lean_ctor_set(v___x_2083_, 1, v___x_2080_);
lean_ctor_set_uint8(v___x_2083_, sizeof(void*)*2, v___x_2082_);
return v___x_2083_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureResolutionOrderConflict_default(void){
_start:
{
lean_object* v___x_2084_; 
v___x_2084_ = lean_obj_once(&l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__1, &l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__1_once, _init_l_Lean_instInhabitedStructureResolutionOrderConflict_default___closed__1);
return v___x_2084_;
}
}
static lean_object* _init_l_Lean_instInhabitedStructureResolutionOrderConflict(void){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Lean_instInhabitedStructureResolutionOrderConflict_default;
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__0(lean_object* v___x_2095_, lean_object* v_resOrders_2096_, lean_object* v___x_2097_, lean_object* v_toPure_2098_, lean_object* v_____s_2099_){
_start:
{
lean_object* v_fst_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2115_; 
v_fst_2100_ = lean_ctor_get(v_____s_2099_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_____s_2099_);
if (v_isSharedCheck_2115_ == 0)
{
lean_object* v_unused_2116_; 
v_unused_2116_ = lean_ctor_get(v_____s_2099_, 1);
lean_dec(v_unused_2116_);
v___x_2102_ = v_____s_2099_;
v_isShared_2103_ = v_isSharedCheck_2115_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_fst_2100_);
lean_dec(v_____s_2099_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2115_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
if (lean_obj_tag(v_fst_2100_) == 0)
{
uint8_t v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2110_; 
v___x_2104_ = 0;
v___x_2105_ = lean_unsigned_to_nat(0u);
v___x_2106_ = lean_array_get_borrowed(v___x_2095_, v_resOrders_2096_, v___x_2105_);
v___x_2107_ = lean_array_get_borrowed(v___x_2097_, v___x_2106_, v___x_2105_);
v___x_2108_ = lean_box(v___x_2104_);
lean_inc(v___x_2107_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 1, v___x_2107_);
lean_ctor_set(v___x_2102_, 0, v___x_2108_);
v___x_2110_ = v___x_2102_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v___x_2108_);
lean_ctor_set(v_reuseFailAlloc_2112_, 1, v___x_2107_);
v___x_2110_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
lean_object* v___x_2111_; 
v___x_2111_ = lean_apply_2(v_toPure_2098_, lean_box(0), v___x_2110_);
return v___x_2111_;
}
}
else
{
lean_object* v_val_2113_; lean_object* v___x_2114_; 
lean_del_object(v___x_2102_);
v_val_2113_ = lean_ctor_get(v_fst_2100_, 0);
lean_inc(v_val_2113_);
lean_dec_ref_known(v_fst_2100_, 1);
v___x_2114_ = lean_apply_2(v_toPure_2098_, lean_box(0), v_val_2113_);
return v___x_2114_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__0___boxed(lean_object* v___x_2117_, lean_object* v_resOrders_2118_, lean_object* v___x_2119_, lean_object* v_toPure_2120_, lean_object* v_____s_2121_){
_start:
{
lean_object* v_res_2122_; 
v_res_2122_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__0(v___x_2117_, v_resOrders_2118_, v___x_2119_, v_toPure_2120_, v_____s_2121_);
lean_dec(v___x_2119_);
lean_dec_ref(v_resOrders_2118_);
lean_dec_ref(v___x_2117_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__1(lean_object* v_toPure_2123_, lean_object* v_____do__lift_2124_){
_start:
{
lean_object* v___x_2125_; 
v___x_2125_ = lean_apply_2(v_toPure_2123_, lean_box(0), v_____do__lift_2124_);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__3(lean_object* v___x_2126_, lean_object* v_toPure_2127_, lean_object* v___x_2128_, lean_object* v_____s_2129_){
_start:
{
lean_object* v_fst_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2148_; 
v_fst_2130_ = lean_ctor_get(v_____s_2129_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v_____s_2129_);
if (v_isSharedCheck_2148_ == 0)
{
lean_object* v_unused_2149_; 
v_unused_2149_ = lean_ctor_get(v_____s_2129_, 1);
lean_dec(v_unused_2149_);
v___x_2132_ = v_____s_2129_;
v_isShared_2133_ = v_isSharedCheck_2148_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_fst_2130_);
lean_dec(v_____s_2129_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2148_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
if (lean_obj_tag(v_fst_2130_) == 0)
{
lean_object* v___x_2134_; lean_object* v___x_2135_; 
lean_del_object(v___x_2132_);
v___x_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2126_);
v___x_2135_ = lean_apply_2(v_toPure_2127_, lean_box(0), v___x_2134_);
return v___x_2135_;
}
else
{
lean_object* v___x_2137_; 
lean_dec_ref(v___x_2126_);
lean_inc_ref(v_fst_2130_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 1, v___x_2128_);
v___x_2137_ = v___x_2132_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_fst_2130_);
lean_ctor_set(v_reuseFailAlloc_2147_, 1, v___x_2128_);
v___x_2137_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2145_; 
v_isSharedCheck_2145_ = !lean_is_exclusive(v_fst_2130_);
if (v_isSharedCheck_2145_ == 0)
{
lean_object* v_unused_2146_; 
v_unused_2146_ = lean_ctor_get(v_fst_2130_, 0);
lean_dec(v_unused_2146_);
v___x_2139_ = v_fst_2130_;
v_isShared_2140_ = v_isSharedCheck_2145_;
goto v_resetjp_2138_;
}
else
{
lean_dec(v_fst_2130_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2145_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
lean_ctor_set_tag(v___x_2139_, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2137_);
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v___x_2137_);
v___x_2142_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
lean_object* v___x_2143_; 
v___x_2143_ = lean_apply_2(v_toPure_2127_, lean_box(0), v___x_2142_);
return v___x_2143_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__2(lean_object* v_toPure_2150_, lean_object* v_next_2151_, lean_object* v_G_2152_, lean_object* v_____do__lift_2153_){
_start:
{
if (lean_obj_tag(v_____do__lift_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v___x_2155_; 
lean_dec(v_G_2152_);
v_a_2154_ = lean_ctor_get(v_____do__lift_2153_, 0);
lean_inc(v_a_2154_);
lean_dec_ref_known(v_____do__lift_2153_, 1);
v___x_2155_ = lean_apply_2(v_toPure_2150_, lean_box(0), v_a_2154_);
return v___x_2155_;
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
lean_dec(v_toPure_2150_);
v_a_2156_ = lean_ctor_get(v_____do__lift_2153_, 0);
lean_inc(v_a_2156_);
lean_dec_ref_known(v_____do__lift_2153_, 1);
v___x_2157_ = lean_unsigned_to_nat(1u);
v___x_2158_ = lean_nat_add(v_next_2151_, v___x_2157_);
v___x_2159_ = lean_apply_4(v_G_2152_, v___x_2158_, v_a_2156_, lean_box(0), lean_box(0));
return v___x_2159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__2___boxed(lean_object* v_toPure_2160_, lean_object* v_next_2161_, lean_object* v_G_2162_, lean_object* v_____do__lift_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__2(v_toPure_2160_, v_next_2161_, v_G_2162_, v_____do__lift_2163_);
lean_dec(v_next_2161_);
return v_res_2164_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__5(lean_object* v___x_2165_, uint8_t v___x_2166_, lean_object* v_v_2167_){
_start:
{
uint8_t v___x_2168_; 
v___x_2168_ = lean_name_eq(v_v_2167_, v___x_2165_);
if (v___x_2168_ == 0)
{
return v___x_2168_;
}
else
{
return v___x_2166_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__5___boxed(lean_object* v___x_2169_, lean_object* v___x_2170_, lean_object* v_v_2171_){
_start:
{
uint8_t v___x_1556__boxed_2172_; uint8_t v_res_2173_; lean_object* v_r_2174_; 
v___x_1556__boxed_2172_ = lean_unbox(v___x_2170_);
v_res_2173_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__5(v___x_2169_, v___x_1556__boxed_2172_, v_v_2171_);
lean_dec(v_v_2171_);
lean_dec(v___x_2169_);
v_r_2174_ = lean_box(v_res_2173_);
return v_r_2174_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4(uint8_t v___x_2194_, lean_object* v___f_2195_, lean_object* v_resOrder_2196_){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v_array_2201_; lean_object* v_start_2202_; lean_object* v_stop_2203_; uint8_t v___x_2204_; lean_object* v___y_2206_; 
v___x_2197_ = lean_unsigned_to_nat(1u);
v___x_2198_ = lean_array_get_size(v_resOrder_2196_);
v___x_2199_ = l_Array_toSubarray___redArg(v_resOrder_2196_, v___x_2197_, v___x_2198_);
v___x_2200_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v_array_2201_ = lean_ctor_get(v___x_2199_, 0);
lean_inc_ref(v_array_2201_);
v_start_2202_ = lean_ctor_get(v___x_2199_, 1);
lean_inc(v_start_2202_);
v_stop_2203_ = lean_ctor_get(v___x_2199_, 2);
lean_inc(v_stop_2203_);
lean_dec_ref(v___x_2199_);
v___x_2204_ = lean_nat_dec_lt(v_start_2202_, v_stop_2203_);
if (v___x_2204_ == 0)
{
lean_dec(v_stop_2203_);
lean_dec(v_start_2202_);
lean_dec_ref(v_array_2201_);
lean_dec_ref(v___f_2195_);
return v___x_2194_;
}
else
{
lean_object* v___x_2213_; uint8_t v___x_2214_; 
v___x_2213_ = lean_array_get_size(v_array_2201_);
v___x_2214_ = lean_nat_dec_le(v_stop_2203_, v___x_2213_);
if (v___x_2214_ == 0)
{
lean_dec(v_stop_2203_);
v___y_2206_ = v___x_2213_;
goto v___jp_2205_;
}
else
{
v___y_2206_ = v_stop_2203_;
goto v___jp_2205_;
}
}
v___jp_2205_:
{
uint8_t v___x_2207_; 
v___x_2207_ = lean_nat_dec_lt(v_start_2202_, v___y_2206_);
if (v___x_2207_ == 0)
{
lean_dec(v___y_2206_);
lean_dec(v_start_2202_);
lean_dec_ref(v_array_2201_);
lean_dec_ref(v___f_2195_);
return v___x_2204_;
}
else
{
size_t v___x_2208_; size_t v___x_2209_; lean_object* v___x_2210_; uint8_t v___x_2211_; 
v___x_2208_ = lean_usize_of_nat(v_start_2202_);
lean_dec(v_start_2202_);
v___x_2209_ = lean_usize_of_nat(v___y_2206_);
lean_dec(v___y_2206_);
v___x_2210_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2200_, v___f_2195_, v_array_2201_, v___x_2208_, v___x_2209_);
v___x_2211_ = lean_unbox(v___x_2210_);
lean_dec(v___x_2210_);
if (v___x_2211_ == 0)
{
return v___x_2207_;
}
else
{
uint8_t v___x_2212_; 
v___x_2212_ = 0;
return v___x_2212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___boxed(lean_object* v___x_2215_, lean_object* v___f_2216_, lean_object* v_resOrder_2217_){
_start:
{
uint8_t v___x_1601__boxed_2218_; uint8_t v_res_2219_; lean_object* v_r_2220_; 
v___x_1601__boxed_2218_ = lean_unbox(v___x_2215_);
v_res_2219_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4(v___x_1601__boxed_2218_, v___f_2216_, v_resOrder_2217_);
v_r_2220_ = lean_box(v_res_2219_);
return v_r_2220_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__6(lean_object* v___f_2221_, uint8_t v___y_2222_, lean_object* v_v_2223_){
_start:
{
lean_object* v___x_2224_; uint8_t v___x_2225_; 
v___x_2224_ = lean_apply_1(v___f_2221_, v_v_2223_);
v___x_2225_ = lean_unbox(v___x_2224_);
if (v___x_2225_ == 0)
{
return v___y_2222_;
}
else
{
uint8_t v___x_2226_; 
v___x_2226_ = 0;
return v___x_2226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__6___boxed(lean_object* v___f_2227_, lean_object* v___y_2228_, lean_object* v_v_2229_){
_start:
{
uint8_t v___y_1657__boxed_2230_; uint8_t v_res_2231_; lean_object* v_r_2232_; 
v___y_1657__boxed_2230_ = lean_unbox(v___y_2228_);
v_res_2231_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__6(v___f_2227_, v___y_1657__boxed_2230_, v_v_2229_);
v_r_2232_ = lean_box(v_res_2231_);
return v_r_2232_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__7(lean_object* v___f_2233_, uint8_t v___x_2234_, lean_object* v_v_2235_){
_start:
{
lean_object* v___x_2236_; uint8_t v___x_2237_; 
v___x_2236_ = lean_apply_1(v___f_2233_, v_v_2235_);
v___x_2237_ = lean_unbox(v___x_2236_);
if (v___x_2237_ == 0)
{
return v___x_2234_;
}
else
{
uint8_t v___x_2238_; 
v___x_2238_ = 0;
return v___x_2238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__7___boxed(lean_object* v___f_2239_, lean_object* v___x_2240_, lean_object* v_v_2241_){
_start:
{
uint8_t v___x_1669__boxed_2242_; uint8_t v_res_2243_; lean_object* v_r_2244_; 
v___x_1669__boxed_2242_ = lean_unbox(v___x_2240_);
v_res_2243_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__7(v___f_2239_, v___x_1669__boxed_2242_, v_v_2241_);
v_r_2244_ = lean_box(v_res_2243_);
return v_r_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__8(lean_object* v___x_2245_, lean_object* v_toPure_2246_, lean_object* v___x_2247_, lean_object* v_resOrders_2248_, lean_object* v___x_2249_, lean_object* v___x_2250_, lean_object* v_toBind_2251_, lean_object* v___f_2252_, lean_object* v___x_2253_, lean_object* v_next_2254_, lean_object* v___x_2255_, lean_object* v_next_2256_, lean_object* v_acc_2257_, lean_object* v_h_2258_, lean_object* v_G_2259_){
_start:
{
uint8_t v___x_2260_; 
v___x_2260_ = lean_nat_dec_lt(v_next_2256_, v___x_2245_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2261_; 
lean_dec(v_G_2259_);
lean_dec(v_next_2256_);
lean_dec_ref(v___x_2253_);
lean_dec(v___f_2252_);
lean_dec(v_toBind_2251_);
lean_dec(v___x_2250_);
lean_dec_ref(v_resOrders_2248_);
lean_dec(v___x_2245_);
v___x_2261_ = lean_apply_2(v_toPure_2246_, lean_box(0), v_acc_2257_);
return v___x_2261_;
}
else
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v_array_2266_; lean_object* v_start_2267_; lean_object* v_stop_2268_; lean_object* v___f_2269_; lean_object* v___y_2271_; lean_object* v___y_2286_; lean_object* v___y_2287_; lean_object* v___y_2288_; lean_object* v___y_2289_; lean_object* v___y_2290_; lean_object* v___x_2296_; lean_object* v___f_2297_; lean_object* v___x_2298_; lean_object* v___f_2299_; uint8_t v___y_2301_; uint8_t v___x_2313_; 
lean_dec_ref(v_acc_2257_);
v___x_2262_ = lean_array_get_borrowed(v___x_2247_, v_resOrders_2248_, v_next_2256_);
v___x_2263_ = lean_array_get(v___x_2249_, v___x_2262_, v___x_2250_);
lean_inc_n(v_next_2256_, 2);
lean_inc(v___x_2250_);
lean_inc_ref(v_resOrders_2248_);
v___x_2264_ = l_Array_toSubarray___redArg(v_resOrders_2248_, v___x_2250_, v_next_2256_);
v___x_2265_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v_array_2266_ = lean_ctor_get(v___x_2264_, 0);
lean_inc_ref(v_array_2266_);
v_start_2267_ = lean_ctor_get(v___x_2264_, 1);
lean_inc(v_start_2267_);
v_stop_2268_ = lean_ctor_get(v___x_2264_, 2);
lean_inc(v_stop_2268_);
lean_dec_ref(v___x_2264_);
lean_inc(v_toPure_2246_);
v___f_2269_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2269_, 0, v_toPure_2246_);
lean_closure_set(v___f_2269_, 1, v_next_2256_);
lean_closure_set(v___f_2269_, 2, v_G_2259_);
v___x_2296_ = lean_box(v___x_2260_);
lean_inc(v___x_2263_);
v___f_2297_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__5___boxed), 3, 2);
lean_closure_set(v___f_2297_, 0, v___x_2263_);
lean_closure_set(v___f_2297_, 1, v___x_2296_);
v___x_2298_ = lean_box(v___x_2260_);
v___f_2299_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___boxed), 3, 2);
lean_closure_set(v___f_2299_, 0, v___x_2298_);
lean_closure_set(v___f_2299_, 1, v___f_2297_);
v___x_2313_ = lean_nat_dec_lt(v_start_2267_, v_stop_2268_);
if (v___x_2313_ == 0)
{
lean_dec(v_stop_2268_);
lean_dec(v_start_2267_);
lean_dec_ref(v_array_2266_);
v___y_2301_ = v___x_2260_;
goto v___jp_2300_;
}
else
{
lean_object* v___x_2314_; lean_object* v___f_2315_; lean_object* v___y_2317_; lean_object* v___x_2323_; uint8_t v___x_2324_; 
v___x_2314_ = lean_box(v___x_2260_);
lean_inc_ref(v___f_2299_);
v___f_2315_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__7___boxed), 3, 2);
lean_closure_set(v___f_2315_, 0, v___f_2299_);
lean_closure_set(v___f_2315_, 1, v___x_2314_);
v___x_2323_ = lean_array_get_size(v_array_2266_);
v___x_2324_ = lean_nat_dec_le(v_stop_2268_, v___x_2323_);
if (v___x_2324_ == 0)
{
lean_dec(v_stop_2268_);
v___y_2317_ = v___x_2323_;
goto v___jp_2316_;
}
else
{
v___y_2317_ = v_stop_2268_;
goto v___jp_2316_;
}
v___jp_2316_:
{
uint8_t v___x_2318_; 
v___x_2318_ = lean_nat_dec_lt(v_start_2267_, v___y_2317_);
if (v___x_2318_ == 0)
{
lean_dec(v___y_2317_);
lean_dec_ref(v___f_2315_);
lean_dec(v_start_2267_);
lean_dec_ref(v_array_2266_);
v___y_2301_ = v___x_2313_;
goto v___jp_2300_;
}
else
{
size_t v___x_2319_; size_t v___x_2320_; lean_object* v___x_2321_; uint8_t v___x_2322_; 
v___x_2319_ = lean_usize_of_nat(v_start_2267_);
lean_dec(v_start_2267_);
v___x_2320_ = lean_usize_of_nat(v___y_2317_);
lean_dec(v___y_2317_);
v___x_2321_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2265_, v___f_2315_, v_array_2266_, v___x_2319_, v___x_2320_);
v___x_2322_ = lean_unbox(v___x_2321_);
lean_dec(v___x_2321_);
if (v___x_2322_ == 0)
{
v___y_2301_ = v___x_2318_;
goto v___jp_2300_;
}
else
{
lean_dec_ref(v___f_2299_);
lean_dec(v___x_2263_);
lean_dec(v_next_2256_);
lean_dec(v___x_2250_);
lean_dec_ref(v_resOrders_2248_);
lean_dec(v___x_2245_);
goto v___jp_2274_;
}
}
}
}
v___jp_2270_:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
lean_inc(v_toBind_2251_);
v___x_2272_ = lean_apply_4(v_toBind_2251_, lean_box(0), lean_box(0), v___y_2271_, v___f_2252_);
v___x_2273_ = lean_apply_4(v_toBind_2251_, lean_box(0), lean_box(0), v___x_2272_, v___f_2269_);
return v___x_2273_;
}
v___jp_2274_:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2253_);
v___x_2276_ = lean_apply_2(v_toPure_2246_, lean_box(0), v___x_2275_);
v___y_2271_ = v___x_2276_;
goto v___jp_2270_;
}
v___jp_2277_:
{
uint8_t v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2278_ = lean_nat_dec_eq(v_next_2254_, v___x_2250_);
lean_dec(v___x_2250_);
v___x_2279_ = lean_box(v___x_2278_);
v___x_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
lean_ctor_set(v___x_2280_, 1, v___x_2263_);
v___x_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
v___x_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
lean_ctor_set(v___x_2282_, 1, v___x_2255_);
v___x_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
v___x_2284_ = lean_apply_2(v_toPure_2246_, lean_box(0), v___x_2283_);
v___y_2271_ = v___x_2284_;
goto v___jp_2270_;
}
v___jp_2285_:
{
uint8_t v___x_2291_; 
v___x_2291_ = lean_nat_dec_lt(v___y_2288_, v___y_2290_);
if (v___x_2291_ == 0)
{
lean_dec(v___y_2290_);
lean_dec_ref(v___y_2289_);
lean_dec(v___y_2288_);
lean_dec_ref(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec_ref(v___x_2253_);
goto v___jp_2277_;
}
else
{
size_t v___x_2292_; size_t v___x_2293_; lean_object* v___x_2294_; uint8_t v___x_2295_; 
v___x_2292_ = lean_usize_of_nat(v___y_2288_);
lean_dec(v___y_2288_);
v___x_2293_ = lean_usize_of_nat(v___y_2290_);
lean_dec(v___y_2290_);
v___x_2294_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___y_2289_, v___y_2286_, v___y_2287_, v___x_2292_, v___x_2293_);
v___x_2295_ = lean_unbox(v___x_2294_);
lean_dec(v___x_2294_);
if (v___x_2295_ == 0)
{
lean_dec_ref(v___x_2253_);
goto v___jp_2277_;
}
else
{
lean_dec(v___x_2263_);
lean_dec(v___x_2250_);
goto v___jp_2274_;
}
}
}
v___jp_2300_:
{
if (v___y_2301_ == 0)
{
lean_dec_ref(v___f_2299_);
lean_dec(v___x_2263_);
lean_dec(v_next_2256_);
lean_dec(v___x_2250_);
lean_dec_ref(v_resOrders_2248_);
lean_dec(v___x_2245_);
goto v___jp_2274_;
}
else
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v_array_2305_; lean_object* v_start_2306_; lean_object* v_stop_2307_; uint8_t v___x_2308_; 
v___x_2302_ = lean_unsigned_to_nat(1u);
v___x_2303_ = lean_nat_add(v_next_2256_, v___x_2302_);
lean_dec(v_next_2256_);
v___x_2304_ = l_Array_toSubarray___redArg(v_resOrders_2248_, v___x_2303_, v___x_2245_);
v_array_2305_ = lean_ctor_get(v___x_2304_, 0);
lean_inc_ref(v_array_2305_);
v_start_2306_ = lean_ctor_get(v___x_2304_, 1);
lean_inc(v_start_2306_);
v_stop_2307_ = lean_ctor_get(v___x_2304_, 2);
lean_inc(v_stop_2307_);
lean_dec_ref(v___x_2304_);
v___x_2308_ = lean_nat_dec_lt(v_start_2306_, v_stop_2307_);
if (v___x_2308_ == 0)
{
lean_dec(v_stop_2307_);
lean_dec(v_start_2306_);
lean_dec_ref(v_array_2305_);
lean_dec_ref(v___f_2299_);
lean_dec_ref(v___x_2253_);
goto v___jp_2277_;
}
else
{
lean_object* v___x_2309_; lean_object* v___f_2310_; lean_object* v___x_2311_; uint8_t v___x_2312_; 
v___x_2309_ = lean_box(v___y_2301_);
v___f_2310_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__6___boxed), 3, 2);
lean_closure_set(v___f_2310_, 0, v___f_2299_);
lean_closure_set(v___f_2310_, 1, v___x_2309_);
v___x_2311_ = lean_array_get_size(v_array_2305_);
v___x_2312_ = lean_nat_dec_le(v_stop_2307_, v___x_2311_);
if (v___x_2312_ == 0)
{
lean_dec(v_stop_2307_);
v___y_2286_ = v___f_2310_;
v___y_2287_ = v_array_2305_;
v___y_2288_ = v_start_2306_;
v___y_2289_ = v___x_2265_;
v___y_2290_ = v___x_2311_;
goto v___jp_2285_;
}
else
{
v___y_2286_ = v___f_2310_;
v___y_2287_ = v_array_2305_;
v___y_2288_ = v_start_2306_;
v___y_2289_ = v___x_2265_;
v___y_2290_ = v_stop_2307_;
goto v___jp_2285_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__8___boxed(lean_object* v___x_2325_, lean_object* v_toPure_2326_, lean_object* v___x_2327_, lean_object* v_resOrders_2328_, lean_object* v___x_2329_, lean_object* v___x_2330_, lean_object* v_toBind_2331_, lean_object* v___f_2332_, lean_object* v___x_2333_, lean_object* v_next_2334_, lean_object* v___x_2335_, lean_object* v_next_2336_, lean_object* v_acc_2337_, lean_object* v_h_2338_, lean_object* v_G_2339_){
_start:
{
lean_object* v_res_2340_; 
v_res_2340_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__8(v___x_2325_, v_toPure_2326_, v___x_2327_, v_resOrders_2328_, v___x_2329_, v___x_2330_, v_toBind_2331_, v___f_2332_, v___x_2333_, v_next_2334_, v___x_2335_, v_next_2336_, v_acc_2337_, v_h_2338_, v_G_2339_);
lean_dec(v_next_2334_);
lean_dec(v___x_2329_);
lean_dec_ref(v___x_2327_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__9(lean_object* v___x_2341_, lean_object* v_toPure_2342_, lean_object* v___x_2343_, lean_object* v_resOrders_2344_, lean_object* v___x_2345_, lean_object* v___x_2346_, lean_object* v_toBind_2347_, lean_object* v___f_2348_, lean_object* v___x_2349_, lean_object* v___x_2350_, lean_object* v___f_2351_, lean_object* v___f_2352_, lean_object* v_next_2353_, lean_object* v_acc_2354_, lean_object* v_h_2355_, lean_object* v_G_2356_){
_start:
{
uint8_t v___x_2357_; 
v___x_2357_ = lean_nat_dec_lt(v_next_2353_, v___x_2341_);
if (v___x_2357_ == 0)
{
lean_object* v___x_2358_; 
lean_dec(v_G_2356_);
lean_dec(v_next_2353_);
lean_dec(v___f_2352_);
lean_dec(v___f_2351_);
lean_dec_ref(v___x_2349_);
lean_dec(v___f_2348_);
lean_dec(v_toBind_2347_);
lean_dec(v___x_2346_);
lean_dec(v___x_2345_);
lean_dec_ref(v_resOrders_2344_);
lean_dec_ref(v___x_2343_);
v___x_2358_ = lean_apply_2(v_toPure_2342_, lean_box(0), v_acc_2354_);
return v___x_2358_;
}
else
{
lean_object* v___f_2359_; lean_object* v___x_2360_; lean_object* v___f_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
lean_dec_ref(v_acc_2354_);
lean_inc(v_next_2353_);
lean_inc(v_toPure_2342_);
v___f_2359_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2359_, 0, v_toPure_2342_);
lean_closure_set(v___f_2359_, 1, v_next_2353_);
lean_closure_set(v___f_2359_, 2, v_G_2356_);
v___x_2360_ = lean_nat_sub(v___x_2341_, v_next_2353_);
lean_inc_ref(v___x_2349_);
lean_inc_n(v_toBind_2347_, 3);
lean_inc(v___x_2346_);
v___f_2361_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__8___boxed), 15, 11);
lean_closure_set(v___f_2361_, 0, v___x_2360_);
lean_closure_set(v___f_2361_, 1, v_toPure_2342_);
lean_closure_set(v___f_2361_, 2, v___x_2343_);
lean_closure_set(v___f_2361_, 3, v_resOrders_2344_);
lean_closure_set(v___f_2361_, 4, v___x_2345_);
lean_closure_set(v___f_2361_, 5, v___x_2346_);
lean_closure_set(v___f_2361_, 6, v_toBind_2347_);
lean_closure_set(v___f_2361_, 7, v___f_2348_);
lean_closure_set(v___f_2361_, 8, v___x_2349_);
lean_closure_set(v___f_2361_, 9, v_next_2353_);
lean_closure_set(v___f_2361_, 10, v___x_2350_);
v___x_2362_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2361_, v___x_2346_, v___x_2349_, lean_box(0));
v___x_2363_ = lean_apply_4(v_toBind_2347_, lean_box(0), lean_box(0), v___x_2362_, v___f_2351_);
v___x_2364_ = lean_apply_4(v_toBind_2347_, lean_box(0), lean_box(0), v___x_2363_, v___f_2352_);
v___x_2365_ = lean_apply_4(v_toBind_2347_, lean_box(0), lean_box(0), v___x_2364_, v___f_2359_);
return v___x_2365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__9___boxed(lean_object* v___x_2366_, lean_object* v_toPure_2367_, lean_object* v___x_2368_, lean_object* v_resOrders_2369_, lean_object* v___x_2370_, lean_object* v___x_2371_, lean_object* v_toBind_2372_, lean_object* v___f_2373_, lean_object* v___x_2374_, lean_object* v___x_2375_, lean_object* v___f_2376_, lean_object* v___f_2377_, lean_object* v_next_2378_, lean_object* v_acc_2379_, lean_object* v_h_2380_, lean_object* v_G_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__9(v___x_2366_, v_toPure_2367_, v___x_2368_, v_resOrders_2369_, v___x_2370_, v___x_2371_, v_toBind_2372_, v___f_2373_, v___x_2374_, v___x_2375_, v___f_2376_, v___f_2377_, v_next_2378_, v_acc_2379_, v_h_2380_, v_G_2381_);
lean_dec(v___x_2366_);
return v_res_2382_;
}
}
static lean_object* _init_l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__0(void){
_start:
{
lean_object* v___x_2383_; 
v___x_2383_ = l_Array_instInhabited___redArg();
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg(lean_object* v_inst_2387_, lean_object* v_resOrders_2388_){
_start:
{
lean_object* v_toApplicative_2389_; lean_object* v_toBind_2390_; lean_object* v_toPure_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___f_2395_; lean_object* v___f_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___f_2400_; lean_object* v___f_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v_toApplicative_2389_ = lean_ctor_get(v_inst_2387_, 0);
lean_inc_ref(v_toApplicative_2389_);
v_toBind_2390_ = lean_ctor_get(v_inst_2387_, 1);
lean_inc_n(v_toBind_2390_, 2);
lean_dec_ref(v_inst_2387_);
v_toPure_2391_ = lean_ctor_get(v_toApplicative_2389_, 1);
lean_inc_n(v_toPure_2391_, 4);
lean_dec_ref(v_toApplicative_2389_);
v___x_2392_ = l_Lean_instInhabitedName;
v___x_2393_ = lean_obj_once(&l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__0, &l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__0_once, _init_l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__0);
v___x_2394_ = lean_array_get_size(v_resOrders_2388_);
lean_inc_ref(v_resOrders_2388_);
v___f_2395_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2395_, 0, v___x_2393_);
lean_closure_set(v___f_2395_, 1, v_resOrders_2388_);
lean_closure_set(v___f_2395_, 2, v___x_2392_);
lean_closure_set(v___f_2395_, 3, v_toPure_2391_);
v___f_2396_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2396_, 0, v_toPure_2391_);
v___x_2397_ = lean_unsigned_to_nat(0u);
v___x_2398_ = lean_box(0);
v___x_2399_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___closed__1));
v___f_2400_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__3), 4, 3);
lean_closure_set(v___f_2400_, 0, v___x_2399_);
lean_closure_set(v___f_2400_, 1, v_toPure_2391_);
lean_closure_set(v___f_2400_, 2, v___x_2398_);
lean_inc_ref(v___f_2396_);
v___f_2401_ = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__9___boxed), 16, 12);
lean_closure_set(v___f_2401_, 0, v___x_2394_);
lean_closure_set(v___f_2401_, 1, v_toPure_2391_);
lean_closure_set(v___f_2401_, 2, v___x_2393_);
lean_closure_set(v___f_2401_, 3, v_resOrders_2388_);
lean_closure_set(v___f_2401_, 4, v___x_2392_);
lean_closure_set(v___f_2401_, 5, v___x_2397_);
lean_closure_set(v___f_2401_, 6, v_toBind_2390_);
lean_closure_set(v___f_2401_, 7, v___f_2396_);
lean_closure_set(v___f_2401_, 8, v___x_2399_);
lean_closure_set(v___f_2401_, 9, v___x_2398_);
lean_closure_set(v___f_2401_, 10, v___f_2400_);
lean_closure_set(v___f_2401_, 11, v___f_2396_);
v___x_2402_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2401_, v___x_2397_, v___x_2399_, lean_box(0));
v___x_2403_ = lean_apply_4(v_toBind_2390_, lean_box(0), lean_box(0), v___x_2402_, v___f_2395_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent(lean_object* v_m_2404_, lean_object* v_inst_2405_, lean_object* v_resOrders_2406_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg(v_inst_2405_, v_resOrders_2406_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__0(lean_object* v_x_2408_){
_start:
{
lean_object* v_structName_2409_; 
v_structName_2409_ = lean_ctor_get(v_x_2408_, 0);
lean_inc(v_structName_2409_);
return v_structName_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__0___boxed(lean_object* v_x_2410_){
_start:
{
lean_object* v_res_2411_; 
v_res_2411_ = l_Lean_computeStructureResolutionOrder___redArg___lam__0(v_x_2410_);
lean_dec_ref(v_x_2410_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__1(lean_object* v_toPure_2412_, lean_object* v_result_2413_, lean_object* v_____r_2414_){
_start:
{
lean_object* v___x_2415_; 
v___x_2415_ = lean_apply_2(v_toPure_2412_, lean_box(0), v_result_2413_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__2(lean_object* v_toPure_2416_, lean_object* v_inst_2417_, lean_object* v_structName_2418_, lean_object* v_toBind_2419_, lean_object* v_result_2420_){
_start:
{
lean_object* v_resolutionOrder_2421_; lean_object* v___f_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v_resolutionOrder_2421_ = lean_ctor_get(v_result_2420_, 0);
lean_inc_ref(v_resolutionOrder_2421_);
v___f_2422_ = lean_alloc_closure((void*)(l_Lean_computeStructureResolutionOrder___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2422_, 0, v_toPure_2416_);
lean_closure_set(v___f_2422_, 1, v_result_2420_);
v___x_2423_ = l___private_Lean_Structure_0__Lean_setStructureResolutionOrder___redArg(v_inst_2417_, v_structName_2418_, v_resolutionOrder_2421_);
v___x_2424_ = lean_apply_4(v_toBind_2419_, lean_box(0), lean_box(0), v___x_2423_, v___f_2422_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__6(lean_object* v_toPure_2425_, lean_object* v_____s_2426_){
_start:
{
lean_object* v_snd_2427_; lean_object* v_fst_2428_; lean_object* v_snd_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2437_; 
v_snd_2427_ = lean_ctor_get(v_____s_2426_, 1);
lean_inc(v_snd_2427_);
lean_dec_ref(v_____s_2426_);
v_fst_2428_ = lean_ctor_get(v_snd_2427_, 0);
v_snd_2429_ = lean_ctor_get(v_snd_2427_, 1);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_snd_2427_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2431_ = v_snd_2427_;
v_isShared_2432_ = v_isSharedCheck_2437_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_snd_2429_);
lean_inc(v_fst_2428_);
lean_dec(v_snd_2427_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2437_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2434_; 
if (v_isShared_2432_ == 0)
{
v___x_2434_ = v___x_2431_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_fst_2428_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v_snd_2429_);
v___x_2434_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
lean_object* v___x_2435_; 
v___x_2435_ = lean_apply_2(v_toPure_2425_, lean_box(0), v___x_2434_);
return v___x_2435_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__5(lean_object* v_toPure_2438_, lean_object* v_____do__lift_2439_){
_start:
{
if (lean_obj_tag(v_____do__lift_2439_) == 0)
{
lean_object* v_a_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2448_; 
v_a_2440_ = lean_ctor_get(v_____do__lift_2439_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v_____do__lift_2439_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2442_ = v_____do__lift_2439_;
v_isShared_2443_ = v_isSharedCheck_2448_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_a_2440_);
lean_dec(v_____do__lift_2439_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2448_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2445_; 
if (v_isShared_2443_ == 0)
{
lean_ctor_set_tag(v___x_2442_, 1);
v___x_2445_ = v___x_2442_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2440_);
v___x_2445_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_apply_2(v_toPure_2438_, lean_box(0), v___x_2445_);
return v___x_2446_;
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2457_; 
v_a_2449_ = lean_ctor_get(v_____do__lift_2439_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v_____do__lift_2439_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2451_ = v_____do__lift_2439_;
v_isShared_2452_ = v_isSharedCheck_2457_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v_____do__lift_2439_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2457_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
lean_ctor_set_tag(v___x_2451_, 0);
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
lean_object* v___x_2455_; 
v___x_2455_ = lean_apply_2(v_toPure_2438_, lean_box(0), v___x_2454_);
return v___x_2455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__9(lean_object* v___x_2458_, lean_object* v___f_2459_, lean_object* v_x_2460_){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; uint8_t v___x_2464_; 
v___x_2461_ = lean_array_get_size(v_x_2460_);
v___x_2462_ = lean_mk_empty_array_with_capacity(v___x_2458_);
v___x_2463_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v___x_2464_ = lean_nat_dec_lt(v___x_2458_, v___x_2461_);
if (v___x_2464_ == 0)
{
lean_dec_ref(v_x_2460_);
lean_dec_ref(v___f_2459_);
return v___x_2462_;
}
else
{
uint8_t v___x_2465_; 
v___x_2465_ = lean_nat_dec_le(v___x_2461_, v___x_2461_);
if (v___x_2465_ == 0)
{
if (v___x_2464_ == 0)
{
lean_dec_ref(v_x_2460_);
lean_dec_ref(v___f_2459_);
return v___x_2462_;
}
else
{
size_t v___x_2466_; size_t v___x_2467_; lean_object* v___x_2468_; 
v___x_2466_ = ((size_t)0ULL);
v___x_2467_ = lean_usize_of_nat(v___x_2461_);
v___x_2468_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2463_, v___f_2459_, v_x_2460_, v___x_2466_, v___x_2467_, v___x_2462_);
return v___x_2468_;
}
}
else
{
size_t v___x_2469_; size_t v___x_2470_; lean_object* v___x_2471_; 
v___x_2469_ = ((size_t)0ULL);
v___x_2470_ = lean_usize_of_nat(v___x_2461_);
v___x_2471_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2463_, v___f_2459_, v_x_2460_, v___x_2469_, v___x_2470_, v___x_2462_);
return v___x_2471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__9___boxed(lean_object* v___x_2472_, lean_object* v___f_2473_, lean_object* v_x_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_Lean_mergeStructureResolutionOrders___redArg___lam__9(v___x_2472_, v___f_2473_, v_x_2474_);
lean_dec(v___x_2472_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__8(lean_object* v_snd_2476_, lean_object* v_x1_2477_, lean_object* v_x2_2478_){
_start:
{
uint8_t v___x_2479_; 
v___x_2479_ = lean_name_eq(v_x2_2478_, v_snd_2476_);
if (v___x_2479_ == 0)
{
lean_object* v___x_2480_; 
v___x_2480_ = lean_array_push(v_x1_2477_, v_x2_2478_);
return v___x_2480_;
}
else
{
lean_dec(v_x2_2478_);
return v_x1_2477_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__8___boxed(lean_object* v_snd_2481_, lean_object* v_x1_2482_, lean_object* v_x2_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_Lean_mergeStructureResolutionOrders___redArg___lam__8(v_snd_2481_, v_x1_2482_, v_x2_2483_);
lean_dec(v_snd_2481_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__11(lean_object* v___x_2485_, lean_object* v___f_2486_, lean_object* v_x1_2487_, lean_object* v_x2_2488_){
_start:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v_array_2492_; lean_object* v_start_2493_; lean_object* v_stop_2494_; lean_object* v___y_2496_; uint8_t v___x_2503_; 
v___x_2489_ = lean_array_get_size(v_x2_2488_);
lean_inc_ref(v_x2_2488_);
v___x_2490_ = l_Array_toSubarray___redArg(v_x2_2488_, v___x_2485_, v___x_2489_);
v___x_2491_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v_array_2492_ = lean_ctor_get(v___x_2490_, 0);
lean_inc_ref(v_array_2492_);
v_start_2493_ = lean_ctor_get(v___x_2490_, 1);
lean_inc(v_start_2493_);
v_stop_2494_ = lean_ctor_get(v___x_2490_, 2);
lean_inc(v_stop_2494_);
lean_dec_ref(v___x_2490_);
v___x_2503_ = lean_nat_dec_lt(v_start_2493_, v_stop_2494_);
if (v___x_2503_ == 0)
{
lean_dec(v_stop_2494_);
lean_dec(v_start_2493_);
lean_dec_ref(v_array_2492_);
lean_dec_ref(v_x2_2488_);
lean_dec_ref(v___f_2486_);
return v_x1_2487_;
}
else
{
lean_object* v___x_2504_; uint8_t v___x_2505_; 
v___x_2504_ = lean_array_get_size(v_array_2492_);
v___x_2505_ = lean_nat_dec_le(v_stop_2494_, v___x_2504_);
if (v___x_2505_ == 0)
{
lean_dec(v_stop_2494_);
v___y_2496_ = v___x_2504_;
goto v___jp_2495_;
}
else
{
v___y_2496_ = v_stop_2494_;
goto v___jp_2495_;
}
}
v___jp_2495_:
{
uint8_t v___x_2497_; 
v___x_2497_ = lean_nat_dec_lt(v_start_2493_, v___y_2496_);
if (v___x_2497_ == 0)
{
lean_dec(v___y_2496_);
lean_dec(v_start_2493_);
lean_dec_ref(v_array_2492_);
lean_dec_ref(v_x2_2488_);
lean_dec_ref(v___f_2486_);
return v_x1_2487_;
}
else
{
size_t v___x_2498_; size_t v___x_2499_; lean_object* v___x_2500_; uint8_t v___x_2501_; 
v___x_2498_ = lean_usize_of_nat(v_start_2493_);
lean_dec(v_start_2493_);
v___x_2499_ = lean_usize_of_nat(v___y_2496_);
lean_dec(v___y_2496_);
v___x_2500_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2491_, v___f_2486_, v_array_2492_, v___x_2498_, v___x_2499_);
v___x_2501_ = lean_unbox(v___x_2500_);
lean_dec(v___x_2500_);
if (v___x_2501_ == 0)
{
lean_dec_ref(v_x2_2488_);
return v_x1_2487_;
}
else
{
lean_object* v___x_2502_; 
v___x_2502_ = lean_array_push(v_x1_2487_, v_x2_2488_);
return v___x_2502_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_mergeStructureResolutionOrders___redArg___lam__10(lean_object* v_snd_2506_, lean_object* v_x_2507_){
_start:
{
uint8_t v___x_2508_; 
v___x_2508_ = lean_name_eq(v_x_2507_, v_snd_2506_);
return v___x_2508_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__10___boxed(lean_object* v_snd_2509_, lean_object* v_x_2510_){
_start:
{
uint8_t v_res_2511_; lean_object* v_r_2512_; 
v_res_2511_ = l_Lean_mergeStructureResolutionOrders___redArg___lam__10(v_snd_2509_, v_x_2510_);
lean_dec(v_x_2510_);
lean_dec(v_snd_2509_);
v_r_2512_ = lean_box(v_res_2511_);
return v_r_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__12(lean_object* v_toPure_2514_, lean_object* v___x_2515_, lean_object* v_fst_2516_, lean_object* v_fst_2517_, lean_object* v___f_2518_, uint8_t v_relaxed_2519_, lean_object* v___x_2520_, lean_object* v_parentNames_2521_, lean_object* v___f_2522_, lean_object* v_snd_2523_, lean_object* v___f_2524_, lean_object* v___x_2525_, lean_object* v_____x_2526_){
_start:
{
lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v_fst_2535_; lean_object* v_snd_2536_; lean_object* v___f_2537_; lean_object* v___f_2538_; lean_object* v_defects_2540_; lean_object* v___y_2557_; lean_object* v___y_2569_; lean_object* v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v___y_2583_; uint8_t v___x_2595_; 
v_fst_2535_ = lean_ctor_get(v_____x_2526_, 0);
lean_inc(v_fst_2535_);
v_snd_2536_ = lean_ctor_get(v_____x_2526_, 1);
lean_inc_n(v_snd_2536_, 2);
lean_dec_ref(v_____x_2526_);
v___f_2537_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2537_, 0, v_snd_2536_);
lean_inc(v___x_2515_);
v___f_2538_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__9___boxed), 3, 2);
lean_closure_set(v___f_2538_, 0, v___x_2515_);
lean_closure_set(v___f_2538_, 1, v___f_2537_);
v___x_2595_ = lean_unbox(v_fst_2535_);
lean_dec(v_fst_2535_);
if (v___x_2595_ == 0)
{
if (v_relaxed_2519_ == 0)
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; 
v___x_2596_ = lean_array_get_size(v_fst_2517_);
v___x_2597_ = lean_mk_empty_array_with_capacity(v___x_2515_);
v___x_2598_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v___x_2599_ = lean_nat_dec_lt(v___x_2515_, v___x_2596_);
if (v___x_2599_ == 0)
{
v___y_2583_ = v___x_2597_;
goto v___jp_2582_;
}
else
{
lean_object* v___f_2600_; lean_object* v___f_2601_; uint8_t v___x_2602_; 
lean_inc(v_snd_2536_);
v___f_2600_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__10___boxed), 2, 1);
lean_closure_set(v___f_2600_, 0, v_snd_2536_);
lean_inc(v___x_2525_);
v___f_2601_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__11), 4, 2);
lean_closure_set(v___f_2601_, 0, v___x_2525_);
lean_closure_set(v___f_2601_, 1, v___f_2600_);
v___x_2602_ = lean_nat_dec_le(v___x_2596_, v___x_2596_);
if (v___x_2602_ == 0)
{
if (v___x_2599_ == 0)
{
lean_dec_ref(v___f_2601_);
v___y_2583_ = v___x_2597_;
goto v___jp_2582_;
}
else
{
size_t v___x_2603_; size_t v___x_2604_; lean_object* v___x_2605_; 
v___x_2603_ = ((size_t)0ULL);
v___x_2604_ = lean_usize_of_nat(v___x_2596_);
lean_inc(v_fst_2517_);
v___x_2605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2598_, v___f_2601_, v_fst_2517_, v___x_2603_, v___x_2604_, v___x_2597_);
v___y_2583_ = v___x_2605_;
goto v___jp_2582_;
}
}
else
{
size_t v___x_2606_; size_t v___x_2607_; lean_object* v___x_2608_; 
v___x_2606_ = ((size_t)0ULL);
v___x_2607_ = lean_usize_of_nat(v___x_2596_);
lean_inc(v_fst_2517_);
v___x_2608_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2598_, v___f_2601_, v_fst_2517_, v___x_2606_, v___x_2607_, v___x_2597_);
v___y_2583_ = v___x_2608_;
goto v___jp_2582_;
}
}
}
else
{
lean_dec(v___x_2525_);
lean_dec_ref(v___f_2524_);
lean_dec_ref(v___f_2522_);
lean_dec_ref(v_parentNames_2521_);
lean_dec_ref(v___x_2520_);
v_defects_2540_ = v_snd_2523_;
goto v___jp_2539_;
}
}
else
{
lean_dec(v___x_2525_);
lean_dec_ref(v___f_2524_);
lean_dec_ref(v___f_2522_);
lean_dec_ref(v_parentNames_2521_);
lean_dec_ref(v___x_2520_);
v_defects_2540_ = v_snd_2523_;
goto v___jp_2539_;
}
v___jp_2527_:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___y_2529_);
lean_ctor_set(v___x_2531_, 1, v___y_2528_);
v___x_2532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2532_, 0, v___y_2530_);
lean_ctor_set(v___x_2532_, 1, v___x_2531_);
v___x_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2532_);
v___x_2534_ = lean_apply_2(v_toPure_2514_, lean_box(0), v___x_2533_);
return v___x_2534_;
}
v___jp_2539_:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; size_t v_sz_2543_; size_t v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; uint8_t v___x_2550_; 
v___x_2541_ = lean_array_push(v_fst_2516_, v_snd_2536_);
v___x_2542_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v_sz_2543_ = lean_array_size(v_fst_2517_);
v___x_2544_ = ((size_t)0ULL);
v___x_2545_ = l_unsafeCast___redArg(v_fst_2517_);
lean_dec(v_fst_2517_);
v___x_2546_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2542_, v___f_2538_, v_sz_2543_, v___x_2544_, v___x_2545_);
v___x_2547_ = l_unsafeCast___redArg(v___x_2546_);
lean_dec(v___x_2546_);
v___x_2548_ = lean_array_get_size(v___x_2547_);
v___x_2549_ = lean_mk_empty_array_with_capacity(v___x_2515_);
v___x_2550_ = lean_nat_dec_lt(v___x_2515_, v___x_2548_);
lean_dec(v___x_2515_);
if (v___x_2550_ == 0)
{
lean_dec(v___x_2547_);
lean_dec_ref(v___f_2518_);
v___y_2528_ = v_defects_2540_;
v___y_2529_ = v___x_2541_;
v___y_2530_ = v___x_2549_;
goto v___jp_2527_;
}
else
{
uint8_t v___x_2551_; 
v___x_2551_ = lean_nat_dec_le(v___x_2548_, v___x_2548_);
if (v___x_2551_ == 0)
{
if (v___x_2550_ == 0)
{
lean_dec(v___x_2547_);
lean_dec_ref(v___f_2518_);
v___y_2528_ = v_defects_2540_;
v___y_2529_ = v___x_2541_;
v___y_2530_ = v___x_2549_;
goto v___jp_2527_;
}
else
{
size_t v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = lean_usize_of_nat(v___x_2548_);
v___x_2553_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2542_, v___f_2518_, v___x_2547_, v___x_2544_, v___x_2552_, v___x_2549_);
v___y_2528_ = v_defects_2540_;
v___y_2529_ = v___x_2541_;
v___y_2530_ = v___x_2553_;
goto v___jp_2527_;
}
}
else
{
size_t v___x_2554_; lean_object* v___x_2555_; 
v___x_2554_ = lean_usize_of_nat(v___x_2548_);
v___x_2555_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2542_, v___f_2518_, v___x_2547_, v___x_2544_, v___x_2554_, v___x_2549_);
v___y_2528_ = v_defects_2540_;
v___y_2529_ = v___x_2541_;
v___y_2530_ = v___x_2555_;
goto v___jp_2527_;
}
}
}
v___jp_2556_:
{
lean_object* v___x_2558_; uint8_t v___x_2559_; lean_object* v___x_2560_; size_t v_sz_2561_; size_t v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
lean_inc_ref(v___x_2520_);
v___x_2558_ = l_Array_eraseReps___redArg(v___x_2520_, v___y_2557_);
lean_inc_n(v_snd_2536_, 2);
v___x_2559_ = l_Array_contains___redArg(v___x_2520_, v_parentNames_2521_, v_snd_2536_);
v___x_2560_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v_sz_2561_ = lean_array_size(v___x_2558_);
v___x_2562_ = ((size_t)0ULL);
v___x_2563_ = l_unsafeCast___redArg(v___x_2558_);
lean_dec_ref(v___x_2558_);
v___x_2564_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2560_, v___f_2522_, v_sz_2561_, v___x_2562_, v___x_2563_);
v___x_2565_ = l_unsafeCast___redArg(v___x_2564_);
lean_dec(v___x_2564_);
v___x_2566_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2566_, 0, v_snd_2536_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
lean_ctor_set_uint8(v___x_2566_, sizeof(void*)*2, v___x_2559_);
v___x_2567_ = lean_array_push(v_snd_2523_, v___x_2566_);
v_defects_2540_ = v___x_2567_;
goto v___jp_2539_;
}
v___jp_2568_:
{
lean_object* v___x_2574_; 
lean_inc_ref(v___y_2571_);
v___x_2574_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___y_2571_, v___y_2572_, v___y_2569_, v___y_2570_, v___y_2573_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_2573_);
lean_dec(v___y_2572_);
v___y_2557_ = v___x_2574_;
goto v___jp_2556_;
}
v___jp_2575_:
{
uint8_t v___x_2581_; 
v___x_2581_ = lean_nat_dec_le(v___y_2580_, v___y_2577_);
if (v___x_2581_ == 0)
{
lean_dec(v___y_2577_);
lean_inc(v___y_2580_);
v___y_2569_ = v___y_2576_;
v___y_2570_ = v___y_2580_;
v___y_2571_ = v___y_2578_;
v___y_2572_ = v___y_2579_;
v___y_2573_ = v___y_2580_;
goto v___jp_2568_;
}
else
{
v___y_2569_ = v___y_2576_;
v___y_2570_ = v___y_2580_;
v___y_2571_ = v___y_2578_;
v___y_2572_ = v___y_2579_;
v___y_2573_ = v___y_2577_;
goto v___jp_2568_;
}
}
v___jp_2582_:
{
lean_object* v___x_2584_; size_t v_sz_2585_; size_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; 
v___x_2584_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v_sz_2585_ = lean_array_size(v___y_2583_);
v___x_2586_ = ((size_t)0ULL);
v___x_2587_ = l_unsafeCast___redArg(v___y_2583_);
lean_dec_ref(v___y_2583_);
v___x_2588_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2584_, v___f_2524_, v_sz_2585_, v___x_2586_, v___x_2587_);
v___x_2589_ = l_unsafeCast___redArg(v___x_2588_);
lean_dec(v___x_2588_);
v___x_2590_ = lean_array_get_size(v___x_2589_);
v___x_2591_ = lean_nat_dec_eq(v___x_2590_, v___x_2515_);
if (v___x_2591_ == 0)
{
lean_object* v___x_2592_; lean_object* v___x_2593_; uint8_t v___x_2594_; 
v___x_2592_ = ((lean_object*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__12___closed__0));
v___x_2593_ = lean_nat_sub(v___x_2590_, v___x_2525_);
lean_dec(v___x_2525_);
v___x_2594_ = lean_nat_dec_le(v___x_2515_, v___x_2593_);
if (v___x_2594_ == 0)
{
lean_inc(v___x_2593_);
v___y_2576_ = v___x_2589_;
v___y_2577_ = v___x_2593_;
v___y_2578_ = v___x_2592_;
v___y_2579_ = v___x_2590_;
v___y_2580_ = v___x_2593_;
goto v___jp_2575_;
}
else
{
lean_inc(v___x_2515_);
v___y_2576_ = v___x_2589_;
v___y_2577_ = v___x_2593_;
v___y_2578_ = v___x_2592_;
v___y_2579_ = v___x_2590_;
v___y_2580_ = v___x_2515_;
goto v___jp_2575_;
}
}
else
{
lean_dec(v___x_2525_);
v___y_2557_ = v___x_2589_;
goto v___jp_2556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__12___boxed(lean_object* v_toPure_2609_, lean_object* v___x_2610_, lean_object* v_fst_2611_, lean_object* v_fst_2612_, lean_object* v___f_2613_, lean_object* v_relaxed_2614_, lean_object* v___x_2615_, lean_object* v_parentNames_2616_, lean_object* v___f_2617_, lean_object* v_snd_2618_, lean_object* v___f_2619_, lean_object* v___x_2620_, lean_object* v_____x_2621_){
_start:
{
uint8_t v_relaxed_boxed_2622_; lean_object* v_res_2623_; 
v_relaxed_boxed_2622_ = lean_unbox(v_relaxed_2614_);
v_res_2623_ = l_Lean_mergeStructureResolutionOrders___redArg___lam__12(v_toPure_2609_, v___x_2610_, v_fst_2611_, v_fst_2612_, v___f_2613_, v_relaxed_boxed_2622_, v___x_2615_, v_parentNames_2616_, v___f_2617_, v_snd_2618_, v___f_2619_, v___x_2620_, v_____x_2621_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__13(lean_object* v___x_2624_, lean_object* v_toPure_2625_, lean_object* v___f_2626_, uint8_t v_relaxed_2627_, lean_object* v___x_2628_, lean_object* v_parentNames_2629_, lean_object* v___f_2630_, lean_object* v___f_2631_, lean_object* v___x_2632_, lean_object* v_inst_2633_, lean_object* v_toBind_2634_, lean_object* v___f_2635_, lean_object* v_b_2636_){
_start:
{
lean_object* v_snd_2637_; lean_object* v_fst_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2664_; 
v_snd_2637_ = lean_ctor_get(v_b_2636_, 1);
v_fst_2638_ = lean_ctor_get(v_b_2636_, 0);
v_isSharedCheck_2664_ = !lean_is_exclusive(v_b_2636_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2640_ = v_b_2636_;
v_isShared_2641_ = v_isSharedCheck_2664_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_snd_2637_);
lean_inc(v_fst_2638_);
lean_dec(v_b_2636_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2664_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v_fst_2642_; lean_object* v_snd_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2663_; 
v_fst_2642_ = lean_ctor_get(v_snd_2637_, 0);
v_snd_2643_ = lean_ctor_get(v_snd_2637_, 1);
v_isSharedCheck_2663_ = !lean_is_exclusive(v_snd_2637_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2645_ = v_snd_2637_;
v_isShared_2646_ = v_isSharedCheck_2663_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_snd_2643_);
lean_inc(v_fst_2642_);
lean_dec(v_snd_2637_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2663_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2647_; uint8_t v___x_2648_; 
v___x_2647_ = lean_array_get_size(v_fst_2638_);
v___x_2648_ = lean_nat_dec_eq(v___x_2647_, v___x_2624_);
if (v___x_2648_ == 0)
{
lean_object* v___x_2649_; lean_object* v___f_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
lean_del_object(v___x_2645_);
lean_del_object(v___x_2640_);
v___x_2649_ = lean_box(v_relaxed_2627_);
lean_inc(v_fst_2638_);
v___f_2650_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__12___boxed), 13, 12);
lean_closure_set(v___f_2650_, 0, v_toPure_2625_);
lean_closure_set(v___f_2650_, 1, v___x_2624_);
lean_closure_set(v___f_2650_, 2, v_fst_2642_);
lean_closure_set(v___f_2650_, 3, v_fst_2638_);
lean_closure_set(v___f_2650_, 4, v___f_2626_);
lean_closure_set(v___f_2650_, 5, v___x_2649_);
lean_closure_set(v___f_2650_, 6, v___x_2628_);
lean_closure_set(v___f_2650_, 7, v_parentNames_2629_);
lean_closure_set(v___f_2650_, 8, v___f_2630_);
lean_closure_set(v___f_2650_, 9, v_snd_2643_);
lean_closure_set(v___f_2650_, 10, v___f_2631_);
lean_closure_set(v___f_2650_, 11, v___x_2632_);
v___x_2651_ = l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg(v_inst_2633_, v_fst_2638_);
lean_inc(v_toBind_2634_);
v___x_2652_ = lean_apply_4(v_toBind_2634_, lean_box(0), lean_box(0), v___x_2651_, v___f_2650_);
v___x_2653_ = lean_apply_4(v_toBind_2634_, lean_box(0), lean_box(0), v___x_2652_, v___f_2635_);
return v___x_2653_;
}
else
{
lean_object* v___x_2655_; 
lean_dec_ref(v_inst_2633_);
lean_dec(v___x_2632_);
lean_dec_ref(v___f_2631_);
lean_dec_ref(v___f_2630_);
lean_dec_ref(v_parentNames_2629_);
lean_dec_ref(v___x_2628_);
lean_dec_ref(v___f_2626_);
lean_dec(v___x_2624_);
if (v_isShared_2646_ == 0)
{
v___x_2655_ = v___x_2645_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v_fst_2642_);
lean_ctor_set(v_reuseFailAlloc_2662_, 1, v_snd_2643_);
v___x_2655_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
lean_object* v___x_2657_; 
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 1, v___x_2655_);
v___x_2657_ = v___x_2640_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_fst_2638_);
lean_ctor_set(v_reuseFailAlloc_2661_, 1, v___x_2655_);
v___x_2657_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2657_);
v___x_2659_ = lean_apply_2(v_toPure_2625_, lean_box(0), v___x_2658_);
v___x_2660_ = lean_apply_4(v_toBind_2634_, lean_box(0), lean_box(0), v___x_2659_, v___f_2635_);
return v___x_2660_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__13___boxed(lean_object* v___x_2665_, lean_object* v_toPure_2666_, lean_object* v___f_2667_, lean_object* v_relaxed_2668_, lean_object* v___x_2669_, lean_object* v_parentNames_2670_, lean_object* v___f_2671_, lean_object* v___f_2672_, lean_object* v___x_2673_, lean_object* v_inst_2674_, lean_object* v_toBind_2675_, lean_object* v___f_2676_, lean_object* v_b_2677_){
_start:
{
uint8_t v_relaxed_boxed_2678_; lean_object* v_res_2679_; 
v_relaxed_boxed_2678_ = lean_unbox(v_relaxed_2668_);
v_res_2679_ = l_Lean_mergeStructureResolutionOrders___redArg___lam__13(v___x_2665_, v_toPure_2666_, v___f_2667_, v_relaxed_boxed_2678_, v___x_2669_, v_parentNames_2670_, v___f_2671_, v___f_2672_, v___x_2673_, v_inst_2674_, v_toBind_2675_, v___f_2676_, v_b_2677_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__7(lean_object* v___x_2680_, lean_object* v___x_2681_, lean_object* v_x_2682_){
_start:
{
lean_object* v___x_2683_; 
v___x_2683_ = lean_array_get_borrowed(v___x_2680_, v_x_2682_, v___x_2681_);
lean_inc(v___x_2683_);
return v___x_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__7___boxed(lean_object* v___x_2684_, lean_object* v___x_2685_, lean_object* v_x_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l_Lean_mergeStructureResolutionOrders___redArg___lam__7(v___x_2684_, v___x_2685_, v_x_2686_);
lean_dec_ref(v_x_2686_);
lean_dec(v___x_2685_);
lean_dec(v___x_2684_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__14(lean_object* v___x_2690_, lean_object* v_toPure_2691_, lean_object* v___f_2692_, uint8_t v_relaxed_2693_, lean_object* v___x_2694_, lean_object* v_parentNames_2695_, lean_object* v___f_2696_, lean_object* v_inst_2697_, lean_object* v_toBind_2698_, lean_object* v___f_2699_, lean_object* v_structName_2700_, lean_object* v___f_2701_, lean_object* v___f_2702_, lean_object* v_parentResOrders_2703_){
_start:
{
lean_object* v___x_2704_; lean_object* v___f_2705_; lean_object* v___y_2707_; lean_object* v_j_2718_; lean_object* v_as_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; uint8_t v___x_2724_; 
v___x_2704_ = lean_unsigned_to_nat(0u);
v___f_2705_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__7___boxed), 3, 2);
lean_closure_set(v___f_2705_, 0, v___x_2690_);
lean_closure_set(v___f_2705_, 1, v___x_2704_);
v_j_2718_ = lean_array_get_size(v_parentResOrders_2703_);
lean_inc_ref(v_parentNames_2695_);
v_as_2719_ = lean_array_push(v_parentResOrders_2703_, v_parentNames_2695_);
v___x_2720_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_2704_, v_as_2719_, v_j_2718_);
v___x_2721_ = lean_array_get_size(v___x_2720_);
v___x_2722_ = ((lean_object*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__14___closed__0));
v___x_2723_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v___x_2724_ = lean_nat_dec_lt(v___x_2704_, v___x_2721_);
if (v___x_2724_ == 0)
{
lean_dec_ref(v___x_2720_);
lean_dec_ref(v___f_2702_);
v___y_2707_ = v___x_2722_;
goto v___jp_2706_;
}
else
{
uint8_t v___x_2725_; 
v___x_2725_ = lean_nat_dec_le(v___x_2721_, v___x_2721_);
if (v___x_2725_ == 0)
{
if (v___x_2724_ == 0)
{
lean_dec_ref(v___x_2720_);
lean_dec_ref(v___f_2702_);
v___y_2707_ = v___x_2722_;
goto v___jp_2706_;
}
else
{
size_t v___x_2726_; size_t v___x_2727_; lean_object* v___x_2728_; 
v___x_2726_ = ((size_t)0ULL);
v___x_2727_ = lean_usize_of_nat(v___x_2721_);
v___x_2728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2723_, v___f_2702_, v___x_2720_, v___x_2726_, v___x_2727_, v___x_2722_);
v___y_2707_ = v___x_2728_;
goto v___jp_2706_;
}
}
else
{
size_t v___x_2729_; size_t v___x_2730_; lean_object* v___x_2731_; 
v___x_2729_ = ((size_t)0ULL);
v___x_2730_ = lean_usize_of_nat(v___x_2721_);
v___x_2731_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2723_, v___f_2702_, v___x_2720_, v___x_2729_, v___x_2730_, v___x_2722_);
v___y_2707_ = v___x_2731_;
goto v___jp_2706_;
}
}
v___jp_2706_:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___f_2710_; lean_object* v___x_2711_; lean_object* v_resOrder_2712_; lean_object* v_defects_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2708_ = lean_unsigned_to_nat(1u);
v___x_2709_ = lean_box(v_relaxed_2693_);
lean_inc(v_toBind_2698_);
lean_inc_ref(v_inst_2697_);
v___f_2710_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__13___boxed), 13, 12);
lean_closure_set(v___f_2710_, 0, v___x_2704_);
lean_closure_set(v___f_2710_, 1, v_toPure_2691_);
lean_closure_set(v___f_2710_, 2, v___f_2692_);
lean_closure_set(v___f_2710_, 3, v___x_2709_);
lean_closure_set(v___f_2710_, 4, v___x_2694_);
lean_closure_set(v___f_2710_, 5, v_parentNames_2695_);
lean_closure_set(v___f_2710_, 6, v___f_2696_);
lean_closure_set(v___f_2710_, 7, v___f_2705_);
lean_closure_set(v___f_2710_, 8, v___x_2708_);
lean_closure_set(v___f_2710_, 9, v_inst_2697_);
lean_closure_set(v___f_2710_, 10, v_toBind_2698_);
lean_closure_set(v___f_2710_, 11, v___f_2699_);
v___x_2711_ = lean_mk_empty_array_with_capacity(v___x_2708_);
v_resOrder_2712_ = lean_array_push(v___x_2711_, v_structName_2700_);
v_defects_2713_ = ((lean_object*)(l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__1));
v___x_2714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2714_, 0, v_resOrder_2712_);
lean_ctor_set(v___x_2714_, 1, v_defects_2713_);
v___x_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2715_, 0, v___y_2707_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = l___private_Init_While_0__repeatM_erased___redArg(v_inst_2697_, v___f_2710_, v___x_2715_);
v___x_2717_ = lean_apply_4(v_toBind_2698_, lean_box(0), lean_box(0), v___x_2716_, v___f_2701_);
return v___x_2717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__14___boxed(lean_object* v___x_2732_, lean_object* v_toPure_2733_, lean_object* v___f_2734_, lean_object* v_relaxed_2735_, lean_object* v___x_2736_, lean_object* v_parentNames_2737_, lean_object* v___f_2738_, lean_object* v_inst_2739_, lean_object* v_toBind_2740_, lean_object* v___f_2741_, lean_object* v_structName_2742_, lean_object* v___f_2743_, lean_object* v___f_2744_, lean_object* v_parentResOrders_2745_){
_start:
{
uint8_t v_relaxed_boxed_2746_; lean_object* v_res_2747_; 
v_relaxed_boxed_2746_ = lean_unbox(v_relaxed_2735_);
v_res_2747_ = l_Lean_mergeStructureResolutionOrders___redArg___lam__14(v___x_2732_, v_toPure_2733_, v___f_2734_, v_relaxed_boxed_2746_, v___x_2736_, v_parentNames_2737_, v___f_2738_, v_inst_2739_, v_toBind_2740_, v___f_2741_, v_structName_2742_, v___f_2743_, v___f_2744_, v_parentResOrders_2745_);
return v_res_2747_;
}
}
LEAN_EXPORT uint8_t l_Lean_mergeStructureResolutionOrders___redArg___lam__0(lean_object* v_x_2748_){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; uint8_t v___x_2751_; 
v___x_2749_ = lean_array_get_size(v_x_2748_);
v___x_2750_ = lean_unsigned_to_nat(0u);
v___x_2751_ = lean_nat_dec_eq(v___x_2749_, v___x_2750_);
if (v___x_2751_ == 0)
{
uint8_t v___x_2752_; 
v___x_2752_ = 1;
return v___x_2752_;
}
else
{
uint8_t v___x_2753_; 
v___x_2753_ = 0;
return v___x_2753_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__0___boxed(lean_object* v_x_2754_){
_start:
{
uint8_t v_res_2755_; lean_object* v_r_2756_; 
v_res_2755_ = l_Lean_mergeStructureResolutionOrders___redArg___lam__0(v_x_2754_);
lean_dec_ref(v_x_2754_);
v_r_2756_ = lean_box(v_res_2755_);
return v_r_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__1(lean_object* v___f_2757_, lean_object* v_x1_2758_, lean_object* v_x2_2759_){
_start:
{
lean_object* v___x_2760_; uint8_t v___x_2761_; 
lean_inc_ref(v_x2_2759_);
v___x_2760_ = lean_apply_1(v___f_2757_, v_x2_2759_);
v___x_2761_ = lean_unbox(v___x_2760_);
if (v___x_2761_ == 0)
{
lean_dec_ref(v_x2_2759_);
return v_x1_2758_;
}
else
{
lean_object* v___x_2762_; 
v___x_2762_ = lean_array_push(v_x1_2758_, v_x2_2759_);
return v___x_2762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__2(lean_object* v_toPure_2763_, lean_object* v_____do__lift_2764_){
_start:
{
lean_object* v_resolutionOrder_2765_; lean_object* v___x_2766_; 
v_resolutionOrder_2765_ = lean_ctor_get(v_____do__lift_2764_, 0);
lean_inc_ref(v_resolutionOrder_2765_);
lean_dec_ref(v_____do__lift_2764_);
v___x_2766_ = lean_apply_2(v_toPure_2763_, lean_box(0), v_resolutionOrder_2765_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__3(lean_object* v___x_2767_, lean_object* v_parentNames_2768_, lean_object* v_x_2769_){
_start:
{
uint8_t v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
lean_inc(v_x_2769_);
v___x_2770_ = l_Array_contains___redArg(v___x_2767_, v_parentNames_2768_, v_x_2769_);
v___x_2771_ = lean_box(v___x_2770_);
v___x_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
lean_ctor_set(v___x_2772_, 1, v_x_2769_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg(lean_object* v_inst_2777_, lean_object* v_inst_2778_, lean_object* v_structName_2779_, lean_object* v_parentNames_2780_, uint8_t v_relaxed_2781_){
_start:
{
lean_object* v_toApplicative_2782_; lean_object* v_toBind_2783_; lean_object* v_toPure_2784_; lean_object* v___f_2785_; lean_object* v___x_2786_; lean_object* v___f_2787_; lean_object* v___x_2788_; lean_object* v___f_2789_; lean_object* v___f_2790_; lean_object* v___f_2791_; lean_object* v___f_2792_; lean_object* v___x_2793_; lean_object* v___f_2794_; size_t v_sz_2795_; size_t v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v_toApplicative_2782_ = lean_ctor_get(v_inst_2777_, 0);
v_toBind_2783_ = lean_ctor_get(v_inst_2777_, 1);
lean_inc_n(v_toBind_2783_, 3);
v_toPure_2784_ = lean_ctor_get(v_toApplicative_2782_, 1);
v___f_2785_ = ((lean_object*)(l_Lean_mergeStructureResolutionOrders___redArg___closed__1));
v___x_2786_ = ((lean_object*)(l_Lean_setStructureParents___redArg___closed__0));
lean_inc_ref_n(v_parentNames_2780_, 2);
v___f_2787_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__3), 3, 2);
lean_closure_set(v___f_2787_, 0, v___x_2786_);
lean_closure_set(v___f_2787_, 1, v_parentNames_2780_);
v___x_2788_ = l_Lean_instInhabitedName;
lean_inc_n(v_toPure_2784_, 4);
v___f_2789_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2789_, 0, v_toPure_2784_);
lean_inc_ref_n(v_inst_2777_, 2);
v___f_2790_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__4), 5, 4);
lean_closure_set(v___f_2790_, 0, v_inst_2777_);
lean_closure_set(v___f_2790_, 1, v_inst_2778_);
lean_closure_set(v___f_2790_, 2, v_toBind_2783_);
lean_closure_set(v___f_2790_, 3, v___f_2789_);
v___f_2791_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__5), 2, 1);
lean_closure_set(v___f_2791_, 0, v_toPure_2784_);
v___f_2792_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__6), 2, 1);
lean_closure_set(v___f_2792_, 0, v_toPure_2784_);
v___x_2793_ = lean_box(v_relaxed_2781_);
v___f_2794_ = lean_alloc_closure((void*)(l_Lean_mergeStructureResolutionOrders___redArg___lam__14___boxed), 14, 13);
lean_closure_set(v___f_2794_, 0, v___x_2788_);
lean_closure_set(v___f_2794_, 1, v_toPure_2784_);
lean_closure_set(v___f_2794_, 2, v___f_2785_);
lean_closure_set(v___f_2794_, 3, v___x_2793_);
lean_closure_set(v___f_2794_, 4, v___x_2786_);
lean_closure_set(v___f_2794_, 5, v_parentNames_2780_);
lean_closure_set(v___f_2794_, 6, v___f_2787_);
lean_closure_set(v___f_2794_, 7, v_inst_2777_);
lean_closure_set(v___f_2794_, 8, v_toBind_2783_);
lean_closure_set(v___f_2794_, 9, v___f_2791_);
lean_closure_set(v___f_2794_, 10, v_structName_2779_);
lean_closure_set(v___f_2794_, 11, v___f_2792_);
lean_closure_set(v___f_2794_, 12, v___f_2785_);
v_sz_2795_ = lean_array_size(v_parentNames_2780_);
v___x_2796_ = ((size_t)0ULL);
v___x_2797_ = l_unsafeCast___redArg(v_parentNames_2780_);
lean_dec_ref(v_parentNames_2780_);
v___x_2798_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2777_, v___f_2790_, v_sz_2795_, v___x_2796_, v___x_2797_);
v___x_2799_ = l_unsafeCast___redArg(v___x_2798_);
lean_dec(v___x_2798_);
v___x_2800_ = lean_apply_4(v_toBind_2783_, lean_box(0), lean_box(0), v___x_2799_, v___f_2794_);
return v___x_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__3(lean_object* v_structName_2801_, lean_object* v_toPure_2802_, lean_object* v___f_2803_, lean_object* v_inst_2804_, lean_object* v_inst_2805_, uint8_t v_relaxed_2806_, lean_object* v_toBind_2807_, lean_object* v___f_2808_, lean_object* v_env_2809_){
_start:
{
lean_object* v___x_2810_; 
lean_inc_ref(v_env_2809_);
v___x_2810_ = l___private_Lean_Structure_0__Lean_getStructureResolutionOrder_x3f(v_env_2809_, v_structName_2801_);
if (lean_obj_tag(v___x_2810_) == 1)
{
lean_object* v_val_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
lean_dec_ref(v_env_2809_);
lean_dec(v___f_2808_);
lean_dec(v_toBind_2807_);
lean_dec_ref(v_inst_2805_);
lean_dec_ref(v_inst_2804_);
lean_dec_ref(v___f_2803_);
lean_dec(v_structName_2801_);
v_val_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_val_2811_);
lean_dec_ref_known(v___x_2810_, 1);
v___x_2812_ = ((lean_object*)(l_Lean_instInhabitedStructureResolutionOrderResult_default___closed__1));
v___x_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2813_, 0, v_val_2811_);
lean_ctor_set(v___x_2813_, 1, v___x_2812_);
v___x_2814_ = lean_apply_2(v_toPure_2802_, lean_box(0), v___x_2813_);
return v___x_2814_;
}
else
{
lean_object* v___x_2815_; lean_object* v___x_2816_; size_t v_sz_2817_; size_t v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v_parentNames_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
lean_dec(v___x_2810_);
lean_dec(v_toPure_2802_);
lean_inc(v_structName_2801_);
v___x_2815_ = l_Lean_getStructureParentInfo(v_env_2809_, v_structName_2801_);
v___x_2816_ = ((lean_object*)(l___private_Lean_Structure_0__Lean_mergeStructureResolutionOrders_selectParent___redArg___lam__4___closed__9));
v_sz_2817_ = lean_array_size(v___x_2815_);
v___x_2818_ = ((size_t)0ULL);
v___x_2819_ = l_unsafeCast___redArg(v___x_2815_);
lean_dec_ref(v___x_2815_);
v___x_2820_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2816_, v___f_2803_, v_sz_2817_, v___x_2818_, v___x_2819_);
v_parentNames_2821_ = l_unsafeCast___redArg(v___x_2820_);
lean_dec(v___x_2820_);
v___x_2822_ = l_Lean_mergeStructureResolutionOrders___redArg(v_inst_2804_, v_inst_2805_, v_structName_2801_, v_parentNames_2821_, v_relaxed_2806_);
v___x_2823_ = lean_apply_4(v_toBind_2807_, lean_box(0), lean_box(0), v___x_2822_, v___f_2808_);
return v___x_2823_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___lam__3___boxed(lean_object* v_structName_2824_, lean_object* v_toPure_2825_, lean_object* v___f_2826_, lean_object* v_inst_2827_, lean_object* v_inst_2828_, lean_object* v_relaxed_2829_, lean_object* v_toBind_2830_, lean_object* v___f_2831_, lean_object* v_env_2832_){
_start:
{
uint8_t v_relaxed_boxed_2833_; lean_object* v_res_2834_; 
v_relaxed_boxed_2833_ = lean_unbox(v_relaxed_2829_);
v_res_2834_ = l_Lean_computeStructureResolutionOrder___redArg___lam__3(v_structName_2824_, v_toPure_2825_, v___f_2826_, v_inst_2827_, v_inst_2828_, v_relaxed_boxed_2833_, v_toBind_2830_, v___f_2831_, v_env_2832_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg(lean_object* v_inst_2835_, lean_object* v_inst_2836_, lean_object* v_structName_2837_, uint8_t v_relaxed_2838_){
_start:
{
lean_object* v_toApplicative_2839_; lean_object* v_toBind_2840_; lean_object* v_getEnv_2841_; lean_object* v_toPure_2842_; lean_object* v___f_2843_; lean_object* v___f_2844_; lean_object* v___x_2845_; lean_object* v___f_2846_; lean_object* v___x_2847_; 
v_toApplicative_2839_ = lean_ctor_get(v_inst_2835_, 0);
v_toBind_2840_ = lean_ctor_get(v_inst_2835_, 1);
lean_inc_n(v_toBind_2840_, 3);
v_getEnv_2841_ = lean_ctor_get(v_inst_2836_, 0);
lean_inc(v_getEnv_2841_);
v_toPure_2842_ = lean_ctor_get(v_toApplicative_2839_, 1);
lean_inc_n(v_toPure_2842_, 2);
v___f_2843_ = ((lean_object*)(l_Lean_computeStructureResolutionOrder___redArg___closed__0));
lean_inc(v_structName_2837_);
lean_inc_ref(v_inst_2836_);
v___f_2844_ = lean_alloc_closure((void*)(l_Lean_computeStructureResolutionOrder___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2844_, 0, v_toPure_2842_);
lean_closure_set(v___f_2844_, 1, v_inst_2836_);
lean_closure_set(v___f_2844_, 2, v_structName_2837_);
lean_closure_set(v___f_2844_, 3, v_toBind_2840_);
v___x_2845_ = lean_box(v_relaxed_2838_);
v___f_2846_ = lean_alloc_closure((void*)(l_Lean_computeStructureResolutionOrder___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_2846_, 0, v_structName_2837_);
lean_closure_set(v___f_2846_, 1, v_toPure_2842_);
lean_closure_set(v___f_2846_, 2, v___f_2843_);
lean_closure_set(v___f_2846_, 3, v_inst_2835_);
lean_closure_set(v___f_2846_, 4, v_inst_2836_);
lean_closure_set(v___f_2846_, 5, v___x_2845_);
lean_closure_set(v___f_2846_, 6, v_toBind_2840_);
lean_closure_set(v___f_2846_, 7, v___f_2844_);
v___x_2847_ = lean_apply_4(v_toBind_2840_, lean_box(0), lean_box(0), v_getEnv_2841_, v___f_2846_);
return v___x_2847_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___lam__4(lean_object* v_inst_2848_, lean_object* v_inst_2849_, lean_object* v_toBind_2850_, lean_object* v___f_2851_, lean_object* v_parentName_2852_){
_start:
{
uint8_t v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2853_ = 1;
v___x_2854_ = l_Lean_computeStructureResolutionOrder___redArg(v_inst_2848_, v_inst_2849_, v_parentName_2852_, v___x_2853_);
v___x_2855_ = lean_apply_4(v_toBind_2850_, lean_box(0), lean_box(0), v___x_2854_, v___f_2851_);
return v___x_2855_;
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___redArg___boxed(lean_object* v_inst_2856_, lean_object* v_inst_2857_, lean_object* v_structName_2858_, lean_object* v_relaxed_2859_){
_start:
{
uint8_t v_relaxed_boxed_2860_; lean_object* v_res_2861_; 
v_relaxed_boxed_2860_ = lean_unbox(v_relaxed_2859_);
v_res_2861_ = l_Lean_computeStructureResolutionOrder___redArg(v_inst_2856_, v_inst_2857_, v_structName_2858_, v_relaxed_boxed_2860_);
return v_res_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___redArg___boxed(lean_object* v_inst_2862_, lean_object* v_inst_2863_, lean_object* v_structName_2864_, lean_object* v_parentNames_2865_, lean_object* v_relaxed_2866_){
_start:
{
uint8_t v_relaxed_boxed_2867_; lean_object* v_res_2868_; 
v_relaxed_boxed_2867_ = lean_unbox(v_relaxed_2866_);
v_res_2868_ = l_Lean_mergeStructureResolutionOrders___redArg(v_inst_2862_, v_inst_2863_, v_structName_2864_, v_parentNames_2865_, v_relaxed_boxed_2867_);
return v_res_2868_;
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder(lean_object* v_m_2869_, lean_object* v_inst_2870_, lean_object* v_inst_2871_, lean_object* v_structName_2872_, uint8_t v_relaxed_2873_){
_start:
{
lean_object* v___x_2874_; 
v___x_2874_ = l_Lean_computeStructureResolutionOrder___redArg(v_inst_2870_, v_inst_2871_, v_structName_2872_, v_relaxed_2873_);
return v___x_2874_;
}
}
LEAN_EXPORT lean_object* l_Lean_computeStructureResolutionOrder___boxed(lean_object* v_m_2875_, lean_object* v_inst_2876_, lean_object* v_inst_2877_, lean_object* v_structName_2878_, lean_object* v_relaxed_2879_){
_start:
{
uint8_t v_relaxed_boxed_2880_; lean_object* v_res_2881_; 
v_relaxed_boxed_2880_ = lean_unbox(v_relaxed_2879_);
v_res_2881_ = l_Lean_computeStructureResolutionOrder(v_m_2875_, v_inst_2876_, v_inst_2877_, v_structName_2878_, v_relaxed_boxed_2880_);
return v_res_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders(lean_object* v_m_2882_, lean_object* v_inst_2883_, lean_object* v_inst_2884_, lean_object* v_structName_2885_, lean_object* v_parentNames_2886_, uint8_t v_relaxed_2887_){
_start:
{
lean_object* v___x_2888_; 
v___x_2888_ = l_Lean_mergeStructureResolutionOrders___redArg(v_inst_2883_, v_inst_2884_, v_structName_2885_, v_parentNames_2886_, v_relaxed_2887_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l_Lean_mergeStructureResolutionOrders___boxed(lean_object* v_m_2889_, lean_object* v_inst_2890_, lean_object* v_inst_2891_, lean_object* v_structName_2892_, lean_object* v_parentNames_2893_, lean_object* v_relaxed_2894_){
_start:
{
uint8_t v_relaxed_boxed_2895_; lean_object* v_res_2896_; 
v_relaxed_boxed_2895_ = lean_unbox(v_relaxed_2894_);
v_res_2896_ = l_Lean_mergeStructureResolutionOrders(v_m_2889_, v_inst_2890_, v_inst_2891_, v_structName_2892_, v_parentNames_2893_, v_relaxed_boxed_2895_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureResolutionOrder___redArg___lam__0(lean_object* v_x_2897_){
_start:
{
lean_object* v_resolutionOrder_2898_; 
v_resolutionOrder_2898_ = lean_ctor_get(v_x_2897_, 0);
lean_inc_ref(v_resolutionOrder_2898_);
return v_resolutionOrder_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureResolutionOrder___redArg___lam__0___boxed(lean_object* v_x_2899_){
_start:
{
lean_object* v_res_2900_; 
v_res_2900_ = l_Lean_getStructureResolutionOrder___redArg___lam__0(v_x_2899_);
lean_dec_ref(v_x_2899_);
return v_res_2900_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureResolutionOrder___redArg(lean_object* v_inst_2902_, lean_object* v_inst_2903_, lean_object* v_structName_2904_){
_start:
{
lean_object* v_toApplicative_2905_; lean_object* v_toFunctor_2906_; lean_object* v_map_2907_; lean_object* v___f_2908_; uint8_t v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v_toApplicative_2905_ = lean_ctor_get(v_inst_2902_, 0);
v_toFunctor_2906_ = lean_ctor_get(v_toApplicative_2905_, 0);
v_map_2907_ = lean_ctor_get(v_toFunctor_2906_, 0);
lean_inc(v_map_2907_);
v___f_2908_ = ((lean_object*)(l_Lean_getStructureResolutionOrder___redArg___closed__0));
v___x_2909_ = 1;
v___x_2910_ = l_Lean_computeStructureResolutionOrder___redArg(v_inst_2902_, v_inst_2903_, v_structName_2904_, v___x_2909_);
v___x_2911_ = lean_apply_4(v_map_2907_, lean_box(0), lean_box(0), v___f_2908_, v___x_2910_);
return v___x_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStructureResolutionOrder(lean_object* v_m_2912_, lean_object* v_inst_2913_, lean_object* v_inst_2914_, lean_object* v_structName_2915_){
_start:
{
lean_object* v___x_2916_; 
v___x_2916_ = l_Lean_getStructureResolutionOrder___redArg(v_inst_2913_, v_inst_2914_, v_structName_2915_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAllParentStructures___redArg___lam__0(lean_object* v___x_2917_, lean_object* v_structName_2918_, lean_object* v_x_2919_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = l_Array_erase___redArg(v___x_2917_, v_x_2919_, v_structName_2918_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAllParentStructures___redArg(lean_object* v_inst_2921_, lean_object* v_inst_2922_, lean_object* v_structName_2923_){
_start:
{
lean_object* v_toApplicative_2924_; lean_object* v_toFunctor_2925_; lean_object* v_map_2926_; lean_object* v___x_2927_; lean_object* v___f_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; 
v_toApplicative_2924_ = lean_ctor_get(v_inst_2921_, 0);
v_toFunctor_2925_ = lean_ctor_get(v_toApplicative_2924_, 0);
v_map_2926_ = lean_ctor_get(v_toFunctor_2925_, 0);
lean_inc(v_map_2926_);
v___x_2927_ = ((lean_object*)(l_Lean_setStructureParents___redArg___closed__0));
lean_inc(v_structName_2923_);
v___f_2928_ = lean_alloc_closure((void*)(l_Lean_getAllParentStructures___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2928_, 0, v___x_2927_);
lean_closure_set(v___f_2928_, 1, v_structName_2923_);
v___x_2929_ = l_Lean_getStructureResolutionOrder___redArg(v_inst_2921_, v_inst_2922_, v_structName_2923_);
v___x_2930_ = lean_apply_4(v_map_2926_, lean_box(0), lean_box(0), v___f_2928_, v___x_2929_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_getAllParentStructures(lean_object* v_m_2931_, lean_object* v_inst_2932_, lean_object* v_inst_2933_, lean_object* v_structName_2934_){
_start:
{
lean_object* v___x_2935_; 
v___x_2935_ = l_Lean_getAllParentStructures___redArg(v_inst_2932_, v_inst_2933_, v_structName_2934_);
return v___x_2935_;
}
}
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Exception(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Structure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedStructureFieldInfo_default = _init_l_Lean_instInhabitedStructureFieldInfo_default();
lean_mark_persistent(l_Lean_instInhabitedStructureFieldInfo_default);
l_Lean_instInhabitedStructureFieldInfo = _init_l_Lean_instInhabitedStructureFieldInfo();
lean_mark_persistent(l_Lean_instInhabitedStructureFieldInfo);
l_Lean_instInhabitedStructureParentInfo_default = _init_l_Lean_instInhabitedStructureParentInfo_default();
lean_mark_persistent(l_Lean_instInhabitedStructureParentInfo_default);
l_Lean_instInhabitedStructureParentInfo = _init_l_Lean_instInhabitedStructureParentInfo();
lean_mark_persistent(l_Lean_instInhabitedStructureParentInfo);
l_Lean_instInhabitedStructureInfo_default = _init_l_Lean_instInhabitedStructureInfo_default();
lean_mark_persistent(l_Lean_instInhabitedStructureInfo_default);
l_Lean_instInhabitedStructureInfo = _init_l_Lean_instInhabitedStructureInfo();
lean_mark_persistent(l_Lean_instInhabitedStructureInfo);
l_Lean_instInhabitedStructureState_default = _init_l_Lean_instInhabitedStructureState_default();
lean_mark_persistent(l_Lean_instInhabitedStructureState_default);
l___private_Lean_Structure_0__Lean_instInhabitedStructureState = _init_l___private_Lean_Structure_0__Lean_instInhabitedStructureState();
lean_mark_persistent(l___private_Lean_Structure_0__Lean_instInhabitedStructureState);
res = l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_2533181092____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Structure_0__Lean_structureExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Structure_0__Lean_structureExt);
lean_dec_ref(res);
l_Lean_instInhabitedStructureDescr_default = _init_l_Lean_instInhabitedStructureDescr_default();
lean_mark_persistent(l_Lean_instInhabitedStructureDescr_default);
l_Lean_instInhabitedStructureDescr = _init_l_Lean_instInhabitedStructureDescr();
lean_mark_persistent(l_Lean_instInhabitedStructureDescr);
l_Lean_instInhabitedStructureResolutionState_default = _init_l_Lean_instInhabitedStructureResolutionState_default();
lean_mark_persistent(l_Lean_instInhabitedStructureResolutionState_default);
l_Lean_instInhabitedStructureResolutionState = _init_l_Lean_instInhabitedStructureResolutionState();
lean_mark_persistent(l_Lean_instInhabitedStructureResolutionState);
res = l___private_Lean_Structure_0__Lean_initFn_00___x40_Lean_Structure_3808158513____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_structureResolutionExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_structureResolutionExt);
lean_dec_ref(res);
l_Lean_instInhabitedStructureResolutionOrderConflict_default = _init_l_Lean_instInhabitedStructureResolutionOrderConflict_default();
lean_mark_persistent(l_Lean_instInhabitedStructureResolutionOrderConflict_default);
l_Lean_instInhabitedStructureResolutionOrderConflict = _init_l_Lean_instInhabitedStructureResolutionOrderConflict();
lean_mark_persistent(l_Lean_instInhabitedStructureResolutionOrderConflict);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Structure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
lean_object* initialize_Lean_Exception(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Structure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Structure(builtin);
}
#ifdef __cplusplus
}
#endif

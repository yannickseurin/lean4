// Lean compiler output
// Module: Std.Http.Internal.IndexMultiMap
// Imports: public import Init.Grind public import Init.Data.Int.OfNat public import Std.Data.HashMap
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
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
uint8_t l_Array_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* l_instReprNat___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Array_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_repr___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__0 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__0_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__1 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__1_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__2 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__2_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__3 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__3_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__4 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__4_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__5 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__5_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__6 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__6_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__0_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__7 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__7_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__2_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__3_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__4_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__8 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__8_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__6_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entries"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__10 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__11 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__11_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__11_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__12 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__12_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__13 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__12_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__15 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__15_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprNat___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__16 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__16_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instRepr___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__16_value)} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__17 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__17_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18_value;
static lean_once_cell_t l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__20 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__20_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__20_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__21 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__21_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "indexes"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__22 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__22_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__22_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__23 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__23_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprTupleOfRepr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__17_value)} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__24 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__24_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.HashMap.ofList "};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__25 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__25_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__25_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__26 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__26_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "validity"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__27 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__27_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__27_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__28 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__28_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__29 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__29_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__29_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__30 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__30_value;
static const lean_string_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__31 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__31_value;
static lean_once_cell_t l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32;
static lean_once_cell_t l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__34 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__34_value;
static const lean_ctor_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__31_value)}};
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__35 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__35_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__36 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__36_value;
static const lean_closure_object l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__1, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9_value),((lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__36_value)} };
static const lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__37 = (const lean_object*)&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__37_value;
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__0 = (const lean_object*)&l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__0_value;
static lean_once_cell_t l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__1;
static lean_once_cell_t l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__2;
static lean_once_cell_t l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__3;
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap___redArg();
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Internal_instInhabitedIndexMultiMap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_instInhabitedIndexMultiMap___closed__0;
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership___redArg();
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instDecidableMem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instDecidableMem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_hasEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_hasEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getLast_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getLast_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__0 = (const lean_object*)&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__0_value;
static const lean_string_object l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__1 = (const lean_object*)&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__1_value;
static const lean_string_object l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__2 = (const lean_object*)&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__2_value;
static lean_once_cell_t l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3;
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_IndexMultiMap_0__Std_Internal_IndexMultiMap_insert_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_IndexMultiMap_0__Std_Internal_IndexMultiMap_insert_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___redArg();
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Internal_IndexMultiMap_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_IndexMultiMap_empty___closed__0;
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_contains___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_replaceLast___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_replaceLast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_eraseMany___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_eraseMany___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_eraseMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_isEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_isEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg();
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instUnionOfEquivBEqOfLawfulHashable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instUnionOfEquivBEqOfLawfulHashable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__0(lean_object* v_a_1_, lean_object* v_b_2_, lean_object* v_d_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4_, 0, v_a_1_);
lean_ctor_set(v___x_4_, 1, v_b_2_);
v___x_5_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v_d_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg___lam__1(lean_object* v___x_6_, lean_object* v___f_7_, lean_object* v_l_8_, lean_object* v_acc_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Std_DHashMap_Internal_AssocList_foldrM___redArg(v___x_6_, v___f_7_, v_acc_9_, v_l_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = lean_unsigned_to_nat(11u);
v___x_47_ = lean_nat_to_int(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__18));
v___x_67_ = lean_string_length(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32, &l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__32);
v___x_69_ = lean_nat_to_int(v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___redArg(lean_object* v_inst_78_, lean_object* v_inst_79_, lean_object* v_x_80_){
_start:
{
lean_object* v_entries_81_; lean_object* v_indexes_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_147_; 
v_entries_81_ = lean_ctor_get(v_x_80_, 0);
v_indexes_82_ = lean_ctor_get(v_x_80_, 1);
v_isSharedCheck_147_ = !lean_is_exclusive(v_x_80_);
if (v_isSharedCheck_147_ == 0)
{
v___x_84_ = v_x_80_;
v_isShared_85_ = v_isSharedCheck_147_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_indexes_82_);
lean_inc(v_entries_81_);
lean_dec(v_x_80_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_147_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v_buckets_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_145_; 
v___x_86_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_buckets_87_ = lean_ctor_get(v_indexes_82_, 1);
v_isSharedCheck_145_ = !lean_is_exclusive(v_indexes_82_);
if (v_isSharedCheck_145_ == 0)
{
lean_object* v_unused_146_; 
v_unused_146_ = lean_ctor_get(v_indexes_82_, 0);
lean_dec(v_unused_146_);
v___x_89_ = v_indexes_82_;
v_isShared_90_ = v_isSharedCheck_145_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_buckets_87_);
lean_dec(v_indexes_82_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_145_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___f_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_91_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__14));
v___x_92_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__15));
v___f_93_ = lean_alloc_closure((void*)(l_instReprTupleOfRepr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_93_, 0, v_inst_79_);
lean_inc_ref(v_inst_78_);
v___x_94_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_94_, 0, lean_box(0));
lean_closure_set(v___x_94_, 1, lean_box(0));
lean_closure_set(v___x_94_, 2, v_inst_78_);
lean_closure_set(v___x_94_, 3, v___f_93_);
v___x_95_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19, &l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__19);
v___x_96_ = l_Array_repr___redArg(v___x_94_, v_entries_81_);
if (v_isShared_90_ == 0)
{
lean_ctor_set_tag(v___x_89_, 4);
lean_ctor_set(v___x_89_, 1, v___x_96_);
lean_ctor_set(v___x_89_, 0, v___x_95_);
v___x_98_ = v___x_89_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v___x_95_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_96_);
v___x_98_ = v_reuseFailAlloc_144_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
uint8_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_99_ = 0;
v___x_100_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set_uint8(v___x_100_, sizeof(void*)*1, v___x_99_);
if (v_isShared_85_ == 0)
{
lean_ctor_set_tag(v___x_84_, 5);
lean_ctor_set(v___x_84_, 1, v___x_100_);
lean_ctor_set(v___x_84_, 0, v___x_92_);
v___x_102_ = v___x_84_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v___x_100_);
v___x_102_ = v_reuseFailAlloc_143_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___f_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___y_115_; lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_103_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__21));
v___x_104_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = lean_box(1);
v___x_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__23));
v___x_108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_91_);
v___f_110_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__24));
v___x_111_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_111_, 0, lean_box(0));
lean_closure_set(v___x_111_, 1, lean_box(0));
lean_closure_set(v___x_111_, 2, v_inst_78_);
lean_closure_set(v___x_111_, 3, v___f_110_);
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__26));
v___x_136_ = lean_box(0);
v___x_137_ = lean_array_get_size(v_buckets_87_);
v___x_138_ = lean_nat_dec_lt(v___x_112_, v___x_137_);
if (v___x_138_ == 0)
{
lean_dec_ref(v_buckets_87_);
v___y_115_ = v___x_136_;
goto v___jp_114_;
}
else
{
lean_object* v___f_139_; size_t v___x_140_; size_t v___x_141_; lean_object* v___x_142_; 
v___f_139_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__37));
v___x_140_ = lean_usize_of_nat(v___x_137_);
v___x_141_ = ((size_t)0ULL);
v___x_142_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_86_, v___f_139_, v_buckets_87_, v___x_140_, v___x_141_, v___x_136_);
v___y_115_ = v___x_142_;
goto v___jp_114_;
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_116_ = l_List_repr___redArg(v___x_111_, v___y_115_);
v___x_117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_113_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = l_Repr_addAppParen(v___x_117_, v___x_112_);
v___x_119_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_95_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set_uint8(v___x_120_, sizeof(void*)*1, v___x_99_);
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_109_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
lean_ctor_set(v___x_122_, 1, v___x_103_);
v___x_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___x_105_);
v___x_124_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__28));
v___x_125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_91_);
v___x_127_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__30));
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_126_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_obj_once(&l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33, &l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33_once, _init_l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__33);
v___x_130_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__34));
v___x_131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v___x_128_);
v___x_132_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__35));
v___x_133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_131_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_129_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
v___x_135_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set_uint8(v___x_135_, sizeof(void*)*1, v___x_99_);
return v___x_135_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr(lean_object* v_00_u03b1_148_, lean_object* v_00_u03b2_149_, lean_object* v_inst_150_, lean_object* v_inst_151_, lean_object* v_inst_152_, lean_object* v_inst_153_, lean_object* v_x_154_, lean_object* v_prec_155_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Std_Internal_instReprIndexMultiMap_repr___redArg(v_inst_152_, v_inst_153_, v_x_154_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap_repr___boxed(lean_object* v_00_u03b1_157_, lean_object* v_00_u03b2_158_, lean_object* v_inst_159_, lean_object* v_inst_160_, lean_object* v_inst_161_, lean_object* v_inst_162_, lean_object* v_x_163_, lean_object* v_prec_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Std_Internal_instReprIndexMultiMap_repr(v_00_u03b1_157_, v_00_u03b2_158_, v_inst_159_, v_inst_160_, v_inst_161_, v_inst_162_, v_x_163_, v_prec_164_);
lean_dec(v_prec_164_);
lean_dec_ref(v_inst_160_);
lean_dec_ref(v_inst_159_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap___redArg(lean_object* v_inst_166_, lean_object* v_inst_167_, lean_object* v_inst_168_, lean_object* v_inst_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_alloc_closure((void*)(l_Std_Internal_instReprIndexMultiMap_repr___boxed), 8, 6);
lean_closure_set(v___x_170_, 0, lean_box(0));
lean_closure_set(v___x_170_, 1, lean_box(0));
lean_closure_set(v___x_170_, 2, v_inst_166_);
lean_closure_set(v___x_170_, 3, v_inst_167_);
lean_closure_set(v___x_170_, 4, v_inst_168_);
lean_closure_set(v___x_170_, 5, v_inst_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instReprIndexMultiMap(lean_object* v_00_u03b1_171_, lean_object* v_00_u03b2_172_, lean_object* v_inst_173_, lean_object* v_inst_174_, lean_object* v_inst_175_, lean_object* v_inst_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_alloc_closure((void*)(l_Std_Internal_instReprIndexMultiMap_repr___boxed), 8, 6);
lean_closure_set(v___x_177_, 0, lean_box(0));
lean_closure_set(v___x_177_, 1, lean_box(0));
lean_closure_set(v___x_177_, 2, v_inst_173_);
lean_closure_set(v___x_177_, 3, v_inst_174_);
lean_closure_set(v___x_177_, 4, v_inst_175_);
lean_closure_set(v___x_177_, 5, v_inst_176_);
return v___x_177_;
}
}
static lean_object* _init_l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__1(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_box(0);
v___x_181_ = lean_unsigned_to_nat(16u);
v___x_182_ = lean_mk_array(v___x_181_, v___x_180_);
return v___x_182_;
}
}
static lean_object* _init_l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = lean_obj_once(&l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__1, &l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__1_once, _init_l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__1);
v___x_184_ = lean_unsigned_to_nat(0u);
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v___x_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__3(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_186_ = lean_obj_once(&l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__2, &l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__2_once, _init_l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__2);
v___x_187_ = ((lean_object*)(l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__0));
v___x_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
lean_ctor_set(v___x_188_, 1, v___x_186_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap___redArg(){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lean_obj_once(&l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__3, &l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__3_once, _init_l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__3);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap___redArg___boxed(lean_object* v___dummy_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Std_Internal_instInhabitedIndexMultiMap___redArg();
return v_res_192_;
}
}
static lean_object* _init_l_Std_Internal_instInhabitedIndexMultiMap___closed__0(void){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Std_Internal_instInhabitedIndexMultiMap___redArg();
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap(lean_object* v_00_u03b1_194_, lean_object* v_00_u03b2_195_, lean_object* v_inst_196_, lean_object* v_inst_197_, lean_object* v_inst_198_, lean_object* v_inst_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_obj_once(&l_Std_Internal_instInhabitedIndexMultiMap___closed__0, &l_Std_Internal_instInhabitedIndexMultiMap___closed__0_once, _init_l_Std_Internal_instInhabitedIndexMultiMap___closed__0);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instInhabitedIndexMultiMap___boxed(lean_object* v_00_u03b1_201_, lean_object* v_00_u03b2_202_, lean_object* v_inst_203_, lean_object* v_inst_204_, lean_object* v_inst_205_, lean_object* v_inst_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Std_Internal_instInhabitedIndexMultiMap(v_00_u03b1_201_, v_00_u03b2_202_, v_inst_203_, v_inst_204_, v_inst_205_, v_inst_206_);
lean_dec(v_inst_206_);
lean_dec(v_inst_205_);
lean_dec_ref(v_inst_204_);
lean_dec_ref(v_inst_203_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership___redArg(){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = lean_box(0);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership___redArg___boxed(lean_object* v___dummy_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l_Std_Internal_IndexMultiMap_instMembership___redArg();
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership(lean_object* v_00_u03b1_212_, lean_object* v_00_u03b2_213_, lean_object* v_inst_214_, lean_object* v_inst_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lean_box(0);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instMembership___boxed(lean_object* v_00_u03b1_217_, lean_object* v_00_u03b2_218_, lean_object* v_inst_219_, lean_object* v_inst_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Std_Internal_IndexMultiMap_instMembership(v_00_u03b1_217_, v_00_u03b2_218_, v_inst_219_, v_inst_220_);
lean_dec_ref(v_inst_220_);
lean_dec_ref(v_inst_219_);
return v_res_221_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(lean_object* v_inst_222_, lean_object* v_inst_223_, lean_object* v_key_224_, lean_object* v_map_225_){
_start:
{
lean_object* v_indexes_226_; uint8_t v___x_227_; 
v_indexes_226_ = lean_ctor_get(v_map_225_, 1);
v___x_227_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_222_, v_inst_223_, v_indexes_226_, v_key_224_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instDecidableMem___redArg___boxed(lean_object* v_inst_228_, lean_object* v_inst_229_, lean_object* v_key_230_, lean_object* v_map_231_){
_start:
{
uint8_t v_res_232_; lean_object* v_r_233_; 
v_res_232_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_228_, v_inst_229_, v_key_230_, v_map_231_);
lean_dec_ref(v_map_231_);
v_r_233_ = lean_box(v_res_232_);
return v_r_233_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_instDecidableMem(lean_object* v_00_u03b1_234_, lean_object* v_00_u03b2_235_, lean_object* v_inst_236_, lean_object* v_inst_237_, lean_object* v_key_238_, lean_object* v_map_239_){
_start:
{
uint8_t v___x_240_; 
v___x_240_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_236_, v_inst_237_, v_key_238_, v_map_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instDecidableMem___boxed(lean_object* v_00_u03b1_241_, lean_object* v_00_u03b2_242_, lean_object* v_inst_243_, lean_object* v_inst_244_, lean_object* v_key_245_, lean_object* v_map_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = l_Std_Internal_IndexMultiMap_instDecidableMem(v_00_u03b1_241_, v_00_u03b2_242_, v_inst_243_, v_inst_244_, v_key_245_, v_map_246_);
lean_dec_ref(v_map_246_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0(lean_object* v___x_249_, lean_object* v_entries_250_, lean_object* v_x1_251_, lean_object* v_x2_252_, lean_object* v_x3_253_){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v_snd_256_; 
v___x_254_ = lean_array_fget_borrowed(v___x_249_, v_x1_251_);
v___x_255_ = lean_array_fget_borrowed(v_entries_250_, v___x_254_);
v_snd_256_ = lean_ctor_get(v___x_255_, 1);
lean_inc(v_snd_256_);
return v_snd_256_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed(lean_object* v___x_257_, lean_object* v_entries_258_, lean_object* v_x1_259_, lean_object* v_x2_260_, lean_object* v_x3_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0(v___x_257_, v_entries_258_, v_x1_259_, v_x2_260_, v_x3_261_);
lean_dec(v_x2_260_);
lean_dec(v_x1_259_);
lean_dec_ref(v_entries_258_);
lean_dec(v___x_257_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll___redArg(lean_object* v_inst_263_, lean_object* v_inst_264_, lean_object* v_map_265_, lean_object* v_key_266_){
_start:
{
lean_object* v_entries_267_; lean_object* v_indexes_268_; lean_object* v___x_269_; lean_object* v___f_270_; lean_object* v___x_271_; size_t v_sz_272_; size_t v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_entries_267_ = lean_ctor_get(v_map_265_, 0);
lean_inc_ref(v_entries_267_);
v_indexes_268_ = lean_ctor_get(v_map_265_, 1);
lean_inc_ref(v_indexes_268_);
lean_dec_ref(v_map_265_);
v___x_269_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_263_, v_inst_264_, v_indexes_268_, v_key_266_);
lean_dec_ref(v_indexes_268_);
lean_inc(v___x_269_);
v___f_270_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_270_, 0, v___x_269_);
lean_closure_set(v___f_270_, 1, v_entries_267_);
v___x_271_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_sz_272_ = lean_array_size(v___x_269_);
v___x_273_ = ((size_t)0ULL);
v___x_274_ = l_unsafeCast___redArg(v___x_269_);
v___x_275_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_271_, v___x_269_, v___f_270_, v_sz_272_, v___x_273_, v___x_274_);
lean_dec(v___x_269_);
v___x_276_ = l_unsafeCast___redArg(v___x_275_);
lean_dec(v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll(lean_object* v_00_u03b1_277_, lean_object* v_00_u03b2_278_, lean_object* v_inst_279_, lean_object* v_inst_280_, lean_object* v_map_281_, lean_object* v_key_282_, lean_object* v_h_283_){
_start:
{
lean_object* v_entries_284_; lean_object* v_indexes_285_; lean_object* v___x_286_; lean_object* v___f_287_; lean_object* v___x_288_; size_t v_sz_289_; size_t v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v_entries_284_ = lean_ctor_get(v_map_281_, 0);
lean_inc_ref(v_entries_284_);
v_indexes_285_ = lean_ctor_get(v_map_281_, 1);
lean_inc_ref(v_indexes_285_);
lean_dec_ref(v_map_281_);
v___x_286_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_279_, v_inst_280_, v_indexes_285_, v_key_282_);
lean_dec_ref(v_indexes_285_);
lean_inc(v___x_286_);
v___f_287_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_287_, 0, v___x_286_);
lean_closure_set(v___f_287_, 1, v_entries_284_);
v___x_288_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_sz_289_ = lean_array_size(v___x_286_);
v___x_290_ = ((size_t)0ULL);
v___x_291_ = l_unsafeCast___redArg(v___x_286_);
v___x_292_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_288_, v___x_286_, v___f_287_, v_sz_289_, v___x_290_, v___x_291_);
lean_dec(v___x_286_);
v___x_293_ = l_unsafeCast___redArg(v___x_292_);
lean_dec(v___x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___redArg(lean_object* v_inst_294_, lean_object* v_inst_295_, lean_object* v_map_296_, lean_object* v_key_297_){
_start:
{
lean_object* v_entries_298_; lean_object* v_indexes_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v_entry_302_; lean_object* v___x_303_; lean_object* v_snd_304_; 
v_entries_298_ = lean_ctor_get(v_map_296_, 0);
v_indexes_299_ = lean_ctor_get(v_map_296_, 1);
v___x_300_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_294_, v_inst_295_, v_indexes_299_, v_key_297_);
v___x_301_ = lean_unsigned_to_nat(0u);
v_entry_302_ = lean_array_fget(v___x_300_, v___x_301_);
lean_dec(v___x_300_);
v___x_303_ = lean_array_fget_borrowed(v_entries_298_, v_entry_302_);
lean_dec(v_entry_302_);
v_snd_304_ = lean_ctor_get(v___x_303_, 1);
lean_inc(v_snd_304_);
return v_snd_304_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___redArg___boxed(lean_object* v_inst_305_, lean_object* v_inst_306_, lean_object* v_map_307_, lean_object* v_key_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Std_Internal_IndexMultiMap_get___redArg(v_inst_305_, v_inst_306_, v_map_307_, v_key_308_);
lean_dec_ref(v_map_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get(lean_object* v_00_u03b1_310_, lean_object* v_00_u03b2_311_, lean_object* v_inst_312_, lean_object* v_inst_313_, lean_object* v_map_314_, lean_object* v_key_315_, lean_object* v_h_316_){
_start:
{
lean_object* v_entries_317_; lean_object* v_indexes_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v_entry_321_; lean_object* v___x_322_; lean_object* v_snd_323_; 
v_entries_317_ = lean_ctor_get(v_map_314_, 0);
v_indexes_318_ = lean_ctor_get(v_map_314_, 1);
v___x_319_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_312_, v_inst_313_, v_indexes_318_, v_key_315_);
v___x_320_ = lean_unsigned_to_nat(0u);
v_entry_321_ = lean_array_fget(v___x_319_, v___x_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_array_fget_borrowed(v_entries_317_, v_entry_321_);
lean_dec(v_entry_321_);
v_snd_323_ = lean_ctor_get(v___x_322_, 1);
lean_inc(v_snd_323_);
return v_snd_323_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get___boxed(lean_object* v_00_u03b1_324_, lean_object* v_00_u03b2_325_, lean_object* v_inst_326_, lean_object* v_inst_327_, lean_object* v_map_328_, lean_object* v_key_329_, lean_object* v_h_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l_Std_Internal_IndexMultiMap_get(v_00_u03b1_324_, v_00_u03b2_325_, v_inst_326_, v_inst_327_, v_map_328_, v_key_329_, v_h_330_);
lean_dec_ref(v_map_328_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll_x3f___redArg(lean_object* v_inst_332_, lean_object* v_inst_333_, lean_object* v_map_334_, lean_object* v_key_335_){
_start:
{
lean_object* v_entries_336_; lean_object* v_indexes_337_; uint8_t v___x_338_; 
v_entries_336_ = lean_ctor_get(v_map_334_, 0);
lean_inc_ref(v_entries_336_);
v_indexes_337_ = lean_ctor_get(v_map_334_, 1);
lean_inc_ref(v_indexes_337_);
lean_dec_ref(v_map_334_);
lean_inc(v_key_335_);
lean_inc_ref(v_inst_333_);
lean_inc_ref(v_inst_332_);
v___x_338_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_332_, v_inst_333_, v_indexes_337_, v_key_335_);
if (v___x_338_ == 0)
{
lean_object* v___x_339_; 
lean_dec_ref(v_indexes_337_);
lean_dec_ref(v_entries_336_);
lean_dec(v_key_335_);
lean_dec_ref(v_inst_333_);
lean_dec_ref(v_inst_332_);
v___x_339_ = lean_box(0);
return v___x_339_;
}
else
{
lean_object* v___x_340_; lean_object* v___f_341_; lean_object* v___x_342_; size_t v_sz_343_; size_t v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v_entries_347_; lean_object* v___x_348_; 
v___x_340_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_332_, v_inst_333_, v_indexes_337_, v_key_335_);
lean_dec_ref(v_indexes_337_);
lean_inc(v___x_340_);
v___f_341_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_341_, 0, v___x_340_);
lean_closure_set(v___f_341_, 1, v_entries_336_);
v___x_342_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_sz_343_ = lean_array_size(v___x_340_);
v___x_344_ = ((size_t)0ULL);
v___x_345_ = l_unsafeCast___redArg(v___x_340_);
v___x_346_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_342_, v___x_340_, v___f_341_, v_sz_343_, v___x_344_, v___x_345_);
lean_dec(v___x_340_);
v_entries_347_ = l_unsafeCast___redArg(v___x_346_);
lean_dec(v___x_346_);
v___x_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_348_, 0, v_entries_347_);
return v___x_348_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getAll_x3f(lean_object* v_00_u03b1_349_, lean_object* v_00_u03b2_350_, lean_object* v_inst_351_, lean_object* v_inst_352_, lean_object* v_map_353_, lean_object* v_key_354_){
_start:
{
lean_object* v_entries_355_; lean_object* v_indexes_356_; uint8_t v___x_357_; 
v_entries_355_ = lean_ctor_get(v_map_353_, 0);
lean_inc_ref(v_entries_355_);
v_indexes_356_ = lean_ctor_get(v_map_353_, 1);
lean_inc_ref(v_indexes_356_);
lean_dec_ref(v_map_353_);
lean_inc(v_key_354_);
lean_inc_ref(v_inst_352_);
lean_inc_ref(v_inst_351_);
v___x_357_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_351_, v_inst_352_, v_indexes_356_, v_key_354_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; 
lean_dec_ref(v_indexes_356_);
lean_dec_ref(v_entries_355_);
lean_dec(v_key_354_);
lean_dec_ref(v_inst_352_);
lean_dec_ref(v_inst_351_);
v___x_358_ = lean_box(0);
return v___x_358_;
}
else
{
lean_object* v___x_359_; lean_object* v___f_360_; lean_object* v___x_361_; size_t v_sz_362_; size_t v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v_entries_366_; lean_object* v___x_367_; 
v___x_359_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_351_, v_inst_352_, v_indexes_356_, v_key_354_);
lean_dec_ref(v_indexes_356_);
lean_inc(v___x_359_);
v___f_360_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_360_, 0, v___x_359_);
lean_closure_set(v___f_360_, 1, v_entries_355_);
v___x_361_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_sz_362_ = lean_array_size(v___x_359_);
v___x_363_ = ((size_t)0ULL);
v___x_364_ = l_unsafeCast___redArg(v___x_359_);
v___x_365_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_361_, v___x_359_, v___f_360_, v_sz_362_, v___x_363_, v___x_364_);
lean_dec(v___x_359_);
v_entries_366_ = l_unsafeCast___redArg(v___x_365_);
lean_dec(v___x_365_);
v___x_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_367_, 0, v_entries_366_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___redArg(lean_object* v_inst_368_, lean_object* v_inst_369_, lean_object* v_map_370_, lean_object* v_key_371_){
_start:
{
lean_object* v_entries_372_; lean_object* v_indexes_373_; uint8_t v___x_374_; 
v_entries_372_ = lean_ctor_get(v_map_370_, 0);
v_indexes_373_ = lean_ctor_get(v_map_370_, 1);
lean_inc(v_key_371_);
lean_inc_ref(v_inst_369_);
lean_inc_ref(v_inst_368_);
v___x_374_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_368_, v_inst_369_, v_indexes_373_, v_key_371_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec(v_key_371_);
lean_dec_ref(v_inst_369_);
lean_dec_ref(v_inst_368_);
v___x_375_ = lean_box(0);
return v___x_375_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_entry_378_; lean_object* v___x_379_; lean_object* v_snd_380_; lean_object* v___x_381_; 
v___x_376_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_368_, v_inst_369_, v_indexes_373_, v_key_371_);
v___x_377_ = lean_unsigned_to_nat(0u);
v_entry_378_ = lean_array_fget(v___x_376_, v___x_377_);
lean_dec(v___x_376_);
v___x_379_ = lean_array_fget_borrowed(v_entries_372_, v_entry_378_);
lean_dec(v_entry_378_);
v_snd_380_ = lean_ctor_get(v___x_379_, 1);
lean_inc(v_snd_380_);
v___x_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_381_, 0, v_snd_380_);
return v___x_381_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___redArg___boxed(lean_object* v_inst_382_, lean_object* v_inst_383_, lean_object* v_map_384_, lean_object* v_key_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Std_Internal_IndexMultiMap_get_x3f___redArg(v_inst_382_, v_inst_383_, v_map_384_, v_key_385_);
lean_dec_ref(v_map_384_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f(lean_object* v_00_u03b1_387_, lean_object* v_00_u03b2_388_, lean_object* v_inst_389_, lean_object* v_inst_390_, lean_object* v_map_391_, lean_object* v_key_392_){
_start:
{
lean_object* v_entries_393_; lean_object* v_indexes_394_; uint8_t v___x_395_; 
v_entries_393_ = lean_ctor_get(v_map_391_, 0);
v_indexes_394_ = lean_ctor_get(v_map_391_, 1);
lean_inc(v_key_392_);
lean_inc_ref(v_inst_390_);
lean_inc_ref(v_inst_389_);
v___x_395_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_389_, v_inst_390_, v_indexes_394_, v_key_392_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; 
lean_dec(v_key_392_);
lean_dec_ref(v_inst_390_);
lean_dec_ref(v_inst_389_);
v___x_396_ = lean_box(0);
return v___x_396_;
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v_entry_399_; lean_object* v___x_400_; lean_object* v_snd_401_; lean_object* v___x_402_; 
v___x_397_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_389_, v_inst_390_, v_indexes_394_, v_key_392_);
v___x_398_ = lean_unsigned_to_nat(0u);
v_entry_399_ = lean_array_fget(v___x_397_, v___x_398_);
lean_dec(v___x_397_);
v___x_400_ = lean_array_fget_borrowed(v_entries_393_, v_entry_399_);
lean_dec(v_entry_399_);
v_snd_401_ = lean_ctor_get(v___x_400_, 1);
lean_inc(v_snd_401_);
v___x_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_402_, 0, v_snd_401_);
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x3f___boxed(lean_object* v_00_u03b1_403_, lean_object* v_00_u03b2_404_, lean_object* v_inst_405_, lean_object* v_inst_406_, lean_object* v_map_407_, lean_object* v_key_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Std_Internal_IndexMultiMap_get_x3f(v_00_u03b1_403_, v_00_u03b2_404_, v_inst_405_, v_inst_406_, v_map_407_, v_key_408_);
lean_dec_ref(v_map_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1(lean_object* v_inst_410_, lean_object* v_value_411_, lean_object* v___x_412_, lean_object* v___x_413_, lean_object* v_a_414_, lean_object* v_x_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_417_; uint8_t v___x_418_; 
lean_inc(v_a_414_);
v___x_417_ = lean_apply_2(v_inst_410_, v_a_414_, v_value_411_);
v___x_418_ = lean_unbox(v___x_417_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; 
lean_dec(v_a_414_);
v___x_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_419_, 0, v___x_412_);
return v___x_419_;
}
else
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
lean_dec_ref(v___x_412_);
v___x_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_420_, 0, v_a_414_);
v___x_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
v___x_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
lean_ctor_set(v___x_422_, 1, v___x_413_);
v___x_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
return v___x_423_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1___boxed(lean_object* v_inst_424_, lean_object* v_value_425_, lean_object* v___x_426_, lean_object* v___x_427_, lean_object* v_a_428_, lean_object* v_x_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1(v_inst_424_, v_value_425_, v___x_426_, v___x_427_, v_a_428_, v_x_429_, v___y_430_);
lean_dec_ref(v___y_430_);
return v_res_431_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_hasEntry___redArg(lean_object* v_inst_435_, lean_object* v_inst_436_, lean_object* v_map_437_, lean_object* v_inst_438_, lean_object* v_key_439_, lean_object* v_value_440_){
_start:
{
lean_object* v_entries_441_; lean_object* v_indexes_442_; uint8_t v___x_443_; 
v_entries_441_ = lean_ctor_get(v_map_437_, 0);
lean_inc_ref(v_entries_441_);
v_indexes_442_ = lean_ctor_get(v_map_437_, 1);
lean_inc_ref(v_indexes_442_);
lean_dec_ref(v_map_437_);
lean_inc(v_key_439_);
lean_inc_ref(v_inst_436_);
lean_inc_ref(v_inst_435_);
v___x_443_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_435_, v_inst_436_, v_indexes_442_, v_key_439_);
if (v___x_443_ == 0)
{
lean_dec_ref(v_indexes_442_);
lean_dec_ref(v_entries_441_);
lean_dec(v_value_440_);
lean_dec(v_key_439_);
lean_dec_ref(v_inst_438_);
lean_dec_ref(v_inst_436_);
lean_dec_ref(v_inst_435_);
return v___x_443_;
}
else
{
lean_object* v___x_444_; lean_object* v___f_445_; lean_object* v___x_446_; size_t v_sz_447_; size_t v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v_entries_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___f_454_; size_t v_sz_455_; lean_object* v___x_456_; lean_object* v_fst_457_; 
v___x_444_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_435_, v_inst_436_, v_indexes_442_, v_key_439_);
lean_dec_ref(v_indexes_442_);
lean_inc(v___x_444_);
v___f_445_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_445_, 0, v___x_444_);
lean_closure_set(v___f_445_, 1, v_entries_441_);
v___x_446_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_sz_447_ = lean_array_size(v___x_444_);
v___x_448_ = ((size_t)0ULL);
v___x_449_ = l_unsafeCast___redArg(v___x_444_);
v___x_450_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_446_, v___x_444_, v___f_445_, v_sz_447_, v___x_448_, v___x_449_);
lean_dec(v___x_444_);
v_entries_451_ = l_unsafeCast___redArg(v___x_450_);
lean_dec(v___x_450_);
v___x_452_ = lean_box(0);
v___x_453_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0));
v___f_454_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1___boxed), 7, 4);
lean_closure_set(v___f_454_, 0, v_inst_438_);
lean_closure_set(v___f_454_, 1, v_value_440_);
lean_closure_set(v___f_454_, 2, v___x_453_);
lean_closure_set(v___f_454_, 3, v___x_452_);
v_sz_455_ = lean_array_size(v_entries_451_);
v___x_456_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_446_, v_entries_451_, v___f_454_, v_sz_455_, v___x_448_, v___x_453_);
v_fst_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_fst_457_);
lean_dec(v___x_456_);
if (lean_obj_tag(v_fst_457_) == 0)
{
uint8_t v___x_458_; 
v___x_458_ = 0;
return v___x_458_;
}
else
{
lean_object* v_val_459_; 
v_val_459_ = lean_ctor_get(v_fst_457_, 0);
lean_inc(v_val_459_);
lean_dec_ref_known(v_fst_457_, 1);
if (lean_obj_tag(v_val_459_) == 0)
{
uint8_t v___x_460_; 
v___x_460_ = 0;
return v___x_460_;
}
else
{
lean_dec_ref_known(v_val_459_, 1);
return v___x_443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___redArg___boxed(lean_object* v_inst_461_, lean_object* v_inst_462_, lean_object* v_map_463_, lean_object* v_inst_464_, lean_object* v_key_465_, lean_object* v_value_466_){
_start:
{
uint8_t v_res_467_; lean_object* v_r_468_; 
v_res_467_ = l_Std_Internal_IndexMultiMap_hasEntry___redArg(v_inst_461_, v_inst_462_, v_map_463_, v_inst_464_, v_key_465_, v_value_466_);
v_r_468_ = lean_box(v_res_467_);
return v_r_468_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_hasEntry(lean_object* v_00_u03b1_469_, lean_object* v_00_u03b2_470_, lean_object* v_inst_471_, lean_object* v_inst_472_, lean_object* v_map_473_, lean_object* v_inst_474_, lean_object* v_key_475_, lean_object* v_value_476_){
_start:
{
lean_object* v_entries_477_; lean_object* v_indexes_478_; uint8_t v___x_479_; 
v_entries_477_ = lean_ctor_get(v_map_473_, 0);
lean_inc_ref(v_entries_477_);
v_indexes_478_ = lean_ctor_get(v_map_473_, 1);
lean_inc_ref(v_indexes_478_);
lean_dec_ref(v_map_473_);
lean_inc(v_key_475_);
lean_inc_ref(v_inst_472_);
lean_inc_ref(v_inst_471_);
v___x_479_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_471_, v_inst_472_, v_indexes_478_, v_key_475_);
if (v___x_479_ == 0)
{
lean_dec_ref(v_indexes_478_);
lean_dec_ref(v_entries_477_);
lean_dec(v_value_476_);
lean_dec(v_key_475_);
lean_dec_ref(v_inst_474_);
lean_dec_ref(v_inst_472_);
lean_dec_ref(v_inst_471_);
return v___x_479_;
}
else
{
lean_object* v___x_480_; lean_object* v___f_481_; lean_object* v___x_482_; size_t v_sz_483_; size_t v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v_entries_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___f_490_; size_t v_sz_491_; lean_object* v___x_492_; lean_object* v_fst_493_; 
v___x_480_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_471_, v_inst_472_, v_indexes_478_, v_key_475_);
lean_dec_ref(v_indexes_478_);
lean_inc(v___x_480_);
v___f_481_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_481_, 0, v___x_480_);
lean_closure_set(v___f_481_, 1, v_entries_477_);
v___x_482_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_sz_483_ = lean_array_size(v___x_480_);
v___x_484_ = ((size_t)0ULL);
v___x_485_ = l_unsafeCast___redArg(v___x_480_);
v___x_486_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_482_, v___x_480_, v___f_481_, v_sz_483_, v___x_484_, v___x_485_);
lean_dec(v___x_480_);
v_entries_487_ = l_unsafeCast___redArg(v___x_486_);
lean_dec(v___x_486_);
v___x_488_ = lean_box(0);
v___x_489_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_hasEntry___redArg___closed__0));
v___f_490_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_hasEntry___redArg___lam__1___boxed), 7, 4);
lean_closure_set(v___f_490_, 0, v_inst_474_);
lean_closure_set(v___f_490_, 1, v_value_476_);
lean_closure_set(v___f_490_, 2, v___x_489_);
lean_closure_set(v___f_490_, 3, v___x_488_);
v_sz_491_ = lean_array_size(v_entries_487_);
v___x_492_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_482_, v_entries_487_, v___f_490_, v_sz_491_, v___x_484_, v___x_489_);
v_fst_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc(v_fst_493_);
lean_dec(v___x_492_);
if (lean_obj_tag(v_fst_493_) == 0)
{
uint8_t v___x_494_; 
v___x_494_ = 0;
return v___x_494_;
}
else
{
lean_object* v_val_495_; 
v_val_495_ = lean_ctor_get(v_fst_493_, 0);
lean_inc(v_val_495_);
lean_dec_ref_known(v_fst_493_, 1);
if (lean_obj_tag(v_val_495_) == 0)
{
uint8_t v___x_496_; 
v___x_496_ = 0;
return v___x_496_;
}
else
{
lean_dec_ref_known(v_val_495_, 1);
return v___x_479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_hasEntry___boxed(lean_object* v_00_u03b1_497_, lean_object* v_00_u03b2_498_, lean_object* v_inst_499_, lean_object* v_inst_500_, lean_object* v_map_501_, lean_object* v_inst_502_, lean_object* v_key_503_, lean_object* v_value_504_){
_start:
{
uint8_t v_res_505_; lean_object* v_r_506_; 
v_res_505_ = l_Std_Internal_IndexMultiMap_hasEntry(v_00_u03b1_497_, v_00_u03b2_498_, v_inst_499_, v_inst_500_, v_map_501_, v_inst_502_, v_key_503_, v_value_504_);
v_r_506_ = lean_box(v_res_505_);
return v_r_506_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getLast_x3f___redArg(lean_object* v_inst_507_, lean_object* v_inst_508_, lean_object* v_map_509_, lean_object* v_key_510_){
_start:
{
lean_object* v_entries_511_; lean_object* v_indexes_512_; uint8_t v___x_513_; 
v_entries_511_ = lean_ctor_get(v_map_509_, 0);
lean_inc_ref(v_entries_511_);
v_indexes_512_ = lean_ctor_get(v_map_509_, 1);
lean_inc_ref(v_indexes_512_);
lean_dec_ref(v_map_509_);
lean_inc(v_key_510_);
lean_inc_ref(v_inst_508_);
lean_inc_ref(v_inst_507_);
v___x_513_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_507_, v_inst_508_, v_indexes_512_, v_key_510_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; 
lean_dec_ref(v_indexes_512_);
lean_dec_ref(v_entries_511_);
lean_dec(v_key_510_);
lean_dec_ref(v_inst_508_);
lean_dec_ref(v_inst_507_);
v___x_514_ = lean_box(0);
return v___x_514_;
}
else
{
lean_object* v___x_515_; lean_object* v___f_516_; lean_object* v___x_517_; size_t v_sz_518_; size_t v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v_entries_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_515_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_507_, v_inst_508_, v_indexes_512_, v_key_510_);
lean_dec_ref(v_indexes_512_);
lean_inc(v___x_515_);
v___f_516_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_516_, 0, v___x_515_);
lean_closure_set(v___f_516_, 1, v_entries_511_);
v___x_517_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_sz_518_ = lean_array_size(v___x_515_);
v___x_519_ = ((size_t)0ULL);
v___x_520_ = l_unsafeCast___redArg(v___x_515_);
v___x_521_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_517_, v___x_515_, v___f_516_, v_sz_518_, v___x_519_, v___x_520_);
lean_dec(v___x_515_);
v_entries_522_ = l_unsafeCast___redArg(v___x_521_);
lean_dec(v___x_521_);
v___x_523_ = lean_array_get_size(v_entries_522_);
v___x_524_ = lean_unsigned_to_nat(1u);
v___x_525_ = lean_nat_sub(v___x_523_, v___x_524_);
v___x_526_ = lean_nat_dec_lt(v___x_525_, v___x_523_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; 
lean_dec(v___x_525_);
lean_dec(v_entries_522_);
v___x_527_ = lean_box(0);
return v___x_527_;
}
else
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_array_fget(v_entries_522_, v___x_525_);
lean_dec(v___x_525_);
lean_dec(v_entries_522_);
v___x_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
return v___x_529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getLast_x3f(lean_object* v_00_u03b1_530_, lean_object* v_00_u03b2_531_, lean_object* v_inst_532_, lean_object* v_inst_533_, lean_object* v_map_534_, lean_object* v_key_535_){
_start:
{
lean_object* v_entries_536_; lean_object* v_indexes_537_; uint8_t v___x_538_; 
v_entries_536_ = lean_ctor_get(v_map_534_, 0);
lean_inc_ref(v_entries_536_);
v_indexes_537_ = lean_ctor_get(v_map_534_, 1);
lean_inc_ref(v_indexes_537_);
lean_dec_ref(v_map_534_);
lean_inc(v_key_535_);
lean_inc_ref(v_inst_533_);
lean_inc_ref(v_inst_532_);
v___x_538_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_532_, v_inst_533_, v_indexes_537_, v_key_535_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; 
lean_dec_ref(v_indexes_537_);
lean_dec_ref(v_entries_536_);
lean_dec(v_key_535_);
lean_dec_ref(v_inst_533_);
lean_dec_ref(v_inst_532_);
v___x_539_ = lean_box(0);
return v___x_539_;
}
else
{
lean_object* v___x_540_; lean_object* v___f_541_; lean_object* v___x_542_; size_t v_sz_543_; size_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v_entries_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_540_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_532_, v_inst_533_, v_indexes_537_, v_key_535_);
lean_dec_ref(v_indexes_537_);
lean_inc(v___x_540_);
v___f_541_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_getAll___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_541_, 0, v___x_540_);
lean_closure_set(v___f_541_, 1, v_entries_536_);
v___x_542_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v_sz_543_ = lean_array_size(v___x_540_);
v___x_544_ = ((size_t)0ULL);
v___x_545_ = l_unsafeCast___redArg(v___x_540_);
v___x_546_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_542_, v___x_540_, v___f_541_, v_sz_543_, v___x_544_, v___x_545_);
lean_dec(v___x_540_);
v_entries_547_ = l_unsafeCast___redArg(v___x_546_);
lean_dec(v___x_546_);
v___x_548_ = lean_array_get_size(v_entries_547_);
v___x_549_ = lean_unsigned_to_nat(1u);
v___x_550_ = lean_nat_sub(v___x_548_, v___x_549_);
v___x_551_ = lean_nat_dec_lt(v___x_550_, v___x_548_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; 
lean_dec(v___x_550_);
lean_dec(v_entries_547_);
v___x_552_ = lean_box(0);
return v___x_552_;
}
else
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_array_fget(v_entries_547_, v___x_550_);
lean_dec(v___x_550_);
lean_dec(v_entries_547_);
v___x_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
return v___x_554_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___redArg(lean_object* v_inst_555_, lean_object* v_inst_556_, lean_object* v_map_557_, lean_object* v_key_558_, lean_object* v_d_559_){
_start:
{
lean_object* v_entries_560_; lean_object* v_indexes_561_; uint8_t v___x_562_; 
v_entries_560_ = lean_ctor_get(v_map_557_, 0);
v_indexes_561_ = lean_ctor_get(v_map_557_, 1);
lean_inc(v_key_558_);
lean_inc_ref(v_inst_556_);
lean_inc_ref(v_inst_555_);
v___x_562_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_555_, v_inst_556_, v_indexes_561_, v_key_558_);
if (v___x_562_ == 0)
{
lean_dec(v_key_558_);
lean_dec_ref(v_inst_556_);
lean_dec_ref(v_inst_555_);
lean_inc(v_d_559_);
return v_d_559_;
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v_entry_565_; lean_object* v___x_566_; lean_object* v_snd_567_; 
v___x_563_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_555_, v_inst_556_, v_indexes_561_, v_key_558_);
v___x_564_ = lean_unsigned_to_nat(0u);
v_entry_565_ = lean_array_fget(v___x_563_, v___x_564_);
lean_dec(v___x_563_);
v___x_566_ = lean_array_fget_borrowed(v_entries_560_, v_entry_565_);
lean_dec(v_entry_565_);
v_snd_567_ = lean_ctor_get(v___x_566_, 1);
lean_inc(v_snd_567_);
return v_snd_567_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___redArg___boxed(lean_object* v_inst_568_, lean_object* v_inst_569_, lean_object* v_map_570_, lean_object* v_key_571_, lean_object* v_d_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Std_Internal_IndexMultiMap_getD___redArg(v_inst_568_, v_inst_569_, v_map_570_, v_key_571_, v_d_572_);
lean_dec(v_d_572_);
lean_dec_ref(v_map_570_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD(lean_object* v_00_u03b1_574_, lean_object* v_00_u03b2_575_, lean_object* v_inst_576_, lean_object* v_inst_577_, lean_object* v_map_578_, lean_object* v_key_579_, lean_object* v_d_580_){
_start:
{
lean_object* v_entries_581_; lean_object* v_indexes_582_; uint8_t v___x_583_; 
v_entries_581_ = lean_ctor_get(v_map_578_, 0);
v_indexes_582_ = lean_ctor_get(v_map_578_, 1);
lean_inc(v_key_579_);
lean_inc_ref(v_inst_577_);
lean_inc_ref(v_inst_576_);
v___x_583_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_576_, v_inst_577_, v_indexes_582_, v_key_579_);
if (v___x_583_ == 0)
{
lean_dec(v_key_579_);
lean_dec_ref(v_inst_577_);
lean_dec_ref(v_inst_576_);
lean_inc(v_d_580_);
return v_d_580_;
}
else
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v_entry_586_; lean_object* v___x_587_; lean_object* v_snd_588_; 
v___x_584_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_576_, v_inst_577_, v_indexes_582_, v_key_579_);
v___x_585_ = lean_unsigned_to_nat(0u);
v_entry_586_ = lean_array_fget(v___x_584_, v___x_585_);
lean_dec(v___x_584_);
v___x_587_ = lean_array_fget_borrowed(v_entries_581_, v_entry_586_);
lean_dec(v_entry_586_);
v_snd_588_ = lean_ctor_get(v___x_587_, 1);
lean_inc(v_snd_588_);
return v_snd_588_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_getD___boxed(lean_object* v_00_u03b1_589_, lean_object* v_00_u03b2_590_, lean_object* v_inst_591_, lean_object* v_inst_592_, lean_object* v_map_593_, lean_object* v_key_594_, lean_object* v_d_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Std_Internal_IndexMultiMap_getD(v_00_u03b1_589_, v_00_u03b2_590_, v_inst_591_, v_inst_592_, v_map_593_, v_key_594_, v_d_595_);
lean_dec(v_d_595_);
lean_dec_ref(v_map_593_);
return v_res_596_;
}
}
static lean_object* _init_l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_600_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__2));
v___x_601_ = lean_unsigned_to_nat(14u);
v___x_602_ = lean_unsigned_to_nat(22u);
v___x_603_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__1));
v___x_604_ = ((lean_object*)(l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__0));
v___x_605_ = l_mkPanicMessageWithDecl(v___x_604_, v___x_603_, v___x_602_, v___x_601_, v___x_600_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg(lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v_inst_608_, lean_object* v_map_609_, lean_object* v_key_610_){
_start:
{
lean_object* v_entries_611_; lean_object* v_indexes_612_; uint8_t v___x_613_; 
v_entries_611_ = lean_ctor_get(v_map_609_, 0);
v_indexes_612_ = lean_ctor_get(v_map_609_, 1);
lean_inc(v_key_610_);
lean_inc_ref(v_inst_607_);
lean_inc_ref(v_inst_606_);
v___x_613_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_606_, v_inst_607_, v_indexes_612_, v_key_610_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; 
lean_dec(v_key_610_);
lean_dec_ref(v_inst_607_);
lean_dec_ref(v_inst_606_);
v___x_614_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3, &l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3_once, _init_l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3);
v___x_615_ = l_panic___redArg(v_inst_608_, v___x_614_);
return v___x_615_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v_entry_618_; lean_object* v___x_619_; lean_object* v_snd_620_; 
v___x_616_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_606_, v_inst_607_, v_indexes_612_, v_key_610_);
v___x_617_ = lean_unsigned_to_nat(0u);
v_entry_618_ = lean_array_fget(v___x_616_, v___x_617_);
lean_dec(v___x_616_);
v___x_619_ = lean_array_fget_borrowed(v_entries_611_, v_entry_618_);
lean_dec(v_entry_618_);
v_snd_620_ = lean_ctor_get(v___x_619_, 1);
lean_inc(v_snd_620_);
return v_snd_620_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___redArg___boxed(lean_object* v_inst_621_, lean_object* v_inst_622_, lean_object* v_inst_623_, lean_object* v_map_624_, lean_object* v_key_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Std_Internal_IndexMultiMap_get_x21___redArg(v_inst_621_, v_inst_622_, v_inst_623_, v_map_624_, v_key_625_);
lean_dec_ref(v_map_624_);
lean_dec(v_inst_623_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21(lean_object* v_00_u03b1_627_, lean_object* v_00_u03b2_628_, lean_object* v_inst_629_, lean_object* v_inst_630_, lean_object* v_inst_631_, lean_object* v_map_632_, lean_object* v_key_633_){
_start:
{
lean_object* v_entries_634_; lean_object* v_indexes_635_; uint8_t v___x_636_; 
v_entries_634_ = lean_ctor_get(v_map_632_, 0);
v_indexes_635_ = lean_ctor_get(v_map_632_, 1);
lean_inc(v_key_633_);
lean_inc_ref(v_inst_630_);
lean_inc_ref(v_inst_629_);
v___x_636_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_629_, v_inst_630_, v_indexes_635_, v_key_633_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; lean_object* v___x_638_; 
lean_dec(v_key_633_);
lean_dec_ref(v_inst_630_);
lean_dec_ref(v_inst_629_);
v___x_637_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3, &l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3_once, _init_l_Std_Internal_IndexMultiMap_get_x21___redArg___closed__3);
v___x_638_ = l_panic___redArg(v_inst_631_, v___x_637_);
return v___x_638_;
}
else
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v_entry_641_; lean_object* v___x_642_; lean_object* v_snd_643_; 
v___x_639_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_629_, v_inst_630_, v_indexes_635_, v_key_633_);
v___x_640_ = lean_unsigned_to_nat(0u);
v_entry_641_ = lean_array_fget(v___x_639_, v___x_640_);
lean_dec(v___x_639_);
v___x_642_ = lean_array_fget_borrowed(v_entries_634_, v_entry_641_);
lean_dec(v_entry_641_);
v_snd_643_ = lean_ctor_get(v___x_642_, 1);
lean_inc(v_snd_643_);
return v_snd_643_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_get_x21___boxed(lean_object* v_00_u03b1_644_, lean_object* v_00_u03b2_645_, lean_object* v_inst_646_, lean_object* v_inst_647_, lean_object* v_inst_648_, lean_object* v_map_649_, lean_object* v_key_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_Std_Internal_IndexMultiMap_get_x21(v_00_u03b1_644_, v_00_u03b2_645_, v_inst_646_, v_inst_647_, v_inst_648_, v_map_649_, v_key_650_);
lean_dec_ref(v_map_649_);
lean_dec(v_inst_648_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_IndexMultiMap_0__Std_Internal_IndexMultiMap_insert_match__1_splitter___redArg(lean_object* v_x_652_, lean_object* v_h__1_653_, lean_object* v_h__2_654_){
_start:
{
if (lean_obj_tag(v_x_652_) == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; 
lean_dec(v_h__1_653_);
v___x_655_ = lean_box(0);
v___x_656_ = lean_apply_1(v_h__2_654_, v___x_655_);
return v___x_656_;
}
else
{
lean_object* v_val_657_; lean_object* v___x_658_; 
lean_dec(v_h__2_654_);
v_val_657_ = lean_ctor_get(v_x_652_, 0);
lean_inc(v_val_657_);
lean_dec_ref_known(v_x_652_, 1);
v___x_658_ = lean_apply_1(v_h__1_653_, v_val_657_);
return v___x_658_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Internal_IndexMultiMap_0__Std_Internal_IndexMultiMap_insert_match__1_splitter(lean_object* v_motive_659_, lean_object* v_x_660_, lean_object* v_h__1_661_, lean_object* v_h__2_662_){
_start:
{
if (lean_obj_tag(v_x_660_) == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; 
lean_dec(v_h__1_661_);
v___x_663_ = lean_box(0);
v___x_664_ = lean_apply_1(v_h__2_662_, v___x_663_);
return v___x_664_;
}
else
{
lean_object* v_val_665_; lean_object* v___x_666_; 
lean_dec(v_h__2_662_);
v_val_665_ = lean_ctor_get(v_x_660_, 0);
lean_inc(v_val_665_);
lean_dec_ref_known(v_x_660_, 1);
v___x_666_ = lean_apply_1(v_h__1_661_, v_val_665_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert___redArg___lam__0(lean_object* v_i_667_, lean_object* v_x_668_){
_start:
{
if (lean_obj_tag(v_x_668_) == 0)
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_669_ = lean_unsigned_to_nat(1u);
v___x_670_ = lean_mk_empty_array_with_capacity(v___x_669_);
v___x_671_ = lean_array_push(v___x_670_, v_i_667_);
v___x_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
else
{
lean_object* v_val_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_681_; 
v_val_673_ = lean_ctor_get(v_x_668_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v_x_668_);
if (v_isSharedCheck_681_ == 0)
{
v___x_675_ = v_x_668_;
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_val_673_);
lean_dec(v_x_668_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_677_ = lean_array_push(v_val_673_, v_i_667_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_677_);
v___x_679_ = v___x_675_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert___redArg(lean_object* v_inst_682_, lean_object* v_inst_683_, lean_object* v_map_684_, lean_object* v_key_685_, lean_object* v_value_686_){
_start:
{
lean_object* v_entries_687_; lean_object* v_indexes_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_700_; 
v_entries_687_ = lean_ctor_get(v_map_684_, 0);
v_indexes_688_ = lean_ctor_get(v_map_684_, 1);
v_isSharedCheck_700_ = !lean_is_exclusive(v_map_684_);
if (v_isSharedCheck_700_ == 0)
{
v___x_690_ = v_map_684_;
v_isShared_691_ = v_isSharedCheck_700_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_indexes_688_);
lean_inc(v_entries_687_);
lean_dec(v_map_684_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_700_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_i_692_; lean_object* v_f_693_; lean_object* v___x_694_; lean_object* v_entries_695_; lean_object* v_indexes_696_; lean_object* v___x_698_; 
v_i_692_ = lean_array_get_size(v_entries_687_);
v_f_693_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_693_, 0, v_i_692_);
lean_inc(v_key_685_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v_key_685_);
lean_ctor_set(v___x_694_, 1, v_value_686_);
v_entries_695_ = lean_array_push(v_entries_687_, v___x_694_);
v_indexes_696_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_682_, v_inst_683_, v_indexes_688_, v_key_685_, v_f_693_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 1, v_indexes_696_);
lean_ctor_set(v___x_690_, 0, v_entries_695_);
v___x_698_ = v___x_690_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_entries_695_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_indexes_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insert(lean_object* v_00_u03b1_701_, lean_object* v_00_u03b2_702_, lean_object* v_inst_703_, lean_object* v_inst_704_, lean_object* v_inst_705_, lean_object* v_inst_706_, lean_object* v_map_707_, lean_object* v_key_708_, lean_object* v_value_709_){
_start:
{
lean_object* v_entries_710_; lean_object* v_indexes_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_723_; 
v_entries_710_ = lean_ctor_get(v_map_707_, 0);
v_indexes_711_ = lean_ctor_get(v_map_707_, 1);
v_isSharedCheck_723_ = !lean_is_exclusive(v_map_707_);
if (v_isSharedCheck_723_ == 0)
{
v___x_713_ = v_map_707_;
v_isShared_714_ = v_isSharedCheck_723_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_indexes_711_);
lean_inc(v_entries_710_);
lean_dec(v_map_707_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_723_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v_i_715_; lean_object* v_f_716_; lean_object* v___x_717_; lean_object* v_entries_718_; lean_object* v_indexes_719_; lean_object* v___x_721_; 
v_i_715_ = lean_array_get_size(v_entries_710_);
v_f_716_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_716_, 0, v_i_715_);
lean_inc(v_key_708_);
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v_key_708_);
lean_ctor_set(v___x_717_, 1, v_value_709_);
v_entries_718_ = lean_array_push(v_entries_710_, v___x_717_);
v_indexes_719_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_703_, v_inst_704_, v_indexes_711_, v_key_708_, v_f_716_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 1, v_indexes_719_);
lean_ctor_set(v___x_713_, 0, v_entries_718_);
v___x_721_ = v___x_713_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_entries_718_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v_indexes_719_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany___redArg___lam__1(lean_object* v_key_724_, lean_object* v_inst_725_, lean_object* v_inst_726_, lean_object* v_x1_727_, lean_object* v_x2_728_){
_start:
{
lean_object* v_entries_729_; lean_object* v_indexes_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_742_; 
v_entries_729_ = lean_ctor_get(v_x1_727_, 0);
v_indexes_730_ = lean_ctor_get(v_x1_727_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v_x1_727_);
if (v_isSharedCheck_742_ == 0)
{
v___x_732_ = v_x1_727_;
v_isShared_733_ = v_isSharedCheck_742_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_indexes_730_);
lean_inc(v_entries_729_);
lean_dec(v_x1_727_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_742_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v_i_734_; lean_object* v_f_735_; lean_object* v___x_736_; lean_object* v_entries_737_; lean_object* v_indexes_738_; lean_object* v___x_740_; 
v_i_734_ = lean_array_get_size(v_entries_729_);
v_f_735_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_735_, 0, v_i_734_);
lean_inc(v_key_724_);
v___x_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_736_, 0, v_key_724_);
lean_ctor_set(v___x_736_, 1, v_x2_728_);
v_entries_737_ = lean_array_push(v_entries_729_, v___x_736_);
v_indexes_738_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_725_, v_inst_726_, v_indexes_730_, v_key_724_, v_f_735_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v_indexes_738_);
lean_ctor_set(v___x_732_, 0, v_entries_737_);
v___x_740_ = v___x_732_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_entries_737_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_indexes_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany___redArg(lean_object* v_inst_743_, lean_object* v_inst_744_, lean_object* v_map_745_, lean_object* v_key_746_, lean_object* v_values_747_){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; uint8_t v___x_751_; 
v___x_748_ = lean_unsigned_to_nat(0u);
v___x_749_ = lean_array_get_size(v_values_747_);
v___x_750_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_751_ = lean_nat_dec_lt(v___x_748_, v___x_749_);
if (v___x_751_ == 0)
{
lean_dec_ref(v_values_747_);
lean_dec(v_key_746_);
lean_dec_ref(v_inst_744_);
lean_dec_ref(v_inst_743_);
return v_map_745_;
}
else
{
lean_object* v___f_752_; uint8_t v___x_753_; 
v___f_752_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insertMany___redArg___lam__1), 5, 3);
lean_closure_set(v___f_752_, 0, v_key_746_);
lean_closure_set(v___f_752_, 1, v_inst_743_);
lean_closure_set(v___f_752_, 2, v_inst_744_);
v___x_753_ = lean_nat_dec_le(v___x_749_, v___x_749_);
if (v___x_753_ == 0)
{
if (v___x_751_ == 0)
{
lean_dec_ref(v___f_752_);
lean_dec_ref(v_values_747_);
return v_map_745_;
}
else
{
size_t v___x_754_; size_t v___x_755_; lean_object* v___x_756_; 
v___x_754_ = ((size_t)0ULL);
v___x_755_ = lean_usize_of_nat(v___x_749_);
v___x_756_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_750_, v___f_752_, v_values_747_, v___x_754_, v___x_755_, v_map_745_);
return v___x_756_;
}
}
else
{
size_t v___x_757_; size_t v___x_758_; lean_object* v___x_759_; 
v___x_757_ = ((size_t)0ULL);
v___x_758_ = lean_usize_of_nat(v___x_749_);
v___x_759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_750_, v___f_752_, v_values_747_, v___x_757_, v___x_758_, v_map_745_);
return v___x_759_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_insertMany(lean_object* v_00_u03b1_760_, lean_object* v_00_u03b2_761_, lean_object* v_inst_762_, lean_object* v_inst_763_, lean_object* v_inst_764_, lean_object* v_inst_765_, lean_object* v_map_766_, lean_object* v_key_767_, lean_object* v_values_768_){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = lean_array_get_size(v_values_768_);
v___x_771_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_772_ = lean_nat_dec_lt(v___x_769_, v___x_770_);
if (v___x_772_ == 0)
{
lean_dec_ref(v_values_768_);
lean_dec(v_key_767_);
lean_dec_ref(v_inst_763_);
lean_dec_ref(v_inst_762_);
return v_map_766_;
}
else
{
lean_object* v___f_773_; uint8_t v___x_774_; 
v___f_773_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insertMany___redArg___lam__1), 5, 3);
lean_closure_set(v___f_773_, 0, v_key_767_);
lean_closure_set(v___f_773_, 1, v_inst_762_);
lean_closure_set(v___f_773_, 2, v_inst_763_);
v___x_774_ = lean_nat_dec_le(v___x_770_, v___x_770_);
if (v___x_774_ == 0)
{
if (v___x_772_ == 0)
{
lean_dec_ref(v___f_773_);
lean_dec_ref(v_values_768_);
return v_map_766_;
}
else
{
size_t v___x_775_; size_t v___x_776_; lean_object* v___x_777_; 
v___x_775_ = ((size_t)0ULL);
v___x_776_ = lean_usize_of_nat(v___x_770_);
v___x_777_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_771_, v___f_773_, v_values_768_, v___x_775_, v___x_776_, v_map_766_);
return v___x_777_;
}
}
else
{
size_t v___x_778_; size_t v___x_779_; lean_object* v___x_780_; 
v___x_778_ = ((size_t)0ULL);
v___x_779_ = lean_usize_of_nat(v___x_770_);
v___x_780_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_771_, v___f_773_, v_values_768_, v___x_778_, v___x_779_, v_map_766_);
return v___x_780_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___redArg(){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = lean_obj_once(&l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__3, &l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__3_once, _init_l_Std_Internal_instInhabitedIndexMultiMap___redArg___closed__3);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___redArg___boxed(lean_object* v___dummy_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Std_Internal_IndexMultiMap_empty___redArg();
return v_res_784_;
}
}
static lean_object* _init_l_Std_Internal_IndexMultiMap_empty___closed__0(void){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = l_Std_Internal_IndexMultiMap_empty___redArg();
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty(lean_object* v_00_u03b1_786_, lean_object* v_00_u03b2_787_, lean_object* v_inst_788_, lean_object* v_inst_789_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_empty___boxed(lean_object* v_00_u03b1_791_, lean_object* v_00_u03b2_792_, lean_object* v_inst_793_, lean_object* v_inst_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Std_Internal_IndexMultiMap_empty(v_00_u03b1_791_, v_00_u03b2_792_, v_inst_793_, v_inst_794_);
lean_dec_ref(v_inst_794_);
lean_dec_ref(v_inst_793_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___redArg___lam__1(lean_object* v_inst_796_, lean_object* v_inst_797_, lean_object* v_acc_798_, lean_object* v_x_799_){
_start:
{
lean_object* v_fst_800_; lean_object* v_entries_801_; lean_object* v_indexes_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_813_; 
v_fst_800_ = lean_ctor_get(v_x_799_, 0);
lean_inc(v_fst_800_);
v_entries_801_ = lean_ctor_get(v_acc_798_, 0);
v_indexes_802_ = lean_ctor_get(v_acc_798_, 1);
v_isSharedCheck_813_ = !lean_is_exclusive(v_acc_798_);
if (v_isSharedCheck_813_ == 0)
{
v___x_804_ = v_acc_798_;
v_isShared_805_ = v_isSharedCheck_813_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_indexes_802_);
lean_inc(v_entries_801_);
lean_dec(v_acc_798_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_813_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v_i_806_; lean_object* v_f_807_; lean_object* v_entries_808_; lean_object* v_indexes_809_; lean_object* v___x_811_; 
v_i_806_ = lean_array_get_size(v_entries_801_);
v_f_807_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_807_, 0, v_i_806_);
v_entries_808_ = lean_array_push(v_entries_801_, v_x_799_);
v_indexes_809_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_796_, v_inst_797_, v_indexes_802_, v_fst_800_, v_f_807_);
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 1, v_indexes_809_);
lean_ctor_set(v___x_804_, 0, v_entries_808_);
v___x_811_ = v___x_804_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_entries_808_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v_indexes_809_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList___redArg(lean_object* v_inst_814_, lean_object* v_inst_815_, lean_object* v_pairs_816_){
_start:
{
lean_object* v___f_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___f_817_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_ofList___redArg___lam__1), 4, 2);
lean_closure_set(v___f_817_, 0, v_inst_814_);
lean_closure_set(v___f_817_, 1, v_inst_815_);
v___x_818_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
v___x_819_ = l_List_foldl___redArg(v___f_817_, v___x_818_, v_pairs_816_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_ofList(lean_object* v_00_u03b1_820_, lean_object* v_00_u03b2_821_, lean_object* v_inst_822_, lean_object* v_inst_823_, lean_object* v_inst_824_, lean_object* v_inst_825_, lean_object* v_pairs_826_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Std_Internal_IndexMultiMap_ofList___redArg(v_inst_822_, v_inst_823_, v_pairs_826_);
return v___x_827_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_contains___redArg(lean_object* v_inst_828_, lean_object* v_inst_829_, lean_object* v_map_830_, lean_object* v_key_831_){
_start:
{
lean_object* v_indexes_832_; uint8_t v___x_833_; 
v_indexes_832_ = lean_ctor_get(v_map_830_, 1);
v___x_833_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_828_, v_inst_829_, v_indexes_832_, v_key_831_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_contains___redArg___boxed(lean_object* v_inst_834_, lean_object* v_inst_835_, lean_object* v_map_836_, lean_object* v_key_837_){
_start:
{
uint8_t v_res_838_; lean_object* v_r_839_; 
v_res_838_ = l_Std_Internal_IndexMultiMap_contains___redArg(v_inst_834_, v_inst_835_, v_map_836_, v_key_837_);
lean_dec_ref(v_map_836_);
v_r_839_ = lean_box(v_res_838_);
return v_r_839_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_contains(lean_object* v_00_u03b1_840_, lean_object* v_00_u03b2_841_, lean_object* v_inst_842_, lean_object* v_inst_843_, lean_object* v_map_844_, lean_object* v_key_845_){
_start:
{
lean_object* v_indexes_846_; uint8_t v___x_847_; 
v_indexes_846_ = lean_ctor_get(v_map_844_, 1);
v___x_847_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_842_, v_inst_843_, v_indexes_846_, v_key_845_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_contains___boxed(lean_object* v_00_u03b1_848_, lean_object* v_00_u03b2_849_, lean_object* v_inst_850_, lean_object* v_inst_851_, lean_object* v_map_852_, lean_object* v_key_853_){
_start:
{
uint8_t v_res_854_; lean_object* v_r_855_; 
v_res_854_ = l_Std_Internal_IndexMultiMap_contains(v_00_u03b1_848_, v_00_u03b2_849_, v_inst_850_, v_inst_851_, v_map_852_, v_key_853_);
lean_dec_ref(v_map_852_);
v_r_855_ = lean_box(v_res_854_);
return v_r_855_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update___redArg___lam__1(lean_object* v_inst_856_, lean_object* v_inst_857_, lean_object* v_key_858_, lean_object* v_f_859_, lean_object* v_x1_860_, lean_object* v_x2_861_){
_start:
{
lean_object* v_fst_862_; lean_object* v_snd_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_888_; 
v_fst_862_ = lean_ctor_get(v_x2_861_, 0);
v_snd_863_ = lean_ctor_get(v_x2_861_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_x2_861_);
if (v_isSharedCheck_888_ == 0)
{
v___x_865_ = v_x2_861_;
v_isShared_866_ = v_isSharedCheck_888_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_snd_863_);
lean_inc(v_fst_862_);
lean_dec(v_x2_861_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_888_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___y_868_; lean_object* v___x_885_; uint8_t v___x_886_; 
lean_inc_ref(v_inst_856_);
lean_inc(v_fst_862_);
v___x_885_ = lean_apply_2(v_inst_856_, v_fst_862_, v_key_858_);
v___x_886_ = lean_unbox(v___x_885_);
if (v___x_886_ == 0)
{
lean_dec(v_f_859_);
v___y_868_ = v_snd_863_;
goto v___jp_867_;
}
else
{
lean_object* v___x_887_; 
v___x_887_ = lean_apply_1(v_f_859_, v_snd_863_);
v___y_868_ = v___x_887_;
goto v___jp_867_;
}
v___jp_867_:
{
lean_object* v_entries_869_; lean_object* v_indexes_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_884_; 
v_entries_869_ = lean_ctor_get(v_x1_860_, 0);
v_indexes_870_ = lean_ctor_get(v_x1_860_, 1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_x1_860_);
if (v_isSharedCheck_884_ == 0)
{
v___x_872_ = v_x1_860_;
v_isShared_873_ = v_isSharedCheck_884_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_indexes_870_);
lean_inc(v_entries_869_);
lean_dec(v_x1_860_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_884_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v_i_874_; lean_object* v_f_875_; lean_object* v___x_877_; 
v_i_874_ = lean_array_get_size(v_entries_869_);
v_f_875_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_875_, 0, v_i_874_);
lean_inc(v_fst_862_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 1, v___y_868_);
v___x_877_ = v___x_865_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_fst_862_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v___y_868_);
v___x_877_ = v_reuseFailAlloc_883_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
lean_object* v_entries_878_; lean_object* v_indexes_879_; lean_object* v___x_881_; 
v_entries_878_ = lean_array_push(v_entries_869_, v___x_877_);
v_indexes_879_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_856_, v_inst_857_, v_indexes_870_, v_fst_862_, v_f_875_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 1, v_indexes_879_);
lean_ctor_set(v___x_872_, 0, v_entries_878_);
v___x_881_ = v___x_872_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_entries_878_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v_indexes_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update___redArg(lean_object* v_inst_889_, lean_object* v_inst_890_, lean_object* v_map_891_, lean_object* v_key_892_, lean_object* v_f_893_){
_start:
{
uint8_t v___x_894_; 
lean_inc(v_key_892_);
lean_inc_ref(v_inst_890_);
lean_inc_ref(v_inst_889_);
v___x_894_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_889_, v_inst_890_, v_key_892_, v_map_891_);
if (v___x_894_ == 0)
{
lean_dec(v_f_893_);
lean_dec(v_key_892_);
lean_dec_ref(v_inst_890_);
lean_dec_ref(v_inst_889_);
return v_map_891_;
}
else
{
lean_object* v_entries_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; uint8_t v___x_900_; 
v_entries_895_ = lean_ctor_get(v_map_891_, 0);
lean_inc_ref(v_entries_895_);
lean_dec_ref(v_map_891_);
v___x_896_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
v___x_897_ = lean_unsigned_to_nat(0u);
v___x_898_ = lean_array_get_size(v_entries_895_);
v___x_899_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_900_ = lean_nat_dec_lt(v___x_897_, v___x_898_);
if (v___x_900_ == 0)
{
lean_dec_ref(v_entries_895_);
lean_dec(v_f_893_);
lean_dec(v_key_892_);
lean_dec_ref(v_inst_890_);
lean_dec_ref(v_inst_889_);
return v___x_896_;
}
else
{
lean_object* v___f_901_; uint8_t v___x_902_; 
v___f_901_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_update___redArg___lam__1), 6, 4);
lean_closure_set(v___f_901_, 0, v_inst_889_);
lean_closure_set(v___f_901_, 1, v_inst_890_);
lean_closure_set(v___f_901_, 2, v_key_892_);
lean_closure_set(v___f_901_, 3, v_f_893_);
v___x_902_ = lean_nat_dec_le(v___x_898_, v___x_898_);
if (v___x_902_ == 0)
{
if (v___x_900_ == 0)
{
lean_dec_ref(v___f_901_);
lean_dec_ref(v_entries_895_);
return v___x_896_;
}
else
{
size_t v___x_903_; size_t v___x_904_; lean_object* v___x_905_; 
v___x_903_ = ((size_t)0ULL);
v___x_904_ = lean_usize_of_nat(v___x_898_);
v___x_905_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_899_, v___f_901_, v_entries_895_, v___x_903_, v___x_904_, v___x_896_);
return v___x_905_;
}
}
else
{
size_t v___x_906_; size_t v___x_907_; lean_object* v___x_908_; 
v___x_906_ = ((size_t)0ULL);
v___x_907_ = lean_usize_of_nat(v___x_898_);
v___x_908_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_899_, v___f_901_, v_entries_895_, v___x_906_, v___x_907_, v___x_896_);
return v___x_908_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_update(lean_object* v_00_u03b1_909_, lean_object* v_00_u03b2_910_, lean_object* v_inst_911_, lean_object* v_inst_912_, lean_object* v_inst_913_, lean_object* v_inst_914_, lean_object* v_map_915_, lean_object* v_key_916_, lean_object* v_f_917_){
_start:
{
uint8_t v___x_918_; 
lean_inc(v_key_916_);
lean_inc_ref(v_inst_912_);
lean_inc_ref(v_inst_911_);
v___x_918_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_911_, v_inst_912_, v_key_916_, v_map_915_);
if (v___x_918_ == 0)
{
lean_dec(v_f_917_);
lean_dec(v_key_916_);
lean_dec_ref(v_inst_912_);
lean_dec_ref(v_inst_911_);
return v_map_915_;
}
else
{
lean_object* v_entries_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; uint8_t v___x_924_; 
v_entries_919_ = lean_ctor_get(v_map_915_, 0);
lean_inc_ref(v_entries_919_);
lean_dec_ref(v_map_915_);
v___x_920_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
v___x_921_ = lean_unsigned_to_nat(0u);
v___x_922_ = lean_array_get_size(v_entries_919_);
v___x_923_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_924_ = lean_nat_dec_lt(v___x_921_, v___x_922_);
if (v___x_924_ == 0)
{
lean_dec_ref(v_entries_919_);
lean_dec(v_f_917_);
lean_dec(v_key_916_);
lean_dec_ref(v_inst_912_);
lean_dec_ref(v_inst_911_);
return v___x_920_;
}
else
{
lean_object* v___f_925_; uint8_t v___x_926_; 
v___f_925_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_update___redArg___lam__1), 6, 4);
lean_closure_set(v___f_925_, 0, v_inst_911_);
lean_closure_set(v___f_925_, 1, v_inst_912_);
lean_closure_set(v___f_925_, 2, v_key_916_);
lean_closure_set(v___f_925_, 3, v_f_917_);
v___x_926_ = lean_nat_dec_le(v___x_922_, v___x_922_);
if (v___x_926_ == 0)
{
if (v___x_924_ == 0)
{
lean_dec_ref(v___f_925_);
lean_dec_ref(v_entries_919_);
return v___x_920_;
}
else
{
size_t v___x_927_; size_t v___x_928_; lean_object* v___x_929_; 
v___x_927_ = ((size_t)0ULL);
v___x_928_ = lean_usize_of_nat(v___x_922_);
v___x_929_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_923_, v___f_925_, v_entries_919_, v___x_927_, v___x_928_, v___x_920_);
return v___x_929_;
}
}
else
{
size_t v___x_930_; size_t v___x_931_; lean_object* v___x_932_; 
v___x_930_ = ((size_t)0ULL);
v___x_931_ = lean_usize_of_nat(v___x_922_);
v___x_932_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_923_, v___f_925_, v_entries_919_, v___x_930_, v___x_931_, v___x_920_);
return v___x_932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_replaceLast___redArg(lean_object* v_inst_933_, lean_object* v_inst_934_, lean_object* v_map_935_, lean_object* v_key_936_, lean_object* v_value_937_){
_start:
{
lean_object* v_entries_938_; lean_object* v_indexes_939_; uint8_t v___x_940_; 
v_entries_938_ = lean_ctor_get(v_map_935_, 0);
v_indexes_939_ = lean_ctor_get(v_map_935_, 1);
lean_inc(v_key_936_);
lean_inc_ref(v_inst_934_);
lean_inc_ref(v_inst_933_);
v___x_940_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_933_, v_inst_934_, v_indexes_939_, v_key_936_);
if (v___x_940_ == 0)
{
lean_dec(v_value_937_);
lean_dec(v_key_936_);
lean_dec_ref(v_inst_934_);
lean_dec_ref(v_inst_933_);
return v_map_935_;
}
else
{
lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_954_; 
lean_inc_ref(v_indexes_939_);
lean_inc_ref(v_entries_938_);
v_isSharedCheck_954_ = !lean_is_exclusive(v_map_935_);
if (v_isSharedCheck_954_ == 0)
{
lean_object* v_unused_955_; lean_object* v_unused_956_; 
v_unused_955_ = lean_ctor_get(v_map_935_, 1);
lean_dec(v_unused_955_);
v_unused_956_ = lean_ctor_get(v_map_935_, 0);
lean_dec(v_unused_956_);
v___x_942_ = v_map_935_;
v_isShared_943_ = v_isSharedCheck_954_;
goto v_resetjp_941_;
}
else
{
lean_dec(v_map_935_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_954_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v_idxs_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v_lastIdx_948_; lean_object* v___x_949_; lean_object* v_entries_950_; lean_object* v___x_952_; 
lean_inc(v_key_936_);
v_idxs_944_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_933_, v_inst_934_, v_indexes_939_, v_key_936_);
v___x_945_ = lean_array_get_size(v_idxs_944_);
v___x_946_ = lean_unsigned_to_nat(1u);
v___x_947_ = lean_nat_sub(v___x_945_, v___x_946_);
v_lastIdx_948_ = lean_array_fget(v_idxs_944_, v___x_947_);
lean_dec(v___x_947_);
lean_dec(v_idxs_944_);
v___x_949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_949_, 0, v_key_936_);
lean_ctor_set(v___x_949_, 1, v_value_937_);
v_entries_950_ = lean_array_fset(v_entries_938_, v_lastIdx_948_, v___x_949_);
lean_dec(v_lastIdx_948_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 0, v_entries_950_);
v___x_952_ = v___x_942_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_entries_950_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_indexes_939_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_replaceLast(lean_object* v_00_u03b1_957_, lean_object* v_00_u03b2_958_, lean_object* v_inst_959_, lean_object* v_inst_960_, lean_object* v_map_961_, lean_object* v_key_962_, lean_object* v_value_963_){
_start:
{
lean_object* v_entries_964_; lean_object* v_indexes_965_; uint8_t v___x_966_; 
v_entries_964_ = lean_ctor_get(v_map_961_, 0);
v_indexes_965_ = lean_ctor_get(v_map_961_, 1);
lean_inc(v_key_962_);
lean_inc_ref(v_inst_960_);
lean_inc_ref(v_inst_959_);
v___x_966_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v_inst_959_, v_inst_960_, v_indexes_965_, v_key_962_);
if (v___x_966_ == 0)
{
lean_dec(v_value_963_);
lean_dec(v_key_962_);
lean_dec_ref(v_inst_960_);
lean_dec_ref(v_inst_959_);
return v_map_961_;
}
else
{
lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_980_; 
lean_inc_ref(v_indexes_965_);
lean_inc_ref(v_entries_964_);
v_isSharedCheck_980_ = !lean_is_exclusive(v_map_961_);
if (v_isSharedCheck_980_ == 0)
{
lean_object* v_unused_981_; lean_object* v_unused_982_; 
v_unused_981_ = lean_ctor_get(v_map_961_, 1);
lean_dec(v_unused_981_);
v_unused_982_ = lean_ctor_get(v_map_961_, 0);
lean_dec(v_unused_982_);
v___x_968_ = v_map_961_;
v_isShared_969_ = v_isSharedCheck_980_;
goto v_resetjp_967_;
}
else
{
lean_dec(v_map_961_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_980_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v_idxs_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v_lastIdx_974_; lean_object* v___x_975_; lean_object* v_entries_976_; lean_object* v___x_978_; 
lean_inc(v_key_962_);
v_idxs_970_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get___redArg(v_inst_959_, v_inst_960_, v_indexes_965_, v_key_962_);
v___x_971_ = lean_array_get_size(v_idxs_970_);
v___x_972_ = lean_unsigned_to_nat(1u);
v___x_973_ = lean_nat_sub(v___x_971_, v___x_972_);
v_lastIdx_974_ = lean_array_fget(v_idxs_970_, v___x_973_);
lean_dec(v___x_973_);
lean_dec(v_idxs_970_);
v___x_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_975_, 0, v_key_962_);
lean_ctor_set(v___x_975_, 1, v_value_963_);
v_entries_976_ = lean_array_fset(v_entries_964_, v_lastIdx_974_, v___x_975_);
lean_dec(v_lastIdx_974_);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v_entries_976_);
v___x_978_ = v___x_968_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_entries_976_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_indexes_965_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg___lam__1(lean_object* v_inst_983_, lean_object* v_key_984_, lean_object* v_inst_985_, lean_object* v_x1_986_, lean_object* v_x2_987_){
_start:
{
lean_object* v_fst_988_; lean_object* v___x_989_; uint8_t v___x_990_; 
v_fst_988_ = lean_ctor_get(v_x2_987_, 0);
lean_inc_n(v_fst_988_, 2);
lean_inc_ref(v_inst_983_);
v___x_989_ = lean_apply_2(v_inst_983_, v_key_984_, v_fst_988_);
v___x_990_ = lean_unbox(v___x_989_);
if (v___x_990_ == 0)
{
lean_object* v_entries_991_; lean_object* v_indexes_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1003_; 
v_entries_991_ = lean_ctor_get(v_x1_986_, 0);
v_indexes_992_ = lean_ctor_get(v_x1_986_, 1);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_x1_986_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_994_ = v_x1_986_;
v_isShared_995_ = v_isSharedCheck_1003_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_indexes_992_);
lean_inc(v_entries_991_);
lean_dec(v_x1_986_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1003_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v_i_996_; lean_object* v_f_997_; lean_object* v_entries_998_; lean_object* v_indexes_999_; lean_object* v___x_1001_; 
v_i_996_ = lean_array_get_size(v_entries_991_);
v_f_997_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_997_, 0, v_i_996_);
v_entries_998_ = lean_array_push(v_entries_991_, v_x2_987_);
v_indexes_999_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_983_, v_inst_985_, v_indexes_992_, v_fst_988_, v_f_997_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 1, v_indexes_999_);
lean_ctor_set(v___x_994_, 0, v_entries_998_);
v___x_1001_ = v___x_994_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_entries_998_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_indexes_999_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
else
{
lean_dec(v_fst_988_);
lean_dec_ref(v_x2_987_);
lean_dec_ref(v_inst_985_);
lean_dec_ref(v_inst_983_);
return v_x1_986_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase___redArg(lean_object* v_inst_1004_, lean_object* v_inst_1005_, lean_object* v_map_1006_, lean_object* v_key_1007_){
_start:
{
uint8_t v___x_1008_; 
lean_inc(v_key_1007_);
lean_inc_ref(v_inst_1005_);
lean_inc_ref(v_inst_1004_);
v___x_1008_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_1004_, v_inst_1005_, v_key_1007_, v_map_1006_);
if (v___x_1008_ == 0)
{
lean_dec(v_key_1007_);
lean_dec_ref(v_inst_1005_);
lean_dec_ref(v_inst_1004_);
return v_map_1006_;
}
else
{
lean_object* v_entries_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; 
v_entries_1009_ = lean_ctor_get(v_map_1006_, 0);
lean_inc_ref(v_entries_1009_);
lean_dec_ref(v_map_1006_);
v___x_1010_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
v___x_1011_ = lean_unsigned_to_nat(0u);
v___x_1012_ = lean_array_get_size(v_entries_1009_);
v___x_1013_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_1014_ = lean_nat_dec_lt(v___x_1011_, v___x_1012_);
if (v___x_1014_ == 0)
{
lean_dec_ref(v_entries_1009_);
lean_dec(v_key_1007_);
lean_dec_ref(v_inst_1005_);
lean_dec_ref(v_inst_1004_);
return v___x_1010_;
}
else
{
lean_object* v___f_1015_; uint8_t v___x_1016_; 
v___f_1015_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_erase___redArg___lam__1), 5, 3);
lean_closure_set(v___f_1015_, 0, v_inst_1004_);
lean_closure_set(v___f_1015_, 1, v_key_1007_);
lean_closure_set(v___f_1015_, 2, v_inst_1005_);
v___x_1016_ = lean_nat_dec_le(v___x_1012_, v___x_1012_);
if (v___x_1016_ == 0)
{
if (v___x_1014_ == 0)
{
lean_dec_ref(v___f_1015_);
lean_dec_ref(v_entries_1009_);
return v___x_1010_;
}
else
{
size_t v___x_1017_; size_t v___x_1018_; lean_object* v___x_1019_; 
v___x_1017_ = ((size_t)0ULL);
v___x_1018_ = lean_usize_of_nat(v___x_1012_);
v___x_1019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1013_, v___f_1015_, v_entries_1009_, v___x_1017_, v___x_1018_, v___x_1010_);
return v___x_1019_;
}
}
else
{
size_t v___x_1020_; size_t v___x_1021_; lean_object* v___x_1022_; 
v___x_1020_ = ((size_t)0ULL);
v___x_1021_ = lean_usize_of_nat(v___x_1012_);
v___x_1022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1013_, v___f_1015_, v_entries_1009_, v___x_1020_, v___x_1021_, v___x_1010_);
return v___x_1022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_erase(lean_object* v_00_u03b1_1023_, lean_object* v_00_u03b2_1024_, lean_object* v_inst_1025_, lean_object* v_inst_1026_, lean_object* v_inst_1027_, lean_object* v_inst_1028_, lean_object* v_map_1029_, lean_object* v_key_1030_){
_start:
{
uint8_t v___x_1031_; 
lean_inc(v_key_1030_);
lean_inc_ref(v_inst_1026_);
lean_inc_ref(v_inst_1025_);
v___x_1031_ = l_Std_Internal_IndexMultiMap_instDecidableMem___redArg(v_inst_1025_, v_inst_1026_, v_key_1030_, v_map_1029_);
if (v___x_1031_ == 0)
{
lean_dec(v_key_1030_);
lean_dec_ref(v_inst_1026_);
lean_dec_ref(v_inst_1025_);
return v_map_1029_;
}
else
{
lean_object* v_entries_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; 
v_entries_1032_ = lean_ctor_get(v_map_1029_, 0);
lean_inc_ref(v_entries_1032_);
lean_dec_ref(v_map_1029_);
v___x_1033_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
v___x_1034_ = lean_unsigned_to_nat(0u);
v___x_1035_ = lean_array_get_size(v_entries_1032_);
v___x_1036_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_1037_ = lean_nat_dec_lt(v___x_1034_, v___x_1035_);
if (v___x_1037_ == 0)
{
lean_dec_ref(v_entries_1032_);
lean_dec(v_key_1030_);
lean_dec_ref(v_inst_1026_);
lean_dec_ref(v_inst_1025_);
return v___x_1033_;
}
else
{
lean_object* v___f_1038_; uint8_t v___x_1039_; 
v___f_1038_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_erase___redArg___lam__1), 5, 3);
lean_closure_set(v___f_1038_, 0, v_inst_1025_);
lean_closure_set(v___f_1038_, 1, v_key_1030_);
lean_closure_set(v___f_1038_, 2, v_inst_1026_);
v___x_1039_ = lean_nat_dec_le(v___x_1035_, v___x_1035_);
if (v___x_1039_ == 0)
{
if (v___x_1037_ == 0)
{
lean_dec_ref(v___f_1038_);
lean_dec_ref(v_entries_1032_);
return v___x_1033_;
}
else
{
size_t v___x_1040_; size_t v___x_1041_; lean_object* v___x_1042_; 
v___x_1040_ = ((size_t)0ULL);
v___x_1041_ = lean_usize_of_nat(v___x_1035_);
v___x_1042_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1036_, v___f_1038_, v_entries_1032_, v___x_1040_, v___x_1041_, v___x_1033_);
return v___x_1042_;
}
}
else
{
size_t v___x_1043_; size_t v___x_1044_; lean_object* v___x_1045_; 
v___x_1043_ = ((size_t)0ULL);
v___x_1044_ = lean_usize_of_nat(v___x_1035_);
v___x_1045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1036_, v___f_1038_, v_entries_1032_, v___x_1043_, v___x_1044_, v___x_1033_);
return v___x_1045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_eraseMany___redArg___lam__1(lean_object* v_inst_1046_, lean_object* v_keys_1047_, lean_object* v_inst_1048_, lean_object* v_x1_1049_, lean_object* v_x2_1050_){
_start:
{
lean_object* v_fst_1051_; uint8_t v___x_1052_; 
v_fst_1051_ = lean_ctor_get(v_x2_1050_, 0);
lean_inc_n(v_fst_1051_, 2);
lean_inc_ref(v_inst_1046_);
v___x_1052_ = l_Array_contains___redArg(v_inst_1046_, v_keys_1047_, v_fst_1051_);
if (v___x_1052_ == 0)
{
lean_object* v_entries_1053_; lean_object* v_indexes_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1065_; 
v_entries_1053_ = lean_ctor_get(v_x1_1049_, 0);
v_indexes_1054_ = lean_ctor_get(v_x1_1049_, 1);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_x1_1049_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1056_ = v_x1_1049_;
v_isShared_1057_ = v_isSharedCheck_1065_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_indexes_1054_);
lean_inc(v_entries_1053_);
lean_dec(v_x1_1049_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1065_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v_i_1058_; lean_object* v_f_1059_; lean_object* v_entries_1060_; lean_object* v_indexes_1061_; lean_object* v___x_1063_; 
v_i_1058_ = lean_array_get_size(v_entries_1053_);
v_f_1059_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_1059_, 0, v_i_1058_);
v_entries_1060_ = lean_array_push(v_entries_1053_, v_x2_1050_);
v_indexes_1061_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_1046_, v_inst_1048_, v_indexes_1054_, v_fst_1051_, v_f_1059_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 1, v_indexes_1061_);
lean_ctor_set(v___x_1056_, 0, v_entries_1060_);
v___x_1063_ = v___x_1056_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_entries_1060_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v_indexes_1061_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
else
{
lean_dec(v_fst_1051_);
lean_dec_ref(v_x2_1050_);
lean_dec_ref(v_inst_1048_);
lean_dec_ref(v_inst_1046_);
return v_x1_1049_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_eraseMany___redArg(lean_object* v_inst_1066_, lean_object* v_inst_1067_, lean_object* v_map_1068_, lean_object* v_keys_1069_){
_start:
{
lean_object* v_entries_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; uint8_t v___x_1075_; 
v_entries_1070_ = lean_ctor_get(v_map_1068_, 0);
lean_inc_ref(v_entries_1070_);
lean_dec_ref(v_map_1068_);
v___x_1071_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
v___x_1072_ = lean_unsigned_to_nat(0u);
v___x_1073_ = lean_array_get_size(v_entries_1070_);
v___x_1074_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_1075_ = lean_nat_dec_lt(v___x_1072_, v___x_1073_);
if (v___x_1075_ == 0)
{
lean_dec_ref(v_entries_1070_);
lean_dec_ref(v_keys_1069_);
lean_dec_ref(v_inst_1067_);
lean_dec_ref(v_inst_1066_);
return v___x_1071_;
}
else
{
lean_object* v___f_1076_; uint8_t v___x_1077_; 
v___f_1076_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_eraseMany___redArg___lam__1), 5, 3);
lean_closure_set(v___f_1076_, 0, v_inst_1066_);
lean_closure_set(v___f_1076_, 1, v_keys_1069_);
lean_closure_set(v___f_1076_, 2, v_inst_1067_);
v___x_1077_ = lean_nat_dec_le(v___x_1073_, v___x_1073_);
if (v___x_1077_ == 0)
{
if (v___x_1075_ == 0)
{
lean_dec_ref(v___f_1076_);
lean_dec_ref(v_entries_1070_);
return v___x_1071_;
}
else
{
size_t v___x_1078_; size_t v___x_1079_; lean_object* v___x_1080_; 
v___x_1078_ = ((size_t)0ULL);
v___x_1079_ = lean_usize_of_nat(v___x_1073_);
v___x_1080_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1074_, v___f_1076_, v_entries_1070_, v___x_1078_, v___x_1079_, v___x_1071_);
return v___x_1080_;
}
}
else
{
size_t v___x_1081_; size_t v___x_1082_; lean_object* v___x_1083_; 
v___x_1081_ = ((size_t)0ULL);
v___x_1082_ = lean_usize_of_nat(v___x_1073_);
v___x_1083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1074_, v___f_1076_, v_entries_1070_, v___x_1081_, v___x_1082_, v___x_1071_);
return v___x_1083_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_eraseMany(lean_object* v_00_u03b1_1084_, lean_object* v_00_u03b2_1085_, lean_object* v_inst_1086_, lean_object* v_inst_1087_, lean_object* v_inst_1088_, lean_object* v_inst_1089_, lean_object* v_map_1090_, lean_object* v_keys_1091_){
_start:
{
lean_object* v_entries_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; uint8_t v___x_1097_; 
v_entries_1092_ = lean_ctor_get(v_map_1090_, 0);
lean_inc_ref(v_entries_1092_);
lean_dec_ref(v_map_1090_);
v___x_1093_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
v___x_1094_ = lean_unsigned_to_nat(0u);
v___x_1095_ = lean_array_get_size(v_entries_1092_);
v___x_1096_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_1097_ = lean_nat_dec_lt(v___x_1094_, v___x_1095_);
if (v___x_1097_ == 0)
{
lean_dec_ref(v_entries_1092_);
lean_dec_ref(v_keys_1091_);
lean_dec_ref(v_inst_1087_);
lean_dec_ref(v_inst_1086_);
return v___x_1093_;
}
else
{
lean_object* v___f_1098_; uint8_t v___x_1099_; 
v___f_1098_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_eraseMany___redArg___lam__1), 5, 3);
lean_closure_set(v___f_1098_, 0, v_inst_1086_);
lean_closure_set(v___f_1098_, 1, v_keys_1091_);
lean_closure_set(v___f_1098_, 2, v_inst_1087_);
v___x_1099_ = lean_nat_dec_le(v___x_1095_, v___x_1095_);
if (v___x_1099_ == 0)
{
if (v___x_1097_ == 0)
{
lean_dec_ref(v___f_1098_);
lean_dec_ref(v_entries_1092_);
return v___x_1093_;
}
else
{
size_t v___x_1100_; size_t v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = ((size_t)0ULL);
v___x_1101_ = lean_usize_of_nat(v___x_1095_);
v___x_1102_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1096_, v___f_1098_, v_entries_1092_, v___x_1100_, v___x_1101_, v___x_1093_);
return v___x_1102_;
}
}
else
{
size_t v___x_1103_; size_t v___x_1104_; lean_object* v___x_1105_; 
v___x_1103_ = ((size_t)0ULL);
v___x_1104_ = lean_usize_of_nat(v___x_1095_);
v___x_1105_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1096_, v___f_1098_, v_entries_1092_, v___x_1103_, v___x_1104_, v___x_1093_);
return v___x_1105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___redArg(lean_object* v_map_1106_){
_start:
{
lean_object* v_entries_1107_; lean_object* v___x_1108_; 
v_entries_1107_ = lean_ctor_get(v_map_1106_, 0);
v___x_1108_ = lean_array_get_size(v_entries_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___redArg___boxed(lean_object* v_map_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Std_Internal_IndexMultiMap_size___redArg(v_map_1109_);
lean_dec_ref(v_map_1109_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size(lean_object* v_00_u03b1_1111_, lean_object* v_00_u03b2_1112_, lean_object* v_inst_1113_, lean_object* v_inst_1114_, lean_object* v_map_1115_){
_start:
{
lean_object* v_entries_1116_; lean_object* v___x_1117_; 
v_entries_1116_ = lean_ctor_get(v_map_1115_, 0);
v___x_1117_ = lean_array_get_size(v_entries_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_size___boxed(lean_object* v_00_u03b1_1118_, lean_object* v_00_u03b2_1119_, lean_object* v_inst_1120_, lean_object* v_inst_1121_, lean_object* v_map_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Std_Internal_IndexMultiMap_size(v_00_u03b1_1118_, v_00_u03b2_1119_, v_inst_1120_, v_inst_1121_, v_map_1122_);
lean_dec_ref(v_map_1122_);
lean_dec_ref(v_inst_1121_);
lean_dec_ref(v_inst_1120_);
return v_res_1123_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_isEmpty___redArg(lean_object* v_map_1124_){
_start:
{
lean_object* v_entries_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v_entries_1125_ = lean_ctor_get(v_map_1124_, 0);
v___x_1126_ = lean_array_get_size(v_entries_1125_);
v___x_1127_ = lean_unsigned_to_nat(0u);
v___x_1128_ = lean_nat_dec_eq(v___x_1126_, v___x_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_isEmpty___redArg___boxed(lean_object* v_map_1129_){
_start:
{
uint8_t v_res_1130_; lean_object* v_r_1131_; 
v_res_1130_ = l_Std_Internal_IndexMultiMap_isEmpty___redArg(v_map_1129_);
lean_dec_ref(v_map_1129_);
v_r_1131_ = lean_box(v_res_1130_);
return v_r_1131_;
}
}
LEAN_EXPORT uint8_t l_Std_Internal_IndexMultiMap_isEmpty(lean_object* v_00_u03b1_1132_, lean_object* v_00_u03b2_1133_, lean_object* v_inst_1134_, lean_object* v_inst_1135_, lean_object* v_map_1136_){
_start:
{
lean_object* v_entries_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; uint8_t v___x_1140_; 
v_entries_1137_ = lean_ctor_get(v_map_1136_, 0);
v___x_1138_ = lean_array_get_size(v_entries_1137_);
v___x_1139_ = lean_unsigned_to_nat(0u);
v___x_1140_ = lean_nat_dec_eq(v___x_1138_, v___x_1139_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_isEmpty___boxed(lean_object* v_00_u03b1_1141_, lean_object* v_00_u03b2_1142_, lean_object* v_inst_1143_, lean_object* v_inst_1144_, lean_object* v_map_1145_){
_start:
{
uint8_t v_res_1146_; lean_object* v_r_1147_; 
v_res_1146_ = l_Std_Internal_IndexMultiMap_isEmpty(v_00_u03b1_1141_, v_00_u03b2_1142_, v_inst_1143_, v_inst_1144_, v_map_1145_);
lean_dec_ref(v_map_1145_);
lean_dec_ref(v_inst_1144_);
lean_dec_ref(v_inst_1143_);
v_r_1147_ = lean_box(v_res_1146_);
return v_r_1147_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___redArg(lean_object* v_map_1148_){
_start:
{
lean_object* v_entries_1149_; 
v_entries_1149_ = lean_ctor_get(v_map_1148_, 0);
lean_inc_ref(v_entries_1149_);
return v_entries_1149_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___redArg___boxed(lean_object* v_map_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Std_Internal_IndexMultiMap_toArray___redArg(v_map_1150_);
lean_dec_ref(v_map_1150_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray(lean_object* v_00_u03b1_1152_, lean_object* v_00_u03b2_1153_, lean_object* v_inst_1154_, lean_object* v_inst_1155_, lean_object* v_map_1156_){
_start:
{
lean_object* v_entries_1157_; 
v_entries_1157_ = lean_ctor_get(v_map_1156_, 0);
lean_inc_ref(v_entries_1157_);
return v_entries_1157_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toArray___boxed(lean_object* v_00_u03b1_1158_, lean_object* v_00_u03b2_1159_, lean_object* v_inst_1160_, lean_object* v_inst_1161_, lean_object* v_map_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Std_Internal_IndexMultiMap_toArray(v_00_u03b1_1158_, v_00_u03b2_1159_, v_inst_1160_, v_inst_1161_, v_map_1162_);
lean_dec_ref(v_map_1162_);
lean_dec_ref(v_inst_1161_);
lean_dec_ref(v_inst_1160_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___redArg(lean_object* v_map_1164_){
_start:
{
lean_object* v_entries_1165_; lean_object* v___x_1166_; 
v_entries_1165_ = lean_ctor_get(v_map_1164_, 0);
lean_inc_ref(v_entries_1165_);
lean_dec_ref(v_map_1164_);
v___x_1166_ = lean_array_to_list(v_entries_1165_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList(lean_object* v_00_u03b1_1167_, lean_object* v_00_u03b2_1168_, lean_object* v_inst_1169_, lean_object* v_inst_1170_, lean_object* v_map_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Std_Internal_IndexMultiMap_toList___redArg(v_map_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_toList___boxed(lean_object* v_00_u03b1_1173_, lean_object* v_00_u03b2_1174_, lean_object* v_inst_1175_, lean_object* v_inst_1176_, lean_object* v_map_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Std_Internal_IndexMultiMap_toList(v_00_u03b1_1173_, v_00_u03b2_1174_, v_inst_1175_, v_inst_1176_, v_map_1177_);
lean_dec_ref(v_inst_1176_);
lean_dec_ref(v_inst_1175_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___redArg___lam__1(lean_object* v_inst_1179_, lean_object* v_inst_1180_, lean_object* v_x1_1181_, lean_object* v_x2_1182_){
_start:
{
lean_object* v_fst_1183_; lean_object* v_entries_1184_; lean_object* v_indexes_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1196_; 
v_fst_1183_ = lean_ctor_get(v_x2_1182_, 0);
lean_inc(v_fst_1183_);
v_entries_1184_ = lean_ctor_get(v_x1_1181_, 0);
v_indexes_1185_ = lean_ctor_get(v_x1_1181_, 1);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_x1_1181_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1187_ = v_x1_1181_;
v_isShared_1188_ = v_isSharedCheck_1196_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_indexes_1185_);
lean_inc(v_entries_1184_);
lean_dec(v_x1_1181_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1196_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v_i_1189_; lean_object* v_f_1190_; lean_object* v_entries_1191_; lean_object* v_indexes_1192_; lean_object* v___x_1194_; 
v_i_1189_ = lean_array_get_size(v_entries_1184_);
v_f_1190_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_1190_, 0, v_i_1189_);
v_entries_1191_ = lean_array_push(v_entries_1184_, v_x2_1182_);
v_indexes_1192_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_1179_, v_inst_1180_, v_indexes_1185_, v_fst_1183_, v_f_1190_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 1, v_indexes_1192_);
lean_ctor_set(v___x_1187_, 0, v_entries_1191_);
v___x_1194_ = v___x_1187_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_entries_1191_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_indexes_1192_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge___redArg(lean_object* v_inst_1197_, lean_object* v_inst_1198_, lean_object* v_m1_1199_, lean_object* v_m2_1200_){
_start:
{
lean_object* v_entries_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
v_entries_1201_ = lean_ctor_get(v_m2_1200_, 0);
lean_inc_ref(v_entries_1201_);
lean_dec_ref(v_m2_1200_);
v___x_1202_ = lean_unsigned_to_nat(0u);
v___x_1203_ = lean_array_get_size(v_entries_1201_);
v___x_1204_ = ((lean_object*)(l_Std_Internal_instReprIndexMultiMap_repr___redArg___closed__9));
v___x_1205_ = lean_nat_dec_lt(v___x_1202_, v___x_1203_);
if (v___x_1205_ == 0)
{
lean_dec_ref(v_entries_1201_);
lean_dec_ref(v_inst_1198_);
lean_dec_ref(v_inst_1197_);
return v_m1_1199_;
}
else
{
lean_object* v___f_1206_; uint8_t v___x_1207_; 
v___f_1206_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_merge___redArg___lam__1), 4, 2);
lean_closure_set(v___f_1206_, 0, v_inst_1197_);
lean_closure_set(v___f_1206_, 1, v_inst_1198_);
v___x_1207_ = lean_nat_dec_le(v___x_1203_, v___x_1203_);
if (v___x_1207_ == 0)
{
if (v___x_1205_ == 0)
{
lean_dec_ref(v___f_1206_);
lean_dec_ref(v_entries_1201_);
return v_m1_1199_;
}
else
{
size_t v___x_1208_; size_t v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = ((size_t)0ULL);
v___x_1209_ = lean_usize_of_nat(v___x_1203_);
v___x_1210_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1204_, v___f_1206_, v_entries_1201_, v___x_1208_, v___x_1209_, v_m1_1199_);
return v___x_1210_;
}
}
else
{
size_t v___x_1211_; size_t v___x_1212_; lean_object* v___x_1213_; 
v___x_1211_ = ((size_t)0ULL);
v___x_1212_ = lean_usize_of_nat(v___x_1203_);
v___x_1213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1204_, v___f_1206_, v_entries_1201_, v___x_1211_, v___x_1212_, v_m1_1199_);
return v___x_1213_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_merge(lean_object* v_00_u03b1_1214_, lean_object* v_00_u03b2_1215_, lean_object* v_inst_1216_, lean_object* v_inst_1217_, lean_object* v_inst_1218_, lean_object* v_inst_1219_, lean_object* v_m1_1220_, lean_object* v_m2_1221_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l_Std_Internal_IndexMultiMap_merge___redArg(v_inst_1216_, v_inst_1217_, v_m1_1220_, v_m2_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg(){
_start:
{
lean_object* v___x_1224_; 
v___x_1224_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg___boxed(lean_object* v___dummy_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Std_Internal_IndexMultiMap_instEmptyCollection___redArg();
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection(lean_object* v_00_u03b1_1227_, lean_object* v_00_u03b2_1228_, lean_object* v_inst_1229_, lean_object* v_inst_1230_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instEmptyCollection___boxed(lean_object* v_00_u03b1_1232_, lean_object* v_00_u03b2_1233_, lean_object* v_inst_1234_, lean_object* v_inst_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Std_Internal_IndexMultiMap_instEmptyCollection(v_00_u03b1_1232_, v_00_u03b2_1233_, v_inst_1234_, v_inst_1235_);
lean_dec_ref(v_inst_1235_);
lean_dec_ref(v_inst_1234_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg___lam__1(lean_object* v_inst_1237_, lean_object* v_inst_1238_, lean_object* v_x_1239_){
_start:
{
lean_object* v_fst_1240_; lean_object* v___x_1241_; lean_object* v_entries_1242_; lean_object* v_indexes_1243_; lean_object* v_i_1244_; lean_object* v_f_1245_; lean_object* v_entries_1246_; lean_object* v_indexes_1247_; lean_object* v___x_1248_; 
v_fst_1240_ = lean_ctor_get(v_x_1239_, 0);
lean_inc(v_fst_1240_);
v___x_1241_ = lean_obj_once(&l_Std_Internal_IndexMultiMap_empty___closed__0, &l_Std_Internal_IndexMultiMap_empty___closed__0_once, _init_l_Std_Internal_IndexMultiMap_empty___closed__0);
v_entries_1242_ = lean_ctor_get(v___x_1241_, 0);
v_indexes_1243_ = lean_ctor_get(v___x_1241_, 1);
v_i_1244_ = lean_array_get_size(v_entries_1242_);
v_f_1245_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_1245_, 0, v_i_1244_);
lean_inc_ref(v_entries_1242_);
v_entries_1246_ = lean_array_push(v_entries_1242_, v_x_1239_);
lean_inc_ref(v_indexes_1243_);
v_indexes_1247_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_1237_, v_inst_1238_, v_indexes_1243_, v_fst_1240_, v_f_1245_);
v___x_1248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1248_, 0, v_entries_1246_);
lean_ctor_set(v___x_1248_, 1, v_indexes_1247_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg(lean_object* v_inst_1249_, lean_object* v_inst_1250_){
_start:
{
lean_object* v___f_1251_; 
v___f_1251_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1251_, 0, v_inst_1249_);
lean_closure_set(v___f_1251_, 1, v_inst_1250_);
return v___f_1251_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable(lean_object* v_00_u03b1_1252_, lean_object* v_00_u03b2_1253_, lean_object* v_inst_1254_, lean_object* v_inst_1255_, lean_object* v_inst_1256_, lean_object* v_inst_1257_){
_start:
{
lean_object* v___f_1258_; 
v___f_1258_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instSingletonProdOfEquivBEqOfLawfulHashable___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1258_, 0, v_inst_1254_);
lean_closure_set(v___f_1258_, 1, v_inst_1255_);
return v___f_1258_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg___lam__1(lean_object* v_inst_1259_, lean_object* v_inst_1260_, lean_object* v_x_1261_, lean_object* v_m_1262_){
_start:
{
lean_object* v_fst_1263_; lean_object* v_entries_1264_; lean_object* v_indexes_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1276_; 
v_fst_1263_ = lean_ctor_get(v_x_1261_, 0);
lean_inc(v_fst_1263_);
v_entries_1264_ = lean_ctor_get(v_m_1262_, 0);
v_indexes_1265_ = lean_ctor_get(v_m_1262_, 1);
v_isSharedCheck_1276_ = !lean_is_exclusive(v_m_1262_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1267_ = v_m_1262_;
v_isShared_1268_ = v_isSharedCheck_1276_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_indexes_1265_);
lean_inc(v_entries_1264_);
lean_dec(v_m_1262_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1276_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v_i_1269_; lean_object* v_f_1270_; lean_object* v_entries_1271_; lean_object* v_indexes_1272_; lean_object* v___x_1274_; 
v_i_1269_ = lean_array_get_size(v_entries_1264_);
v_f_1270_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_insert___redArg___lam__0), 2, 1);
lean_closure_set(v_f_1270_, 0, v_i_1269_);
v_entries_1271_ = lean_array_push(v_entries_1264_, v_x_1261_);
v_indexes_1272_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___redArg(v_inst_1259_, v_inst_1260_, v_indexes_1265_, v_fst_1263_, v_f_1270_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 1, v_indexes_1272_);
lean_ctor_set(v___x_1267_, 0, v_entries_1271_);
v___x_1274_ = v___x_1267_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_entries_1271_);
lean_ctor_set(v_reuseFailAlloc_1275_, 1, v_indexes_1272_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg(lean_object* v_inst_1277_, lean_object* v_inst_1278_){
_start:
{
lean_object* v___f_1279_; 
v___f_1279_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg___lam__1), 4, 2);
lean_closure_set(v___f_1279_, 0, v_inst_1277_);
lean_closure_set(v___f_1279_, 1, v_inst_1278_);
return v___f_1279_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable(lean_object* v_00_u03b1_1280_, lean_object* v_00_u03b2_1281_, lean_object* v_inst_1282_, lean_object* v_inst_1283_, lean_object* v_inst_1284_, lean_object* v_inst_1285_){
_start:
{
lean_object* v___f_1286_; 
v___f_1286_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instInsertProdOfEquivBEqOfLawfulHashable___redArg___lam__1), 4, 2);
lean_closure_set(v___f_1286_, 0, v_inst_1282_);
lean_closure_set(v___f_1286_, 1, v_inst_1283_);
return v___f_1286_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instUnionOfEquivBEqOfLawfulHashable___redArg(lean_object* v_inst_1287_, lean_object* v_inst_1288_){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_merge), 8, 6);
lean_closure_set(v___x_1289_, 0, lean_box(0));
lean_closure_set(v___x_1289_, 1, lean_box(0));
lean_closure_set(v___x_1289_, 2, v_inst_1287_);
lean_closure_set(v___x_1289_, 3, v_inst_1288_);
lean_closure_set(v___x_1289_, 4, lean_box(0));
lean_closure_set(v___x_1289_, 5, lean_box(0));
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instUnionOfEquivBEqOfLawfulHashable(lean_object* v_00_u03b1_1290_, lean_object* v_00_u03b2_1291_, lean_object* v_inst_1292_, lean_object* v_inst_1293_, lean_object* v_inst_1294_, lean_object* v_inst_1295_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_merge), 8, 6);
lean_closure_set(v___x_1296_, 0, lean_box(0));
lean_closure_set(v___x_1296_, 1, lean_box(0));
lean_closure_set(v___x_1296_, 2, v_inst_1292_);
lean_closure_set(v___x_1296_, 3, v_inst_1293_);
lean_closure_set(v___x_1296_, 4, lean_box(0));
lean_closure_set(v___x_1296_, 5, lean_box(0));
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__0(lean_object* v_f_1297_, lean_object* v_a_1298_, lean_object* v_x_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_apply_2(v_f_1297_, v_a_1298_, v___y_1300_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__1(lean_object* v_inst_1302_, lean_object* v_00_u03b2_1303_, lean_object* v_map_1304_, lean_object* v_b_1305_, lean_object* v_f_1306_){
_start:
{
lean_object* v_entries_1307_; lean_object* v___f_1308_; size_t v_sz_1309_; size_t v___x_1310_; lean_object* v___x_1311_; 
v_entries_1307_ = lean_ctor_get(v_map_1304_, 0);
lean_inc_ref(v_entries_1307_);
lean_dec_ref(v_map_1304_);
v___f_1308_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1308_, 0, v_f_1306_);
v_sz_1309_ = lean_array_size(v_entries_1307_);
v___x_1310_ = ((size_t)0ULL);
v___x_1311_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1302_, v_entries_1307_, v___f_1308_, v_sz_1309_, v___x_1310_, v_b_1305_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg(lean_object* v_inst_1312_){
_start:
{
lean_object* v___f_1313_; 
v___f_1313_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1313_, 0, v_inst_1312_);
return v___f_1313_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad(lean_object* v_00_u03b1_1314_, lean_object* v_00_u03b2_1315_, lean_object* v_inst_1316_, lean_object* v_inst_1317_, lean_object* v_m_1318_, lean_object* v_inst_1319_){
_start:
{
lean_object* v___f_1320_; 
v___f_1320_ = lean_alloc_closure((void*)(l_Std_Internal_IndexMultiMap_instForInProdOfMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1320_, 0, v_inst_1319_);
return v___f_1320_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_IndexMultiMap_instForInProdOfMonad___boxed(lean_object* v_00_u03b1_1321_, lean_object* v_00_u03b2_1322_, lean_object* v_inst_1323_, lean_object* v_inst_1324_, lean_object* v_m_1325_, lean_object* v_inst_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Std_Internal_IndexMultiMap_instForInProdOfMonad(v_00_u03b1_1321_, v_00_u03b2_1322_, v_inst_1323_, v_inst_1324_, v_m_1325_, v_inst_1326_);
lean_dec_ref(v_inst_1324_);
lean_dec_ref(v_inst_1323_);
return v_res_1327_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Internal_IndexMultiMap(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Internal_IndexMultiMap(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Internal_IndexMultiMap(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal_IndexMultiMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Internal_IndexMultiMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Internal_IndexMultiMap(builtin);
}
#ifdef __cplusplus
}
#endif

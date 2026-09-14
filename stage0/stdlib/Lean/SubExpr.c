// Lean compiler output
// Module: Lean.SubExpr
// Imports: public import Lean.Meta.Basic public import Init.Data.Format.Macro
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
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_instOrdNat___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_maxChildren;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_typeCoord;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_asNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_asNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_root;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instInhabited;
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_isRoot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_isRoot___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_Pos_head_spec__0(lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_head___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.SubExpr"};
static const lean_object* l_Lean_SubExpr_Pos_head___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_head___closed__0_value;
static const lean_string_object l_Lean_SubExpr_Pos_head___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.SubExpr.Pos.head"};
static const lean_object* l_Lean_SubExpr_Pos_head___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_head___closed__1_value;
static const lean_string_object l_Lean_SubExpr_Pos_head___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "already at top"};
static const lean_object* l_Lean_SubExpr_Pos_head___closed__2 = (const lean_object*)&l_Lean_SubExpr_Pos_head___closed__2_value;
static lean_once_cell_t l_Lean_SubExpr_Pos_head___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_Pos_head___closed__3;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_head(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_head___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_tail___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.SubExpr.Pos.tail"};
static const lean_object* l_Lean_SubExpr_Pos_tail___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_tail___closed__0_value;
static lean_once_cell_t l_Lean_SubExpr_Pos_tail___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_Pos_tail___closed__1;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_tail(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_tail___boxed(lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_push___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.SubExpr.Pos.push"};
static const lean_object* l_Lean_SubExpr_Pos_push___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_push___closed__0_value;
static const lean_string_object l_Lean_SubExpr_Pos_push___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid coordinate "};
static const lean_object* l_Lean_SubExpr_Pos_push___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_push___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_push___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_depth___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_depth___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_depth___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_depth___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_all___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_all(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_all___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_append___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_push___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_append___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_append___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_append___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_ofArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_ofArray___boxed(lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_toArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_push___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_SubExpr_Pos_toArray___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_toArray___closed__0_value;
static const lean_array_object l_Lean_SubExpr_Pos_toArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_SubExpr_Pos_toArray___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_toArray___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingDomain(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingDomain___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingBody(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingBody___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetVarType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetVarType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetValue(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetValue___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetBody(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetBody___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppFn___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushProj(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushProj___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushType(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNthBindingDomain(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNthBindingBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_SubExpr_Pos_toString_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lean_SubExpr_Pos_toString___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toString___boxed(lean_object*);
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__0 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__0_value;
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "1"};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__1 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__1_value;
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "2"};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__2 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__2_value;
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "3"};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__3 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__3_value;
static const lean_string_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Invalid coordinate "};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__4 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__4_value;
static const lean_ctor_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__5 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__5_value;
static const lean_ctor_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__6 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__6_value;
static const lean_ctor_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7_value;
static const lean_ctor_object l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__8 = (const lean_object*)&l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_fromString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "malformed "};
static const lean_object* l_Lean_SubExpr_Pos_fromString_x3f___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_fromString_x3f___closed__0_value;
static const lean_array_object l_Lean_SubExpr_Pos_fromString_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_SubExpr_Pos_fromString_x3f___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_fromString_x3f___closed__1_value;
static const lean_string_object l_Lean_SubExpr_Pos_fromString_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_SubExpr_Pos_fromString_x3f___closed__2 = (const lean_object*)&l_Lean_SubExpr_Pos_fromString_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_fromString_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_Pos_fromString_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.SubExpr.Pos.fromString!"};
static const lean_object* l_Lean_SubExpr_Pos_fromString_x21___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_fromString_x21___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_fromString_x21(lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instOrdNat___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instOrd___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instOrd = (const lean_object*)&l_Lean_SubExpr_Pos_instOrd___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instDecidableEq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instToString___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instToString = (const lean_object*)&l_Lean_SubExpr_Pos_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instEmptyCollection;
static const lean_string_object l_Lean_SubExpr_Pos_instRepr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Pos.fromString! "};
static const lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instRepr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_SubExpr_Pos_instRepr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_SubExpr_Pos_instRepr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_instRepr___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instRepr___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instRepr = (const lean_object*)&l_Lean_SubExpr_Pos_instRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instToJson___lam__0(lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_instToJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instToJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instToJson___closed__0_value;
static const lean_closure_object l_Lean_SubExpr_Pos_instToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SubExpr_Pos_instToJson___closed__0_value),((lean_object*)&l_Lean_SubExpr_Pos_instToString___closed__0_value)} };
static const lean_object* l_Lean_SubExpr_Pos_instToJson___closed__1 = (const lean_object*)&l_Lean_SubExpr_Pos_instToJson___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instToJson = (const lean_object*)&l_Lean_SubExpr_Pos_instToJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instFromJson___lam__0(lean_object*);
static const lean_closure_object l_Lean_SubExpr_Pos_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_Pos_instFromJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_Pos_instFromJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_Pos_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_Pos_instFromJson = (const lean_object*)&l_Lean_SubExpr_Pos_instFromJson___closed__0_value;
static const lean_string_object l_Lean_instInhabitedSubExpr_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_instInhabitedSubExpr_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedSubExpr_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedSubExpr_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedSubExpr_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_instInhabitedSubExpr_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedSubExpr_default___closed__1_value;
static lean_once_cell_t l_Lean_instInhabitedSubExpr_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedSubExpr_default___closed__2;
static lean_once_cell_t l_Lean_instInhabitedSubExpr_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedSubExpr_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedSubExpr_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedSubExpr;
LEAN_EXPORT lean_object* l_Lean_SubExpr_mkRoot(lean_object*);
LEAN_EXPORT uint8_t l_Lean_SubExpr_isRoot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_isRoot___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_bindingBody_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_SubExpr_bindingBody_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.SubExpr.bindingBody!"};
static const lean_object* l_Lean_SubExpr_bindingBody_x21___closed__0 = (const lean_object*)&l_Lean_SubExpr_bindingBody_x21___closed__0_value;
static const lean_string_object l_Lean_SubExpr_bindingBody_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "subexpr is not a binder"};
static const lean_object* l_Lean_SubExpr_bindingBody_x21___closed__1 = (const lean_object*)&l_Lean_SubExpr_bindingBody_x21___closed__1_value;
static lean_once_cell_t l_Lean_SubExpr_bindingBody_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_bindingBody_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_SubExpr_bindingBody_x21(lean_object*);
static const lean_string_object l_Lean_SubExpr_bindingDomain_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.SubExpr.bindingDomain!"};
static const lean_object* l_Lean_SubExpr_bindingDomain_x21___closed__0 = (const lean_object*)&l_Lean_SubExpr_bindingDomain_x21___closed__0_value;
static lean_once_cell_t l_Lean_SubExpr_bindingDomain_x21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_bindingDomain_x21___closed__1;
LEAN_EXPORT lean_object* l_Lean_SubExpr_bindingDomain_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonFVarId___lam__0(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instToJsonFVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instToJsonFVarId___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instToJsonFVarId___closed__0 = (const lean_object*)&l_Lean_SubExpr_instToJsonFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instToJsonFVarId = (const lean_object*)&l_Lean_SubExpr_instToJsonFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instToJsonMVarId = (const lean_object*)&l_Lean_SubExpr_instToJsonFVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonFVarId___lam__0(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instFromJsonFVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instFromJsonFVarId___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instFromJsonFVarId___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instFromJsonFVarId = (const lean_object*)&l_Lean_SubExpr_instFromJsonFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instFromJsonMVarId = (const lean_object*)&l_Lean_SubExpr_instFromJsonFVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hyp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hyp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypType_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypType_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypValue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypValue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_target_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_target_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__0_value)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__1 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__1_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "hyp"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "hypType"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hypValue"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__6 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__6_value;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__6_value)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__7 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instFromJsonGoalLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instFromJsonGoalLocation_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instFromJsonGoalLocation = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonGoalLocation_toJson(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instToJsonGoalLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instToJsonGoalLocation_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instToJsonGoalLocation___closed__0 = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instToJsonGoalLocation = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mvarId"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__1 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__1_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SubExpr"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__2 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__2_value;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "GoalsLocation"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__3 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value_aux_0),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(170, 131, 175, 90, 105, 49, 153, 209)}};
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value_aux_1),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(156, 32, 46, 203, 174, 149, 194, 69)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__6 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 8, 121, 101, 233, 69, 204, 89)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__8 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12;
static const lean_string_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "loc"};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13_value;
static const lean_ctor_object l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13_value),LEAN_SCALAR_PTR_LITERAL(75, 214, 13, 195, 223, 166, 82, 163)}};
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__14 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16;
static lean_once_cell_t l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instFromJsonGoalsLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation___closed__0 = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation = (const lean_object*)&l_Lean_SubExpr_instFromJsonGoalsLocation___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_SubExpr_instToJsonGoalsLocation_toJson_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_SubExpr_instToJsonGoalsLocation_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_SubExpr_instToJsonGoalsLocation_toJson___closed__0 = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalsLocation_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonGoalsLocation_toJson(lean_object*);
static const lean_closure_object l_Lean_SubExpr_instToJsonGoalsLocation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SubExpr_instToJsonGoalsLocation_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SubExpr_instToJsonGoalsLocation___closed__0 = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalsLocation___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SubExpr_instToJsonGoalsLocation = (const lean_object*)&l_Lean_SubExpr_instToJsonGoalsLocation___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_SubExpr_Pos_maxChildren(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_unsigned_to_nat(4u);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_typeCoord(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(3u);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_asNat(lean_object* v_a_3_){
_start:
{
lean_inc(v_a_3_);
return v_a_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_asNat___boxed(lean_object* v_a_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_SubExpr_Pos_asNat(v_a_4_);
lean_dec(v_a_4_);
return v_res_5_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_root(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(1u);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_instInhabited(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(1u);
return v___x_7_;
}
}
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_isRoot(lean_object* v_p_8_){
_start:
{
lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_9_ = lean_unsigned_to_nat(4u);
v___x_10_ = lean_nat_dec_lt(v_p_8_, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_isRoot___boxed(lean_object* v_p_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l_Lean_SubExpr_Pos_isRoot(v_p_11_);
lean_dec(v_p_11_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_Pos_head_spec__0(lean_object* v_msg_14_){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_unsigned_to_nat(0u);
v___x_16_ = lean_panic_fn_borrowed(v___x_15_, v_msg_14_);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_head___closed__3(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_20_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__2));
v___x_21_ = lean_unsigned_to_nat(19u);
v___x_22_ = lean_unsigned_to_nat(46u);
v___x_23_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__1));
v___x_24_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_25_ = l_mkPanicMessageWithDecl(v___x_24_, v___x_23_, v___x_22_, v___x_21_, v___x_20_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_head(lean_object* v_p_26_){
_start:
{
uint8_t v___x_27_; 
v___x_27_ = l_Lean_SubExpr_Pos_isRoot(v_p_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_unsigned_to_nat(4u);
v___x_29_ = lean_nat_mod(v_p_26_, v___x_28_);
return v___x_29_;
}
else
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_obj_once(&l_Lean_SubExpr_Pos_head___closed__3, &l_Lean_SubExpr_Pos_head___closed__3_once, _init_l_Lean_SubExpr_Pos_head___closed__3);
v___x_31_ = l_panic___at___00Lean_SubExpr_Pos_head_spec__0(v___x_30_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_head___boxed(lean_object* v_p_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_SubExpr_Pos_head(v_p_32_);
lean_dec(v_p_32_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(lean_object* v_msg_34_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(1u);
v___x_36_ = lean_panic_fn_borrowed(v___x_35_, v_msg_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_tail___closed__1(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_38_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__2));
v___x_39_ = lean_unsigned_to_nat(19u);
v___x_40_ = lean_unsigned_to_nat(50u);
v___x_41_ = ((lean_object*)(l_Lean_SubExpr_Pos_tail___closed__0));
v___x_42_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_43_ = l_mkPanicMessageWithDecl(v___x_42_, v___x_41_, v___x_40_, v___x_39_, v___x_38_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_tail(lean_object* v_p_44_){
_start:
{
uint8_t v___x_45_; 
v___x_45_ = l_Lean_SubExpr_Pos_isRoot(v_p_44_);
if (v___x_45_ == 0)
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_46_ = l_Lean_SubExpr_Pos_head(v_p_44_);
v___x_47_ = lean_nat_sub(v_p_44_, v___x_46_);
lean_dec(v___x_46_);
v___x_48_ = lean_unsigned_to_nat(2u);
v___x_49_ = lean_nat_shiftr(v___x_47_, v___x_48_);
lean_dec(v___x_47_);
return v___x_49_;
}
else
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&l_Lean_SubExpr_Pos_tail___closed__1, &l_Lean_SubExpr_Pos_tail___closed__1_once, _init_l_Lean_SubExpr_Pos_tail___closed__1);
v___x_51_ = l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(v___x_50_);
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_tail___boxed(lean_object* v_p_52_){
_start:
{
lean_object* v_res_53_; 
v_res_53_ = l_Lean_SubExpr_Pos_tail(v_p_52_);
lean_dec(v_p_52_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_push(lean_object* v_p_56_, lean_object* v_c_57_){
_start:
{
lean_object* v___x_58_; uint8_t v___x_59_; 
v___x_58_ = lean_unsigned_to_nat(4u);
v___x_59_ = lean_nat_dec_le(v___x_58_, v_c_57_);
if (v___x_59_ == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_nat_mul(v_p_56_, v___x_58_);
v___x_61_ = lean_nat_add(v___x_60_, v_c_57_);
lean_dec(v_c_57_);
lean_dec(v___x_60_);
return v___x_61_;
}
else
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_62_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_63_ = ((lean_object*)(l_Lean_SubExpr_Pos_push___closed__0));
v___x_64_ = lean_unsigned_to_nat(54u);
v___x_65_ = lean_unsigned_to_nat(27u);
v___x_66_ = ((lean_object*)(l_Lean_SubExpr_Pos_push___closed__1));
v___x_67_ = l_Nat_reprFast(v_c_57_);
v___x_68_ = lean_string_append(v___x_66_, v___x_67_);
lean_dec_ref(v___x_67_);
v___x_69_ = l_mkPanicMessageWithDecl(v___x_62_, v___x_63_, v___x_64_, v___x_65_, v___x_68_);
lean_dec_ref(v___x_68_);
v___x_70_ = l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(v___x_69_);
return v___x_70_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_push___boxed(lean_object* v_p_71_, lean_object* v_c_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_SubExpr_Pos_push(v_p_71_, v_c_72_);
lean_dec(v_p_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___redArg(lean_object* v_f_74_, lean_object* v_init_75_, lean_object* v_p_76_){
_start:
{
uint8_t v___x_77_; 
v___x_77_ = l_Lean_SubExpr_Pos_isRoot(v_p_76_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_78_ = l_Lean_SubExpr_Pos_tail(v_p_76_);
lean_inc(v_f_74_);
v___x_79_ = l_Lean_SubExpr_Pos_foldl___redArg(v_f_74_, v_init_75_, v___x_78_);
lean_dec(v___x_78_);
v___x_80_ = l_Lean_SubExpr_Pos_head(v_p_76_);
v___x_81_ = lean_apply_2(v_f_74_, v___x_79_, v___x_80_);
return v___x_81_;
}
else
{
lean_dec(v_f_74_);
lean_inc(v_init_75_);
return v_init_75_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___redArg___boxed(lean_object* v_f_82_, lean_object* v_init_83_, lean_object* v_p_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_SubExpr_Pos_foldl___redArg(v_f_82_, v_init_83_, v_p_84_);
lean_dec(v_p_84_);
lean_dec(v_init_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl(lean_object* v_00_u03b1_86_, lean_object* v_f_87_, lean_object* v_init_88_, lean_object* v_p_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_SubExpr_Pos_foldl___redArg(v_f_87_, v_init_88_, v_p_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldl___boxed(lean_object* v_00_u03b1_91_, lean_object* v_f_92_, lean_object* v_init_93_, lean_object* v_p_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lean_SubExpr_Pos_foldl(v_00_u03b1_91_, v_f_92_, v_init_93_, v_p_94_);
lean_dec(v_p_94_);
lean_dec(v_init_93_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldr___redArg(lean_object* v_f_96_, lean_object* v_p_97_, lean_object* v_init_98_){
_start:
{
uint8_t v___x_99_; 
v___x_99_ = l_Lean_SubExpr_Pos_isRoot(v_p_97_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = l_Lean_SubExpr_Pos_tail(v_p_97_);
v___x_101_ = l_Lean_SubExpr_Pos_head(v_p_97_);
lean_dec(v_p_97_);
lean_inc(v_f_96_);
v___x_102_ = lean_apply_2(v_f_96_, v___x_101_, v_init_98_);
v_p_97_ = v___x_100_;
v_init_98_ = v___x_102_;
goto _start;
}
else
{
lean_dec(v_p_97_);
lean_dec(v_f_96_);
return v_init_98_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldr(lean_object* v_00_u03b1_104_, lean_object* v_f_105_, lean_object* v_p_106_, lean_object* v_init_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Lean_SubExpr_Pos_foldr___redArg(v_f_105_, v_p_106_, v_init_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg___lam__0(lean_object* v_p_109_, lean_object* v_f_110_, lean_object* v_x_111_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = l_Lean_SubExpr_Pos_head(v_p_109_);
v___x_113_ = lean_apply_2(v_f_110_, v_x_111_, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg___lam__0___boxed(lean_object* v_p_114_, lean_object* v_f_115_, lean_object* v_x_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_Lean_SubExpr_Pos_foldlM___redArg___lam__0(v_p_114_, v_f_115_, v_x_116_);
lean_dec(v_p_114_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___redArg(lean_object* v_inst_118_, lean_object* v_f_119_, lean_object* v_init_120_, lean_object* v_p_121_){
_start:
{
lean_object* v_toApplicative_122_; lean_object* v_toBind_123_; lean_object* v_toPure_124_; uint8_t v___x_125_; 
v_toApplicative_122_ = lean_ctor_get(v_inst_118_, 0);
v_toBind_123_ = lean_ctor_get(v_inst_118_, 1);
lean_inc(v_toBind_123_);
v_toPure_124_ = lean_ctor_get(v_toApplicative_122_, 1);
v___x_125_ = l_Lean_SubExpr_Pos_isRoot(v_p_121_);
if (v___x_125_ == 0)
{
lean_object* v___f_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
lean_inc(v_f_119_);
lean_inc(v_p_121_);
v___f_126_ = lean_alloc_closure((void*)(l_Lean_SubExpr_Pos_foldlM___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_126_, 0, v_p_121_);
lean_closure_set(v___f_126_, 1, v_f_119_);
v___x_127_ = l_Lean_SubExpr_Pos_tail(v_p_121_);
lean_dec(v_p_121_);
v___x_128_ = l_Lean_SubExpr_Pos_foldlM___redArg(v_inst_118_, v_f_119_, v_init_120_, v___x_127_);
v___x_129_ = lean_apply_4(v_toBind_123_, lean_box(0), lean_box(0), v___x_128_, v___f_126_);
return v___x_129_;
}
else
{
lean_object* v___x_130_; 
lean_inc(v_toPure_124_);
lean_dec(v_toBind_123_);
lean_dec(v_p_121_);
lean_dec(v_f_119_);
lean_dec_ref(v_inst_118_);
v___x_130_ = lean_apply_2(v_toPure_124_, lean_box(0), v_init_120_);
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM(lean_object* v_00_u03b1_131_, lean_object* v_inst_132_, lean_object* v_M_133_, lean_object* v_inst_134_, lean_object* v_f_135_, lean_object* v_init_136_, lean_object* v_p_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_SubExpr_Pos_foldlM___redArg(v_inst_134_, v_f_135_, v_init_136_, v_p_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldlM___boxed(lean_object* v_00_u03b1_139_, lean_object* v_inst_140_, lean_object* v_M_141_, lean_object* v_inst_142_, lean_object* v_f_143_, lean_object* v_init_144_, lean_object* v_p_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_SubExpr_Pos_foldlM(v_00_u03b1_139_, v_inst_140_, v_M_141_, v_inst_142_, v_f_143_, v_init_144_, v_p_145_);
lean_dec(v_inst_140_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___redArg___boxed(lean_object* v_inst_147_, lean_object* v_f_148_, lean_object* v_p_149_, lean_object* v_init_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l_Lean_SubExpr_Pos_foldrM___redArg(v_inst_147_, v_f_148_, v_p_149_, v_init_150_);
lean_dec(v_p_149_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___redArg(lean_object* v_inst_152_, lean_object* v_f_153_, lean_object* v_p_154_, lean_object* v_init_155_){
_start:
{
lean_object* v_toApplicative_156_; lean_object* v_toBind_157_; lean_object* v_toPure_158_; uint8_t v___x_159_; 
v_toApplicative_156_ = lean_ctor_get(v_inst_152_, 0);
v_toBind_157_ = lean_ctor_get(v_inst_152_, 1);
lean_inc(v_toBind_157_);
v_toPure_158_ = lean_ctor_get(v_toApplicative_156_, 1);
v___x_159_ = l_Lean_SubExpr_Pos_isRoot(v_p_154_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_160_ = l_Lean_SubExpr_Pos_head(v_p_154_);
lean_inc(v_f_153_);
v___x_161_ = lean_apply_2(v_f_153_, v___x_160_, v_init_155_);
v___x_162_ = l_Lean_SubExpr_Pos_tail(v_p_154_);
v___x_163_ = lean_alloc_closure((void*)(l_Lean_SubExpr_Pos_foldrM___redArg___boxed), 4, 3);
lean_closure_set(v___x_163_, 0, v_inst_152_);
lean_closure_set(v___x_163_, 1, v_f_153_);
lean_closure_set(v___x_163_, 2, v___x_162_);
v___x_164_ = lean_apply_4(v_toBind_157_, lean_box(0), lean_box(0), v___x_161_, v___x_163_);
return v___x_164_;
}
else
{
lean_object* v___x_165_; 
lean_inc(v_toPure_158_);
lean_dec(v_toBind_157_);
lean_dec(v_f_153_);
lean_dec_ref(v_inst_152_);
v___x_165_ = lean_apply_2(v_toPure_158_, lean_box(0), v_init_155_);
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM(lean_object* v_00_u03b1_166_, lean_object* v_M_167_, lean_object* v_inst_168_, lean_object* v_f_169_, lean_object* v_p_170_, lean_object* v_init_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Lean_SubExpr_Pos_foldrM___redArg(v_inst_168_, v_f_169_, v_p_170_, v_init_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___boxed(lean_object* v_00_u03b1_173_, lean_object* v_M_174_, lean_object* v_inst_175_, lean_object* v_f_176_, lean_object* v_p_177_, lean_object* v_init_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_SubExpr_Pos_foldrM(v_00_u03b1_173_, v_M_174_, v_inst_175_, v_f_176_, v_p_177_, v_init_178_);
lean_dec(v_p_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth___lam__0(lean_object* v_x_180_, lean_object* v___y_181_){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = lean_unsigned_to_nat(1u);
v___x_183_ = lean_nat_add(v___y_181_, v___x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth___lam__0___boxed(lean_object* v_x_184_, lean_object* v___y_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_SubExpr_Pos_depth___lam__0(v_x_184_, v___y_185_);
lean_dec(v___y_185_);
lean_dec(v_x_184_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_depth(lean_object* v_p_188_){
_start:
{
lean_object* v___f_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___f_189_ = ((lean_object*)(l_Lean_SubExpr_Pos_depth___closed__0));
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = l_Lean_SubExpr_Pos_foldr___redArg(v___f_189_, v_p_188_, v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_all___lam__0(lean_object* v_pred_192_, lean_object* v_n_193_, lean_object* v_a_194_){
_start:
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = lean_apply_1(v_pred_192_, v_n_193_);
v___x_196_ = lean_unbox(v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
v___x_197_ = lean_box(0);
return v___x_197_;
}
else
{
lean_object* v___x_198_; 
v___x_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_198_, 0, v_a_194_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0___redArg(lean_object* v_f_199_, lean_object* v_p_200_, lean_object* v_init_201_){
_start:
{
uint8_t v___x_202_; 
v___x_202_ = l_Lean_SubExpr_Pos_isRoot(v_p_200_);
if (v___x_202_ == 0)
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = l_Lean_SubExpr_Pos_head(v_p_200_);
lean_inc_ref(v_f_199_);
v___x_204_ = lean_apply_2(v_f_199_, v___x_203_, v_init_201_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_dec(v_p_200_);
lean_dec_ref(v_f_199_);
return v___x_204_;
}
else
{
lean_object* v_val_205_; lean_object* v___x_206_; 
v_val_205_ = lean_ctor_get(v___x_204_, 0);
lean_inc(v_val_205_);
lean_dec_ref_known(v___x_204_, 1);
v___x_206_ = l_Lean_SubExpr_Pos_tail(v_p_200_);
lean_dec(v_p_200_);
v_p_200_ = v___x_206_;
v_init_201_ = v_val_205_;
goto _start;
}
}
else
{
lean_object* v___x_208_; 
lean_dec(v_p_200_);
lean_dec_ref(v_f_199_);
v___x_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_208_, 0, v_init_201_);
return v___x_208_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_all(lean_object* v_pred_209_, lean_object* v_p_210_){
_start:
{
lean_object* v___f_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___f_211_ = lean_alloc_closure((void*)(l_Lean_SubExpr_Pos_all___lam__0), 3, 1);
lean_closure_set(v___f_211_, 0, v_pred_209_);
v___x_212_ = lean_box(0);
v___x_213_ = l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0___redArg(v___f_211_, v_p_210_, v___x_212_);
if (lean_obj_tag(v___x_213_) == 0)
{
uint8_t v___x_214_; 
v___x_214_ = 0;
return v___x_214_;
}
else
{
uint8_t v___x_215_; 
lean_dec_ref_known(v___x_213_, 1);
v___x_215_ = 1;
return v___x_215_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_all___boxed(lean_object* v_pred_216_, lean_object* v_p_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = l_Lean_SubExpr_Pos_all(v_pred_216_, v_p_217_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0(lean_object* v_00_u03b1_220_, lean_object* v_f_221_, lean_object* v_p_222_, lean_object* v_init_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_SubExpr_Pos_foldrM___at___00Lean_SubExpr_Pos_all_spec__0___redArg(v_f_221_, v_p_222_, v_init_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_append(lean_object* v_init_226_, lean_object* v_p_227_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = ((lean_object*)(l_Lean_SubExpr_Pos_append___closed__0));
v___x_229_ = l_Lean_SubExpr_Pos_foldl___redArg(v___x_228_, v_init_226_, v_p_227_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_append___boxed(lean_object* v_init_230_, lean_object* v_p_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_SubExpr_Pos_append(v_init_230_, v_p_231_);
lean_dec(v_p_231_);
lean_dec(v_init_230_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(lean_object* v_as_233_, size_t v_i_234_, size_t v_stop_235_, lean_object* v_b_236_){
_start:
{
uint8_t v___x_237_; 
v___x_237_ = lean_usize_dec_eq(v_i_234_, v_stop_235_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_239_; size_t v___x_240_; size_t v___x_241_; 
v___x_238_ = lean_array_uget_borrowed(v_as_233_, v_i_234_);
lean_inc(v___x_238_);
v___x_239_ = l_Lean_SubExpr_Pos_push(v_b_236_, v___x_238_);
lean_dec(v_b_236_);
v___x_240_ = ((size_t)1ULL);
v___x_241_ = lean_usize_add(v_i_234_, v___x_240_);
v_i_234_ = v___x_241_;
v_b_236_ = v___x_239_;
goto _start;
}
else
{
return v_b_236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0___boxed(lean_object* v_as_243_, lean_object* v_i_244_, lean_object* v_stop_245_, lean_object* v_b_246_){
_start:
{
size_t v_i_boxed_247_; size_t v_stop_boxed_248_; lean_object* v_res_249_; 
v_i_boxed_247_ = lean_unbox_usize(v_i_244_);
lean_dec(v_i_244_);
v_stop_boxed_248_ = lean_unbox_usize(v_stop_245_);
lean_dec(v_stop_245_);
v_res_249_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(v_as_243_, v_i_boxed_247_, v_stop_boxed_248_, v_b_246_);
lean_dec_ref(v_as_243_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_ofArray(lean_object* v_ps_250_){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_251_ = lean_unsigned_to_nat(1u);
v___x_252_ = lean_unsigned_to_nat(0u);
v___x_253_ = lean_array_get_size(v_ps_250_);
v___x_254_ = lean_nat_dec_lt(v___x_252_, v___x_253_);
if (v___x_254_ == 0)
{
return v___x_251_;
}
else
{
uint8_t v___x_255_; 
v___x_255_ = lean_nat_dec_le(v___x_253_, v___x_253_);
if (v___x_255_ == 0)
{
if (v___x_254_ == 0)
{
return v___x_251_;
}
else
{
size_t v___x_256_; size_t v___x_257_; lean_object* v___x_258_; 
v___x_256_ = ((size_t)0ULL);
v___x_257_ = lean_usize_of_nat(v___x_253_);
v___x_258_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(v_ps_250_, v___x_256_, v___x_257_, v___x_251_);
return v___x_258_;
}
}
else
{
size_t v___x_259_; size_t v___x_260_; lean_object* v___x_261_; 
v___x_259_ = ((size_t)0ULL);
v___x_260_ = lean_usize_of_nat(v___x_253_);
v___x_261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SubExpr_Pos_ofArray_spec__0(v_ps_250_, v___x_259_, v___x_260_, v___x_251_);
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_ofArray___boxed(lean_object* v_ps_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_SubExpr_Pos_ofArray(v_ps_262_);
lean_dec_ref(v_ps_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toArray(lean_object* v_p_267_){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = ((lean_object*)(l_Lean_SubExpr_Pos_toArray___closed__0));
v___x_269_ = ((lean_object*)(l_Lean_SubExpr_Pos_toArray___closed__1));
v___x_270_ = l_Lean_SubExpr_Pos_foldl___redArg(v___x_268_, v___x_269_, v_p_267_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toArray___boxed(lean_object* v_p_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lean_SubExpr_Pos_toArray(v_p_271_);
lean_dec(v_p_271_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingDomain(lean_object* v_p_273_){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_274_ = lean_unsigned_to_nat(0u);
v___x_275_ = l_Lean_SubExpr_Pos_push(v_p_273_, v___x_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingDomain___boxed(lean_object* v_p_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_p_276_);
lean_dec(v_p_276_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingBody(lean_object* v_p_278_){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = lean_unsigned_to_nat(1u);
v___x_280_ = l_Lean_SubExpr_Pos_push(v_p_278_, v___x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushBindingBody___boxed(lean_object* v_p_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_SubExpr_Pos_pushBindingBody(v_p_281_);
lean_dec(v_p_281_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetVarType(lean_object* v_p_283_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = lean_unsigned_to_nat(0u);
v___x_285_ = l_Lean_SubExpr_Pos_push(v_p_283_, v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetVarType___boxed(lean_object* v_p_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lean_SubExpr_Pos_pushLetVarType(v_p_286_);
lean_dec(v_p_286_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetValue(lean_object* v_p_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_unsigned_to_nat(1u);
v___x_290_ = l_Lean_SubExpr_Pos_push(v_p_288_, v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetValue___boxed(lean_object* v_p_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_SubExpr_Pos_pushLetValue(v_p_291_);
lean_dec(v_p_291_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetBody(lean_object* v_p_293_){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_unsigned_to_nat(2u);
v___x_295_ = l_Lean_SubExpr_Pos_push(v_p_293_, v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushLetBody___boxed(lean_object* v_p_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_SubExpr_Pos_pushLetBody(v_p_296_);
lean_dec(v_p_296_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppFn(lean_object* v_p_298_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = l_Lean_SubExpr_Pos_push(v_p_298_, v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppFn___boxed(lean_object* v_p_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_SubExpr_Pos_pushAppFn(v_p_301_);
lean_dec(v_p_301_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppArg(lean_object* v_p_303_){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = l_Lean_SubExpr_Pos_push(v_p_303_, v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushAppArg___boxed(lean_object* v_p_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_SubExpr_Pos_pushAppArg(v_p_306_);
lean_dec(v_p_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushProj(lean_object* v_p_308_){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = l_Lean_SubExpr_Pos_push(v_p_308_, v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushProj___boxed(lean_object* v_p_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lean_SubExpr_Pos_pushProj(v_p_311_);
lean_dec(v_p_311_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushType(lean_object* v_p_313_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(3u);
v___x_315_ = l_Lean_SubExpr_Pos_push(v_p_313_, v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushType___boxed(lean_object* v_p_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_SubExpr_Pos_pushType(v_p_316_);
lean_dec(v_p_316_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryFn(lean_object* v_numArgs_318_, lean_object* v_p_319_){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = lean_unsigned_to_nat(4u);
v___x_321_ = lean_nat_pow(v___x_320_, v_numArgs_318_);
v___x_322_ = lean_nat_mul(v_p_319_, v___x_321_);
lean_dec(v___x_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryFn___boxed(lean_object* v_numArgs_323_, lean_object* v_p_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lean_SubExpr_Pos_pushNaryFn(v_numArgs_323_, v_p_324_);
lean_dec(v_p_324_);
lean_dec(v_numArgs_323_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object* v_numArgs_326_, lean_object* v_argIdx_327_, lean_object* v_p_328_){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v_this_334_; 
v___x_329_ = lean_unsigned_to_nat(4u);
v___x_330_ = lean_nat_sub(v_numArgs_326_, v_argIdx_327_);
v___x_331_ = lean_nat_pow(v___x_329_, v___x_330_);
lean_dec(v___x_330_);
v___x_332_ = lean_nat_mul(v_p_328_, v___x_331_);
lean_dec(v___x_331_);
v___x_333_ = lean_unsigned_to_nat(1u);
v_this_334_ = lean_nat_add(v___x_332_, v___x_333_);
lean_dec(v___x_332_);
return v_this_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNaryArg___boxed(lean_object* v_numArgs_335_, lean_object* v_argIdx_336_, lean_object* v_p_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_SubExpr_Pos_pushNaryArg(v_numArgs_335_, v_argIdx_336_, v_p_337_);
lean_dec(v_p_337_);
lean_dec(v_argIdx_336_);
lean_dec(v_numArgs_335_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNthBindingDomain(lean_object* v_x_339_, lean_object* v_x_340_){
_start:
{
lean_object* v_zero_341_; uint8_t v_isZero_342_; 
v_zero_341_ = lean_unsigned_to_nat(0u);
v_isZero_342_ = lean_nat_dec_eq(v_x_339_, v_zero_341_);
if (v_isZero_342_ == 1)
{
lean_object* v___x_343_; 
lean_dec(v_x_339_);
v___x_343_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_x_340_);
lean_dec(v_x_340_);
return v___x_343_;
}
else
{
lean_object* v_one_344_; lean_object* v_n_345_; lean_object* v___x_346_; 
v_one_344_ = lean_unsigned_to_nat(1u);
v_n_345_ = lean_nat_sub(v_x_339_, v_one_344_);
lean_dec(v_x_339_);
v___x_346_ = l_Lean_SubExpr_Pos_pushBindingBody(v_x_340_);
lean_dec(v_x_340_);
v_x_339_ = v_n_345_;
v_x_340_ = v___x_346_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_pushNthBindingBody(lean_object* v_x_348_, lean_object* v_x_349_){
_start:
{
lean_object* v_zero_350_; uint8_t v_isZero_351_; 
v_zero_350_ = lean_unsigned_to_nat(0u);
v_isZero_351_ = lean_nat_dec_eq(v_x_348_, v_zero_350_);
if (v_isZero_351_ == 1)
{
lean_dec(v_x_348_);
return v_x_349_;
}
else
{
lean_object* v_one_352_; lean_object* v_n_353_; lean_object* v___x_354_; 
v_one_352_ = lean_unsigned_to_nat(1u);
v_n_353_ = lean_nat_sub(v_x_348_, v_one_352_);
lean_dec(v_x_348_);
v___x_354_ = l_Lean_SubExpr_Pos_pushBindingBody(v_x_349_);
lean_dec(v_x_349_);
v_x_348_ = v_n_353_;
v_x_349_ = v___x_354_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_SubExpr_Pos_toString_spec__0(lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
if (lean_obj_tag(v_a_356_) == 0)
{
lean_object* v___x_358_; 
v___x_358_ = l_List_reverse___redArg(v_a_357_);
return v___x_358_;
}
else
{
lean_object* v_head_359_; lean_object* v_tail_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_369_; 
v_head_359_ = lean_ctor_get(v_a_356_, 0);
v_tail_360_ = lean_ctor_get(v_a_356_, 1);
v_isSharedCheck_369_ = !lean_is_exclusive(v_a_356_);
if (v_isSharedCheck_369_ == 0)
{
v___x_362_ = v_a_356_;
v_isShared_363_ = v_isSharedCheck_369_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_tail_360_);
lean_inc(v_head_359_);
lean_dec(v_a_356_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_369_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_364_ = l_Nat_reprFast(v_head_359_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 1, v_a_357_);
lean_ctor_set(v___x_362_, 0, v___x_364_);
v___x_366_ = v___x_362_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_364_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_a_357_);
v___x_366_ = v_reuseFailAlloc_368_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
v_a_356_ = v_tail_360_;
v_a_357_ = v___x_366_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toString(lean_object* v_p_371_){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_372_ = ((lean_object*)(l_Lean_SubExpr_Pos_toString___closed__0));
v___x_373_ = l_Lean_SubExpr_Pos_toArray(v_p_371_);
v___x_374_ = lean_array_to_list(v___x_373_);
v___x_375_ = lean_box(0);
v___x_376_ = l_List_mapTR_loop___at___00Lean_SubExpr_Pos_toString_spec__0(v___x_374_, v___x_375_);
v___x_377_ = l_String_intercalate(v___x_372_, v___x_376_);
v___x_378_ = lean_string_append(v___x_372_, v___x_377_);
lean_dec_ref(v___x_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_toString___boxed(lean_object* v_p_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_SubExpr_Pos_toString(v_p_379_);
lean_dec(v_p_379_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord(lean_object* v_x_394_){
_start:
{
lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_395_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__0));
v___x_396_ = lean_string_dec_eq(v_x_394_, v___x_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_397_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__1));
v___x_398_ = lean_string_dec_eq(v_x_394_, v___x_397_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; uint8_t v___x_400_; 
v___x_399_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__2));
v___x_400_ = lean_string_dec_eq(v_x_394_, v___x_399_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; uint8_t v___x_402_; 
v___x_401_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__3));
v___x_402_ = lean_string_dec_eq(v_x_394_, v___x_401_);
if (v___x_402_ == 0)
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__4));
v___x_404_ = lean_string_append(v___x_403_, v_x_394_);
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
else
{
lean_object* v___x_406_; 
v___x_406_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__5));
return v___x_406_;
}
}
else
{
lean_object* v___x_407_; 
v___x_407_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__6));
return v___x_407_;
}
}
else
{
lean_object* v___x_408_; 
v___x_408_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7));
return v___x_408_;
}
}
else
{
lean_object* v___x_409_; 
v___x_409_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__8));
return v___x_409_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___boxed(lean_object* v_x_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord(v_x_410_);
lean_dec_ref(v_x_410_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg(){
_start:
{
lean_object* v___x_415_; 
v___x_415_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___closed__0));
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg___boxed(lean_object* v___dummy_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg();
return v_res_417_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0(void){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___redArg();
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1(lean_object* v_s_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___boxed(lean_object* v_s_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1(v_s_421_);
lean_dec_ref(v_s_421_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3(size_t v_sz_423_, size_t v_i_424_, lean_object* v_bs_425_){
_start:
{
uint8_t v___x_426_; 
v___x_426_ = lean_usize_dec_lt(v_i_424_, v_sz_423_);
if (v___x_426_ == 0)
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = l_unsafeCast___redArg(v_bs_425_);
lean_dec_ref(v_bs_425_);
v___x_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
return v___x_428_;
}
else
{
lean_object* v_v_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_v_429_ = lean_array_uget_borrowed(v_bs_425_, v_i_424_);
v___x_430_ = l_unsafeCast___redArg(v_v_429_);
v___x_431_ = l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord(v___x_430_);
lean_dec(v___x_430_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_dec_ref(v_bs_425_);
v_a_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
else
{
lean_object* v_a_440_; lean_object* v___x_441_; lean_object* v_bs_x27_442_; size_t v___x_443_; size_t v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_a_440_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_440_);
lean_dec_ref_known(v___x_431_, 1);
v___x_441_ = lean_unsigned_to_nat(0u);
v_bs_x27_442_ = lean_array_uset(v_bs_425_, v_i_424_, v___x_441_);
v___x_443_ = ((size_t)1ULL);
v___x_444_ = lean_usize_add(v_i_424_, v___x_443_);
v___x_445_ = l_unsafeCast___redArg(v_a_440_);
lean_dec(v_a_440_);
v___x_446_ = lean_array_uset(v_bs_x27_442_, v_i_424_, v___x_445_);
v_i_424_ = v___x_444_;
v_bs_425_ = v___x_446_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3___boxed(lean_object* v_sz_448_, lean_object* v_i_449_, lean_object* v_bs_450_){
_start:
{
size_t v_sz_boxed_451_; size_t v_i_boxed_452_; lean_object* v_res_453_; 
v_sz_boxed_451_ = lean_unbox_usize(v_sz_448_);
lean_dec(v_sz_448_);
v_i_boxed_452_ = lean_unbox_usize(v_i_449_);
lean_dec(v_i_449_);
v_res_453_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3(v_sz_boxed_451_, v_i_boxed_452_, v_bs_450_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0(lean_object* v_x_455_, lean_object* v_x_456_){
_start:
{
if (lean_obj_tag(v_x_456_) == 0)
{
return v_x_455_;
}
else
{
lean_object* v_head_457_; lean_object* v_tail_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v_head_457_ = lean_ctor_get(v_x_456_, 0);
v_tail_458_ = lean_ctor_get(v_x_456_, 1);
v___x_459_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___closed__0));
v___x_460_ = lean_string_append(v_x_455_, v___x_459_);
v___x_461_ = lean_string_append(v___x_460_, v_head_457_);
v_x_455_ = v___x_461_;
v_x_456_ = v_tail_458_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0___boxed(lean_object* v_x_463_, lean_object* v_x_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0(v_x_463_, v_x_464_);
lean_dec(v_x_464_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0(lean_object* v_x_469_){
_start:
{
if (lean_obj_tag(v_x_469_) == 0)
{
lean_object* v___x_470_; 
v___x_470_ = ((lean_object*)(l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__0));
return v___x_470_;
}
else
{
lean_object* v_tail_471_; 
v_tail_471_ = lean_ctor_get(v_x_469_, 1);
if (lean_obj_tag(v_tail_471_) == 0)
{
lean_object* v_head_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v_head_472_ = lean_ctor_get(v_x_469_, 0);
v___x_473_ = ((lean_object*)(l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1));
v___x_474_ = lean_string_append(v___x_473_, v_head_472_);
v___x_475_ = ((lean_object*)(l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__2));
v___x_476_ = lean_string_append(v___x_474_, v___x_475_);
return v___x_476_;
}
else
{
lean_object* v_head_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; uint32_t v___x_481_; lean_object* v___x_482_; 
v_head_477_ = lean_ctor_get(v_x_469_, 0);
v___x_478_ = ((lean_object*)(l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___closed__1));
v___x_479_ = lean_string_append(v___x_478_, v_head_477_);
v___x_480_ = l_List_foldl___at___00List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0_spec__0(v___x_479_, v_tail_471_);
v___x_481_ = 93;
v___x_482_ = lean_string_push(v___x_480_, v___x_481_);
return v___x_482_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0___boxed(lean_object* v_x_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0(v_x_483_);
lean_dec(v_x_483_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(lean_object* v_x_485_, lean_object* v___x_486_, lean_object* v___x_487_, lean_object* v_a_488_, lean_object* v_b_489_){
_start:
{
lean_object* v_it_491_; lean_object* v_startInclusive_492_; lean_object* v_endExclusive_493_; 
if (lean_obj_tag(v_a_488_) == 0)
{
lean_object* v_currPos_498_; lean_object* v_searcher_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_522_; 
v_currPos_498_ = lean_ctor_get(v_a_488_, 0);
v_searcher_499_ = lean_ctor_get(v_a_488_, 1);
v_isSharedCheck_522_ = !lean_is_exclusive(v_a_488_);
if (v_isSharedCheck_522_ == 0)
{
v___x_501_ = v_a_488_;
v_isShared_502_ = v_isSharedCheck_522_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_searcher_499_);
lean_inc(v_currPos_498_);
lean_dec(v_a_488_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_522_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
uint8_t v_decide_503_; 
v_decide_503_ = lean_nat_dec_eq(v_searcher_499_, v___x_487_);
if (v_decide_503_ == 0)
{
uint32_t v___x_504_; uint32_t v___x_505_; uint8_t v___x_506_; 
v___x_504_ = 47;
v___x_505_ = lean_string_utf8_get_fast(v_x_485_, v_searcher_499_);
v___x_506_ = lean_uint32_dec_eq(v___x_505_, v___x_504_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; lean_object* v___x_509_; 
v___x_507_ = lean_string_utf8_next_fast(v_x_485_, v_searcher_499_);
lean_dec(v_searcher_499_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 1, v___x_507_);
v___x_509_ = v___x_501_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_currPos_498_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v___x_507_);
v___x_509_ = v_reuseFailAlloc_511_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
v_a_488_ = v___x_509_;
goto _start;
}
}
else
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v_slice_515_; lean_object* v_nextIt_517_; 
v___x_512_ = lean_string_utf8_next_fast(v_x_485_, v_searcher_499_);
v___x_513_ = lean_nat_sub(v___x_512_, v_searcher_499_);
v___x_514_ = lean_nat_add(v_searcher_499_, v___x_513_);
lean_dec(v___x_513_);
v_slice_515_ = l_String_Slice_subslice_x21(v___x_486_, v_currPos_498_, v_searcher_499_);
lean_inc(v___x_514_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 1, v___x_514_);
lean_ctor_set(v___x_501_, 0, v___x_514_);
v_nextIt_517_ = v___x_501_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v___x_514_);
v_nextIt_517_ = v_reuseFailAlloc_520_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
lean_object* v_startInclusive_518_; lean_object* v_endExclusive_519_; 
v_startInclusive_518_ = lean_ctor_get(v_slice_515_, 0);
lean_inc(v_startInclusive_518_);
v_endExclusive_519_ = lean_ctor_get(v_slice_515_, 1);
lean_inc(v_endExclusive_519_);
lean_dec_ref(v_slice_515_);
v_it_491_ = v_nextIt_517_;
v_startInclusive_492_ = v_startInclusive_518_;
v_endExclusive_493_ = v_endExclusive_519_;
goto v___jp_490_;
}
}
}
else
{
lean_object* v___x_521_; 
lean_del_object(v___x_501_);
lean_dec(v_searcher_499_);
v___x_521_ = lean_box(1);
lean_inc(v___x_487_);
v_it_491_ = v___x_521_;
v_startInclusive_492_ = v_currPos_498_;
v_endExclusive_493_ = v___x_487_;
goto v___jp_490_;
}
}
}
else
{
lean_dec(v___x_487_);
lean_dec_ref(v_x_485_);
return v_b_489_;
}
v___jp_490_:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
lean_inc_ref(v_x_485_);
v___x_494_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_494_, 0, v_x_485_);
lean_ctor_set(v___x_494_, 1, v_startInclusive_492_);
lean_ctor_set(v___x_494_, 2, v_endExclusive_493_);
v___x_495_ = l_String_Slice_toString(v___x_494_);
lean_dec_ref_known(v___x_494_, 3);
v___x_496_ = lean_array_push(v_b_489_, v___x_495_);
v_a_488_ = v_it_491_;
v_b_489_ = v___x_496_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg___boxed(lean_object* v_x_523_, lean_object* v___x_524_, lean_object* v___x_525_, lean_object* v_a_526_, lean_object* v_b_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(v_x_523_, v___x_524_, v___x_525_, v_a_526_, v_b_527_);
lean_dec_ref(v___x_524_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_fromString_x3f(lean_object* v_x_533_){
_start:
{
lean_object* v_ss_535_; lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_540_ = ((lean_object*)(l_Lean_SubExpr_Pos_toString___closed__0));
v___x_541_ = lean_string_dec_eq(v_x_533_, v___x_540_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_542_ = lean_unsigned_to_nat(0u);
v___x_543_ = lean_string_utf8_byte_size(v_x_533_);
lean_inc_ref(v_x_533_);
v___x_544_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_544_, 0, v_x_533_);
lean_ctor_set(v___x_544_, 1, v___x_542_);
lean_ctor_set(v___x_544_, 2, v___x_543_);
v___x_545_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lean_SubExpr_Pos_fromString_x3f_spec__1___closed__0);
v___x_546_ = ((lean_object*)(l_Lean_SubExpr_Pos_fromString_x3f___closed__1));
v___x_547_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(v_x_533_, v___x_544_, v___x_543_, v___x_545_, v___x_546_);
lean_dec_ref_known(v___x_544_, 3);
v___x_548_ = lean_array_to_list(v___x_547_);
if (lean_obj_tag(v___x_548_) == 1)
{
lean_object* v_head_549_; lean_object* v_tail_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v_head_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_head_549_);
v_tail_550_ = lean_ctor_get(v___x_548_, 1);
lean_inc(v_tail_550_);
v___x_551_ = ((lean_object*)(l_Lean_SubExpr_Pos_fromString_x3f___closed__2));
v___x_552_ = lean_string_dec_eq(v_head_549_, v___x_551_);
lean_dec(v_head_549_);
if (v___x_552_ == 0)
{
lean_dec(v_tail_550_);
v_ss_535_ = v___x_548_;
goto v___jp_534_;
}
else
{
lean_object* v___x_553_; size_t v_sz_554_; size_t v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
lean_dec_ref_known(v___x_548_, 2);
v___x_553_ = lean_array_mk(v_tail_550_);
v_sz_554_ = lean_array_size(v___x_553_);
v___x_555_ = ((size_t)0ULL);
v___x_556_ = l_unsafeCast___redArg(v___x_553_);
lean_dec_ref(v___x_553_);
v___x_557_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_SubExpr_Pos_fromString_x3f_spec__3(v_sz_554_, v___x_555_, v___x_556_);
v___x_558_ = l_unsafeCast___redArg(v___x_557_);
lean_dec_ref(v___x_557_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
else
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_575_; 
v_a_567_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_575_ == 0)
{
v___x_569_ = v___x_558_;
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_558_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_571_ = l_Lean_SubExpr_Pos_ofArray(v_a_567_);
lean_dec(v_a_567_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 0, v___x_571_);
v___x_573_ = v___x_569_;
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
return v___x_573_;
}
}
}
}
}
else
{
v_ss_535_ = v___x_548_;
goto v___jp_534_;
}
}
else
{
lean_object* v___x_576_; 
lean_dec_ref(v_x_533_);
v___x_576_ = ((lean_object*)(l___private_Lean_SubExpr_0__Lean_SubExpr_Pos_ofStringCoord___closed__7));
return v___x_576_;
}
v___jp_534_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_536_ = ((lean_object*)(l_Lean_SubExpr_Pos_fromString_x3f___closed__0));
v___x_537_ = l_List_toString___at___00Lean_SubExpr_Pos_fromString_x3f_spec__0(v_ss_535_);
lean_dec(v_ss_535_);
v___x_538_ = lean_string_append(v___x_536_, v___x_537_);
lean_dec_ref(v___x_537_);
v___x_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2(lean_object* v_x_577_, lean_object* v___x_578_, lean_object* v___x_579_, lean_object* v_inst_580_, lean_object* v_R_581_, lean_object* v_a_582_, lean_object* v_b_583_){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___redArg(v_x_577_, v___x_578_, v___x_579_, v_a_582_, v_b_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2___boxed(lean_object* v_x_585_, lean_object* v___x_586_, lean_object* v___x_587_, lean_object* v_inst_588_, lean_object* v_R_589_, lean_object* v_a_590_, lean_object* v_b_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_SubExpr_Pos_fromString_x3f_spec__2(v_x_585_, v___x_586_, v___x_587_, v_inst_588_, v_R_589_, v_a_590_, v_b_591_);
lean_dec_ref(v___x_586_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_fromString_x21(lean_object* v_s_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_SubExpr_Pos_fromString_x3f(v_s_594_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref_known(v___x_595_, 1);
v___x_597_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_598_ = ((lean_object*)(l_Lean_SubExpr_Pos_fromString_x21___closed__0));
v___x_599_ = lean_unsigned_to_nat(140u);
v___x_600_ = lean_unsigned_to_nat(16u);
v___x_601_ = l_mkPanicMessageWithDecl(v___x_597_, v___x_598_, v___x_599_, v___x_600_, v_a_596_);
lean_dec(v_a_596_);
v___x_602_ = l_panic___at___00Lean_SubExpr_Pos_tail_spec__0(v___x_601_);
return v___x_602_;
}
else
{
lean_object* v_a_603_; 
v_a_603_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_595_, 1);
return v_a_603_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_SubExpr_Pos_instDecidableEq(lean_object* v_a_606_, lean_object* v_b_607_){
_start:
{
uint8_t v___x_608_; 
v___x_608_ = lean_nat_dec_eq(v_a_606_, v_b_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instDecidableEq___boxed(lean_object* v_a_609_, lean_object* v_b_610_){
_start:
{
uint8_t v_res_611_; lean_object* v_r_612_; 
v_res_611_ = l_Lean_SubExpr_Pos_instDecidableEq(v_a_609_, v_b_610_);
lean_dec(v_b_610_);
lean_dec(v_a_609_);
v_r_612_ = lean_box(v_res_611_);
return v_r_612_;
}
}
static lean_object* _init_l_Lean_SubExpr_Pos_instEmptyCollection(void){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = lean_unsigned_to_nat(1u);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0(lean_object* v_p_619_, lean_object* v_x_620_){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_621_ = ((lean_object*)(l_Lean_SubExpr_Pos_instRepr___lam__0___closed__1));
v___x_622_ = l_Lean_SubExpr_Pos_toString(v_p_619_);
v___x_623_ = l_String_quote(v___x_622_);
v___x_624_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
v___x_625_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_621_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instRepr___lam__0___boxed(lean_object* v_p_626_, lean_object* v_x_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lean_SubExpr_Pos_instRepr___lam__0(v_p_626_, v_x_627_);
lean_dec(v_x_627_);
lean_dec(v_p_626_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instToJson___lam__0(lean_object* v_s_631_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_632_, 0, v_s_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_Pos_instFromJson___lam__0(lean_object* v_j_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Lean_Json_getStr_x3f(v_j_638_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v___x_639_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_639_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
else
{
lean_object* v_a_648_; lean_object* v___x_649_; 
v_a_648_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_a_648_);
lean_dec_ref_known(v___x_639_, 1);
v___x_649_ = l_Lean_SubExpr_Pos_fromString_x3f(v_a_648_);
return v___x_649_;
}
}
}
static lean_object* _init_l_Lean_instInhabitedSubExpr_default___closed__2(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_655_ = lean_box(0);
v___x_656_ = ((lean_object*)(l_Lean_instInhabitedSubExpr_default___closed__1));
v___x_657_ = l_Lean_Expr_const___override(v___x_656_, v___x_655_);
return v___x_657_;
}
}
static lean_object* _init_l_Lean_instInhabitedSubExpr_default___closed__3(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_658_ = lean_unsigned_to_nat(1u);
v___x_659_ = lean_obj_once(&l_Lean_instInhabitedSubExpr_default___closed__2, &l_Lean_instInhabitedSubExpr_default___closed__2_once, _init_l_Lean_instInhabitedSubExpr_default___closed__2);
v___x_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v___x_658_);
return v___x_660_;
}
}
static lean_object* _init_l_Lean_instInhabitedSubExpr_default(void){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = lean_obj_once(&l_Lean_instInhabitedSubExpr_default___closed__3, &l_Lean_instInhabitedSubExpr_default___closed__3_once, _init_l_Lean_instInhabitedSubExpr_default___closed__3);
return v___x_661_;
}
}
static lean_object* _init_l_Lean_instInhabitedSubExpr(void){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l_Lean_instInhabitedSubExpr_default;
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_mkRoot(lean_object* v_e_663_){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_664_ = lean_unsigned_to_nat(1u);
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v_e_663_);
lean_ctor_set(v___x_665_, 1, v___x_664_);
return v___x_665_;
}
}
LEAN_EXPORT uint8_t l_Lean_SubExpr_isRoot(lean_object* v_s_666_){
_start:
{
lean_object* v_pos_667_; uint8_t v___x_668_; 
v_pos_667_ = lean_ctor_get(v_s_666_, 1);
v___x_668_ = l_Lean_SubExpr_Pos_isRoot(v_pos_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_isRoot___boxed(lean_object* v_s_669_){
_start:
{
uint8_t v_res_670_; lean_object* v_r_671_; 
v_res_670_ = l_Lean_SubExpr_isRoot(v_s_669_);
lean_dec_ref(v_s_669_);
v_r_671_ = lean_box(v_res_670_);
return v_r_671_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_SubExpr_bindingBody_x21_spec__0(lean_object* v_msg_672_){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = l_Lean_instInhabitedSubExpr_default;
v___x_674_ = lean_panic_fn_borrowed(v___x_673_, v_msg_672_);
return v___x_674_;
}
}
static lean_object* _init_l_Lean_SubExpr_bindingBody_x21___closed__2(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_677_ = ((lean_object*)(l_Lean_SubExpr_bindingBody_x21___closed__1));
v___x_678_ = lean_unsigned_to_nat(9u);
v___x_679_ = lean_unsigned_to_nat(179u);
v___x_680_ = ((lean_object*)(l_Lean_SubExpr_bindingBody_x21___closed__0));
v___x_681_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_682_ = l_mkPanicMessageWithDecl(v___x_681_, v___x_680_, v___x_679_, v___x_678_, v___x_677_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_bindingBody_x21(lean_object* v_x_683_){
_start:
{
lean_object* v_expr_684_; lean_object* v_pos_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_699_; 
v_expr_684_ = lean_ctor_get(v_x_683_, 0);
v_pos_685_ = lean_ctor_get(v_x_683_, 1);
v_isSharedCheck_699_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_699_ == 0)
{
v___x_687_ = v_x_683_;
v_isShared_688_ = v_isSharedCheck_699_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_pos_685_);
lean_inc(v_expr_684_);
lean_dec(v_x_683_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_699_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v_b_690_; 
switch(lean_obj_tag(v_expr_684_))
{
case 7:
{
lean_object* v_body_695_; 
v_body_695_ = lean_ctor_get(v_expr_684_, 2);
lean_inc_ref(v_body_695_);
lean_dec_ref_known(v_expr_684_, 3);
v_b_690_ = v_body_695_;
goto v___jp_689_;
}
case 6:
{
lean_object* v_body_696_; 
v_body_696_ = lean_ctor_get(v_expr_684_, 2);
lean_inc_ref(v_body_696_);
lean_dec_ref_known(v_expr_684_, 3);
v_b_690_ = v_body_696_;
goto v___jp_689_;
}
default: 
{
lean_object* v___x_697_; lean_object* v___x_698_; 
lean_del_object(v___x_687_);
lean_dec(v_pos_685_);
lean_dec_ref(v_expr_684_);
v___x_697_ = lean_obj_once(&l_Lean_SubExpr_bindingBody_x21___closed__2, &l_Lean_SubExpr_bindingBody_x21___closed__2_once, _init_l_Lean_SubExpr_bindingBody_x21___closed__2);
v___x_698_ = l_panic___at___00Lean_SubExpr_bindingBody_x21_spec__0(v___x_697_);
return v___x_698_;
}
}
v___jp_689_:
{
lean_object* v___x_691_; lean_object* v___x_693_; 
v___x_691_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_685_);
lean_dec(v_pos_685_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 1, v___x_691_);
lean_ctor_set(v___x_687_, 0, v_b_690_);
v___x_693_ = v___x_687_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_b_690_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_691_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
}
static lean_object* _init_l_Lean_SubExpr_bindingDomain_x21___closed__1(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_701_ = ((lean_object*)(l_Lean_SubExpr_bindingBody_x21___closed__1));
v___x_702_ = lean_unsigned_to_nat(9u);
v___x_703_ = lean_unsigned_to_nat(184u);
v___x_704_ = ((lean_object*)(l_Lean_SubExpr_bindingDomain_x21___closed__0));
v___x_705_ = ((lean_object*)(l_Lean_SubExpr_Pos_head___closed__0));
v___x_706_ = l_mkPanicMessageWithDecl(v___x_705_, v___x_704_, v___x_703_, v___x_702_, v___x_701_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_bindingDomain_x21(lean_object* v_x_707_){
_start:
{
lean_object* v_expr_708_; lean_object* v_pos_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_723_; 
v_expr_708_ = lean_ctor_get(v_x_707_, 0);
v_pos_709_ = lean_ctor_get(v_x_707_, 1);
v_isSharedCheck_723_ = !lean_is_exclusive(v_x_707_);
if (v_isSharedCheck_723_ == 0)
{
v___x_711_ = v_x_707_;
v_isShared_712_ = v_isSharedCheck_723_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_pos_709_);
lean_inc(v_expr_708_);
lean_dec(v_x_707_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_723_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v_t_714_; 
switch(lean_obj_tag(v_expr_708_))
{
case 7:
{
lean_object* v_binderType_719_; 
v_binderType_719_ = lean_ctor_get(v_expr_708_, 1);
lean_inc_ref(v_binderType_719_);
lean_dec_ref_known(v_expr_708_, 3);
v_t_714_ = v_binderType_719_;
goto v___jp_713_;
}
case 6:
{
lean_object* v_binderType_720_; 
v_binderType_720_ = lean_ctor_get(v_expr_708_, 1);
lean_inc_ref(v_binderType_720_);
lean_dec_ref_known(v_expr_708_, 3);
v_t_714_ = v_binderType_720_;
goto v___jp_713_;
}
default: 
{
lean_object* v___x_721_; lean_object* v___x_722_; 
lean_del_object(v___x_711_);
lean_dec(v_pos_709_);
lean_dec_ref(v_expr_708_);
v___x_721_ = lean_obj_once(&l_Lean_SubExpr_bindingDomain_x21___closed__1, &l_Lean_SubExpr_bindingDomain_x21___closed__1_once, _init_l_Lean_SubExpr_bindingDomain_x21___closed__1);
v___x_722_ = l_panic___at___00Lean_SubExpr_bindingBody_x21_spec__0(v___x_721_);
return v___x_722_;
}
}
v___jp_713_:
{
lean_object* v___x_715_; lean_object* v___x_717_; 
v___x_715_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_709_);
lean_dec(v_pos_709_);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_715_);
lean_ctor_set(v___x_711_, 0, v_t_714_);
v___x_717_ = v___x_711_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_t_714_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v___x_715_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonFVarId___lam__0(lean_object* v_f_724_){
_start:
{
uint8_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_725_ = 1;
v___x_726_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_f_724_, v___x_725_);
v___x_727_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonFVarId___lam__0(lean_object* v_j_731_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = l_Lean_Name_fromJson_x3f(v_j_731_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
else
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
v_a_741_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_732_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_732_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_741_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorIdx(lean_object* v_x_752_){
_start:
{
switch(lean_obj_tag(v_x_752_))
{
case 0:
{
lean_object* v___x_753_; 
v___x_753_ = lean_unsigned_to_nat(0u);
return v___x_753_;
}
case 1:
{
lean_object* v___x_754_; 
v___x_754_ = lean_unsigned_to_nat(1u);
return v___x_754_;
}
case 2:
{
lean_object* v___x_755_; 
v___x_755_ = lean_unsigned_to_nat(2u);
return v___x_755_;
}
default: 
{
lean_object* v___x_756_; 
v___x_756_ = lean_unsigned_to_nat(3u);
return v___x_756_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorIdx___boxed(lean_object* v_x_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_SubExpr_GoalLocation_ctorIdx(v_x_757_);
lean_dec_ref(v_x_757_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim___redArg(lean_object* v_t_759_, lean_object* v_k_760_){
_start:
{
switch(lean_obj_tag(v_t_759_))
{
case 1:
{
lean_object* v_a_761_; lean_object* v_a_762_; lean_object* v___x_763_; 
v_a_761_ = lean_ctor_get(v_t_759_, 0);
lean_inc(v_a_761_);
v_a_762_ = lean_ctor_get(v_t_759_, 1);
lean_inc(v_a_762_);
lean_dec_ref_known(v_t_759_, 2);
v___x_763_ = lean_apply_2(v_k_760_, v_a_761_, v_a_762_);
return v___x_763_;
}
case 2:
{
lean_object* v_a_764_; lean_object* v_a_765_; lean_object* v___x_766_; 
v_a_764_ = lean_ctor_get(v_t_759_, 0);
lean_inc(v_a_764_);
v_a_765_ = lean_ctor_get(v_t_759_, 1);
lean_inc(v_a_765_);
lean_dec_ref_known(v_t_759_, 2);
v___x_766_ = lean_apply_2(v_k_760_, v_a_764_, v_a_765_);
return v___x_766_;
}
default: 
{
lean_object* v_a_767_; lean_object* v___x_768_; 
v_a_767_ = lean_ctor_get(v_t_759_, 0);
lean_inc(v_a_767_);
lean_dec_ref(v_t_759_);
v___x_768_ = lean_apply_1(v_k_760_, v_a_767_);
return v___x_768_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim(lean_object* v_motive_769_, lean_object* v_ctorIdx_770_, lean_object* v_t_771_, lean_object* v_h_772_, lean_object* v_k_773_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_771_, v_k_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_ctorElim___boxed(lean_object* v_motive_775_, lean_object* v_ctorIdx_776_, lean_object* v_t_777_, lean_object* v_h_778_, lean_object* v_k_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_SubExpr_GoalLocation_ctorElim(v_motive_775_, v_ctorIdx_776_, v_t_777_, v_h_778_, v_k_779_);
lean_dec(v_ctorIdx_776_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hyp_elim___redArg(lean_object* v_t_781_, lean_object* v_hyp_782_){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_781_, v_hyp_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hyp_elim(lean_object* v_motive_784_, lean_object* v_t_785_, lean_object* v_h_786_, lean_object* v_hyp_787_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_785_, v_hyp_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypType_elim___redArg(lean_object* v_t_789_, lean_object* v_hypType_790_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_789_, v_hypType_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypType_elim(lean_object* v_motive_792_, lean_object* v_t_793_, lean_object* v_h_794_, lean_object* v_hypType_795_){
_start:
{
lean_object* v___x_796_; 
v___x_796_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_793_, v_hypType_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypValue_elim___redArg(lean_object* v_t_797_, lean_object* v_hypValue_798_){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_797_, v_hypValue_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_hypValue_elim(lean_object* v_motive_800_, lean_object* v_t_801_, lean_object* v_h_802_, lean_object* v_hypValue_803_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_801_, v_hypValue_803_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_target_elim___redArg(lean_object* v_t_805_, lean_object* v_target_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_805_, v_target_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_GoalLocation_target_elim(lean_object* v_motive_808_, lean_object* v_t_809_, lean_object* v_h_810_, lean_object* v_target_811_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = l_Lean_SubExpr_GoalLocation_ctorElim___redArg(v_t_809_, v_target_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonGoalLocation_fromJson(lean_object* v_json_823_){
_start:
{
lean_object* v___x_824_; 
lean_inc(v_json_823_);
v___x_824_ = l_Lean_Json_getTag_x3f(v_json_823_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v___x_825_; 
lean_dec(v_json_823_);
v___x_825_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__1));
return v___x_825_;
}
else
{
lean_object* v_val_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_1026_; 
v_val_826_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_828_ = v___x_824_;
v_isShared_829_ = v_isSharedCheck_1026_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_val_826_);
lean_dec(v___x_824_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_1026_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_831_; uint8_t v___x_832_; 
v___x_830_ = lean_box(0);
v___x_831_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2));
v___x_832_ = lean_string_dec_eq(v_val_826_, v___x_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_833_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3));
v___x_834_ = lean_string_dec_eq(v_val_826_, v___x_833_);
if (v___x_834_ == 0)
{
lean_object* v___x_835_; uint8_t v___x_836_; 
lean_del_object(v___x_828_);
v___x_835_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4));
v___x_836_ = lean_string_dec_eq(v_val_826_, v___x_835_);
if (v___x_836_ == 0)
{
lean_object* v___x_837_; uint8_t v___x_838_; 
v___x_837_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5));
v___x_838_ = lean_string_dec_eq(v_val_826_, v___x_837_);
lean_dec(v_val_826_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; 
lean_dec(v_json_823_);
v___x_839_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__7));
return v___x_839_;
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_840_ = lean_unsigned_to_nat(2u);
v___x_841_ = lean_box(0);
v___x_842_ = l_Lean_Json_parseCtorFields(v_json_823_, v___x_837_, v___x_840_, v___x_841_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_850_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_850_ == 0)
{
v___x_845_ = v___x_842_;
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_842_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_a_843_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
else
{
lean_object* v_a_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v_a_851_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_a_851_);
lean_dec_ref_known(v___x_842_, 1);
v___x_852_ = lean_unsigned_to_nat(0u);
v___x_853_ = lean_array_get_borrowed(v___x_830_, v_a_851_, v___x_852_);
lean_inc(v___x_853_);
v___x_854_ = l_Lean_Name_fromJson_x3f(v___x_853_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
lean_dec(v_a_851_);
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_a_863_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_854_, 1);
v___x_864_ = lean_unsigned_to_nat(1u);
v___x_865_ = lean_array_get(v___x_830_, v_a_851_, v___x_864_);
lean_dec(v_a_851_);
v___x_866_ = l_Lean_Json_getStr_x3f(v___x_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec(v_a_863_);
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
else
{
lean_object* v_a_875_; lean_object* v___x_876_; 
v_a_875_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_866_, 1);
v___x_876_ = l_Lean_SubExpr_Pos_fromString_x3f(v_a_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec(v_a_863_);
v_a_877_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_876_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_876_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_893_; 
v_a_885_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_893_ == 0)
{
v___x_887_ = v___x_876_;
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_876_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; lean_object* v___x_891_; 
v___x_889_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_889_, 0, v_a_863_);
lean_ctor_set(v___x_889_, 1, v_a_885_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_889_);
v___x_891_ = v___x_887_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
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
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec(v_val_826_);
v___x_894_ = lean_unsigned_to_nat(2u);
v___x_895_ = lean_box(0);
v___x_896_ = l_Lean_Json_parseCtorFields(v_json_823_, v___x_835_, v___x_894_, v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_896_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_896_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v_a_905_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_896_, 1);
v___x_906_ = lean_unsigned_to_nat(0u);
v___x_907_ = lean_array_get_borrowed(v___x_830_, v_a_905_, v___x_906_);
lean_inc(v___x_907_);
v___x_908_ = l_Lean_Name_fromJson_x3f(v___x_907_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v_a_905_);
v_a_909_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_908_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_908_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v_a_917_ = lean_ctor_get(v___x_908_, 0);
lean_inc(v_a_917_);
lean_dec_ref_known(v___x_908_, 1);
v___x_918_ = lean_unsigned_to_nat(1u);
v___x_919_ = lean_array_get(v___x_830_, v_a_905_, v___x_918_);
lean_dec(v_a_905_);
v___x_920_ = l_Lean_Json_getStr_x3f(v___x_919_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
lean_dec(v_a_917_);
v_a_921_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_920_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_920_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
else
{
lean_object* v_a_929_; lean_object* v___x_930_; 
v_a_929_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v___x_920_, 1);
v___x_930_ = l_Lean_SubExpr_Pos_fromString_x3f(v_a_929_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
lean_dec(v_a_917_);
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_947_; 
v_a_939_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_947_ == 0)
{
v___x_941_ = v___x_930_;
v_isShared_942_ = v_isSharedCheck_947_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_930_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_947_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v___x_945_; 
v___x_943_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_943_, 0, v_a_917_);
lean_ctor_set(v___x_943_, 1, v_a_939_);
if (v_isShared_942_ == 0)
{
lean_ctor_set(v___x_941_, 0, v___x_943_);
v___x_945_ = v___x_941_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_943_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
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
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
lean_dec(v_val_826_);
v___x_948_ = lean_unsigned_to_nat(1u);
v___x_949_ = lean_box(0);
v___x_950_ = l_Lean_Json_parseCtorFields(v_json_823_, v___x_833_, v___x_948_, v___x_949_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_del_object(v___x_828_);
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v_a_959_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_a_959_);
lean_dec_ref_known(v___x_950_, 1);
v___x_960_ = lean_unsigned_to_nat(0u);
v___x_961_ = lean_array_get(v___x_830_, v_a_959_, v___x_960_);
lean_dec(v_a_959_);
v___x_962_ = l_Lean_Name_fromJson_x3f(v___x_961_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
lean_del_object(v___x_828_);
v_a_963_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___x_962_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___x_962_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_981_; 
v_a_971_ = lean_ctor_get(v___x_962_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_981_ == 0)
{
v___x_973_ = v___x_962_;
v_isShared_974_ = v_isSharedCheck_981_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_962_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_981_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_829_ == 0)
{
lean_ctor_set_tag(v___x_828_, 0);
lean_ctor_set(v___x_828_, 0, v_a_971_);
v___x_976_ = v___x_828_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_980_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
lean_object* v___x_978_; 
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 0, v___x_976_);
v___x_978_ = v___x_973_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
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
}
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
lean_dec(v_val_826_);
v___x_982_ = lean_unsigned_to_nat(1u);
v___x_983_ = lean_box(0);
v___x_984_ = l_Lean_Json_parseCtorFields(v_json_823_, v___x_831_, v___x_982_, v___x_983_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
lean_del_object(v___x_828_);
v_a_985_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_984_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_984_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
else
{
lean_object* v_a_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v_a_993_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_993_);
lean_dec_ref_known(v___x_984_, 1);
v___x_994_ = lean_unsigned_to_nat(0u);
v___x_995_ = lean_array_get(v___x_830_, v_a_993_, v___x_994_);
lean_dec(v_a_993_);
v___x_996_ = l_Lean_Json_getStr_x3f(v___x_995_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
lean_del_object(v___x_828_);
v_a_997_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_996_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_996_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
else
{
lean_object* v_a_1005_; lean_object* v___x_1006_; 
v_a_1005_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_996_, 1);
v___x_1006_ = l_Lean_SubExpr_Pos_fromString_x3f(v_a_1005_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
lean_del_object(v___x_828_);
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1006_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1006_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1025_; 
v_a_1015_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1017_ = v___x_1006_;
v_isShared_1018_ = v_isSharedCheck_1025_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1006_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1025_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_829_ == 0)
{
lean_ctor_set_tag(v___x_828_, 3);
lean_ctor_set(v___x_828_, 0, v_a_1015_);
v___x_1020_ = v___x_828_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
lean_object* v___x_1022_; 
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v___x_1020_);
v___x_1022_ = v___x_1017_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
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
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonGoalLocation_toJson(lean_object* v_x_1029_){
_start:
{
switch(lean_obj_tag(v_x_1029_))
{
case 0:
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1044_; 
v_a_1030_ = lean_ctor_get(v_x_1029_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_x_1029_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1032_ = v_x_1029_;
v_isShared_1033_ = v_isSharedCheck_1044_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v_x_1029_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1044_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1034_; uint8_t v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1038_; 
v___x_1034_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__3));
v___x_1035_ = 1;
v___x_1036_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_1030_, v___x_1035_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set_tag(v___x_1032_, 3);
lean_ctor_set(v___x_1032_, 0, v___x_1036_);
v___x_1038_ = v___x_1032_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1034_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = l_Lean_Json_mkObj(v___x_1041_);
lean_dec_ref_known(v___x_1041_, 2);
return v___x_1042_;
}
}
}
case 1:
{
lean_object* v_a_1045_; lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1067_; 
v_a_1045_ = lean_ctor_get(v_x_1029_, 0);
v_a_1046_ = lean_ctor_get(v_x_1029_, 1);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_x_1029_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1048_ = v_x_1029_;
v_isShared_1049_ = v_isSharedCheck_1067_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_inc(v_a_1045_);
lean_dec(v_x_1029_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1067_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1050_; uint8_t v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1062_; 
v___x_1050_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__4));
v___x_1051_ = 1;
v___x_1052_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_1045_, v___x_1051_);
v___x_1053_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
v___x_1054_ = l_Lean_SubExpr_Pos_toString(v_a_1046_);
lean_dec(v_a_1046_);
v___x_1055_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
v___x_1056_ = lean_unsigned_to_nat(2u);
v___x_1057_ = lean_mk_empty_array_with_capacity(v___x_1056_);
v___x_1058_ = lean_array_push(v___x_1057_, v___x_1053_);
v___x_1059_ = lean_array_push(v___x_1058_, v___x_1055_);
v___x_1060_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set_tag(v___x_1048_, 0);
lean_ctor_set(v___x_1048_, 1, v___x_1060_);
lean_ctor_set(v___x_1048_, 0, v___x_1050_);
v___x_1062_ = v___x_1048_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1050_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v___x_1060_);
v___x_1062_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1063_ = lean_box(0);
v___x_1064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = l_Lean_Json_mkObj(v___x_1064_);
lean_dec_ref_known(v___x_1064_, 2);
return v___x_1065_;
}
}
}
case 2:
{
lean_object* v_a_1068_; lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1090_; 
v_a_1068_ = lean_ctor_get(v_x_1029_, 0);
v_a_1069_ = lean_ctor_get(v_x_1029_, 1);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_x_1029_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1071_ = v_x_1029_;
v_isShared_1072_ = v_isSharedCheck_1090_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_inc(v_a_1068_);
lean_dec(v_x_1029_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1090_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1073_; uint8_t v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1085_; 
v___x_1073_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__5));
v___x_1074_ = 1;
v___x_1075_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_1068_, v___x_1074_);
v___x_1076_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
v___x_1077_ = l_Lean_SubExpr_Pos_toString(v_a_1069_);
lean_dec(v_a_1069_);
v___x_1078_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
v___x_1079_ = lean_unsigned_to_nat(2u);
v___x_1080_ = lean_mk_empty_array_with_capacity(v___x_1079_);
v___x_1081_ = lean_array_push(v___x_1080_, v___x_1076_);
v___x_1082_ = lean_array_push(v___x_1081_, v___x_1078_);
v___x_1083_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set_tag(v___x_1071_, 0);
lean_ctor_set(v___x_1071_, 1, v___x_1083_);
lean_ctor_set(v___x_1071_, 0, v___x_1073_);
v___x_1085_ = v___x_1071_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1073_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v___x_1083_);
v___x_1085_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = l_Lean_Json_mkObj(v___x_1087_);
lean_dec_ref_known(v___x_1087_, 2);
return v___x_1088_;
}
}
}
default: 
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1104_; 
v_a_1091_ = lean_ctor_get(v_x_1029_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v_x_1029_);
if (v_isSharedCheck_1104_ == 0)
{
v___x_1093_ = v_x_1029_;
v_isShared_1094_ = v_isSharedCheck_1104_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v_x_1029_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1104_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1095_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalLocation_fromJson___closed__2));
v___x_1096_ = l_Lean_SubExpr_Pos_toString(v_a_1091_);
lean_dec(v_a_1091_);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v___x_1096_);
v___x_1098_ = v___x_1093_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1095_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
v___x_1100_ = lean_box(0);
v___x_1101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1099_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = l_Lean_Json_mkObj(v___x_1101_);
lean_dec_ref_known(v___x_1101_, 2);
return v___x_1102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0(lean_object* v_j_1107_, lean_object* v_k_1108_){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = l_Lean_Json_getObjValD(v_j_1107_, v_k_1108_);
v___x_1110_ = l_Lean_Name_fromJson_x3f(v___x_1109_);
if (lean_obj_tag(v___x_1110_) == 0)
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
v_a_1111_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1110_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1110_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
v_a_1119_ = lean_ctor_get(v___x_1110_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1110_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1110_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0___boxed(lean_object* v_j_1127_, lean_object* v_k_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0(v_j_1127_, v_k_1128_);
lean_dec_ref(v_k_1128_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1(lean_object* v_j_1130_, lean_object* v_k_1131_){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = l_Lean_Json_getObjValD(v_j_1130_, v_k_1131_);
v___x_1133_ = l_Lean_SubExpr_instFromJsonGoalLocation_fromJson(v___x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1___boxed(lean_object* v_j_1134_, lean_object* v_k_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1(v_j_1134_, v_k_1135_);
lean_dec_ref(v_k_1135_);
return v_res_1136_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5(void){
_start:
{
uint8_t v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1145_ = 1;
v___x_1146_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__4));
v___x_1147_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1146_, v___x_1145_);
return v___x_1147_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7(void){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1149_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__6));
v___x_1150_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__5);
v___x_1151_ = lean_string_append(v___x_1150_, v___x_1149_);
return v___x_1151_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9(void){
_start:
{
uint8_t v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1154_ = 1;
v___x_1155_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__8));
v___x_1156_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1155_, v___x_1154_);
return v___x_1156_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10(void){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__9);
v___x_1158_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7);
v___x_1159_ = lean_string_append(v___x_1158_, v___x_1157_);
return v___x_1159_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1161_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11));
v___x_1162_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__10);
v___x_1163_ = lean_string_append(v___x_1162_, v___x_1161_);
return v___x_1163_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15(void){
_start:
{
uint8_t v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1167_ = 1;
v___x_1168_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__14));
v___x_1169_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1168_, v___x_1167_);
return v___x_1169_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16(void){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1170_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__15);
v___x_1171_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__7);
v___x_1172_ = lean_string_append(v___x_1171_, v___x_1170_);
return v___x_1172_;
}
}
static lean_object* _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17(void){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1173_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__11));
v___x_1174_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__16);
v___x_1175_ = lean_string_append(v___x_1174_, v___x_1173_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson(lean_object* v_json_1176_){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0));
lean_inc(v_json_1176_);
v___x_1178_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__0(v_json_1176_, v___x_1177_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1188_; 
lean_dec(v_json_1176_);
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1181_ = v___x_1178_;
v_isShared_1182_ = v_isSharedCheck_1188_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1178_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1188_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1183_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__12);
v___x_1184_ = lean_string_append(v___x_1183_, v_a_1179_);
lean_dec(v_a_1179_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 0, v___x_1184_);
v___x_1186_ = v___x_1181_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
else
{
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
lean_dec(v_json_1176_);
v_a_1189_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___x_1178_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1178_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set_tag(v___x_1191_, 0);
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
else
{
lean_object* v_a_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v_a_1197_ = lean_ctor_get(v___x_1178_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v___x_1178_, 1);
v___x_1198_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13));
v___x_1199_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_SubExpr_instFromJsonGoalsLocation_fromJson_spec__1(v_json_1176_, v___x_1198_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1209_; 
lean_dec(v_a_1197_);
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1202_ = v___x_1199_;
v_isShared_1203_ = v_isSharedCheck_1209_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1209_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1204_ = lean_obj_once(&l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17, &l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17_once, _init_l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__17);
v___x_1205_ = lean_string_append(v___x_1204_, v_a_1200_);
lean_dec(v_a_1200_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1205_);
v___x_1207_ = v___x_1202_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
else
{
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec(v_a_1197_);
v_a_1210_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1199_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1199_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
lean_ctor_set_tag(v___x_1212_, 0);
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1226_; 
v_a_1218_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1220_ = v___x_1199_;
v_isShared_1221_ = v_isSharedCheck_1226_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1199_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1226_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1222_; lean_object* v___x_1224_; 
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v_a_1197_);
lean_ctor_set(v___x_1222_, 1, v_a_1218_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v___x_1222_);
v___x_1224_ = v___x_1220_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1222_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_SubExpr_instToJsonGoalsLocation_toJson_spec__0(lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
if (lean_obj_tag(v_a_1229_) == 0)
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_array_to_list(v_a_1230_);
return v___x_1231_;
}
else
{
lean_object* v_head_1232_; lean_object* v_tail_1233_; lean_object* v___x_1234_; 
v_head_1232_ = lean_ctor_get(v_a_1229_, 0);
lean_inc(v_head_1232_);
v_tail_1233_ = lean_ctor_get(v_a_1229_, 1);
lean_inc(v_tail_1233_);
lean_dec_ref_known(v_a_1229_, 2);
v___x_1234_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1230_, v_head_1232_);
v_a_1229_ = v_tail_1233_;
v_a_1230_ = v___x_1234_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SubExpr_instToJsonGoalsLocation_toJson(lean_object* v_x_1238_){
_start:
{
lean_object* v_mvarId_1239_; lean_object* v_loc_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1262_; 
v_mvarId_1239_ = lean_ctor_get(v_x_1238_, 0);
v_loc_1240_ = lean_ctor_get(v_x_1238_, 1);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_x_1238_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1242_ = v_x_1238_;
v_isShared_1243_ = v_isSharedCheck_1262_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_loc_1240_);
lean_inc(v_mvarId_1239_);
lean_dec(v_x_1238_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1262_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1244_; uint8_t v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
v___x_1244_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__0));
v___x_1245_ = 1;
v___x_1246_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mvarId_1239_, v___x_1245_);
v___x_1247_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 1, v___x_1247_);
lean_ctor_set(v___x_1242_, 0, v___x_1244_);
v___x_1249_ = v___x_1242_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1244_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v___x_1247_);
v___x_1249_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1250_ = lean_box(0);
v___x_1251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1249_);
lean_ctor_set(v___x_1251_, 1, v___x_1250_);
v___x_1252_ = ((lean_object*)(l_Lean_SubExpr_instFromJsonGoalsLocation_fromJson___closed__13));
v___x_1253_ = l_Lean_SubExpr_instToJsonGoalLocation_toJson(v_loc_1240_);
v___x_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1252_);
lean_ctor_set(v___x_1254_, 1, v___x_1253_);
v___x_1255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
lean_ctor_set(v___x_1255_, 1, v___x_1250_);
v___x_1256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1256_, 0, v___x_1255_);
lean_ctor_set(v___x_1256_, 1, v___x_1250_);
v___x_1257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1251_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = ((lean_object*)(l_Lean_SubExpr_instToJsonGoalsLocation_toJson___closed__0));
v___x_1259_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_SubExpr_instToJsonGoalsLocation_toJson_spec__0(v___x_1257_, v___x_1258_);
v___x_1260_ = l_Lean_Json_mkObj(v___x_1259_);
lean_dec(v___x_1259_);
return v___x_1260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg___lam__0(lean_object* v_p_1265_, lean_object* v_visit_1266_, lean_object* v_arg_1267_, lean_object* v_x_1268_){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = l_Lean_SubExpr_Pos_pushAppArg(v_p_1265_);
v___x_1270_ = lean_apply_2(v_visit_1266_, v___x_1269_, v_arg_1267_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg___lam__0___boxed(lean_object* v_p_1271_, lean_object* v_visit_1272_, lean_object* v_arg_1273_, lean_object* v_x_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Lean_Expr_traverseAppWithPos___redArg___lam__0(v_p_1271_, v_visit_1272_, v_arg_1273_, v_x_1274_);
lean_dec(v_p_1271_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos___redArg(lean_object* v_inst_1276_, lean_object* v_visit_1277_, lean_object* v_p_1278_, lean_object* v_e_1279_){
_start:
{
if (lean_obj_tag(v_e_1279_) == 5)
{
lean_object* v_toApplicative_1280_; lean_object* v_toFunctor_1281_; lean_object* v_toSeq_1282_; lean_object* v_fn_1283_; lean_object* v_arg_1284_; lean_object* v_map_1285_; lean_object* v___f_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_toApplicative_1280_ = lean_ctor_get(v_inst_1276_, 0);
v_toFunctor_1281_ = lean_ctor_get(v_toApplicative_1280_, 0);
v_toSeq_1282_ = lean_ctor_get(v_toApplicative_1280_, 2);
lean_inc(v_toSeq_1282_);
v_fn_1283_ = lean_ctor_get(v_e_1279_, 0);
lean_inc_ref(v_fn_1283_);
v_arg_1284_ = lean_ctor_get(v_e_1279_, 1);
v_map_1285_ = lean_ctor_get(v_toFunctor_1281_, 0);
lean_inc(v_map_1285_);
lean_inc_ref(v_arg_1284_);
lean_inc(v_visit_1277_);
lean_inc(v_p_1278_);
v___f_1286_ = lean_alloc_closure((void*)(l_Lean_Expr_traverseAppWithPos___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1286_, 0, v_p_1278_);
lean_closure_set(v___f_1286_, 1, v_visit_1277_);
lean_closure_set(v___f_1286_, 2, v_arg_1284_);
v___x_1287_ = lean_alloc_closure((void*)(l___private_Lean_Expr_0__Lean_Expr_updateApp_x21Impl___boxed), 3, 1);
lean_closure_set(v___x_1287_, 0, v_e_1279_);
v___x_1288_ = l_Lean_SubExpr_Pos_pushAppFn(v_p_1278_);
lean_dec(v_p_1278_);
v___x_1289_ = l_Lean_Expr_traverseAppWithPos___redArg(v_inst_1276_, v_visit_1277_, v___x_1288_, v_fn_1283_);
v___x_1290_ = lean_apply_4(v_map_1285_, lean_box(0), lean_box(0), v___x_1287_, v___x_1289_);
v___x_1291_ = lean_apply_4(v_toSeq_1282_, lean_box(0), lean_box(0), v___x_1290_, v___f_1286_);
return v___x_1291_;
}
else
{
lean_object* v___x_1292_; 
lean_dec_ref(v_inst_1276_);
v___x_1292_ = lean_apply_2(v_visit_1277_, v_p_1278_, v_e_1279_);
return v___x_1292_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_traverseAppWithPos(lean_object* v_M_1293_, lean_object* v_inst_1294_, lean_object* v_visit_1295_, lean_object* v_p_1296_, lean_object* v_e_1297_){
_start:
{
lean_object* v___x_1298_; 
v___x_1298_ = l_Lean_Expr_traverseAppWithPos___redArg(v_inst_1294_, v_visit_1295_, v_p_1296_, v_e_1297_);
return v___x_1298_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_SubExpr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_SubExpr_Pos_maxChildren = _init_l_Lean_SubExpr_Pos_maxChildren();
lean_mark_persistent(l_Lean_SubExpr_Pos_maxChildren);
l_Lean_SubExpr_Pos_typeCoord = _init_l_Lean_SubExpr_Pos_typeCoord();
lean_mark_persistent(l_Lean_SubExpr_Pos_typeCoord);
l_Lean_SubExpr_Pos_root = _init_l_Lean_SubExpr_Pos_root();
lean_mark_persistent(l_Lean_SubExpr_Pos_root);
l_Lean_SubExpr_Pos_instInhabited = _init_l_Lean_SubExpr_Pos_instInhabited();
lean_mark_persistent(l_Lean_SubExpr_Pos_instInhabited);
l_Lean_SubExpr_Pos_instEmptyCollection = _init_l_Lean_SubExpr_Pos_instEmptyCollection();
lean_mark_persistent(l_Lean_SubExpr_Pos_instEmptyCollection);
l_Lean_instInhabitedSubExpr_default = _init_l_Lean_instInhabitedSubExpr_default();
lean_mark_persistent(l_Lean_instInhabitedSubExpr_default);
l_Lean_instInhabitedSubExpr = _init_l_Lean_instInhabitedSubExpr();
lean_mark_persistent(l_Lean_instInhabitedSubExpr);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_SubExpr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_SubExpr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_SubExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_SubExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_SubExpr(builtin);
}
#ifdef __cplusplus
}
#endif

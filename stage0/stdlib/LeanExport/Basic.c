// Lean compiler output
// Module: LeanExport.Basic
// Imports: public import Lean public import Std.Data.HashMap.Basic
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
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_setObjVal_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_NameHashSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_NameHashSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Level_param___override(lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_instReprDataValue_repr(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
extern lean_object* l_Lean_instInhabitedConstantInfo_default;
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_union___at___00Std_DTreeMap_union_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_inductiveVal_x21(lean_object*);
uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
extern lean_object* l_Lean_githash;
extern lean_object* l_Lean_versionString;
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_IO_println___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "implicit"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "strictImplicit"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instImplicit"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(uint8_t);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___boxed(lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "abbrev"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___boxed(lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ctor"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(uint8_t);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___boxed(lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "safe"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(uint8_t);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__Lean_KVMap_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_KVMap_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__0;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__1;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__2;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__3;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__4;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__5;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__6;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__7;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__8;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__9;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__10;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__11;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__12;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__13;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__14;
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_M_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_M_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_any___at___00LeanExport_initState_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "--ignore-missing"};
static const lean_object* l_List_any___at___00LeanExport_initState_spec__2___closed__0 = (const lean_object*)&l_List_any___at___00LeanExport_initState_spec__2___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__2___boxed(lean_object*);
static const lean_string_object l_List_any___at___00LeanExport_initState_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "--export-mdata"};
static const lean_object* l_List_any___at___00LeanExport_initState_spec__0___closed__0 = (const lean_object*)&l_List_any___at___00LeanExport_initState_spec__0___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_any___at___00LeanExport_initState_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "--export-unsafe"};
static const lean_object* l_List_any___at___00LeanExport_initState_spec__1___closed__0 = (const lean_object*)&l_List_any___at___00LeanExport_initState_spec__1___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__1___boxed(lean_object*);
static const lean_closure_object l_LeanExport_initState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_LeanExport_initState___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_LeanExport_initState___closed__0 = (const lean_object*)&l_LeanExport_initState___closed__0_value;
LEAN_EXPORT lean_object* l_LeanExport_initState(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_initState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LeanExport.Basic"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.LeanExport.Basic.0.LeanExport.dumpName"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "il"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "param"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.LeanExport.Basic.0.LeanExport.dumpLevel"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "_private.LeanExport.Basic.0.LeanExport.removeMData"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__6(lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanExport.dumpConstant"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 135, .m_capacity = 135, .m_length = 134, .m_data = "assertion violation: ((!ctorVal.isUnsafe) || ( __do_lift._@.LeanExport.Basic.2173241011._hygCtx._hyg.1873.0 ).exportUnsafe)\n          "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Expected a `ConstantInfo.ctorInfo`."};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__6_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__7_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 132, .m_capacity = 132, .m_length = 131, .m_data = "assertion violation: ((!recVal.isUnsafe) || ( __do_lift._@.LeanExport.Basic.2173241011._hygCtx._hyg.2114.0 ).exportUnsafe)\n        "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__0_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "expected a `constantinfo.recinfo`."};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_LeanExport_dumpConstant___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_LeanExport_dumpConstant___boxed__const__1 = (const lean_object*)&l_LeanExport_dumpConstant___boxed__const__1_value;
static lean_once_cell_t l_LeanExport_dumpExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpExpr___closed__0;
static lean_once_cell_t l_LeanExport_dumpExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpExpr___closed__1;
static const lean_string_object l_LeanExport_dumpExprAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ie"};
static const lean_object* l_LeanExport_dumpExprAux___closed__0 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__0_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bvar"};
static const lean_object* l_LeanExport_dumpExprAux___closed__1 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__1_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l_LeanExport_dumpExprAux___closed__2 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__2_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_LeanExport_dumpExprAux___closed__3 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "us"};
static const lean_object* l_LeanExport_dumpExprAux___closed__4 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__4_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_LeanExport_dumpExprAux___closed__5 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__5_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "fn"};
static const lean_object* l_LeanExport_dumpExprAux___closed__6 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__6_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arg"};
static const lean_object* l_LeanExport_dumpExprAux___closed__7 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__7_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lam"};
static const lean_object* l_LeanExport_dumpExprAux___closed__8 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__8_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_LeanExport_dumpExprAux___closed__9 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__9_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "binderInfo"};
static const lean_object* l_LeanExport_dumpExprAux___closed__10 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__10_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forallE"};
static const lean_object* l_LeanExport_dumpExprAux___closed__11 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__11_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "letE"};
static const lean_object* l_LeanExport_dumpExprAux___closed__12 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__12_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_LeanExport_dumpExprAux___closed__13 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__13_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nondep"};
static const lean_object* l_LeanExport_dumpExprAux___closed__14 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__14_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(lean_object*, lean_object*);
static const lean_string_object l_LeanExport_dumpExprAux___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natVal"};
static const lean_object* l_LeanExport_dumpExprAux___closed__15 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__15_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofList"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1_value),LEAN_SCALAR_PTR_LITERAL(118, 246, 177, 142, 179, 9, 199, 233)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(lean_object*, lean_object*);
static const lean_string_object l_LeanExport_dumpExprAux___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strVal"};
static const lean_object* l_LeanExport_dumpExprAux___closed__16 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__16_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mdata"};
static const lean_object* l_LeanExport_dumpExprAux___closed__17 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__17_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_LeanExport_dumpExprAux___closed__18 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__18_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "expr"};
static const lean_object* l_LeanExport_dumpExprAux___closed__19 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__19_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_LeanExport_dumpExprAux___closed__20 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__20_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l_LeanExport_dumpExprAux___closed__21 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__21_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l_LeanExport_dumpExprAux___closed__22 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__22_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "struct"};
static const lean_object* l_LeanExport_dumpExprAux___closed__23 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__23_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "cannot export free variables or metavariables"};
static const lean_object* l_LeanExport_dumpExprAux___closed__25 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__25_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanExport.dumpExprAux"};
static const lean_object* l_LeanExport_dumpExprAux___closed__24 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__24_value;
static lean_once_cell_t l_LeanExport_dumpExprAux___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpExprAux___closed__26;
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "levelParams"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numParams"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numIndices"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ctors"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numNested"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isRec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isReflexive"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isUnsafe"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "induct"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cidx"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numFields"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nfields"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rhs"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numMotives"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numMinors"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rules"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_LeanExport_dumpConstant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inductive"};
static const lean_object* l_LeanExport_dumpConstant___closed__0 = (const lean_object*)&l_LeanExport_dumpConstant___closed__0_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "types"};
static const lean_object* l_LeanExport_dumpConstant___closed__1 = (const lean_object*)&l_LeanExport_dumpConstant___closed__1_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "recs"};
static const lean_object* l_LeanExport_dumpConstant___closed__2 = (const lean_object*)&l_LeanExport_dumpConstant___closed__2_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "axiom"};
static const lean_object* l_LeanExport_dumpConstant___closed__3 = (const lean_object*)&l_LeanExport_dumpConstant___closed__3_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_LeanExport_dumpConstant___closed__4 = (const lean_object*)&l_LeanExport_dumpConstant___closed__4_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hints"};
static const lean_object* l_LeanExport_dumpConstant___closed__5 = (const lean_object*)&l_LeanExport_dumpConstant___closed__5_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "safety"};
static const lean_object* l_LeanExport_dumpConstant___closed__6 = (const lean_object*)&l_LeanExport_dumpConstant___closed__6_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l_LeanExport_dumpConstant___closed__7 = (const lean_object*)&l_LeanExport_dumpConstant___closed__7_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_LeanExport_dumpConstant___closed__8 = (const lean_object*)&l_LeanExport_dumpConstant___closed__8_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__8_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_LeanExport_dumpConstant___closed__9 = (const lean_object*)&l_LeanExport_dumpConstant___closed__9_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_LeanExport_dumpConstant___closed__10 = (const lean_object*)&l_LeanExport_dumpConstant___closed__10_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_LeanExport_dumpConstant___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__15_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(150, 213, 121, 152, 109, 27, 137, 60)}};
static const lean_object* l_LeanExport_dumpConstant___closed__15 = (const lean_object*)&l_LeanExport_dumpConstant___closed__15_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_LeanExport_dumpConstant___closed__16 = (const lean_object*)&l_LeanExport_dumpConstant___closed__16_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_LeanExport_dumpConstant___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__14_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(91, 125, 38, 34, 222, 200, 201, 80)}};
static const lean_object* l_LeanExport_dumpConstant___closed__14 = (const lean_object*)&l_LeanExport_dumpConstant___closed__14_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__14_value),((lean_object*)&l_LeanExport_dumpConstant___closed__16_value)}};
static const lean_object* l_LeanExport_dumpConstant___closed__17 = (const lean_object*)&l_LeanExport_dumpConstant___closed__17_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_LeanExport_dumpConstant___closed__12 = (const lean_object*)&l_LeanExport_dumpConstant___closed__12_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_LeanExport_dumpConstant___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__13_value_aux_0),((lean_object*)&l_LeanExport_dumpConstant___closed__12_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l_LeanExport_dumpConstant___closed__13 = (const lean_object*)&l_LeanExport_dumpConstant___closed__13_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__13_value),((lean_object*)&l_LeanExport_dumpConstant___closed__17_value)}};
static const lean_object* l_LeanExport_dumpConstant___closed__18 = (const lean_object*)&l_LeanExport_dumpConstant___closed__18_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_object* l_LeanExport_dumpConstant___closed__11 = (const lean_object*)&l_LeanExport_dumpConstant___closed__11_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__11_value),((lean_object*)&l_LeanExport_dumpConstant___closed__18_value)}};
static const lean_object* l_LeanExport_dumpConstant___closed__19 = (const lean_object*)&l_LeanExport_dumpConstant___closed__19_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Constant "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = " not found in environment."};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_LeanExport_dumpConstant___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_LeanExport_dumpConstant___closed__20 = (const lean_object*)&l_LeanExport_dumpConstant___closed__20_value;
static lean_once_cell_t l_LeanExport_dumpConstant___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpConstant___closed__21;
static lean_once_cell_t l_LeanExport_dumpConstant___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpConstant___closed__22;
static const lean_closure_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 367, .m_capacity = 367, .m_length = 366, .m_data = "assertion violation: ctorVals.size == 0\n\n    /- We dump the constructor dependencies (which will not include the inductives in this block since we've\n    added the names to `visitedConstants`) before actually outputting anything in this inductive block to\n    ensure e.g. the `LT` in `Fin.mk` is dumped before this inductive block appears in the export file. -/\n    "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 127, .m_capacity = 127, .m_length = 126, .m_data = "assertion violation: ((!val.isUnsafe) || ( __do_lift._@.LeanExport.Basic.2173241011._hygCtx._hyg.1797.0 ).exportUnsafe)\n      "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "githash"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lean4export"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0_value),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "3.1.0"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0_value),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11_value),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exporter"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "format"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata;
static lean_once_cell_t l_LeanExport_dumpMetadata___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpMetadata___redArg___closed__0;
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(uint8_t v_x_13_){
_start:
{
switch(v_x_13_)
{
case 0:
{
lean_object* v___x_14_; 
v___x_14_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1));
return v___x_14_;
}
case 1:
{
lean_object* v___x_15_; 
v___x_15_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3));
return v___x_15_;
}
case 2:
{
lean_object* v___x_16_; 
v___x_16_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5));
return v___x_16_;
}
default: 
{
lean_object* v___x_17_; 
v___x_17_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7));
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___boxed(lean_object* v_x_18_){
_start:
{
uint8_t v_x_64__boxed_19_; lean_object* v_res_20_; 
v_x_64__boxed_19_ = lean_unbox(v_x_18_);
v_res_20_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_x_64__boxed_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(lean_object* v_x_28_){
_start:
{
switch(lean_obj_tag(v_x_28_))
{
case 0:
{
lean_object* v___x_29_; 
v___x_29_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1));
return v___x_29_;
}
case 1:
{
lean_object* v___x_30_; 
v___x_30_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3));
return v___x_30_;
}
default: 
{
uint32_t v_a_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_a_31_ = lean_ctor_get_uint32(v_x_28_, 0);
v___x_32_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4));
v___x_33_ = lean_uint32_to_nat(v_a_31_);
v___x_34_ = l_Lean_JsonNumber_fromNat(v___x_33_);
v___x_35_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_32_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
v___x_37_ = lean_box(0);
v___x_38_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_36_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = l_Lean_Json_mkObj(v___x_38_);
lean_dec_ref_known(v___x_38_, 2);
return v___x_39_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___boxed(lean_object* v_x_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(v_x_40_);
lean_dec(v_x_40_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(uint8_t v_x_54_){
_start:
{
switch(v_x_54_)
{
case 0:
{
lean_object* v___x_55_; 
v___x_55_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1));
return v___x_55_;
}
case 1:
{
lean_object* v___x_56_; 
v___x_56_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3));
return v___x_56_;
}
case 2:
{
lean_object* v___x_57_; 
v___x_57_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5));
return v___x_57_;
}
default: 
{
lean_object* v___x_58_; 
v___x_58_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7));
return v___x_58_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___boxed(lean_object* v_x_59_){
_start:
{
uint8_t v_x_64__boxed_60_; lean_object* v_res_61_; 
v_x_64__boxed_60_ = lean_unbox(v_x_59_);
v_res_61_ = l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(v_x_64__boxed_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(uint8_t v_x_71_){
_start:
{
switch(v_x_71_)
{
case 0:
{
lean_object* v___x_72_; 
v___x_72_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1));
return v___x_72_;
}
case 1:
{
lean_object* v___x_73_; 
v___x_73_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3));
return v___x_73_;
}
default: 
{
lean_object* v___x_74_; 
v___x_74_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5));
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___boxed(lean_object* v_x_75_){
_start:
{
uint8_t v_x_49__boxed_76_; lean_object* v_res_77_; 
v_x_49__boxed_76_ = lean_unbox(v_x_75_);
v_res_77_ = l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(v_x_49__boxed_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__Lean_KVMap_toJson_spec__0(lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
if (lean_obj_tag(v_a_78_) == 0)
{
lean_object* v___x_80_; 
v___x_80_ = l_List_reverse___redArg(v_a_79_);
return v___x_80_;
}
else
{
lean_object* v_head_81_; lean_object* v_tail_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_106_; 
v_head_81_ = lean_ctor_get(v_a_78_, 0);
v_tail_82_ = lean_ctor_get(v_a_78_, 1);
v_isSharedCheck_106_ = !lean_is_exclusive(v_a_78_);
if (v_isSharedCheck_106_ == 0)
{
v___x_84_ = v_a_78_;
v_isShared_85_ = v_isSharedCheck_106_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_tail_82_);
lean_inc(v_head_81_);
lean_dec(v_a_78_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_106_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v_fst_86_; lean_object* v_snd_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_105_; 
v_fst_86_ = lean_ctor_get(v_head_81_, 0);
v_snd_87_ = lean_ctor_get(v_head_81_, 1);
v_isSharedCheck_105_ = !lean_is_exclusive(v_head_81_);
if (v_isSharedCheck_105_ == 0)
{
v___x_89_ = v_head_81_;
v_isShared_90_ = v_isSharedCheck_105_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_snd_87_);
lean_inc(v_fst_86_);
lean_dec(v_head_81_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_105_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_91_ = 1;
v___x_92_ = l_Lean_Name_toString(v_fst_86_, v___x_91_);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = l_Lean_instReprDataValue_repr(v_snd_87_, v___x_93_);
v___x_95_ = l_Std_Format_defWidth;
v___x_96_ = l_Std_Format_pretty(v___x_94_, v___x_95_, v___x_93_, v___x_93_);
v___x_97_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 1, v___x_97_);
lean_ctor_set(v___x_89_, 0, v___x_92_);
v___x_99_ = v___x_89_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v___x_97_);
v___x_99_ = v_reuseFailAlloc_104_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_object* v___x_101_; 
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 1, v_a_79_);
lean_ctor_set(v___x_84_, 0, v___x_99_);
v___x_101_ = v___x_84_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v_a_79_);
v___x_101_ = v_reuseFailAlloc_103_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
v_a_78_ = v_tail_82_;
v_a_79_ = v___x_101_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_KVMap_toJson(lean_object* v_kvs_107_){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_box(0);
v___x_109_ = l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__Lean_KVMap_toJson_spec__0(v_kvs_107_, v___x_108_);
v___x_110_ = l_Lean_Json_mkObj(v___x_109_);
lean_dec(v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(lean_object* v_a_111_, lean_object* v_b_112_, lean_object* v_x_113_){
_start:
{
if (lean_obj_tag(v_x_113_) == 0)
{
lean_dec(v_b_112_);
lean_dec(v_a_111_);
return v_x_113_;
}
else
{
lean_object* v_key_114_; lean_object* v_value_115_; lean_object* v_tail_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_128_; 
v_key_114_ = lean_ctor_get(v_x_113_, 0);
v_value_115_ = lean_ctor_get(v_x_113_, 1);
v_tail_116_ = lean_ctor_get(v_x_113_, 2);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_113_);
if (v_isSharedCheck_128_ == 0)
{
v___x_118_ = v_x_113_;
v_isShared_119_ = v_isSharedCheck_128_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_tail_116_);
lean_inc(v_value_115_);
lean_inc(v_key_114_);
lean_dec(v_x_113_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_128_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
uint8_t v___x_120_; 
v___x_120_ = lean_name_eq(v_key_114_, v_a_111_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_121_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(v_a_111_, v_b_112_, v_tail_116_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 2, v___x_121_);
v___x_123_ = v___x_118_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_key_114_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v_value_115_);
lean_ctor_set(v_reuseFailAlloc_124_, 2, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
else
{
lean_object* v___x_126_; 
lean_dec(v_value_115_);
lean_dec(v_key_114_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 1, v_b_112_);
lean_ctor_set(v___x_118_, 0, v_a_111_);
v___x_126_ = v___x_118_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_111_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v_b_112_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v_tail_116_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_129_, lean_object* v_x_130_){
_start:
{
if (lean_obj_tag(v_x_130_) == 0)
{
return v_x_129_;
}
else
{
lean_object* v_key_131_; lean_object* v_value_132_; lean_object* v_tail_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_160_; 
v_key_131_ = lean_ctor_get(v_x_130_, 0);
v_value_132_ = lean_ctor_get(v_x_130_, 1);
v_tail_133_ = lean_ctor_get(v_x_130_, 2);
v_isSharedCheck_160_ = !lean_is_exclusive(v_x_130_);
if (v_isSharedCheck_160_ == 0)
{
v___x_135_ = v_x_130_;
v_isShared_136_ = v_isSharedCheck_160_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_tail_133_);
lean_inc(v_value_132_);
lean_inc(v_key_131_);
lean_dec(v_x_130_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_160_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; uint64_t v___y_139_; lean_object* v___x_157_; 
v___x_137_ = lean_array_get_size(v_x_129_);
v___x_157_ = l_unsafeCast___redArg(v_key_131_);
if (lean_obj_tag(v___x_157_) == 0)
{
uint64_t v___x_158_; 
v___x_158_ = 1723ULL;
v___y_139_ = v___x_158_;
goto v___jp_138_;
}
else
{
uint64_t v_hash_159_; 
v_hash_159_ = lean_ctor_get_uint64(v___x_157_, sizeof(void*)*2);
lean_dec(v___x_157_);
v___y_139_ = v_hash_159_;
goto v___jp_138_;
}
v___jp_138_:
{
uint64_t v___x_140_; uint64_t v___x_141_; uint64_t v_fold_142_; uint64_t v___x_143_; uint64_t v___x_144_; uint64_t v___x_145_; size_t v___x_146_; size_t v___x_147_; size_t v___x_148_; size_t v___x_149_; size_t v___x_150_; lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_140_ = 32ULL;
v___x_141_ = lean_uint64_shift_right(v___y_139_, v___x_140_);
v_fold_142_ = lean_uint64_xor(v___y_139_, v___x_141_);
v___x_143_ = 16ULL;
v___x_144_ = lean_uint64_shift_right(v_fold_142_, v___x_143_);
v___x_145_ = lean_uint64_xor(v_fold_142_, v___x_144_);
v___x_146_ = lean_uint64_to_usize(v___x_145_);
v___x_147_ = lean_usize_of_nat(v___x_137_);
v___x_148_ = ((size_t)1ULL);
v___x_149_ = lean_usize_sub(v___x_147_, v___x_148_);
v___x_150_ = lean_usize_land(v___x_146_, v___x_149_);
v___x_151_ = lean_array_uget_borrowed(v_x_129_, v___x_150_);
lean_inc(v___x_151_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 2, v___x_151_);
v___x_153_ = v___x_135_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_key_131_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_value_132_);
lean_ctor_set(v_reuseFailAlloc_156_, 2, v___x_151_);
v___x_153_ = v_reuseFailAlloc_156_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; 
v___x_154_ = lean_array_uset(v_x_129_, v___x_150_, v___x_153_);
v_x_129_ = v___x_154_;
v_x_130_ = v_tail_133_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(lean_object* v_i_161_, lean_object* v_source_162_, lean_object* v_target_163_){
_start:
{
lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_164_ = lean_array_get_size(v_source_162_);
v___x_165_ = lean_nat_dec_lt(v_i_161_, v___x_164_);
if (v___x_165_ == 0)
{
lean_dec_ref(v_source_162_);
lean_dec(v_i_161_);
return v_target_163_;
}
else
{
lean_object* v_es_166_; lean_object* v___x_167_; lean_object* v_source_168_; lean_object* v_target_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v_es_166_ = lean_array_fget(v_source_162_, v_i_161_);
v___x_167_ = lean_box(0);
v_source_168_ = lean_array_fset(v_source_162_, v_i_161_, v___x_167_);
v_target_169_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(v_target_163_, v_es_166_);
v___x_170_ = lean_unsigned_to_nat(1u);
v___x_171_ = lean_nat_add(v_i_161_, v___x_170_);
lean_dec(v_i_161_);
v_i_161_ = v___x_171_;
v_source_162_ = v_source_168_;
v_target_163_ = v_target_169_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(lean_object* v_data_173_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v_nbuckets_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_174_ = lean_array_get_size(v_data_173_);
v___x_175_ = lean_unsigned_to_nat(2u);
v_nbuckets_176_ = lean_nat_mul(v___x_174_, v___x_175_);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = lean_box(0);
v___x_179_ = lean_mk_array(v_nbuckets_176_, v___x_178_);
v___x_180_ = lean_array_propagate_mark(v_data_173_, v___x_179_);
v___x_181_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(v___x_177_, v_data_173_, v___x_180_);
return v___x_181_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(lean_object* v_a_182_, lean_object* v_x_183_){
_start:
{
if (lean_obj_tag(v_x_183_) == 0)
{
uint8_t v___x_184_; 
v___x_184_ = 0;
return v___x_184_;
}
else
{
lean_object* v_key_185_; lean_object* v_tail_186_; uint8_t v___x_187_; 
v_key_185_ = lean_ctor_get(v_x_183_, 0);
v_tail_186_ = lean_ctor_get(v_x_183_, 2);
v___x_187_ = lean_name_eq(v_key_185_, v_a_182_);
if (v___x_187_ == 0)
{
v_x_183_ = v_tail_186_;
goto _start;
}
else
{
return v___x_187_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg___boxed(lean_object* v_a_189_, lean_object* v_x_190_){
_start:
{
uint8_t v_res_191_; lean_object* v_r_192_; 
v_res_191_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(v_a_189_, v_x_190_);
lean_dec(v_x_190_);
lean_dec(v_a_189_);
v_r_192_ = lean_box(v_res_191_);
return v_r_192_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(lean_object* v_m_193_, lean_object* v_a_194_, lean_object* v_b_195_){
_start:
{
lean_object* v_size_196_; lean_object* v_buckets_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_244_; 
v_size_196_ = lean_ctor_get(v_m_193_, 0);
v_buckets_197_ = lean_ctor_get(v_m_193_, 1);
v_isSharedCheck_244_ = !lean_is_exclusive(v_m_193_);
if (v_isSharedCheck_244_ == 0)
{
v___x_199_ = v_m_193_;
v_isShared_200_ = v_isSharedCheck_244_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_buckets_197_);
lean_inc(v_size_196_);
lean_dec(v_m_193_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_244_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; uint64_t v___y_203_; lean_object* v___x_241_; 
v___x_201_ = lean_array_get_size(v_buckets_197_);
v___x_241_ = l_unsafeCast___redArg(v_a_194_);
if (lean_obj_tag(v___x_241_) == 0)
{
uint64_t v___x_242_; 
v___x_242_ = 1723ULL;
v___y_203_ = v___x_242_;
goto v___jp_202_;
}
else
{
uint64_t v_hash_243_; 
v_hash_243_ = lean_ctor_get_uint64(v___x_241_, sizeof(void*)*2);
lean_dec(v___x_241_);
v___y_203_ = v_hash_243_;
goto v___jp_202_;
}
v___jp_202_:
{
uint64_t v___x_204_; uint64_t v___x_205_; uint64_t v_fold_206_; uint64_t v___x_207_; uint64_t v___x_208_; uint64_t v___x_209_; size_t v___x_210_; size_t v___x_211_; size_t v___x_212_; size_t v___x_213_; size_t v___x_214_; lean_object* v_bkt_215_; uint8_t v___x_216_; 
v___x_204_ = 32ULL;
v___x_205_ = lean_uint64_shift_right(v___y_203_, v___x_204_);
v_fold_206_ = lean_uint64_xor(v___y_203_, v___x_205_);
v___x_207_ = 16ULL;
v___x_208_ = lean_uint64_shift_right(v_fold_206_, v___x_207_);
v___x_209_ = lean_uint64_xor(v_fold_206_, v___x_208_);
v___x_210_ = lean_uint64_to_usize(v___x_209_);
v___x_211_ = lean_usize_of_nat(v___x_201_);
v___x_212_ = ((size_t)1ULL);
v___x_213_ = lean_usize_sub(v___x_211_, v___x_212_);
v___x_214_ = lean_usize_land(v___x_210_, v___x_213_);
v_bkt_215_ = lean_array_uget_borrowed(v_buckets_197_, v___x_214_);
v___x_216_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(v_a_194_, v_bkt_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; lean_object* v_size_x27_218_; lean_object* v___x_219_; lean_object* v_buckets_x27_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_217_ = lean_unsigned_to_nat(1u);
v_size_x27_218_ = lean_nat_add(v_size_196_, v___x_217_);
lean_dec(v_size_196_);
lean_inc(v_bkt_215_);
v___x_219_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_219_, 0, v_a_194_);
lean_ctor_set(v___x_219_, 1, v_b_195_);
lean_ctor_set(v___x_219_, 2, v_bkt_215_);
v_buckets_x27_220_ = lean_array_uset(v_buckets_197_, v___x_214_, v___x_219_);
v___x_221_ = lean_unsigned_to_nat(4u);
v___x_222_ = lean_nat_mul(v_size_x27_218_, v___x_221_);
v___x_223_ = lean_unsigned_to_nat(3u);
v___x_224_ = lean_nat_div(v___x_222_, v___x_223_);
lean_dec(v___x_222_);
v___x_225_ = lean_array_get_size(v_buckets_x27_220_);
v___x_226_ = lean_nat_dec_le(v___x_224_, v___x_225_);
lean_dec(v___x_224_);
if (v___x_226_ == 0)
{
lean_object* v_val_227_; lean_object* v___x_229_; 
v_val_227_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(v_buckets_x27_220_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v_val_227_);
lean_ctor_set(v___x_199_, 0, v_size_x27_218_);
v___x_229_ = v___x_199_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_size_x27_218_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_val_227_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
else
{
lean_object* v___x_232_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v_buckets_x27_220_);
lean_ctor_set(v___x_199_, 0, v_size_x27_218_);
v___x_232_ = v___x_199_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_size_x27_218_);
lean_ctor_set(v_reuseFailAlloc_233_, 1, v_buckets_x27_220_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
else
{
lean_object* v___x_234_; lean_object* v_buckets_x27_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
lean_inc(v_bkt_215_);
v___x_234_ = lean_box(0);
v_buckets_x27_235_ = lean_array_uset(v_buckets_197_, v___x_214_, v___x_234_);
v___x_236_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(v_a_194_, v_b_195_, v_bkt_215_);
v___x_237_ = lean_array_uset(v_buckets_x27_235_, v___x_214_, v___x_236_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v___x_237_);
v___x_239_ = v___x_199_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_size_196_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___x_237_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(lean_object* v_a_245_, lean_object* v_b_246_, lean_object* v_x_247_){
_start:
{
if (lean_obj_tag(v_x_247_) == 0)
{
lean_dec(v_b_246_);
lean_dec(v_a_245_);
return v_x_247_;
}
else
{
lean_object* v_key_248_; lean_object* v_value_249_; lean_object* v_tail_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_262_; 
v_key_248_ = lean_ctor_get(v_x_247_, 0);
v_value_249_ = lean_ctor_get(v_x_247_, 1);
v_tail_250_ = lean_ctor_get(v_x_247_, 2);
v_isSharedCheck_262_ = !lean_is_exclusive(v_x_247_);
if (v_isSharedCheck_262_ == 0)
{
v___x_252_ = v_x_247_;
v_isShared_253_ = v_isSharedCheck_262_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_tail_250_);
lean_inc(v_value_249_);
lean_inc(v_key_248_);
lean_dec(v_x_247_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_262_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
uint8_t v___x_254_; 
v___x_254_ = lean_level_eq(v_key_248_, v_a_245_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_255_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(v_a_245_, v_b_246_, v_tail_250_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 2, v___x_255_);
v___x_257_ = v___x_252_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_key_248_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_value_249_);
lean_ctor_set(v_reuseFailAlloc_258_, 2, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
else
{
lean_object* v___x_260_; 
lean_dec(v_value_249_);
lean_dec(v_key_248_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 1, v_b_246_);
lean_ctor_set(v___x_252_, 0, v_a_245_);
v___x_260_ = v___x_252_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_245_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v_b_246_);
lean_ctor_set(v_reuseFailAlloc_261_, 2, v_tail_250_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
if (lean_obj_tag(v_x_264_) == 0)
{
return v_x_263_;
}
else
{
lean_object* v_key_265_; lean_object* v_value_266_; lean_object* v_tail_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_290_; 
v_key_265_ = lean_ctor_get(v_x_264_, 0);
v_value_266_ = lean_ctor_get(v_x_264_, 1);
v_tail_267_ = lean_ctor_get(v_x_264_, 2);
v_isSharedCheck_290_ = !lean_is_exclusive(v_x_264_);
if (v_isSharedCheck_290_ == 0)
{
v___x_269_ = v_x_264_;
v_isShared_270_ = v_isSharedCheck_290_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_tail_267_);
lean_inc(v_value_266_);
lean_inc(v_key_265_);
lean_dec(v_x_264_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_290_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_271_; uint64_t v___x_272_; uint64_t v___x_273_; uint64_t v___x_274_; uint64_t v_fold_275_; uint64_t v___x_276_; uint64_t v___x_277_; uint64_t v___x_278_; size_t v___x_279_; size_t v___x_280_; size_t v___x_281_; size_t v___x_282_; size_t v___x_283_; lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_271_ = lean_array_get_size(v_x_263_);
v___x_272_ = l_Lean_Level_hash(v_key_265_);
v___x_273_ = 32ULL;
v___x_274_ = lean_uint64_shift_right(v___x_272_, v___x_273_);
v_fold_275_ = lean_uint64_xor(v___x_272_, v___x_274_);
v___x_276_ = 16ULL;
v___x_277_ = lean_uint64_shift_right(v_fold_275_, v___x_276_);
v___x_278_ = lean_uint64_xor(v_fold_275_, v___x_277_);
v___x_279_ = lean_uint64_to_usize(v___x_278_);
v___x_280_ = lean_usize_of_nat(v___x_271_);
v___x_281_ = ((size_t)1ULL);
v___x_282_ = lean_usize_sub(v___x_280_, v___x_281_);
v___x_283_ = lean_usize_land(v___x_279_, v___x_282_);
v___x_284_ = lean_array_uget_borrowed(v_x_263_, v___x_283_);
lean_inc(v___x_284_);
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 2, v___x_284_);
v___x_286_ = v___x_269_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_key_265_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_value_266_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v___x_284_);
v___x_286_ = v_reuseFailAlloc_289_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_287_; 
v___x_287_ = lean_array_uset(v_x_263_, v___x_283_, v___x_286_);
v_x_263_ = v___x_287_;
v_x_264_ = v_tail_267_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(lean_object* v_i_291_, lean_object* v_source_292_, lean_object* v_target_293_){
_start:
{
lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_294_ = lean_array_get_size(v_source_292_);
v___x_295_ = lean_nat_dec_lt(v_i_291_, v___x_294_);
if (v___x_295_ == 0)
{
lean_dec_ref(v_source_292_);
lean_dec(v_i_291_);
return v_target_293_;
}
else
{
lean_object* v_es_296_; lean_object* v___x_297_; lean_object* v_source_298_; lean_object* v_target_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v_es_296_ = lean_array_fget(v_source_292_, v_i_291_);
v___x_297_ = lean_box(0);
v_source_298_ = lean_array_fset(v_source_292_, v_i_291_, v___x_297_);
v_target_299_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(v_target_293_, v_es_296_);
v___x_300_ = lean_unsigned_to_nat(1u);
v___x_301_ = lean_nat_add(v_i_291_, v___x_300_);
lean_dec(v_i_291_);
v_i_291_ = v___x_301_;
v_source_292_ = v_source_298_;
v_target_293_ = v_target_299_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(lean_object* v_data_303_){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v_nbuckets_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_304_ = lean_array_get_size(v_data_303_);
v___x_305_ = lean_unsigned_to_nat(2u);
v_nbuckets_306_ = lean_nat_mul(v___x_304_, v___x_305_);
v___x_307_ = lean_unsigned_to_nat(0u);
v___x_308_ = lean_box(0);
v___x_309_ = lean_mk_array(v_nbuckets_306_, v___x_308_);
v___x_310_ = lean_array_propagate_mark(v_data_303_, v___x_309_);
v___x_311_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(v___x_307_, v_data_303_, v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(lean_object* v_a_312_, lean_object* v_x_313_){
_start:
{
if (lean_obj_tag(v_x_313_) == 0)
{
uint8_t v___x_314_; 
v___x_314_ = 0;
return v___x_314_;
}
else
{
lean_object* v_key_315_; lean_object* v_tail_316_; uint8_t v___x_317_; 
v_key_315_ = lean_ctor_get(v_x_313_, 0);
v_tail_316_ = lean_ctor_get(v_x_313_, 2);
v___x_317_ = lean_level_eq(v_key_315_, v_a_312_);
if (v___x_317_ == 0)
{
v_x_313_ = v_tail_316_;
goto _start;
}
else
{
return v___x_317_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg___boxed(lean_object* v_a_319_, lean_object* v_x_320_){
_start:
{
uint8_t v_res_321_; lean_object* v_r_322_; 
v_res_321_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(v_a_319_, v_x_320_);
lean_dec(v_x_320_);
lean_dec(v_a_319_);
v_r_322_ = lean_box(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(lean_object* v_m_323_, lean_object* v_a_324_, lean_object* v_b_325_){
_start:
{
lean_object* v_size_326_; lean_object* v_buckets_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_370_; 
v_size_326_ = lean_ctor_get(v_m_323_, 0);
v_buckets_327_ = lean_ctor_get(v_m_323_, 1);
v_isSharedCheck_370_ = !lean_is_exclusive(v_m_323_);
if (v_isSharedCheck_370_ == 0)
{
v___x_329_ = v_m_323_;
v_isShared_330_ = v_isSharedCheck_370_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_buckets_327_);
lean_inc(v_size_326_);
lean_dec(v_m_323_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_370_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_331_; uint64_t v___x_332_; uint64_t v___x_333_; uint64_t v___x_334_; uint64_t v_fold_335_; uint64_t v___x_336_; uint64_t v___x_337_; uint64_t v___x_338_; size_t v___x_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; size_t v___x_343_; lean_object* v_bkt_344_; uint8_t v___x_345_; 
v___x_331_ = lean_array_get_size(v_buckets_327_);
v___x_332_ = l_Lean_Level_hash(v_a_324_);
v___x_333_ = 32ULL;
v___x_334_ = lean_uint64_shift_right(v___x_332_, v___x_333_);
v_fold_335_ = lean_uint64_xor(v___x_332_, v___x_334_);
v___x_336_ = 16ULL;
v___x_337_ = lean_uint64_shift_right(v_fold_335_, v___x_336_);
v___x_338_ = lean_uint64_xor(v_fold_335_, v___x_337_);
v___x_339_ = lean_uint64_to_usize(v___x_338_);
v___x_340_ = lean_usize_of_nat(v___x_331_);
v___x_341_ = ((size_t)1ULL);
v___x_342_ = lean_usize_sub(v___x_340_, v___x_341_);
v___x_343_ = lean_usize_land(v___x_339_, v___x_342_);
v_bkt_344_ = lean_array_uget_borrowed(v_buckets_327_, v___x_343_);
v___x_345_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(v_a_324_, v_bkt_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; lean_object* v_size_x27_347_; lean_object* v___x_348_; lean_object* v_buckets_x27_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_346_ = lean_unsigned_to_nat(1u);
v_size_x27_347_ = lean_nat_add(v_size_326_, v___x_346_);
lean_dec(v_size_326_);
lean_inc(v_bkt_344_);
v___x_348_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_348_, 0, v_a_324_);
lean_ctor_set(v___x_348_, 1, v_b_325_);
lean_ctor_set(v___x_348_, 2, v_bkt_344_);
v_buckets_x27_349_ = lean_array_uset(v_buckets_327_, v___x_343_, v___x_348_);
v___x_350_ = lean_unsigned_to_nat(4u);
v___x_351_ = lean_nat_mul(v_size_x27_347_, v___x_350_);
v___x_352_ = lean_unsigned_to_nat(3u);
v___x_353_ = lean_nat_div(v___x_351_, v___x_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_array_get_size(v_buckets_x27_349_);
v___x_355_ = lean_nat_dec_le(v___x_353_, v___x_354_);
lean_dec(v___x_353_);
if (v___x_355_ == 0)
{
lean_object* v_val_356_; lean_object* v___x_358_; 
v_val_356_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(v_buckets_x27_349_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v_val_356_);
lean_ctor_set(v___x_329_, 0, v_size_x27_347_);
v___x_358_ = v___x_329_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_size_x27_347_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_val_356_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
else
{
lean_object* v___x_361_; 
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v_buckets_x27_349_);
lean_ctor_set(v___x_329_, 0, v_size_x27_347_);
v___x_361_ = v___x_329_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_size_x27_347_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v_buckets_x27_349_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
else
{
lean_object* v___x_363_; lean_object* v_buckets_x27_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_368_; 
lean_inc(v_bkt_344_);
v___x_363_ = lean_box(0);
v_buckets_x27_364_ = lean_array_uset(v_buckets_327_, v___x_343_, v___x_363_);
v___x_365_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(v_a_324_, v_b_325_, v_bkt_344_);
v___x_366_ = lean_array_uset(v_buckets_x27_364_, v___x_343_, v___x_365_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v___x_366_);
v___x_368_ = v___x_329_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_size_326_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v___x_366_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_371_ = lean_box(0);
v___x_372_ = lean_unsigned_to_nat(524288u);
v___x_373_ = lean_mk_array(v___x_372_, v___x_371_);
return v___x_373_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_374_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__0, &l_LeanExport_M_run___redArg___closed__0_once, _init_l_LeanExport_M_run___redArg___closed__0);
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set(v___x_376_, 1, v___x_374_);
return v___x_376_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = lean_box(0);
v___x_378_ = l_unsafeCast___redArg(v___x_377_);
return v___x_378_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__3(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_379_ = lean_unsigned_to_nat(0u);
v___x_380_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__2, &l_LeanExport_M_run___redArg___closed__2_once, _init_l_LeanExport_M_run___redArg___closed__2);
v___x_381_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__1, &l_LeanExport_M_run___redArg___closed__1_once, _init_l_LeanExport_M_run___redArg___closed__1);
v___x_382_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v___x_381_, v___x_380_, v___x_379_);
return v___x_382_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__4(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_383_ = lean_box(0);
v___x_384_ = lean_unsigned_to_nat(2048u);
v___x_385_ = lean_mk_array(v___x_384_, v___x_383_);
return v___x_385_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__5(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_386_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__4, &l_LeanExport_M_run___redArg___closed__4_once, _init_l_LeanExport_M_run___redArg___closed__4);
v___x_387_ = lean_unsigned_to_nat(0u);
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
lean_ctor_set(v___x_388_, 1, v___x_386_);
return v___x_388_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__6(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = lean_box(0);
v___x_390_ = l_unsafeCast___redArg(v___x_389_);
return v___x_390_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__7(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_391_ = lean_unsigned_to_nat(0u);
v___x_392_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__6, &l_LeanExport_M_run___redArg___closed__6_once, _init_l_LeanExport_M_run___redArg___closed__6);
v___x_393_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__5, &l_LeanExport_M_run___redArg___closed__5_once, _init_l_LeanExport_M_run___redArg___closed__5);
v___x_394_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v___x_393_, v___x_392_, v___x_391_);
return v___x_394_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__8(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = lean_box(0);
v___x_396_ = lean_unsigned_to_nat(16777216u);
v___x_397_ = lean_mk_array(v___x_396_, v___x_395_);
return v___x_397_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__9(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_398_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__8, &l_LeanExport_M_run___redArg___closed__8_once, _init_l_LeanExport_M_run___redArg___closed__8);
v___x_399_ = lean_unsigned_to_nat(0u);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v___x_398_);
return v___x_400_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__10(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_box(0);
v___x_402_ = lean_unsigned_to_nat(16u);
v___x_403_ = lean_mk_array(v___x_402_, v___x_401_);
return v___x_403_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__11(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__10, &l_LeanExport_M_run___redArg___closed__10_once, _init_l_LeanExport_M_run___redArg___closed__10);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
return v___x_406_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__12(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_407_ = lean_box(0);
v___x_408_ = lean_unsigned_to_nat(262144u);
v___x_409_ = lean_mk_array(v___x_408_, v___x_407_);
return v___x_409_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__13(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_410_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__12, &l_LeanExport_M_run___redArg___closed__12_once, _init_l_LeanExport_M_run___redArg___closed__12);
v___x_411_ = lean_unsigned_to_nat(0u);
v___x_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v___x_410_);
return v___x_412_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__14(void){
_start:
{
lean_object* v___x_413_; uint8_t v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_413_ = lean_box(1);
v___x_414_ = 0;
v___x_415_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__13, &l_LeanExport_M_run___redArg___closed__13_once, _init_l_LeanExport_M_run___redArg___closed__13);
v___x_416_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__11, &l_LeanExport_M_run___redArg___closed__11_once, _init_l_LeanExport_M_run___redArg___closed__11);
v___x_417_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__9, &l_LeanExport_M_run___redArg___closed__9_once, _init_l_LeanExport_M_run___redArg___closed__9);
v___x_418_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__7, &l_LeanExport_M_run___redArg___closed__7_once, _init_l_LeanExport_M_run___redArg___closed__7);
v___x_419_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__3, &l_LeanExport_M_run___redArg___closed__3_once, _init_l_LeanExport_M_run___redArg___closed__3);
v___x_420_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_420_, 0, v___x_419_);
lean_ctor_set(v___x_420_, 1, v___x_418_);
lean_ctor_set(v___x_420_, 2, v___x_417_);
lean_ctor_set(v___x_420_, 3, v___x_416_);
lean_ctor_set(v___x_420_, 4, v___x_415_);
lean_ctor_set(v___x_420_, 5, v___x_413_);
lean_ctor_set_uint8(v___x_420_, sizeof(void*)*6, v___x_414_);
lean_ctor_set_uint8(v___x_420_, sizeof(void*)*6 + 1, v___x_414_);
lean_ctor_set_uint8(v___x_420_, sizeof(void*)*6 + 2, v___x_414_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg(lean_object* v_env_421_, lean_object* v_act_422_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__14, &l_LeanExport_M_run___redArg___closed__14_once, _init_l_LeanExport_M_run___redArg___closed__14);
v___x_425_ = lean_apply_3(v_act_422_, v_env_421_, v___x_424_, lean_box(0));
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_434_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_434_ == 0)
{
v___x_428_ = v___x_425_;
v_isShared_429_ = v_isSharedCheck_434_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_425_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_434_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v_fst_430_; lean_object* v___x_432_; 
v_fst_430_ = lean_ctor_get(v_a_426_, 0);
lean_inc(v_fst_430_);
lean_dec(v_a_426_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v_fst_430_);
v___x_432_ = v___x_428_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_fst_430_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
else
{
lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
v_a_435_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_442_ == 0)
{
v___x_437_ = v___x_425_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_425_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_a_435_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg___boxed(lean_object* v_env_443_, lean_object* v_act_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_LeanExport_M_run___redArg(v_env_443_, v_act_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run(lean_object* v_00_u03b1_447_, lean_object* v_env_448_, lean_object* v_act_449_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_LeanExport_M_run___redArg(v_env_448_, v_act_449_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run___boxed(lean_object* v_00_u03b1_452_, lean_object* v_env_453_, lean_object* v_act_454_, lean_object* v_a_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_LeanExport_M_run(v_00_u03b1_452_, v_env_453_, v_act_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0(lean_object* v_00_u03b2_457_, lean_object* v_m_458_, lean_object* v_a_459_, lean_object* v_b_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v_m_458_, v_a_459_, v_b_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1(lean_object* v_00_u03b2_462_, lean_object* v_m_463_, lean_object* v_a_464_, lean_object* v_b_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v_m_463_, v_a_464_, v_b_465_);
return v___x_466_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0(lean_object* v_00_u03b2_467_, lean_object* v_a_468_, lean_object* v_x_469_){
_start:
{
uint8_t v___x_470_; 
v___x_470_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(v_a_468_, v_x_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___boxed(lean_object* v_00_u03b2_471_, lean_object* v_a_472_, lean_object* v_x_473_){
_start:
{
uint8_t v_res_474_; lean_object* v_r_475_; 
v_res_474_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0(v_00_u03b2_471_, v_a_472_, v_x_473_);
lean_dec(v_x_473_);
lean_dec(v_a_472_);
v_r_475_ = lean_box(v_res_474_);
return v_r_475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1(lean_object* v_00_u03b2_476_, lean_object* v_data_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(v_data_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2(lean_object* v_00_u03b2_479_, lean_object* v_a_480_, lean_object* v_b_481_, lean_object* v_x_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(v_a_480_, v_b_481_, v_x_482_);
return v___x_483_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4(lean_object* v_00_u03b2_484_, lean_object* v_a_485_, lean_object* v_x_486_){
_start:
{
uint8_t v___x_487_; 
v___x_487_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(v_a_485_, v_x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___boxed(lean_object* v_00_u03b2_488_, lean_object* v_a_489_, lean_object* v_x_490_){
_start:
{
uint8_t v_res_491_; lean_object* v_r_492_; 
v_res_491_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4(v_00_u03b2_488_, v_a_489_, v_x_490_);
lean_dec(v_x_490_);
lean_dec(v_a_489_);
v_r_492_ = lean_box(v_res_491_);
return v_r_492_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5(lean_object* v_00_u03b2_493_, lean_object* v_data_494_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(v_data_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6(lean_object* v_00_u03b2_496_, lean_object* v_a_497_, lean_object* v_b_498_, lean_object* v_x_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(v_a_497_, v_b_498_, v_x_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_501_, lean_object* v_i_502_, lean_object* v_source_503_, lean_object* v_target_504_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(v_i_502_, v_source_503_, v_target_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7(lean_object* v_00_u03b2_506_, lean_object* v_i_507_, lean_object* v_source_508_, lean_object* v_target_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(v_i_507_, v_source_508_, v_target_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_511_, lean_object* v_x_512_, lean_object* v_x_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(v_x_512_, v_x_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9(lean_object* v_00_u03b2_515_, lean_object* v_x_516_, lean_object* v_x_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(v_x_516_, v_x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg___lam__0(lean_object* v_val_519_, lean_object* v_x_520_){
_start:
{
if (lean_obj_tag(v_x_520_) == 0)
{
lean_object* v_toConstantVal_521_; lean_object* v_name_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v_toConstantVal_521_ = lean_ctor_get(v_val_519_, 0);
lean_inc_ref(v_toConstantVal_521_);
lean_dec_ref(v_val_519_);
v_name_522_ = lean_ctor_get(v_toConstantVal_521_, 0);
lean_inc(v_name_522_);
lean_dec_ref(v_toConstantVal_521_);
v___x_523_ = l_Lean_NameSet_empty;
v___x_524_ = l_Lean_NameSet_insert(v___x_523_, v_name_522_);
v___x_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
return v___x_525_;
}
else
{
lean_object* v_toConstantVal_526_; lean_object* v_val_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
v_toConstantVal_526_ = lean_ctor_get(v_val_519_, 0);
lean_inc_ref(v_toConstantVal_526_);
lean_dec_ref(v_val_519_);
v_val_527_ = lean_ctor_get(v_x_520_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_520_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v_x_520_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_val_527_);
lean_dec(v_x_520_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v_name_531_; lean_object* v___x_532_; lean_object* v___x_534_; 
v_name_531_ = lean_ctor_get(v_toConstantVal_526_, 0);
lean_inc(v_name_531_);
lean_dec_ref(v_toConstantVal_526_);
v___x_532_ = l_Lean_NameSet_insert(v_val_527_, v_name_531_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_532_);
v___x_534_ = v___x_529_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(lean_object* v_val_537_, lean_object* v_k_538_, lean_object* v_t_539_){
_start:
{
if (lean_obj_tag(v_t_539_) == 0)
{
lean_object* v_size_540_; lean_object* v_k_541_; lean_object* v_v_542_; lean_object* v_l_543_; lean_object* v_r_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_559_; 
v_size_540_ = lean_ctor_get(v_t_539_, 0);
v_k_541_ = lean_ctor_get(v_t_539_, 1);
v_v_542_ = lean_ctor_get(v_t_539_, 2);
v_l_543_ = lean_ctor_get(v_t_539_, 3);
v_r_544_ = lean_ctor_get(v_t_539_, 4);
v_isSharedCheck_559_ = !lean_is_exclusive(v_t_539_);
if (v_isSharedCheck_559_ == 0)
{
v___x_546_ = v_t_539_;
v_isShared_547_ = v_isSharedCheck_559_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_r_544_);
lean_inc(v_l_543_);
lean_inc(v_v_542_);
lean_inc(v_k_541_);
lean_inc(v_size_540_);
lean_dec(v_t_539_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_559_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
uint8_t v___x_548_; 
v___x_548_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_538_, v_k_541_);
switch(v___x_548_)
{
case 0:
{
lean_object* v_impl_549_; lean_object* v___x_550_; 
lean_del_object(v___x_546_);
lean_dec(v_size_540_);
v_impl_549_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(v_val_537_, v_k_538_, v_l_543_);
v___x_550_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_541_, v_v_542_, v_impl_549_, v_r_544_);
return v___x_550_;
}
case 1:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v_val_553_; lean_object* v___x_555_; 
lean_dec(v_k_541_);
v___x_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_551_, 0, v_v_542_);
v___x_552_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg___lam__0(v_val_537_, v___x_551_);
v_val_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_val_553_);
lean_dec(v___x_552_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 2, v_val_553_);
lean_ctor_set(v___x_546_, 1, v_k_538_);
v___x_555_ = v___x_546_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_size_540_);
lean_ctor_set(v_reuseFailAlloc_556_, 1, v_k_538_);
lean_ctor_set(v_reuseFailAlloc_556_, 2, v_val_553_);
lean_ctor_set(v_reuseFailAlloc_556_, 3, v_l_543_);
lean_ctor_set(v_reuseFailAlloc_556_, 4, v_r_544_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
default: 
{
lean_object* v_impl_557_; lean_object* v___x_558_; 
lean_del_object(v___x_546_);
lean_dec(v_size_540_);
v_impl_557_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(v_val_537_, v_k_538_, v_r_544_);
v___x_558_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_541_, v_v_542_, v_l_543_, v_impl_557_);
return v___x_558_;
}
}
}
}
else
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v_val_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_560_ = lean_box(0);
v___x_561_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg___lam__0(v_val_537_, v___x_560_);
v_val_562_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_val_562_);
lean_dec(v___x_561_);
v___x_563_ = lean_unsigned_to_nat(1u);
v___x_564_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
lean_ctor_set(v___x_564_, 1, v_k_538_);
lean_ctor_set(v___x_564_, 2, v_val_562_);
lean_ctor_set(v___x_564_, 3, v_t_539_);
lean_ctor_set(v___x_564_, 4, v_t_539_);
return v___x_564_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(lean_object* v_val_565_, lean_object* v_as_x27_566_, lean_object* v_b_567_, lean_object* v___y_568_){
_start:
{
if (lean_obj_tag(v_as_x27_566_) == 0)
{
lean_object* v___x_570_; lean_object* v___x_571_; 
lean_dec_ref(v_val_565_);
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v_b_567_);
lean_ctor_set(v___x_570_, 1, v___y_568_);
v___x_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
return v___x_571_;
}
else
{
lean_object* v_head_572_; lean_object* v_tail_573_; lean_object* v___x_574_; 
v_head_572_ = lean_ctor_get(v_as_x27_566_, 0);
v_tail_573_ = lean_ctor_get(v_as_x27_566_, 1);
lean_inc(v_head_572_);
lean_inc_ref(v_val_565_);
v___x_574_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(v_val_565_, v_head_572_, v_b_567_);
v_as_x27_566_ = v_tail_573_;
v_b_567_ = v___x_574_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg___boxed(lean_object* v_val_576_, lean_object* v_as_x27_577_, lean_object* v_b_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(v_val_576_, v_as_x27_577_, v_b_578_, v___y_579_);
lean_dec(v_as_x27_577_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0(lean_object* v_x_582_, lean_object* v_y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_a_589_; lean_object* v_snd_590_; 
if (lean_obj_tag(v_y_583_) == 7)
{
lean_object* v_val_596_; lean_object* v_all_597_; lean_object* v___x_598_; lean_object* v_a_599_; lean_object* v_fst_600_; lean_object* v_snd_601_; 
v_val_596_ = lean_ctor_get(v_y_583_, 0);
lean_inc_ref(v_val_596_);
lean_dec_ref_known(v_y_583_, 1);
v_all_597_ = lean_ctor_get(v_val_596_, 1);
lean_inc(v_all_597_);
v___x_598_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(v_val_596_, v_all_597_, v___y_584_, v___y_586_);
lean_dec(v_all_597_);
v_a_599_ = lean_ctor_get(v___x_598_, 0);
lean_inc(v_a_599_);
lean_dec_ref(v___x_598_);
v_fst_600_ = lean_ctor_get(v_a_599_, 0);
lean_inc(v_fst_600_);
v_snd_601_ = lean_ctor_get(v_a_599_, 1);
lean_inc(v_snd_601_);
lean_dec(v_a_599_);
v_a_589_ = v_fst_600_;
v_snd_590_ = v_snd_601_;
goto v___jp_588_;
}
else
{
lean_dec_ref(v_y_583_);
v_a_589_ = v___y_584_;
v_snd_590_ = v___y_586_;
goto v___jp_588_;
}
v___jp_588_:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_591_ = lean_box(0);
v___x_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
lean_ctor_set(v___x_592_, 1, v_a_589_);
v___x_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
v___x_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
lean_ctor_set(v___x_594_, 1, v_snd_590_);
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
return v___x_595_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0___boxed(lean_object* v_x_602_, lean_object* v_y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_LeanExport_initState___lam__0(v_x_602_, v_y_603_, v___y_604_, v___y_605_, v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v_x_602_);
return v_res_608_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__2(lean_object* v_x_610_){
_start:
{
if (lean_obj_tag(v_x_610_) == 0)
{
uint8_t v___x_611_; 
v___x_611_ = 0;
return v___x_611_;
}
else
{
lean_object* v_head_612_; lean_object* v_tail_613_; lean_object* v___x_614_; uint8_t v___x_615_; 
v_head_612_ = lean_ctor_get(v_x_610_, 0);
v_tail_613_ = lean_ctor_get(v_x_610_, 1);
v___x_614_ = ((lean_object*)(l_List_any___at___00LeanExport_initState_spec__2___closed__0));
v___x_615_ = lean_string_dec_eq(v_head_612_, v___x_614_);
if (v___x_615_ == 0)
{
v_x_610_ = v_tail_613_;
goto _start;
}
else
{
return v___x_615_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__2___boxed(lean_object* v_x_617_){
_start:
{
uint8_t v_res_618_; lean_object* v_r_619_; 
v_res_618_ = l_List_any___at___00LeanExport_initState_spec__2(v_x_617_);
lean_dec(v_x_617_);
v_r_619_ = lean_box(v_res_618_);
return v_r_619_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__0(lean_object* v_x_621_){
_start:
{
if (lean_obj_tag(v_x_621_) == 0)
{
uint8_t v___x_622_; 
v___x_622_ = 0;
return v___x_622_;
}
else
{
lean_object* v_head_623_; lean_object* v_tail_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v_head_623_ = lean_ctor_get(v_x_621_, 0);
v_tail_624_ = lean_ctor_get(v_x_621_, 1);
v___x_625_ = ((lean_object*)(l_List_any___at___00LeanExport_initState_spec__0___closed__0));
v___x_626_ = lean_string_dec_eq(v_head_623_, v___x_625_);
if (v___x_626_ == 0)
{
v_x_621_ = v_tail_624_;
goto _start;
}
else
{
return v___x_626_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__0___boxed(lean_object* v_x_628_){
_start:
{
uint8_t v_res_629_; lean_object* v_r_630_; 
v_res_629_ = l_List_any___at___00LeanExport_initState_spec__0(v_x_628_);
lean_dec(v_x_628_);
v_r_630_ = lean_box(v_res_629_);
return v_r_630_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(lean_object* v_f_631_, lean_object* v_x_632_, lean_object* v_x_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
if (lean_obj_tag(v_x_633_) == 0)
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
lean_dec_ref(v_f_631_);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v_x_632_);
lean_ctor_set(v___x_638_, 1, v___y_634_);
v___x_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
v___x_640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v___y_636_);
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
else
{
lean_object* v_key_642_; lean_object* v_value_643_; lean_object* v_tail_644_; lean_object* v___x_645_; 
v_key_642_ = lean_ctor_get(v_x_633_, 0);
lean_inc(v_key_642_);
v_value_643_ = lean_ctor_get(v_x_633_, 1);
lean_inc(v_value_643_);
v_tail_644_ = lean_ctor_get(v_x_633_, 2);
lean_inc(v_tail_644_);
lean_dec_ref_known(v_x_633_, 3);
lean_inc_ref(v_f_631_);
lean_inc_ref(v___y_635_);
v___x_645_ = lean_apply_6(v_f_631_, v_key_642_, v_value_643_, v___y_634_, v___y_635_, v___y_636_, lean_box(0));
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v_fst_647_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_646_);
v_fst_647_ = lean_ctor_get(v_a_646_, 0);
if (lean_obj_tag(v_fst_647_) == 0)
{
lean_dec(v_a_646_);
lean_dec(v_tail_644_);
lean_dec_ref(v_f_631_);
return v___x_645_;
}
else
{
lean_object* v_a_648_; lean_object* v_snd_649_; lean_object* v_fst_650_; lean_object* v_snd_651_; 
lean_dec_ref_known(v___x_645_, 1);
v_a_648_ = lean_ctor_get(v_fst_647_, 0);
lean_inc(v_a_648_);
v_snd_649_ = lean_ctor_get(v_a_646_, 1);
lean_inc(v_snd_649_);
lean_dec(v_a_646_);
v_fst_650_ = lean_ctor_get(v_a_648_, 0);
lean_inc(v_fst_650_);
v_snd_651_ = lean_ctor_get(v_a_648_, 1);
lean_inc(v_snd_651_);
lean_dec(v_a_648_);
v_x_632_ = v_fst_650_;
v_x_633_ = v_tail_644_;
v___y_634_ = v_snd_651_;
v___y_636_ = v_snd_649_;
goto _start;
}
}
else
{
lean_dec(v_tail_644_);
lean_dec_ref(v_f_631_);
return v___x_645_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___boxed(lean_object* v_f_653_, lean_object* v_x_654_, lean_object* v_x_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(v_f_653_, v_x_654_, v_x_655_, v___y_656_, v___y_657_, v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7___redArg(lean_object* v_f_661_, lean_object* v_as_662_, size_t v_i_663_, size_t v_stop_664_, lean_object* v_b_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
uint8_t v___x_670_; 
v___x_670_ = lean_usize_dec_eq(v_i_663_, v_stop_664_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_671_ = lean_array_uget_borrowed(v_as_662_, v_i_663_);
v___x_672_ = lean_box(0);
lean_inc(v___x_671_);
lean_inc_ref(v_f_661_);
v___x_673_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(v_f_661_, v___x_672_, v___x_671_, v___y_666_, v___y_667_, v___y_668_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; lean_object* v_fst_675_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc(v_a_674_);
v_fst_675_ = lean_ctor_get(v_a_674_, 0);
if (lean_obj_tag(v_fst_675_) == 0)
{
lean_dec(v_a_674_);
lean_dec_ref(v_f_661_);
return v___x_673_;
}
else
{
lean_object* v_a_676_; lean_object* v_snd_677_; lean_object* v_fst_678_; lean_object* v_snd_679_; size_t v___x_680_; size_t v___x_681_; 
lean_dec_ref_known(v___x_673_, 1);
v_a_676_ = lean_ctor_get(v_fst_675_, 0);
lean_inc(v_a_676_);
v_snd_677_ = lean_ctor_get(v_a_674_, 1);
lean_inc(v_snd_677_);
lean_dec(v_a_674_);
v_fst_678_ = lean_ctor_get(v_a_676_, 0);
lean_inc(v_fst_678_);
v_snd_679_ = lean_ctor_get(v_a_676_, 1);
lean_inc(v_snd_679_);
lean_dec(v_a_676_);
v___x_680_ = ((size_t)1ULL);
v___x_681_ = lean_usize_add(v_i_663_, v___x_680_);
v_i_663_ = v___x_681_;
v_b_665_ = v_fst_678_;
v___y_666_ = v_snd_679_;
v___y_668_ = v_snd_677_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_661_);
return v___x_673_;
}
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
lean_dec_ref(v_f_661_);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v_b_665_);
lean_ctor_set(v___x_683_, 1, v___y_666_);
v___x_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
v___x_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
lean_ctor_set(v___x_685_, 1, v___y_668_);
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7___redArg___boxed(lean_object* v_f_687_, lean_object* v_as_688_, lean_object* v_i_689_, lean_object* v_stop_690_, lean_object* v_b_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
size_t v_i_boxed_696_; size_t v_stop_boxed_697_; lean_object* v_res_698_; 
v_i_boxed_696_ = lean_unbox_usize(v_i_689_);
lean_dec(v_i_689_);
v_stop_boxed_697_ = lean_unbox_usize(v_stop_690_);
lean_dec(v_stop_690_);
v_res_698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7___redArg(v_f_687_, v_as_688_, v_i_boxed_696_, v_stop_boxed_697_, v_b_691_, v___y_692_, v___y_693_, v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec_ref(v_as_688_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0(lean_object* v_f_699_, lean_object* v_x_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
lean_object* v___x_707_; 
lean_inc_ref(v___y_704_);
v___x_707_ = lean_apply_6(v_f_699_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, lean_box(0));
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0___boxed(lean_object* v_f_708_, lean_object* v_x_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0(v_f_708_, v_x_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec_ref(v___y_713_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11___redArg(lean_object* v_f_717_, lean_object* v_keys_718_, lean_object* v_vals_719_, lean_object* v_i_720_, lean_object* v_acc_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v___x_726_; uint8_t v___x_727_; 
v___x_726_ = lean_array_get_size(v_keys_718_);
v___x_727_ = lean_nat_dec_lt(v_i_720_, v___x_726_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
lean_dec(v_i_720_);
lean_dec_ref(v_f_717_);
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v_acc_721_);
lean_ctor_set(v___x_728_, 1, v___y_722_);
v___x_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
v___x_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
lean_ctor_set(v___x_730_, 1, v___y_724_);
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
else
{
lean_object* v_k_732_; lean_object* v_v_733_; lean_object* v___x_734_; 
v_k_732_ = lean_array_fget_borrowed(v_keys_718_, v_i_720_);
v_v_733_ = lean_array_fget_borrowed(v_vals_719_, v_i_720_);
lean_inc_ref(v_f_717_);
lean_inc_ref(v___y_723_);
lean_inc(v_v_733_);
lean_inc(v_k_732_);
v___x_734_ = lean_apply_7(v_f_717_, v_acc_721_, v_k_732_, v_v_733_, v___y_722_, v___y_723_, v___y_724_, lean_box(0));
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v_fst_736_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
v_fst_736_ = lean_ctor_get(v_a_735_, 0);
if (lean_obj_tag(v_fst_736_) == 0)
{
lean_dec(v_a_735_);
lean_dec(v_i_720_);
lean_dec_ref(v_f_717_);
return v___x_734_;
}
else
{
lean_object* v_a_737_; lean_object* v_snd_738_; lean_object* v_fst_739_; lean_object* v_snd_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
lean_dec_ref_known(v___x_734_, 1);
v_a_737_ = lean_ctor_get(v_fst_736_, 0);
lean_inc(v_a_737_);
v_snd_738_ = lean_ctor_get(v_a_735_, 1);
lean_inc(v_snd_738_);
lean_dec(v_a_735_);
v_fst_739_ = lean_ctor_get(v_a_737_, 0);
lean_inc(v_fst_739_);
v_snd_740_ = lean_ctor_get(v_a_737_, 1);
lean_inc(v_snd_740_);
lean_dec(v_a_737_);
v___x_741_ = lean_unsigned_to_nat(1u);
v___x_742_ = lean_nat_add(v_i_720_, v___x_741_);
lean_dec(v_i_720_);
v_i_720_ = v___x_742_;
v_acc_721_ = v_fst_739_;
v___y_722_ = v_snd_740_;
v___y_724_ = v_snd_738_;
goto _start;
}
}
else
{
lean_dec(v_i_720_);
lean_dec_ref(v_f_717_);
return v___x_734_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11___redArg___boxed(lean_object* v_f_744_, lean_object* v_keys_745_, lean_object* v_vals_746_, lean_object* v_i_747_, lean_object* v_acc_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11___redArg(v_f_744_, v_keys_745_, v_vals_746_, v_i_747_, v_acc_748_, v___y_749_, v___y_750_, v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec_ref(v_vals_746_);
lean_dec_ref(v_keys_745_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(lean_object* v_f_754_, lean_object* v_as_755_, size_t v_i_756_, size_t v_stop_757_, lean_object* v_b_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v_fst_764_; lean_object* v_snd_765_; lean_object* v_snd_766_; lean_object* v___y_771_; uint8_t v___x_778_; 
v___x_778_ = lean_usize_dec_eq(v_i_756_, v_stop_757_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; 
v___x_779_ = lean_array_uget_borrowed(v_as_755_, v_i_756_);
switch(lean_obj_tag(v___x_779_))
{
case 0:
{
lean_object* v_key_780_; lean_object* v_val_781_; lean_object* v___x_782_; 
v_key_780_ = lean_ctor_get(v___x_779_, 0);
v_val_781_ = lean_ctor_get(v___x_779_, 1);
lean_inc_ref(v_f_754_);
lean_inc_ref(v___y_760_);
lean_inc(v_val_781_);
lean_inc(v_key_780_);
v___x_782_ = lean_apply_7(v_f_754_, v_b_758_, v_key_780_, v_val_781_, v___y_759_, v___y_760_, v___y_761_, lean_box(0));
v___y_771_ = v___x_782_;
goto v___jp_770_;
}
case 1:
{
lean_object* v_node_783_; lean_object* v___x_784_; 
v_node_783_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_node_783_);
lean_inc_ref(v_f_754_);
v___x_784_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg(v_f_754_, v_node_783_, v_b_758_, v___y_759_, v___y_760_, v___y_761_);
v___y_771_ = v___x_784_;
goto v___jp_770_;
}
default: 
{
v_fst_764_ = v_b_758_;
v_snd_765_ = v___y_759_;
v_snd_766_ = v___y_761_;
goto v___jp_763_;
}
}
}
else
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
lean_dec_ref(v_f_754_);
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v_b_758_);
lean_ctor_set(v___x_785_, 1, v___y_759_);
v___x_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
lean_ctor_set(v___x_787_, 1, v___y_761_);
v___x_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
return v___x_788_;
}
v___jp_763_:
{
size_t v___x_767_; size_t v___x_768_; 
v___x_767_ = ((size_t)1ULL);
v___x_768_ = lean_usize_add(v_i_756_, v___x_767_);
v_i_756_ = v___x_768_;
v_b_758_ = v_fst_764_;
v___y_759_ = v_snd_765_;
v___y_761_ = v_snd_766_;
goto _start;
}
v___jp_770_:
{
if (lean_obj_tag(v___y_771_) == 0)
{
lean_object* v_a_772_; lean_object* v_fst_773_; 
v_a_772_ = lean_ctor_get(v___y_771_, 0);
v_fst_773_ = lean_ctor_get(v_a_772_, 0);
if (lean_obj_tag(v_fst_773_) == 0)
{
lean_dec_ref(v_f_754_);
return v___y_771_;
}
else
{
lean_object* v_a_774_; lean_object* v_snd_775_; lean_object* v_fst_776_; lean_object* v_snd_777_; 
lean_inc(v_a_772_);
lean_dec_ref_known(v___y_771_, 1);
v_a_774_ = lean_ctor_get(v_fst_773_, 0);
lean_inc(v_a_774_);
v_snd_775_ = lean_ctor_get(v_a_772_, 1);
lean_inc(v_snd_775_);
lean_dec(v_a_772_);
v_fst_776_ = lean_ctor_get(v_a_774_, 0);
lean_inc(v_fst_776_);
v_snd_777_ = lean_ctor_get(v_a_774_, 1);
lean_inc(v_snd_777_);
lean_dec(v_a_774_);
v_fst_764_ = v_fst_776_;
v_snd_765_ = v_snd_777_;
v_snd_766_ = v_snd_775_;
goto v___jp_763_;
}
}
else
{
lean_dec_ref(v_f_754_);
return v___y_771_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg(lean_object* v_f_789_, lean_object* v_x_790_, lean_object* v_x_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
if (lean_obj_tag(v_x_790_) == 0)
{
lean_object* v_es_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_812_; 
v_es_796_ = lean_ctor_get(v_x_790_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v_x_790_);
if (v_isSharedCheck_812_ == 0)
{
v___x_798_ = v_x_790_;
v_isShared_799_ = v_isSharedCheck_812_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_es_796_);
lean_dec(v_x_790_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_812_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; 
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = lean_array_get_size(v_es_796_);
v___x_802_ = lean_nat_dec_lt(v___x_800_, v___x_801_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; lean_object* v___x_805_; 
lean_dec_ref(v_es_796_);
lean_dec_ref(v_f_789_);
v___x_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_803_, 0, v_x_791_);
lean_ctor_set(v___x_803_, 1, v___y_792_);
if (v_isShared_799_ == 0)
{
lean_ctor_set_tag(v___x_798_, 1);
lean_ctor_set(v___x_798_, 0, v___x_803_);
v___x_805_ = v___x_798_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_803_);
v___x_805_ = v_reuseFailAlloc_808_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
lean_ctor_set(v___x_806_, 1, v___y_794_);
v___x_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
return v___x_807_;
}
}
else
{
size_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; 
lean_del_object(v___x_798_);
v___x_809_ = ((size_t)0ULL);
v___x_810_ = lean_usize_of_nat(v___x_801_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(v_f_789_, v_es_796_, v___x_809_, v___x_810_, v_x_791_, v___y_792_, v___y_793_, v___y_794_);
lean_dec_ref(v_es_796_);
return v___x_811_;
}
}
}
else
{
lean_object* v_ks_813_; lean_object* v_vs_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v_ks_813_ = lean_ctor_get(v_x_790_, 0);
lean_inc_ref(v_ks_813_);
v_vs_814_ = lean_ctor_get(v_x_790_, 1);
lean_inc_ref(v_vs_814_);
lean_dec_ref_known(v_x_790_, 2);
v___x_815_ = lean_unsigned_to_nat(0u);
v___x_816_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11___redArg(v_f_789_, v_ks_813_, v_vs_814_, v___x_815_, v_x_791_, v___y_792_, v___y_793_, v___y_794_);
lean_dec_ref(v_vs_814_);
lean_dec_ref(v_ks_813_);
return v___x_816_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg___boxed(lean_object* v_f_817_, lean_object* v_x_818_, lean_object* v_x_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg(v_f_817_, v_x_818_, v_x_819_, v___y_820_, v___y_821_, v___y_822_);
lean_dec_ref(v___y_821_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10___redArg___boxed(lean_object* v_f_825_, lean_object* v_as_826_, lean_object* v_i_827_, lean_object* v_stop_828_, lean_object* v_b_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
size_t v_i_boxed_834_; size_t v_stop_boxed_835_; lean_object* v_res_836_; 
v_i_boxed_834_ = lean_unbox_usize(v_i_827_);
lean_dec(v_i_827_);
v_stop_boxed_835_ = lean_unbox_usize(v_stop_828_);
lean_dec(v_stop_828_);
v_res_836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(v_f_825_, v_as_826_, v_i_boxed_834_, v_stop_boxed_835_, v_b_829_, v___y_830_, v___y_831_, v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec_ref(v_as_826_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(lean_object* v_map_837_, lean_object* v_f_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v___f_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___f_843_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_843_, 0, v_f_838_);
v___x_844_ = lean_box(0);
v___x_845_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg(v___f_843_, v_map_837_, v___x_844_, v___y_839_, v___y_840_, v___y_841_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___boxed(lean_object* v_map_846_, lean_object* v_f_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(v_map_846_, v_f_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec_ref(v___y_849_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__5___redArg(lean_object* v_s_853_, lean_object* v_f_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_map_u2081_859_; lean_object* v_map_u2082_860_; lean_object* v_buckets_861_; lean_object* v___x_862_; lean_object* v___x_863_; uint8_t v___x_864_; 
v_map_u2081_859_ = lean_ctor_get(v_s_853_, 0);
lean_inc_ref(v_map_u2081_859_);
v_map_u2082_860_ = lean_ctor_get(v_s_853_, 1);
lean_inc_ref(v_map_u2082_860_);
lean_dec_ref(v_s_853_);
v_buckets_861_ = lean_ctor_get(v_map_u2081_859_, 1);
lean_inc_ref(v_buckets_861_);
lean_dec_ref(v_map_u2081_859_);
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = lean_array_get_size(v_buckets_861_);
v___x_864_ = lean_nat_dec_lt(v___x_862_, v___x_863_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; 
lean_dec_ref(v_buckets_861_);
v___x_865_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(v_map_u2082_860_, v_f_854_, v___y_855_, v___y_856_, v___y_857_);
return v___x_865_;
}
else
{
lean_object* v___x_866_; size_t v___x_867_; size_t v___x_868_; lean_object* v___x_869_; 
v___x_866_ = lean_box(0);
v___x_867_ = ((size_t)0ULL);
v___x_868_ = lean_usize_of_nat(v___x_863_);
lean_inc_ref(v_f_854_);
v___x_869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7___redArg(v_f_854_, v_buckets_861_, v___x_867_, v___x_868_, v___x_866_, v___y_855_, v___y_856_, v___y_857_);
lean_dec_ref(v_buckets_861_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v_fst_871_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
v_fst_871_ = lean_ctor_get(v_a_870_, 0);
if (lean_obj_tag(v_fst_871_) == 0)
{
lean_dec(v_a_870_);
lean_dec_ref(v_map_u2082_860_);
lean_dec_ref(v_f_854_);
return v___x_869_;
}
else
{
lean_object* v_a_872_; lean_object* v_snd_873_; lean_object* v_snd_874_; lean_object* v___x_875_; 
lean_dec_ref_known(v___x_869_, 1);
v_a_872_ = lean_ctor_get(v_fst_871_, 0);
lean_inc(v_a_872_);
v_snd_873_ = lean_ctor_get(v_a_870_, 1);
lean_inc(v_snd_873_);
lean_dec(v_a_870_);
v_snd_874_ = lean_ctor_get(v_a_872_, 1);
lean_inc(v_snd_874_);
lean_dec(v_a_872_);
v___x_875_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(v_map_u2082_860_, v_f_854_, v_snd_874_, v___y_856_, v_snd_873_);
return v___x_875_;
}
}
else
{
lean_dec_ref(v_map_u2082_860_);
lean_dec_ref(v_f_854_);
return v___x_869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__5___redArg___boxed(lean_object* v_s_876_, lean_object* v_f_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lean_SMap_forM___at___00LeanExport_initState_spec__5___redArg(v_s_876_, v_f_877_, v___y_878_, v___y_879_, v___y_880_);
lean_dec_ref(v___y_879_);
return v_res_882_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__1(lean_object* v_x_884_){
_start:
{
if (lean_obj_tag(v_x_884_) == 0)
{
uint8_t v___x_885_; 
v___x_885_ = 0;
return v___x_885_;
}
else
{
lean_object* v_head_886_; lean_object* v_tail_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v_head_886_ = lean_ctor_get(v_x_884_, 0);
v_tail_887_ = lean_ctor_get(v_x_884_, 1);
v___x_888_ = ((lean_object*)(l_List_any___at___00LeanExport_initState_spec__1___closed__0));
v___x_889_ = lean_string_dec_eq(v_head_886_, v___x_888_);
if (v___x_889_ == 0)
{
v_x_884_ = v_tail_887_;
goto _start;
}
else
{
return v___x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__1___boxed(lean_object* v_x_891_){
_start:
{
uint8_t v_res_892_; lean_object* v_r_893_; 
v_res_892_ = l_List_any___at___00LeanExport_initState_spec__1(v_x_891_);
lean_dec(v_x_891_);
v_r_893_ = lean_box(v_res_892_);
return v_r_893_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState(lean_object* v_env_895_, lean_object* v_cliOptions_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v_fst_901_; lean_object* v_snd_902_; lean_object* v___f_922_; lean_object* v_recursorMap_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___f_922_ = ((lean_object*)(l_LeanExport_initState___closed__0));
v_recursorMap_923_ = lean_box(1);
v___x_924_ = l_Lean_Environment_constants(v_env_895_);
v___x_925_ = l_Lean_SMap_forM___at___00LeanExport_initState_spec__5___redArg(v___x_924_, v___f_922_, v_recursorMap_923_, v_a_897_, v_a_898_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; lean_object* v_fst_927_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_925_, 1);
v_fst_927_ = lean_ctor_get(v_a_926_, 0);
if (lean_obj_tag(v_fst_927_) == 0)
{
lean_object* v_snd_928_; lean_object* v_a_929_; 
lean_inc_ref(v_fst_927_);
v_snd_928_ = lean_ctor_get(v_a_926_, 1);
lean_inc(v_snd_928_);
lean_dec(v_a_926_);
v_a_929_ = lean_ctor_get(v_fst_927_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v_fst_927_, 1);
v_fst_901_ = v_a_929_;
v_snd_902_ = v_snd_928_;
goto v___jp_900_;
}
else
{
lean_object* v_a_930_; lean_object* v_snd_931_; lean_object* v_snd_932_; 
v_a_930_ = lean_ctor_get(v_fst_927_, 0);
lean_inc(v_a_930_);
v_snd_931_ = lean_ctor_get(v_a_926_, 1);
lean_inc(v_snd_931_);
lean_dec(v_a_926_);
v_snd_932_ = lean_ctor_get(v_a_930_, 1);
lean_inc(v_snd_932_);
lean_dec(v_a_930_);
v_fst_901_ = v_snd_932_;
v_snd_902_ = v_snd_931_;
goto v___jp_900_;
}
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
v_a_933_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_925_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_925_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
v___jp_900_:
{
lean_object* v_visitedNames_903_; lean_object* v_visitedLevels_904_; lean_object* v_visitedExprs_905_; lean_object* v_visitedConstants_906_; lean_object* v_noMDataExprs_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_920_; 
v_visitedNames_903_ = lean_ctor_get(v_snd_902_, 0);
v_visitedLevels_904_ = lean_ctor_get(v_snd_902_, 1);
v_visitedExprs_905_ = lean_ctor_get(v_snd_902_, 2);
v_visitedConstants_906_ = lean_ctor_get(v_snd_902_, 3);
v_noMDataExprs_907_ = lean_ctor_get(v_snd_902_, 4);
v_isSharedCheck_920_ = !lean_is_exclusive(v_snd_902_);
if (v_isSharedCheck_920_ == 0)
{
lean_object* v_unused_921_; 
v_unused_921_ = lean_ctor_get(v_snd_902_, 5);
lean_dec(v_unused_921_);
v___x_909_ = v_snd_902_;
v_isShared_910_ = v_isSharedCheck_920_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_noMDataExprs_907_);
lean_inc(v_visitedConstants_906_);
lean_inc(v_visitedExprs_905_);
lean_inc(v_visitedLevels_904_);
lean_inc(v_visitedNames_903_);
lean_dec(v_snd_902_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_920_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_911_; uint8_t v___x_912_; uint8_t v___x_913_; uint8_t v___x_914_; lean_object* v___x_916_; 
v___x_911_ = lean_box(0);
v___x_912_ = l_List_any___at___00LeanExport_initState_spec__0(v_cliOptions_896_);
v___x_913_ = l_List_any___at___00LeanExport_initState_spec__1(v_cliOptions_896_);
v___x_914_ = l_List_any___at___00LeanExport_initState_spec__2(v_cliOptions_896_);
if (v_isShared_910_ == 0)
{
lean_ctor_set(v___x_909_, 5, v_fst_901_);
v___x_916_ = v___x_909_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_visitedNames_903_);
lean_ctor_set(v_reuseFailAlloc_919_, 1, v_visitedLevels_904_);
lean_ctor_set(v_reuseFailAlloc_919_, 2, v_visitedExprs_905_);
lean_ctor_set(v_reuseFailAlloc_919_, 3, v_visitedConstants_906_);
lean_ctor_set(v_reuseFailAlloc_919_, 4, v_noMDataExprs_907_);
lean_ctor_set(v_reuseFailAlloc_919_, 5, v_fst_901_);
v___x_916_ = v_reuseFailAlloc_919_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
lean_object* v___x_917_; lean_object* v___x_918_; 
lean_ctor_set_uint8(v___x_916_, sizeof(void*)*6, v___x_912_);
lean_ctor_set_uint8(v___x_916_, sizeof(void*)*6 + 1, v___x_913_);
lean_ctor_set_uint8(v___x_916_, sizeof(void*)*6 + 2, v___x_914_);
v___x_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_911_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
return v___x_918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState___boxed(lean_object* v_env_941_, lean_object* v_cliOptions_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_LeanExport_initState(v_env_941_, v_cliOptions_942_, v_a_943_, v_a_944_);
lean_dec_ref(v_a_943_);
lean_dec(v_cliOptions_942_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3(lean_object* v_val_947_, lean_object* v_k_948_, lean_object* v_t_949_, lean_object* v_hl_950_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(v_val_947_, v_k_948_, v_t_949_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4(lean_object* v_val_952_, lean_object* v_as_953_, lean_object* v_as_x27_954_, lean_object* v_b_955_, lean_object* v_a_956_, lean_object* v___y_957_, lean_object* v___y_958_){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(v_val_952_, v_as_x27_954_, v_b_955_, v___y_958_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___boxed(lean_object* v_val_961_, lean_object* v_as_962_, lean_object* v_as_x27_963_, lean_object* v_b_964_, lean_object* v_a_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4(v_val_961_, v_as_962_, v_as_x27_963_, v_b_964_, v_a_965_, v___y_966_, v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec(v_as_x27_963_);
lean_dec(v_as_962_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__5(lean_object* v_00_u03b2_970_, lean_object* v_s_971_, lean_object* v_f_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_SMap_forM___at___00LeanExport_initState_spec__5___redArg(v_s_971_, v_f_972_, v___y_973_, v___y_974_, v___y_975_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00LeanExport_initState_spec__5___boxed(lean_object* v_00_u03b2_978_, lean_object* v_s_979_, lean_object* v_f_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_Lean_SMap_forM___at___00LeanExport_initState_spec__5(v_00_u03b2_978_, v_s_979_, v_f_980_, v___y_981_, v___y_982_, v___y_983_);
lean_dec_ref(v___y_982_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5(lean_object* v_00_u03b2_986_, lean_object* v_f_987_, lean_object* v_x_988_, lean_object* v_x_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(v_f_987_, v_x_988_, v_x_989_, v___y_990_, v___y_991_, v___y_992_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5___boxed(lean_object* v_00_u03b2_995_, lean_object* v_f_996_, lean_object* v_x_997_, lean_object* v_x_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__5(v_00_u03b2_995_, v_f_996_, v_x_997_, v_x_998_, v___y_999_, v___y_1000_, v___y_1001_);
lean_dec_ref(v___y_1000_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6(lean_object* v_00_u03b2_1004_, lean_object* v_map_1005_, lean_object* v_f_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
lean_object* v___x_1011_; 
v___x_1011_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(v_map_1005_, v_f_1006_, v___y_1007_, v___y_1008_, v___y_1009_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6___boxed(lean_object* v_00_u03b2_1012_, lean_object* v_map_1013_, lean_object* v_f_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6(v_00_u03b2_1012_, v_map_1013_, v_f_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec_ref(v___y_1016_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7(lean_object* v_00_u03b2_1020_, lean_object* v_f_1021_, lean_object* v_as_1022_, size_t v_i_1023_, size_t v_stop_1024_, lean_object* v_b_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7___redArg(v_f_1021_, v_as_1022_, v_i_1023_, v_stop_1024_, v_b_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7___boxed(lean_object* v_00_u03b2_1031_, lean_object* v_f_1032_, lean_object* v_as_1033_, lean_object* v_i_1034_, lean_object* v_stop_1035_, lean_object* v_b_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
size_t v_i_boxed_1041_; size_t v_stop_boxed_1042_; lean_object* v_res_1043_; 
v_i_boxed_1041_ = lean_unbox_usize(v_i_1034_);
lean_dec(v_i_1034_);
v_stop_boxed_1042_ = lean_unbox_usize(v_stop_1035_);
lean_dec(v_stop_1035_);
v_res_1043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__7(v_00_u03b2_1031_, v_f_1032_, v_as_1033_, v_i_boxed_1041_, v_stop_boxed_1042_, v_b_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec_ref(v_as_1033_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7___redArg(lean_object* v_map_1044_, lean_object* v_f_1045_, lean_object* v_init_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg(v_f_1045_, v_map_1044_, v_init_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_map_1052_, lean_object* v_f_1053_, lean_object* v_init_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7___redArg(v_map_1052_, v_f_1053_, v_init_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
lean_dec_ref(v___y_1056_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7(lean_object* v_00_u03c3_1060_, lean_object* v_00_u03b2_1061_, lean_object* v_map_1062_, lean_object* v_f_1063_, lean_object* v_init_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg(v_f_1063_, v_map_1062_, v_init_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03c3_1070_, lean_object* v_00_u03b2_1071_, lean_object* v_map_1072_, lean_object* v_f_1073_, lean_object* v_init_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7(v_00_u03c3_1070_, v_00_u03b2_1071_, v_map_1072_, v_f_1073_, v_init_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
lean_dec_ref(v___y_1076_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8(lean_object* v_00_u03c3_1080_, lean_object* v_00_u03b1_1081_, lean_object* v_00_u03b2_1082_, lean_object* v_f_1083_, lean_object* v_x_1084_, lean_object* v_x_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___redArg(v_f_1083_, v_x_1084_, v_x_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8___boxed(lean_object* v_00_u03c3_1091_, lean_object* v_00_u03b1_1092_, lean_object* v_00_u03b2_1093_, lean_object* v_f_1094_, lean_object* v_x_1095_, lean_object* v_x_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8(v_00_u03c3_1091_, v_00_u03b1_1092_, v_00_u03b2_1093_, v_f_1094_, v_x_1095_, v_x_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
lean_dec_ref(v___y_1098_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10(lean_object* v_00_u03b1_1102_, lean_object* v_00_u03b2_1103_, lean_object* v_00_u03c3_1104_, lean_object* v_f_1105_, lean_object* v_as_1106_, size_t v_i_1107_, size_t v_stop_1108_, lean_object* v_b_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v___x_1114_; 
v___x_1114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10___redArg(v_f_1105_, v_as_1106_, v_i_1107_, v_stop_1108_, v_b_1109_, v___y_1110_, v___y_1111_, v___y_1112_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10___boxed(lean_object* v_00_u03b1_1115_, lean_object* v_00_u03b2_1116_, lean_object* v_00_u03c3_1117_, lean_object* v_f_1118_, lean_object* v_as_1119_, lean_object* v_i_1120_, lean_object* v_stop_1121_, lean_object* v_b_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
size_t v_i_boxed_1127_; size_t v_stop_boxed_1128_; lean_object* v_res_1129_; 
v_i_boxed_1127_ = lean_unbox_usize(v_i_1120_);
lean_dec(v_i_1120_);
v_stop_boxed_1128_ = lean_unbox_usize(v_stop_1121_);
lean_dec(v_stop_1121_);
v_res_1129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__10(v_00_u03b1_1115_, v_00_u03b2_1116_, v_00_u03c3_1117_, v_f_1118_, v_as_1119_, v_i_boxed_1127_, v_stop_boxed_1128_, v_b_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec_ref(v_as_1119_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11(lean_object* v_00_u03c3_1130_, lean_object* v_00_u03b1_1131_, lean_object* v_00_u03b2_1132_, lean_object* v_f_1133_, lean_object* v_keys_1134_, lean_object* v_vals_1135_, lean_object* v_heq_1136_, lean_object* v_i_1137_, lean_object* v_acc_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11___redArg(v_f_1133_, v_keys_1134_, v_vals_1135_, v_i_1137_, v_acc_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11___boxed(lean_object* v_00_u03c3_1144_, lean_object* v_00_u03b1_1145_, lean_object* v_00_u03b2_1146_, lean_object* v_f_1147_, lean_object* v_keys_1148_, lean_object* v_vals_1149_, lean_object* v_heq_1150_, lean_object* v_i_1151_, lean_object* v_acc_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__7_spec__8_spec__11(v_00_u03c3_1144_, v_00_u03b1_1145_, v_00_u03b2_1146_, v_f_1147_, v_keys_1148_, v_vals_1149_, v_heq_1150_, v_i_1151_, v_acc_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec_ref(v_vals_1149_);
lean_dec_ref(v_keys_1148_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(lean_object* v_inst_1159_, lean_object* v_inst_1160_, lean_object* v_x_1161_, lean_object* v_namespaced_1162_, lean_object* v_getM_1163_, lean_object* v_setM_1164_, lean_object* v_rec_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_){
_start:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_inc_ref(v_getM_1163_);
lean_inc_ref(v_a_1167_);
v___x_1169_ = lean_apply_1(v_getM_1163_, v_a_1167_);
lean_inc(v_x_1161_);
lean_inc_ref(v_inst_1159_);
lean_inc_ref(v_inst_1160_);
v___x_1170_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1160_, v_inst_1159_, v___x_1169_, v_x_1161_);
lean_dec_ref(v___x_1169_);
if (lean_obj_tag(v___x_1170_) == 1)
{
lean_object* v_val_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1179_; 
lean_dec_ref(v_rec_1165_);
lean_dec_ref(v_setM_1164_);
lean_dec_ref(v_getM_1163_);
lean_dec_ref(v_namespaced_1162_);
lean_dec(v_x_1161_);
lean_dec_ref(v_inst_1160_);
lean_dec_ref(v_inst_1159_);
v_val_1171_ = lean_ctor_get(v___x_1170_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1173_ = v___x_1170_;
v_isShared_1174_ = v_isSharedCheck_1179_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_val_1171_);
lean_dec(v___x_1170_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1179_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_val_1171_);
lean_ctor_set(v___x_1175_, 1, v_a_1167_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set_tag(v___x_1173_, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1175_);
v___x_1177_ = v___x_1173_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
else
{
lean_object* v___f_1180_; lean_object* v___x_1181_; 
lean_dec(v___x_1170_);
v___f_1180_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0));
lean_inc_ref(v_a_1166_);
v___x_1181_ = lean_apply_3(v_rec_1165_, v_a_1166_, v_a_1167_, lean_box(0));
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; lean_object* v_fst_1183_; lean_object* v_snd_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1216_; 
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc(v_a_1182_);
lean_dec_ref_known(v___x_1181_, 1);
v_fst_1183_ = lean_ctor_get(v_a_1182_, 0);
v_snd_1184_ = lean_ctor_get(v_a_1182_, 1);
v_isSharedCheck_1216_ = !lean_is_exclusive(v_a_1182_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1186_ = v_a_1182_;
v_isShared_1187_ = v_isSharedCheck_1216_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_snd_1184_);
lean_inc(v_fst_1183_);
lean_dec(v_a_1182_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1216_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1188_; lean_object* v_size_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
lean_inc(v_snd_1184_);
v___x_1188_ = lean_apply_1(v_getM_1163_, v_snd_1184_);
v_size_1189_ = lean_ctor_get(v___x_1188_, 0);
lean_inc_n(v_size_1189_, 2);
v___x_1190_ = l_Lean_JsonNumber_fromNat(v_size_1189_);
v___x_1191_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
v___x_1192_ = l_Lean_Json_setObjVal_x21(v_fst_1183_, v_namespaced_1162_, v___x_1191_);
v___x_1193_ = l_Lean_Json_compress(v___x_1192_);
v___x_1194_ = l_IO_println___redArg(v___f_1180_, v___x_1193_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1206_; 
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1206_ == 0)
{
lean_object* v_unused_1207_; 
v_unused_1207_ = lean_ctor_get(v___x_1194_, 0);
lean_dec(v_unused_1207_);
v___x_1196_ = v___x_1194_;
v_isShared_1197_ = v_isSharedCheck_1206_;
goto v_resetjp_1195_;
}
else
{
lean_dec(v___x_1194_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1206_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1201_; 
lean_inc(v_size_1189_);
v___x_1198_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1160_, v_inst_1159_, v___x_1188_, v_x_1161_, v_size_1189_);
v___x_1199_ = lean_apply_2(v_setM_1164_, v_snd_1184_, v___x_1198_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 1, v___x_1199_);
lean_ctor_set(v___x_1186_, 0, v_size_1189_);
v___x_1201_ = v___x_1186_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_size_1189_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v___x_1199_);
v___x_1201_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
lean_object* v___x_1203_; 
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v___x_1201_);
v___x_1203_ = v___x_1196_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1201_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
else
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
lean_dec(v_size_1189_);
lean_dec_ref(v___x_1188_);
lean_del_object(v___x_1186_);
lean_dec(v_snd_1184_);
lean_dec_ref(v_setM_1164_);
lean_dec(v_x_1161_);
lean_dec_ref(v_inst_1160_);
lean_dec_ref(v_inst_1159_);
v_a_1208_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1210_ = v___x_1194_;
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1194_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1208_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec_ref(v_setM_1164_);
lean_dec_ref(v_getM_1163_);
lean_dec_ref(v_namespaced_1162_);
lean_dec(v_x_1161_);
lean_dec_ref(v_inst_1160_);
lean_dec_ref(v_inst_1159_);
v_a_1217_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1181_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1181_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___boxed(lean_object* v_inst_1225_, lean_object* v_inst_1226_, lean_object* v_x_1227_, lean_object* v_namespaced_1228_, lean_object* v_getM_1229_, lean_object* v_setM_1230_, lean_object* v_rec_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(v_inst_1225_, v_inst_1226_, v_x_1227_, v_namespaced_1228_, v_getM_1229_, v_setM_1230_, v_rec_1231_, v_a_1232_, v_a_1233_);
lean_dec_ref(v_a_1232_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx(lean_object* v_00_u03b1_1236_, lean_object* v_inst_1237_, lean_object* v_inst_1238_, lean_object* v_x_1239_, lean_object* v_namespaced_1240_, lean_object* v_getM_1241_, lean_object* v_setM_1242_, lean_object* v_rec_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_){
_start:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
lean_inc_ref(v_getM_1241_);
lean_inc_ref(v_a_1245_);
v___x_1247_ = lean_apply_1(v_getM_1241_, v_a_1245_);
lean_inc(v_x_1239_);
lean_inc_ref(v_inst_1237_);
lean_inc_ref(v_inst_1238_);
v___x_1248_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1238_, v_inst_1237_, v___x_1247_, v_x_1239_);
lean_dec_ref(v___x_1247_);
if (lean_obj_tag(v___x_1248_) == 1)
{
lean_object* v_val_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1257_; 
lean_dec_ref(v_rec_1243_);
lean_dec_ref(v_setM_1242_);
lean_dec_ref(v_getM_1241_);
lean_dec_ref(v_namespaced_1240_);
lean_dec(v_x_1239_);
lean_dec_ref(v_inst_1238_);
lean_dec_ref(v_inst_1237_);
v_val_1249_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1251_ = v___x_1248_;
v_isShared_1252_ = v_isSharedCheck_1257_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_val_1249_);
lean_dec(v___x_1248_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1257_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1253_; lean_object* v___x_1255_; 
v___x_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1253_, 0, v_val_1249_);
lean_ctor_set(v___x_1253_, 1, v_a_1245_);
if (v_isShared_1252_ == 0)
{
lean_ctor_set_tag(v___x_1251_, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1253_);
v___x_1255_ = v___x_1251_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1253_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
else
{
lean_object* v___f_1258_; lean_object* v___x_1259_; 
lean_dec(v___x_1248_);
v___f_1258_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0));
lean_inc_ref(v_a_1244_);
v___x_1259_ = lean_apply_3(v_rec_1243_, v_a_1244_, v_a_1245_, lean_box(0));
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v_a_1260_; lean_object* v_fst_1261_; lean_object* v_snd_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1294_; 
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_a_1260_);
lean_dec_ref_known(v___x_1259_, 1);
v_fst_1261_ = lean_ctor_get(v_a_1260_, 0);
v_snd_1262_ = lean_ctor_get(v_a_1260_, 1);
v_isSharedCheck_1294_ = !lean_is_exclusive(v_a_1260_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1264_ = v_a_1260_;
v_isShared_1265_ = v_isSharedCheck_1294_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_snd_1262_);
lean_inc(v_fst_1261_);
lean_dec(v_a_1260_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1294_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1266_; lean_object* v_size_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
lean_inc(v_snd_1262_);
v___x_1266_ = lean_apply_1(v_getM_1241_, v_snd_1262_);
v_size_1267_ = lean_ctor_get(v___x_1266_, 0);
lean_inc_n(v_size_1267_, 2);
v___x_1268_ = l_Lean_JsonNumber_fromNat(v_size_1267_);
v___x_1269_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
v___x_1270_ = l_Lean_Json_setObjVal_x21(v_fst_1261_, v_namespaced_1240_, v___x_1269_);
v___x_1271_ = l_Lean_Json_compress(v___x_1270_);
v___x_1272_ = l_IO_println___redArg(v___f_1258_, v___x_1271_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1284_; 
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1284_ == 0)
{
lean_object* v_unused_1285_; 
v_unused_1285_ = lean_ctor_get(v___x_1272_, 0);
lean_dec(v_unused_1285_);
v___x_1274_ = v___x_1272_;
v_isShared_1275_ = v_isSharedCheck_1284_;
goto v_resetjp_1273_;
}
else
{
lean_dec(v___x_1272_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1284_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1279_; 
lean_inc(v_size_1267_);
v___x_1276_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1238_, v_inst_1237_, v___x_1266_, v_x_1239_, v_size_1267_);
v___x_1277_ = lean_apply_2(v_setM_1242_, v_snd_1262_, v___x_1276_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 1, v___x_1277_);
lean_ctor_set(v___x_1264_, 0, v_size_1267_);
v___x_1279_ = v___x_1264_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_size_1267_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v___x_1277_);
v___x_1279_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_object* v___x_1281_; 
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 0, v___x_1279_);
v___x_1281_ = v___x_1274_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1279_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec(v_size_1267_);
lean_dec_ref(v___x_1266_);
lean_del_object(v___x_1264_);
lean_dec(v_snd_1262_);
lean_dec_ref(v_setM_1242_);
lean_dec(v_x_1239_);
lean_dec_ref(v_inst_1238_);
lean_dec_ref(v_inst_1237_);
v_a_1286_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1272_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1272_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_dec_ref(v_setM_1242_);
lean_dec_ref(v_getM_1241_);
lean_dec_ref(v_namespaced_1240_);
lean_dec(v_x_1239_);
lean_dec_ref(v_inst_1238_);
lean_dec_ref(v_inst_1237_);
v_a_1295_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1259_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1259_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___boxed(lean_object* v_00_u03b1_1303_, lean_object* v_inst_1304_, lean_object* v_inst_1305_, lean_object* v_x_1306_, lean_object* v_namespaced_1307_, lean_object* v_getM_1308_, lean_object* v_setM_1309_, lean_object* v_rec_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l___private_LeanExport_Basic_0__LeanExport_getIdx(v_00_u03b1_1303_, v_inst_1304_, v_inst_1305_, v_x_1306_, v_namespaced_1307_, v_getM_1308_, v_setM_1309_, v_rec_1310_, v_a_1311_, v_a_1312_);
lean_dec_ref(v_a_1311_);
return v_res_1314_;
}
}
static lean_object* _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1315_; 
v___x_1315_ = l_instMonadEIO___redArg();
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(lean_object* v_msg_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v___x_1320_; lean_object* v___f_1321_; lean_object* v___f_1322_; lean_object* v___f_1323_; lean_object* v___f_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___f_1333_; lean_object* v___x_1421__overap_1334_; lean_object* v___x_1335_; 
v___x_1320_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_1321_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1321_, 0, v___x_1320_);
v___f_1322_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1322_, 0, v___x_1320_);
v___f_1323_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1323_, 0, v___x_1320_);
v___f_1324_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1324_, 0, v___x_1320_);
v___x_1325_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1325_, 0, lean_box(0));
lean_closure_set(v___x_1325_, 1, lean_box(0));
lean_closure_set(v___x_1325_, 2, v___x_1320_);
v___x_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
lean_ctor_set(v___x_1326_, 1, v___f_1321_);
v___x_1327_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1327_, 0, lean_box(0));
lean_closure_set(v___x_1327_, 1, lean_box(0));
lean_closure_set(v___x_1327_, 2, v___x_1320_);
v___x_1328_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
lean_ctor_set(v___x_1328_, 2, v___f_1322_);
lean_ctor_set(v___x_1328_, 3, v___f_1323_);
lean_ctor_set(v___x_1328_, 4, v___f_1324_);
v___x_1329_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1329_, 0, lean_box(0));
lean_closure_set(v___x_1329_, 1, lean_box(0));
lean_closure_set(v___x_1329_, 2, v___x_1320_);
v___x_1330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = lean_box(0);
v___x_1332_ = l_instInhabitedOfMonad___redArg(v___x_1330_, v___x_1331_);
v___f_1333_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1333_, 0, v___x_1332_);
v___x_1421__overap_1334_ = lean_panic_fn_borrowed(v___f_1333_, v_msg_1316_);
lean_dec_ref(v___f_1333_);
lean_inc_ref(v___y_1317_);
v___x_1335_ = lean_apply_3(v___x_1421__overap_1334_, v___y_1317_, v___y_1318_, lean_box(0));
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___boxed(lean_object* v_msg_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v_msg_1336_, v___y_1337_, v___y_1338_);
lean_dec_ref(v___y_1337_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(lean_object* v_a_1341_, lean_object* v_x_1342_){
_start:
{
if (lean_obj_tag(v_x_1342_) == 0)
{
lean_object* v___x_1343_; 
v___x_1343_ = lean_box(0);
return v___x_1343_;
}
else
{
lean_object* v_key_1344_; lean_object* v_value_1345_; lean_object* v_tail_1346_; uint8_t v___x_1347_; 
v_key_1344_ = lean_ctor_get(v_x_1342_, 0);
v_value_1345_ = lean_ctor_get(v_x_1342_, 1);
v_tail_1346_ = lean_ctor_get(v_x_1342_, 2);
v___x_1347_ = lean_name_eq(v_key_1344_, v_a_1341_);
if (v___x_1347_ == 0)
{
v_x_1342_ = v_tail_1346_;
goto _start;
}
else
{
lean_object* v___x_1349_; 
lean_inc(v_value_1345_);
v___x_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1349_, 0, v_value_1345_);
return v___x_1349_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg___boxed(lean_object* v_a_1350_, lean_object* v_x_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1350_, v_x_1351_);
lean_dec(v_x_1351_);
lean_dec(v_a_1350_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(lean_object* v_m_1353_, lean_object* v_a_1354_){
_start:
{
lean_object* v_buckets_1355_; lean_object* v___x_1356_; uint64_t v___y_1358_; lean_object* v___x_1372_; 
v_buckets_1355_ = lean_ctor_get(v_m_1353_, 1);
v___x_1356_ = lean_array_get_size(v_buckets_1355_);
v___x_1372_ = l_unsafeCast___redArg(v_a_1354_);
if (lean_obj_tag(v___x_1372_) == 0)
{
uint64_t v___x_1373_; 
v___x_1373_ = 1723ULL;
v___y_1358_ = v___x_1373_;
goto v___jp_1357_;
}
else
{
uint64_t v_hash_1374_; 
v_hash_1374_ = lean_ctor_get_uint64(v___x_1372_, sizeof(void*)*2);
lean_dec(v___x_1372_);
v___y_1358_ = v_hash_1374_;
goto v___jp_1357_;
}
v___jp_1357_:
{
uint64_t v___x_1359_; uint64_t v___x_1360_; uint64_t v_fold_1361_; uint64_t v___x_1362_; uint64_t v___x_1363_; uint64_t v___x_1364_; size_t v___x_1365_; size_t v___x_1366_; size_t v___x_1367_; size_t v___x_1368_; size_t v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1359_ = 32ULL;
v___x_1360_ = lean_uint64_shift_right(v___y_1358_, v___x_1359_);
v_fold_1361_ = lean_uint64_xor(v___y_1358_, v___x_1360_);
v___x_1362_ = 16ULL;
v___x_1363_ = lean_uint64_shift_right(v_fold_1361_, v___x_1362_);
v___x_1364_ = lean_uint64_xor(v_fold_1361_, v___x_1363_);
v___x_1365_ = lean_uint64_to_usize(v___x_1364_);
v___x_1366_ = lean_usize_of_nat(v___x_1356_);
v___x_1367_ = ((size_t)1ULL);
v___x_1368_ = lean_usize_sub(v___x_1366_, v___x_1367_);
v___x_1369_ = lean_usize_land(v___x_1365_, v___x_1368_);
v___x_1370_ = lean_array_uget_borrowed(v_buckets_1355_, v___x_1369_);
v___x_1371_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1354_, v___x_1370_);
return v___x_1371_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg___boxed(lean_object* v_m_1375_, lean_object* v_a_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1375_, v_a_1376_);
lean_dec(v_a_1376_);
lean_dec_ref(v_m_1375_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(lean_object* v_s_1378_){
_start:
{
lean_object* v___x_1380_; lean_object* v_putStr_1381_; lean_object* v___x_1382_; 
v___x_1380_ = lean_get_stdout();
v_putStr_1381_ = lean_ctor_get(v___x_1380_, 4);
lean_inc_ref(v_putStr_1381_);
lean_dec_ref(v___x_1380_);
v___x_1382_ = lean_apply_2(v_putStr_1381_, v_s_1378_, lean_box(0));
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2___boxed(lean_object* v_s_1383_, lean_object* v_a_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v_s_1383_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(lean_object* v_s_1386_){
_start:
{
uint32_t v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1388_ = 10;
v___x_1389_ = lean_string_push(v_s_1386_, v___x_1388_);
v___x_1390_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v___x_1389_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1___boxed(lean_object* v_s_1391_, lean_object* v_a_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v_s_1391_);
return v_res_1393_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4(void){
_start:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1398_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1399_ = lean_unsigned_to_nat(18u);
v___x_1400_ = lean_unsigned_to_nat(114u);
v___x_1401_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2));
v___x_1402_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1403_ = l_mkPanicMessageWithDecl(v___x_1402_, v___x_1401_, v___x_1400_, v___x_1399_, v___x_1398_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName(lean_object* v_n_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_){
_start:
{
lean_object* v_visitedNames_1412_; lean_object* v___x_1413_; 
v_visitedNames_1412_ = lean_ctor_get(v_a_1410_, 0);
v___x_1413_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_visitedNames_1412_, v_n_1408_);
if (lean_obj_tag(v___x_1413_) == 1)
{
lean_object* v_val_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1422_; 
lean_dec(v_n_1408_);
v_val_1414_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1416_ = v___x_1413_;
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_val_1414_);
lean_dec(v___x_1413_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1418_, 0, v_val_1414_);
lean_ctor_set(v___x_1418_, 1, v_a_1410_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set_tag(v___x_1416_, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1418_);
v___x_1420_ = v___x_1416_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
else
{
lean_object* v___x_1423_; lean_object* v_fst_1425_; lean_object* v_snd_1426_; 
lean_dec(v___x_1413_);
v___x_1423_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0));
switch(lean_obj_tag(v_n_1408_))
{
case 0:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1467_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4, &l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4);
v___x_1468_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_1467_, v_a_1409_, v_a_1410_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v_fst_1470_; lean_object* v_snd_1471_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v___x_1468_, 1);
v_fst_1470_ = lean_ctor_get(v_a_1469_, 0);
lean_inc(v_fst_1470_);
v_snd_1471_ = lean_ctor_get(v_a_1469_, 1);
lean_inc(v_snd_1471_);
lean_dec(v_a_1469_);
v_fst_1425_ = v_fst_1470_;
v_snd_1426_ = v_snd_1471_;
goto v___jp_1424_;
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
v_a_1472_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1468_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1468_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
case 1:
{
lean_object* v_pre_1480_; lean_object* v_str_1481_; lean_object* v___x_1482_; 
v_pre_1480_ = lean_ctor_get(v_n_1408_, 0);
v_str_1481_ = lean_ctor_get(v_n_1408_, 1);
lean_inc(v_pre_1480_);
v___x_1482_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1480_, v_a_1409_, v_a_1410_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1511_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1485_ = v___x_1482_;
v_isShared_1486_ = v_isSharedCheck_1511_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1482_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1511_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v_fst_1487_; lean_object* v_snd_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1510_; 
v_fst_1487_ = lean_ctor_get(v_a_1483_, 0);
v_snd_1488_ = lean_ctor_get(v_a_1483_, 1);
v_isSharedCheck_1510_ = !lean_is_exclusive(v_a_1483_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1490_ = v_a_1483_;
v_isShared_1491_ = v_isSharedCheck_1510_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_snd_1488_);
lean_inc(v_fst_1487_);
lean_dec(v_a_1483_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1510_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1492_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5));
v___x_1493_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1494_ = l_Lean_JsonNumber_fromNat(v_fst_1487_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set_tag(v___x_1485_, 2);
lean_ctor_set(v___x_1485_, 0, v___x_1494_);
v___x_1496_ = v___x_1485_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1494_);
v___x_1496_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
lean_object* v___x_1498_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 1, v___x_1496_);
lean_ctor_set(v___x_1490_, 0, v___x_1493_);
v___x_1498_ = v___x_1490_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1493_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v___x_1496_);
v___x_1498_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
lean_inc_ref(v_str_1481_);
v___x_1499_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1499_, 0, v_str_1481_);
v___x_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1492_);
lean_ctor_set(v___x_1500_, 1, v___x_1499_);
v___x_1501_ = lean_box(0);
v___x_1502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1500_);
lean_ctor_set(v___x_1502_, 1, v___x_1501_);
v___x_1503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1498_);
lean_ctor_set(v___x_1503_, 1, v___x_1502_);
v___x_1504_ = l_Lean_Json_mkObj(v___x_1503_);
lean_dec_ref_known(v___x_1503_, 2);
v___x_1505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1492_);
lean_ctor_set(v___x_1505_, 1, v___x_1504_);
v___x_1506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
lean_ctor_set(v___x_1506_, 1, v___x_1501_);
v___x_1507_ = l_Lean_Json_mkObj(v___x_1506_);
lean_dec_ref_known(v___x_1506_, 2);
v_fst_1425_ = v___x_1507_;
v_snd_1426_ = v_snd_1488_;
goto v___jp_1424_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1408_, 2);
return v___x_1482_;
}
}
default: 
{
lean_object* v_pre_1512_; lean_object* v_i_1513_; lean_object* v___x_1514_; 
v_pre_1512_ = lean_ctor_get(v_n_1408_, 0);
v_i_1513_ = lean_ctor_get(v_n_1408_, 1);
lean_inc(v_pre_1512_);
v___x_1514_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1512_, v_a_1409_, v_a_1410_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1545_; 
v_a_1515_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1517_ = v___x_1514_;
v_isShared_1518_ = v_isSharedCheck_1545_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1514_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1545_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v_fst_1519_; lean_object* v_snd_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1544_; 
v_fst_1519_ = lean_ctor_get(v_a_1515_, 0);
v_snd_1520_ = lean_ctor_get(v_a_1515_, 1);
v_isSharedCheck_1544_ = !lean_is_exclusive(v_a_1515_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1522_ = v_a_1515_;
v_isShared_1523_ = v_isSharedCheck_1544_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_snd_1520_);
lean_inc(v_fst_1519_);
lean_dec(v_a_1515_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1544_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1528_; 
v___x_1524_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7));
v___x_1525_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1526_ = l_Lean_JsonNumber_fromNat(v_fst_1519_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set_tag(v___x_1517_, 2);
lean_ctor_set(v___x_1517_, 0, v___x_1526_);
v___x_1528_ = v___x_1517_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1526_);
v___x_1528_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
lean_object* v___x_1530_; 
if (v_isShared_1523_ == 0)
{
lean_ctor_set(v___x_1522_, 1, v___x_1528_);
lean_ctor_set(v___x_1522_, 0, v___x_1525_);
v___x_1530_ = v___x_1522_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1525_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v___x_1528_);
v___x_1530_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1531_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8));
lean_inc(v_i_1513_);
v___x_1532_ = l_Lean_JsonNumber_fromNat(v_i_1513_);
v___x_1533_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
v___x_1534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1531_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
v___x_1535_ = lean_box(0);
v___x_1536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1534_);
lean_ctor_set(v___x_1536_, 1, v___x_1535_);
v___x_1537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1530_);
lean_ctor_set(v___x_1537_, 1, v___x_1536_);
v___x_1538_ = l_Lean_Json_mkObj(v___x_1537_);
lean_dec_ref_known(v___x_1537_, 2);
v___x_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1524_);
lean_ctor_set(v___x_1539_, 1, v___x_1538_);
v___x_1540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1539_);
lean_ctor_set(v___x_1540_, 1, v___x_1535_);
v___x_1541_ = l_Lean_Json_mkObj(v___x_1540_);
lean_dec_ref_known(v___x_1540_, 2);
v_fst_1425_ = v___x_1541_;
v_snd_1426_ = v_snd_1520_;
goto v___jp_1424_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1408_, 2);
return v___x_1514_;
}
}
}
v___jp_1424_:
{
lean_object* v_visitedNames_1427_; lean_object* v_visitedLevels_1428_; lean_object* v_visitedExprs_1429_; lean_object* v_visitedConstants_1430_; lean_object* v_noMDataExprs_1431_; uint8_t v_exportMData_1432_; uint8_t v_exportUnsafe_1433_; uint8_t v_ignoreMissing_1434_; lean_object* v_recursorMap_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1466_; 
v_visitedNames_1427_ = lean_ctor_get(v_snd_1426_, 0);
v_visitedLevels_1428_ = lean_ctor_get(v_snd_1426_, 1);
v_visitedExprs_1429_ = lean_ctor_get(v_snd_1426_, 2);
v_visitedConstants_1430_ = lean_ctor_get(v_snd_1426_, 3);
v_noMDataExprs_1431_ = lean_ctor_get(v_snd_1426_, 4);
v_exportMData_1432_ = lean_ctor_get_uint8(v_snd_1426_, sizeof(void*)*6);
v_exportUnsafe_1433_ = lean_ctor_get_uint8(v_snd_1426_, sizeof(void*)*6 + 1);
v_ignoreMissing_1434_ = lean_ctor_get_uint8(v_snd_1426_, sizeof(void*)*6 + 2);
v_recursorMap_1435_ = lean_ctor_get(v_snd_1426_, 5);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_snd_1426_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1437_ = v_snd_1426_;
v_isShared_1438_ = v_isSharedCheck_1466_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_recursorMap_1435_);
lean_inc(v_noMDataExprs_1431_);
lean_inc(v_visitedConstants_1430_);
lean_inc(v_visitedExprs_1429_);
lean_inc(v_visitedLevels_1428_);
lean_inc(v_visitedNames_1427_);
lean_dec(v_snd_1426_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1466_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v_size_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
v_size_1439_ = lean_ctor_get(v_visitedNames_1427_, 0);
lean_inc_n(v_size_1439_, 2);
v___x_1440_ = l_Lean_JsonNumber_fromNat(v_size_1439_);
v___x_1441_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
v___x_1442_ = l_Lean_Json_setObjVal_x21(v_fst_1425_, v___x_1423_, v___x_1441_);
v___x_1443_ = l_Lean_Json_compress(v___x_1442_);
v___x_1444_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1443_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1456_; 
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1456_ == 0)
{
lean_object* v_unused_1457_; 
v_unused_1457_ = lean_ctor_get(v___x_1444_, 0);
lean_dec(v_unused_1457_);
v___x_1446_ = v___x_1444_;
v_isShared_1447_ = v_isSharedCheck_1456_;
goto v_resetjp_1445_;
}
else
{
lean_dec(v___x_1444_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1456_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1448_; lean_object* v___x_1450_; 
lean_inc(v_size_1439_);
v___x_1448_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v_visitedNames_1427_, v_n_1408_, v_size_1439_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1448_);
v___x_1450_ = v___x_1437_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1448_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_visitedLevels_1428_);
lean_ctor_set(v_reuseFailAlloc_1455_, 2, v_visitedExprs_1429_);
lean_ctor_set(v_reuseFailAlloc_1455_, 3, v_visitedConstants_1430_);
lean_ctor_set(v_reuseFailAlloc_1455_, 4, v_noMDataExprs_1431_);
lean_ctor_set(v_reuseFailAlloc_1455_, 5, v_recursorMap_1435_);
lean_ctor_set_uint8(v_reuseFailAlloc_1455_, sizeof(void*)*6, v_exportMData_1432_);
lean_ctor_set_uint8(v_reuseFailAlloc_1455_, sizeof(void*)*6 + 1, v_exportUnsafe_1433_);
lean_ctor_set_uint8(v_reuseFailAlloc_1455_, sizeof(void*)*6 + 2, v_ignoreMissing_1434_);
v___x_1450_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v_size_1439_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 0, v___x_1451_);
v___x_1453_ = v___x_1446_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1451_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec(v_size_1439_);
lean_del_object(v___x_1437_);
lean_dec(v_recursorMap_1435_);
lean_dec_ref(v_noMDataExprs_1431_);
lean_dec_ref(v_visitedConstants_1430_);
lean_dec_ref(v_visitedExprs_1429_);
lean_dec_ref(v_visitedLevels_1428_);
lean_dec_ref(v_visitedNames_1427_);
lean_dec(v_n_1408_);
v_a_1458_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1444_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1444_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___boxed(lean_object* v_n_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_n_1546_, v_a_1547_, v_a_1548_);
lean_dec_ref(v_a_1547_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(lean_object* v_00_u03b2_1551_, lean_object* v_m_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1552_, v_a_1553_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___boxed(lean_object* v_00_u03b2_1555_, lean_object* v_m_1556_, lean_object* v_a_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(v_00_u03b2_1555_, v_m_1556_, v_a_1557_);
lean_dec(v_a_1557_);
lean_dec_ref(v_m_1556_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(lean_object* v_00_u03b2_1559_, lean_object* v_a_1560_, lean_object* v_x_1561_){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1560_, v_x_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1563_, lean_object* v_a_1564_, lean_object* v_x_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(v_00_u03b2_1563_, v_a_1564_, v_x_1565_);
lean_dec(v_x_1565_);
lean_dec(v_a_1564_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(lean_object* v_a_1567_, lean_object* v_x_1568_){
_start:
{
if (lean_obj_tag(v_x_1568_) == 0)
{
lean_object* v___x_1569_; 
v___x_1569_ = lean_box(0);
return v___x_1569_;
}
else
{
lean_object* v_key_1570_; lean_object* v_value_1571_; lean_object* v_tail_1572_; uint8_t v___x_1573_; 
v_key_1570_ = lean_ctor_get(v_x_1568_, 0);
v_value_1571_ = lean_ctor_get(v_x_1568_, 1);
v_tail_1572_ = lean_ctor_get(v_x_1568_, 2);
v___x_1573_ = lean_level_eq(v_key_1570_, v_a_1567_);
if (v___x_1573_ == 0)
{
v_x_1568_ = v_tail_1572_;
goto _start;
}
else
{
lean_object* v___x_1575_; 
lean_inc(v_value_1571_);
v___x_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1575_, 0, v_value_1571_);
return v___x_1575_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg___boxed(lean_object* v_a_1576_, lean_object* v_x_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1576_, v_x_1577_);
lean_dec(v_x_1577_);
lean_dec(v_a_1576_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(lean_object* v_m_1579_, lean_object* v_a_1580_){
_start:
{
lean_object* v_buckets_1581_; lean_object* v___x_1582_; uint64_t v___x_1583_; uint64_t v___x_1584_; uint64_t v___x_1585_; uint64_t v_fold_1586_; uint64_t v___x_1587_; uint64_t v___x_1588_; uint64_t v___x_1589_; size_t v___x_1590_; size_t v___x_1591_; size_t v___x_1592_; size_t v___x_1593_; size_t v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v_buckets_1581_ = lean_ctor_get(v_m_1579_, 1);
v___x_1582_ = lean_array_get_size(v_buckets_1581_);
v___x_1583_ = l_Lean_Level_hash(v_a_1580_);
v___x_1584_ = 32ULL;
v___x_1585_ = lean_uint64_shift_right(v___x_1583_, v___x_1584_);
v_fold_1586_ = lean_uint64_xor(v___x_1583_, v___x_1585_);
v___x_1587_ = 16ULL;
v___x_1588_ = lean_uint64_shift_right(v_fold_1586_, v___x_1587_);
v___x_1589_ = lean_uint64_xor(v_fold_1586_, v___x_1588_);
v___x_1590_ = lean_uint64_to_usize(v___x_1589_);
v___x_1591_ = lean_usize_of_nat(v___x_1582_);
v___x_1592_ = ((size_t)1ULL);
v___x_1593_ = lean_usize_sub(v___x_1591_, v___x_1592_);
v___x_1594_ = lean_usize_land(v___x_1590_, v___x_1593_);
v___x_1595_ = lean_array_uget_borrowed(v_buckets_1581_, v___x_1594_);
v___x_1596_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1580_, v___x_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg___boxed(lean_object* v_m_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_1597_, v_a_1598_);
lean_dec(v_a_1598_);
lean_dec_ref(v_m_1597_);
return v_res_1599_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6(void){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1606_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1607_ = lean_unsigned_to_nat(23u);
v___x_1608_ = lean_unsigned_to_nat(132u);
v___x_1609_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5));
v___x_1610_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1611_ = l_mkPanicMessageWithDecl(v___x_1610_, v___x_1609_, v___x_1608_, v___x_1607_, v___x_1606_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel(lean_object* v_l_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_){
_start:
{
lean_object* v_visitedLevels_1616_; lean_object* v___x_1617_; 
v_visitedLevels_1616_ = lean_ctor_get(v_a_1614_, 1);
v___x_1617_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_visitedLevels_1616_, v_l_1612_);
if (lean_obj_tag(v___x_1617_) == 1)
{
lean_object* v_val_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1626_; 
lean_dec(v_l_1612_);
v_val_1618_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1620_ = v___x_1617_;
v_isShared_1621_ = v_isSharedCheck_1626_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_val_1618_);
lean_dec(v___x_1617_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1626_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1622_; lean_object* v___x_1624_; 
v___x_1622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1622_, 0, v_val_1618_);
lean_ctor_set(v___x_1622_, 1, v_a_1614_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set_tag(v___x_1620_, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1622_);
v___x_1624_ = v___x_1620_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1622_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
else
{
lean_object* v___x_1627_; lean_object* v_fst_1629_; lean_object* v_snd_1630_; 
lean_dec(v___x_1617_);
v___x_1627_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0));
switch(lean_obj_tag(v_l_1612_))
{
case 1:
{
lean_object* v_a_1671_; lean_object* v___x_1672_; 
v_a_1671_ = lean_ctor_get(v_l_1612_, 0);
lean_inc(v_a_1671_);
v___x_1672_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1671_, v_a_1613_, v_a_1614_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1694_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1694_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1694_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v_fst_1677_; lean_object* v_snd_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1693_; 
v_fst_1677_ = lean_ctor_get(v_a_1673_, 0);
v_snd_1678_ = lean_ctor_get(v_a_1673_, 1);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_a_1673_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1680_ = v_a_1673_;
v_isShared_1681_ = v_isSharedCheck_1693_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_snd_1678_);
lean_inc(v_fst_1677_);
lean_dec(v_a_1673_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1693_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1685_; 
v___x_1682_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1));
v___x_1683_ = l_Lean_JsonNumber_fromNat(v_fst_1677_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set_tag(v___x_1675_, 2);
lean_ctor_set(v___x_1675_, 0, v___x_1683_);
v___x_1685_ = v___x_1675_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1687_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1685_);
lean_ctor_set(v___x_1680_, 0, v___x_1682_);
v___x_1687_ = v___x_1680_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v___x_1682_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v___x_1685_);
v___x_1687_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1688_ = lean_box(0);
v___x_1689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1687_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = l_Lean_Json_mkObj(v___x_1689_);
lean_dec_ref_known(v___x_1689_, 2);
v_fst_1629_ = v___x_1690_;
v_snd_1630_ = v_snd_1678_;
goto v___jp_1628_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1612_, 1);
return v___x_1672_;
}
}
case 2:
{
lean_object* v_a_1695_; lean_object* v_a_1696_; lean_object* v___x_1697_; 
v_a_1695_ = lean_ctor_get(v_l_1612_, 0);
v_a_1696_ = lean_ctor_get(v_l_1612_, 1);
lean_inc(v_a_1695_);
v___x_1697_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1695_, v_a_1613_, v_a_1614_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1742_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1700_ = v___x_1697_;
v_isShared_1701_ = v_isSharedCheck_1742_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1697_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1742_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v_fst_1702_; lean_object* v_snd_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1741_; 
v_fst_1702_ = lean_ctor_get(v_a_1698_, 0);
v_snd_1703_ = lean_ctor_get(v_a_1698_, 1);
v_isSharedCheck_1741_ = !lean_is_exclusive(v_a_1698_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1705_ = v_a_1698_;
v_isShared_1706_ = v_isSharedCheck_1741_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_snd_1703_);
lean_inc(v_fst_1702_);
lean_dec(v_a_1698_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1741_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1707_; 
lean_inc(v_a_1696_);
v___x_1707_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1696_, v_a_1613_, v_snd_1703_);
if (lean_obj_tag(v___x_1707_) == 0)
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1740_; 
v_a_1708_ = lean_ctor_get(v___x_1707_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1710_ = v___x_1707_;
v_isShared_1711_ = v_isSharedCheck_1740_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1707_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1740_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v_fst_1712_; lean_object* v_snd_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1739_; 
v_fst_1712_ = lean_ctor_get(v_a_1708_, 0);
v_snd_1713_ = lean_ctor_get(v_a_1708_, 1);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_a_1708_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1715_ = v_a_1708_;
v_isShared_1716_ = v_isSharedCheck_1739_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_snd_1713_);
lean_inc(v_fst_1712_);
lean_dec(v_a_1708_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1739_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1717_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2));
v___x_1718_ = l_Lean_JsonNumber_fromNat(v_fst_1702_);
if (v_isShared_1711_ == 0)
{
lean_ctor_set_tag(v___x_1710_, 2);
lean_ctor_set(v___x_1710_, 0, v___x_1718_);
v___x_1720_ = v___x_1710_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1718_);
v___x_1720_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
lean_object* v___x_1721_; lean_object* v___x_1723_; 
v___x_1721_ = l_Lean_JsonNumber_fromNat(v_fst_1712_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set_tag(v___x_1700_, 2);
lean_ctor_set(v___x_1700_, 0, v___x_1721_);
v___x_1723_ = v___x_1700_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1721_);
v___x_1723_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1730_; 
v___x_1724_ = lean_unsigned_to_nat(2u);
v___x_1725_ = lean_mk_empty_array_with_capacity(v___x_1724_);
v___x_1726_ = lean_array_push(v___x_1725_, v___x_1720_);
v___x_1727_ = lean_array_push(v___x_1726_, v___x_1723_);
v___x_1728_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1727_);
if (v_isShared_1716_ == 0)
{
lean_ctor_set(v___x_1715_, 1, v___x_1728_);
lean_ctor_set(v___x_1715_, 0, v___x_1717_);
v___x_1730_ = v___x_1715_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1717_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v___x_1728_);
v___x_1730_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
lean_object* v___x_1731_; lean_object* v___x_1733_; 
v___x_1731_ = lean_box(0);
if (v_isShared_1706_ == 0)
{
lean_ctor_set_tag(v___x_1705_, 1);
lean_ctor_set(v___x_1705_, 1, v___x_1731_);
lean_ctor_set(v___x_1705_, 0, v___x_1730_);
v___x_1733_ = v___x_1705_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v___x_1730_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lean_Json_mkObj(v___x_1733_);
lean_dec_ref(v___x_1733_);
v_fst_1629_ = v___x_1734_;
v_snd_1630_ = v_snd_1713_;
goto v___jp_1628_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1705_);
lean_dec(v_fst_1702_);
lean_del_object(v___x_1700_);
lean_dec_ref_known(v_l_1612_, 2);
return v___x_1707_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1612_, 2);
return v___x_1697_;
}
}
case 3:
{
lean_object* v_a_1743_; lean_object* v_a_1744_; lean_object* v___x_1745_; 
v_a_1743_ = lean_ctor_get(v_l_1612_, 0);
v_a_1744_ = lean_ctor_get(v_l_1612_, 1);
lean_inc(v_a_1743_);
v___x_1745_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1743_, v_a_1613_, v_a_1614_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1790_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1748_ = v___x_1745_;
v_isShared_1749_ = v_isSharedCheck_1790_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1745_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1790_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v_fst_1750_; lean_object* v_snd_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1789_; 
v_fst_1750_ = lean_ctor_get(v_a_1746_, 0);
v_snd_1751_ = lean_ctor_get(v_a_1746_, 1);
v_isSharedCheck_1789_ = !lean_is_exclusive(v_a_1746_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1753_ = v_a_1746_;
v_isShared_1754_ = v_isSharedCheck_1789_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_snd_1751_);
lean_inc(v_fst_1750_);
lean_dec(v_a_1746_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1789_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1755_; 
lean_inc(v_a_1744_);
v___x_1755_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1744_, v_a_1613_, v_snd_1751_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1788_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1758_ = v___x_1755_;
v_isShared_1759_ = v_isSharedCheck_1788_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1755_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1788_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v_fst_1760_; lean_object* v_snd_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1787_; 
v_fst_1760_ = lean_ctor_get(v_a_1756_, 0);
v_snd_1761_ = lean_ctor_get(v_a_1756_, 1);
v_isSharedCheck_1787_ = !lean_is_exclusive(v_a_1756_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1763_ = v_a_1756_;
v_isShared_1764_ = v_isSharedCheck_1787_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_snd_1761_);
lean_inc(v_fst_1760_);
lean_dec(v_a_1756_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1787_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1768_; 
v___x_1765_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3));
v___x_1766_ = l_Lean_JsonNumber_fromNat(v_fst_1750_);
if (v_isShared_1759_ == 0)
{
lean_ctor_set_tag(v___x_1758_, 2);
lean_ctor_set(v___x_1758_, 0, v___x_1766_);
v___x_1768_ = v___x_1758_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v___x_1766_);
v___x_1768_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1769_ = l_Lean_JsonNumber_fromNat(v_fst_1760_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set_tag(v___x_1748_, 2);
lean_ctor_set(v___x_1748_, 0, v___x_1769_);
v___x_1771_ = v___x_1748_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1778_; 
v___x_1772_ = lean_unsigned_to_nat(2u);
v___x_1773_ = lean_mk_empty_array_with_capacity(v___x_1772_);
v___x_1774_ = lean_array_push(v___x_1773_, v___x_1768_);
v___x_1775_ = lean_array_push(v___x_1774_, v___x_1771_);
v___x_1776_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 1, v___x_1776_);
lean_ctor_set(v___x_1763_, 0, v___x_1765_);
v___x_1778_ = v___x_1763_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1765_);
lean_ctor_set(v_reuseFailAlloc_1784_, 1, v___x_1776_);
v___x_1778_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
lean_object* v___x_1779_; lean_object* v___x_1781_; 
v___x_1779_ = lean_box(0);
if (v_isShared_1754_ == 0)
{
lean_ctor_set_tag(v___x_1753_, 1);
lean_ctor_set(v___x_1753_, 1, v___x_1779_);
lean_ctor_set(v___x_1753_, 0, v___x_1778_);
v___x_1781_ = v___x_1753_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1778_);
lean_ctor_set(v_reuseFailAlloc_1783_, 1, v___x_1779_);
v___x_1781_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
lean_object* v___x_1782_; 
v___x_1782_ = l_Lean_Json_mkObj(v___x_1781_);
lean_dec_ref(v___x_1781_);
v_fst_1629_ = v___x_1782_;
v_snd_1630_ = v_snd_1761_;
goto v___jp_1628_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1753_);
lean_dec(v_fst_1750_);
lean_del_object(v___x_1748_);
lean_dec_ref_known(v_l_1612_, 2);
return v___x_1755_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1612_, 2);
return v___x_1745_;
}
}
case 4:
{
lean_object* v_a_1791_; lean_object* v___x_1792_; 
v_a_1791_ = lean_ctor_get(v_l_1612_, 0);
lean_inc(v_a_1791_);
v___x_1792_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_a_1791_, v_a_1613_, v_a_1614_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1814_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1795_ = v___x_1792_;
v_isShared_1796_ = v_isSharedCheck_1814_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1792_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1814_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v_fst_1797_; lean_object* v_snd_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1813_; 
v_fst_1797_ = lean_ctor_get(v_a_1793_, 0);
v_snd_1798_ = lean_ctor_get(v_a_1793_, 1);
v_isSharedCheck_1813_ = !lean_is_exclusive(v_a_1793_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1800_ = v_a_1793_;
v_isShared_1801_ = v_isSharedCheck_1813_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_snd_1798_);
lean_inc(v_fst_1797_);
lean_dec(v_a_1793_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1813_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1805_; 
v___x_1802_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4));
v___x_1803_ = l_Lean_JsonNumber_fromNat(v_fst_1797_);
if (v_isShared_1796_ == 0)
{
lean_ctor_set_tag(v___x_1795_, 2);
lean_ctor_set(v___x_1795_, 0, v___x_1803_);
v___x_1805_ = v___x_1795_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1803_);
v___x_1805_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
lean_object* v___x_1807_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 1, v___x_1805_);
lean_ctor_set(v___x_1800_, 0, v___x_1802_);
v___x_1807_ = v___x_1800_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1802_);
lean_ctor_set(v_reuseFailAlloc_1811_, 1, v___x_1805_);
v___x_1807_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1808_ = lean_box(0);
v___x_1809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1807_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
v___x_1810_ = l_Lean_Json_mkObj(v___x_1809_);
lean_dec_ref_known(v___x_1809_, 2);
v_fst_1629_ = v___x_1810_;
v_snd_1630_ = v_snd_1798_;
goto v___jp_1628_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1612_, 1);
return v___x_1792_;
}
}
default: 
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6, &l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6);
v___x_1816_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_1815_, v_a_1613_, v_a_1614_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v_fst_1818_; lean_object* v_snd_1819_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
lean_dec_ref_known(v___x_1816_, 1);
v_fst_1818_ = lean_ctor_get(v_a_1817_, 0);
lean_inc(v_fst_1818_);
v_snd_1819_ = lean_ctor_get(v_a_1817_, 1);
lean_inc(v_snd_1819_);
lean_dec(v_a_1817_);
v_fst_1629_ = v_fst_1818_;
v_snd_1630_ = v_snd_1819_;
goto v___jp_1628_;
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1827_; 
lean_dec(v_l_1612_);
v_a_1820_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1822_ = v___x_1816_;
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1816_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1820_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
}
v___jp_1628_:
{
lean_object* v_visitedLevels_1631_; lean_object* v_visitedNames_1632_; lean_object* v_visitedExprs_1633_; lean_object* v_visitedConstants_1634_; lean_object* v_noMDataExprs_1635_; uint8_t v_exportMData_1636_; uint8_t v_exportUnsafe_1637_; uint8_t v_ignoreMissing_1638_; lean_object* v_recursorMap_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1670_; 
v_visitedLevels_1631_ = lean_ctor_get(v_snd_1630_, 1);
v_visitedNames_1632_ = lean_ctor_get(v_snd_1630_, 0);
v_visitedExprs_1633_ = lean_ctor_get(v_snd_1630_, 2);
v_visitedConstants_1634_ = lean_ctor_get(v_snd_1630_, 3);
v_noMDataExprs_1635_ = lean_ctor_get(v_snd_1630_, 4);
v_exportMData_1636_ = lean_ctor_get_uint8(v_snd_1630_, sizeof(void*)*6);
v_exportUnsafe_1637_ = lean_ctor_get_uint8(v_snd_1630_, sizeof(void*)*6 + 1);
v_ignoreMissing_1638_ = lean_ctor_get_uint8(v_snd_1630_, sizeof(void*)*6 + 2);
v_recursorMap_1639_ = lean_ctor_get(v_snd_1630_, 5);
v_isSharedCheck_1670_ = !lean_is_exclusive(v_snd_1630_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1641_ = v_snd_1630_;
v_isShared_1642_ = v_isSharedCheck_1670_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_recursorMap_1639_);
lean_inc(v_noMDataExprs_1635_);
lean_inc(v_visitedConstants_1634_);
lean_inc(v_visitedExprs_1633_);
lean_inc(v_visitedLevels_1631_);
lean_inc(v_visitedNames_1632_);
lean_dec(v_snd_1630_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1670_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v_size_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; 
v_size_1643_ = lean_ctor_get(v_visitedLevels_1631_, 0);
lean_inc_n(v_size_1643_, 2);
v___x_1644_ = l_Lean_JsonNumber_fromNat(v_size_1643_);
v___x_1645_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
v___x_1646_ = l_Lean_Json_setObjVal_x21(v_fst_1629_, v___x_1627_, v___x_1645_);
v___x_1647_ = l_Lean_Json_compress(v___x_1646_);
v___x_1648_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1647_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1660_; 
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1660_ == 0)
{
lean_object* v_unused_1661_; 
v_unused_1661_ = lean_ctor_get(v___x_1648_, 0);
lean_dec(v_unused_1661_);
v___x_1650_ = v___x_1648_;
v_isShared_1651_ = v_isSharedCheck_1660_;
goto v_resetjp_1649_;
}
else
{
lean_dec(v___x_1648_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1660_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1652_; lean_object* v___x_1654_; 
lean_inc(v_size_1643_);
v___x_1652_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v_visitedLevels_1631_, v_l_1612_, v_size_1643_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 1, v___x_1652_);
v___x_1654_ = v___x_1641_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_visitedNames_1632_);
lean_ctor_set(v_reuseFailAlloc_1659_, 1, v___x_1652_);
lean_ctor_set(v_reuseFailAlloc_1659_, 2, v_visitedExprs_1633_);
lean_ctor_set(v_reuseFailAlloc_1659_, 3, v_visitedConstants_1634_);
lean_ctor_set(v_reuseFailAlloc_1659_, 4, v_noMDataExprs_1635_);
lean_ctor_set(v_reuseFailAlloc_1659_, 5, v_recursorMap_1639_);
lean_ctor_set_uint8(v_reuseFailAlloc_1659_, sizeof(void*)*6, v_exportMData_1636_);
lean_ctor_set_uint8(v_reuseFailAlloc_1659_, sizeof(void*)*6 + 1, v_exportUnsafe_1637_);
lean_ctor_set_uint8(v_reuseFailAlloc_1659_, sizeof(void*)*6 + 2, v_ignoreMissing_1638_);
v___x_1654_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
lean_object* v___x_1655_; lean_object* v___x_1657_; 
v___x_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1655_, 0, v_size_1643_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
if (v_isShared_1651_ == 0)
{
lean_ctor_set(v___x_1650_, 0, v___x_1655_);
v___x_1657_ = v___x_1650_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v___x_1655_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec(v_size_1643_);
lean_del_object(v___x_1641_);
lean_dec(v_recursorMap_1639_);
lean_dec_ref(v_noMDataExprs_1635_);
lean_dec_ref(v_visitedConstants_1634_);
lean_dec_ref(v_visitedExprs_1633_);
lean_dec_ref(v_visitedNames_1632_);
lean_dec_ref(v_visitedLevels_1631_);
lean_dec(v_l_1612_);
v_a_1662_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1648_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1648_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___boxed(lean_object* v_l_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_l_1828_, v_a_1829_, v_a_1830_);
lean_dec_ref(v_a_1829_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(lean_object* v_00_u03b2_1833_, lean_object* v_m_1834_, lean_object* v_a_1835_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_1834_, v_a_1835_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___boxed(lean_object* v_00_u03b2_1837_, lean_object* v_m_1838_, lean_object* v_a_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(v_00_u03b2_1837_, v_m_1838_, v_a_1839_);
lean_dec(v_a_1839_);
lean_dec_ref(v_m_1838_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(lean_object* v_00_u03b2_1841_, lean_object* v_a_1842_, lean_object* v_x_1843_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1842_, v_x_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1845_, lean_object* v_a_1846_, lean_object* v_x_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(v_00_u03b2_1845_, v_a_1846_, v_x_1847_);
lean_dec(v_x_1847_);
lean_dec(v_a_1846_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(lean_object* v_a_1849_, lean_object* v_a_1850_){
_start:
{
if (lean_obj_tag(v_a_1849_) == 0)
{
lean_object* v___x_1851_; 
v___x_1851_ = l_List_reverse___redArg(v_a_1850_);
return v___x_1851_;
}
else
{
lean_object* v_head_1852_; lean_object* v_tail_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1862_; 
v_head_1852_ = lean_ctor_get(v_a_1849_, 0);
v_tail_1853_ = lean_ctor_get(v_a_1849_, 1);
v_isSharedCheck_1862_ = !lean_is_exclusive(v_a_1849_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1855_ = v_a_1849_;
v_isShared_1856_ = v_isSharedCheck_1862_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_tail_1853_);
lean_inc(v_head_1852_);
lean_dec(v_a_1849_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1862_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; lean_object* v___x_1859_; 
v___x_1857_ = l_Lean_Level_param___override(v_head_1852_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 1, v_a_1850_);
lean_ctor_set(v___x_1855_, 0, v___x_1857_);
v___x_1859_ = v___x_1855_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1857_);
lean_ctor_set(v_reuseFailAlloc_1861_, 1, v_a_1850_);
v___x_1859_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
v_a_1849_ = v_tail_1853_;
v_a_1850_ = v___x_1859_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(size_t v_sz_1863_, size_t v_i_1864_, lean_object* v_bs_1865_){
_start:
{
uint8_t v___x_1866_; 
v___x_1866_ = lean_usize_dec_lt(v_i_1864_, v_sz_1863_);
if (v___x_1866_ == 0)
{
lean_object* v___x_1867_; 
v___x_1867_ = l_unsafeCast___redArg(v_bs_1865_);
lean_dec_ref(v_bs_1865_);
return v___x_1867_;
}
else
{
lean_object* v_v_1868_; lean_object* v___x_1869_; lean_object* v_bs_x27_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; size_t v___x_1874_; size_t v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v_v_1868_ = lean_array_uget(v_bs_1865_, v_i_1864_);
v___x_1869_ = lean_unsigned_to_nat(0u);
v_bs_x27_1870_ = lean_array_uset(v_bs_1865_, v_i_1864_, v___x_1869_);
v___x_1871_ = l_unsafeCast___redArg(v_v_1868_);
lean_dec(v_v_1868_);
v___x_1872_ = l_Lean_JsonNumber_fromNat(v___x_1871_);
v___x_1873_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1873_, 0, v___x_1872_);
v___x_1874_ = ((size_t)1ULL);
v___x_1875_ = lean_usize_add(v_i_1864_, v___x_1874_);
v___x_1876_ = l_unsafeCast___redArg(v___x_1873_);
lean_dec_ref_known(v___x_1873_, 1);
v___x_1877_ = lean_array_uset(v_bs_x27_1870_, v_i_1864_, v___x_1876_);
v_i_1864_ = v___x_1875_;
v_bs_1865_ = v___x_1877_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_1879_, lean_object* v_i_1880_, lean_object* v_bs_1881_){
_start:
{
size_t v_sz_boxed_1882_; size_t v_i_boxed_1883_; lean_object* v_res_1884_; 
v_sz_boxed_1882_ = lean_unbox_usize(v_sz_1879_);
lean_dec(v_sz_1879_);
v_i_boxed_1883_ = lean_unbox_usize(v_i_1880_);
lean_dec(v_i_1880_);
v_res_1884_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_boxed_1882_, v_i_boxed_1883_, v_bs_1881_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(lean_object* v_a_1885_){
_start:
{
size_t v_sz_1886_; size_t v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; 
v_sz_1886_ = lean_array_size(v_a_1885_);
v___x_1887_ = ((size_t)0ULL);
v___x_1888_ = l_unsafeCast___redArg(v_a_1885_);
v___x_1889_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_1886_, v___x_1887_, v___x_1888_);
v___x_1890_ = l_unsafeCast___redArg(v___x_1889_);
lean_dec_ref(v___x_1889_);
v___x_1891_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1890_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3___boxed(lean_object* v_a_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(v_a_1892_);
lean_dec_ref(v_a_1892_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(lean_object* v_a_1894_){
_start:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1895_ = lean_array_mk(v_a_1894_);
v___x_1896_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(v___x_1895_);
lean_dec_ref(v___x_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(lean_object* v_x_1897_, lean_object* v_x_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
if (lean_obj_tag(v_x_1897_) == 0)
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1902_ = l_List_reverse___redArg(v_x_1898_);
v___x_1903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
lean_ctor_set(v___x_1903_, 1, v___y_1900_);
v___x_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1904_, 0, v___x_1903_);
return v___x_1904_;
}
else
{
lean_object* v_head_1905_; lean_object* v_tail_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1926_; 
v_head_1905_ = lean_ctor_get(v_x_1897_, 0);
v_tail_1906_ = lean_ctor_get(v_x_1897_, 1);
v_isSharedCheck_1926_ = !lean_is_exclusive(v_x_1897_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1908_ = v_x_1897_;
v_isShared_1909_ = v_isSharedCheck_1926_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_tail_1906_);
lean_inc(v_head_1905_);
lean_dec(v_x_1897_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1926_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1910_; 
v___x_1910_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_head_1905_, v___y_1899_, v___y_1900_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v_fst_1912_; lean_object* v_snd_1913_; lean_object* v___x_1915_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1910_, 1);
v_fst_1912_ = lean_ctor_get(v_a_1911_, 0);
lean_inc(v_fst_1912_);
v_snd_1913_ = lean_ctor_get(v_a_1911_, 1);
lean_inc(v_snd_1913_);
lean_dec(v_a_1911_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 1, v_x_1898_);
lean_ctor_set(v___x_1908_, 0, v_fst_1912_);
v___x_1915_ = v___x_1908_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_fst_1912_);
lean_ctor_set(v_reuseFailAlloc_1917_, 1, v_x_1898_);
v___x_1915_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
v_x_1897_ = v_tail_1906_;
v_x_1898_ = v___x_1915_;
v___y_1900_ = v_snd_1913_;
goto _start;
}
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
lean_del_object(v___x_1908_);
lean_dec(v_tail_1906_);
lean_dec(v_x_1898_);
v_a_1918_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1910_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1910_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1923_; 
if (v_isShared_1921_ == 0)
{
v___x_1923_ = v___x_1920_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_a_1918_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2___boxed(lean_object* v_x_1927_, lean_object* v_x_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_x_1927_, v_x_1928_, v___y_1929_, v___y_1930_);
lean_dec_ref(v___y_1929_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(lean_object* v_x_1933_, lean_object* v_x_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_){
_start:
{
if (lean_obj_tag(v_x_1933_) == 0)
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1938_ = l_List_reverse___redArg(v_x_1934_);
v___x_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1938_);
lean_ctor_set(v___x_1939_, 1, v___y_1936_);
v___x_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1939_);
return v___x_1940_;
}
else
{
lean_object* v_head_1941_; lean_object* v_tail_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1962_; 
v_head_1941_ = lean_ctor_get(v_x_1933_, 0);
v_tail_1942_ = lean_ctor_get(v_x_1933_, 1);
v_isSharedCheck_1962_ = !lean_is_exclusive(v_x_1933_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1944_ = v_x_1933_;
v_isShared_1945_ = v_isSharedCheck_1962_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_tail_1942_);
lean_inc(v_head_1941_);
lean_dec(v_x_1933_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1962_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1946_; 
v___x_1946_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_head_1941_, v___y_1935_, v___y_1936_);
if (lean_obj_tag(v___x_1946_) == 0)
{
lean_object* v_a_1947_; lean_object* v_fst_1948_; lean_object* v_snd_1949_; lean_object* v___x_1951_; 
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
lean_inc(v_a_1947_);
lean_dec_ref_known(v___x_1946_, 1);
v_fst_1948_ = lean_ctor_get(v_a_1947_, 0);
lean_inc(v_fst_1948_);
v_snd_1949_ = lean_ctor_get(v_a_1947_, 1);
lean_inc(v_snd_1949_);
lean_dec(v_a_1947_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 1, v_x_1934_);
lean_ctor_set(v___x_1944_, 0, v_fst_1948_);
v___x_1951_ = v___x_1944_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_fst_1948_);
lean_ctor_set(v_reuseFailAlloc_1953_, 1, v_x_1934_);
v___x_1951_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
v_x_1933_ = v_tail_1942_;
v_x_1934_ = v___x_1951_;
v___y_1936_ = v_snd_1949_;
goto _start;
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_del_object(v___x_1944_);
lean_dec(v_tail_1942_);
lean_dec(v_x_1934_);
v_a_1954_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1946_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1946_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0___boxed(lean_object* v_x_1963_, lean_object* v_x_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_x_1963_, v_x_1964_, v___y_1965_, v___y_1966_);
lean_dec_ref(v___y_1965_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams(lean_object* v_uparams_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1973_ = lean_box(0);
lean_inc(v_uparams_1969_);
v___x_1974_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_1969_, v___x_1973_, v_a_1970_, v_a_1971_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; lean_object* v_fst_1976_; lean_object* v_snd_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
lean_inc(v_a_1975_);
lean_dec_ref_known(v___x_1974_, 1);
v_fst_1976_ = lean_ctor_get(v_a_1975_, 0);
lean_inc(v_fst_1976_);
v_snd_1977_ = lean_ctor_get(v_a_1975_, 1);
lean_inc(v_snd_1977_);
lean_dec(v_a_1975_);
v___x_1978_ = l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(v_uparams_1969_, v___x_1973_);
v___x_1979_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v___x_1978_, v___x_1973_, v_a_1970_, v_snd_1977_);
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_object* v_a_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_1997_; 
v_a_1980_ = lean_ctor_get(v___x_1979_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1979_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1982_ = v___x_1979_;
v_isShared_1983_ = v_isSharedCheck_1997_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_a_1980_);
lean_dec(v___x_1979_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_1997_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
lean_object* v_snd_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1995_; 
v_snd_1984_ = lean_ctor_get(v_a_1980_, 1);
v_isSharedCheck_1995_ = !lean_is_exclusive(v_a_1980_);
if (v_isSharedCheck_1995_ == 0)
{
lean_object* v_unused_1996_; 
v_unused_1996_ = lean_ctor_get(v_a_1980_, 0);
lean_dec(v_unused_1996_);
v___x_1986_ = v_a_1980_;
v_isShared_1987_ = v_isSharedCheck_1995_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_snd_1984_);
lean_dec(v_a_1980_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1995_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1988_; lean_object* v___x_1990_; 
v___x_1988_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_1976_);
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v___x_1988_);
v___x_1990_ = v___x_1986_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1988_);
lean_ctor_set(v_reuseFailAlloc_1994_, 1, v_snd_1984_);
v___x_1990_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
lean_object* v___x_1992_; 
if (v_isShared_1983_ == 0)
{
lean_ctor_set(v___x_1982_, 0, v___x_1990_);
v___x_1992_ = v___x_1982_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1990_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec(v_fst_1976_);
v_a_1998_ = lean_ctor_get(v___x_1979_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1979_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1979_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1979_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
lean_dec(v_uparams_1969_);
v_a_2006_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1974_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1974_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams___boxed(lean_object* v_uparams_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_uparams_2014_, v_a_2015_, v_a_2016_);
lean_dec_ref(v_a_2015_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames(lean_object* v_uparams_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = lean_box(0);
v___x_2024_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_2019_, v___x_2023_, v_a_2020_, v_a_2021_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2042_; 
v_a_2025_ = lean_ctor_get(v___x_2024_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2027_ = v___x_2024_;
v_isShared_2028_ = v_isSharedCheck_2042_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2024_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2042_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v_fst_2029_; lean_object* v_snd_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2041_; 
v_fst_2029_ = lean_ctor_get(v_a_2025_, 0);
v_snd_2030_ = lean_ctor_get(v_a_2025_, 1);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_a_2025_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2032_ = v_a_2025_;
v_isShared_2033_ = v_isSharedCheck_2041_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_snd_2030_);
lean_inc(v_fst_2029_);
lean_dec(v_a_2025_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2041_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2034_; lean_object* v___x_2036_; 
v___x_2034_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_2029_);
if (v_isShared_2033_ == 0)
{
lean_ctor_set(v___x_2032_, 0, v___x_2034_);
v___x_2036_ = v___x_2032_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v___x_2034_);
lean_ctor_set(v_reuseFailAlloc_2040_, 1, v_snd_2030_);
v___x_2036_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
lean_object* v___x_2038_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set(v___x_2027_, 0, v___x_2036_);
v___x_2038_ = v___x_2027_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v___x_2036_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
}
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
v_a_2043_ = lean_ctor_get(v___x_2024_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2024_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2024_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames___boxed(lean_object* v_uparams_2051_, lean_object* v_a_2052_, lean_object* v_a_2053_, lean_object* v_a_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_uparams_2051_, v_a_2052_, v_a_2053_);
lean_dec_ref(v_a_2052_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(lean_object* v_msg_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_){
_start:
{
lean_object* v___x_2060_; lean_object* v___f_2061_; lean_object* v___f_2062_; lean_object* v___f_2063_; lean_object* v___f_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___f_2073_; lean_object* v___x_11487__overap_2074_; lean_object* v___x_2075_; 
v___x_2060_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2061_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2061_, 0, v___x_2060_);
v___f_2062_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2062_, 0, v___x_2060_);
v___f_2063_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2063_, 0, v___x_2060_);
v___f_2064_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2064_, 0, v___x_2060_);
v___x_2065_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2065_, 0, lean_box(0));
lean_closure_set(v___x_2065_, 1, lean_box(0));
lean_closure_set(v___x_2065_, 2, v___x_2060_);
v___x_2066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
lean_ctor_set(v___x_2066_, 1, v___f_2061_);
v___x_2067_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2067_, 0, lean_box(0));
lean_closure_set(v___x_2067_, 1, lean_box(0));
lean_closure_set(v___x_2067_, 2, v___x_2060_);
v___x_2068_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2066_);
lean_ctor_set(v___x_2068_, 1, v___x_2067_);
lean_ctor_set(v___x_2068_, 2, v___f_2062_);
lean_ctor_set(v___x_2068_, 3, v___f_2063_);
lean_ctor_set(v___x_2068_, 4, v___f_2064_);
v___x_2069_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2069_, 0, lean_box(0));
lean_closure_set(v___x_2069_, 1, lean_box(0));
lean_closure_set(v___x_2069_, 2, v___x_2060_);
v___x_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2068_);
lean_ctor_set(v___x_2070_, 1, v___x_2069_);
v___x_2071_ = l_Lean_instInhabitedExpr;
v___x_2072_ = l_instInhabitedOfMonad___redArg(v___x_2070_, v___x_2071_);
v___f_2073_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2073_, 0, v___x_2072_);
v___x_11487__overap_2074_ = lean_panic_fn_borrowed(v___f_2073_, v_msg_2056_);
lean_dec_ref(v___f_2073_);
lean_inc_ref(v___y_2057_);
v___x_2075_ = lean_apply_3(v___x_11487__overap_2074_, v___y_2057_, v___y_2058_, lean_box(0));
return v___x_2075_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2___boxed(lean_object* v_msg_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v_msg_2076_, v___y_2077_, v___y_2078_);
lean_dec_ref(v___y_2077_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(lean_object* v_a_2081_, lean_object* v_b_2082_, lean_object* v_x_2083_){
_start:
{
if (lean_obj_tag(v_x_2083_) == 0)
{
lean_dec(v_b_2082_);
lean_dec_ref(v_a_2081_);
return v_x_2083_;
}
else
{
lean_object* v_key_2084_; lean_object* v_value_2085_; lean_object* v_tail_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2098_; 
v_key_2084_ = lean_ctor_get(v_x_2083_, 0);
v_value_2085_ = lean_ctor_get(v_x_2083_, 1);
v_tail_2086_ = lean_ctor_get(v_x_2083_, 2);
v_isSharedCheck_2098_ = !lean_is_exclusive(v_x_2083_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2088_ = v_x_2083_;
v_isShared_2089_ = v_isSharedCheck_2098_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_tail_2086_);
lean_inc(v_value_2085_);
lean_inc(v_key_2084_);
lean_dec(v_x_2083_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2098_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
uint8_t v___x_2090_; 
v___x_2090_ = lean_expr_eqv(v_key_2084_, v_a_2081_);
if (v___x_2090_ == 0)
{
lean_object* v___x_2091_; lean_object* v___x_2093_; 
v___x_2091_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2081_, v_b_2082_, v_tail_2086_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 2, v___x_2091_);
v___x_2093_ = v___x_2088_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_key_2084_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v_value_2085_);
lean_ctor_set(v_reuseFailAlloc_2094_, 2, v___x_2091_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
else
{
lean_object* v___x_2096_; 
lean_dec(v_value_2085_);
lean_dec(v_key_2084_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 1, v_b_2082_);
lean_ctor_set(v___x_2088_, 0, v_a_2081_);
v___x_2096_ = v___x_2088_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2081_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v_b_2082_);
lean_ctor_set(v_reuseFailAlloc_2097_, 2, v_tail_2086_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_x_2099_, lean_object* v_x_2100_){
_start:
{
if (lean_obj_tag(v_x_2100_) == 0)
{
return v_x_2099_;
}
else
{
lean_object* v_key_2101_; lean_object* v_value_2102_; lean_object* v_tail_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2126_; 
v_key_2101_ = lean_ctor_get(v_x_2100_, 0);
v_value_2102_ = lean_ctor_get(v_x_2100_, 1);
v_tail_2103_ = lean_ctor_get(v_x_2100_, 2);
v_isSharedCheck_2126_ = !lean_is_exclusive(v_x_2100_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2105_ = v_x_2100_;
v_isShared_2106_ = v_isSharedCheck_2126_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_tail_2103_);
lean_inc(v_value_2102_);
lean_inc(v_key_2101_);
lean_dec(v_x_2100_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2126_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; uint64_t v___x_2108_; uint64_t v___x_2109_; uint64_t v___x_2110_; uint64_t v_fold_2111_; uint64_t v___x_2112_; uint64_t v___x_2113_; uint64_t v___x_2114_; size_t v___x_2115_; size_t v___x_2116_; size_t v___x_2117_; size_t v___x_2118_; size_t v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2122_; 
v___x_2107_ = lean_array_get_size(v_x_2099_);
v___x_2108_ = l_Lean_Expr_hash(v_key_2101_);
v___x_2109_ = 32ULL;
v___x_2110_ = lean_uint64_shift_right(v___x_2108_, v___x_2109_);
v_fold_2111_ = lean_uint64_xor(v___x_2108_, v___x_2110_);
v___x_2112_ = 16ULL;
v___x_2113_ = lean_uint64_shift_right(v_fold_2111_, v___x_2112_);
v___x_2114_ = lean_uint64_xor(v_fold_2111_, v___x_2113_);
v___x_2115_ = lean_uint64_to_usize(v___x_2114_);
v___x_2116_ = lean_usize_of_nat(v___x_2107_);
v___x_2117_ = ((size_t)1ULL);
v___x_2118_ = lean_usize_sub(v___x_2116_, v___x_2117_);
v___x_2119_ = lean_usize_land(v___x_2115_, v___x_2118_);
v___x_2120_ = lean_array_uget_borrowed(v_x_2099_, v___x_2119_);
lean_inc(v___x_2120_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 2, v___x_2120_);
v___x_2122_ = v___x_2105_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_key_2101_);
lean_ctor_set(v_reuseFailAlloc_2125_, 1, v_value_2102_);
lean_ctor_set(v_reuseFailAlloc_2125_, 2, v___x_2120_);
v___x_2122_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2123_; 
v___x_2123_ = lean_array_uset(v_x_2099_, v___x_2119_, v___x_2122_);
v_x_2099_ = v___x_2123_;
v_x_2100_ = v_tail_2103_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(lean_object* v_i_2127_, lean_object* v_source_2128_, lean_object* v_target_2129_){
_start:
{
lean_object* v___x_2130_; uint8_t v___x_2131_; 
v___x_2130_ = lean_array_get_size(v_source_2128_);
v___x_2131_ = lean_nat_dec_lt(v_i_2127_, v___x_2130_);
if (v___x_2131_ == 0)
{
lean_dec_ref(v_source_2128_);
lean_dec(v_i_2127_);
return v_target_2129_;
}
else
{
lean_object* v_es_2132_; lean_object* v___x_2133_; lean_object* v_source_2134_; lean_object* v_target_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v_es_2132_ = lean_array_fget(v_source_2128_, v_i_2127_);
v___x_2133_ = lean_box(0);
v_source_2134_ = lean_array_fset(v_source_2128_, v_i_2127_, v___x_2133_);
v_target_2135_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_target_2129_, v_es_2132_);
v___x_2136_ = lean_unsigned_to_nat(1u);
v___x_2137_ = lean_nat_add(v_i_2127_, v___x_2136_);
lean_dec(v_i_2127_);
v_i_2127_ = v___x_2137_;
v_source_2128_ = v_source_2134_;
v_target_2129_ = v_target_2135_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(lean_object* v_data_2139_){
_start:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v_nbuckets_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2140_ = lean_array_get_size(v_data_2139_);
v___x_2141_ = lean_unsigned_to_nat(2u);
v_nbuckets_2142_ = lean_nat_mul(v___x_2140_, v___x_2141_);
v___x_2143_ = lean_unsigned_to_nat(0u);
v___x_2144_ = lean_box(0);
v___x_2145_ = lean_mk_array(v_nbuckets_2142_, v___x_2144_);
v___x_2146_ = lean_array_propagate_mark(v_data_2139_, v___x_2145_);
v___x_2147_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v___x_2143_, v_data_2139_, v___x_2146_);
return v___x_2147_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(lean_object* v_a_2148_, lean_object* v_x_2149_){
_start:
{
if (lean_obj_tag(v_x_2149_) == 0)
{
uint8_t v___x_2150_; 
v___x_2150_ = 0;
return v___x_2150_;
}
else
{
lean_object* v_key_2151_; lean_object* v_tail_2152_; uint8_t v___x_2153_; 
v_key_2151_ = lean_ctor_get(v_x_2149_, 0);
v_tail_2152_ = lean_ctor_get(v_x_2149_, 2);
v___x_2153_ = lean_expr_eqv(v_key_2151_, v_a_2148_);
if (v___x_2153_ == 0)
{
v_x_2149_ = v_tail_2152_;
goto _start;
}
else
{
return v___x_2153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg___boxed(lean_object* v_a_2155_, lean_object* v_x_2156_){
_start:
{
uint8_t v_res_2157_; lean_object* v_r_2158_; 
v_res_2157_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2155_, v_x_2156_);
lean_dec(v_x_2156_);
lean_dec_ref(v_a_2155_);
v_r_2158_ = lean_box(v_res_2157_);
return v_r_2158_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(lean_object* v_m_2159_, lean_object* v_a_2160_, lean_object* v_b_2161_){
_start:
{
lean_object* v_size_2162_; lean_object* v_buckets_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2206_; 
v_size_2162_ = lean_ctor_get(v_m_2159_, 0);
v_buckets_2163_ = lean_ctor_get(v_m_2159_, 1);
v_isSharedCheck_2206_ = !lean_is_exclusive(v_m_2159_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2165_ = v_m_2159_;
v_isShared_2166_ = v_isSharedCheck_2206_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_buckets_2163_);
lean_inc(v_size_2162_);
lean_dec(v_m_2159_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2206_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2167_; uint64_t v___x_2168_; uint64_t v___x_2169_; uint64_t v___x_2170_; uint64_t v_fold_2171_; uint64_t v___x_2172_; uint64_t v___x_2173_; uint64_t v___x_2174_; size_t v___x_2175_; size_t v___x_2176_; size_t v___x_2177_; size_t v___x_2178_; size_t v___x_2179_; lean_object* v_bkt_2180_; uint8_t v___x_2181_; 
v___x_2167_ = lean_array_get_size(v_buckets_2163_);
v___x_2168_ = l_Lean_Expr_hash(v_a_2160_);
v___x_2169_ = 32ULL;
v___x_2170_ = lean_uint64_shift_right(v___x_2168_, v___x_2169_);
v_fold_2171_ = lean_uint64_xor(v___x_2168_, v___x_2170_);
v___x_2172_ = 16ULL;
v___x_2173_ = lean_uint64_shift_right(v_fold_2171_, v___x_2172_);
v___x_2174_ = lean_uint64_xor(v_fold_2171_, v___x_2173_);
v___x_2175_ = lean_uint64_to_usize(v___x_2174_);
v___x_2176_ = lean_usize_of_nat(v___x_2167_);
v___x_2177_ = ((size_t)1ULL);
v___x_2178_ = lean_usize_sub(v___x_2176_, v___x_2177_);
v___x_2179_ = lean_usize_land(v___x_2175_, v___x_2178_);
v_bkt_2180_ = lean_array_uget_borrowed(v_buckets_2163_, v___x_2179_);
v___x_2181_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2160_, v_bkt_2180_);
if (v___x_2181_ == 0)
{
lean_object* v___x_2182_; lean_object* v_size_x27_2183_; lean_object* v___x_2184_; lean_object* v_buckets_x27_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; uint8_t v___x_2191_; 
v___x_2182_ = lean_unsigned_to_nat(1u);
v_size_x27_2183_ = lean_nat_add(v_size_2162_, v___x_2182_);
lean_dec(v_size_2162_);
lean_inc(v_bkt_2180_);
v___x_2184_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2184_, 0, v_a_2160_);
lean_ctor_set(v___x_2184_, 1, v_b_2161_);
lean_ctor_set(v___x_2184_, 2, v_bkt_2180_);
v_buckets_x27_2185_ = lean_array_uset(v_buckets_2163_, v___x_2179_, v___x_2184_);
v___x_2186_ = lean_unsigned_to_nat(4u);
v___x_2187_ = lean_nat_mul(v_size_x27_2183_, v___x_2186_);
v___x_2188_ = lean_unsigned_to_nat(3u);
v___x_2189_ = lean_nat_div(v___x_2187_, v___x_2188_);
lean_dec(v___x_2187_);
v___x_2190_ = lean_array_get_size(v_buckets_x27_2185_);
v___x_2191_ = lean_nat_dec_le(v___x_2189_, v___x_2190_);
lean_dec(v___x_2189_);
if (v___x_2191_ == 0)
{
lean_object* v_val_2192_; lean_object* v___x_2194_; 
v_val_2192_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_buckets_x27_2185_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 1, v_val_2192_);
lean_ctor_set(v___x_2165_, 0, v_size_x27_2183_);
v___x_2194_ = v___x_2165_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_size_x27_2183_);
lean_ctor_set(v_reuseFailAlloc_2195_, 1, v_val_2192_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
else
{
lean_object* v___x_2197_; 
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 1, v_buckets_x27_2185_);
lean_ctor_set(v___x_2165_, 0, v_size_x27_2183_);
v___x_2197_ = v___x_2165_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_size_x27_2183_);
lean_ctor_set(v_reuseFailAlloc_2198_, 1, v_buckets_x27_2185_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
else
{
lean_object* v___x_2199_; lean_object* v_buckets_x27_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2204_; 
lean_inc(v_bkt_2180_);
v___x_2199_ = lean_box(0);
v_buckets_x27_2200_ = lean_array_uset(v_buckets_2163_, v___x_2179_, v___x_2199_);
v___x_2201_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2160_, v_b_2161_, v_bkt_2180_);
v___x_2202_ = lean_array_uset(v_buckets_x27_2200_, v___x_2179_, v___x_2201_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 1, v___x_2202_);
v___x_2204_ = v___x_2165_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v_size_2162_);
lean_ctor_set(v_reuseFailAlloc_2205_, 1, v___x_2202_);
v___x_2204_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
return v___x_2204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(lean_object* v_a_2207_, lean_object* v_x_2208_){
_start:
{
if (lean_obj_tag(v_x_2208_) == 0)
{
lean_object* v___x_2209_; 
v___x_2209_ = lean_box(0);
return v___x_2209_;
}
else
{
lean_object* v_key_2210_; lean_object* v_value_2211_; lean_object* v_tail_2212_; uint8_t v___x_2213_; 
v_key_2210_ = lean_ctor_get(v_x_2208_, 0);
v_value_2211_ = lean_ctor_get(v_x_2208_, 1);
v_tail_2212_ = lean_ctor_get(v_x_2208_, 2);
v___x_2213_ = lean_expr_eqv(v_key_2210_, v_a_2207_);
if (v___x_2213_ == 0)
{
v_x_2208_ = v_tail_2212_;
goto _start;
}
else
{
lean_object* v___x_2215_; 
lean_inc(v_value_2211_);
v___x_2215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2215_, 0, v_value_2211_);
return v___x_2215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg___boxed(lean_object* v_a_2216_, lean_object* v_x_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2216_, v_x_2217_);
lean_dec(v_x_2217_);
lean_dec_ref(v_a_2216_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(lean_object* v_m_2219_, lean_object* v_a_2220_){
_start:
{
lean_object* v_buckets_2221_; lean_object* v___x_2222_; uint64_t v___x_2223_; uint64_t v___x_2224_; uint64_t v___x_2225_; uint64_t v_fold_2226_; uint64_t v___x_2227_; uint64_t v___x_2228_; uint64_t v___x_2229_; size_t v___x_2230_; size_t v___x_2231_; size_t v___x_2232_; size_t v___x_2233_; size_t v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v_buckets_2221_ = lean_ctor_get(v_m_2219_, 1);
v___x_2222_ = lean_array_get_size(v_buckets_2221_);
v___x_2223_ = l_Lean_Expr_hash(v_a_2220_);
v___x_2224_ = 32ULL;
v___x_2225_ = lean_uint64_shift_right(v___x_2223_, v___x_2224_);
v_fold_2226_ = lean_uint64_xor(v___x_2223_, v___x_2225_);
v___x_2227_ = 16ULL;
v___x_2228_ = lean_uint64_shift_right(v_fold_2226_, v___x_2227_);
v___x_2229_ = lean_uint64_xor(v_fold_2226_, v___x_2228_);
v___x_2230_ = lean_uint64_to_usize(v___x_2229_);
v___x_2231_ = lean_usize_of_nat(v___x_2222_);
v___x_2232_ = ((size_t)1ULL);
v___x_2233_ = lean_usize_sub(v___x_2231_, v___x_2232_);
v___x_2234_ = lean_usize_land(v___x_2230_, v___x_2233_);
v___x_2235_ = lean_array_uget_borrowed(v_buckets_2221_, v___x_2234_);
v___x_2236_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2220_, v___x_2235_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg___boxed(lean_object* v_m_2237_, lean_object* v_a_2238_){
_start:
{
lean_object* v_res_2239_; 
v_res_2239_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2237_, v_a_2238_);
lean_dec_ref(v_a_2238_);
lean_dec_ref(v_m_2237_);
return v_res_2239_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1(void){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2241_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_2242_ = lean_unsigned_to_nat(26u);
v___x_2243_ = lean_unsigned_to_nat(152u);
v___x_2244_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0));
v___x_2245_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2246_ = l_mkPanicMessageWithDecl(v___x_2245_, v___x_2244_, v___x_2243_, v___x_2242_, v___x_2241_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData(lean_object* v_e_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_){
_start:
{
lean_object* v_e_x27_2252_; lean_object* v_visitedNames_2253_; lean_object* v_visitedLevels_2254_; lean_object* v_visitedExprs_2255_; lean_object* v_visitedConstants_2256_; lean_object* v_noMDataExprs_2257_; uint8_t v_exportMData_2258_; uint8_t v_exportUnsafe_2259_; uint8_t v_ignoreMissing_2260_; lean_object* v_recursorMap_2261_; lean_object* v_e_x27_2267_; lean_object* v___y_2268_; lean_object* v_visitedNames_2278_; lean_object* v_visitedLevels_2279_; lean_object* v_visitedExprs_2280_; lean_object* v_visitedConstants_2281_; lean_object* v_noMDataExprs_2282_; uint8_t v_exportMData_2283_; uint8_t v_exportUnsafe_2284_; uint8_t v_ignoreMissing_2285_; lean_object* v_recursorMap_2286_; lean_object* v___x_2287_; 
v_visitedNames_2278_ = lean_ctor_get(v_a_2249_, 0);
v_visitedLevels_2279_ = lean_ctor_get(v_a_2249_, 1);
v_visitedExprs_2280_ = lean_ctor_get(v_a_2249_, 2);
v_visitedConstants_2281_ = lean_ctor_get(v_a_2249_, 3);
v_noMDataExprs_2282_ = lean_ctor_get(v_a_2249_, 4);
v_exportMData_2283_ = lean_ctor_get_uint8(v_a_2249_, sizeof(void*)*6);
v_exportUnsafe_2284_ = lean_ctor_get_uint8(v_a_2249_, sizeof(void*)*6 + 1);
v_ignoreMissing_2285_ = lean_ctor_get_uint8(v_a_2249_, sizeof(void*)*6 + 2);
v_recursorMap_2286_ = lean_ctor_get(v_a_2249_, 5);
v___x_2287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_noMDataExprs_2282_, v_e_2247_);
if (lean_obj_tag(v___x_2287_) == 1)
{
lean_object* v_val_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2296_; 
lean_dec_ref(v_e_2247_);
v_val_2288_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2290_ = v___x_2287_;
v_isShared_2291_ = v_isSharedCheck_2296_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_val_2288_);
lean_dec(v___x_2287_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2296_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2292_; lean_object* v___x_2294_; 
v___x_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2292_, 0, v_val_2288_);
lean_ctor_set(v___x_2292_, 1, v_a_2249_);
if (v_isShared_2291_ == 0)
{
lean_ctor_set_tag(v___x_2290_, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2292_);
v___x_2294_ = v___x_2290_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v___x_2292_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
else
{
lean_dec(v___x_2287_);
switch(lean_obj_tag(v_e_2247_))
{
case 1:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2297_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2298_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2297_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_object* v_a_2299_; lean_object* v_fst_2300_; lean_object* v_snd_2301_; 
v_a_2299_ = lean_ctor_get(v___x_2298_, 0);
lean_inc(v_a_2299_);
lean_dec_ref_known(v___x_2298_, 1);
v_fst_2300_ = lean_ctor_get(v_a_2299_, 0);
lean_inc(v_fst_2300_);
v_snd_2301_ = lean_ctor_get(v_a_2299_, 1);
lean_inc(v_snd_2301_);
lean_dec(v_a_2299_);
v_e_x27_2267_ = v_fst_2300_;
v___y_2268_ = v_snd_2301_;
goto v___jp_2266_;
}
else
{
lean_dec_ref_known(v_e_2247_, 1);
return v___x_2298_;
}
}
case 2:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2302_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2303_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2302_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; lean_object* v_fst_2305_; lean_object* v_snd_2306_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2304_);
lean_dec_ref_known(v___x_2303_, 1);
v_fst_2305_ = lean_ctor_get(v_a_2304_, 0);
lean_inc(v_fst_2305_);
v_snd_2306_ = lean_ctor_get(v_a_2304_, 1);
lean_inc(v_snd_2306_);
lean_dec(v_a_2304_);
v_e_x27_2267_ = v_fst_2305_;
v___y_2268_ = v_snd_2306_;
goto v___jp_2266_;
}
else
{
lean_dec_ref_known(v_e_2247_, 1);
return v___x_2303_;
}
}
case 5:
{
lean_object* v_fn_2307_; lean_object* v_arg_2308_; lean_object* v___x_2309_; 
v_fn_2307_ = lean_ctor_get(v_e_2247_, 0);
v_arg_2308_ = lean_ctor_get(v_e_2247_, 1);
lean_inc_ref(v_fn_2307_);
v___x_2309_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_fn_2307_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v_fst_2311_; lean_object* v_snd_2312_; lean_object* v___x_2313_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v___x_2309_, 1);
v_fst_2311_ = lean_ctor_get(v_a_2310_, 0);
lean_inc(v_fst_2311_);
v_snd_2312_ = lean_ctor_get(v_a_2310_, 1);
lean_inc(v_snd_2312_);
lean_dec(v_a_2310_);
lean_inc_ref(v_arg_2308_);
v___x_2313_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_arg_2308_, v_a_2248_, v_snd_2312_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v_fst_2315_; lean_object* v_snd_2316_; size_t v___x_2317_; size_t v___x_2318_; uint8_t v___x_2319_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2314_);
lean_dec_ref_known(v___x_2313_, 1);
v_fst_2315_ = lean_ctor_get(v_a_2314_, 0);
lean_inc(v_fst_2315_);
v_snd_2316_ = lean_ctor_get(v_a_2314_, 1);
lean_inc(v_snd_2316_);
lean_dec(v_a_2314_);
v___x_2317_ = lean_ptr_addr(v_fn_2307_);
v___x_2318_ = lean_ptr_addr(v_fst_2311_);
v___x_2319_ = lean_usize_dec_eq(v___x_2317_, v___x_2318_);
if (v___x_2319_ == 0)
{
lean_object* v___x_2320_; 
v___x_2320_ = l_Lean_Expr_app___override(v_fst_2311_, v_fst_2315_);
v_e_x27_2267_ = v___x_2320_;
v___y_2268_ = v_snd_2316_;
goto v___jp_2266_;
}
else
{
size_t v___x_2321_; size_t v___x_2322_; uint8_t v___x_2323_; 
v___x_2321_ = lean_ptr_addr(v_arg_2308_);
v___x_2322_ = lean_ptr_addr(v_fst_2315_);
v___x_2323_ = lean_usize_dec_eq(v___x_2321_, v___x_2322_);
if (v___x_2323_ == 0)
{
lean_object* v___x_2324_; 
v___x_2324_ = l_Lean_Expr_app___override(v_fst_2311_, v_fst_2315_);
v_e_x27_2267_ = v___x_2324_;
v___y_2268_ = v_snd_2316_;
goto v___jp_2266_;
}
else
{
lean_dec(v_fst_2315_);
lean_dec(v_fst_2311_);
lean_inc_ref(v_e_2247_);
v_e_x27_2267_ = v_e_2247_;
v___y_2268_ = v_snd_2316_;
goto v___jp_2266_;
}
}
}
else
{
lean_dec(v_fst_2311_);
lean_dec_ref_known(v_e_2247_, 2);
return v___x_2313_;
}
}
else
{
lean_dec_ref_known(v_e_2247_, 2);
return v___x_2309_;
}
}
case 6:
{
lean_object* v_binderName_2325_; lean_object* v_binderType_2326_; lean_object* v_body_2327_; uint8_t v_binderInfo_2328_; lean_object* v___x_2329_; 
v_binderName_2325_ = lean_ctor_get(v_e_2247_, 0);
v_binderType_2326_ = lean_ctor_get(v_e_2247_, 1);
v_body_2327_ = lean_ctor_get(v_e_2247_, 2);
v_binderInfo_2328_ = lean_ctor_get_uint8(v_e_2247_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2326_);
v___x_2329_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2326_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2329_) == 0)
{
lean_object* v_a_2330_; lean_object* v_fst_2331_; lean_object* v_snd_2332_; lean_object* v___x_2333_; 
v_a_2330_ = lean_ctor_get(v___x_2329_, 0);
lean_inc(v_a_2330_);
lean_dec_ref_known(v___x_2329_, 1);
v_fst_2331_ = lean_ctor_get(v_a_2330_, 0);
lean_inc(v_fst_2331_);
v_snd_2332_ = lean_ctor_get(v_a_2330_, 1);
lean_inc(v_snd_2332_);
lean_dec(v_a_2330_);
lean_inc_ref(v_body_2327_);
v___x_2333_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2327_, v_a_2248_, v_snd_2332_);
if (lean_obj_tag(v___x_2333_) == 0)
{
lean_object* v_a_2334_; lean_object* v_fst_2335_; lean_object* v_snd_2336_; size_t v___x_2337_; size_t v___x_2338_; uint8_t v___x_2339_; 
v_a_2334_ = lean_ctor_get(v___x_2333_, 0);
lean_inc(v_a_2334_);
lean_dec_ref_known(v___x_2333_, 1);
v_fst_2335_ = lean_ctor_get(v_a_2334_, 0);
lean_inc(v_fst_2335_);
v_snd_2336_ = lean_ctor_get(v_a_2334_, 1);
lean_inc(v_snd_2336_);
lean_dec(v_a_2334_);
v___x_2337_ = lean_ptr_addr(v_binderType_2326_);
v___x_2338_ = lean_ptr_addr(v_fst_2331_);
v___x_2339_ = lean_usize_dec_eq(v___x_2337_, v___x_2338_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2340_; 
lean_inc(v_binderName_2325_);
v___x_2340_ = l_Lean_Expr_lam___override(v_binderName_2325_, v_fst_2331_, v_fst_2335_, v_binderInfo_2328_);
v_e_x27_2267_ = v___x_2340_;
v___y_2268_ = v_snd_2336_;
goto v___jp_2266_;
}
else
{
size_t v___x_2341_; size_t v___x_2342_; uint8_t v___x_2343_; 
v___x_2341_ = lean_ptr_addr(v_body_2327_);
v___x_2342_ = lean_ptr_addr(v_fst_2335_);
v___x_2343_ = lean_usize_dec_eq(v___x_2341_, v___x_2342_);
if (v___x_2343_ == 0)
{
lean_object* v___x_2344_; 
lean_inc(v_binderName_2325_);
v___x_2344_ = l_Lean_Expr_lam___override(v_binderName_2325_, v_fst_2331_, v_fst_2335_, v_binderInfo_2328_);
v_e_x27_2267_ = v___x_2344_;
v___y_2268_ = v_snd_2336_;
goto v___jp_2266_;
}
else
{
uint8_t v___x_2345_; 
v___x_2345_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2328_, v_binderInfo_2328_);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; 
lean_inc(v_binderName_2325_);
v___x_2346_ = l_Lean_Expr_lam___override(v_binderName_2325_, v_fst_2331_, v_fst_2335_, v_binderInfo_2328_);
v_e_x27_2267_ = v___x_2346_;
v___y_2268_ = v_snd_2336_;
goto v___jp_2266_;
}
else
{
lean_dec(v_fst_2335_);
lean_dec(v_fst_2331_);
lean_inc_ref(v_e_2247_);
v_e_x27_2267_ = v_e_2247_;
v___y_2268_ = v_snd_2336_;
goto v___jp_2266_;
}
}
}
}
else
{
lean_dec(v_fst_2331_);
lean_dec_ref_known(v_e_2247_, 3);
return v___x_2333_;
}
}
else
{
lean_dec_ref_known(v_e_2247_, 3);
return v___x_2329_;
}
}
case 7:
{
lean_object* v_binderName_2347_; lean_object* v_binderType_2348_; lean_object* v_body_2349_; uint8_t v_binderInfo_2350_; lean_object* v___x_2351_; 
v_binderName_2347_ = lean_ctor_get(v_e_2247_, 0);
v_binderType_2348_ = lean_ctor_get(v_e_2247_, 1);
v_body_2349_ = lean_ctor_get(v_e_2247_, 2);
v_binderInfo_2350_ = lean_ctor_get_uint8(v_e_2247_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2348_);
v___x_2351_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2348_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v_fst_2353_; lean_object* v_snd_2354_; lean_object* v___x_2355_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
v_fst_2353_ = lean_ctor_get(v_a_2352_, 0);
lean_inc(v_fst_2353_);
v_snd_2354_ = lean_ctor_get(v_a_2352_, 1);
lean_inc(v_snd_2354_);
lean_dec(v_a_2352_);
lean_inc_ref(v_body_2349_);
v___x_2355_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2349_, v_a_2248_, v_snd_2354_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_a_2356_; lean_object* v_fst_2357_; lean_object* v_snd_2358_; size_t v___x_2359_; size_t v___x_2360_; uint8_t v___x_2361_; 
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2356_);
lean_dec_ref_known(v___x_2355_, 1);
v_fst_2357_ = lean_ctor_get(v_a_2356_, 0);
lean_inc(v_fst_2357_);
v_snd_2358_ = lean_ctor_get(v_a_2356_, 1);
lean_inc(v_snd_2358_);
lean_dec(v_a_2356_);
v___x_2359_ = lean_ptr_addr(v_binderType_2348_);
v___x_2360_ = lean_ptr_addr(v_fst_2353_);
v___x_2361_ = lean_usize_dec_eq(v___x_2359_, v___x_2360_);
if (v___x_2361_ == 0)
{
lean_object* v___x_2362_; 
lean_inc(v_binderName_2347_);
v___x_2362_ = l_Lean_Expr_forallE___override(v_binderName_2347_, v_fst_2353_, v_fst_2357_, v_binderInfo_2350_);
v_e_x27_2267_ = v___x_2362_;
v___y_2268_ = v_snd_2358_;
goto v___jp_2266_;
}
else
{
size_t v___x_2363_; size_t v___x_2364_; uint8_t v___x_2365_; 
v___x_2363_ = lean_ptr_addr(v_body_2349_);
v___x_2364_ = lean_ptr_addr(v_fst_2357_);
v___x_2365_ = lean_usize_dec_eq(v___x_2363_, v___x_2364_);
if (v___x_2365_ == 0)
{
lean_object* v___x_2366_; 
lean_inc(v_binderName_2347_);
v___x_2366_ = l_Lean_Expr_forallE___override(v_binderName_2347_, v_fst_2353_, v_fst_2357_, v_binderInfo_2350_);
v_e_x27_2267_ = v___x_2366_;
v___y_2268_ = v_snd_2358_;
goto v___jp_2266_;
}
else
{
uint8_t v___x_2367_; 
v___x_2367_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2350_, v_binderInfo_2350_);
if (v___x_2367_ == 0)
{
lean_object* v___x_2368_; 
lean_inc(v_binderName_2347_);
v___x_2368_ = l_Lean_Expr_forallE___override(v_binderName_2347_, v_fst_2353_, v_fst_2357_, v_binderInfo_2350_);
v_e_x27_2267_ = v___x_2368_;
v___y_2268_ = v_snd_2358_;
goto v___jp_2266_;
}
else
{
lean_dec(v_fst_2357_);
lean_dec(v_fst_2353_);
lean_inc_ref(v_e_2247_);
v_e_x27_2267_ = v_e_2247_;
v___y_2268_ = v_snd_2358_;
goto v___jp_2266_;
}
}
}
}
else
{
lean_dec(v_fst_2353_);
lean_dec_ref_known(v_e_2247_, 3);
return v___x_2355_;
}
}
else
{
lean_dec_ref_known(v_e_2247_, 3);
return v___x_2351_;
}
}
case 8:
{
lean_object* v_declName_2369_; lean_object* v_type_2370_; lean_object* v_value_2371_; lean_object* v_body_2372_; uint8_t v_nondep_2373_; lean_object* v___x_2374_; 
v_declName_2369_ = lean_ctor_get(v_e_2247_, 0);
v_type_2370_ = lean_ctor_get(v_e_2247_, 1);
v_value_2371_ = lean_ctor_get(v_e_2247_, 2);
v_body_2372_ = lean_ctor_get(v_e_2247_, 3);
v_nondep_2373_ = lean_ctor_get_uint8(v_e_2247_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_2370_);
v___x_2374_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_type_2370_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v_fst_2376_; lean_object* v_snd_2377_; lean_object* v___x_2378_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2375_);
lean_dec_ref_known(v___x_2374_, 1);
v_fst_2376_ = lean_ctor_get(v_a_2375_, 0);
lean_inc(v_fst_2376_);
v_snd_2377_ = lean_ctor_get(v_a_2375_, 1);
lean_inc(v_snd_2377_);
lean_dec(v_a_2375_);
lean_inc_ref(v_value_2371_);
v___x_2378_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_value_2371_, v_a_2248_, v_snd_2377_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v_fst_2380_; lean_object* v_snd_2381_; lean_object* v___x_2382_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc(v_a_2379_);
lean_dec_ref_known(v___x_2378_, 1);
v_fst_2380_ = lean_ctor_get(v_a_2379_, 0);
lean_inc(v_fst_2380_);
v_snd_2381_ = lean_ctor_get(v_a_2379_, 1);
lean_inc(v_snd_2381_);
lean_dec(v_a_2379_);
lean_inc_ref(v_body_2372_);
v___x_2382_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2372_, v_a_2248_, v_snd_2381_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; lean_object* v_fst_2384_; lean_object* v_snd_2385_; uint8_t v___x_2386_; size_t v___x_2387_; size_t v___x_2388_; uint8_t v___x_2389_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
lean_inc(v_a_2383_);
lean_dec_ref_known(v___x_2382_, 1);
v_fst_2384_ = lean_ctor_get(v_a_2383_, 0);
lean_inc(v_fst_2384_);
v_snd_2385_ = lean_ctor_get(v_a_2383_, 1);
lean_inc(v_snd_2385_);
lean_dec(v_a_2383_);
v___x_2386_ = 0;
v___x_2387_ = lean_ptr_addr(v_type_2370_);
v___x_2388_ = lean_ptr_addr(v_fst_2376_);
v___x_2389_ = lean_usize_dec_eq(v___x_2387_, v___x_2388_);
if (v___x_2389_ == 0)
{
lean_object* v___x_2390_; 
lean_inc(v_declName_2369_);
v___x_2390_ = l_Lean_Expr_letE___override(v_declName_2369_, v_fst_2376_, v_fst_2380_, v_fst_2384_, v___x_2386_);
v_e_x27_2267_ = v___x_2390_;
v___y_2268_ = v_snd_2385_;
goto v___jp_2266_;
}
else
{
size_t v___x_2391_; size_t v___x_2392_; uint8_t v___x_2393_; 
v___x_2391_ = lean_ptr_addr(v_value_2371_);
v___x_2392_ = lean_ptr_addr(v_fst_2380_);
v___x_2393_ = lean_usize_dec_eq(v___x_2391_, v___x_2392_);
if (v___x_2393_ == 0)
{
lean_object* v___x_2394_; 
lean_inc(v_declName_2369_);
v___x_2394_ = l_Lean_Expr_letE___override(v_declName_2369_, v_fst_2376_, v_fst_2380_, v_fst_2384_, v___x_2386_);
v_e_x27_2267_ = v___x_2394_;
v___y_2268_ = v_snd_2385_;
goto v___jp_2266_;
}
else
{
size_t v___x_2395_; size_t v___x_2396_; uint8_t v___x_2397_; 
v___x_2395_ = lean_ptr_addr(v_body_2372_);
v___x_2396_ = lean_ptr_addr(v_fst_2384_);
v___x_2397_ = lean_usize_dec_eq(v___x_2395_, v___x_2396_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; 
lean_inc(v_declName_2369_);
v___x_2398_ = l_Lean_Expr_letE___override(v_declName_2369_, v_fst_2376_, v_fst_2380_, v_fst_2384_, v___x_2386_);
v_e_x27_2267_ = v___x_2398_;
v___y_2268_ = v_snd_2385_;
goto v___jp_2266_;
}
else
{
if (v_nondep_2373_ == 0)
{
lean_dec(v_fst_2384_);
lean_dec(v_fst_2380_);
lean_dec(v_fst_2376_);
lean_inc_ref(v_e_2247_);
v_e_x27_2267_ = v_e_2247_;
v___y_2268_ = v_snd_2385_;
goto v___jp_2266_;
}
else
{
lean_object* v___x_2399_; 
lean_inc(v_declName_2369_);
v___x_2399_ = l_Lean_Expr_letE___override(v_declName_2369_, v_fst_2376_, v_fst_2380_, v_fst_2384_, v___x_2386_);
v_e_x27_2267_ = v___x_2399_;
v___y_2268_ = v_snd_2385_;
goto v___jp_2266_;
}
}
}
}
}
else
{
lean_dec(v_fst_2380_);
lean_dec(v_fst_2376_);
lean_dec_ref_known(v_e_2247_, 4);
return v___x_2382_;
}
}
else
{
lean_dec(v_fst_2376_);
lean_dec_ref_known(v_e_2247_, 4);
return v___x_2378_;
}
}
else
{
lean_dec_ref_known(v_e_2247_, 4);
return v___x_2374_;
}
}
case 10:
{
lean_object* v_expr_2400_; lean_object* v___x_2401_; 
v_expr_2400_ = lean_ctor_get(v_e_2247_, 1);
lean_inc_ref(v_expr_2400_);
v___x_2401_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_expr_2400_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v_fst_2403_; lean_object* v_snd_2404_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2401_, 1);
v_fst_2403_ = lean_ctor_get(v_a_2402_, 0);
lean_inc(v_fst_2403_);
v_snd_2404_ = lean_ctor_get(v_a_2402_, 1);
lean_inc(v_snd_2404_);
lean_dec(v_a_2402_);
v_e_x27_2267_ = v_fst_2403_;
v___y_2268_ = v_snd_2404_;
goto v___jp_2266_;
}
else
{
lean_dec_ref_known(v_e_2247_, 2);
return v___x_2401_;
}
}
case 11:
{
lean_object* v_typeName_2405_; lean_object* v_idx_2406_; lean_object* v_struct_2407_; lean_object* v___x_2408_; 
v_typeName_2405_ = lean_ctor_get(v_e_2247_, 0);
v_idx_2406_ = lean_ctor_get(v_e_2247_, 1);
v_struct_2407_ = lean_ctor_get(v_e_2247_, 2);
lean_inc_ref(v_struct_2407_);
v___x_2408_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_struct_2407_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_object* v_a_2409_; lean_object* v_fst_2410_; lean_object* v_snd_2411_; size_t v___x_2412_; size_t v___x_2413_; uint8_t v___x_2414_; 
v_a_2409_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_a_2409_);
lean_dec_ref_known(v___x_2408_, 1);
v_fst_2410_ = lean_ctor_get(v_a_2409_, 0);
lean_inc(v_fst_2410_);
v_snd_2411_ = lean_ctor_get(v_a_2409_, 1);
lean_inc(v_snd_2411_);
lean_dec(v_a_2409_);
v___x_2412_ = lean_ptr_addr(v_struct_2407_);
v___x_2413_ = lean_ptr_addr(v_fst_2410_);
v___x_2414_ = lean_usize_dec_eq(v___x_2412_, v___x_2413_);
if (v___x_2414_ == 0)
{
lean_object* v___x_2415_; 
lean_inc(v_idx_2406_);
lean_inc(v_typeName_2405_);
v___x_2415_ = l_Lean_Expr_proj___override(v_typeName_2405_, v_idx_2406_, v_fst_2410_);
v_e_x27_2267_ = v___x_2415_;
v___y_2268_ = v_snd_2411_;
goto v___jp_2266_;
}
else
{
lean_dec(v_fst_2410_);
lean_inc_ref(v_e_2247_);
v_e_x27_2267_ = v_e_2247_;
v___y_2268_ = v_snd_2411_;
goto v___jp_2266_;
}
}
else
{
lean_dec_ref_known(v_e_2247_, 3);
return v___x_2408_;
}
}
default: 
{
lean_inc(v_recursorMap_2286_);
lean_inc_ref(v_noMDataExprs_2282_);
lean_inc_ref(v_visitedConstants_2281_);
lean_inc_ref(v_visitedExprs_2280_);
lean_inc_ref(v_visitedLevels_2279_);
lean_inc_ref(v_visitedNames_2278_);
lean_dec_ref(v_a_2249_);
lean_inc_ref(v_e_2247_);
v_e_x27_2252_ = v_e_2247_;
v_visitedNames_2253_ = v_visitedNames_2278_;
v_visitedLevels_2254_ = v_visitedLevels_2279_;
v_visitedExprs_2255_ = v_visitedExprs_2280_;
v_visitedConstants_2256_ = v_visitedConstants_2281_;
v_noMDataExprs_2257_ = v_noMDataExprs_2282_;
v_exportMData_2258_ = v_exportMData_2283_;
v_exportUnsafe_2259_ = v_exportUnsafe_2284_;
v_ignoreMissing_2260_ = v_ignoreMissing_2285_;
v_recursorMap_2261_ = v_recursorMap_2286_;
goto v___jp_2251_;
}
}
}
v___jp_2251_:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
lean_inc_ref(v_e_x27_2252_);
v___x_2262_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_noMDataExprs_2257_, v_e_2247_, v_e_x27_2252_);
v___x_2263_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_2263_, 0, v_visitedNames_2253_);
lean_ctor_set(v___x_2263_, 1, v_visitedLevels_2254_);
lean_ctor_set(v___x_2263_, 2, v_visitedExprs_2255_);
lean_ctor_set(v___x_2263_, 3, v_visitedConstants_2256_);
lean_ctor_set(v___x_2263_, 4, v___x_2262_);
lean_ctor_set(v___x_2263_, 5, v_recursorMap_2261_);
lean_ctor_set_uint8(v___x_2263_, sizeof(void*)*6, v_exportMData_2258_);
lean_ctor_set_uint8(v___x_2263_, sizeof(void*)*6 + 1, v_exportUnsafe_2259_);
lean_ctor_set_uint8(v___x_2263_, sizeof(void*)*6 + 2, v_ignoreMissing_2260_);
v___x_2264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2264_, 0, v_e_x27_2252_);
lean_ctor_set(v___x_2264_, 1, v___x_2263_);
v___x_2265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2264_);
return v___x_2265_;
}
v___jp_2266_:
{
lean_object* v_visitedNames_2269_; lean_object* v_visitedLevels_2270_; lean_object* v_visitedExprs_2271_; lean_object* v_visitedConstants_2272_; lean_object* v_noMDataExprs_2273_; uint8_t v_exportMData_2274_; uint8_t v_exportUnsafe_2275_; uint8_t v_ignoreMissing_2276_; lean_object* v_recursorMap_2277_; 
v_visitedNames_2269_ = lean_ctor_get(v___y_2268_, 0);
lean_inc_ref(v_visitedNames_2269_);
v_visitedLevels_2270_ = lean_ctor_get(v___y_2268_, 1);
lean_inc_ref(v_visitedLevels_2270_);
v_visitedExprs_2271_ = lean_ctor_get(v___y_2268_, 2);
lean_inc_ref(v_visitedExprs_2271_);
v_visitedConstants_2272_ = lean_ctor_get(v___y_2268_, 3);
lean_inc_ref(v_visitedConstants_2272_);
v_noMDataExprs_2273_ = lean_ctor_get(v___y_2268_, 4);
lean_inc_ref(v_noMDataExprs_2273_);
v_exportMData_2274_ = lean_ctor_get_uint8(v___y_2268_, sizeof(void*)*6);
v_exportUnsafe_2275_ = lean_ctor_get_uint8(v___y_2268_, sizeof(void*)*6 + 1);
v_ignoreMissing_2276_ = lean_ctor_get_uint8(v___y_2268_, sizeof(void*)*6 + 2);
v_recursorMap_2277_ = lean_ctor_get(v___y_2268_, 5);
lean_inc(v_recursorMap_2277_);
lean_dec_ref(v___y_2268_);
v_e_x27_2252_ = v_e_x27_2267_;
v_visitedNames_2253_ = v_visitedNames_2269_;
v_visitedLevels_2254_ = v_visitedLevels_2270_;
v_visitedExprs_2255_ = v_visitedExprs_2271_;
v_visitedConstants_2256_ = v_visitedConstants_2272_;
v_noMDataExprs_2257_ = v_noMDataExprs_2273_;
v_exportMData_2258_ = v_exportMData_2274_;
v_exportUnsafe_2259_ = v_exportUnsafe_2275_;
v_ignoreMissing_2260_ = v_ignoreMissing_2276_;
v_recursorMap_2261_ = v_recursorMap_2277_;
goto v___jp_2251_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___boxed(lean_object* v_e_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_){
_start:
{
lean_object* v_res_2420_; 
v_res_2420_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_2416_, v_a_2417_, v_a_2418_);
lean_dec_ref(v_a_2417_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0(lean_object* v_00_u03b2_2421_, lean_object* v_m_2422_, lean_object* v_a_2423_, lean_object* v_b_2424_){
_start:
{
lean_object* v___x_2425_; 
v___x_2425_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_m_2422_, v_a_2423_, v_b_2424_);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(lean_object* v_00_u03b2_2426_, lean_object* v_m_2427_, lean_object* v_a_2428_){
_start:
{
lean_object* v___x_2429_; 
v___x_2429_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2427_, v_a_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___boxed(lean_object* v_00_u03b2_2430_, lean_object* v_m_2431_, lean_object* v_a_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(v_00_u03b2_2430_, v_m_2431_, v_a_2432_);
lean_dec_ref(v_a_2432_);
lean_dec_ref(v_m_2431_);
return v_res_2433_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(lean_object* v_00_u03b2_2434_, lean_object* v_a_2435_, lean_object* v_x_2436_){
_start:
{
uint8_t v___x_2437_; 
v___x_2437_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2435_, v_x_2436_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2438_, lean_object* v_a_2439_, lean_object* v_x_2440_){
_start:
{
uint8_t v_res_2441_; lean_object* v_r_2442_; 
v_res_2441_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(v_00_u03b2_2438_, v_a_2439_, v_x_2440_);
lean_dec(v_x_2440_);
lean_dec_ref(v_a_2439_);
v_r_2442_ = lean_box(v_res_2441_);
return v_r_2442_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1(lean_object* v_00_u03b2_2443_, lean_object* v_data_2444_){
_start:
{
lean_object* v___x_2445_; 
v___x_2445_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_data_2444_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2(lean_object* v_00_u03b2_2446_, lean_object* v_a_2447_, lean_object* v_b_2448_, lean_object* v_x_2449_){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2447_, v_b_2448_, v_x_2449_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(lean_object* v_00_u03b2_2451_, lean_object* v_a_2452_, lean_object* v_x_2453_){
_start:
{
lean_object* v___x_2454_; 
v___x_2454_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2452_, v_x_2453_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___boxed(lean_object* v_00_u03b2_2455_, lean_object* v_a_2456_, lean_object* v_x_2457_){
_start:
{
lean_object* v_res_2458_; 
v_res_2458_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(v_00_u03b2_2455_, v_a_2456_, v_x_2457_);
lean_dec(v_x_2457_);
lean_dec_ref(v_a_2456_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2459_, lean_object* v_i_2460_, lean_object* v_source_2461_, lean_object* v_target_2462_){
_start:
{
lean_object* v___x_2463_; 
v___x_2463_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v_i_2460_, v_source_2461_, v_target_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_2464_, lean_object* v_x_2465_, lean_object* v_x_2466_){
_start:
{
lean_object* v___x_2467_; 
v___x_2467_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_x_2465_, v_x_2466_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(lean_object* v_fields_2468_, lean_object* v_a_2469_){
_start:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2471_ = l_Lean_Json_mkObj(v_fields_2468_);
v___x_2472_ = l_Lean_Json_compress(v___x_2471_);
v___x_2473_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_2472_);
if (lean_obj_tag(v___x_2473_) == 0)
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2482_; 
v_a_2474_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2476_ = v___x_2473_;
v_isShared_2477_ = v_isSharedCheck_2482_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2473_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2482_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2478_; lean_object* v___x_2480_; 
v___x_2478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2478_, 0, v_a_2474_);
lean_ctor_set(v___x_2478_, 1, v_a_2469_);
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 0, v___x_2478_);
v___x_2480_ = v___x_2476_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v___x_2478_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec_ref(v_a_2469_);
v_a_2483_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2473_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2473_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg___boxed(lean_object* v_fields_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2491_, v_a_2492_);
lean_dec(v_fields_2491_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(lean_object* v_fields_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2495_, v_a_2497_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___boxed(lean_object* v_fields_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(v_fields_2500_, v_a_2501_, v_a_2502_);
lean_dec_ref(v_a_2501_);
lean_dec(v_fields_2500_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(lean_object* v_t_2505_, lean_object* v_k_2506_){
_start:
{
if (lean_obj_tag(v_t_2505_) == 0)
{
lean_object* v_k_2507_; lean_object* v_v_2508_; lean_object* v_l_2509_; lean_object* v_r_2510_; uint8_t v___x_2511_; 
v_k_2507_ = lean_ctor_get(v_t_2505_, 1);
v_v_2508_ = lean_ctor_get(v_t_2505_, 2);
v_l_2509_ = lean_ctor_get(v_t_2505_, 3);
v_r_2510_ = lean_ctor_get(v_t_2505_, 4);
v___x_2511_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2506_, v_k_2507_);
switch(v___x_2511_)
{
case 0:
{
v_t_2505_ = v_l_2509_;
goto _start;
}
case 1:
{
lean_object* v___x_2513_; 
lean_inc(v_v_2508_);
v___x_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2513_, 0, v_v_2508_);
return v___x_2513_;
}
default: 
{
v_t_2505_ = v_r_2510_;
goto _start;
}
}
}
else
{
lean_object* v___x_2515_; 
v___x_2515_ = lean_box(0);
return v___x_2515_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg___boxed(lean_object* v_t_2516_, lean_object* v_k_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(v_t_2516_, v_k_2517_);
lean_dec(v_k_2517_);
lean_dec(v_t_2516_);
return v_res_2518_;
}
}
static lean_object* _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0(void){
_start:
{
lean_object* v___x_2519_; 
v___x_2519_ = l_Array_instInhabited___redArg();
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8(lean_object* v_msg_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_){
_start:
{
lean_object* v___x_2524_; lean_object* v___f_2525_; lean_object* v___f_2526_; lean_object* v___f_2527_; lean_object* v___f_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___f_2538_; lean_object* v___x_163489__overap_2539_; lean_object* v___x_2540_; 
v___x_2524_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2525_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2525_, 0, v___x_2524_);
v___f_2526_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2526_, 0, v___x_2524_);
v___f_2527_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2527_, 0, v___x_2524_);
v___f_2528_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2528_, 0, v___x_2524_);
v___x_2529_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2529_, 0, lean_box(0));
lean_closure_set(v___x_2529_, 1, lean_box(0));
lean_closure_set(v___x_2529_, 2, v___x_2524_);
v___x_2530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
lean_ctor_set(v___x_2530_, 1, v___f_2525_);
v___x_2531_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2531_, 0, lean_box(0));
lean_closure_set(v___x_2531_, 1, lean_box(0));
lean_closure_set(v___x_2531_, 2, v___x_2524_);
v___x_2532_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2530_);
lean_ctor_set(v___x_2532_, 1, v___x_2531_);
lean_ctor_set(v___x_2532_, 2, v___f_2526_);
lean_ctor_set(v___x_2532_, 3, v___f_2527_);
lean_ctor_set(v___x_2532_, 4, v___f_2528_);
v___x_2533_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2533_, 0, lean_box(0));
lean_closure_set(v___x_2533_, 1, lean_box(0));
lean_closure_set(v___x_2533_, 2, v___x_2524_);
v___x_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2532_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
v___x_2535_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0);
v___x_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
v___x_2537_ = l_instInhabitedOfMonad___redArg(v___x_2534_, v___x_2536_);
v___f_2538_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2538_, 0, v___x_2537_);
v___x_163489__overap_2539_ = lean_panic_fn_borrowed(v___f_2538_, v_msg_2520_);
lean_dec_ref(v___f_2538_);
lean_inc_ref(v___y_2521_);
v___x_2540_ = lean_apply_3(v___x_163489__overap_2539_, v___y_2521_, v___y_2522_, lean_box(0));
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___boxed(lean_object* v_msg_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_){
_start:
{
lean_object* v_res_2545_; 
v_res_2545_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v_msg_2541_, v___y_2542_, v___y_2543_);
lean_dec_ref(v___y_2542_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5(lean_object* v_msg_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v___x_2550_; lean_object* v___f_2551_; lean_object* v___f_2552_; lean_object* v___f_2553_; lean_object* v___f_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___f_2563_; lean_object* v___x_162767__overap_2564_; lean_object* v___x_2565_; 
v___x_2550_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2551_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2551_, 0, v___x_2550_);
v___f_2552_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2552_, 0, v___x_2550_);
v___f_2553_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2553_, 0, v___x_2550_);
v___f_2554_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2554_, 0, v___x_2550_);
v___x_2555_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2555_, 0, lean_box(0));
lean_closure_set(v___x_2555_, 1, lean_box(0));
lean_closure_set(v___x_2555_, 2, v___x_2550_);
v___x_2556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2555_);
lean_ctor_set(v___x_2556_, 1, v___f_2551_);
v___x_2557_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2557_, 0, lean_box(0));
lean_closure_set(v___x_2557_, 1, lean_box(0));
lean_closure_set(v___x_2557_, 2, v___x_2550_);
v___x_2558_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2556_);
lean_ctor_set(v___x_2558_, 1, v___x_2557_);
lean_ctor_set(v___x_2558_, 2, v___f_2552_);
lean_ctor_set(v___x_2558_, 3, v___f_2553_);
lean_ctor_set(v___x_2558_, 4, v___f_2554_);
v___x_2559_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2559_, 0, lean_box(0));
lean_closure_set(v___x_2559_, 1, lean_box(0));
lean_closure_set(v___x_2559_, 2, v___x_2550_);
v___x_2560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2558_);
lean_ctor_set(v___x_2560_, 1, v___x_2559_);
v___x_2561_ = lean_box(0);
v___x_2562_ = l_instInhabitedOfMonad___redArg(v___x_2560_, v___x_2561_);
v___f_2563_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2563_, 0, v___x_2562_);
v___x_162767__overap_2564_ = lean_panic_fn_borrowed(v___f_2563_, v_msg_2546_);
lean_dec_ref(v___f_2563_);
lean_inc_ref(v___y_2547_);
v___x_2565_ = lean_apply_3(v___x_162767__overap_2564_, v___y_2547_, v___y_2548_, lean_box(0));
return v___x_2565_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5___boxed(lean_object* v_msg_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_){
_start:
{
lean_object* v_res_2570_; 
v_res_2570_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v_msg_2566_, v___y_2567_, v___y_2568_);
lean_dec_ref(v___y_2567_);
return v_res_2570_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__6(lean_object* v_msg_2571_){
_start:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2572_ = l_Lean_instInhabitedConstantInfo_default;
v___x_2573_ = lean_panic_fn_borrowed(v___x_2572_, v_msg_2571_);
return v___x_2573_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2576_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1));
v___x_2577_ = lean_unsigned_to_nat(10u);
v___x_2578_ = lean_unsigned_to_nat(334u);
v___x_2579_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2580_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2581_ = l_mkPanicMessageWithDecl(v___x_2580_, v___x_2579_, v___x_2578_, v___x_2577_, v___x_2576_);
return v___x_2581_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; 
v___x_2583_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3));
v___x_2584_ = lean_unsigned_to_nat(15u);
v___x_2585_ = lean_unsigned_to_nat(336u);
v___x_2586_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2587_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2588_ = l_mkPanicMessageWithDecl(v___x_2587_, v___x_2586_, v___x_2585_, v___x_2584_, v___x_2583_);
return v___x_2588_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8(void){
_start:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2592_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__7));
v___x_2593_ = lean_unsigned_to_nat(14u);
v___x_2594_ = lean_unsigned_to_nat(22u);
v___x_2595_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__6));
v___x_2596_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__5));
v___x_2597_ = l_mkPanicMessageWithDecl(v___x_2596_, v___x_2595_, v___x_2594_, v___x_2593_, v___x_2592_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(uint8_t v___y_2598_, uint8_t v___x_2599_, lean_object* v_as_x27_2600_, lean_object* v_b_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
if (lean_obj_tag(v_as_x27_2600_) == 0)
{
lean_object* v___x_2605_; lean_object* v___x_2606_; 
v___x_2605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2605_, 0, v_b_2601_);
lean_ctor_set(v___x_2605_, 1, v___y_2603_);
v___x_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2605_);
return v___x_2606_;
}
else
{
lean_object* v_head_2607_; lean_object* v_tail_2608_; lean_object* v___y_2610_; lean_object* v___y_2614_; uint8_t v___y_2615_; lean_object* v___y_2650_; lean_object* v___x_2666_; 
v_head_2607_ = lean_ctor_get(v_as_x27_2600_, 0);
v_tail_2608_ = lean_ctor_get(v_as_x27_2600_, 1);
lean_inc(v_head_2607_);
lean_inc_ref(v___y_2602_);
v___x_2666_ = l_Lean_Environment_find_x3f(v___y_2602_, v_head_2607_, v___x_2599_);
if (lean_obj_tag(v___x_2666_) == 0)
{
lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2667_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8);
v___x_2668_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_2667_);
v___y_2650_ = v___x_2668_;
goto v___jp_2649_;
}
else
{
lean_object* v_val_2669_; 
v_val_2669_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_val_2669_);
lean_dec_ref_known(v___x_2666_, 1);
v___y_2650_ = v_val_2669_;
goto v___jp_2649_;
}
v___jp_2609_:
{
lean_object* v___x_2611_; 
v___x_2611_ = lean_array_push(v_b_2601_, v___y_2610_);
v_as_x27_2600_ = v_tail_2608_;
v_b_2601_ = v___x_2611_;
goto _start;
}
v___jp_2613_:
{
if (v___y_2615_ == 0)
{
uint8_t v_exportUnsafe_2616_; 
v_exportUnsafe_2616_ = lean_ctor_get_uint8(v___y_2603_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_2616_ == 0)
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
lean_dec_ref(v___y_2614_);
lean_dec_ref(v_b_2601_);
v___x_2617_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2);
v___x_2618_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v___x_2617_, v___y_2602_, v___y_2603_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2640_; 
v_a_2619_ = lean_ctor_get(v___x_2618_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2621_ = v___x_2618_;
v_isShared_2622_ = v_isSharedCheck_2640_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2618_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2640_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v_fst_2623_; 
v_fst_2623_ = lean_ctor_get(v_a_2619_, 0);
lean_inc(v_fst_2623_);
if (lean_obj_tag(v_fst_2623_) == 0)
{
lean_object* v_snd_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2635_; 
v_snd_2624_ = lean_ctor_get(v_a_2619_, 1);
v_isSharedCheck_2635_ = !lean_is_exclusive(v_a_2619_);
if (v_isSharedCheck_2635_ == 0)
{
lean_object* v_unused_2636_; 
v_unused_2636_ = lean_ctor_get(v_a_2619_, 0);
lean_dec(v_unused_2636_);
v___x_2626_ = v_a_2619_;
v_isShared_2627_ = v_isSharedCheck_2635_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_snd_2624_);
lean_dec(v_a_2619_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2635_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v_a_2628_; lean_object* v___x_2630_; 
v_a_2628_ = lean_ctor_get(v_fst_2623_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v_fst_2623_, 1);
if (v_isShared_2627_ == 0)
{
lean_ctor_set(v___x_2626_, 0, v_a_2628_);
v___x_2630_ = v___x_2626_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
lean_ctor_set(v_reuseFailAlloc_2634_, 1, v_snd_2624_);
v___x_2630_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
lean_object* v___x_2632_; 
if (v_isShared_2622_ == 0)
{
lean_ctor_set(v___x_2621_, 0, v___x_2630_);
v___x_2632_ = v___x_2621_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2630_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
else
{
lean_object* v_snd_2637_; lean_object* v_a_2638_; 
lean_del_object(v___x_2621_);
v_snd_2637_ = lean_ctor_get(v_a_2619_, 1);
lean_inc(v_snd_2637_);
lean_dec(v_a_2619_);
v_a_2638_ = lean_ctor_get(v_fst_2623_, 0);
lean_inc(v_a_2638_);
lean_dec_ref_known(v_fst_2623_, 1);
v_as_x27_2600_ = v_tail_2608_;
v_b_2601_ = v_a_2638_;
v___y_2603_ = v_snd_2637_;
goto _start;
}
}
}
else
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2648_; 
v_a_2641_ = lean_ctor_get(v___x_2618_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2643_ = v___x_2618_;
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v___x_2618_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_a_2641_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
else
{
v___y_2610_ = v___y_2614_;
goto v___jp_2609_;
}
}
else
{
v___y_2610_ = v___y_2614_;
goto v___jp_2609_;
}
}
v___jp_2649_:
{
if (lean_obj_tag(v___y_2650_) == 6)
{
lean_object* v_val_2651_; uint8_t v_isUnsafe_2652_; 
v_val_2651_ = lean_ctor_get(v___y_2650_, 0);
lean_inc_ref(v_val_2651_);
lean_dec_ref_known(v___y_2650_, 1);
v_isUnsafe_2652_ = lean_ctor_get_uint8(v_val_2651_, sizeof(void*)*5);
if (v_isUnsafe_2652_ == 0)
{
v___y_2614_ = v_val_2651_;
v___y_2615_ = v___y_2598_;
goto v___jp_2613_;
}
else
{
v___y_2614_ = v_val_2651_;
v___y_2615_ = v___x_2599_;
goto v___jp_2613_;
}
}
else
{
lean_object* v___x_2653_; lean_object* v___x_2654_; 
lean_dec_ref(v___y_2650_);
v___x_2653_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4);
v___x_2654_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_2653_, v___y_2602_, v___y_2603_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v_snd_2656_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2654_, 1);
v_snd_2656_ = lean_ctor_get(v_a_2655_, 1);
lean_inc(v_snd_2656_);
lean_dec(v_a_2655_);
v_as_x27_2600_ = v_tail_2608_;
v___y_2603_ = v_snd_2656_;
goto _start;
}
else
{
lean_object* v_a_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2665_; 
lean_dec_ref(v_b_2601_);
v_a_2658_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2660_ = v___x_2654_;
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_a_2658_);
lean_dec(v___x_2654_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
if (v_isShared_2661_ == 0)
{
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2658_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___boxed(lean_object* v___y_2670_, lean_object* v___x_2671_, lean_object* v_as_x27_2672_, lean_object* v_b_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
uint8_t v___y_172170__boxed_2677_; uint8_t v___x_172171__boxed_2678_; lean_object* v_res_2679_; 
v___y_172170__boxed_2677_ = lean_unbox(v___y_2670_);
v___x_172171__boxed_2678_ = lean_unbox(v___x_2671_);
v_res_2679_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_172170__boxed_2677_, v___x_172171__boxed_2678_, v_as_x27_2672_, v_b_2673_, v___y_2674_, v___y_2675_);
lean_dec_ref(v___y_2674_);
lean_dec(v_as_x27_2672_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11(lean_object* v_msg_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_){
_start:
{
lean_object* v___x_2684_; lean_object* v___f_2685_; lean_object* v___f_2686_; lean_object* v___f_2687_; lean_object* v___f_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___f_2701_; lean_object* v___x_164171__overap_2702_; lean_object* v___x_2703_; 
v___x_2684_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2685_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2685_, 0, v___x_2684_);
v___f_2686_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2686_, 0, v___x_2684_);
v___f_2687_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2687_, 0, v___x_2684_);
v___f_2688_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2688_, 0, v___x_2684_);
v___x_2689_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2689_, 0, lean_box(0));
lean_closure_set(v___x_2689_, 1, lean_box(0));
lean_closure_set(v___x_2689_, 2, v___x_2684_);
v___x_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2689_);
lean_ctor_set(v___x_2690_, 1, v___f_2685_);
v___x_2691_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2691_, 0, lean_box(0));
lean_closure_set(v___x_2691_, 1, lean_box(0));
lean_closure_set(v___x_2691_, 2, v___x_2684_);
v___x_2692_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2690_);
lean_ctor_set(v___x_2692_, 1, v___x_2691_);
lean_ctor_set(v___x_2692_, 2, v___f_2686_);
lean_ctor_set(v___x_2692_, 3, v___f_2687_);
lean_ctor_set(v___x_2692_, 4, v___f_2688_);
v___x_2693_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2693_, 0, lean_box(0));
lean_closure_set(v___x_2693_, 1, lean_box(0));
lean_closure_set(v___x_2693_, 2, v___x_2684_);
v___x_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2692_);
lean_ctor_set(v___x_2694_, 1, v___x_2693_);
v___x_2695_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0);
v___x_2696_ = lean_box(1);
v___x_2697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2695_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2695_);
lean_ctor_set(v___x_2698_, 1, v___x_2697_);
v___x_2699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2698_);
v___x_2700_ = l_instInhabitedOfMonad___redArg(v___x_2694_, v___x_2699_);
v___f_2701_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2701_, 0, v___x_2700_);
v___x_164171__overap_2702_ = lean_panic_fn_borrowed(v___f_2701_, v_msg_2680_);
lean_dec_ref(v___f_2701_);
lean_inc_ref(v___y_2681_);
v___x_2703_ = lean_apply_3(v___x_164171__overap_2702_, v___y_2681_, v___y_2682_, lean_box(0));
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11___boxed(lean_object* v_msg_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_){
_start:
{
lean_object* v_res_2708_; 
v_res_2708_ = l_panic___at___00LeanExport_dumpConstant_spec__11(v_msg_2704_, v___y_2705_, v___y_2706_);
lean_dec_ref(v___y_2705_);
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4(lean_object* v_msg_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_){
_start:
{
lean_object* v___x_2713_; lean_object* v___f_2714_; lean_object* v___f_2715_; lean_object* v___f_2716_; lean_object* v___f_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___f_2727_; lean_object* v___x_162755__overap_2728_; lean_object* v___x_2729_; 
v___x_2713_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2714_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2714_, 0, v___x_2713_);
v___f_2715_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2715_, 0, v___x_2713_);
v___f_2716_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2716_, 0, v___x_2713_);
v___f_2717_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2717_, 0, v___x_2713_);
v___x_2718_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2718_, 0, lean_box(0));
lean_closure_set(v___x_2718_, 1, lean_box(0));
lean_closure_set(v___x_2718_, 2, v___x_2713_);
v___x_2719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2718_);
lean_ctor_set(v___x_2719_, 1, v___f_2714_);
v___x_2720_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2720_, 0, lean_box(0));
lean_closure_set(v___x_2720_, 1, lean_box(0));
lean_closure_set(v___x_2720_, 2, v___x_2713_);
v___x_2721_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2719_);
lean_ctor_set(v___x_2721_, 1, v___x_2720_);
lean_ctor_set(v___x_2721_, 2, v___f_2715_);
lean_ctor_set(v___x_2721_, 3, v___f_2716_);
lean_ctor_set(v___x_2721_, 4, v___f_2717_);
v___x_2722_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2722_, 0, lean_box(0));
lean_closure_set(v___x_2722_, 1, lean_box(0));
lean_closure_set(v___x_2722_, 2, v___x_2713_);
v___x_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2721_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
v___x_2724_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0);
v___x_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2724_);
v___x_2726_ = l_instInhabitedOfMonad___redArg(v___x_2723_, v___x_2725_);
v___f_2727_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2727_, 0, v___x_2726_);
v___x_162755__overap_2728_ = lean_panic_fn_borrowed(v___f_2727_, v_msg_2709_);
lean_dec_ref(v___f_2727_);
lean_inc_ref(v___y_2710_);
v___x_2729_ = lean_apply_3(v___x_162755__overap_2728_, v___y_2710_, v___y_2711_, lean_box(0));
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4___boxed(lean_object* v_msg_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_){
_start:
{
lean_object* v_res_2734_; 
v_res_2734_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v_msg_2730_, v___y_2731_, v___y_2732_);
lean_dec_ref(v___y_2731_);
return v_res_2734_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1(void){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2736_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__0));
v___x_2737_ = lean_unsigned_to_nat(8u);
v___x_2738_ = lean_unsigned_to_nat(354u);
v___x_2739_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2740_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2741_ = l_mkPanicMessageWithDecl(v___x_2740_, v___x_2739_, v___x_2738_, v___x_2737_, v___x_2736_);
return v___x_2741_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3(void){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2743_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__2));
v___x_2744_ = lean_unsigned_to_nat(13u);
v___x_2745_ = lean_unsigned_to_nat(356u);
v___x_2746_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2747_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2748_ = l_mkPanicMessageWithDecl(v___x_2747_, v___x_2746_, v___x_2745_, v___x_2744_, v___x_2743_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(uint8_t v___x_2749_, lean_object* v_init_2750_, lean_object* v_x_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_){
_start:
{
lean_object* v_d_2756_; lean_object* v___y_2757_; 
if (lean_obj_tag(v_x_2751_) == 0)
{
lean_object* v_k_2761_; lean_object* v_l_2762_; lean_object* v_r_2763_; lean_object* v___x_2764_; 
v_k_2761_ = lean_ctor_get(v_x_2751_, 1);
lean_inc(v_k_2761_);
v_l_2762_ = lean_ctor_get(v_x_2751_, 3);
lean_inc(v_l_2762_);
v_r_2763_ = lean_ctor_get(v_x_2751_, 4);
lean_inc(v_r_2763_);
lean_dec_ref_known(v_x_2751_, 5);
v___x_2764_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(v___x_2749_, v_init_2750_, v_l_2762_, v___y_2752_, v___y_2753_);
if (lean_obj_tag(v___x_2764_) == 0)
{
lean_object* v_a_2765_; lean_object* v_fst_2766_; 
v_a_2765_ = lean_ctor_get(v___x_2764_, 0);
lean_inc(v_a_2765_);
lean_dec_ref_known(v___x_2764_, 1);
v_fst_2766_ = lean_ctor_get(v_a_2765_, 0);
lean_inc(v_fst_2766_);
if (lean_obj_tag(v_fst_2766_) == 0)
{
lean_object* v_snd_2767_; lean_object* v_a_2768_; 
lean_dec(v_r_2763_);
lean_dec(v_k_2761_);
v_snd_2767_ = lean_ctor_get(v_a_2765_, 1);
lean_inc(v_snd_2767_);
lean_dec(v_a_2765_);
v_a_2768_ = lean_ctor_get(v_fst_2766_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v_fst_2766_, 1);
v_d_2756_ = v_a_2768_;
v___y_2757_ = v_snd_2767_;
goto v___jp_2755_;
}
else
{
lean_object* v_snd_2769_; lean_object* v_a_2770_; lean_object* v___y_2772_; lean_object* v___y_2776_; lean_object* v___x_2802_; 
v_snd_2769_ = lean_ctor_get(v_a_2765_, 1);
lean_inc(v_snd_2769_);
lean_dec(v_a_2765_);
v_a_2770_ = lean_ctor_get(v_fst_2766_, 0);
lean_inc(v_a_2770_);
lean_dec_ref_known(v_fst_2766_, 1);
lean_inc_ref(v___y_2752_);
v___x_2802_ = l_Lean_Environment_find_x3f(v___y_2752_, v_k_2761_, v___x_2749_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2803_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8);
v___x_2804_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_2803_);
v___y_2776_ = v___x_2804_;
goto v___jp_2775_;
}
else
{
lean_object* v_val_2805_; 
v_val_2805_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_val_2805_);
lean_dec_ref_known(v___x_2802_, 1);
v___y_2776_ = v_val_2805_;
goto v___jp_2775_;
}
v___jp_2771_:
{
lean_object* v___x_2773_; 
v___x_2773_ = lean_array_push(v_a_2770_, v___y_2772_);
v_init_2750_ = v___x_2773_;
v_x_2751_ = v_r_2763_;
v___y_2753_ = v_snd_2769_;
goto _start;
}
v___jp_2775_:
{
if (lean_obj_tag(v___y_2776_) == 7)
{
lean_object* v_val_2777_; uint8_t v_isUnsafe_2778_; 
v_val_2777_ = lean_ctor_get(v___y_2776_, 0);
lean_inc_ref(v_val_2777_);
lean_dec_ref_known(v___y_2776_, 1);
v_isUnsafe_2778_ = lean_ctor_get_uint8(v_val_2777_, sizeof(void*)*7 + 1);
if (v_isUnsafe_2778_ == 0)
{
v___y_2772_ = v_val_2777_;
goto v___jp_2771_;
}
else
{
if (v___x_2749_ == 0)
{
uint8_t v_exportUnsafe_2779_; 
v_exportUnsafe_2779_ = lean_ctor_get_uint8(v_snd_2769_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_2779_ == 0)
{
lean_object* v___x_2780_; lean_object* v___x_2781_; 
lean_dec_ref(v_val_2777_);
lean_dec(v_a_2770_);
v___x_2780_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1);
v___x_2781_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v___x_2780_, v___y_2752_, v_snd_2769_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v_fst_2783_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v___x_2781_, 1);
v_fst_2783_ = lean_ctor_get(v_a_2782_, 0);
lean_inc(v_fst_2783_);
if (lean_obj_tag(v_fst_2783_) == 0)
{
lean_object* v_snd_2784_; lean_object* v_a_2785_; 
lean_dec(v_r_2763_);
v_snd_2784_ = lean_ctor_get(v_a_2782_, 1);
lean_inc(v_snd_2784_);
lean_dec(v_a_2782_);
v_a_2785_ = lean_ctor_get(v_fst_2783_, 0);
lean_inc(v_a_2785_);
lean_dec_ref_known(v_fst_2783_, 1);
v_d_2756_ = v_a_2785_;
v___y_2757_ = v_snd_2784_;
goto v___jp_2755_;
}
else
{
lean_object* v_snd_2786_; lean_object* v_a_2787_; 
v_snd_2786_ = lean_ctor_get(v_a_2782_, 1);
lean_inc(v_snd_2786_);
lean_dec(v_a_2782_);
v_a_2787_ = lean_ctor_get(v_fst_2783_, 0);
lean_inc(v_a_2787_);
lean_dec_ref_known(v_fst_2783_, 1);
v_init_2750_ = v_a_2787_;
v_x_2751_ = v_r_2763_;
v___y_2753_ = v_snd_2786_;
goto _start;
}
}
else
{
lean_dec(v_r_2763_);
return v___x_2781_;
}
}
else
{
v___y_2772_ = v_val_2777_;
goto v___jp_2771_;
}
}
else
{
v___y_2772_ = v_val_2777_;
goto v___jp_2771_;
}
}
}
else
{
lean_object* v___x_2789_; lean_object* v___x_2790_; 
lean_dec_ref(v___y_2776_);
v___x_2789_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3);
v___x_2790_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_2789_, v___y_2752_, v_snd_2769_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_a_2791_; lean_object* v_snd_2792_; 
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_a_2791_);
lean_dec_ref_known(v___x_2790_, 1);
v_snd_2792_ = lean_ctor_get(v_a_2791_, 1);
lean_inc(v_snd_2792_);
lean_dec(v_a_2791_);
v_init_2750_ = v_a_2770_;
v_x_2751_ = v_r_2763_;
v___y_2753_ = v_snd_2792_;
goto _start;
}
else
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2801_; 
lean_dec(v_a_2770_);
lean_dec(v_r_2763_);
v_a_2794_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2796_ = v___x_2790_;
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2790_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2799_; 
if (v_isShared_2797_ == 0)
{
v___x_2799_ = v___x_2796_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2794_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
}
}
}
}
else
{
lean_dec(v_r_2763_);
lean_dec(v_k_2761_);
return v___x_2764_;
}
}
else
{
lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2806_, 0, v_init_2750_);
v___x_2807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
lean_ctor_set(v___x_2807_, 1, v___y_2753_);
v___x_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
return v___x_2808_;
}
v___jp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v___x_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2758_, 0, v_d_2756_);
v___x_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2758_);
lean_ctor_set(v___x_2759_, 1, v___y_2757_);
v___x_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2759_);
return v___x_2760_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___boxed(lean_object* v___x_2809_, lean_object* v_init_2810_, lean_object* v_x_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_){
_start:
{
uint8_t v___x_172469__boxed_2815_; lean_object* v_res_2816_; 
v___x_172469__boxed_2815_ = lean_unbox(v___x_2809_);
v_res_2816_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(v___x_172469__boxed_2815_, v_init_2810_, v_x_2811_, v___y_2812_, v___y_2813_);
lean_dec_ref(v___y_2812_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(size_t v_sz_2817_, size_t v_i_2818_, lean_object* v_bs_2819_){
_start:
{
uint8_t v___x_2820_; 
v___x_2820_ = lean_usize_dec_lt(v_i_2818_, v_sz_2817_);
if (v___x_2820_ == 0)
{
lean_object* v___x_2821_; 
v___x_2821_ = l_unsafeCast___redArg(v_bs_2819_);
lean_dec_ref(v_bs_2819_);
return v___x_2821_;
}
else
{
lean_object* v_v_2822_; lean_object* v___x_2823_; lean_object* v_bs_x27_2824_; lean_object* v___x_2825_; size_t v___x_2826_; size_t v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v_v_2822_ = lean_array_uget(v_bs_2819_, v_i_2818_);
v___x_2823_ = lean_unsigned_to_nat(0u);
v_bs_x27_2824_ = lean_array_uset(v_bs_2819_, v_i_2818_, v___x_2823_);
v___x_2825_ = l_unsafeCast___redArg(v_v_2822_);
lean_dec(v_v_2822_);
v___x_2826_ = ((size_t)1ULL);
v___x_2827_ = lean_usize_add(v_i_2818_, v___x_2826_);
v___x_2828_ = l_unsafeCast___redArg(v___x_2825_);
lean_dec(v___x_2825_);
v___x_2829_ = lean_array_uset(v_bs_x27_2824_, v_i_2818_, v___x_2828_);
v_i_2818_ = v___x_2827_;
v_bs_2819_ = v___x_2829_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23___boxed(lean_object* v_sz_2831_, lean_object* v_i_2832_, lean_object* v_bs_2833_){
_start:
{
size_t v_sz_boxed_2834_; size_t v_i_boxed_2835_; lean_object* v_res_2836_; 
v_sz_boxed_2834_ = lean_unbox_usize(v_sz_2831_);
lean_dec(v_sz_2831_);
v_i_boxed_2835_ = lean_unbox_usize(v_i_2832_);
lean_dec(v_i_2832_);
v_res_2836_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(v_sz_boxed_2834_, v_i_boxed_2835_, v_bs_2833_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(lean_object* v_a_2837_){
_start:
{
size_t v_sz_2838_; size_t v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v_sz_2838_ = lean_array_size(v_a_2837_);
v___x_2839_ = ((size_t)0ULL);
v___x_2840_ = l_unsafeCast___redArg(v_a_2837_);
v___x_2841_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(v_sz_2838_, v___x_2839_, v___x_2840_);
v___x_2842_ = l_unsafeCast___redArg(v___x_2841_);
lean_dec_ref(v___x_2841_);
v___x_2843_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19___boxed(lean_object* v_a_2844_){
_start:
{
lean_object* v_res_2845_; 
v_res_2845_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_a_2844_);
lean_dec_ref(v_a_2844_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(lean_object* v_a_2846_){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = lean_array_mk(v_a_2846_);
v___x_2848_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v___x_2847_);
lean_dec_ref(v___x_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(lean_object* v_as_2849_, size_t v_sz_2850_, size_t v_i_2851_, lean_object* v_b_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_){
_start:
{
uint8_t v___x_2856_; 
v___x_2856_ = lean_usize_dec_lt(v_i_2851_, v_sz_2850_);
if (v___x_2856_ == 0)
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2857_, 0, v_b_2852_);
lean_ctor_set(v___x_2857_, 1, v___y_2854_);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
return v___x_2858_;
}
else
{
lean_object* v_visitedNames_2859_; lean_object* v_visitedLevels_2860_; lean_object* v_visitedExprs_2861_; lean_object* v_visitedConstants_2862_; lean_object* v_noMDataExprs_2863_; uint8_t v_exportMData_2864_; uint8_t v_exportUnsafe_2865_; uint8_t v_ignoreMissing_2866_; lean_object* v_recursorMap_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2886_; 
v_visitedNames_2859_ = lean_ctor_get(v___y_2854_, 0);
v_visitedLevels_2860_ = lean_ctor_get(v___y_2854_, 1);
v_visitedExprs_2861_ = lean_ctor_get(v___y_2854_, 2);
v_visitedConstants_2862_ = lean_ctor_get(v___y_2854_, 3);
v_noMDataExprs_2863_ = lean_ctor_get(v___y_2854_, 4);
v_exportMData_2864_ = lean_ctor_get_uint8(v___y_2854_, sizeof(void*)*6);
v_exportUnsafe_2865_ = lean_ctor_get_uint8(v___y_2854_, sizeof(void*)*6 + 1);
v_ignoreMissing_2866_ = lean_ctor_get_uint8(v___y_2854_, sizeof(void*)*6 + 2);
v_recursorMap_2867_ = lean_ctor_get(v___y_2854_, 5);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___y_2854_);
if (v_isSharedCheck_2886_ == 0)
{
v___x_2869_ = v___y_2854_;
v_isShared_2870_ = v_isSharedCheck_2886_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_recursorMap_2867_);
lean_inc(v_noMDataExprs_2863_);
lean_inc(v_visitedConstants_2862_);
lean_inc(v_visitedExprs_2861_);
lean_inc(v_visitedLevels_2860_);
lean_inc(v_visitedNames_2859_);
lean_dec(v___y_2854_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2886_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v_a_2871_; lean_object* v_toConstantVal_2872_; lean_object* v_name_2873_; lean_object* v_type_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2878_; 
v_a_2871_ = lean_array_uget_borrowed(v_as_2849_, v_i_2851_);
v_toConstantVal_2872_ = lean_ctor_get(v_a_2871_, 0);
v_name_2873_ = lean_ctor_get(v_toConstantVal_2872_, 0);
v_type_2874_ = lean_ctor_get(v_toConstantVal_2872_, 2);
v___x_2875_ = lean_box(0);
lean_inc(v_name_2873_);
v___x_2876_ = l_Lean_NameHashSet_insert(v_visitedConstants_2862_, v_name_2873_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 3, v___x_2876_);
v___x_2878_ = v___x_2869_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_visitedNames_2859_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v_visitedLevels_2860_);
lean_ctor_set(v_reuseFailAlloc_2885_, 2, v_visitedExprs_2861_);
lean_ctor_set(v_reuseFailAlloc_2885_, 3, v___x_2876_);
lean_ctor_set(v_reuseFailAlloc_2885_, 4, v_noMDataExprs_2863_);
lean_ctor_set(v_reuseFailAlloc_2885_, 5, v_recursorMap_2867_);
lean_ctor_set_uint8(v_reuseFailAlloc_2885_, sizeof(void*)*6, v_exportMData_2864_);
lean_ctor_set_uint8(v_reuseFailAlloc_2885_, sizeof(void*)*6 + 1, v_exportUnsafe_2865_);
lean_ctor_set_uint8(v_reuseFailAlloc_2885_, sizeof(void*)*6 + 2, v_ignoreMissing_2866_);
v___x_2878_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
lean_object* v___x_2879_; 
lean_inc_ref(v_type_2874_);
v___x_2879_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_2874_, v___y_2853_, v___x_2878_);
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_object* v_a_2880_; lean_object* v_snd_2881_; size_t v___x_2882_; size_t v___x_2883_; 
v_a_2880_ = lean_ctor_get(v___x_2879_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v___x_2879_, 1);
v_snd_2881_ = lean_ctor_get(v_a_2880_, 1);
lean_inc(v_snd_2881_);
lean_dec(v_a_2880_);
v___x_2882_ = ((size_t)1ULL);
v___x_2883_ = lean_usize_add(v_i_2851_, v___x_2882_);
v_i_2851_ = v___x_2883_;
v_b_2852_ = v___x_2875_;
v___y_2854_ = v_snd_2881_;
goto _start;
}
else
{
return v___x_2879_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(lean_object* v_as_x27_2887_, lean_object* v_b_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_){
_start:
{
if (lean_obj_tag(v_as_x27_2887_) == 0)
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2892_, 0, v_b_2888_);
lean_ctor_set(v___x_2892_, 1, v___y_2890_);
v___x_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2892_);
return v___x_2893_;
}
else
{
lean_object* v_head_2894_; lean_object* v_tail_2895_; lean_object* v_rhs_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v_head_2894_ = lean_ctor_get(v_as_x27_2887_, 0);
v_tail_2895_ = lean_ctor_get(v_as_x27_2887_, 1);
v_rhs_2896_ = lean_ctor_get(v_head_2894_, 2);
v___x_2897_ = lean_box(0);
lean_inc_ref(v_rhs_2896_);
v___x_2898_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_rhs_2896_, v___y_2889_, v___y_2890_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v_a_2899_; lean_object* v_snd_2900_; 
v_a_2899_ = lean_ctor_get(v___x_2898_, 0);
lean_inc(v_a_2899_);
lean_dec_ref_known(v___x_2898_, 1);
v_snd_2900_ = lean_ctor_get(v_a_2899_, 1);
lean_inc(v_snd_2900_);
lean_dec(v_a_2899_);
v_as_x27_2887_ = v_tail_2895_;
v_b_2888_ = v___x_2897_;
v___y_2890_ = v_snd_2900_;
goto _start;
}
else
{
return v___x_2898_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(lean_object* v_as_2902_, size_t v_sz_2903_, size_t v_i_2904_, lean_object* v_b_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_){
_start:
{
uint8_t v___x_2909_; 
v___x_2909_ = lean_usize_dec_lt(v_i_2904_, v_sz_2903_);
if (v___x_2909_ == 0)
{
lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2910_, 0, v_b_2905_);
lean_ctor_set(v___x_2910_, 1, v___y_2907_);
v___x_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2910_);
return v___x_2911_;
}
else
{
lean_object* v_a_2912_; lean_object* v_rules_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v_a_2912_ = lean_array_uget_borrowed(v_as_2902_, v_i_2904_);
v_rules_2913_ = lean_ctor_get(v_a_2912_, 6);
v___x_2914_ = lean_box(0);
v___x_2915_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(v_rules_2913_, v___x_2914_, v___y_2906_, v___y_2907_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v_a_2916_; lean_object* v_snd_2917_; size_t v___x_2918_; size_t v___x_2919_; 
v_a_2916_ = lean_ctor_get(v___x_2915_, 0);
lean_inc(v_a_2916_);
lean_dec_ref_known(v___x_2915_, 1);
v_snd_2917_ = lean_ctor_get(v_a_2916_, 1);
lean_inc(v_snd_2917_);
lean_dec(v_a_2916_);
v___x_2918_ = ((size_t)1ULL);
v___x_2919_ = lean_usize_add(v_i_2904_, v___x_2918_);
v_i_2904_ = v___x_2919_;
v_b_2905_ = v___x_2914_;
v___y_2907_ = v_snd_2917_;
goto _start;
}
else
{
return v___x_2915_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__0(void){
_start:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; 
v___x_2923_ = lean_box(0);
v___x_2924_ = lean_unsigned_to_nat(16u);
v___x_2925_ = lean_mk_array(v___x_2924_, v___x_2923_);
return v___x_2925_;
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__1(void){
_start:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2926_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__0, &l_LeanExport_dumpExpr___closed__0_once, _init_l_LeanExport_dumpExpr___closed__0);
v___x_2927_ = lean_unsigned_to_nat(0u);
v___x_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2927_);
lean_ctor_set(v___x_2928_, 1, v___x_2926_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(lean_object* v_a_2948_, lean_object* v_a_2949_){
_start:
{
lean_object* v_visitedConstants_2955_; lean_object* v_nat_2956_; uint8_t v___x_2957_; 
v_visitedConstants_2955_ = lean_ctor_get(v_a_2949_, 3);
v_nat_2956_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1));
v___x_2957_ = l_Lean_NameHashSet_contains(v_visitedConstants_2955_, v_nat_2956_);
if (v___x_2957_ == 0)
{
lean_object* v___x_2958_; 
lean_inc_ref(v_a_2948_);
v___x_2958_ = l_Lean_Environment_find_x3f(v_a_2948_, v_nat_2956_, v___x_2957_);
if (lean_obj_tag(v___x_2958_) == 0)
{
goto v___jp_2951_;
}
else
{
lean_object* v___x_2959_; 
lean_dec_ref_known(v___x_2958_, 1);
v___x_2959_ = l_LeanExport_dumpConstant(v_nat_2956_, v_a_2948_, v_a_2949_);
return v___x_2959_;
}
}
else
{
goto v___jp_2951_;
}
v___jp_2951_:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2952_ = lean_box(0);
v___x_2953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2952_);
lean_ctor_set(v___x_2953_, 1, v_a_2949_);
v___x_2954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2954_, 0, v___x_2953_);
return v___x_2954_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(lean_object* v_a_2971_, lean_object* v_a_2972_){
_start:
{
lean_object* v___y_2975_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v_visitedConstants_2982_; lean_object* v_visitedConstants_2987_; lean_object* v_charOfNat_2988_; uint8_t v___x_2989_; 
v_visitedConstants_2987_ = lean_ctor_get(v_a_2972_, 3);
v_charOfNat_2988_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5));
v___x_2989_ = l_Lean_NameHashSet_contains(v_visitedConstants_2987_, v_charOfNat_2988_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; 
lean_inc_ref(v_a_2971_);
v___x_2990_ = l_Lean_Environment_find_x3f(v_a_2971_, v_charOfNat_2988_, v___x_2989_);
if (lean_obj_tag(v___x_2990_) == 0)
{
lean_inc_ref(v_visitedConstants_2987_);
v___y_2980_ = v_a_2971_;
v___y_2981_ = v_a_2972_;
v_visitedConstants_2982_ = v_visitedConstants_2987_;
goto v___jp_2979_;
}
else
{
lean_object* v___x_2991_; 
lean_dec_ref_known(v___x_2990_, 1);
v___x_2991_ = l_LeanExport_dumpConstant(v_charOfNat_2988_, v_a_2971_, v_a_2972_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v_snd_2993_; lean_object* v_visitedConstants_2994_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2991_, 1);
v_snd_2993_ = lean_ctor_get(v_a_2992_, 1);
lean_inc(v_snd_2993_);
lean_dec(v_a_2992_);
v_visitedConstants_2994_ = lean_ctor_get(v_snd_2993_, 3);
lean_inc_ref(v_visitedConstants_2994_);
v___y_2980_ = v_a_2971_;
v___y_2981_ = v_snd_2993_;
v_visitedConstants_2982_ = v_visitedConstants_2994_;
goto v___jp_2979_;
}
else
{
return v___x_2991_;
}
}
}
else
{
lean_inc_ref(v_visitedConstants_2987_);
v___y_2980_ = v_a_2971_;
v___y_2981_ = v_a_2972_;
v_visitedConstants_2982_ = v_visitedConstants_2987_;
goto v___jp_2979_;
}
v___jp_2974_:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2976_ = lean_box(0);
v___x_2977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2976_);
lean_ctor_set(v___x_2977_, 1, v___y_2975_);
v___x_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2977_);
return v___x_2978_;
}
v___jp_2979_:
{
lean_object* v___x_2983_; uint8_t v___x_2984_; 
v___x_2983_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2));
v___x_2984_ = l_Lean_NameHashSet_contains(v_visitedConstants_2982_, v___x_2983_);
lean_dec_ref(v_visitedConstants_2982_);
if (v___x_2984_ == 0)
{
lean_object* v___x_2985_; 
lean_inc_ref(v___y_2980_);
v___x_2985_ = l_Lean_Environment_find_x3f(v___y_2980_, v___x_2983_, v___x_2984_);
if (lean_obj_tag(v___x_2985_) == 0)
{
v___y_2975_ = v___y_2981_;
goto v___jp_2974_;
}
else
{
lean_object* v___x_2986_; 
lean_dec_ref_known(v___x_2985_, 1);
v___x_2986_ = l_LeanExport_dumpConstant(v___x_2983_, v___y_2980_, v___y_2981_);
return v___x_2986_;
}
}
else
{
v___y_2975_ = v___y_2981_;
goto v___jp_2974_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExprAux___closed__26(void){
_start:
{
lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; 
v___x_3005_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__25));
v___x_3006_ = lean_unsigned_to_nat(29u);
v___x_3007_ = lean_unsigned_to_nat(177u);
v___x_3008_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__24));
v___x_3009_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_3010_ = l_mkPanicMessageWithDecl(v___x_3009_, v___x_3008_, v___x_3007_, v___x_3006_, v___x_3005_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux(lean_object* v_e_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_){
_start:
{
lean_object* v_visitedNames_3015_; lean_object* v_visitedLevels_3016_; lean_object* v_visitedExprs_3017_; lean_object* v_visitedConstants_3018_; lean_object* v_noMDataExprs_3019_; uint8_t v_exportMData_3020_; uint8_t v_exportUnsafe_3021_; uint8_t v_ignoreMissing_3022_; lean_object* v_recursorMap_3023_; lean_object* v___x_3024_; 
v_visitedNames_3015_ = lean_ctor_get(v_a_3013_, 0);
v_visitedLevels_3016_ = lean_ctor_get(v_a_3013_, 1);
v_visitedExprs_3017_ = lean_ctor_get(v_a_3013_, 2);
v_visitedConstants_3018_ = lean_ctor_get(v_a_3013_, 3);
v_noMDataExprs_3019_ = lean_ctor_get(v_a_3013_, 4);
v_exportMData_3020_ = lean_ctor_get_uint8(v_a_3013_, sizeof(void*)*6);
v_exportUnsafe_3021_ = lean_ctor_get_uint8(v_a_3013_, sizeof(void*)*6 + 1);
v_ignoreMissing_3022_ = lean_ctor_get_uint8(v_a_3013_, sizeof(void*)*6 + 2);
v_recursorMap_3023_ = lean_ctor_get(v_a_3013_, 5);
v___x_3024_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_visitedExprs_3017_, v_e_3011_);
if (lean_obj_tag(v___x_3024_) == 1)
{
lean_object* v_val_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3033_; 
lean_dec_ref(v_e_3011_);
v_val_3025_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3027_ = v___x_3024_;
v_isShared_3028_ = v_isSharedCheck_3033_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_val_3025_);
lean_dec(v___x_3024_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3033_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3029_; lean_object* v___x_3031_; 
v___x_3029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3029_, 0, v_val_3025_);
lean_ctor_set(v___x_3029_, 1, v_a_3013_);
if (v_isShared_3028_ == 0)
{
lean_ctor_set_tag(v___x_3027_, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3029_);
v___x_3031_ = v___x_3027_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v___x_3029_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
else
{
lean_object* v___x_3034_; lean_object* v_fst_3036_; lean_object* v_visitedNames_3037_; lean_object* v_visitedLevels_3038_; lean_object* v_visitedExprs_3039_; lean_object* v_visitedConstants_3040_; lean_object* v_noMDataExprs_3041_; uint8_t v_exportMData_3042_; uint8_t v_exportUnsafe_3043_; uint8_t v_ignoreMissing_3044_; lean_object* v_recursorMap_3045_; lean_object* v_fst_3072_; lean_object* v_snd_3073_; 
lean_dec(v___x_3024_);
v___x_3034_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__0));
switch(lean_obj_tag(v_e_3011_))
{
case 0:
{
lean_object* v_deBruijnIndex_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
lean_inc(v_recursorMap_3023_);
lean_inc_ref(v_noMDataExprs_3019_);
lean_inc_ref(v_visitedConstants_3018_);
lean_inc_ref(v_visitedExprs_3017_);
lean_inc_ref(v_visitedLevels_3016_);
lean_inc_ref(v_visitedNames_3015_);
lean_dec_ref(v_a_3013_);
v_deBruijnIndex_3083_ = lean_ctor_get(v_e_3011_, 0);
v___x_3084_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__1));
lean_inc(v_deBruijnIndex_3083_);
v___x_3085_ = l_Lean_JsonNumber_fromNat(v_deBruijnIndex_3083_);
v___x_3086_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3085_);
v___x_3087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3084_);
lean_ctor_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = lean_box(0);
v___x_3089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3087_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
v___x_3090_ = l_Lean_Json_mkObj(v___x_3089_);
lean_dec_ref_known(v___x_3089_, 2);
v_fst_3036_ = v___x_3090_;
v_visitedNames_3037_ = v_visitedNames_3015_;
v_visitedLevels_3038_ = v_visitedLevels_3016_;
v_visitedExprs_3039_ = v_visitedExprs_3017_;
v_visitedConstants_3040_ = v_visitedConstants_3018_;
v_noMDataExprs_3041_ = v_noMDataExprs_3019_;
v_exportMData_3042_ = v_exportMData_3020_;
v_exportUnsafe_3043_ = v_exportUnsafe_3021_;
v_ignoreMissing_3044_ = v_ignoreMissing_3022_;
v_recursorMap_3045_ = v_recursorMap_3023_;
goto v___jp_3035_;
}
case 3:
{
lean_object* v_u_3091_; lean_object* v___x_3092_; 
v_u_3091_ = lean_ctor_get(v_e_3011_, 0);
lean_inc(v_u_3091_);
v___x_3092_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_u_3091_, v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3114_; 
v_a_3093_ = lean_ctor_get(v___x_3092_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3095_ = v___x_3092_;
v_isShared_3096_ = v_isSharedCheck_3114_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v___x_3092_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3114_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v_fst_3097_; lean_object* v_snd_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3113_; 
v_fst_3097_ = lean_ctor_get(v_a_3093_, 0);
v_snd_3098_ = lean_ctor_get(v_a_3093_, 1);
v_isSharedCheck_3113_ = !lean_is_exclusive(v_a_3093_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3100_ = v_a_3093_;
v_isShared_3101_ = v_isSharedCheck_3113_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_snd_3098_);
lean_inc(v_fst_3097_);
lean_dec(v_a_3093_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3113_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3105_; 
v___x_3102_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__2));
v___x_3103_ = l_Lean_JsonNumber_fromNat(v_fst_3097_);
if (v_isShared_3096_ == 0)
{
lean_ctor_set_tag(v___x_3095_, 2);
lean_ctor_set(v___x_3095_, 0, v___x_3103_);
v___x_3105_ = v___x_3095_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v___x_3103_);
v___x_3105_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
lean_object* v___x_3107_; 
if (v_isShared_3101_ == 0)
{
lean_ctor_set(v___x_3100_, 1, v___x_3105_);
lean_ctor_set(v___x_3100_, 0, v___x_3102_);
v___x_3107_ = v___x_3100_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v___x_3102_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v___x_3105_);
v___x_3107_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3108_ = lean_box(0);
v___x_3109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3107_);
lean_ctor_set(v___x_3109_, 1, v___x_3108_);
v___x_3110_ = l_Lean_Json_mkObj(v___x_3109_);
lean_dec_ref_known(v___x_3109_, 2);
v_fst_3072_ = v___x_3110_;
v_snd_3073_ = v_snd_3098_;
goto v___jp_3071_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3011_, 1);
return v___x_3092_;
}
}
case 4:
{
lean_object* v_declName_3115_; lean_object* v_us_3116_; lean_object* v___x_3117_; 
v_declName_3115_ = lean_ctor_get(v_e_3011_, 0);
v_us_3116_ = lean_ctor_get(v_e_3011_, 1);
lean_inc(v_declName_3115_);
v___x_3117_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3115_, v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3165_; 
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3117_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3120_ = v___x_3117_;
v_isShared_3121_ = v_isSharedCheck_3165_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_dec(v___x_3117_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3165_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v_fst_3122_; lean_object* v_snd_3123_; lean_object* v___x_3125_; uint8_t v_isShared_3126_; uint8_t v_isSharedCheck_3164_; 
v_fst_3122_ = lean_ctor_get(v_a_3118_, 0);
v_snd_3123_ = lean_ctor_get(v_a_3118_, 1);
v_isSharedCheck_3164_ = !lean_is_exclusive(v_a_3118_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3125_ = v_a_3118_;
v_isShared_3126_ = v_isSharedCheck_3164_;
goto v_resetjp_3124_;
}
else
{
lean_inc(v_snd_3123_);
lean_inc(v_fst_3122_);
lean_dec(v_a_3118_);
v___x_3125_ = lean_box(0);
v_isShared_3126_ = v_isSharedCheck_3164_;
goto v_resetjp_3124_;
}
v_resetjp_3124_:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3127_ = lean_box(0);
lean_inc(v_us_3116_);
v___x_3128_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_us_3116_, v___x_3127_, v_a_3012_, v_snd_3123_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v_a_3129_; lean_object* v_fst_3130_; lean_object* v_snd_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3155_; 
v_a_3129_ = lean_ctor_get(v___x_3128_, 0);
lean_inc(v_a_3129_);
lean_dec_ref_known(v___x_3128_, 1);
v_fst_3130_ = lean_ctor_get(v_a_3129_, 0);
v_snd_3131_ = lean_ctor_get(v_a_3129_, 1);
v_isSharedCheck_3155_ = !lean_is_exclusive(v_a_3129_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3133_ = v_a_3129_;
v_isShared_3134_ = v_isSharedCheck_3155_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_snd_3131_);
lean_inc(v_fst_3130_);
lean_dec(v_a_3129_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3155_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3139_; 
v___x_3135_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__3));
v___x_3136_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3137_ = l_Lean_JsonNumber_fromNat(v_fst_3122_);
if (v_isShared_3121_ == 0)
{
lean_ctor_set_tag(v___x_3120_, 2);
lean_ctor_set(v___x_3120_, 0, v___x_3137_);
v___x_3139_ = v___x_3120_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v___x_3137_);
v___x_3139_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
lean_object* v___x_3141_; 
if (v_isShared_3134_ == 0)
{
lean_ctor_set(v___x_3133_, 1, v___x_3139_);
lean_ctor_set(v___x_3133_, 0, v___x_3136_);
v___x_3141_ = v___x_3133_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v___x_3136_);
lean_ctor_set(v_reuseFailAlloc_3153_, 1, v___x_3139_);
v___x_3141_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3145_; 
v___x_3142_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__4));
v___x_3143_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_3130_);
if (v_isShared_3126_ == 0)
{
lean_ctor_set(v___x_3125_, 1, v___x_3143_);
lean_ctor_set(v___x_3125_, 0, v___x_3142_);
v___x_3145_ = v___x_3125_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v___x_3142_);
lean_ctor_set(v_reuseFailAlloc_3152_, 1, v___x_3143_);
v___x_3145_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3145_);
lean_ctor_set(v___x_3146_, 1, v___x_3127_);
v___x_3147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3141_);
lean_ctor_set(v___x_3147_, 1, v___x_3146_);
v___x_3148_ = l_Lean_Json_mkObj(v___x_3147_);
lean_dec_ref_known(v___x_3147_, 2);
v___x_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3135_);
lean_ctor_set(v___x_3149_, 1, v___x_3148_);
v___x_3150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3149_);
lean_ctor_set(v___x_3150_, 1, v___x_3127_);
v___x_3151_ = l_Lean_Json_mkObj(v___x_3150_);
lean_dec_ref_known(v___x_3150_, 2);
v_fst_3072_ = v___x_3151_;
v_snd_3073_ = v_snd_3131_;
goto v___jp_3071_;
}
}
}
}
}
else
{
lean_object* v_a_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3163_; 
lean_del_object(v___x_3125_);
lean_dec(v_fst_3122_);
lean_del_object(v___x_3120_);
lean_dec_ref_known(v_e_3011_, 2);
v_a_3156_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3163_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3163_ == 0)
{
v___x_3158_ = v___x_3128_;
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_a_3156_);
lean_dec(v___x_3128_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
lean_object* v___x_3161_; 
if (v_isShared_3159_ == 0)
{
v___x_3161_ = v___x_3158_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v_a_3156_);
v___x_3161_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
return v___x_3161_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3011_, 2);
return v___x_3117_;
}
}
case 5:
{
lean_object* v_fn_3166_; lean_object* v_arg_3167_; lean_object* v___x_3168_; 
v_fn_3166_ = lean_ctor_get(v_e_3011_, 0);
v_arg_3167_ = lean_ctor_get(v_e_3011_, 1);
lean_inc_ref(v_fn_3166_);
v___x_3168_ = l_LeanExport_dumpExprAux(v_fn_3166_, v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3215_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3215_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3215_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v_fst_3173_; lean_object* v_snd_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3214_; 
v_fst_3173_ = lean_ctor_get(v_a_3169_, 0);
v_snd_3174_ = lean_ctor_get(v_a_3169_, 1);
v_isSharedCheck_3214_ = !lean_is_exclusive(v_a_3169_);
if (v_isSharedCheck_3214_ == 0)
{
v___x_3176_ = v_a_3169_;
v_isShared_3177_ = v_isSharedCheck_3214_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_snd_3174_);
lean_inc(v_fst_3173_);
lean_dec(v_a_3169_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3214_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3178_; 
lean_inc_ref(v_arg_3167_);
v___x_3178_ = l_LeanExport_dumpExprAux(v_arg_3167_, v_a_3012_, v_snd_3174_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3213_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
v_isSharedCheck_3213_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3213_ == 0)
{
v___x_3181_ = v___x_3178_;
v_isShared_3182_ = v_isSharedCheck_3213_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_a_3179_);
lean_dec(v___x_3178_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3213_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v_fst_3183_; lean_object* v_snd_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3212_; 
v_fst_3183_ = lean_ctor_get(v_a_3179_, 0);
v_snd_3184_ = lean_ctor_get(v_a_3179_, 1);
v_isSharedCheck_3212_ = !lean_is_exclusive(v_a_3179_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3186_ = v_a_3179_;
v_isShared_3187_ = v_isSharedCheck_3212_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_snd_3184_);
lean_inc(v_fst_3183_);
lean_dec(v_a_3179_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3212_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3192_; 
v___x_3188_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__5));
v___x_3189_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__6));
v___x_3190_ = l_Lean_JsonNumber_fromNat(v_fst_3173_);
if (v_isShared_3182_ == 0)
{
lean_ctor_set_tag(v___x_3181_, 2);
lean_ctor_set(v___x_3181_, 0, v___x_3190_);
v___x_3192_ = v___x_3181_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3190_);
v___x_3192_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
lean_object* v___x_3194_; 
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 1, v___x_3192_);
lean_ctor_set(v___x_3186_, 0, v___x_3189_);
v___x_3194_ = v___x_3186_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v___x_3189_);
lean_ctor_set(v_reuseFailAlloc_3210_, 1, v___x_3192_);
v___x_3194_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3198_; 
v___x_3195_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__7));
v___x_3196_ = l_Lean_JsonNumber_fromNat(v_fst_3183_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set_tag(v___x_3171_, 2);
lean_ctor_set(v___x_3171_, 0, v___x_3196_);
v___x_3198_ = v___x_3171_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v___x_3196_);
v___x_3198_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
lean_object* v___x_3200_; 
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 1, v___x_3198_);
lean_ctor_set(v___x_3176_, 0, v___x_3195_);
v___x_3200_ = v___x_3176_;
goto v_reusejp_3199_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v___x_3195_);
lean_ctor_set(v_reuseFailAlloc_3208_, 1, v___x_3198_);
v___x_3200_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3199_;
}
v_reusejp_3199_:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3201_ = lean_box(0);
v___x_3202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3200_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
v___x_3203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3194_);
lean_ctor_set(v___x_3203_, 1, v___x_3202_);
v___x_3204_ = l_Lean_Json_mkObj(v___x_3203_);
lean_dec_ref_known(v___x_3203_, 2);
v___x_3205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3188_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
v___x_3206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3205_);
lean_ctor_set(v___x_3206_, 1, v___x_3201_);
v___x_3207_ = l_Lean_Json_mkObj(v___x_3206_);
lean_dec_ref_known(v___x_3206_, 2);
v_fst_3072_ = v___x_3207_;
v_snd_3073_ = v_snd_3184_;
goto v___jp_3071_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3176_);
lean_dec(v_fst_3173_);
lean_del_object(v___x_3171_);
lean_dec_ref_known(v_e_3011_, 2);
return v___x_3178_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3011_, 2);
return v___x_3168_;
}
}
case 6:
{
lean_object* v_binderName_3216_; lean_object* v_binderType_3217_; lean_object* v_body_3218_; uint8_t v_binderInfo_3219_; lean_object* v___x_3220_; 
v_binderName_3216_ = lean_ctor_get(v_e_3011_, 0);
v_binderType_3217_ = lean_ctor_get(v_e_3011_, 1);
v_body_3218_ = lean_ctor_get(v_e_3011_, 2);
v_binderInfo_3219_ = lean_ctor_get_uint8(v_e_3011_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3216_);
v___x_3220_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3216_, v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3220_) == 0)
{
lean_object* v_a_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3292_; 
v_a_3221_ = lean_ctor_get(v___x_3220_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3220_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3223_ = v___x_3220_;
v_isShared_3224_ = v_isSharedCheck_3292_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_a_3221_);
lean_dec(v___x_3220_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3292_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v_fst_3225_; lean_object* v_snd_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3291_; 
v_fst_3225_ = lean_ctor_get(v_a_3221_, 0);
v_snd_3226_ = lean_ctor_get(v_a_3221_, 1);
v_isSharedCheck_3291_ = !lean_is_exclusive(v_a_3221_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3228_ = v_a_3221_;
v_isShared_3229_ = v_isSharedCheck_3291_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_snd_3226_);
lean_inc(v_fst_3225_);
lean_dec(v_a_3221_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3291_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3230_; 
lean_inc_ref(v_binderType_3217_);
v___x_3230_ = l_LeanExport_dumpExprAux(v_binderType_3217_, v_a_3012_, v_snd_3226_);
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_object* v_a_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3290_; 
v_a_3231_ = lean_ctor_get(v___x_3230_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3230_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3233_ = v___x_3230_;
v_isShared_3234_ = v_isSharedCheck_3290_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_a_3231_);
lean_dec(v___x_3230_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3290_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v_fst_3235_; lean_object* v_snd_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3289_; 
v_fst_3235_ = lean_ctor_get(v_a_3231_, 0);
v_snd_3236_ = lean_ctor_get(v_a_3231_, 1);
v_isSharedCheck_3289_ = !lean_is_exclusive(v_a_3231_);
if (v_isSharedCheck_3289_ == 0)
{
v___x_3238_ = v_a_3231_;
v_isShared_3239_ = v_isSharedCheck_3289_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_snd_3236_);
lean_inc(v_fst_3235_);
lean_dec(v_a_3231_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3289_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3240_; 
lean_inc_ref(v_body_3218_);
v___x_3240_ = l_LeanExport_dumpExprAux(v_body_3218_, v_a_3012_, v_snd_3236_);
if (lean_obj_tag(v___x_3240_) == 0)
{
lean_object* v_a_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3288_; 
v_a_3241_ = lean_ctor_get(v___x_3240_, 0);
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3240_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3243_ = v___x_3240_;
v_isShared_3244_ = v_isSharedCheck_3288_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_a_3241_);
lean_dec(v___x_3240_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3288_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v_fst_3245_; lean_object* v_snd_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3287_; 
v_fst_3245_ = lean_ctor_get(v_a_3241_, 0);
v_snd_3246_ = lean_ctor_get(v_a_3241_, 1);
v_isSharedCheck_3287_ = !lean_is_exclusive(v_a_3241_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3248_ = v_a_3241_;
v_isShared_3249_ = v_isSharedCheck_3287_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_snd_3246_);
lean_inc(v_fst_3245_);
lean_dec(v_a_3241_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3287_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3254_; 
v___x_3250_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__8));
v___x_3251_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3252_ = l_Lean_JsonNumber_fromNat(v_fst_3225_);
if (v_isShared_3244_ == 0)
{
lean_ctor_set_tag(v___x_3243_, 2);
lean_ctor_set(v___x_3243_, 0, v___x_3252_);
v___x_3254_ = v___x_3243_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3252_);
v___x_3254_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
lean_object* v___x_3256_; 
if (v_isShared_3249_ == 0)
{
lean_ctor_set(v___x_3248_, 1, v___x_3254_);
lean_ctor_set(v___x_3248_, 0, v___x_3251_);
v___x_3256_ = v___x_3248_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v___x_3251_);
lean_ctor_set(v_reuseFailAlloc_3285_, 1, v___x_3254_);
v___x_3256_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3260_; 
v___x_3257_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3258_ = l_Lean_JsonNumber_fromNat(v_fst_3235_);
if (v_isShared_3234_ == 0)
{
lean_ctor_set_tag(v___x_3233_, 2);
lean_ctor_set(v___x_3233_, 0, v___x_3258_);
v___x_3260_ = v___x_3233_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v___x_3258_);
v___x_3260_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
lean_object* v___x_3262_; 
if (v_isShared_3239_ == 0)
{
lean_ctor_set(v___x_3238_, 1, v___x_3260_);
lean_ctor_set(v___x_3238_, 0, v___x_3257_);
v___x_3262_ = v___x_3238_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v___x_3257_);
lean_ctor_set(v_reuseFailAlloc_3283_, 1, v___x_3260_);
v___x_3262_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3266_; 
v___x_3263_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3264_ = l_Lean_JsonNumber_fromNat(v_fst_3245_);
if (v_isShared_3224_ == 0)
{
lean_ctor_set_tag(v___x_3223_, 2);
lean_ctor_set(v___x_3223_, 0, v___x_3264_);
v___x_3266_ = v___x_3223_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v___x_3264_);
v___x_3266_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
lean_object* v___x_3268_; 
if (v_isShared_3229_ == 0)
{
lean_ctor_set(v___x_3228_, 1, v___x_3266_);
lean_ctor_set(v___x_3228_, 0, v___x_3263_);
v___x_3268_ = v___x_3228_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3263_);
lean_ctor_set(v_reuseFailAlloc_3281_, 1, v___x_3266_);
v___x_3268_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3269_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3270_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3219_);
v___x_3271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3269_);
lean_ctor_set(v___x_3271_, 1, v___x_3270_);
v___x_3272_ = lean_box(0);
v___x_3273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3271_);
lean_ctor_set(v___x_3273_, 1, v___x_3272_);
v___x_3274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3268_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
v___x_3275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3262_);
lean_ctor_set(v___x_3275_, 1, v___x_3274_);
v___x_3276_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3256_);
lean_ctor_set(v___x_3276_, 1, v___x_3275_);
v___x_3277_ = l_Lean_Json_mkObj(v___x_3276_);
lean_dec_ref_known(v___x_3276_, 2);
v___x_3278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3250_);
lean_ctor_set(v___x_3278_, 1, v___x_3277_);
v___x_3279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
lean_ctor_set(v___x_3279_, 1, v___x_3272_);
v___x_3280_ = l_Lean_Json_mkObj(v___x_3279_);
lean_dec_ref_known(v___x_3279_, 2);
v_fst_3072_ = v___x_3280_;
v_snd_3073_ = v_snd_3246_;
goto v___jp_3071_;
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
lean_del_object(v___x_3238_);
lean_dec(v_fst_3235_);
lean_del_object(v___x_3233_);
lean_del_object(v___x_3228_);
lean_dec(v_fst_3225_);
lean_del_object(v___x_3223_);
lean_dec_ref_known(v_e_3011_, 3);
return v___x_3240_;
}
}
}
}
else
{
lean_del_object(v___x_3228_);
lean_dec(v_fst_3225_);
lean_del_object(v___x_3223_);
lean_dec_ref_known(v_e_3011_, 3);
return v___x_3230_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3011_, 3);
return v___x_3220_;
}
}
case 7:
{
lean_object* v_binderName_3293_; lean_object* v_binderType_3294_; lean_object* v_body_3295_; uint8_t v_binderInfo_3296_; lean_object* v___x_3297_; 
v_binderName_3293_ = lean_ctor_get(v_e_3011_, 0);
v_binderType_3294_ = lean_ctor_get(v_e_3011_, 1);
v_body_3295_ = lean_ctor_get(v_e_3011_, 2);
v_binderInfo_3296_ = lean_ctor_get_uint8(v_e_3011_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3293_);
v___x_3297_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3293_, v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3369_; 
v_a_3298_ = lean_ctor_get(v___x_3297_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3297_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3300_ = v___x_3297_;
v_isShared_3301_ = v_isSharedCheck_3369_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v___x_3297_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3369_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v_fst_3302_; lean_object* v_snd_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3368_; 
v_fst_3302_ = lean_ctor_get(v_a_3298_, 0);
v_snd_3303_ = lean_ctor_get(v_a_3298_, 1);
v_isSharedCheck_3368_ = !lean_is_exclusive(v_a_3298_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3305_ = v_a_3298_;
v_isShared_3306_ = v_isSharedCheck_3368_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_snd_3303_);
lean_inc(v_fst_3302_);
lean_dec(v_a_3298_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3368_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v___x_3307_; 
lean_inc_ref(v_binderType_3294_);
v___x_3307_ = l_LeanExport_dumpExprAux(v_binderType_3294_, v_a_3012_, v_snd_3303_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v_a_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3367_; 
v_a_3308_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3310_ = v___x_3307_;
v_isShared_3311_ = v_isSharedCheck_3367_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_a_3308_);
lean_dec(v___x_3307_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3367_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v_fst_3312_; lean_object* v_snd_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3366_; 
v_fst_3312_ = lean_ctor_get(v_a_3308_, 0);
v_snd_3313_ = lean_ctor_get(v_a_3308_, 1);
v_isSharedCheck_3366_ = !lean_is_exclusive(v_a_3308_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3315_ = v_a_3308_;
v_isShared_3316_ = v_isSharedCheck_3366_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_snd_3313_);
lean_inc(v_fst_3312_);
lean_dec(v_a_3308_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3366_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v___x_3317_; 
lean_inc_ref(v_body_3295_);
v___x_3317_ = l_LeanExport_dumpExprAux(v_body_3295_, v_a_3012_, v_snd_3313_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3365_; 
v_a_3318_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3365_ == 0)
{
v___x_3320_ = v___x_3317_;
v_isShared_3321_ = v_isSharedCheck_3365_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3317_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3365_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v_fst_3322_; lean_object* v_snd_3323_; lean_object* v___x_3325_; uint8_t v_isShared_3326_; uint8_t v_isSharedCheck_3364_; 
v_fst_3322_ = lean_ctor_get(v_a_3318_, 0);
v_snd_3323_ = lean_ctor_get(v_a_3318_, 1);
v_isSharedCheck_3364_ = !lean_is_exclusive(v_a_3318_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3325_ = v_a_3318_;
v_isShared_3326_ = v_isSharedCheck_3364_;
goto v_resetjp_3324_;
}
else
{
lean_inc(v_snd_3323_);
lean_inc(v_fst_3322_);
lean_dec(v_a_3318_);
v___x_3325_ = lean_box(0);
v_isShared_3326_ = v_isSharedCheck_3364_;
goto v_resetjp_3324_;
}
v_resetjp_3324_:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3331_; 
v___x_3327_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__11));
v___x_3328_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3329_ = l_Lean_JsonNumber_fromNat(v_fst_3302_);
if (v_isShared_3321_ == 0)
{
lean_ctor_set_tag(v___x_3320_, 2);
lean_ctor_set(v___x_3320_, 0, v___x_3329_);
v___x_3331_ = v___x_3320_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v___x_3329_);
v___x_3331_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
lean_object* v___x_3333_; 
if (v_isShared_3326_ == 0)
{
lean_ctor_set(v___x_3325_, 1, v___x_3331_);
lean_ctor_set(v___x_3325_, 0, v___x_3328_);
v___x_3333_ = v___x_3325_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v___x_3328_);
lean_ctor_set(v_reuseFailAlloc_3362_, 1, v___x_3331_);
v___x_3333_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3337_; 
v___x_3334_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3335_ = l_Lean_JsonNumber_fromNat(v_fst_3312_);
if (v_isShared_3311_ == 0)
{
lean_ctor_set_tag(v___x_3310_, 2);
lean_ctor_set(v___x_3310_, 0, v___x_3335_);
v___x_3337_ = v___x_3310_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v___x_3335_);
v___x_3337_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
lean_object* v___x_3339_; 
if (v_isShared_3316_ == 0)
{
lean_ctor_set(v___x_3315_, 1, v___x_3337_);
lean_ctor_set(v___x_3315_, 0, v___x_3334_);
v___x_3339_ = v___x_3315_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v___x_3334_);
lean_ctor_set(v_reuseFailAlloc_3360_, 1, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3343_; 
v___x_3340_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3341_ = l_Lean_JsonNumber_fromNat(v_fst_3322_);
if (v_isShared_3301_ == 0)
{
lean_ctor_set_tag(v___x_3300_, 2);
lean_ctor_set(v___x_3300_, 0, v___x_3341_);
v___x_3343_ = v___x_3300_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v___x_3341_);
v___x_3343_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
lean_object* v___x_3345_; 
if (v_isShared_3306_ == 0)
{
lean_ctor_set(v___x_3305_, 1, v___x_3343_);
lean_ctor_set(v___x_3305_, 0, v___x_3340_);
v___x_3345_ = v___x_3305_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v___x_3340_);
lean_ctor_set(v_reuseFailAlloc_3358_, 1, v___x_3343_);
v___x_3345_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3346_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3347_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3296_);
v___x_3348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3346_);
lean_ctor_set(v___x_3348_, 1, v___x_3347_);
v___x_3349_ = lean_box(0);
v___x_3350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3348_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
v___x_3351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3345_);
lean_ctor_set(v___x_3351_, 1, v___x_3350_);
v___x_3352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3339_);
lean_ctor_set(v___x_3352_, 1, v___x_3351_);
v___x_3353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3333_);
lean_ctor_set(v___x_3353_, 1, v___x_3352_);
v___x_3354_ = l_Lean_Json_mkObj(v___x_3353_);
lean_dec_ref_known(v___x_3353_, 2);
v___x_3355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3327_);
lean_ctor_set(v___x_3355_, 1, v___x_3354_);
v___x_3356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3355_);
lean_ctor_set(v___x_3356_, 1, v___x_3349_);
v___x_3357_ = l_Lean_Json_mkObj(v___x_3356_);
lean_dec_ref_known(v___x_3356_, 2);
v_fst_3072_ = v___x_3357_;
v_snd_3073_ = v_snd_3323_;
goto v___jp_3071_;
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
lean_del_object(v___x_3315_);
lean_dec(v_fst_3312_);
lean_del_object(v___x_3310_);
lean_del_object(v___x_3305_);
lean_dec(v_fst_3302_);
lean_del_object(v___x_3300_);
lean_dec_ref_known(v_e_3011_, 3);
return v___x_3317_;
}
}
}
}
else
{
lean_del_object(v___x_3305_);
lean_dec(v_fst_3302_);
lean_del_object(v___x_3300_);
lean_dec_ref_known(v_e_3011_, 3);
return v___x_3307_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3011_, 3);
return v___x_3297_;
}
}
case 8:
{
lean_object* v_declName_3370_; lean_object* v_type_3371_; lean_object* v_value_3372_; lean_object* v_body_3373_; uint8_t v_nondep_3374_; lean_object* v___x_3375_; 
v_declName_3370_ = lean_ctor_get(v_e_3011_, 0);
v_type_3371_ = lean_ctor_get(v_e_3011_, 1);
v_value_3372_ = lean_ctor_get(v_e_3011_, 2);
v_body_3373_ = lean_ctor_get(v_e_3011_, 3);
v_nondep_3374_ = lean_ctor_get_uint8(v_e_3011_, sizeof(void*)*4 + 8);
lean_inc(v_declName_3370_);
v___x_3375_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3370_, v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3468_; 
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3378_ = v___x_3375_;
v_isShared_3379_ = v_isSharedCheck_3468_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3375_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3468_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v_fst_3380_; lean_object* v_snd_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3467_; 
v_fst_3380_ = lean_ctor_get(v_a_3376_, 0);
v_snd_3381_ = lean_ctor_get(v_a_3376_, 1);
v_isSharedCheck_3467_ = !lean_is_exclusive(v_a_3376_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3383_ = v_a_3376_;
v_isShared_3384_ = v_isSharedCheck_3467_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_snd_3381_);
lean_inc(v_fst_3380_);
lean_dec(v_a_3376_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3467_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3385_; 
lean_inc_ref(v_type_3371_);
v___x_3385_ = l_LeanExport_dumpExprAux(v_type_3371_, v_a_3012_, v_snd_3381_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v_a_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3466_; 
v_a_3386_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3388_ = v___x_3385_;
v_isShared_3389_ = v_isSharedCheck_3466_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3385_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3466_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v_fst_3390_; lean_object* v_snd_3391_; lean_object* v___x_3393_; uint8_t v_isShared_3394_; uint8_t v_isSharedCheck_3465_; 
v_fst_3390_ = lean_ctor_get(v_a_3386_, 0);
v_snd_3391_ = lean_ctor_get(v_a_3386_, 1);
v_isSharedCheck_3465_ = !lean_is_exclusive(v_a_3386_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3393_ = v_a_3386_;
v_isShared_3394_ = v_isSharedCheck_3465_;
goto v_resetjp_3392_;
}
else
{
lean_inc(v_snd_3391_);
lean_inc(v_fst_3390_);
lean_dec(v_a_3386_);
v___x_3393_ = lean_box(0);
v_isShared_3394_ = v_isSharedCheck_3465_;
goto v_resetjp_3392_;
}
v_resetjp_3392_:
{
lean_object* v___x_3395_; 
lean_inc_ref(v_value_3372_);
v___x_3395_ = l_LeanExport_dumpExprAux(v_value_3372_, v_a_3012_, v_snd_3391_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3464_; 
v_a_3396_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3398_ = v___x_3395_;
v_isShared_3399_ = v_isSharedCheck_3464_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v___x_3395_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3464_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v_fst_3400_; lean_object* v_snd_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3463_; 
v_fst_3400_ = lean_ctor_get(v_a_3396_, 0);
v_snd_3401_ = lean_ctor_get(v_a_3396_, 1);
v_isSharedCheck_3463_ = !lean_is_exclusive(v_a_3396_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3403_ = v_a_3396_;
v_isShared_3404_ = v_isSharedCheck_3463_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_snd_3401_);
lean_inc(v_fst_3400_);
lean_dec(v_a_3396_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3463_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; 
lean_inc_ref(v_body_3373_);
v___x_3405_ = l_LeanExport_dumpExprAux(v_body_3373_, v_a_3012_, v_snd_3401_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3462_; 
v_a_3406_ = lean_ctor_get(v___x_3405_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3405_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3408_ = v___x_3405_;
v_isShared_3409_ = v_isSharedCheck_3462_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3405_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3462_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v_fst_3410_; lean_object* v_snd_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3461_; 
v_fst_3410_ = lean_ctor_get(v_a_3406_, 0);
v_snd_3411_ = lean_ctor_get(v_a_3406_, 1);
v_isSharedCheck_3461_ = !lean_is_exclusive(v_a_3406_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3413_ = v_a_3406_;
v_isShared_3414_ = v_isSharedCheck_3461_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_snd_3411_);
lean_inc(v_fst_3410_);
lean_dec(v_a_3406_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3461_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3419_; 
v___x_3415_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__12));
v___x_3416_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3417_ = l_Lean_JsonNumber_fromNat(v_fst_3380_);
if (v_isShared_3409_ == 0)
{
lean_ctor_set_tag(v___x_3408_, 2);
lean_ctor_set(v___x_3408_, 0, v___x_3417_);
v___x_3419_ = v___x_3408_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v___x_3417_);
v___x_3419_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
lean_object* v___x_3421_; 
if (v_isShared_3414_ == 0)
{
lean_ctor_set(v___x_3413_, 1, v___x_3419_);
lean_ctor_set(v___x_3413_, 0, v___x_3416_);
v___x_3421_ = v___x_3413_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v___x_3416_);
lean_ctor_set(v_reuseFailAlloc_3459_, 1, v___x_3419_);
v___x_3421_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3425_; 
v___x_3422_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3423_ = l_Lean_JsonNumber_fromNat(v_fst_3390_);
if (v_isShared_3399_ == 0)
{
lean_ctor_set_tag(v___x_3398_, 2);
lean_ctor_set(v___x_3398_, 0, v___x_3423_);
v___x_3425_ = v___x_3398_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v___x_3423_);
v___x_3425_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
lean_object* v___x_3427_; 
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 1, v___x_3425_);
lean_ctor_set(v___x_3403_, 0, v___x_3422_);
v___x_3427_ = v___x_3403_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v___x_3422_);
lean_ctor_set(v_reuseFailAlloc_3457_, 1, v___x_3425_);
v___x_3427_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3431_; 
v___x_3428_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_3429_ = l_Lean_JsonNumber_fromNat(v_fst_3400_);
if (v_isShared_3389_ == 0)
{
lean_ctor_set_tag(v___x_3388_, 2);
lean_ctor_set(v___x_3388_, 0, v___x_3429_);
v___x_3431_ = v___x_3388_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v___x_3429_);
v___x_3431_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
lean_object* v___x_3433_; 
if (v_isShared_3394_ == 0)
{
lean_ctor_set(v___x_3393_, 1, v___x_3431_);
lean_ctor_set(v___x_3393_, 0, v___x_3428_);
v___x_3433_ = v___x_3393_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3428_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v___x_3431_);
v___x_3433_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3437_; 
v___x_3434_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3435_ = l_Lean_JsonNumber_fromNat(v_fst_3410_);
if (v_isShared_3379_ == 0)
{
lean_ctor_set_tag(v___x_3378_, 2);
lean_ctor_set(v___x_3378_, 0, v___x_3435_);
v___x_3437_ = v___x_3378_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v___x_3435_);
v___x_3437_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
lean_object* v___x_3439_; 
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 1, v___x_3437_);
lean_ctor_set(v___x_3383_, 0, v___x_3434_);
v___x_3439_ = v___x_3383_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v___x_3434_);
lean_ctor_set(v_reuseFailAlloc_3453_, 1, v___x_3437_);
v___x_3439_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3440_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__14));
v___x_3441_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3441_, 0, v_nondep_3374_);
v___x_3442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3440_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = lean_box(0);
v___x_3444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3442_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
v___x_3445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3439_);
lean_ctor_set(v___x_3445_, 1, v___x_3444_);
v___x_3446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3433_);
lean_ctor_set(v___x_3446_, 1, v___x_3445_);
v___x_3447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3427_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
v___x_3448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3421_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
v___x_3449_ = l_Lean_Json_mkObj(v___x_3448_);
lean_dec_ref_known(v___x_3448_, 2);
v___x_3450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3450_, 0, v___x_3415_);
lean_ctor_set(v___x_3450_, 1, v___x_3449_);
v___x_3451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3450_);
lean_ctor_set(v___x_3451_, 1, v___x_3443_);
v___x_3452_ = l_Lean_Json_mkObj(v___x_3451_);
lean_dec_ref_known(v___x_3451_, 2);
v_fst_3072_ = v___x_3452_;
v_snd_3073_ = v_snd_3411_;
goto v___jp_3071_;
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
else
{
lean_del_object(v___x_3403_);
lean_dec(v_fst_3400_);
lean_del_object(v___x_3398_);
lean_del_object(v___x_3393_);
lean_dec(v_fst_3390_);
lean_del_object(v___x_3388_);
lean_del_object(v___x_3383_);
lean_dec(v_fst_3380_);
lean_del_object(v___x_3378_);
lean_dec_ref_known(v_e_3011_, 4);
return v___x_3405_;
}
}
}
}
else
{
lean_del_object(v___x_3393_);
lean_dec(v_fst_3390_);
lean_del_object(v___x_3388_);
lean_del_object(v___x_3383_);
lean_dec(v_fst_3380_);
lean_del_object(v___x_3378_);
lean_dec_ref_known(v_e_3011_, 4);
return v___x_3395_;
}
}
}
}
else
{
lean_del_object(v___x_3383_);
lean_dec(v_fst_3380_);
lean_del_object(v___x_3378_);
lean_dec_ref_known(v_e_3011_, 4);
return v___x_3385_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3011_, 4);
return v___x_3375_;
}
}
case 9:
{
lean_object* v_a_3469_; 
v_a_3469_ = lean_ctor_get(v_e_3011_, 0);
lean_inc_ref(v_a_3469_);
if (lean_obj_tag(v_a_3469_) == 0)
{
lean_object* v_val_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3501_; 
v_val_3470_ = lean_ctor_get(v_a_3469_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v_a_3469_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3472_ = v_a_3469_;
v_isShared_3473_ = v_isSharedCheck_3501_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_val_3470_);
lean_dec(v_a_3469_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3501_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3474_; 
v___x_3474_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; lean_object* v_snd_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3491_; 
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_a_3475_);
lean_dec_ref_known(v___x_3474_, 1);
v_snd_3476_ = lean_ctor_get(v_a_3475_, 1);
v_isSharedCheck_3491_ = !lean_is_exclusive(v_a_3475_);
if (v_isSharedCheck_3491_ == 0)
{
lean_object* v_unused_3492_; 
v_unused_3492_ = lean_ctor_get(v_a_3475_, 0);
lean_dec(v_unused_3492_);
v___x_3478_ = v_a_3475_;
v_isShared_3479_ = v_isSharedCheck_3491_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_snd_3476_);
lean_dec(v_a_3475_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3491_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3483_; 
v___x_3480_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__15));
v___x_3481_ = l_Nat_reprFast(v_val_3470_);
if (v_isShared_3473_ == 0)
{
lean_ctor_set_tag(v___x_3472_, 3);
lean_ctor_set(v___x_3472_, 0, v___x_3481_);
v___x_3483_ = v___x_3472_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v___x_3481_);
v___x_3483_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
lean_object* v___x_3485_; 
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 1, v___x_3483_);
lean_ctor_set(v___x_3478_, 0, v___x_3480_);
v___x_3485_ = v___x_3478_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v___x_3480_);
lean_ctor_set(v_reuseFailAlloc_3489_, 1, v___x_3483_);
v___x_3485_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3486_ = lean_box(0);
v___x_3487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3485_);
lean_ctor_set(v___x_3487_, 1, v___x_3486_);
v___x_3488_ = l_Lean_Json_mkObj(v___x_3487_);
lean_dec_ref_known(v___x_3487_, 2);
v_fst_3072_ = v___x_3488_;
v_snd_3073_ = v_snd_3476_;
goto v___jp_3071_;
}
}
}
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_del_object(v___x_3472_);
lean_dec(v_val_3470_);
lean_dec_ref_known(v_e_3011_, 1);
v_a_3493_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3474_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3474_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
}
else
{
lean_object* v_val_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3532_; 
v_val_3502_ = lean_ctor_get(v_a_3469_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v_a_3469_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3504_ = v_a_3469_;
v_isShared_3505_ = v_isSharedCheck_3532_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_val_3502_);
lean_dec(v_a_3469_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3532_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3506_; 
v___x_3506_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; lean_object* v_snd_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3522_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
lean_dec_ref_known(v___x_3506_, 1);
v_snd_3508_ = lean_ctor_get(v_a_3507_, 1);
v_isSharedCheck_3522_ = !lean_is_exclusive(v_a_3507_);
if (v_isSharedCheck_3522_ == 0)
{
lean_object* v_unused_3523_; 
v_unused_3523_ = lean_ctor_get(v_a_3507_, 0);
lean_dec(v_unused_3523_);
v___x_3510_ = v_a_3507_;
v_isShared_3511_ = v_isSharedCheck_3522_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_snd_3508_);
lean_dec(v_a_3507_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3522_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3512_; lean_object* v___x_3514_; 
v___x_3512_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__16));
if (v_isShared_3505_ == 0)
{
lean_ctor_set_tag(v___x_3504_, 3);
v___x_3514_ = v___x_3504_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_val_3502_);
v___x_3514_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
lean_object* v___x_3516_; 
if (v_isShared_3511_ == 0)
{
lean_ctor_set(v___x_3510_, 1, v___x_3514_);
lean_ctor_set(v___x_3510_, 0, v___x_3512_);
v___x_3516_ = v___x_3510_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v___x_3512_);
lean_ctor_set(v_reuseFailAlloc_3520_, 1, v___x_3514_);
v___x_3516_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3517_ = lean_box(0);
v___x_3518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3516_);
lean_ctor_set(v___x_3518_, 1, v___x_3517_);
v___x_3519_ = l_Lean_Json_mkObj(v___x_3518_);
lean_dec_ref_known(v___x_3518_, 2);
v_fst_3072_ = v___x_3519_;
v_snd_3073_ = v_snd_3508_;
goto v___jp_3071_;
}
}
}
}
else
{
lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3531_; 
lean_del_object(v___x_3504_);
lean_dec_ref(v_val_3502_);
lean_dec_ref_known(v_e_3011_, 1);
v_a_3524_ = lean_ctor_get(v___x_3506_, 0);
v_isSharedCheck_3531_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3531_ == 0)
{
v___x_3526_ = v___x_3506_;
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3506_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3529_; 
if (v_isShared_3527_ == 0)
{
v___x_3529_ = v___x_3526_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_a_3524_);
v___x_3529_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
return v___x_3529_;
}
}
}
}
}
}
case 10:
{
lean_object* v_data_3533_; lean_object* v_expr_3534_; lean_object* v___x_3535_; 
v_data_3533_ = lean_ctor_get(v_e_3011_, 0);
v_expr_3534_ = lean_ctor_get(v_e_3011_, 1);
lean_inc_ref(v_expr_3534_);
v___x_3535_ = l_LeanExport_dumpExprAux(v_expr_3534_, v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3565_; 
v_a_3536_ = lean_ctor_get(v___x_3535_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3535_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3538_ = v___x_3535_;
v_isShared_3539_ = v_isSharedCheck_3565_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3535_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3565_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v_fst_3540_; lean_object* v_snd_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3564_; 
v_fst_3540_ = lean_ctor_get(v_a_3536_, 0);
v_snd_3541_ = lean_ctor_get(v_a_3536_, 1);
v_isSharedCheck_3564_ = !lean_is_exclusive(v_a_3536_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3543_ = v_a_3536_;
v_isShared_3544_ = v_isSharedCheck_3564_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_snd_3541_);
lean_inc(v_fst_3540_);
lean_dec(v_a_3536_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3564_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3549_; 
v___x_3545_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__17));
v___x_3546_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__18));
lean_inc(v_data_3533_);
v___x_3547_ = l___private_LeanExport_Basic_0__Lean_KVMap_toJson(v_data_3533_);
if (v_isShared_3544_ == 0)
{
lean_ctor_set(v___x_3543_, 1, v___x_3547_);
lean_ctor_set(v___x_3543_, 0, v___x_3546_);
v___x_3549_ = v___x_3543_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v___x_3546_);
lean_ctor_set(v_reuseFailAlloc_3563_, 1, v___x_3547_);
v___x_3549_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3553_; 
v___x_3550_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__19));
v___x_3551_ = l_Lean_JsonNumber_fromNat(v_fst_3540_);
if (v_isShared_3539_ == 0)
{
lean_ctor_set_tag(v___x_3538_, 2);
lean_ctor_set(v___x_3538_, 0, v___x_3551_);
v___x_3553_ = v___x_3538_;
goto v_reusejp_3552_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v___x_3551_);
v___x_3553_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3552_;
}
v_reusejp_3552_:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3550_);
lean_ctor_set(v___x_3554_, 1, v___x_3553_);
v___x_3555_ = lean_box(0);
v___x_3556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3554_);
lean_ctor_set(v___x_3556_, 1, v___x_3555_);
v___x_3557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3549_);
lean_ctor_set(v___x_3557_, 1, v___x_3556_);
v___x_3558_ = l_Lean_Json_mkObj(v___x_3557_);
lean_dec_ref_known(v___x_3557_, 2);
v___x_3559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3545_);
lean_ctor_set(v___x_3559_, 1, v___x_3558_);
v___x_3560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3559_);
lean_ctor_set(v___x_3560_, 1, v___x_3555_);
v___x_3561_ = l_Lean_Json_mkObj(v___x_3560_);
lean_dec_ref_known(v___x_3560_, 2);
v_fst_3072_ = v___x_3561_;
v_snd_3073_ = v_snd_3541_;
goto v___jp_3071_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3011_, 2);
return v___x_3535_;
}
}
case 11:
{
lean_object* v_typeName_3566_; lean_object* v_idx_3567_; lean_object* v_struct_3568_; lean_object* v___x_3569_; 
v_typeName_3566_ = lean_ctor_get(v_e_3011_, 0);
v_idx_3567_ = lean_ctor_get(v_e_3011_, 1);
v_struct_3568_ = lean_ctor_get(v_e_3011_, 2);
lean_inc(v_typeName_3566_);
v___x_3569_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_typeName_3566_, v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3569_) == 0)
{
lean_object* v_a_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3621_; 
v_a_3570_ = lean_ctor_get(v___x_3569_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3569_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3572_ = v___x_3569_;
v_isShared_3573_ = v_isSharedCheck_3621_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_a_3570_);
lean_dec(v___x_3569_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3621_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v_fst_3574_; lean_object* v_snd_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3620_; 
v_fst_3574_ = lean_ctor_get(v_a_3570_, 0);
v_snd_3575_ = lean_ctor_get(v_a_3570_, 1);
v_isSharedCheck_3620_ = !lean_is_exclusive(v_a_3570_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3577_ = v_a_3570_;
v_isShared_3578_ = v_isSharedCheck_3620_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_snd_3575_);
lean_inc(v_fst_3574_);
lean_dec(v_a_3570_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3620_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3579_; 
lean_inc_ref(v_struct_3568_);
v___x_3579_ = l_LeanExport_dumpExprAux(v_struct_3568_, v_a_3012_, v_snd_3575_);
if (lean_obj_tag(v___x_3579_) == 0)
{
lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3619_; 
v_a_3580_ = lean_ctor_get(v___x_3579_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3579_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3582_ = v___x_3579_;
v_isShared_3583_ = v_isSharedCheck_3619_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_3579_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3619_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v_fst_3584_; lean_object* v_snd_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3618_; 
v_fst_3584_ = lean_ctor_get(v_a_3580_, 0);
v_snd_3585_ = lean_ctor_get(v_a_3580_, 1);
v_isSharedCheck_3618_ = !lean_is_exclusive(v_a_3580_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3587_ = v_a_3580_;
v_isShared_3588_ = v_isSharedCheck_3618_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_snd_3585_);
lean_inc(v_fst_3584_);
lean_dec(v_a_3580_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3618_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3593_; 
v___x_3589_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__20));
v___x_3590_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__21));
v___x_3591_ = l_Lean_JsonNumber_fromNat(v_fst_3574_);
if (v_isShared_3583_ == 0)
{
lean_ctor_set_tag(v___x_3582_, 2);
lean_ctor_set(v___x_3582_, 0, v___x_3591_);
v___x_3593_ = v___x_3582_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v___x_3591_);
v___x_3593_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
lean_object* v___x_3595_; 
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 1, v___x_3593_);
lean_ctor_set(v___x_3587_, 0, v___x_3590_);
v___x_3595_ = v___x_3587_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3616_; 
v_reuseFailAlloc_3616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3616_, 0, v___x_3590_);
lean_ctor_set(v_reuseFailAlloc_3616_, 1, v___x_3593_);
v___x_3595_ = v_reuseFailAlloc_3616_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3599_; 
v___x_3596_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__22));
lean_inc(v_idx_3567_);
v___x_3597_ = l_Lean_JsonNumber_fromNat(v_idx_3567_);
if (v_isShared_3573_ == 0)
{
lean_ctor_set_tag(v___x_3572_, 2);
lean_ctor_set(v___x_3572_, 0, v___x_3597_);
v___x_3599_ = v___x_3572_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v___x_3597_);
v___x_3599_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
lean_object* v___x_3601_; 
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 1, v___x_3599_);
lean_ctor_set(v___x_3577_, 0, v___x_3596_);
v___x_3601_ = v___x_3577_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3596_);
lean_ctor_set(v_reuseFailAlloc_3614_, 1, v___x_3599_);
v___x_3601_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; 
v___x_3602_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__23));
v___x_3603_ = l_Lean_JsonNumber_fromNat(v_fst_3584_);
v___x_3604_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
v___x_3605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3605_, 0, v___x_3602_);
lean_ctor_set(v___x_3605_, 1, v___x_3604_);
v___x_3606_ = lean_box(0);
v___x_3607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3605_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
v___x_3608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3601_);
lean_ctor_set(v___x_3608_, 1, v___x_3607_);
v___x_3609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3609_, 0, v___x_3595_);
lean_ctor_set(v___x_3609_, 1, v___x_3608_);
v___x_3610_ = l_Lean_Json_mkObj(v___x_3609_);
lean_dec_ref_known(v___x_3609_, 2);
v___x_3611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3589_);
lean_ctor_set(v___x_3611_, 1, v___x_3610_);
v___x_3612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3612_, 0, v___x_3611_);
lean_ctor_set(v___x_3612_, 1, v___x_3606_);
v___x_3613_ = l_Lean_Json_mkObj(v___x_3612_);
lean_dec_ref_known(v___x_3612_, 2);
v_fst_3072_ = v___x_3613_;
v_snd_3073_ = v_snd_3585_;
goto v___jp_3071_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3577_);
lean_dec(v_fst_3574_);
lean_del_object(v___x_3572_);
lean_dec_ref_known(v_e_3011_, 3);
return v___x_3579_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3011_, 3);
return v___x_3569_;
}
}
default: 
{
lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3622_ = lean_obj_once(&l_LeanExport_dumpExprAux___closed__26, &l_LeanExport_dumpExprAux___closed__26_once, _init_l_LeanExport_dumpExprAux___closed__26);
v___x_3623_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_3622_, v_a_3012_, v_a_3013_);
if (lean_obj_tag(v___x_3623_) == 0)
{
lean_object* v_a_3624_; lean_object* v_fst_3625_; lean_object* v_snd_3626_; 
v_a_3624_ = lean_ctor_get(v___x_3623_, 0);
lean_inc(v_a_3624_);
lean_dec_ref_known(v___x_3623_, 1);
v_fst_3625_ = lean_ctor_get(v_a_3624_, 0);
lean_inc(v_fst_3625_);
v_snd_3626_ = lean_ctor_get(v_a_3624_, 1);
lean_inc(v_snd_3626_);
lean_dec(v_a_3624_);
v_fst_3072_ = v_fst_3625_;
v_snd_3073_ = v_snd_3626_;
goto v___jp_3071_;
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_dec_ref(v_e_3011_);
v_a_3627_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3623_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3623_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
}
v___jp_3035_:
{
lean_object* v_size_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; 
v_size_3046_ = lean_ctor_get(v_visitedExprs_3039_, 0);
lean_inc_n(v_size_3046_, 2);
v___x_3047_ = l_Lean_JsonNumber_fromNat(v_size_3046_);
v___x_3048_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
v___x_3049_ = l_Lean_Json_setObjVal_x21(v_fst_3036_, v___x_3034_, v___x_3048_);
v___x_3050_ = l_Lean_Json_compress(v___x_3049_);
v___x_3051_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_3050_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3061_; 
v_isSharedCheck_3061_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3061_ == 0)
{
lean_object* v_unused_3062_; 
v_unused_3062_ = lean_ctor_get(v___x_3051_, 0);
lean_dec(v_unused_3062_);
v___x_3053_ = v___x_3051_;
v_isShared_3054_ = v_isSharedCheck_3061_;
goto v_resetjp_3052_;
}
else
{
lean_dec(v___x_3051_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3061_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3059_; 
lean_inc(v_size_3046_);
v___x_3055_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_visitedExprs_3039_, v_e_3011_, v_size_3046_);
v___x_3056_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_3056_, 0, v_visitedNames_3037_);
lean_ctor_set(v___x_3056_, 1, v_visitedLevels_3038_);
lean_ctor_set(v___x_3056_, 2, v___x_3055_);
lean_ctor_set(v___x_3056_, 3, v_visitedConstants_3040_);
lean_ctor_set(v___x_3056_, 4, v_noMDataExprs_3041_);
lean_ctor_set(v___x_3056_, 5, v_recursorMap_3045_);
lean_ctor_set_uint8(v___x_3056_, sizeof(void*)*6, v_exportMData_3042_);
lean_ctor_set_uint8(v___x_3056_, sizeof(void*)*6 + 1, v_exportUnsafe_3043_);
lean_ctor_set_uint8(v___x_3056_, sizeof(void*)*6 + 2, v_ignoreMissing_3044_);
v___x_3057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3057_, 0, v_size_3046_);
lean_ctor_set(v___x_3057_, 1, v___x_3056_);
if (v_isShared_3054_ == 0)
{
lean_ctor_set(v___x_3053_, 0, v___x_3057_);
v___x_3059_ = v___x_3053_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v___x_3057_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
return v___x_3059_;
}
}
}
else
{
lean_object* v_a_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3070_; 
lean_dec(v_size_3046_);
lean_dec(v_recursorMap_3045_);
lean_dec_ref(v_noMDataExprs_3041_);
lean_dec_ref(v_visitedConstants_3040_);
lean_dec_ref(v_visitedExprs_3039_);
lean_dec_ref(v_visitedLevels_3038_);
lean_dec_ref(v_visitedNames_3037_);
lean_dec_ref(v_e_3011_);
v_a_3063_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3065_ = v___x_3051_;
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_a_3063_);
lean_dec(v___x_3051_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3070_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3068_; 
if (v_isShared_3066_ == 0)
{
v___x_3068_ = v___x_3065_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_a_3063_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
}
v___jp_3071_:
{
lean_object* v_visitedNames_3074_; lean_object* v_visitedLevels_3075_; lean_object* v_visitedExprs_3076_; lean_object* v_visitedConstants_3077_; lean_object* v_noMDataExprs_3078_; uint8_t v_exportMData_3079_; uint8_t v_exportUnsafe_3080_; uint8_t v_ignoreMissing_3081_; lean_object* v_recursorMap_3082_; 
v_visitedNames_3074_ = lean_ctor_get(v_snd_3073_, 0);
lean_inc_ref(v_visitedNames_3074_);
v_visitedLevels_3075_ = lean_ctor_get(v_snd_3073_, 1);
lean_inc_ref(v_visitedLevels_3075_);
v_visitedExprs_3076_ = lean_ctor_get(v_snd_3073_, 2);
lean_inc_ref(v_visitedExprs_3076_);
v_visitedConstants_3077_ = lean_ctor_get(v_snd_3073_, 3);
lean_inc_ref(v_visitedConstants_3077_);
v_noMDataExprs_3078_ = lean_ctor_get(v_snd_3073_, 4);
lean_inc_ref(v_noMDataExprs_3078_);
v_exportMData_3079_ = lean_ctor_get_uint8(v_snd_3073_, sizeof(void*)*6);
v_exportUnsafe_3080_ = lean_ctor_get_uint8(v_snd_3073_, sizeof(void*)*6 + 1);
v_ignoreMissing_3081_ = lean_ctor_get_uint8(v_snd_3073_, sizeof(void*)*6 + 2);
v_recursorMap_3082_ = lean_ctor_get(v_snd_3073_, 5);
lean_inc(v_recursorMap_3082_);
lean_dec_ref(v_snd_3073_);
v_fst_3036_ = v_fst_3072_;
v_visitedNames_3037_ = v_visitedNames_3074_;
v_visitedLevels_3038_ = v_visitedLevels_3075_;
v_visitedExprs_3039_ = v_visitedExprs_3076_;
v_visitedConstants_3040_ = v_visitedConstants_3077_;
v_noMDataExprs_3041_ = v_noMDataExprs_3078_;
v_exportMData_3042_ = v_exportMData_3079_;
v_exportUnsafe_3043_ = v_exportUnsafe_3080_;
v_ignoreMissing_3044_ = v_ignoreMissing_3081_;
v_recursorMap_3045_ = v_recursorMap_3082_;
goto v___jp_3035_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr(lean_object* v_e_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_){
_start:
{
uint8_t v_exportMData_3639_; 
v_exportMData_3639_ = lean_ctor_get_uint8(v_a_3637_, sizeof(void*)*6);
if (v_exportMData_3639_ == 0)
{
lean_object* v_visitedNames_3640_; lean_object* v_visitedLevels_3641_; lean_object* v_visitedExprs_3642_; lean_object* v_visitedConstants_3643_; uint8_t v_exportUnsafe_3644_; uint8_t v_ignoreMissing_3645_; lean_object* v_recursorMap_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3667_; 
v_visitedNames_3640_ = lean_ctor_get(v_a_3637_, 0);
v_visitedLevels_3641_ = lean_ctor_get(v_a_3637_, 1);
v_visitedExprs_3642_ = lean_ctor_get(v_a_3637_, 2);
v_visitedConstants_3643_ = lean_ctor_get(v_a_3637_, 3);
v_exportUnsafe_3644_ = lean_ctor_get_uint8(v_a_3637_, sizeof(void*)*6 + 1);
v_ignoreMissing_3645_ = lean_ctor_get_uint8(v_a_3637_, sizeof(void*)*6 + 2);
v_recursorMap_3646_ = lean_ctor_get(v_a_3637_, 5);
v_isSharedCheck_3667_ = !lean_is_exclusive(v_a_3637_);
if (v_isSharedCheck_3667_ == 0)
{
lean_object* v_unused_3668_; 
v_unused_3668_ = lean_ctor_get(v_a_3637_, 4);
lean_dec(v_unused_3668_);
v___x_3648_ = v_a_3637_;
v_isShared_3649_ = v_isSharedCheck_3667_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_recursorMap_3646_);
lean_inc(v_visitedConstants_3643_);
lean_inc(v_visitedExprs_3642_);
lean_inc(v_visitedLevels_3641_);
lean_inc(v_visitedNames_3640_);
lean_dec(v_a_3637_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3667_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3650_; lean_object* v___x_3652_; 
v___x_3650_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_3649_ == 0)
{
lean_ctor_set(v___x_3648_, 4, v___x_3650_);
v___x_3652_ = v___x_3648_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_visitedNames_3640_);
lean_ctor_set(v_reuseFailAlloc_3666_, 1, v_visitedLevels_3641_);
lean_ctor_set(v_reuseFailAlloc_3666_, 2, v_visitedExprs_3642_);
lean_ctor_set(v_reuseFailAlloc_3666_, 3, v_visitedConstants_3643_);
lean_ctor_set(v_reuseFailAlloc_3666_, 4, v___x_3650_);
lean_ctor_set(v_reuseFailAlloc_3666_, 5, v_recursorMap_3646_);
lean_ctor_set_uint8(v_reuseFailAlloc_3666_, sizeof(void*)*6, v_exportMData_3639_);
lean_ctor_set_uint8(v_reuseFailAlloc_3666_, sizeof(void*)*6 + 1, v_exportUnsafe_3644_);
lean_ctor_set_uint8(v_reuseFailAlloc_3666_, sizeof(void*)*6 + 2, v_ignoreMissing_3645_);
v___x_3652_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
lean_object* v___x_3653_; 
v___x_3653_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_3635_, v_a_3636_, v___x_3652_);
if (lean_obj_tag(v___x_3653_) == 0)
{
lean_object* v_a_3654_; lean_object* v_fst_3655_; lean_object* v_snd_3656_; lean_object* v___x_3657_; 
v_a_3654_ = lean_ctor_get(v___x_3653_, 0);
lean_inc(v_a_3654_);
lean_dec_ref_known(v___x_3653_, 1);
v_fst_3655_ = lean_ctor_get(v_a_3654_, 0);
lean_inc(v_fst_3655_);
v_snd_3656_ = lean_ctor_get(v_a_3654_, 1);
lean_inc(v_snd_3656_);
lean_dec(v_a_3654_);
v___x_3657_ = l_LeanExport_dumpExprAux(v_fst_3655_, v_a_3636_, v_snd_3656_);
return v___x_3657_;
}
else
{
lean_object* v_a_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3665_; 
v_a_3658_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3665_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3660_ = v___x_3653_;
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_a_3658_);
lean_dec(v___x_3653_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3665_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3663_; 
if (v_isShared_3661_ == 0)
{
v___x_3663_ = v___x_3660_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v_a_3658_);
v___x_3663_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
return v___x_3663_;
}
}
}
}
}
}
else
{
lean_object* v___x_3669_; 
v___x_3669_ = l_LeanExport_dumpExprAux(v_e_3635_, v_a_3636_, v_a_3637_);
return v___x_3669_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(size_t v_sz_3679_, size_t v_i_3680_, lean_object* v_bs_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_){
_start:
{
uint8_t v___x_3685_; 
v___x_3685_ = lean_usize_dec_lt(v_i_3680_, v_sz_3679_);
if (v___x_3685_ == 0)
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3686_ = l_unsafeCast___redArg(v_bs_3681_);
lean_dec_ref(v_bs_3681_);
v___x_3687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3686_);
lean_ctor_set(v___x_3687_, 1, v___y_3683_);
v___x_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3687_);
return v___x_3688_;
}
else
{
lean_object* v_v_3689_; lean_object* v___x_3690_; lean_object* v_toConstantVal_3691_; lean_object* v_numParams_3692_; lean_object* v_numIndices_3693_; lean_object* v_all_3694_; lean_object* v_ctors_3695_; lean_object* v_numNested_3696_; uint8_t v_isRec_3697_; uint8_t v_isUnsafe_3698_; uint8_t v_isReflexive_3699_; lean_object* v_name_3700_; lean_object* v_levelParams_3701_; lean_object* v_type_3702_; lean_object* v___x_3703_; lean_object* v_bs_x27_3704_; lean_object* v_fst_3706_; lean_object* v_snd_3707_; lean_object* v___y_3714_; lean_object* v___x_3726_; 
v_v_3689_ = lean_array_uget_borrowed(v_bs_3681_, v_i_3680_);
v___x_3690_ = l_unsafeCast___redArg(v_v_3689_);
v_toConstantVal_3691_ = lean_ctor_get(v___x_3690_, 0);
lean_inc_ref(v_toConstantVal_3691_);
v_numParams_3692_ = lean_ctor_get(v___x_3690_, 1);
lean_inc(v_numParams_3692_);
v_numIndices_3693_ = lean_ctor_get(v___x_3690_, 2);
lean_inc(v_numIndices_3693_);
v_all_3694_ = lean_ctor_get(v___x_3690_, 3);
lean_inc(v_all_3694_);
v_ctors_3695_ = lean_ctor_get(v___x_3690_, 4);
lean_inc(v_ctors_3695_);
v_numNested_3696_ = lean_ctor_get(v___x_3690_, 5);
lean_inc(v_numNested_3696_);
v_isRec_3697_ = lean_ctor_get_uint8(v___x_3690_, sizeof(void*)*6);
v_isUnsafe_3698_ = lean_ctor_get_uint8(v___x_3690_, sizeof(void*)*6 + 1);
v_isReflexive_3699_ = lean_ctor_get_uint8(v___x_3690_, sizeof(void*)*6 + 2);
lean_dec(v___x_3690_);
v_name_3700_ = lean_ctor_get(v_toConstantVal_3691_, 0);
lean_inc(v_name_3700_);
v_levelParams_3701_ = lean_ctor_get(v_toConstantVal_3691_, 1);
lean_inc(v_levelParams_3701_);
v_type_3702_ = lean_ctor_get(v_toConstantVal_3691_, 2);
lean_inc_ref(v_type_3702_);
lean_dec_ref(v_toConstantVal_3691_);
v___x_3703_ = lean_unsigned_to_nat(0u);
v_bs_x27_3704_ = lean_array_uset(v_bs_3681_, v_i_3680_, v___x_3703_);
v___x_3726_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_3700_, v___y_3682_, v___y_3683_);
if (lean_obj_tag(v___x_3726_) == 0)
{
lean_object* v_a_3727_; lean_object* v_fst_3728_; lean_object* v_snd_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3849_; 
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
lean_inc(v_a_3727_);
lean_dec_ref_known(v___x_3726_, 1);
v_fst_3728_ = lean_ctor_get(v_a_3727_, 0);
v_snd_3729_ = lean_ctor_get(v_a_3727_, 1);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_a_3727_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3731_ = v_a_3727_;
v_isShared_3732_ = v_isSharedCheck_3849_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_snd_3729_);
lean_inc(v_fst_3728_);
lean_dec(v_a_3727_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3849_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v___x_3733_; 
v___x_3733_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_3701_, v___y_3682_, v_snd_3729_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3848_; 
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3736_ = v___x_3733_;
v_isShared_3737_ = v_isSharedCheck_3848_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3733_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3848_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v_fst_3738_; lean_object* v_snd_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3847_; 
v_fst_3738_ = lean_ctor_get(v_a_3734_, 0);
v_snd_3739_ = lean_ctor_get(v_a_3734_, 1);
v_isSharedCheck_3847_ = !lean_is_exclusive(v_a_3734_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3741_ = v_a_3734_;
v_isShared_3742_ = v_isSharedCheck_3847_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_snd_3739_);
lean_inc(v_fst_3738_);
lean_dec(v_a_3734_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3847_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v___x_3743_; 
v___x_3743_ = l_LeanExport_dumpExpr(v_type_3702_, v___y_3682_, v_snd_3739_);
if (lean_obj_tag(v___x_3743_) == 0)
{
lean_object* v_a_3744_; lean_object* v_fst_3745_; lean_object* v_snd_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3838_; 
v_a_3744_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_a_3744_);
lean_dec_ref_known(v___x_3743_, 1);
v_fst_3745_ = lean_ctor_get(v_a_3744_, 0);
v_snd_3746_ = lean_ctor_get(v_a_3744_, 1);
v_isSharedCheck_3838_ = !lean_is_exclusive(v_a_3744_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3748_ = v_a_3744_;
v_isShared_3749_ = v_isSharedCheck_3838_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_snd_3746_);
lean_inc(v_fst_3745_);
lean_dec(v_a_3744_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3838_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3750_; 
v___x_3750_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_3694_, v___y_3682_, v_snd_3746_);
if (lean_obj_tag(v___x_3750_) == 0)
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3837_; 
v_a_3751_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3753_ = v___x_3750_;
v_isShared_3754_ = v_isSharedCheck_3837_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3750_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3837_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v_fst_3755_; lean_object* v_snd_3756_; lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3836_; 
v_fst_3755_ = lean_ctor_get(v_a_3751_, 0);
v_snd_3756_ = lean_ctor_get(v_a_3751_, 1);
v_isSharedCheck_3836_ = !lean_is_exclusive(v_a_3751_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3758_ = v_a_3751_;
v_isShared_3759_ = v_isSharedCheck_3836_;
goto v_resetjp_3757_;
}
else
{
lean_inc(v_snd_3756_);
lean_inc(v_fst_3755_);
lean_dec(v_a_3751_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3836_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
lean_object* v___x_3760_; 
v___x_3760_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_ctors_3695_, v___y_3682_, v_snd_3756_);
if (lean_obj_tag(v___x_3760_) == 0)
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3835_; 
v_a_3761_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3763_ = v___x_3760_;
v_isShared_3764_ = v_isSharedCheck_3835_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v___x_3760_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3835_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v_fst_3765_; lean_object* v_snd_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3834_; 
v_fst_3765_ = lean_ctor_get(v_a_3761_, 0);
v_snd_3766_ = lean_ctor_get(v_a_3761_, 1);
v_isSharedCheck_3834_ = !lean_is_exclusive(v_a_3761_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3768_ = v_a_3761_;
v_isShared_3769_ = v_isSharedCheck_3834_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_snd_3766_);
lean_inc(v_fst_3765_);
lean_dec(v_a_3761_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3834_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3773_; 
v___x_3770_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3771_ = l_Lean_JsonNumber_fromNat(v_fst_3728_);
if (v_isShared_3764_ == 0)
{
lean_ctor_set_tag(v___x_3763_, 2);
lean_ctor_set(v___x_3763_, 0, v___x_3771_);
v___x_3773_ = v___x_3763_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v___x_3771_);
v___x_3773_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
lean_object* v___x_3775_; 
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 1, v___x_3773_);
lean_ctor_set(v___x_3768_, 0, v___x_3770_);
v___x_3775_ = v___x_3768_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v___x_3770_);
lean_ctor_set(v_reuseFailAlloc_3832_, 1, v___x_3773_);
v___x_3775_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; lean_object* v___x_3778_; 
v___x_3776_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_3759_ == 0)
{
lean_ctor_set(v___x_3758_, 1, v_fst_3738_);
lean_ctor_set(v___x_3758_, 0, v___x_3776_);
v___x_3778_ = v___x_3758_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v___x_3776_);
lean_ctor_set(v_reuseFailAlloc_3831_, 1, v_fst_3738_);
v___x_3778_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3782_; 
v___x_3779_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3780_ = l_Lean_JsonNumber_fromNat(v_fst_3745_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set_tag(v___x_3753_, 2);
lean_ctor_set(v___x_3753_, 0, v___x_3780_);
v___x_3782_ = v___x_3753_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v___x_3780_);
v___x_3782_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
lean_object* v___x_3784_; 
if (v_isShared_3749_ == 0)
{
lean_ctor_set(v___x_3748_, 1, v___x_3782_);
lean_ctor_set(v___x_3748_, 0, v___x_3779_);
v___x_3784_ = v___x_3748_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3829_; 
v_reuseFailAlloc_3829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3829_, 0, v___x_3779_);
lean_ctor_set(v_reuseFailAlloc_3829_, 1, v___x_3782_);
v___x_3784_ = v_reuseFailAlloc_3829_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3788_; 
v___x_3785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4));
v___x_3786_ = l_Lean_JsonNumber_fromNat(v_numParams_3692_);
if (v_isShared_3737_ == 0)
{
lean_ctor_set_tag(v___x_3736_, 2);
lean_ctor_set(v___x_3736_, 0, v___x_3786_);
v___x_3788_ = v___x_3736_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v___x_3786_);
v___x_3788_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
lean_object* v___x_3790_; 
if (v_isShared_3742_ == 0)
{
lean_ctor_set(v___x_3741_, 1, v___x_3788_);
lean_ctor_set(v___x_3741_, 0, v___x_3785_);
v___x_3790_ = v___x_3741_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v___x_3785_);
lean_ctor_set(v_reuseFailAlloc_3827_, 1, v___x_3788_);
v___x_3790_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3795_; 
v___x_3791_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3792_ = l_Lean_JsonNumber_fromNat(v_numIndices_3693_);
v___x_3793_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3792_);
if (v_isShared_3732_ == 0)
{
lean_ctor_set(v___x_3731_, 1, v___x_3793_);
lean_ctor_set(v___x_3731_, 0, v___x_3791_);
v___x_3795_ = v___x_3731_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3826_; 
v_reuseFailAlloc_3826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3826_, 0, v___x_3791_);
lean_ctor_set(v_reuseFailAlloc_3826_, 1, v___x_3793_);
v___x_3795_ = v_reuseFailAlloc_3826_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; 
v___x_3796_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
v___x_3797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3796_);
lean_ctor_set(v___x_3797_, 1, v_fst_3755_);
v___x_3798_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2));
v___x_3799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3798_);
lean_ctor_set(v___x_3799_, 1, v_fst_3765_);
v___x_3800_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3));
v___x_3801_ = l_Lean_JsonNumber_fromNat(v_numNested_3696_);
v___x_3802_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3801_);
v___x_3803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3803_, 0, v___x_3800_);
lean_ctor_set(v___x_3803_, 1, v___x_3802_);
v___x_3804_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4));
v___x_3805_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3805_, 0, v_isRec_3697_);
v___x_3806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3806_, 0, v___x_3804_);
lean_ctor_set(v___x_3806_, 1, v___x_3805_);
v___x_3807_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5));
v___x_3808_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3808_, 0, v_isReflexive_3699_);
v___x_3809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3807_);
lean_ctor_set(v___x_3809_, 1, v___x_3808_);
v___x_3810_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_3811_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3811_, 0, v_isUnsafe_3698_);
v___x_3812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3810_);
lean_ctor_set(v___x_3812_, 1, v___x_3811_);
v___x_3813_ = lean_box(0);
v___x_3814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3812_);
lean_ctor_set(v___x_3814_, 1, v___x_3813_);
v___x_3815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3809_);
lean_ctor_set(v___x_3815_, 1, v___x_3814_);
v___x_3816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3806_);
lean_ctor_set(v___x_3816_, 1, v___x_3815_);
v___x_3817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3803_);
lean_ctor_set(v___x_3817_, 1, v___x_3816_);
v___x_3818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3799_);
lean_ctor_set(v___x_3818_, 1, v___x_3817_);
v___x_3819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3819_, 0, v___x_3797_);
lean_ctor_set(v___x_3819_, 1, v___x_3818_);
v___x_3820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3820_, 0, v___x_3795_);
lean_ctor_set(v___x_3820_, 1, v___x_3819_);
v___x_3821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3790_);
lean_ctor_set(v___x_3821_, 1, v___x_3820_);
v___x_3822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3784_);
lean_ctor_set(v___x_3822_, 1, v___x_3821_);
v___x_3823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3778_);
lean_ctor_set(v___x_3823_, 1, v___x_3822_);
v___x_3824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3824_, 0, v___x_3775_);
lean_ctor_set(v___x_3824_, 1, v___x_3823_);
v___x_3825_ = l_Lean_Json_mkObj(v___x_3824_);
lean_dec_ref_known(v___x_3824_, 2);
v_fst_3706_ = v___x_3825_;
v_snd_3707_ = v_snd_3766_;
goto v___jp_3705_;
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
else
{
lean_del_object(v___x_3758_);
lean_dec(v_fst_3755_);
lean_del_object(v___x_3753_);
lean_del_object(v___x_3748_);
lean_dec(v_fst_3745_);
lean_del_object(v___x_3741_);
lean_dec(v_fst_3738_);
lean_del_object(v___x_3736_);
lean_del_object(v___x_3731_);
lean_dec(v_fst_3728_);
lean_dec(v_numNested_3696_);
lean_dec(v_numIndices_3693_);
lean_dec(v_numParams_3692_);
v___y_3714_ = v___x_3760_;
goto v___jp_3713_;
}
}
}
}
else
{
lean_del_object(v___x_3748_);
lean_dec(v_fst_3745_);
lean_del_object(v___x_3741_);
lean_dec(v_fst_3738_);
lean_del_object(v___x_3736_);
lean_del_object(v___x_3731_);
lean_dec(v_fst_3728_);
lean_dec(v_numNested_3696_);
lean_dec(v_ctors_3695_);
lean_dec(v_numIndices_3693_);
lean_dec(v_numParams_3692_);
v___y_3714_ = v___x_3750_;
goto v___jp_3713_;
}
}
}
else
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3846_; 
lean_del_object(v___x_3741_);
lean_dec(v_fst_3738_);
lean_del_object(v___x_3736_);
lean_del_object(v___x_3731_);
lean_dec(v_fst_3728_);
lean_dec_ref(v_bs_x27_3704_);
lean_dec(v_numNested_3696_);
lean_dec(v_ctors_3695_);
lean_dec(v_all_3694_);
lean_dec(v_numIndices_3693_);
lean_dec(v_numParams_3692_);
v_a_3839_ = lean_ctor_get(v___x_3743_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3841_ = v___x_3743_;
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3743_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3844_; 
if (v_isShared_3842_ == 0)
{
v___x_3844_ = v___x_3841_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_a_3839_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_3731_);
lean_dec(v_fst_3728_);
lean_dec_ref(v_type_3702_);
lean_dec(v_numNested_3696_);
lean_dec(v_ctors_3695_);
lean_dec(v_all_3694_);
lean_dec(v_numIndices_3693_);
lean_dec(v_numParams_3692_);
v___y_3714_ = v___x_3733_;
goto v___jp_3713_;
}
}
}
else
{
lean_object* v_a_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3857_; 
lean_dec_ref(v_bs_x27_3704_);
lean_dec_ref(v_type_3702_);
lean_dec(v_levelParams_3701_);
lean_dec(v_numNested_3696_);
lean_dec(v_ctors_3695_);
lean_dec(v_all_3694_);
lean_dec(v_numIndices_3693_);
lean_dec(v_numParams_3692_);
v_a_3850_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3857_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3857_ == 0)
{
v___x_3852_ = v___x_3726_;
v_isShared_3853_ = v_isSharedCheck_3857_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_a_3850_);
lean_dec(v___x_3726_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3857_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v___x_3855_; 
if (v_isShared_3853_ == 0)
{
v___x_3855_ = v___x_3852_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v_a_3850_);
v___x_3855_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
return v___x_3855_;
}
}
}
v___jp_3705_:
{
size_t v___x_3708_; size_t v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; 
v___x_3708_ = ((size_t)1ULL);
v___x_3709_ = lean_usize_add(v_i_3680_, v___x_3708_);
v___x_3710_ = l_unsafeCast___redArg(v_fst_3706_);
lean_dec(v_fst_3706_);
v___x_3711_ = lean_array_uset(v_bs_x27_3704_, v_i_3680_, v___x_3710_);
v_i_3680_ = v___x_3709_;
v_bs_3681_ = v___x_3711_;
v___y_3683_ = v_snd_3707_;
goto _start;
}
v___jp_3713_:
{
if (lean_obj_tag(v___y_3714_) == 0)
{
lean_object* v_a_3715_; lean_object* v_fst_3716_; lean_object* v_snd_3717_; 
v_a_3715_ = lean_ctor_get(v___y_3714_, 0);
lean_inc(v_a_3715_);
lean_dec_ref_known(v___y_3714_, 1);
v_fst_3716_ = lean_ctor_get(v_a_3715_, 0);
lean_inc(v_fst_3716_);
v_snd_3717_ = lean_ctor_get(v_a_3715_, 1);
lean_inc(v_snd_3717_);
lean_dec(v_a_3715_);
v_fst_3706_ = v_fst_3716_;
v_snd_3707_ = v_snd_3717_;
goto v___jp_3705_;
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
lean_dec_ref(v_bs_x27_3704_);
v_a_3718_ = lean_ctor_get(v___y_3714_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___y_3714_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___y_3714_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___y_3714_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___boxed(lean_object* v_sz_3858_, lean_object* v_i_3859_, lean_object* v_bs_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
size_t v_sz_boxed_3864_; size_t v_i_boxed_3865_; lean_object* v_res_3866_; 
v_sz_boxed_3864_ = lean_unbox_usize(v_sz_3858_);
lean_dec(v_sz_3858_);
v_i_boxed_3865_ = lean_unbox_usize(v_i_3859_);
lean_dec(v_i_3859_);
v_res_3866_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(v_sz_boxed_3864_, v_i_boxed_3865_, v_bs_3860_, v___y_3861_, v___y_3862_);
lean_dec_ref(v___y_3861_);
return v_res_3866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(size_t v_sz_3870_, size_t v_i_3871_, lean_object* v_bs_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_){
_start:
{
uint8_t v___x_3876_; 
v___x_3876_ = lean_usize_dec_lt(v_i_3871_, v_sz_3870_);
if (v___x_3876_ == 0)
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3877_ = l_unsafeCast___redArg(v_bs_3872_);
lean_dec_ref(v_bs_3872_);
v___x_3878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
lean_ctor_set(v___x_3878_, 1, v___y_3874_);
v___x_3879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3879_, 0, v___x_3878_);
return v___x_3879_;
}
else
{
lean_object* v_v_3880_; lean_object* v___x_3881_; lean_object* v_toConstantVal_3882_; lean_object* v_induct_3883_; lean_object* v_cidx_3884_; lean_object* v_numParams_3885_; lean_object* v_numFields_3886_; uint8_t v_isUnsafe_3887_; lean_object* v_name_3888_; lean_object* v_levelParams_3889_; lean_object* v_type_3890_; lean_object* v___x_3891_; lean_object* v_bs_x27_3892_; lean_object* v_fst_3894_; lean_object* v_snd_3895_; lean_object* v___x_3901_; 
v_v_3880_ = lean_array_uget_borrowed(v_bs_3872_, v_i_3871_);
v___x_3881_ = l_unsafeCast___redArg(v_v_3880_);
v_toConstantVal_3882_ = lean_ctor_get(v___x_3881_, 0);
lean_inc_ref(v_toConstantVal_3882_);
v_induct_3883_ = lean_ctor_get(v___x_3881_, 1);
lean_inc(v_induct_3883_);
v_cidx_3884_ = lean_ctor_get(v___x_3881_, 2);
lean_inc(v_cidx_3884_);
v_numParams_3885_ = lean_ctor_get(v___x_3881_, 3);
lean_inc(v_numParams_3885_);
v_numFields_3886_ = lean_ctor_get(v___x_3881_, 4);
lean_inc(v_numFields_3886_);
v_isUnsafe_3887_ = lean_ctor_get_uint8(v___x_3881_, sizeof(void*)*5);
lean_dec(v___x_3881_);
v_name_3888_ = lean_ctor_get(v_toConstantVal_3882_, 0);
lean_inc(v_name_3888_);
v_levelParams_3889_ = lean_ctor_get(v_toConstantVal_3882_, 1);
lean_inc(v_levelParams_3889_);
v_type_3890_ = lean_ctor_get(v_toConstantVal_3882_, 2);
lean_inc_ref(v_type_3890_);
lean_dec_ref(v_toConstantVal_3882_);
v___x_3891_ = lean_unsigned_to_nat(0u);
v_bs_x27_3892_ = lean_array_uset(v_bs_3872_, v_i_3871_, v___x_3891_);
v___x_3901_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_3888_, v___y_3873_, v___y_3874_);
if (lean_obj_tag(v___x_3901_) == 0)
{
lean_object* v_a_3902_; lean_object* v_fst_3903_; lean_object* v_snd_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_4006_; 
v_a_3902_ = lean_ctor_get(v___x_3901_, 0);
lean_inc(v_a_3902_);
lean_dec_ref_known(v___x_3901_, 1);
v_fst_3903_ = lean_ctor_get(v_a_3902_, 0);
v_snd_3904_ = lean_ctor_get(v_a_3902_, 1);
v_isSharedCheck_4006_ = !lean_is_exclusive(v_a_3902_);
if (v_isSharedCheck_4006_ == 0)
{
v___x_3906_ = v_a_3902_;
v_isShared_3907_ = v_isSharedCheck_4006_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_snd_3904_);
lean_inc(v_fst_3903_);
lean_dec(v_a_3902_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_4006_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3908_; 
v___x_3908_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_3889_, v___y_3873_, v_snd_3904_);
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v_a_3909_; lean_object* v_fst_3910_; lean_object* v_snd_3911_; lean_object* v___x_3913_; uint8_t v_isShared_3914_; uint8_t v_isSharedCheck_3994_; 
v_a_3909_ = lean_ctor_get(v___x_3908_, 0);
lean_inc(v_a_3909_);
lean_dec_ref_known(v___x_3908_, 1);
v_fst_3910_ = lean_ctor_get(v_a_3909_, 0);
v_snd_3911_ = lean_ctor_get(v_a_3909_, 1);
v_isSharedCheck_3994_ = !lean_is_exclusive(v_a_3909_);
if (v_isSharedCheck_3994_ == 0)
{
v___x_3913_ = v_a_3909_;
v_isShared_3914_ = v_isSharedCheck_3994_;
goto v_resetjp_3912_;
}
else
{
lean_inc(v_snd_3911_);
lean_inc(v_fst_3910_);
lean_dec(v_a_3909_);
v___x_3913_ = lean_box(0);
v_isShared_3914_ = v_isSharedCheck_3994_;
goto v_resetjp_3912_;
}
v_resetjp_3912_:
{
lean_object* v___x_3915_; 
v___x_3915_ = l_LeanExport_dumpExpr(v_type_3890_, v___y_3873_, v_snd_3911_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v_fst_3917_; lean_object* v_snd_3918_; lean_object* v___x_3920_; uint8_t v_isShared_3921_; uint8_t v_isSharedCheck_3985_; 
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
lean_inc(v_a_3916_);
lean_dec_ref_known(v___x_3915_, 1);
v_fst_3917_ = lean_ctor_get(v_a_3916_, 0);
v_snd_3918_ = lean_ctor_get(v_a_3916_, 1);
v_isSharedCheck_3985_ = !lean_is_exclusive(v_a_3916_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3920_ = v_a_3916_;
v_isShared_3921_ = v_isSharedCheck_3985_;
goto v_resetjp_3919_;
}
else
{
lean_inc(v_snd_3918_);
lean_inc(v_fst_3917_);
lean_dec(v_a_3916_);
v___x_3920_ = lean_box(0);
v_isShared_3921_ = v_isSharedCheck_3985_;
goto v_resetjp_3919_;
}
v_resetjp_3919_:
{
lean_object* v___x_3922_; 
v___x_3922_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_induct_3883_, v___y_3873_, v_snd_3918_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v_a_3923_; lean_object* v_fst_3924_; lean_object* v_snd_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3976_; 
v_a_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_a_3923_);
lean_dec_ref_known(v___x_3922_, 1);
v_fst_3924_ = lean_ctor_get(v_a_3923_, 0);
v_snd_3925_ = lean_ctor_get(v_a_3923_, 1);
v_isSharedCheck_3976_ = !lean_is_exclusive(v_a_3923_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3927_ = v_a_3923_;
v_isShared_3928_ = v_isSharedCheck_3976_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_snd_3925_);
lean_inc(v_fst_3924_);
lean_dec(v_a_3923_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3976_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3933_; 
v___x_3929_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3930_ = l_Lean_JsonNumber_fromNat(v_fst_3903_);
v___x_3931_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 1, v___x_3931_);
lean_ctor_set(v___x_3927_, 0, v___x_3929_);
v___x_3933_ = v___x_3927_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v___x_3929_);
lean_ctor_set(v_reuseFailAlloc_3975_, 1, v___x_3931_);
v___x_3933_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
lean_object* v___x_3934_; lean_object* v___x_3936_; 
v___x_3934_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_3921_ == 0)
{
lean_ctor_set(v___x_3920_, 1, v_fst_3910_);
lean_ctor_set(v___x_3920_, 0, v___x_3934_);
v___x_3936_ = v___x_3920_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v___x_3934_);
lean_ctor_set(v_reuseFailAlloc_3974_, 1, v_fst_3910_);
v___x_3936_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3941_; 
v___x_3937_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3938_ = l_Lean_JsonNumber_fromNat(v_fst_3917_);
v___x_3939_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3939_, 0, v___x_3938_);
if (v_isShared_3914_ == 0)
{
lean_ctor_set(v___x_3913_, 1, v___x_3939_);
lean_ctor_set(v___x_3913_, 0, v___x_3937_);
v___x_3941_ = v___x_3913_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v___x_3937_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v___x_3939_);
v___x_3941_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3946_; 
v___x_3942_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2));
v___x_3943_ = l_Lean_JsonNumber_fromNat(v_fst_3924_);
v___x_3944_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3943_);
if (v_isShared_3907_ == 0)
{
lean_ctor_set(v___x_3906_, 1, v___x_3944_);
lean_ctor_set(v___x_3906_, 0, v___x_3942_);
v___x_3946_ = v___x_3906_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v___x_3942_);
lean_ctor_set(v_reuseFailAlloc_3972_, 1, v___x_3944_);
v___x_3946_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3947_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3));
v___x_3948_ = l_Lean_JsonNumber_fromNat(v_cidx_3884_);
v___x_3949_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
v___x_3950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3947_);
lean_ctor_set(v___x_3950_, 1, v___x_3949_);
v___x_3951_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4));
v___x_3952_ = l_Lean_JsonNumber_fromNat(v_numParams_3885_);
v___x_3953_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3952_);
v___x_3954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3951_);
lean_ctor_set(v___x_3954_, 1, v___x_3953_);
v___x_3955_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__5));
v___x_3956_ = l_Lean_JsonNumber_fromNat(v_numFields_3886_);
v___x_3957_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3956_);
v___x_3958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3955_);
lean_ctor_set(v___x_3958_, 1, v___x_3957_);
v___x_3959_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_3960_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3960_, 0, v_isUnsafe_3887_);
v___x_3961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3961_, 0, v___x_3959_);
lean_ctor_set(v___x_3961_, 1, v___x_3960_);
v___x_3962_ = lean_box(0);
v___x_3963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3961_);
lean_ctor_set(v___x_3963_, 1, v___x_3962_);
v___x_3964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3958_);
lean_ctor_set(v___x_3964_, 1, v___x_3963_);
v___x_3965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3954_);
lean_ctor_set(v___x_3965_, 1, v___x_3964_);
v___x_3966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3950_);
lean_ctor_set(v___x_3966_, 1, v___x_3965_);
v___x_3967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3946_);
lean_ctor_set(v___x_3967_, 1, v___x_3966_);
v___x_3968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3941_);
lean_ctor_set(v___x_3968_, 1, v___x_3967_);
v___x_3969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3936_);
lean_ctor_set(v___x_3969_, 1, v___x_3968_);
v___x_3970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3933_);
lean_ctor_set(v___x_3970_, 1, v___x_3969_);
v___x_3971_ = l_Lean_Json_mkObj(v___x_3970_);
lean_dec_ref_known(v___x_3970_, 2);
v_fst_3894_ = v___x_3971_;
v_snd_3895_ = v_snd_3925_;
goto v___jp_3893_;
}
}
}
}
}
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_del_object(v___x_3920_);
lean_dec(v_fst_3917_);
lean_del_object(v___x_3913_);
lean_dec(v_fst_3910_);
lean_del_object(v___x_3906_);
lean_dec(v_fst_3903_);
lean_dec_ref(v_bs_x27_3892_);
lean_dec(v_numFields_3886_);
lean_dec(v_numParams_3885_);
lean_dec(v_cidx_3884_);
v_a_3977_ = lean_ctor_get(v___x_3922_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3922_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3922_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3922_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3993_; 
lean_del_object(v___x_3913_);
lean_dec(v_fst_3910_);
lean_del_object(v___x_3906_);
lean_dec(v_fst_3903_);
lean_dec_ref(v_bs_x27_3892_);
lean_dec(v_numFields_3886_);
lean_dec(v_numParams_3885_);
lean_dec(v_cidx_3884_);
lean_dec(v_induct_3883_);
v_a_3986_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3988_ = v___x_3915_;
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3915_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3991_; 
if (v_isShared_3989_ == 0)
{
v___x_3991_ = v___x_3988_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3986_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
}
else
{
lean_del_object(v___x_3906_);
lean_dec(v_fst_3903_);
lean_dec_ref(v_type_3890_);
lean_dec(v_numFields_3886_);
lean_dec(v_numParams_3885_);
lean_dec(v_cidx_3884_);
lean_dec(v_induct_3883_);
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v_a_3995_; lean_object* v_fst_3996_; lean_object* v_snd_3997_; 
v_a_3995_ = lean_ctor_get(v___x_3908_, 0);
lean_inc(v_a_3995_);
lean_dec_ref_known(v___x_3908_, 1);
v_fst_3996_ = lean_ctor_get(v_a_3995_, 0);
lean_inc(v_fst_3996_);
v_snd_3997_ = lean_ctor_get(v_a_3995_, 1);
lean_inc(v_snd_3997_);
lean_dec(v_a_3995_);
v_fst_3894_ = v_fst_3996_;
v_snd_3895_ = v_snd_3997_;
goto v___jp_3893_;
}
else
{
lean_object* v_a_3998_; lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4005_; 
lean_dec_ref(v_bs_x27_3892_);
v_a_3998_ = lean_ctor_get(v___x_3908_, 0);
v_isSharedCheck_4005_ = !lean_is_exclusive(v___x_3908_);
if (v_isSharedCheck_4005_ == 0)
{
v___x_4000_ = v___x_3908_;
v_isShared_4001_ = v_isSharedCheck_4005_;
goto v_resetjp_3999_;
}
else
{
lean_inc(v_a_3998_);
lean_dec(v___x_3908_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4005_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v___x_4003_; 
if (v_isShared_4001_ == 0)
{
v___x_4003_ = v___x_4000_;
goto v_reusejp_4002_;
}
else
{
lean_object* v_reuseFailAlloc_4004_; 
v_reuseFailAlloc_4004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4004_, 0, v_a_3998_);
v___x_4003_ = v_reuseFailAlloc_4004_;
goto v_reusejp_4002_;
}
v_reusejp_4002_:
{
return v___x_4003_;
}
}
}
}
}
}
else
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4014_; 
lean_dec_ref(v_bs_x27_3892_);
lean_dec_ref(v_type_3890_);
lean_dec(v_levelParams_3889_);
lean_dec(v_numFields_3886_);
lean_dec(v_numParams_3885_);
lean_dec(v_cidx_3884_);
lean_dec(v_induct_3883_);
v_a_4007_ = lean_ctor_get(v___x_3901_, 0);
v_isSharedCheck_4014_ = !lean_is_exclusive(v___x_3901_);
if (v_isSharedCheck_4014_ == 0)
{
v___x_4009_ = v___x_3901_;
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v___x_3901_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
lean_object* v___x_4012_; 
if (v_isShared_4010_ == 0)
{
v___x_4012_ = v___x_4009_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_a_4007_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
}
v___jp_3893_:
{
size_t v___x_3896_; size_t v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v___x_3896_ = ((size_t)1ULL);
v___x_3897_ = lean_usize_add(v_i_3871_, v___x_3896_);
v___x_3898_ = l_unsafeCast___redArg(v_fst_3894_);
lean_dec(v_fst_3894_);
v___x_3899_ = lean_array_uset(v_bs_x27_3892_, v_i_3871_, v___x_3898_);
v_i_3871_ = v___x_3897_;
v_bs_3872_ = v___x_3899_;
v___y_3874_ = v_snd_3895_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___boxed(lean_object* v_sz_4015_, lean_object* v_i_4016_, lean_object* v_bs_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_){
_start:
{
size_t v_sz_boxed_4021_; size_t v_i_boxed_4022_; lean_object* v_res_4023_; 
v_sz_boxed_4021_ = lean_unbox_usize(v_sz_4015_);
lean_dec(v_sz_4015_);
v_i_boxed_4022_ = lean_unbox_usize(v_i_4016_);
lean_dec(v_i_4016_);
v_res_4023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(v_sz_boxed_4021_, v_i_boxed_4022_, v_bs_4017_, v___y_4018_, v___y_4019_);
lean_dec_ref(v___y_4018_);
return v_res_4023_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(lean_object* v_rule_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_){
_start:
{
lean_object* v_ctor_4030_; lean_object* v_nfields_4031_; lean_object* v_rhs_4032_; lean_object* v___x_4033_; 
v_ctor_4030_ = lean_ctor_get(v_rule_4026_, 0);
lean_inc(v_ctor_4030_);
v_nfields_4031_ = lean_ctor_get(v_rule_4026_, 1);
lean_inc(v_nfields_4031_);
v_rhs_4032_ = lean_ctor_get(v_rule_4026_, 2);
lean_inc_ref(v_rhs_4032_);
lean_dec_ref(v_rule_4026_);
v___x_4033_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_ctor_4030_, v_a_4027_, v_a_4028_);
if (lean_obj_tag(v___x_4033_) == 0)
{
lean_object* v_a_4034_; lean_object* v_fst_4035_; lean_object* v_snd_4036_; lean_object* v___x_4038_; uint8_t v_isShared_4039_; uint8_t v_isSharedCheck_4085_; 
v_a_4034_ = lean_ctor_get(v___x_4033_, 0);
lean_inc(v_a_4034_);
lean_dec_ref_known(v___x_4033_, 1);
v_fst_4035_ = lean_ctor_get(v_a_4034_, 0);
v_snd_4036_ = lean_ctor_get(v_a_4034_, 1);
v_isSharedCheck_4085_ = !lean_is_exclusive(v_a_4034_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4038_ = v_a_4034_;
v_isShared_4039_ = v_isSharedCheck_4085_;
goto v_resetjp_4037_;
}
else
{
lean_inc(v_snd_4036_);
lean_inc(v_fst_4035_);
lean_dec(v_a_4034_);
v___x_4038_ = lean_box(0);
v_isShared_4039_ = v_isSharedCheck_4085_;
goto v_resetjp_4037_;
}
v_resetjp_4037_:
{
lean_object* v___x_4040_; 
v___x_4040_ = l_LeanExport_dumpExpr(v_rhs_4032_, v_a_4027_, v_snd_4036_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4076_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4043_ = v___x_4040_;
v_isShared_4044_ = v_isSharedCheck_4076_;
goto v_resetjp_4042_;
}
else
{
lean_inc(v_a_4041_);
lean_dec(v___x_4040_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4076_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
lean_object* v_fst_4045_; lean_object* v_snd_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4075_; 
v_fst_4045_ = lean_ctor_get(v_a_4041_, 0);
v_snd_4046_ = lean_ctor_get(v_a_4041_, 1);
v_isSharedCheck_4075_ = !lean_is_exclusive(v_a_4041_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4048_ = v_a_4041_;
v_isShared_4049_ = v_isSharedCheck_4075_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_snd_4046_);
lean_inc(v_fst_4045_);
lean_dec(v_a_4041_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4075_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4054_; 
v___x_4050_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2));
v___x_4051_ = l_Lean_JsonNumber_fromNat(v_fst_4035_);
v___x_4052_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4052_, 0, v___x_4051_);
if (v_isShared_4049_ == 0)
{
lean_ctor_set(v___x_4048_, 1, v___x_4052_);
lean_ctor_set(v___x_4048_, 0, v___x_4050_);
v___x_4054_ = v___x_4048_;
goto v_reusejp_4053_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v___x_4050_);
lean_ctor_set(v_reuseFailAlloc_4074_, 1, v___x_4052_);
v___x_4054_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4053_;
}
v_reusejp_4053_:
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4059_; 
v___x_4055_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0));
v___x_4056_ = l_Lean_JsonNumber_fromNat(v_nfields_4031_);
v___x_4057_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4057_, 0, v___x_4056_);
if (v_isShared_4039_ == 0)
{
lean_ctor_set(v___x_4038_, 1, v___x_4057_);
lean_ctor_set(v___x_4038_, 0, v___x_4055_);
v___x_4059_ = v___x_4038_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v___x_4055_);
lean_ctor_set(v_reuseFailAlloc_4073_, 1, v___x_4057_);
v___x_4059_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4071_; 
v___x_4060_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1));
v___x_4061_ = l_Lean_JsonNumber_fromNat(v_fst_4045_);
v___x_4062_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4061_);
v___x_4063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4060_);
lean_ctor_set(v___x_4063_, 1, v___x_4062_);
v___x_4064_ = lean_box(0);
v___x_4065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4063_);
lean_ctor_set(v___x_4065_, 1, v___x_4064_);
v___x_4066_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4066_, 0, v___x_4059_);
lean_ctor_set(v___x_4066_, 1, v___x_4065_);
v___x_4067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4067_, 0, v___x_4054_);
lean_ctor_set(v___x_4067_, 1, v___x_4066_);
v___x_4068_ = l_Lean_Json_mkObj(v___x_4067_);
lean_dec_ref_known(v___x_4067_, 2);
v___x_4069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
lean_ctor_set(v___x_4069_, 1, v_snd_4046_);
if (v_isShared_4044_ == 0)
{
lean_ctor_set(v___x_4043_, 0, v___x_4069_);
v___x_4071_ = v___x_4043_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v___x_4069_);
v___x_4071_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
return v___x_4071_;
}
}
}
}
}
}
else
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4084_; 
lean_del_object(v___x_4038_);
lean_dec(v_fst_4035_);
lean_dec(v_nfields_4031_);
v_a_4077_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4084_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4084_ == 0)
{
v___x_4079_ = v___x_4040_;
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_4040_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4084_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4082_; 
if (v_isShared_4080_ == 0)
{
v___x_4082_ = v___x_4079_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v_a_4077_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
}
}
}
}
}
else
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4093_; 
lean_dec_ref(v_rhs_4032_);
lean_dec(v_nfields_4031_);
v_a_4086_ = lean_ctor_get(v___x_4033_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4033_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4033_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4033_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v___x_4091_; 
if (v_isShared_4089_ == 0)
{
v___x_4091_ = v___x_4088_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4086_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(lean_object* v_x_4094_, lean_object* v_x_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_){
_start:
{
if (lean_obj_tag(v_x_4094_) == 0)
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4099_ = l_List_reverse___redArg(v_x_4095_);
v___x_4100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4099_);
lean_ctor_set(v___x_4100_, 1, v___y_4097_);
v___x_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4100_);
return v___x_4101_;
}
else
{
lean_object* v_head_4102_; lean_object* v_tail_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4123_; 
v_head_4102_ = lean_ctor_get(v_x_4094_, 0);
v_tail_4103_ = lean_ctor_get(v_x_4094_, 1);
v_isSharedCheck_4123_ = !lean_is_exclusive(v_x_4094_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4105_ = v_x_4094_;
v_isShared_4106_ = v_isSharedCheck_4123_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_tail_4103_);
lean_inc(v_head_4102_);
lean_dec(v_x_4094_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4123_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___x_4107_; 
v___x_4107_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_head_4102_, v___y_4096_, v___y_4097_);
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_object* v_a_4108_; lean_object* v_fst_4109_; lean_object* v_snd_4110_; lean_object* v___x_4112_; 
v_a_4108_ = lean_ctor_get(v___x_4107_, 0);
lean_inc(v_a_4108_);
lean_dec_ref_known(v___x_4107_, 1);
v_fst_4109_ = lean_ctor_get(v_a_4108_, 0);
lean_inc(v_fst_4109_);
v_snd_4110_ = lean_ctor_get(v_a_4108_, 1);
lean_inc(v_snd_4110_);
lean_dec(v_a_4108_);
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 1, v_x_4095_);
lean_ctor_set(v___x_4105_, 0, v_fst_4109_);
v___x_4112_ = v___x_4105_;
goto v_reusejp_4111_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_fst_4109_);
lean_ctor_set(v_reuseFailAlloc_4114_, 1, v_x_4095_);
v___x_4112_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4111_;
}
v_reusejp_4111_:
{
v_x_4094_ = v_tail_4103_;
v_x_4095_ = v___x_4112_;
v___y_4097_ = v_snd_4110_;
goto _start;
}
}
else
{
lean_object* v_a_4115_; lean_object* v___x_4117_; uint8_t v_isShared_4118_; uint8_t v_isSharedCheck_4122_; 
lean_del_object(v___x_4105_);
lean_dec(v_tail_4103_);
lean_dec(v_x_4095_);
v_a_4115_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4122_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4122_ == 0)
{
v___x_4117_ = v___x_4107_;
v_isShared_4118_ = v_isSharedCheck_4122_;
goto v_resetjp_4116_;
}
else
{
lean_inc(v_a_4115_);
lean_dec(v___x_4107_);
v___x_4117_ = lean_box(0);
v_isShared_4118_ = v_isSharedCheck_4122_;
goto v_resetjp_4116_;
}
v_resetjp_4116_:
{
lean_object* v___x_4120_; 
if (v_isShared_4118_ == 0)
{
v___x_4120_ = v___x_4117_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v_a_4115_);
v___x_4120_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
return v___x_4120_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(size_t v_sz_4128_, size_t v_i_4129_, lean_object* v_bs_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_){
_start:
{
uint8_t v___x_4134_; 
v___x_4134_ = lean_usize_dec_lt(v_i_4129_, v_sz_4128_);
if (v___x_4134_ == 0)
{
lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; 
v___x_4135_ = l_unsafeCast___redArg(v_bs_4130_);
lean_dec_ref(v_bs_4130_);
v___x_4136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4136_, 0, v___x_4135_);
lean_ctor_set(v___x_4136_, 1, v___y_4132_);
v___x_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4136_);
return v___x_4137_;
}
else
{
lean_object* v_v_4138_; lean_object* v___x_4139_; lean_object* v_toConstantVal_4140_; lean_object* v_all_4141_; lean_object* v_numParams_4142_; lean_object* v_numIndices_4143_; lean_object* v_numMotives_4144_; lean_object* v_numMinors_4145_; lean_object* v_rules_4146_; uint8_t v_k_4147_; uint8_t v_isUnsafe_4148_; lean_object* v_name_4149_; lean_object* v_levelParams_4150_; lean_object* v_type_4151_; lean_object* v___x_4152_; lean_object* v_bs_x27_4153_; lean_object* v_fst_4155_; lean_object* v_snd_4156_; lean_object* v___y_4163_; lean_object* v___x_4175_; 
v_v_4138_ = lean_array_uget_borrowed(v_bs_4130_, v_i_4129_);
v___x_4139_ = l_unsafeCast___redArg(v_v_4138_);
v_toConstantVal_4140_ = lean_ctor_get(v___x_4139_, 0);
lean_inc_ref(v_toConstantVal_4140_);
v_all_4141_ = lean_ctor_get(v___x_4139_, 1);
lean_inc(v_all_4141_);
v_numParams_4142_ = lean_ctor_get(v___x_4139_, 2);
lean_inc(v_numParams_4142_);
v_numIndices_4143_ = lean_ctor_get(v___x_4139_, 3);
lean_inc(v_numIndices_4143_);
v_numMotives_4144_ = lean_ctor_get(v___x_4139_, 4);
lean_inc(v_numMotives_4144_);
v_numMinors_4145_ = lean_ctor_get(v___x_4139_, 5);
lean_inc(v_numMinors_4145_);
v_rules_4146_ = lean_ctor_get(v___x_4139_, 6);
lean_inc(v_rules_4146_);
v_k_4147_ = lean_ctor_get_uint8(v___x_4139_, sizeof(void*)*7);
v_isUnsafe_4148_ = lean_ctor_get_uint8(v___x_4139_, sizeof(void*)*7 + 1);
lean_dec(v___x_4139_);
v_name_4149_ = lean_ctor_get(v_toConstantVal_4140_, 0);
lean_inc(v_name_4149_);
v_levelParams_4150_ = lean_ctor_get(v_toConstantVal_4140_, 1);
lean_inc(v_levelParams_4150_);
v_type_4151_ = lean_ctor_get(v_toConstantVal_4140_, 2);
lean_inc_ref(v_type_4151_);
lean_dec_ref(v_toConstantVal_4140_);
v___x_4152_ = lean_unsigned_to_nat(0u);
v_bs_x27_4153_ = lean_array_uset(v_bs_4130_, v_i_4129_, v___x_4152_);
v___x_4175_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4149_, v___y_4131_, v___y_4132_);
if (lean_obj_tag(v___x_4175_) == 0)
{
lean_object* v_a_4176_; lean_object* v_fst_4177_; lean_object* v_snd_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4302_; 
v_a_4176_ = lean_ctor_get(v___x_4175_, 0);
lean_inc(v_a_4176_);
lean_dec_ref_known(v___x_4175_, 1);
v_fst_4177_ = lean_ctor_get(v_a_4176_, 0);
v_snd_4178_ = lean_ctor_get(v_a_4176_, 1);
v_isSharedCheck_4302_ = !lean_is_exclusive(v_a_4176_);
if (v_isSharedCheck_4302_ == 0)
{
v___x_4180_ = v_a_4176_;
v_isShared_4181_ = v_isSharedCheck_4302_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_snd_4178_);
lean_inc(v_fst_4177_);
lean_dec(v_a_4176_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4302_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4182_; 
v___x_4182_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4150_, v___y_4131_, v_snd_4178_);
if (lean_obj_tag(v___x_4182_) == 0)
{
lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4301_; 
v_a_4183_ = lean_ctor_get(v___x_4182_, 0);
v_isSharedCheck_4301_ = !lean_is_exclusive(v___x_4182_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4185_ = v___x_4182_;
v_isShared_4186_ = v_isSharedCheck_4301_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v___x_4182_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4301_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v_fst_4187_; lean_object* v_snd_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4300_; 
v_fst_4187_ = lean_ctor_get(v_a_4183_, 0);
v_snd_4188_ = lean_ctor_get(v_a_4183_, 1);
v_isSharedCheck_4300_ = !lean_is_exclusive(v_a_4183_);
if (v_isSharedCheck_4300_ == 0)
{
v___x_4190_ = v_a_4183_;
v_isShared_4191_ = v_isSharedCheck_4300_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_snd_4188_);
lean_inc(v_fst_4187_);
lean_dec(v_a_4183_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4300_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4192_; 
v___x_4192_ = l_LeanExport_dumpExpr(v_type_4151_, v___y_4131_, v_snd_4188_);
if (lean_obj_tag(v___x_4192_) == 0)
{
lean_object* v_a_4193_; lean_object* v_fst_4194_; lean_object* v_snd_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4291_; 
v_a_4193_ = lean_ctor_get(v___x_4192_, 0);
lean_inc(v_a_4193_);
lean_dec_ref_known(v___x_4192_, 1);
v_fst_4194_ = lean_ctor_get(v_a_4193_, 0);
v_snd_4195_ = lean_ctor_get(v_a_4193_, 1);
v_isSharedCheck_4291_ = !lean_is_exclusive(v_a_4193_);
if (v_isSharedCheck_4291_ == 0)
{
v___x_4197_ = v_a_4193_;
v_isShared_4198_ = v_isSharedCheck_4291_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_snd_4195_);
lean_inc(v_fst_4194_);
lean_dec(v_a_4193_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4291_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4199_; 
v___x_4199_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_4141_, v___y_4131_, v_snd_4195_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v_a_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4290_; 
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4290_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4290_ == 0)
{
v___x_4202_ = v___x_4199_;
v_isShared_4203_ = v_isSharedCheck_4290_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_a_4200_);
lean_dec(v___x_4199_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4290_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
lean_object* v_fst_4204_; lean_object* v_snd_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4289_; 
v_fst_4204_ = lean_ctor_get(v_a_4200_, 0);
v_snd_4205_ = lean_ctor_get(v_a_4200_, 1);
v_isSharedCheck_4289_ = !lean_is_exclusive(v_a_4200_);
if (v_isSharedCheck_4289_ == 0)
{
v___x_4207_ = v_a_4200_;
v_isShared_4208_ = v_isSharedCheck_4289_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_snd_4205_);
lean_inc(v_fst_4204_);
lean_dec(v_a_4200_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4289_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4209_ = lean_box(0);
v___x_4210_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_rules_4146_, v___x_4209_, v___y_4131_, v_snd_4205_);
if (lean_obj_tag(v___x_4210_) == 0)
{
lean_object* v_a_4211_; lean_object* v_fst_4212_; lean_object* v_snd_4213_; lean_object* v___x_4215_; uint8_t v_isShared_4216_; uint8_t v_isSharedCheck_4280_; 
v_a_4211_ = lean_ctor_get(v___x_4210_, 0);
lean_inc(v_a_4211_);
lean_dec_ref_known(v___x_4210_, 1);
v_fst_4212_ = lean_ctor_get(v_a_4211_, 0);
v_snd_4213_ = lean_ctor_get(v_a_4211_, 1);
v_isSharedCheck_4280_ = !lean_is_exclusive(v_a_4211_);
if (v_isSharedCheck_4280_ == 0)
{
v___x_4215_ = v_a_4211_;
v_isShared_4216_ = v_isSharedCheck_4280_;
goto v_resetjp_4214_;
}
else
{
lean_inc(v_snd_4213_);
lean_inc(v_fst_4212_);
lean_dec(v_a_4211_);
v___x_4215_ = lean_box(0);
v_isShared_4216_ = v_isSharedCheck_4280_;
goto v_resetjp_4214_;
}
v_resetjp_4214_:
{
lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4220_; 
v___x_4217_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4218_ = l_Lean_JsonNumber_fromNat(v_fst_4177_);
if (v_isShared_4203_ == 0)
{
lean_ctor_set_tag(v___x_4202_, 2);
lean_ctor_set(v___x_4202_, 0, v___x_4218_);
v___x_4220_ = v___x_4202_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4279_; 
v_reuseFailAlloc_4279_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4279_, 0, v___x_4218_);
v___x_4220_ = v_reuseFailAlloc_4279_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
lean_object* v___x_4222_; 
if (v_isShared_4216_ == 0)
{
lean_ctor_set(v___x_4215_, 1, v___x_4220_);
lean_ctor_set(v___x_4215_, 0, v___x_4217_);
v___x_4222_ = v___x_4215_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v___x_4217_);
lean_ctor_set(v_reuseFailAlloc_4278_, 1, v___x_4220_);
v___x_4222_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
lean_object* v___x_4223_; lean_object* v___x_4225_; 
v___x_4223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_4208_ == 0)
{
lean_ctor_set(v___x_4207_, 1, v_fst_4187_);
lean_ctor_set(v___x_4207_, 0, v___x_4223_);
v___x_4225_ = v___x_4207_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v___x_4223_);
lean_ctor_set(v_reuseFailAlloc_4277_, 1, v_fst_4187_);
v___x_4225_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4229_; 
v___x_4226_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4227_ = l_Lean_JsonNumber_fromNat(v_fst_4194_);
if (v_isShared_4186_ == 0)
{
lean_ctor_set_tag(v___x_4185_, 2);
lean_ctor_set(v___x_4185_, 0, v___x_4227_);
v___x_4229_ = v___x_4185_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4276_; 
v_reuseFailAlloc_4276_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4276_, 0, v___x_4227_);
v___x_4229_ = v_reuseFailAlloc_4276_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
lean_object* v___x_4231_; 
if (v_isShared_4198_ == 0)
{
lean_ctor_set(v___x_4197_, 1, v___x_4229_);
lean_ctor_set(v___x_4197_, 0, v___x_4226_);
v___x_4231_ = v___x_4197_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v___x_4226_);
lean_ctor_set(v_reuseFailAlloc_4275_, 1, v___x_4229_);
v___x_4231_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
lean_object* v___x_4232_; lean_object* v___x_4234_; 
v___x_4232_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4191_ == 0)
{
lean_ctor_set(v___x_4190_, 1, v_fst_4204_);
lean_ctor_set(v___x_4190_, 0, v___x_4232_);
v___x_4234_ = v___x_4190_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v___x_4232_);
lean_ctor_set(v_reuseFailAlloc_4274_, 1, v_fst_4204_);
v___x_4234_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4239_; 
v___x_4235_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4));
v___x_4236_ = l_Lean_JsonNumber_fromNat(v_numParams_4142_);
v___x_4237_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4237_, 0, v___x_4236_);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 1, v___x_4237_);
lean_ctor_set(v___x_4180_, 0, v___x_4235_);
v___x_4239_ = v___x_4180_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v___x_4235_);
lean_ctor_set(v_reuseFailAlloc_4273_, 1, v___x_4237_);
v___x_4239_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; 
v___x_4240_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4241_ = l_Lean_JsonNumber_fromNat(v_numIndices_4143_);
v___x_4242_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4241_);
v___x_4243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4240_);
lean_ctor_set(v___x_4243_, 1, v___x_4242_);
v___x_4244_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__0));
v___x_4245_ = l_Lean_JsonNumber_fromNat(v_numMotives_4144_);
v___x_4246_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4246_, 0, v___x_4245_);
v___x_4247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4247_, 0, v___x_4244_);
lean_ctor_set(v___x_4247_, 1, v___x_4246_);
v___x_4248_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__1));
v___x_4249_ = l_Lean_JsonNumber_fromNat(v_numMinors_4145_);
v___x_4250_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4250_, 0, v___x_4249_);
v___x_4251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4251_, 0, v___x_4248_);
lean_ctor_set(v___x_4251_, 1, v___x_4250_);
v___x_4252_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__2));
v___x_4253_ = l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(v_fst_4212_);
v___x_4254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4254_, 0, v___x_4252_);
lean_ctor_set(v___x_4254_, 1, v___x_4253_);
v___x_4255_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__3));
v___x_4256_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4256_, 0, v_k_4147_);
v___x_4257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4257_, 0, v___x_4255_);
lean_ctor_set(v___x_4257_, 1, v___x_4256_);
v___x_4258_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_4259_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4259_, 0, v_isUnsafe_4148_);
v___x_4260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4258_);
lean_ctor_set(v___x_4260_, 1, v___x_4259_);
v___x_4261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4261_, 0, v___x_4260_);
lean_ctor_set(v___x_4261_, 1, v___x_4209_);
v___x_4262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4262_, 0, v___x_4257_);
lean_ctor_set(v___x_4262_, 1, v___x_4261_);
v___x_4263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4263_, 0, v___x_4254_);
lean_ctor_set(v___x_4263_, 1, v___x_4262_);
v___x_4264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4264_, 0, v___x_4251_);
lean_ctor_set(v___x_4264_, 1, v___x_4263_);
v___x_4265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___x_4247_);
lean_ctor_set(v___x_4265_, 1, v___x_4264_);
v___x_4266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4266_, 0, v___x_4243_);
lean_ctor_set(v___x_4266_, 1, v___x_4265_);
v___x_4267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4267_, 0, v___x_4239_);
lean_ctor_set(v___x_4267_, 1, v___x_4266_);
v___x_4268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4234_);
lean_ctor_set(v___x_4268_, 1, v___x_4267_);
v___x_4269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4231_);
lean_ctor_set(v___x_4269_, 1, v___x_4268_);
v___x_4270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4225_);
lean_ctor_set(v___x_4270_, 1, v___x_4269_);
v___x_4271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4271_, 0, v___x_4222_);
lean_ctor_set(v___x_4271_, 1, v___x_4270_);
v___x_4272_ = l_Lean_Json_mkObj(v___x_4271_);
lean_dec_ref_known(v___x_4271_, 2);
v_fst_4155_ = v___x_4272_;
v_snd_4156_ = v_snd_4213_;
goto v___jp_4154_;
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
lean_object* v_a_4281_; lean_object* v___x_4283_; uint8_t v_isShared_4284_; uint8_t v_isSharedCheck_4288_; 
lean_del_object(v___x_4207_);
lean_dec(v_fst_4204_);
lean_del_object(v___x_4202_);
lean_del_object(v___x_4197_);
lean_dec(v_fst_4194_);
lean_del_object(v___x_4190_);
lean_dec(v_fst_4187_);
lean_del_object(v___x_4185_);
lean_del_object(v___x_4180_);
lean_dec(v_fst_4177_);
lean_dec_ref(v_bs_x27_4153_);
lean_dec(v_numMinors_4145_);
lean_dec(v_numMotives_4144_);
lean_dec(v_numIndices_4143_);
lean_dec(v_numParams_4142_);
v_a_4281_ = lean_ctor_get(v___x_4210_, 0);
v_isSharedCheck_4288_ = !lean_is_exclusive(v___x_4210_);
if (v_isSharedCheck_4288_ == 0)
{
v___x_4283_ = v___x_4210_;
v_isShared_4284_ = v_isSharedCheck_4288_;
goto v_resetjp_4282_;
}
else
{
lean_inc(v_a_4281_);
lean_dec(v___x_4210_);
v___x_4283_ = lean_box(0);
v_isShared_4284_ = v_isSharedCheck_4288_;
goto v_resetjp_4282_;
}
v_resetjp_4282_:
{
lean_object* v___x_4286_; 
if (v_isShared_4284_ == 0)
{
v___x_4286_ = v___x_4283_;
goto v_reusejp_4285_;
}
else
{
lean_object* v_reuseFailAlloc_4287_; 
v_reuseFailAlloc_4287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4287_, 0, v_a_4281_);
v___x_4286_ = v_reuseFailAlloc_4287_;
goto v_reusejp_4285_;
}
v_reusejp_4285_:
{
return v___x_4286_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4197_);
lean_dec(v_fst_4194_);
lean_del_object(v___x_4190_);
lean_dec(v_fst_4187_);
lean_del_object(v___x_4185_);
lean_del_object(v___x_4180_);
lean_dec(v_fst_4177_);
lean_dec(v_rules_4146_);
lean_dec(v_numMinors_4145_);
lean_dec(v_numMotives_4144_);
lean_dec(v_numIndices_4143_);
lean_dec(v_numParams_4142_);
v___y_4163_ = v___x_4199_;
goto v___jp_4162_;
}
}
}
else
{
lean_object* v_a_4292_; lean_object* v___x_4294_; uint8_t v_isShared_4295_; uint8_t v_isSharedCheck_4299_; 
lean_del_object(v___x_4190_);
lean_dec(v_fst_4187_);
lean_del_object(v___x_4185_);
lean_del_object(v___x_4180_);
lean_dec(v_fst_4177_);
lean_dec_ref(v_bs_x27_4153_);
lean_dec(v_rules_4146_);
lean_dec(v_numMinors_4145_);
lean_dec(v_numMotives_4144_);
lean_dec(v_numIndices_4143_);
lean_dec(v_numParams_4142_);
lean_dec(v_all_4141_);
v_a_4292_ = lean_ctor_get(v___x_4192_, 0);
v_isSharedCheck_4299_ = !lean_is_exclusive(v___x_4192_);
if (v_isSharedCheck_4299_ == 0)
{
v___x_4294_ = v___x_4192_;
v_isShared_4295_ = v_isSharedCheck_4299_;
goto v_resetjp_4293_;
}
else
{
lean_inc(v_a_4292_);
lean_dec(v___x_4192_);
v___x_4294_ = lean_box(0);
v_isShared_4295_ = v_isSharedCheck_4299_;
goto v_resetjp_4293_;
}
v_resetjp_4293_:
{
lean_object* v___x_4297_; 
if (v_isShared_4295_ == 0)
{
v___x_4297_ = v___x_4294_;
goto v_reusejp_4296_;
}
else
{
lean_object* v_reuseFailAlloc_4298_; 
v_reuseFailAlloc_4298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4298_, 0, v_a_4292_);
v___x_4297_ = v_reuseFailAlloc_4298_;
goto v_reusejp_4296_;
}
v_reusejp_4296_:
{
return v___x_4297_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_4180_);
lean_dec(v_fst_4177_);
lean_dec_ref(v_type_4151_);
lean_dec(v_rules_4146_);
lean_dec(v_numMinors_4145_);
lean_dec(v_numMotives_4144_);
lean_dec(v_numIndices_4143_);
lean_dec(v_numParams_4142_);
lean_dec(v_all_4141_);
v___y_4163_ = v___x_4182_;
goto v___jp_4162_;
}
}
}
else
{
lean_object* v_a_4303_; lean_object* v___x_4305_; uint8_t v_isShared_4306_; uint8_t v_isSharedCheck_4310_; 
lean_dec_ref(v_bs_x27_4153_);
lean_dec_ref(v_type_4151_);
lean_dec(v_levelParams_4150_);
lean_dec(v_rules_4146_);
lean_dec(v_numMinors_4145_);
lean_dec(v_numMotives_4144_);
lean_dec(v_numIndices_4143_);
lean_dec(v_numParams_4142_);
lean_dec(v_all_4141_);
v_a_4303_ = lean_ctor_get(v___x_4175_, 0);
v_isSharedCheck_4310_ = !lean_is_exclusive(v___x_4175_);
if (v_isSharedCheck_4310_ == 0)
{
v___x_4305_ = v___x_4175_;
v_isShared_4306_ = v_isSharedCheck_4310_;
goto v_resetjp_4304_;
}
else
{
lean_inc(v_a_4303_);
lean_dec(v___x_4175_);
v___x_4305_ = lean_box(0);
v_isShared_4306_ = v_isSharedCheck_4310_;
goto v_resetjp_4304_;
}
v_resetjp_4304_:
{
lean_object* v___x_4308_; 
if (v_isShared_4306_ == 0)
{
v___x_4308_ = v___x_4305_;
goto v_reusejp_4307_;
}
else
{
lean_object* v_reuseFailAlloc_4309_; 
v_reuseFailAlloc_4309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4309_, 0, v_a_4303_);
v___x_4308_ = v_reuseFailAlloc_4309_;
goto v_reusejp_4307_;
}
v_reusejp_4307_:
{
return v___x_4308_;
}
}
}
v___jp_4154_:
{
size_t v___x_4157_; size_t v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4157_ = ((size_t)1ULL);
v___x_4158_ = lean_usize_add(v_i_4129_, v___x_4157_);
v___x_4159_ = l_unsafeCast___redArg(v_fst_4155_);
lean_dec(v_fst_4155_);
v___x_4160_ = lean_array_uset(v_bs_x27_4153_, v_i_4129_, v___x_4159_);
v_i_4129_ = v___x_4158_;
v_bs_4130_ = v___x_4160_;
v___y_4132_ = v_snd_4156_;
goto _start;
}
v___jp_4162_:
{
if (lean_obj_tag(v___y_4163_) == 0)
{
lean_object* v_a_4164_; lean_object* v_fst_4165_; lean_object* v_snd_4166_; 
v_a_4164_ = lean_ctor_get(v___y_4163_, 0);
lean_inc(v_a_4164_);
lean_dec_ref_known(v___y_4163_, 1);
v_fst_4165_ = lean_ctor_get(v_a_4164_, 0);
lean_inc(v_fst_4165_);
v_snd_4166_ = lean_ctor_get(v_a_4164_, 1);
lean_inc(v_snd_4166_);
lean_dec(v_a_4164_);
v_fst_4155_ = v_fst_4165_;
v_snd_4156_ = v_snd_4166_;
goto v___jp_4154_;
}
else
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4174_; 
lean_dec_ref(v_bs_x27_4153_);
v_a_4167_ = lean_ctor_get(v___y_4163_, 0);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___y_4163_);
if (v_isSharedCheck_4174_ == 0)
{
v___x_4169_ = v___y_4163_;
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___y_4163_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_a_4167_);
v___x_4172_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
return v___x_4172_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___boxed(lean_object* v_sz_4311_, lean_object* v_i_4312_, lean_object* v_bs_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_){
_start:
{
size_t v_sz_boxed_4317_; size_t v_i_boxed_4318_; lean_object* v_res_4319_; 
v_sz_boxed_4317_ = lean_unbox_usize(v_sz_4311_);
lean_dec(v_sz_4311_);
v_i_boxed_4318_ = lean_unbox_usize(v_i_4312_);
lean_dec(v_i_4312_);
v_res_4319_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(v_sz_boxed_4317_, v_i_boxed_4318_, v_bs_4313_, v___y_4314_, v___y_4315_);
lean_dec_ref(v___y_4314_);
return v_res_4319_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(uint8_t v___x_4368_, lean_object* v_as_x27_4369_, lean_object* v_b_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_){
_start:
{
if (lean_obj_tag(v_as_x27_4369_) == 0)
{
lean_object* v___x_4374_; lean_object* v___x_4375_; 
v___x_4374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4374_, 0, v_b_4370_);
lean_ctor_set(v___x_4374_, 1, v___y_4372_);
v___x_4375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4375_, 0, v___x_4374_);
return v___x_4375_;
}
else
{
lean_object* v_head_4376_; lean_object* v_tail_4377_; lean_object* v___x_4378_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___x_4409_; 
lean_dec_ref(v_b_4370_);
v_head_4376_ = lean_ctor_get(v_as_x27_4369_, 0);
v_tail_4377_ = lean_ctor_get(v_as_x27_4369_, 1);
v___x_4378_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
lean_inc(v_head_4376_);
lean_inc_ref(v___y_4371_);
v___x_4409_ = l_Lean_Environment_find_x3f(v___y_4371_, v_head_4376_, v___x_4368_);
if (lean_obj_tag(v___x_4409_) == 1)
{
lean_object* v_val_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4533_; 
v_val_4410_ = lean_ctor_get(v___x_4409_, 0);
v_isSharedCheck_4533_ = !lean_is_exclusive(v___x_4409_);
if (v_isSharedCheck_4533_ == 0)
{
v___x_4412_ = v___x_4409_;
v_isShared_4413_ = v_isSharedCheck_4533_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_val_4410_);
lean_dec(v___x_4409_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4533_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
if (lean_obj_tag(v_val_4410_) == 4)
{
lean_object* v_val_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4532_; 
v_val_4414_ = lean_ctor_get(v_val_4410_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v_val_4410_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4416_ = v_val_4410_;
v_isShared_4417_ = v_isSharedCheck_4532_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_val_4414_);
lean_dec(v_val_4410_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4532_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v_toConstantVal_4418_; lean_object* v_visitedNames_4419_; lean_object* v_visitedLevels_4420_; lean_object* v_visitedExprs_4421_; lean_object* v_visitedConstants_4422_; lean_object* v_noMDataExprs_4423_; uint8_t v_exportMData_4424_; uint8_t v_exportUnsafe_4425_; uint8_t v_ignoreMissing_4426_; lean_object* v_recursorMap_4427_; lean_object* v___x_4429_; uint8_t v_isShared_4430_; uint8_t v_isSharedCheck_4531_; 
v_toConstantVal_4418_ = lean_ctor_get(v_val_4414_, 0);
lean_inc_ref(v_toConstantVal_4418_);
v_visitedNames_4419_ = lean_ctor_get(v___y_4372_, 0);
v_visitedLevels_4420_ = lean_ctor_get(v___y_4372_, 1);
v_visitedExprs_4421_ = lean_ctor_get(v___y_4372_, 2);
v_visitedConstants_4422_ = lean_ctor_get(v___y_4372_, 3);
v_noMDataExprs_4423_ = lean_ctor_get(v___y_4372_, 4);
v_exportMData_4424_ = lean_ctor_get_uint8(v___y_4372_, sizeof(void*)*6);
v_exportUnsafe_4425_ = lean_ctor_get_uint8(v___y_4372_, sizeof(void*)*6 + 1);
v_ignoreMissing_4426_ = lean_ctor_get_uint8(v___y_4372_, sizeof(void*)*6 + 2);
v_recursorMap_4427_ = lean_ctor_get(v___y_4372_, 5);
v_isSharedCheck_4531_ = !lean_is_exclusive(v___y_4372_);
if (v_isSharedCheck_4531_ == 0)
{
v___x_4429_ = v___y_4372_;
v_isShared_4430_ = v_isSharedCheck_4531_;
goto v_resetjp_4428_;
}
else
{
lean_inc(v_recursorMap_4427_);
lean_inc(v_noMDataExprs_4423_);
lean_inc(v_visitedConstants_4422_);
lean_inc(v_visitedExprs_4421_);
lean_inc(v_visitedLevels_4420_);
lean_inc(v_visitedNames_4419_);
lean_dec(v___y_4372_);
v___x_4429_ = lean_box(0);
v_isShared_4430_ = v_isSharedCheck_4531_;
goto v_resetjp_4428_;
}
v_resetjp_4428_:
{
uint8_t v_kind_4431_; lean_object* v_name_4432_; lean_object* v_levelParams_4433_; lean_object* v_type_4434_; lean_object* v___x_4435_; lean_object* v___x_4437_; 
v_kind_4431_ = lean_ctor_get_uint8(v_val_4414_, sizeof(void*)*1);
lean_dec_ref(v_val_4414_);
v_name_4432_ = lean_ctor_get(v_toConstantVal_4418_, 0);
lean_inc(v_name_4432_);
v_levelParams_4433_ = lean_ctor_get(v_toConstantVal_4418_, 1);
lean_inc(v_levelParams_4433_);
v_type_4434_ = lean_ctor_get(v_toConstantVal_4418_, 2);
lean_inc_ref(v_type_4434_);
lean_dec_ref(v_toConstantVal_4418_);
lean_inc(v_head_4376_);
v___x_4435_ = l_Lean_NameHashSet_insert(v_visitedConstants_4422_, v_head_4376_);
if (v_isShared_4430_ == 0)
{
lean_ctor_set(v___x_4429_, 3, v___x_4435_);
v___x_4437_ = v___x_4429_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4530_; 
v_reuseFailAlloc_4530_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4530_, 0, v_visitedNames_4419_);
lean_ctor_set(v_reuseFailAlloc_4530_, 1, v_visitedLevels_4420_);
lean_ctor_set(v_reuseFailAlloc_4530_, 2, v_visitedExprs_4421_);
lean_ctor_set(v_reuseFailAlloc_4530_, 3, v___x_4435_);
lean_ctor_set(v_reuseFailAlloc_4530_, 4, v_noMDataExprs_4423_);
lean_ctor_set(v_reuseFailAlloc_4530_, 5, v_recursorMap_4427_);
lean_ctor_set_uint8(v_reuseFailAlloc_4530_, sizeof(void*)*6, v_exportMData_4424_);
lean_ctor_set_uint8(v_reuseFailAlloc_4530_, sizeof(void*)*6 + 1, v_exportUnsafe_4425_);
lean_ctor_set_uint8(v_reuseFailAlloc_4530_, sizeof(void*)*6 + 2, v_ignoreMissing_4426_);
v___x_4437_ = v_reuseFailAlloc_4530_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
lean_object* v___x_4438_; 
v___x_4438_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4432_, v___y_4371_, v___x_4437_);
if (lean_obj_tag(v___x_4438_) == 0)
{
lean_object* v_a_4439_; lean_object* v_fst_4440_; lean_object* v_snd_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4521_; 
v_a_4439_ = lean_ctor_get(v___x_4438_, 0);
lean_inc(v_a_4439_);
lean_dec_ref_known(v___x_4438_, 1);
v_fst_4440_ = lean_ctor_get(v_a_4439_, 0);
v_snd_4441_ = lean_ctor_get(v_a_4439_, 1);
v_isSharedCheck_4521_ = !lean_is_exclusive(v_a_4439_);
if (v_isSharedCheck_4521_ == 0)
{
v___x_4443_ = v_a_4439_;
v_isShared_4444_ = v_isSharedCheck_4521_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_snd_4441_);
lean_inc(v_fst_4440_);
lean_dec(v_a_4439_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4521_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4445_; 
v___x_4445_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4433_, v___y_4371_, v_snd_4441_);
if (lean_obj_tag(v___x_4445_) == 0)
{
lean_object* v_a_4446_; lean_object* v_fst_4447_; lean_object* v_snd_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4512_; 
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
lean_inc(v_a_4446_);
lean_dec_ref_known(v___x_4445_, 1);
v_fst_4447_ = lean_ctor_get(v_a_4446_, 0);
v_snd_4448_ = lean_ctor_get(v_a_4446_, 1);
v_isSharedCheck_4512_ = !lean_is_exclusive(v_a_4446_);
if (v_isSharedCheck_4512_ == 0)
{
v___x_4450_ = v_a_4446_;
v_isShared_4451_ = v_isSharedCheck_4512_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_snd_4448_);
lean_inc(v_fst_4447_);
lean_dec(v_a_4446_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4512_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4452_; 
v___x_4452_ = l_LeanExport_dumpExpr(v_type_4434_, v___y_4371_, v_snd_4448_);
if (lean_obj_tag(v___x_4452_) == 0)
{
lean_object* v_a_4453_; lean_object* v_fst_4454_; lean_object* v_snd_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4503_; 
v_a_4453_ = lean_ctor_get(v___x_4452_, 0);
lean_inc(v_a_4453_);
lean_dec_ref_known(v___x_4452_, 1);
v_fst_4454_ = lean_ctor_get(v_a_4453_, 0);
v_snd_4455_ = lean_ctor_get(v_a_4453_, 1);
v_isSharedCheck_4503_ = !lean_is_exclusive(v_a_4453_);
if (v_isSharedCheck_4503_ == 0)
{
v___x_4457_ = v_a_4453_;
v_isShared_4458_ = v_isSharedCheck_4503_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_snd_4455_);
lean_inc(v_fst_4454_);
lean_dec(v_a_4453_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4503_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4463_; 
v___x_4459_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5));
v___x_4460_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4461_ = l_Lean_JsonNumber_fromNat(v_fst_4440_);
if (v_isShared_4417_ == 0)
{
lean_ctor_set_tag(v___x_4416_, 2);
lean_ctor_set(v___x_4416_, 0, v___x_4461_);
v___x_4463_ = v___x_4416_;
goto v_reusejp_4462_;
}
else
{
lean_object* v_reuseFailAlloc_4502_; 
v_reuseFailAlloc_4502_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4502_, 0, v___x_4461_);
v___x_4463_ = v_reuseFailAlloc_4502_;
goto v_reusejp_4462_;
}
v_reusejp_4462_:
{
lean_object* v___x_4465_; 
if (v_isShared_4458_ == 0)
{
lean_ctor_set(v___x_4457_, 1, v___x_4463_);
lean_ctor_set(v___x_4457_, 0, v___x_4460_);
v___x_4465_ = v___x_4457_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v___x_4460_);
lean_ctor_set(v_reuseFailAlloc_4501_, 1, v___x_4463_);
v___x_4465_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
lean_object* v___x_4466_; lean_object* v___x_4468_; 
v___x_4466_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_4451_ == 0)
{
lean_ctor_set(v___x_4450_, 1, v_fst_4447_);
lean_ctor_set(v___x_4450_, 0, v___x_4466_);
v___x_4468_ = v___x_4450_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v___x_4466_);
lean_ctor_set(v_reuseFailAlloc_4500_, 1, v_fst_4447_);
v___x_4468_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4472_; 
v___x_4469_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4470_ = l_Lean_JsonNumber_fromNat(v_fst_4454_);
if (v_isShared_4413_ == 0)
{
lean_ctor_set_tag(v___x_4412_, 2);
lean_ctor_set(v___x_4412_, 0, v___x_4470_);
v___x_4472_ = v___x_4412_;
goto v_reusejp_4471_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v___x_4470_);
v___x_4472_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4471_;
}
v_reusejp_4471_:
{
lean_object* v___x_4474_; 
if (v_isShared_4444_ == 0)
{
lean_ctor_set(v___x_4443_, 1, v___x_4472_);
lean_ctor_set(v___x_4443_, 0, v___x_4469_);
v___x_4474_ = v___x_4443_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v___x_4469_);
lean_ctor_set(v_reuseFailAlloc_4498_, 1, v___x_4472_);
v___x_4474_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v___x_4475_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6));
v___x_4476_ = l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(v_kind_4431_);
v___x_4477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4477_, 0, v___x_4475_);
lean_ctor_set(v___x_4477_, 1, v___x_4476_);
v___x_4478_ = lean_box(0);
v___x_4479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4479_, 0, v___x_4477_);
lean_ctor_set(v___x_4479_, 1, v___x_4478_);
v___x_4480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4480_, 0, v___x_4474_);
lean_ctor_set(v___x_4480_, 1, v___x_4479_);
v___x_4481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4481_, 0, v___x_4468_);
lean_ctor_set(v___x_4481_, 1, v___x_4480_);
v___x_4482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4482_, 0, v___x_4465_);
lean_ctor_set(v___x_4482_, 1, v___x_4481_);
v___x_4483_ = l_Lean_Json_mkObj(v___x_4482_);
lean_dec_ref_known(v___x_4482_, 2);
v___x_4484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4484_, 0, v___x_4459_);
lean_ctor_set(v___x_4484_, 1, v___x_4483_);
v___x_4485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4485_, 0, v___x_4484_);
lean_ctor_set(v___x_4485_, 1, v___x_4478_);
v___x_4486_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4485_, v_snd_4455_);
lean_dec_ref_known(v___x_4485_, 2);
if (lean_obj_tag(v___x_4486_) == 0)
{
lean_object* v_a_4487_; lean_object* v_snd_4488_; 
v_a_4487_ = lean_ctor_get(v___x_4486_, 0);
lean_inc(v_a_4487_);
lean_dec_ref_known(v___x_4486_, 1);
v_snd_4488_ = lean_ctor_get(v_a_4487_, 1);
lean_inc(v_snd_4488_);
lean_dec(v_a_4487_);
v_as_x27_4369_ = v_tail_4377_;
v_b_4370_ = v___x_4378_;
v___y_4372_ = v_snd_4488_;
goto _start;
}
else
{
lean_object* v_a_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4497_; 
v_a_4490_ = lean_ctor_get(v___x_4486_, 0);
v_isSharedCheck_4497_ = !lean_is_exclusive(v___x_4486_);
if (v_isSharedCheck_4497_ == 0)
{
v___x_4492_ = v___x_4486_;
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_a_4490_);
lean_dec(v___x_4486_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4495_; 
if (v_isShared_4493_ == 0)
{
v___x_4495_ = v___x_4492_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v_a_4490_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
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
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4511_; 
lean_del_object(v___x_4450_);
lean_dec(v_fst_4447_);
lean_del_object(v___x_4443_);
lean_dec(v_fst_4440_);
lean_del_object(v___x_4416_);
lean_del_object(v___x_4412_);
v_a_4504_ = lean_ctor_get(v___x_4452_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4452_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4506_ = v___x_4452_;
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v___x_4452_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___x_4509_; 
if (v_isShared_4507_ == 0)
{
v___x_4509_ = v___x_4506_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v_a_4504_);
v___x_4509_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
return v___x_4509_;
}
}
}
}
}
else
{
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4520_; 
lean_del_object(v___x_4443_);
lean_dec(v_fst_4440_);
lean_dec_ref(v_type_4434_);
lean_del_object(v___x_4416_);
lean_del_object(v___x_4412_);
v_a_4513_ = lean_ctor_get(v___x_4445_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4515_ = v___x_4445_;
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4445_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4518_; 
if (v_isShared_4516_ == 0)
{
v___x_4518_ = v___x_4515_;
goto v_reusejp_4517_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_a_4513_);
v___x_4518_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4517_;
}
v_reusejp_4517_:
{
return v___x_4518_;
}
}
}
}
}
else
{
lean_object* v_a_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4529_; 
lean_dec_ref(v_type_4434_);
lean_dec(v_levelParams_4433_);
lean_del_object(v___x_4416_);
lean_del_object(v___x_4412_);
v_a_4522_ = lean_ctor_get(v___x_4438_, 0);
v_isSharedCheck_4529_ = !lean_is_exclusive(v___x_4438_);
if (v_isSharedCheck_4529_ == 0)
{
v___x_4524_ = v___x_4438_;
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_a_4522_);
lean_dec(v___x_4438_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
lean_object* v___x_4527_; 
if (v_isShared_4525_ == 0)
{
v___x_4527_ = v___x_4524_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4528_; 
v_reuseFailAlloc_4528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4528_, 0, v_a_4522_);
v___x_4527_ = v_reuseFailAlloc_4528_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
return v___x_4527_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_4412_);
lean_dec(v_val_4410_);
v___y_4380_ = v___y_4371_;
v___y_4381_ = v___y_4372_;
goto v___jp_4379_;
}
}
}
else
{
lean_dec(v___x_4409_);
v___y_4380_ = v___y_4371_;
v___y_4381_ = v___y_4372_;
goto v___jp_4379_;
}
v___jp_4379_:
{
uint8_t v_ignoreMissing_4382_; 
v_ignoreMissing_4382_ = lean_ctor_get_uint8(v___y_4381_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_4382_ == 0)
{
lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; uint8_t v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; 
v___x_4383_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4384_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_4385_ = lean_unsigned_to_nat(313u);
v___x_4386_ = lean_unsigned_to_nat(52u);
v___x_4387_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_4388_ = 1;
lean_inc(v_head_4376_);
v___x_4389_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_4376_, v___x_4388_);
v___x_4390_ = lean_string_append(v___x_4387_, v___x_4389_);
lean_dec_ref(v___x_4389_);
v___x_4391_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_4392_ = lean_string_append(v___x_4390_, v___x_4391_);
v___x_4393_ = l_mkPanicMessageWithDecl(v___x_4383_, v___x_4384_, v___x_4385_, v___x_4386_, v___x_4392_);
lean_dec_ref(v___x_4392_);
v___x_4394_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_4393_, v___y_4380_, v___y_4381_);
if (lean_obj_tag(v___x_4394_) == 0)
{
lean_object* v_a_4395_; lean_object* v_snd_4396_; 
v_a_4395_ = lean_ctor_get(v___x_4394_, 0);
lean_inc(v_a_4395_);
lean_dec_ref_known(v___x_4394_, 1);
v_snd_4396_ = lean_ctor_get(v_a_4395_, 1);
lean_inc(v_snd_4396_);
lean_dec(v_a_4395_);
v_as_x27_4369_ = v_tail_4377_;
v_b_4370_ = v___x_4378_;
v___y_4372_ = v_snd_4396_;
goto _start;
}
else
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4405_; 
v_a_4398_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4400_ = v___x_4394_;
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v___x_4394_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4403_; 
if (v_isShared_4401_ == 0)
{
v___x_4403_ = v___x_4400_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v_a_4398_);
v___x_4403_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
return v___x_4403_;
}
}
}
}
else
{
lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; 
v___x_4406_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4));
v___x_4407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4407_, 0, v___x_4406_);
lean_ctor_set(v___x_4407_, 1, v___y_4381_);
v___x_4408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4408_, 0, v___x_4407_);
return v___x_4408_;
}
}
}
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__21(void){
_start:
{
lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; 
v___x_4536_ = l_Lean_NameSet_empty;
v___x_4537_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4538_, 0, v___x_4537_);
lean_ctor_set(v___x_4538_, 1, v___x_4536_);
return v___x_4538_;
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__22(void){
_start:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; 
v___x_4539_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__21, &l_LeanExport_dumpConstant___closed__21_once, _init_l_LeanExport_dumpConstant___closed__21);
v___x_4540_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4541_, 0, v___x_4540_);
lean_ctor_set(v___x_4541_, 1, v___x_4539_);
return v___x_4541_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; 
v___x_4544_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__1));
v___x_4545_ = lean_unsigned_to_nat(11u);
v___x_4546_ = lean_unsigned_to_nat(341u);
v___x_4547_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_4548_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4549_ = l_mkPanicMessageWithDecl(v___x_4548_, v___x_4547_, v___x_4546_, v___x_4545_, v___x_4544_);
return v___x_4549_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4(void){
_start:
{
lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v___x_4551_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__3));
v___x_4552_ = lean_unsigned_to_nat(6u);
v___x_4553_ = lean_unsigned_to_nat(329u);
v___x_4554_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_4555_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4556_ = l_mkPanicMessageWithDecl(v___x_4555_, v___x_4554_, v___x_4553_, v___x_4552_, v___x_4551_);
return v___x_4556_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(uint8_t v___x_4557_, lean_object* v_val_4558_, lean_object* v_as_x27_4559_, lean_object* v_b_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_){
_start:
{
if (lean_obj_tag(v_as_x27_4559_) == 0)
{
lean_object* v___x_4564_; lean_object* v___x_4565_; 
v___x_4564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4564_, 0, v_b_4560_);
lean_ctor_set(v___x_4564_, 1, v___y_4562_);
v___x_4565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4565_, 0, v___x_4564_);
return v___x_4565_;
}
else
{
lean_object* v_head_4566_; lean_object* v_tail_4567_; lean_object* v___y_4569_; lean_object* v_snd_4600_; lean_object* v_fst_4601_; lean_object* v_fst_4602_; lean_object* v_snd_4603_; lean_object* v___y_4605_; uint8_t v___y_4606_; lean_object* v___y_4687_; lean_object* v___x_4694_; 
v_head_4566_ = lean_ctor_get(v_as_x27_4559_, 0);
v_tail_4567_ = lean_ctor_get(v_as_x27_4559_, 1);
v_snd_4600_ = lean_ctor_get(v_b_4560_, 1);
lean_inc(v_snd_4600_);
v_fst_4601_ = lean_ctor_get(v_b_4560_, 0);
lean_inc(v_fst_4601_);
lean_dec_ref(v_b_4560_);
v_fst_4602_ = lean_ctor_get(v_snd_4600_, 0);
lean_inc(v_fst_4602_);
v_snd_4603_ = lean_ctor_get(v_snd_4600_, 1);
lean_inc(v_snd_4603_);
lean_dec(v_snd_4600_);
lean_inc(v_head_4566_);
lean_inc_ref(v___y_4561_);
v___x_4694_ = l_Lean_Environment_find_x3f(v___y_4561_, v_head_4566_, v___x_4557_);
if (lean_obj_tag(v___x_4694_) == 0)
{
lean_object* v___x_4695_; lean_object* v___x_4696_; 
v___x_4695_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8);
v___x_4696_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_4695_);
v___y_4687_ = v___x_4696_;
goto v___jp_4686_;
}
else
{
lean_object* v_val_4697_; 
v_val_4697_ = lean_ctor_get(v___x_4694_, 0);
lean_inc(v_val_4697_);
lean_dec_ref_known(v___x_4694_, 1);
v___y_4687_ = v_val_4697_;
goto v___jp_4686_;
}
v___jp_4568_:
{
if (lean_obj_tag(v___y_4569_) == 0)
{
lean_object* v_a_4570_; lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4591_; 
v_a_4570_ = lean_ctor_get(v___y_4569_, 0);
v_isSharedCheck_4591_ = !lean_is_exclusive(v___y_4569_);
if (v_isSharedCheck_4591_ == 0)
{
v___x_4572_ = v___y_4569_;
v_isShared_4573_ = v_isSharedCheck_4591_;
goto v_resetjp_4571_;
}
else
{
lean_inc(v_a_4570_);
lean_dec(v___y_4569_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4591_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v_fst_4574_; 
v_fst_4574_ = lean_ctor_get(v_a_4570_, 0);
lean_inc(v_fst_4574_);
if (lean_obj_tag(v_fst_4574_) == 0)
{
lean_object* v_snd_4575_; lean_object* v___x_4577_; uint8_t v_isShared_4578_; uint8_t v_isSharedCheck_4586_; 
v_snd_4575_ = lean_ctor_get(v_a_4570_, 1);
v_isSharedCheck_4586_ = !lean_is_exclusive(v_a_4570_);
if (v_isSharedCheck_4586_ == 0)
{
lean_object* v_unused_4587_; 
v_unused_4587_ = lean_ctor_get(v_a_4570_, 0);
lean_dec(v_unused_4587_);
v___x_4577_ = v_a_4570_;
v_isShared_4578_ = v_isSharedCheck_4586_;
goto v_resetjp_4576_;
}
else
{
lean_inc(v_snd_4575_);
lean_dec(v_a_4570_);
v___x_4577_ = lean_box(0);
v_isShared_4578_ = v_isSharedCheck_4586_;
goto v_resetjp_4576_;
}
v_resetjp_4576_:
{
lean_object* v_a_4579_; lean_object* v___x_4581_; 
v_a_4579_ = lean_ctor_get(v_fst_4574_, 0);
lean_inc(v_a_4579_);
lean_dec_ref_known(v_fst_4574_, 1);
if (v_isShared_4578_ == 0)
{
lean_ctor_set(v___x_4577_, 0, v_a_4579_);
v___x_4581_ = v___x_4577_;
goto v_reusejp_4580_;
}
else
{
lean_object* v_reuseFailAlloc_4585_; 
v_reuseFailAlloc_4585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4585_, 0, v_a_4579_);
lean_ctor_set(v_reuseFailAlloc_4585_, 1, v_snd_4575_);
v___x_4581_ = v_reuseFailAlloc_4585_;
goto v_reusejp_4580_;
}
v_reusejp_4580_:
{
lean_object* v___x_4583_; 
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 0, v___x_4581_);
v___x_4583_ = v___x_4572_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v___x_4581_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
return v___x_4583_;
}
}
}
}
else
{
lean_object* v_snd_4588_; lean_object* v_a_4589_; 
lean_del_object(v___x_4572_);
v_snd_4588_ = lean_ctor_get(v_a_4570_, 1);
lean_inc(v_snd_4588_);
lean_dec(v_a_4570_);
v_a_4589_ = lean_ctor_get(v_fst_4574_, 0);
lean_inc(v_a_4589_);
lean_dec_ref_known(v_fst_4574_, 1);
v_as_x27_4559_ = v_tail_4567_;
v_b_4560_ = v_a_4589_;
v___y_4562_ = v_snd_4588_;
goto _start;
}
}
}
else
{
lean_object* v_a_4592_; lean_object* v___x_4594_; uint8_t v_isShared_4595_; uint8_t v_isSharedCheck_4599_; 
v_a_4592_ = lean_ctor_get(v___y_4569_, 0);
v_isSharedCheck_4599_ = !lean_is_exclusive(v___y_4569_);
if (v_isSharedCheck_4599_ == 0)
{
v___x_4594_ = v___y_4569_;
v_isShared_4595_ = v_isSharedCheck_4599_;
goto v_resetjp_4593_;
}
else
{
lean_inc(v_a_4592_);
lean_dec(v___y_4569_);
v___x_4594_ = lean_box(0);
v_isShared_4595_ = v_isSharedCheck_4599_;
goto v_resetjp_4593_;
}
v_resetjp_4593_:
{
lean_object* v___x_4597_; 
if (v_isShared_4595_ == 0)
{
v___x_4597_ = v___x_4594_;
goto v_reusejp_4596_;
}
else
{
lean_object* v_reuseFailAlloc_4598_; 
v_reuseFailAlloc_4598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4598_, 0, v_a_4592_);
v___x_4597_ = v_reuseFailAlloc_4598_;
goto v_reusejp_4596_;
}
v_reusejp_4596_:
{
return v___x_4597_;
}
}
}
}
v___jp_4604_:
{
lean_object* v_toConstantVal_4607_; lean_object* v_ctors_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; 
v_toConstantVal_4607_ = lean_ctor_get(v___y_4605_, 0);
lean_inc_ref(v_toConstantVal_4607_);
v_ctors_4608_ = lean_ctor_get(v___y_4605_, 4);
lean_inc(v_ctors_4608_);
v___x_4609_ = lean_array_push(v_fst_4601_, v___y_4605_);
v___x_4610_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_4606_, v___x_4557_, v_ctors_4608_, v_fst_4602_, v___y_4561_, v___y_4562_);
lean_dec(v_ctors_4608_);
if (lean_obj_tag(v___x_4610_) == 0)
{
lean_object* v_a_4611_; lean_object* v_snd_4612_; lean_object* v_fst_4613_; lean_object* v___x_4615_; uint8_t v_isShared_4616_; uint8_t v_isSharedCheck_4677_; 
v_a_4611_ = lean_ctor_get(v___x_4610_, 0);
lean_inc(v_a_4611_);
lean_dec_ref_known(v___x_4610_, 1);
v_snd_4612_ = lean_ctor_get(v_a_4611_, 1);
v_fst_4613_ = lean_ctor_get(v_a_4611_, 0);
v_isSharedCheck_4677_ = !lean_is_exclusive(v_a_4611_);
if (v_isSharedCheck_4677_ == 0)
{
v___x_4615_ = v_a_4611_;
v_isShared_4616_ = v_isSharedCheck_4677_;
goto v_resetjp_4614_;
}
else
{
lean_inc(v_snd_4612_);
lean_inc(v_fst_4613_);
lean_dec(v_a_4611_);
v___x_4615_ = lean_box(0);
v_isShared_4616_ = v_isSharedCheck_4677_;
goto v_resetjp_4614_;
}
v_resetjp_4614_:
{
lean_object* v_visitedNames_4617_; lean_object* v_visitedLevels_4618_; lean_object* v_visitedExprs_4619_; lean_object* v_visitedConstants_4620_; lean_object* v_noMDataExprs_4621_; uint8_t v_exportMData_4622_; uint8_t v_exportUnsafe_4623_; uint8_t v_ignoreMissing_4624_; lean_object* v_recursorMap_4625_; lean_object* v___x_4627_; uint8_t v_isShared_4628_; uint8_t v_isSharedCheck_4676_; 
v_visitedNames_4617_ = lean_ctor_get(v_snd_4612_, 0);
v_visitedLevels_4618_ = lean_ctor_get(v_snd_4612_, 1);
v_visitedExprs_4619_ = lean_ctor_get(v_snd_4612_, 2);
v_visitedConstants_4620_ = lean_ctor_get(v_snd_4612_, 3);
v_noMDataExprs_4621_ = lean_ctor_get(v_snd_4612_, 4);
v_exportMData_4622_ = lean_ctor_get_uint8(v_snd_4612_, sizeof(void*)*6);
v_exportUnsafe_4623_ = lean_ctor_get_uint8(v_snd_4612_, sizeof(void*)*6 + 1);
v_ignoreMissing_4624_ = lean_ctor_get_uint8(v_snd_4612_, sizeof(void*)*6 + 2);
v_recursorMap_4625_ = lean_ctor_get(v_snd_4612_, 5);
v_isSharedCheck_4676_ = !lean_is_exclusive(v_snd_4612_);
if (v_isSharedCheck_4676_ == 0)
{
v___x_4627_ = v_snd_4612_;
v_isShared_4628_ = v_isSharedCheck_4676_;
goto v_resetjp_4626_;
}
else
{
lean_inc(v_recursorMap_4625_);
lean_inc(v_noMDataExprs_4621_);
lean_inc(v_visitedConstants_4620_);
lean_inc(v_visitedExprs_4619_);
lean_inc(v_visitedLevels_4618_);
lean_inc(v_visitedNames_4617_);
lean_dec(v_snd_4612_);
v___x_4627_ = lean_box(0);
v_isShared_4628_ = v_isSharedCheck_4676_;
goto v_resetjp_4626_;
}
v_resetjp_4626_:
{
lean_object* v_type_4629_; lean_object* v___x_4630_; lean_object* v___x_4632_; 
v_type_4629_ = lean_ctor_get(v_toConstantVal_4607_, 2);
lean_inc_ref(v_type_4629_);
lean_dec_ref(v_toConstantVal_4607_);
lean_inc(v_head_4566_);
v___x_4630_ = l_Lean_NameHashSet_insert(v_visitedConstants_4620_, v_head_4566_);
if (v_isShared_4628_ == 0)
{
lean_ctor_set(v___x_4627_, 3, v___x_4630_);
v___x_4632_ = v___x_4627_;
goto v_reusejp_4631_;
}
else
{
lean_object* v_reuseFailAlloc_4675_; 
v_reuseFailAlloc_4675_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4675_, 0, v_visitedNames_4617_);
lean_ctor_set(v_reuseFailAlloc_4675_, 1, v_visitedLevels_4618_);
lean_ctor_set(v_reuseFailAlloc_4675_, 2, v_visitedExprs_4619_);
lean_ctor_set(v_reuseFailAlloc_4675_, 3, v___x_4630_);
lean_ctor_set(v_reuseFailAlloc_4675_, 4, v_noMDataExprs_4621_);
lean_ctor_set(v_reuseFailAlloc_4675_, 5, v_recursorMap_4625_);
lean_ctor_set_uint8(v_reuseFailAlloc_4675_, sizeof(void*)*6, v_exportMData_4622_);
lean_ctor_set_uint8(v_reuseFailAlloc_4675_, sizeof(void*)*6 + 1, v_exportUnsafe_4623_);
lean_ctor_set_uint8(v_reuseFailAlloc_4675_, sizeof(void*)*6 + 2, v_ignoreMissing_4624_);
v___x_4632_ = v_reuseFailAlloc_4675_;
goto v_reusejp_4631_;
}
v_reusejp_4631_:
{
lean_object* v___x_4633_; 
v___x_4633_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4629_, v___y_4561_, v___x_4632_);
if (lean_obj_tag(v___x_4633_) == 0)
{
lean_object* v_a_4634_; lean_object* v_snd_4635_; lean_object* v___x_4637_; uint8_t v_isShared_4638_; uint8_t v_isSharedCheck_4665_; 
v_a_4634_ = lean_ctor_get(v___x_4633_, 0);
lean_inc(v_a_4634_);
lean_dec_ref_known(v___x_4633_, 1);
v_snd_4635_ = lean_ctor_get(v_a_4634_, 1);
v_isSharedCheck_4665_ = !lean_is_exclusive(v_a_4634_);
if (v_isSharedCheck_4665_ == 0)
{
lean_object* v_unused_4666_; 
v_unused_4666_ = lean_ctor_get(v_a_4634_, 0);
lean_dec(v_unused_4666_);
v___x_4637_ = v_a_4634_;
v_isShared_4638_ = v_isSharedCheck_4665_;
goto v_resetjp_4636_;
}
else
{
lean_inc(v_snd_4635_);
lean_dec(v_a_4634_);
v___x_4637_ = lean_box(0);
v_isShared_4638_ = v_isSharedCheck_4665_;
goto v_resetjp_4636_;
}
v_resetjp_4636_:
{
lean_object* v_toConstantVal_4639_; lean_object* v_recursorMap_4640_; lean_object* v_name_4641_; lean_object* v___x_4642_; 
v_toConstantVal_4639_ = lean_ctor_get(v_val_4558_, 0);
v_recursorMap_4640_ = lean_ctor_get(v_snd_4635_, 5);
v_name_4641_ = lean_ctor_get(v_toConstantVal_4639_, 0);
v___x_4642_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(v_recursorMap_4640_, v_name_4641_);
if (lean_obj_tag(v___x_4642_) == 1)
{
lean_object* v_val_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4647_; 
v_val_4643_ = lean_ctor_get(v___x_4642_, 0);
lean_inc(v_val_4643_);
lean_dec_ref_known(v___x_4642_, 1);
v___x_4644_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__0));
v___x_4645_ = l_Std_DTreeMap_Internal_Impl_union___at___00Std_DTreeMap_union_spec__0___redArg(v___x_4644_, v_snd_4603_, v_val_4643_);
if (v_isShared_4638_ == 0)
{
lean_ctor_set(v___x_4637_, 1, v___x_4645_);
lean_ctor_set(v___x_4637_, 0, v_fst_4613_);
v___x_4647_ = v___x_4637_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v_fst_4613_);
lean_ctor_set(v_reuseFailAlloc_4652_, 1, v___x_4645_);
v___x_4647_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
lean_object* v___x_4649_; 
if (v_isShared_4616_ == 0)
{
lean_ctor_set(v___x_4615_, 1, v___x_4647_);
lean_ctor_set(v___x_4615_, 0, v___x_4609_);
v___x_4649_ = v___x_4615_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v___x_4609_);
lean_ctor_set(v_reuseFailAlloc_4651_, 1, v___x_4647_);
v___x_4649_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
v_as_x27_4559_ = v_tail_4567_;
v_b_4560_ = v___x_4649_;
v___y_4562_ = v_snd_4635_;
goto _start;
}
}
}
else
{
lean_object* v___x_4653_; lean_object* v___x_4654_; uint8_t v___x_4655_; 
lean_dec(v___x_4642_);
v___x_4653_ = lean_array_get_size(v_fst_4613_);
v___x_4654_ = lean_unsigned_to_nat(0u);
v___x_4655_ = lean_nat_dec_eq(v___x_4653_, v___x_4654_);
if (v___x_4655_ == 0)
{
lean_object* v___x_4656_; lean_object* v___x_4657_; 
lean_del_object(v___x_4637_);
lean_del_object(v___x_4615_);
lean_dec(v_fst_4613_);
lean_dec_ref(v___x_4609_);
lean_dec(v_snd_4603_);
v___x_4656_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2);
v___x_4657_ = l_panic___at___00LeanExport_dumpConstant_spec__11(v___x_4656_, v___y_4561_, v_snd_4635_);
v___y_4569_ = v___x_4657_;
goto v___jp_4568_;
}
else
{
lean_object* v___x_4659_; 
if (v_isShared_4638_ == 0)
{
lean_ctor_set(v___x_4637_, 1, v_snd_4603_);
lean_ctor_set(v___x_4637_, 0, v_fst_4613_);
v___x_4659_ = v___x_4637_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v_fst_4613_);
lean_ctor_set(v_reuseFailAlloc_4664_, 1, v_snd_4603_);
v___x_4659_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
lean_object* v___x_4661_; 
if (v_isShared_4616_ == 0)
{
lean_ctor_set(v___x_4615_, 1, v___x_4659_);
lean_ctor_set(v___x_4615_, 0, v___x_4609_);
v___x_4661_ = v___x_4615_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v___x_4609_);
lean_ctor_set(v_reuseFailAlloc_4663_, 1, v___x_4659_);
v___x_4661_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
v_as_x27_4559_ = v_tail_4567_;
v_b_4560_ = v___x_4661_;
v___y_4562_ = v_snd_4635_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_4667_; lean_object* v___x_4669_; uint8_t v_isShared_4670_; uint8_t v_isSharedCheck_4674_; 
lean_del_object(v___x_4615_);
lean_dec(v_fst_4613_);
lean_dec_ref(v___x_4609_);
lean_dec(v_snd_4603_);
v_a_4667_ = lean_ctor_get(v___x_4633_, 0);
v_isSharedCheck_4674_ = !lean_is_exclusive(v___x_4633_);
if (v_isSharedCheck_4674_ == 0)
{
v___x_4669_ = v___x_4633_;
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
else
{
lean_inc(v_a_4667_);
lean_dec(v___x_4633_);
v___x_4669_ = lean_box(0);
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
v_resetjp_4668_:
{
lean_object* v___x_4672_; 
if (v_isShared_4670_ == 0)
{
v___x_4672_ = v___x_4669_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v_a_4667_);
v___x_4672_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
return v___x_4672_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4678_; lean_object* v___x_4680_; uint8_t v_isShared_4681_; uint8_t v_isSharedCheck_4685_; 
lean_dec_ref(v___x_4609_);
lean_dec_ref(v_toConstantVal_4607_);
lean_dec(v_snd_4603_);
v_a_4678_ = lean_ctor_get(v___x_4610_, 0);
v_isSharedCheck_4685_ = !lean_is_exclusive(v___x_4610_);
if (v_isSharedCheck_4685_ == 0)
{
v___x_4680_ = v___x_4610_;
v_isShared_4681_ = v_isSharedCheck_4685_;
goto v_resetjp_4679_;
}
else
{
lean_inc(v_a_4678_);
lean_dec(v___x_4610_);
v___x_4680_ = lean_box(0);
v_isShared_4681_ = v_isSharedCheck_4685_;
goto v_resetjp_4679_;
}
v_resetjp_4679_:
{
lean_object* v___x_4683_; 
if (v_isShared_4681_ == 0)
{
v___x_4683_ = v___x_4680_;
goto v_reusejp_4682_;
}
else
{
lean_object* v_reuseFailAlloc_4684_; 
v_reuseFailAlloc_4684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4684_, 0, v_a_4678_);
v___x_4683_ = v_reuseFailAlloc_4684_;
goto v_reusejp_4682_;
}
v_reusejp_4682_:
{
return v___x_4683_;
}
}
}
}
v___jp_4686_:
{
lean_object* v___x_4688_; uint8_t v_isUnsafe_4689_; 
v___x_4688_ = l_Lean_ConstantInfo_inductiveVal_x21(v___y_4687_);
lean_dec_ref(v___y_4687_);
v_isUnsafe_4689_ = lean_ctor_get_uint8(v___x_4688_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4689_ == 0)
{
uint8_t v___x_4690_; 
v___x_4690_ = 1;
v___y_4605_ = v___x_4688_;
v___y_4606_ = v___x_4690_;
goto v___jp_4604_;
}
else
{
if (v___x_4557_ == 0)
{
uint8_t v_exportUnsafe_4691_; 
v_exportUnsafe_4691_ = lean_ctor_get_uint8(v___y_4562_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_4691_ == 0)
{
lean_object* v___x_4692_; lean_object* v___x_4693_; 
lean_dec_ref(v___x_4688_);
lean_dec(v_snd_4603_);
lean_dec(v_fst_4602_);
lean_dec(v_fst_4601_);
v___x_4692_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4);
v___x_4693_ = l_panic___at___00LeanExport_dumpConstant_spec__11(v___x_4692_, v___y_4561_, v___y_4562_);
v___y_4569_ = v___x_4693_;
goto v___jp_4568_;
}
else
{
v___y_4605_ = v___x_4688_;
v___y_4606_ = v_exportUnsafe_4691_;
goto v___jp_4604_;
}
}
else
{
v___y_4605_ = v___x_4688_;
v___y_4606_ = v___x_4557_;
goto v___jp_4604_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(lean_object* v_as_4698_, size_t v_sz_4699_, size_t v_i_4700_, lean_object* v_b_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_){
_start:
{
uint8_t v___x_4705_; 
v___x_4705_ = lean_usize_dec_lt(v_i_4700_, v_sz_4699_);
if (v___x_4705_ == 0)
{
lean_object* v___x_4706_; lean_object* v___x_4707_; 
v___x_4706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4706_, 0, v_b_4701_);
lean_ctor_set(v___x_4706_, 1, v___y_4703_);
v___x_4707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4707_, 0, v___x_4706_);
return v___x_4707_;
}
else
{
lean_object* v_visitedNames_4708_; lean_object* v_visitedLevels_4709_; lean_object* v_visitedExprs_4710_; lean_object* v_visitedConstants_4711_; lean_object* v_noMDataExprs_4712_; uint8_t v_exportMData_4713_; uint8_t v_exportUnsafe_4714_; uint8_t v_ignoreMissing_4715_; lean_object* v_recursorMap_4716_; lean_object* v___x_4718_; uint8_t v_isShared_4719_; uint8_t v_isSharedCheck_4735_; 
v_visitedNames_4708_ = lean_ctor_get(v___y_4703_, 0);
v_visitedLevels_4709_ = lean_ctor_get(v___y_4703_, 1);
v_visitedExprs_4710_ = lean_ctor_get(v___y_4703_, 2);
v_visitedConstants_4711_ = lean_ctor_get(v___y_4703_, 3);
v_noMDataExprs_4712_ = lean_ctor_get(v___y_4703_, 4);
v_exportMData_4713_ = lean_ctor_get_uint8(v___y_4703_, sizeof(void*)*6);
v_exportUnsafe_4714_ = lean_ctor_get_uint8(v___y_4703_, sizeof(void*)*6 + 1);
v_ignoreMissing_4715_ = lean_ctor_get_uint8(v___y_4703_, sizeof(void*)*6 + 2);
v_recursorMap_4716_ = lean_ctor_get(v___y_4703_, 5);
v_isSharedCheck_4735_ = !lean_is_exclusive(v___y_4703_);
if (v_isSharedCheck_4735_ == 0)
{
v___x_4718_ = v___y_4703_;
v_isShared_4719_ = v_isSharedCheck_4735_;
goto v_resetjp_4717_;
}
else
{
lean_inc(v_recursorMap_4716_);
lean_inc(v_noMDataExprs_4712_);
lean_inc(v_visitedConstants_4711_);
lean_inc(v_visitedExprs_4710_);
lean_inc(v_visitedLevels_4709_);
lean_inc(v_visitedNames_4708_);
lean_dec(v___y_4703_);
v___x_4718_ = lean_box(0);
v_isShared_4719_ = v_isSharedCheck_4735_;
goto v_resetjp_4717_;
}
v_resetjp_4717_:
{
lean_object* v_a_4720_; lean_object* v_toConstantVal_4721_; lean_object* v_name_4722_; lean_object* v_type_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4727_; 
v_a_4720_ = lean_array_uget_borrowed(v_as_4698_, v_i_4700_);
v_toConstantVal_4721_ = lean_ctor_get(v_a_4720_, 0);
v_name_4722_ = lean_ctor_get(v_toConstantVal_4721_, 0);
v_type_4723_ = lean_ctor_get(v_toConstantVal_4721_, 2);
v___x_4724_ = lean_box(0);
lean_inc(v_name_4722_);
v___x_4725_ = l_Lean_NameHashSet_insert(v_visitedConstants_4711_, v_name_4722_);
if (v_isShared_4719_ == 0)
{
lean_ctor_set(v___x_4718_, 3, v___x_4725_);
v___x_4727_ = v___x_4718_;
goto v_reusejp_4726_;
}
else
{
lean_object* v_reuseFailAlloc_4734_; 
v_reuseFailAlloc_4734_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4734_, 0, v_visitedNames_4708_);
lean_ctor_set(v_reuseFailAlloc_4734_, 1, v_visitedLevels_4709_);
lean_ctor_set(v_reuseFailAlloc_4734_, 2, v_visitedExprs_4710_);
lean_ctor_set(v_reuseFailAlloc_4734_, 3, v___x_4725_);
lean_ctor_set(v_reuseFailAlloc_4734_, 4, v_noMDataExprs_4712_);
lean_ctor_set(v_reuseFailAlloc_4734_, 5, v_recursorMap_4716_);
lean_ctor_set_uint8(v_reuseFailAlloc_4734_, sizeof(void*)*6, v_exportMData_4713_);
lean_ctor_set_uint8(v_reuseFailAlloc_4734_, sizeof(void*)*6 + 1, v_exportUnsafe_4714_);
lean_ctor_set_uint8(v_reuseFailAlloc_4734_, sizeof(void*)*6 + 2, v_ignoreMissing_4715_);
v___x_4727_ = v_reuseFailAlloc_4734_;
goto v_reusejp_4726_;
}
v_reusejp_4726_:
{
lean_object* v___x_4728_; 
lean_inc_ref(v_type_4723_);
v___x_4728_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4723_, v___y_4702_, v___x_4727_);
if (lean_obj_tag(v___x_4728_) == 0)
{
lean_object* v_a_4729_; lean_object* v_snd_4730_; size_t v___x_4731_; size_t v___x_4732_; 
v_a_4729_ = lean_ctor_get(v___x_4728_, 0);
lean_inc(v_a_4729_);
lean_dec_ref_known(v___x_4728_, 1);
v_snd_4730_ = lean_ctor_get(v_a_4729_, 1);
lean_inc(v_snd_4730_);
lean_dec(v_a_4729_);
v___x_4731_ = ((size_t)1ULL);
v___x_4732_ = lean_usize_add(v_i_4700_, v___x_4731_);
v_i_4700_ = v___x_4732_;
v_b_4701_ = v___x_4724_;
v___y_4703_ = v_snd_4730_;
goto _start;
}
else
{
return v___x_4728_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(lean_object* v_as_x27_4736_, lean_object* v_b_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_){
_start:
{
if (lean_obj_tag(v_as_x27_4736_) == 0)
{
lean_object* v___x_4741_; lean_object* v___x_4742_; 
v___x_4741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4741_, 0, v_b_4737_);
lean_ctor_set(v___x_4741_, 1, v___y_4739_);
v___x_4742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4742_, 0, v___x_4741_);
return v___x_4742_;
}
else
{
lean_object* v_head_4743_; lean_object* v_tail_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; 
v_head_4743_ = lean_ctor_get(v_as_x27_4736_, 0);
v_tail_4744_ = lean_ctor_get(v_as_x27_4736_, 1);
v___x_4745_ = lean_box(0);
lean_inc(v_head_4743_);
v___x_4746_ = l_LeanExport_dumpConstant(v_head_4743_, v___y_4738_, v___y_4739_);
if (lean_obj_tag(v___x_4746_) == 0)
{
lean_object* v_a_4747_; lean_object* v_snd_4748_; 
v_a_4747_ = lean_ctor_get(v___x_4746_, 0);
lean_inc(v_a_4747_);
lean_dec_ref_known(v___x_4746_, 1);
v_snd_4748_ = lean_ctor_get(v_a_4747_, 1);
lean_inc(v_snd_4748_);
lean_dec(v_a_4747_);
v_as_x27_4736_ = v_tail_4744_;
v_b_4737_ = v___x_4745_;
v___y_4739_ = v_snd_4748_;
goto _start;
}
else
{
return v___x_4746_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant(lean_object* v_c_4750_, lean_object* v_a_4751_, lean_object* v_a_4752_){
_start:
{
lean_object* v___y_4759_; lean_object* v___y_4760_; lean_object* v___y_4761_; lean_object* v_fst_4762_; lean_object* v_snd_4763_; uint8_t v___x_4875_; lean_object* v___x_4876_; 
v___x_4875_ = 0;
lean_inc(v_c_4750_);
lean_inc_ref(v_a_4751_);
v___x_4876_ = l_Lean_Environment_find_x3f(v_a_4751_, v_c_4750_, v___x_4875_);
if (lean_obj_tag(v___x_4876_) == 1)
{
lean_object* v_val_4877_; uint8_t v___y_5616_; uint8_t v___x_5617_; 
v_val_4877_ = lean_ctor_get(v___x_4876_, 0);
lean_inc(v_val_4877_);
lean_dec_ref_known(v___x_4876_, 1);
v___x_5617_ = l_Lean_ConstantInfo_isUnsafe(v_val_4877_);
if (v___x_5617_ == 0)
{
v___y_5616_ = v___x_5617_;
goto v___jp_5615_;
}
else
{
uint8_t v_exportUnsafe_5618_; 
v_exportUnsafe_5618_ = lean_ctor_get_uint8(v_a_4752_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_5618_ == 0)
{
v___y_5616_ = v___x_5617_;
goto v___jp_5615_;
}
else
{
goto v___jp_4878_;
}
}
v___jp_4878_:
{
lean_object* v_visitedNames_4879_; lean_object* v_visitedLevels_4880_; lean_object* v_visitedExprs_4881_; lean_object* v_visitedConstants_4882_; lean_object* v_noMDataExprs_4883_; uint8_t v_exportMData_4884_; uint8_t v_exportUnsafe_4885_; uint8_t v_ignoreMissing_4886_; lean_object* v_recursorMap_4887_; uint8_t v___x_4888_; 
v_visitedNames_4879_ = lean_ctor_get(v_a_4752_, 0);
v_visitedLevels_4880_ = lean_ctor_get(v_a_4752_, 1);
v_visitedExprs_4881_ = lean_ctor_get(v_a_4752_, 2);
v_visitedConstants_4882_ = lean_ctor_get(v_a_4752_, 3);
v_noMDataExprs_4883_ = lean_ctor_get(v_a_4752_, 4);
v_exportMData_4884_ = lean_ctor_get_uint8(v_a_4752_, sizeof(void*)*6);
v_exportUnsafe_4885_ = lean_ctor_get_uint8(v_a_4752_, sizeof(void*)*6 + 1);
v_ignoreMissing_4886_ = lean_ctor_get_uint8(v_a_4752_, sizeof(void*)*6 + 2);
v_recursorMap_4887_ = lean_ctor_get(v_a_4752_, 5);
v___x_4888_ = l_Lean_NameHashSet_contains(v_visitedConstants_4882_, v_c_4750_);
if (v___x_4888_ == 0)
{
lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_5608_; 
lean_inc(v_recursorMap_4887_);
lean_inc_ref(v_noMDataExprs_4883_);
lean_inc_ref(v_visitedConstants_4882_);
lean_inc_ref(v_visitedExprs_4881_);
lean_inc_ref(v_visitedLevels_4880_);
lean_inc_ref(v_visitedNames_4879_);
v_isSharedCheck_5608_ = !lean_is_exclusive(v_a_4752_);
if (v_isSharedCheck_5608_ == 0)
{
lean_object* v_unused_5609_; lean_object* v_unused_5610_; lean_object* v_unused_5611_; lean_object* v_unused_5612_; lean_object* v_unused_5613_; lean_object* v_unused_5614_; 
v_unused_5609_ = lean_ctor_get(v_a_4752_, 5);
lean_dec(v_unused_5609_);
v_unused_5610_ = lean_ctor_get(v_a_4752_, 4);
lean_dec(v_unused_5610_);
v_unused_5611_ = lean_ctor_get(v_a_4752_, 3);
lean_dec(v_unused_5611_);
v_unused_5612_ = lean_ctor_get(v_a_4752_, 2);
lean_dec(v_unused_5612_);
v_unused_5613_ = lean_ctor_get(v_a_4752_, 1);
lean_dec(v_unused_5613_);
v_unused_5614_ = lean_ctor_get(v_a_4752_, 0);
lean_dec(v_unused_5614_);
v___x_4890_ = v_a_4752_;
v_isShared_4891_ = v_isSharedCheck_5608_;
goto v_resetjp_4889_;
}
else
{
lean_dec(v_a_4752_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_5608_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v___x_4892_; lean_object* v___x_4894_; 
v___x_4892_ = l_Lean_NameHashSet_insert(v_visitedConstants_4882_, v_c_4750_);
if (v_isShared_4891_ == 0)
{
lean_ctor_set(v___x_4890_, 3, v___x_4892_);
v___x_4894_ = v___x_4890_;
goto v_reusejp_4893_;
}
else
{
lean_object* v_reuseFailAlloc_5607_; 
v_reuseFailAlloc_5607_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_5607_, 0, v_visitedNames_4879_);
lean_ctor_set(v_reuseFailAlloc_5607_, 1, v_visitedLevels_4880_);
lean_ctor_set(v_reuseFailAlloc_5607_, 2, v_visitedExprs_4881_);
lean_ctor_set(v_reuseFailAlloc_5607_, 3, v___x_4892_);
lean_ctor_set(v_reuseFailAlloc_5607_, 4, v_noMDataExprs_4883_);
lean_ctor_set(v_reuseFailAlloc_5607_, 5, v_recursorMap_4887_);
lean_ctor_set_uint8(v_reuseFailAlloc_5607_, sizeof(void*)*6, v_exportMData_4884_);
lean_ctor_set_uint8(v_reuseFailAlloc_5607_, sizeof(void*)*6 + 1, v_exportUnsafe_4885_);
lean_ctor_set_uint8(v_reuseFailAlloc_5607_, sizeof(void*)*6 + 2, v_ignoreMissing_4886_);
v___x_4894_ = v_reuseFailAlloc_5607_;
goto v_reusejp_4893_;
}
v_reusejp_4893_:
{
switch(lean_obj_tag(v_val_4877_))
{
case 0:
{
lean_object* v_val_4895_; lean_object* v___x_4897_; uint8_t v_isShared_4898_; uint8_t v_isSharedCheck_4999_; 
v_val_4895_ = lean_ctor_get(v_val_4877_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v_val_4877_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4897_ = v_val_4877_;
v_isShared_4898_ = v_isSharedCheck_4999_;
goto v_resetjp_4896_;
}
else
{
lean_inc(v_val_4895_);
lean_dec(v_val_4877_);
v___x_4897_ = lean_box(0);
v_isShared_4898_ = v_isSharedCheck_4999_;
goto v_resetjp_4896_;
}
v_resetjp_4896_:
{
lean_object* v_toConstantVal_4899_; uint8_t v_isUnsafe_4900_; lean_object* v_name_4901_; lean_object* v_levelParams_4902_; lean_object* v_type_4903_; lean_object* v___x_4904_; 
v_toConstantVal_4899_ = lean_ctor_get(v_val_4895_, 0);
lean_inc_ref(v_toConstantVal_4899_);
v_isUnsafe_4900_ = lean_ctor_get_uint8(v_val_4895_, sizeof(void*)*1);
lean_dec_ref(v_val_4895_);
v_name_4901_ = lean_ctor_get(v_toConstantVal_4899_, 0);
lean_inc(v_name_4901_);
v_levelParams_4902_ = lean_ctor_get(v_toConstantVal_4899_, 1);
lean_inc(v_levelParams_4902_);
v_type_4903_ = lean_ctor_get(v_toConstantVal_4899_, 2);
lean_inc_ref_n(v_type_4903_, 2);
lean_dec_ref(v_toConstantVal_4899_);
v___x_4904_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4903_, v_a_4751_, v___x_4894_);
if (lean_obj_tag(v___x_4904_) == 0)
{
lean_object* v_a_4905_; lean_object* v___x_4907_; uint8_t v_isShared_4908_; uint8_t v_isSharedCheck_4998_; 
v_a_4905_ = lean_ctor_get(v___x_4904_, 0);
v_isSharedCheck_4998_ = !lean_is_exclusive(v___x_4904_);
if (v_isSharedCheck_4998_ == 0)
{
v___x_4907_ = v___x_4904_;
v_isShared_4908_ = v_isSharedCheck_4998_;
goto v_resetjp_4906_;
}
else
{
lean_inc(v_a_4905_);
lean_dec(v___x_4904_);
v___x_4907_ = lean_box(0);
v_isShared_4908_ = v_isSharedCheck_4998_;
goto v_resetjp_4906_;
}
v_resetjp_4906_:
{
lean_object* v_snd_4909_; lean_object* v___x_4911_; uint8_t v_isShared_4912_; uint8_t v_isSharedCheck_4996_; 
v_snd_4909_ = lean_ctor_get(v_a_4905_, 1);
v_isSharedCheck_4996_ = !lean_is_exclusive(v_a_4905_);
if (v_isSharedCheck_4996_ == 0)
{
lean_object* v_unused_4997_; 
v_unused_4997_ = lean_ctor_get(v_a_4905_, 0);
lean_dec(v_unused_4997_);
v___x_4911_ = v_a_4905_;
v_isShared_4912_ = v_isSharedCheck_4996_;
goto v_resetjp_4910_;
}
else
{
lean_inc(v_snd_4909_);
lean_dec(v_a_4905_);
v___x_4911_ = lean_box(0);
v_isShared_4912_ = v_isSharedCheck_4996_;
goto v_resetjp_4910_;
}
v_resetjp_4910_:
{
lean_object* v___x_4913_; 
v___x_4913_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4901_, v_a_4751_, v_snd_4909_);
if (lean_obj_tag(v___x_4913_) == 0)
{
lean_object* v_a_4914_; lean_object* v_fst_4915_; lean_object* v_snd_4916_; lean_object* v___x_4918_; uint8_t v_isShared_4919_; uint8_t v_isSharedCheck_4987_; 
v_a_4914_ = lean_ctor_get(v___x_4913_, 0);
lean_inc(v_a_4914_);
lean_dec_ref_known(v___x_4913_, 1);
v_fst_4915_ = lean_ctor_get(v_a_4914_, 0);
v_snd_4916_ = lean_ctor_get(v_a_4914_, 1);
v_isSharedCheck_4987_ = !lean_is_exclusive(v_a_4914_);
if (v_isSharedCheck_4987_ == 0)
{
v___x_4918_ = v_a_4914_;
v_isShared_4919_ = v_isSharedCheck_4987_;
goto v_resetjp_4917_;
}
else
{
lean_inc(v_snd_4916_);
lean_inc(v_fst_4915_);
lean_dec(v_a_4914_);
v___x_4918_ = lean_box(0);
v_isShared_4919_ = v_isSharedCheck_4987_;
goto v_resetjp_4917_;
}
v_resetjp_4917_:
{
lean_object* v___x_4920_; 
v___x_4920_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4902_, v_a_4751_, v_snd_4916_);
if (lean_obj_tag(v___x_4920_) == 0)
{
lean_object* v_a_4921_; lean_object* v_fst_4922_; lean_object* v_snd_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4978_; 
v_a_4921_ = lean_ctor_get(v___x_4920_, 0);
lean_inc(v_a_4921_);
lean_dec_ref_known(v___x_4920_, 1);
v_fst_4922_ = lean_ctor_get(v_a_4921_, 0);
v_snd_4923_ = lean_ctor_get(v_a_4921_, 1);
v_isSharedCheck_4978_ = !lean_is_exclusive(v_a_4921_);
if (v_isSharedCheck_4978_ == 0)
{
v___x_4925_ = v_a_4921_;
v_isShared_4926_ = v_isSharedCheck_4978_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_snd_4923_);
lean_inc(v_fst_4922_);
lean_dec(v_a_4921_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4978_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4927_; 
v___x_4927_ = l_LeanExport_dumpExpr(v_type_4903_, v_a_4751_, v_snd_4923_);
if (lean_obj_tag(v___x_4927_) == 0)
{
lean_object* v_a_4928_; lean_object* v_fst_4929_; lean_object* v_snd_4930_; lean_object* v___x_4932_; uint8_t v_isShared_4933_; uint8_t v_isSharedCheck_4969_; 
v_a_4928_ = lean_ctor_get(v___x_4927_, 0);
lean_inc(v_a_4928_);
lean_dec_ref_known(v___x_4927_, 1);
v_fst_4929_ = lean_ctor_get(v_a_4928_, 0);
v_snd_4930_ = lean_ctor_get(v_a_4928_, 1);
v_isSharedCheck_4969_ = !lean_is_exclusive(v_a_4928_);
if (v_isSharedCheck_4969_ == 0)
{
v___x_4932_ = v_a_4928_;
v_isShared_4933_ = v_isSharedCheck_4969_;
goto v_resetjp_4931_;
}
else
{
lean_inc(v_snd_4930_);
lean_inc(v_fst_4929_);
lean_dec(v_a_4928_);
v___x_4932_ = lean_box(0);
v_isShared_4933_ = v_isSharedCheck_4969_;
goto v_resetjp_4931_;
}
v_resetjp_4931_:
{
lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4938_; 
v___x_4934_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__3));
v___x_4935_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4936_ = l_Lean_JsonNumber_fromNat(v_fst_4915_);
if (v_isShared_4908_ == 0)
{
lean_ctor_set_tag(v___x_4907_, 2);
lean_ctor_set(v___x_4907_, 0, v___x_4936_);
v___x_4938_ = v___x_4907_;
goto v_reusejp_4937_;
}
else
{
lean_object* v_reuseFailAlloc_4968_; 
v_reuseFailAlloc_4968_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4968_, 0, v___x_4936_);
v___x_4938_ = v_reuseFailAlloc_4968_;
goto v_reusejp_4937_;
}
v_reusejp_4937_:
{
lean_object* v___x_4940_; 
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 1, v___x_4938_);
lean_ctor_set(v___x_4932_, 0, v___x_4935_);
v___x_4940_ = v___x_4932_;
goto v_reusejp_4939_;
}
else
{
lean_object* v_reuseFailAlloc_4967_; 
v_reuseFailAlloc_4967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4967_, 0, v___x_4935_);
lean_ctor_set(v_reuseFailAlloc_4967_, 1, v___x_4938_);
v___x_4940_ = v_reuseFailAlloc_4967_;
goto v_reusejp_4939_;
}
v_reusejp_4939_:
{
lean_object* v___x_4941_; lean_object* v___x_4943_; 
v___x_4941_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_4926_ == 0)
{
lean_ctor_set(v___x_4925_, 1, v_fst_4922_);
lean_ctor_set(v___x_4925_, 0, v___x_4941_);
v___x_4943_ = v___x_4925_;
goto v_reusejp_4942_;
}
else
{
lean_object* v_reuseFailAlloc_4966_; 
v_reuseFailAlloc_4966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4966_, 0, v___x_4941_);
lean_ctor_set(v_reuseFailAlloc_4966_, 1, v_fst_4922_);
v___x_4943_ = v_reuseFailAlloc_4966_;
goto v_reusejp_4942_;
}
v_reusejp_4942_:
{
lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4947_; 
v___x_4944_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4945_ = l_Lean_JsonNumber_fromNat(v_fst_4929_);
if (v_isShared_4898_ == 0)
{
lean_ctor_set_tag(v___x_4897_, 2);
lean_ctor_set(v___x_4897_, 0, v___x_4945_);
v___x_4947_ = v___x_4897_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v___x_4945_);
v___x_4947_ = v_reuseFailAlloc_4965_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
lean_object* v___x_4949_; 
if (v_isShared_4919_ == 0)
{
lean_ctor_set(v___x_4918_, 1, v___x_4947_);
lean_ctor_set(v___x_4918_, 0, v___x_4944_);
v___x_4949_ = v___x_4918_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4964_; 
v_reuseFailAlloc_4964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4964_, 0, v___x_4944_);
lean_ctor_set(v_reuseFailAlloc_4964_, 1, v___x_4947_);
v___x_4949_ = v_reuseFailAlloc_4964_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4953_; 
v___x_4950_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_4951_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4951_, 0, v_isUnsafe_4900_);
if (v_isShared_4912_ == 0)
{
lean_ctor_set(v___x_4911_, 1, v___x_4951_);
lean_ctor_set(v___x_4911_, 0, v___x_4950_);
v___x_4953_ = v___x_4911_;
goto v_reusejp_4952_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v___x_4950_);
lean_ctor_set(v_reuseFailAlloc_4963_, 1, v___x_4951_);
v___x_4953_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4952_;
}
v_reusejp_4952_:
{
lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; 
v___x_4954_ = lean_box(0);
v___x_4955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4955_, 0, v___x_4953_);
lean_ctor_set(v___x_4955_, 1, v___x_4954_);
v___x_4956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4956_, 0, v___x_4949_);
lean_ctor_set(v___x_4956_, 1, v___x_4955_);
v___x_4957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4957_, 0, v___x_4943_);
lean_ctor_set(v___x_4957_, 1, v___x_4956_);
v___x_4958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4958_, 0, v___x_4940_);
lean_ctor_set(v___x_4958_, 1, v___x_4957_);
v___x_4959_ = l_Lean_Json_mkObj(v___x_4958_);
lean_dec_ref_known(v___x_4958_, 2);
v___x_4960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4960_, 0, v___x_4934_);
lean_ctor_set(v___x_4960_, 1, v___x_4959_);
v___x_4961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4961_, 0, v___x_4960_);
lean_ctor_set(v___x_4961_, 1, v___x_4954_);
v___x_4962_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4961_, v_snd_4930_);
lean_dec_ref_known(v___x_4961_, 2);
return v___x_4962_;
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
lean_object* v_a_4970_; lean_object* v___x_4972_; uint8_t v_isShared_4973_; uint8_t v_isSharedCheck_4977_; 
lean_del_object(v___x_4925_);
lean_dec(v_fst_4922_);
lean_del_object(v___x_4918_);
lean_dec(v_fst_4915_);
lean_del_object(v___x_4911_);
lean_del_object(v___x_4907_);
lean_del_object(v___x_4897_);
v_a_4970_ = lean_ctor_get(v___x_4927_, 0);
v_isSharedCheck_4977_ = !lean_is_exclusive(v___x_4927_);
if (v_isSharedCheck_4977_ == 0)
{
v___x_4972_ = v___x_4927_;
v_isShared_4973_ = v_isSharedCheck_4977_;
goto v_resetjp_4971_;
}
else
{
lean_inc(v_a_4970_);
lean_dec(v___x_4927_);
v___x_4972_ = lean_box(0);
v_isShared_4973_ = v_isSharedCheck_4977_;
goto v_resetjp_4971_;
}
v_resetjp_4971_:
{
lean_object* v___x_4975_; 
if (v_isShared_4973_ == 0)
{
v___x_4975_ = v___x_4972_;
goto v_reusejp_4974_;
}
else
{
lean_object* v_reuseFailAlloc_4976_; 
v_reuseFailAlloc_4976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4976_, 0, v_a_4970_);
v___x_4975_ = v_reuseFailAlloc_4976_;
goto v_reusejp_4974_;
}
v_reusejp_4974_:
{
return v___x_4975_;
}
}
}
}
}
else
{
lean_object* v_a_4979_; lean_object* v___x_4981_; uint8_t v_isShared_4982_; uint8_t v_isSharedCheck_4986_; 
lean_del_object(v___x_4918_);
lean_dec(v_fst_4915_);
lean_del_object(v___x_4911_);
lean_del_object(v___x_4907_);
lean_dec_ref(v_type_4903_);
lean_del_object(v___x_4897_);
v_a_4979_ = lean_ctor_get(v___x_4920_, 0);
v_isSharedCheck_4986_ = !lean_is_exclusive(v___x_4920_);
if (v_isSharedCheck_4986_ == 0)
{
v___x_4981_ = v___x_4920_;
v_isShared_4982_ = v_isSharedCheck_4986_;
goto v_resetjp_4980_;
}
else
{
lean_inc(v_a_4979_);
lean_dec(v___x_4920_);
v___x_4981_ = lean_box(0);
v_isShared_4982_ = v_isSharedCheck_4986_;
goto v_resetjp_4980_;
}
v_resetjp_4980_:
{
lean_object* v___x_4984_; 
if (v_isShared_4982_ == 0)
{
v___x_4984_ = v___x_4981_;
goto v_reusejp_4983_;
}
else
{
lean_object* v_reuseFailAlloc_4985_; 
v_reuseFailAlloc_4985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4985_, 0, v_a_4979_);
v___x_4984_ = v_reuseFailAlloc_4985_;
goto v_reusejp_4983_;
}
v_reusejp_4983_:
{
return v___x_4984_;
}
}
}
}
}
else
{
lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_4995_; 
lean_del_object(v___x_4911_);
lean_del_object(v___x_4907_);
lean_dec_ref(v_type_4903_);
lean_dec(v_levelParams_4902_);
lean_del_object(v___x_4897_);
v_a_4988_ = lean_ctor_get(v___x_4913_, 0);
v_isSharedCheck_4995_ = !lean_is_exclusive(v___x_4913_);
if (v_isSharedCheck_4995_ == 0)
{
v___x_4990_ = v___x_4913_;
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v___x_4913_);
v___x_4990_ = lean_box(0);
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
v_resetjp_4989_:
{
lean_object* v___x_4993_; 
if (v_isShared_4991_ == 0)
{
v___x_4993_ = v___x_4990_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_4994_; 
v_reuseFailAlloc_4994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4994_, 0, v_a_4988_);
v___x_4993_ = v_reuseFailAlloc_4994_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
return v___x_4993_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_type_4903_);
lean_dec(v_levelParams_4902_);
lean_dec(v_name_4901_);
lean_del_object(v___x_4897_);
return v___x_4904_;
}
}
}
case 1:
{
lean_object* v_val_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5171_; 
v_val_5000_ = lean_ctor_get(v_val_4877_, 0);
v_isSharedCheck_5171_ = !lean_is_exclusive(v_val_4877_);
if (v_isSharedCheck_5171_ == 0)
{
v___x_5002_ = v_val_4877_;
v_isShared_5003_ = v_isSharedCheck_5171_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_val_5000_);
lean_dec(v_val_4877_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5171_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v_toConstantVal_5004_; lean_object* v_value_5005_; lean_object* v_hints_5006_; uint8_t v_safety_5007_; lean_object* v_all_5008_; lean_object* v_name_5009_; lean_object* v_levelParams_5010_; lean_object* v_type_5011_; lean_object* v___x_5012_; 
v_toConstantVal_5004_ = lean_ctor_get(v_val_5000_, 0);
lean_inc_ref(v_toConstantVal_5004_);
v_value_5005_ = lean_ctor_get(v_val_5000_, 1);
lean_inc_ref(v_value_5005_);
v_hints_5006_ = lean_ctor_get(v_val_5000_, 2);
lean_inc(v_hints_5006_);
v_safety_5007_ = lean_ctor_get_uint8(v_val_5000_, sizeof(void*)*4);
v_all_5008_ = lean_ctor_get(v_val_5000_, 3);
lean_inc(v_all_5008_);
lean_dec_ref(v_val_5000_);
v_name_5009_ = lean_ctor_get(v_toConstantVal_5004_, 0);
lean_inc(v_name_5009_);
v_levelParams_5010_ = lean_ctor_get(v_toConstantVal_5004_, 1);
lean_inc(v_levelParams_5010_);
v_type_5011_ = lean_ctor_get(v_toConstantVal_5004_, 2);
lean_inc_ref_n(v_type_5011_, 2);
lean_dec_ref(v_toConstantVal_5004_);
v___x_5012_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5011_, v_a_4751_, v___x_4894_);
if (lean_obj_tag(v___x_5012_) == 0)
{
lean_object* v_a_5013_; lean_object* v___x_5015_; uint8_t v_isShared_5016_; uint8_t v_isSharedCheck_5170_; 
v_a_5013_ = lean_ctor_get(v___x_5012_, 0);
v_isSharedCheck_5170_ = !lean_is_exclusive(v___x_5012_);
if (v_isSharedCheck_5170_ == 0)
{
v___x_5015_ = v___x_5012_;
v_isShared_5016_ = v_isSharedCheck_5170_;
goto v_resetjp_5014_;
}
else
{
lean_inc(v_a_5013_);
lean_dec(v___x_5012_);
v___x_5015_ = lean_box(0);
v_isShared_5016_ = v_isSharedCheck_5170_;
goto v_resetjp_5014_;
}
v_resetjp_5014_:
{
lean_object* v_snd_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5168_; 
v_snd_5017_ = lean_ctor_get(v_a_5013_, 1);
v_isSharedCheck_5168_ = !lean_is_exclusive(v_a_5013_);
if (v_isSharedCheck_5168_ == 0)
{
lean_object* v_unused_5169_; 
v_unused_5169_ = lean_ctor_get(v_a_5013_, 0);
lean_dec(v_unused_5169_);
v___x_5019_ = v_a_5013_;
v_isShared_5020_ = v_isSharedCheck_5168_;
goto v_resetjp_5018_;
}
else
{
lean_inc(v_snd_5017_);
lean_dec(v_a_5013_);
v___x_5019_ = lean_box(0);
v_isShared_5020_ = v_isSharedCheck_5168_;
goto v_resetjp_5018_;
}
v_resetjp_5018_:
{
lean_object* v___x_5021_; 
lean_inc_ref(v_value_5005_);
v___x_5021_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5005_, v_a_4751_, v_snd_5017_);
if (lean_obj_tag(v___x_5021_) == 0)
{
lean_object* v_a_5022_; lean_object* v___x_5024_; uint8_t v_isShared_5025_; uint8_t v_isSharedCheck_5167_; 
v_a_5022_ = lean_ctor_get(v___x_5021_, 0);
v_isSharedCheck_5167_ = !lean_is_exclusive(v___x_5021_);
if (v_isSharedCheck_5167_ == 0)
{
v___x_5024_ = v___x_5021_;
v_isShared_5025_ = v_isSharedCheck_5167_;
goto v_resetjp_5023_;
}
else
{
lean_inc(v_a_5022_);
lean_dec(v___x_5021_);
v___x_5024_ = lean_box(0);
v_isShared_5025_ = v_isSharedCheck_5167_;
goto v_resetjp_5023_;
}
v_resetjp_5023_:
{
lean_object* v_snd_5026_; lean_object* v___x_5028_; uint8_t v_isShared_5029_; uint8_t v_isSharedCheck_5165_; 
v_snd_5026_ = lean_ctor_get(v_a_5022_, 1);
v_isSharedCheck_5165_ = !lean_is_exclusive(v_a_5022_);
if (v_isSharedCheck_5165_ == 0)
{
lean_object* v_unused_5166_; 
v_unused_5166_ = lean_ctor_get(v_a_5022_, 0);
lean_dec(v_unused_5166_);
v___x_5028_ = v_a_5022_;
v_isShared_5029_ = v_isSharedCheck_5165_;
goto v_resetjp_5027_;
}
else
{
lean_inc(v_snd_5026_);
lean_dec(v_a_5022_);
v___x_5028_ = lean_box(0);
v_isShared_5029_ = v_isSharedCheck_5165_;
goto v_resetjp_5027_;
}
v_resetjp_5027_:
{
lean_object* v___x_5030_; 
v___x_5030_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5009_, v_a_4751_, v_snd_5026_);
if (lean_obj_tag(v___x_5030_) == 0)
{
lean_object* v_a_5031_; lean_object* v_fst_5032_; lean_object* v_snd_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5156_; 
v_a_5031_ = lean_ctor_get(v___x_5030_, 0);
lean_inc(v_a_5031_);
lean_dec_ref_known(v___x_5030_, 1);
v_fst_5032_ = lean_ctor_get(v_a_5031_, 0);
v_snd_5033_ = lean_ctor_get(v_a_5031_, 1);
v_isSharedCheck_5156_ = !lean_is_exclusive(v_a_5031_);
if (v_isSharedCheck_5156_ == 0)
{
v___x_5035_ = v_a_5031_;
v_isShared_5036_ = v_isSharedCheck_5156_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_snd_5033_);
lean_inc(v_fst_5032_);
lean_dec(v_a_5031_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5156_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v___x_5037_; 
v___x_5037_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5010_, v_a_4751_, v_snd_5033_);
if (lean_obj_tag(v___x_5037_) == 0)
{
lean_object* v_a_5038_; lean_object* v_fst_5039_; lean_object* v_snd_5040_; lean_object* v___x_5042_; uint8_t v_isShared_5043_; uint8_t v_isSharedCheck_5147_; 
v_a_5038_ = lean_ctor_get(v___x_5037_, 0);
lean_inc(v_a_5038_);
lean_dec_ref_known(v___x_5037_, 1);
v_fst_5039_ = lean_ctor_get(v_a_5038_, 0);
v_snd_5040_ = lean_ctor_get(v_a_5038_, 1);
v_isSharedCheck_5147_ = !lean_is_exclusive(v_a_5038_);
if (v_isSharedCheck_5147_ == 0)
{
v___x_5042_ = v_a_5038_;
v_isShared_5043_ = v_isSharedCheck_5147_;
goto v_resetjp_5041_;
}
else
{
lean_inc(v_snd_5040_);
lean_inc(v_fst_5039_);
lean_dec(v_a_5038_);
v___x_5042_ = lean_box(0);
v_isShared_5043_ = v_isSharedCheck_5147_;
goto v_resetjp_5041_;
}
v_resetjp_5041_:
{
lean_object* v___x_5044_; 
v___x_5044_ = l_LeanExport_dumpExpr(v_type_5011_, v_a_4751_, v_snd_5040_);
if (lean_obj_tag(v___x_5044_) == 0)
{
lean_object* v_a_5045_; lean_object* v_fst_5046_; lean_object* v_snd_5047_; lean_object* v___x_5049_; uint8_t v_isShared_5050_; uint8_t v_isSharedCheck_5138_; 
v_a_5045_ = lean_ctor_get(v___x_5044_, 0);
lean_inc(v_a_5045_);
lean_dec_ref_known(v___x_5044_, 1);
v_fst_5046_ = lean_ctor_get(v_a_5045_, 0);
v_snd_5047_ = lean_ctor_get(v_a_5045_, 1);
v_isSharedCheck_5138_ = !lean_is_exclusive(v_a_5045_);
if (v_isSharedCheck_5138_ == 0)
{
v___x_5049_ = v_a_5045_;
v_isShared_5050_ = v_isSharedCheck_5138_;
goto v_resetjp_5048_;
}
else
{
lean_inc(v_snd_5047_);
lean_inc(v_fst_5046_);
lean_dec(v_a_5045_);
v___x_5049_ = lean_box(0);
v_isShared_5050_ = v_isSharedCheck_5138_;
goto v_resetjp_5048_;
}
v_resetjp_5048_:
{
lean_object* v___x_5051_; 
v___x_5051_ = l_LeanExport_dumpExpr(v_value_5005_, v_a_4751_, v_snd_5047_);
if (lean_obj_tag(v___x_5051_) == 0)
{
lean_object* v_a_5052_; lean_object* v_fst_5053_; lean_object* v_snd_5054_; lean_object* v___x_5056_; uint8_t v_isShared_5057_; uint8_t v_isSharedCheck_5129_; 
v_a_5052_ = lean_ctor_get(v___x_5051_, 0);
lean_inc(v_a_5052_);
lean_dec_ref_known(v___x_5051_, 1);
v_fst_5053_ = lean_ctor_get(v_a_5052_, 0);
v_snd_5054_ = lean_ctor_get(v_a_5052_, 1);
v_isSharedCheck_5129_ = !lean_is_exclusive(v_a_5052_);
if (v_isSharedCheck_5129_ == 0)
{
v___x_5056_ = v_a_5052_;
v_isShared_5057_ = v_isSharedCheck_5129_;
goto v_resetjp_5055_;
}
else
{
lean_inc(v_snd_5054_);
lean_inc(v_fst_5053_);
lean_dec(v_a_5052_);
v___x_5056_ = lean_box(0);
v_isShared_5057_ = v_isSharedCheck_5129_;
goto v_resetjp_5055_;
}
v_resetjp_5055_:
{
lean_object* v___x_5058_; 
v___x_5058_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5008_, v_a_4751_, v_snd_5054_);
if (lean_obj_tag(v___x_5058_) == 0)
{
lean_object* v_a_5059_; lean_object* v_fst_5060_; lean_object* v_snd_5061_; lean_object* v___x_5063_; uint8_t v_isShared_5064_; uint8_t v_isSharedCheck_5120_; 
v_a_5059_ = lean_ctor_get(v___x_5058_, 0);
lean_inc(v_a_5059_);
lean_dec_ref_known(v___x_5058_, 1);
v_fst_5060_ = lean_ctor_get(v_a_5059_, 0);
v_snd_5061_ = lean_ctor_get(v_a_5059_, 1);
v_isSharedCheck_5120_ = !lean_is_exclusive(v_a_5059_);
if (v_isSharedCheck_5120_ == 0)
{
v___x_5063_ = v_a_5059_;
v_isShared_5064_ = v_isSharedCheck_5120_;
goto v_resetjp_5062_;
}
else
{
lean_inc(v_snd_5061_);
lean_inc(v_fst_5060_);
lean_dec(v_a_5059_);
v___x_5063_ = lean_box(0);
v_isShared_5064_ = v_isSharedCheck_5120_;
goto v_resetjp_5062_;
}
v_resetjp_5062_:
{
lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5069_; 
v___x_5065_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__4));
v___x_5066_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5067_ = l_Lean_JsonNumber_fromNat(v_fst_5032_);
if (v_isShared_5025_ == 0)
{
lean_ctor_set_tag(v___x_5024_, 2);
lean_ctor_set(v___x_5024_, 0, v___x_5067_);
v___x_5069_ = v___x_5024_;
goto v_reusejp_5068_;
}
else
{
lean_object* v_reuseFailAlloc_5119_; 
v_reuseFailAlloc_5119_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5119_, 0, v___x_5067_);
v___x_5069_ = v_reuseFailAlloc_5119_;
goto v_reusejp_5068_;
}
v_reusejp_5068_:
{
lean_object* v___x_5071_; 
if (v_isShared_5064_ == 0)
{
lean_ctor_set(v___x_5063_, 1, v___x_5069_);
lean_ctor_set(v___x_5063_, 0, v___x_5066_);
v___x_5071_ = v___x_5063_;
goto v_reusejp_5070_;
}
else
{
lean_object* v_reuseFailAlloc_5118_; 
v_reuseFailAlloc_5118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5118_, 0, v___x_5066_);
lean_ctor_set(v_reuseFailAlloc_5118_, 1, v___x_5069_);
v___x_5071_ = v_reuseFailAlloc_5118_;
goto v_reusejp_5070_;
}
v_reusejp_5070_:
{
lean_object* v___x_5072_; lean_object* v___x_5074_; 
v___x_5072_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5057_ == 0)
{
lean_ctor_set(v___x_5056_, 1, v_fst_5039_);
lean_ctor_set(v___x_5056_, 0, v___x_5072_);
v___x_5074_ = v___x_5056_;
goto v_reusejp_5073_;
}
else
{
lean_object* v_reuseFailAlloc_5117_; 
v_reuseFailAlloc_5117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5117_, 0, v___x_5072_);
lean_ctor_set(v_reuseFailAlloc_5117_, 1, v_fst_5039_);
v___x_5074_ = v_reuseFailAlloc_5117_;
goto v_reusejp_5073_;
}
v_reusejp_5073_:
{
lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5078_; 
v___x_5075_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5076_ = l_Lean_JsonNumber_fromNat(v_fst_5046_);
if (v_isShared_5016_ == 0)
{
lean_ctor_set_tag(v___x_5015_, 2);
lean_ctor_set(v___x_5015_, 0, v___x_5076_);
v___x_5078_ = v___x_5015_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v___x_5076_);
v___x_5078_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
lean_object* v___x_5080_; 
if (v_isShared_5050_ == 0)
{
lean_ctor_set(v___x_5049_, 1, v___x_5078_);
lean_ctor_set(v___x_5049_, 0, v___x_5075_);
v___x_5080_ = v___x_5049_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5115_; 
v_reuseFailAlloc_5115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5115_, 0, v___x_5075_);
lean_ctor_set(v_reuseFailAlloc_5115_, 1, v___x_5078_);
v___x_5080_ = v_reuseFailAlloc_5115_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5084_; 
v___x_5081_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5082_ = l_Lean_JsonNumber_fromNat(v_fst_5053_);
if (v_isShared_5003_ == 0)
{
lean_ctor_set_tag(v___x_5002_, 2);
lean_ctor_set(v___x_5002_, 0, v___x_5082_);
v___x_5084_ = v___x_5002_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5114_; 
v_reuseFailAlloc_5114_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5114_, 0, v___x_5082_);
v___x_5084_ = v_reuseFailAlloc_5114_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
lean_object* v___x_5086_; 
if (v_isShared_5043_ == 0)
{
lean_ctor_set(v___x_5042_, 1, v___x_5084_);
lean_ctor_set(v___x_5042_, 0, v___x_5081_);
v___x_5086_ = v___x_5042_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5113_; 
v_reuseFailAlloc_5113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5113_, 0, v___x_5081_);
lean_ctor_set(v_reuseFailAlloc_5113_, 1, v___x_5084_);
v___x_5086_ = v_reuseFailAlloc_5113_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5090_; 
v___x_5087_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__5));
v___x_5088_ = l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(v_hints_5006_);
lean_dec(v_hints_5006_);
if (v_isShared_5036_ == 0)
{
lean_ctor_set(v___x_5035_, 1, v___x_5088_);
lean_ctor_set(v___x_5035_, 0, v___x_5087_);
v___x_5090_ = v___x_5035_;
goto v_reusejp_5089_;
}
else
{
lean_object* v_reuseFailAlloc_5112_; 
v_reuseFailAlloc_5112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5112_, 0, v___x_5087_);
lean_ctor_set(v_reuseFailAlloc_5112_, 1, v___x_5088_);
v___x_5090_ = v_reuseFailAlloc_5112_;
goto v_reusejp_5089_;
}
v_reusejp_5089_:
{
lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5094_; 
v___x_5091_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__6));
v___x_5092_ = l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(v_safety_5007_);
if (v_isShared_5029_ == 0)
{
lean_ctor_set(v___x_5028_, 1, v___x_5092_);
lean_ctor_set(v___x_5028_, 0, v___x_5091_);
v___x_5094_ = v___x_5028_;
goto v_reusejp_5093_;
}
else
{
lean_object* v_reuseFailAlloc_5111_; 
v_reuseFailAlloc_5111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5111_, 0, v___x_5091_);
lean_ctor_set(v_reuseFailAlloc_5111_, 1, v___x_5092_);
v___x_5094_ = v_reuseFailAlloc_5111_;
goto v_reusejp_5093_;
}
v_reusejp_5093_:
{
lean_object* v___x_5095_; lean_object* v___x_5097_; 
v___x_5095_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5020_ == 0)
{
lean_ctor_set(v___x_5019_, 1, v_fst_5060_);
lean_ctor_set(v___x_5019_, 0, v___x_5095_);
v___x_5097_ = v___x_5019_;
goto v_reusejp_5096_;
}
else
{
lean_object* v_reuseFailAlloc_5110_; 
v_reuseFailAlloc_5110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5110_, 0, v___x_5095_);
lean_ctor_set(v_reuseFailAlloc_5110_, 1, v_fst_5060_);
v___x_5097_ = v_reuseFailAlloc_5110_;
goto v_reusejp_5096_;
}
v_reusejp_5096_:
{
lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; 
v___x_5098_ = lean_box(0);
v___x_5099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5099_, 0, v___x_5097_);
lean_ctor_set(v___x_5099_, 1, v___x_5098_);
v___x_5100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5100_, 0, v___x_5094_);
lean_ctor_set(v___x_5100_, 1, v___x_5099_);
v___x_5101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5101_, 0, v___x_5090_);
lean_ctor_set(v___x_5101_, 1, v___x_5100_);
v___x_5102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5102_, 0, v___x_5086_);
lean_ctor_set(v___x_5102_, 1, v___x_5101_);
v___x_5103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5103_, 0, v___x_5080_);
lean_ctor_set(v___x_5103_, 1, v___x_5102_);
v___x_5104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5104_, 0, v___x_5074_);
lean_ctor_set(v___x_5104_, 1, v___x_5103_);
v___x_5105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5105_, 0, v___x_5071_);
lean_ctor_set(v___x_5105_, 1, v___x_5104_);
v___x_5106_ = l_Lean_Json_mkObj(v___x_5105_);
lean_dec_ref_known(v___x_5105_, 2);
v___x_5107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5107_, 0, v___x_5065_);
lean_ctor_set(v___x_5107_, 1, v___x_5106_);
v___x_5108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5108_, 0, v___x_5107_);
lean_ctor_set(v___x_5108_, 1, v___x_5098_);
v___x_5109_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5108_, v_snd_5061_);
lean_dec_ref_known(v___x_5108_, 2);
return v___x_5109_;
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
}
else
{
lean_object* v_a_5121_; lean_object* v___x_5123_; uint8_t v_isShared_5124_; uint8_t v_isSharedCheck_5128_; 
lean_del_object(v___x_5056_);
lean_dec(v_fst_5053_);
lean_del_object(v___x_5049_);
lean_dec(v_fst_5046_);
lean_del_object(v___x_5042_);
lean_dec(v_fst_5039_);
lean_del_object(v___x_5035_);
lean_dec(v_fst_5032_);
lean_del_object(v___x_5028_);
lean_del_object(v___x_5024_);
lean_del_object(v___x_5019_);
lean_del_object(v___x_5015_);
lean_dec(v_hints_5006_);
lean_del_object(v___x_5002_);
v_a_5121_ = lean_ctor_get(v___x_5058_, 0);
v_isSharedCheck_5128_ = !lean_is_exclusive(v___x_5058_);
if (v_isSharedCheck_5128_ == 0)
{
v___x_5123_ = v___x_5058_;
v_isShared_5124_ = v_isSharedCheck_5128_;
goto v_resetjp_5122_;
}
else
{
lean_inc(v_a_5121_);
lean_dec(v___x_5058_);
v___x_5123_ = lean_box(0);
v_isShared_5124_ = v_isSharedCheck_5128_;
goto v_resetjp_5122_;
}
v_resetjp_5122_:
{
lean_object* v___x_5126_; 
if (v_isShared_5124_ == 0)
{
v___x_5126_ = v___x_5123_;
goto v_reusejp_5125_;
}
else
{
lean_object* v_reuseFailAlloc_5127_; 
v_reuseFailAlloc_5127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5127_, 0, v_a_5121_);
v___x_5126_ = v_reuseFailAlloc_5127_;
goto v_reusejp_5125_;
}
v_reusejp_5125_:
{
return v___x_5126_;
}
}
}
}
}
else
{
lean_object* v_a_5130_; lean_object* v___x_5132_; uint8_t v_isShared_5133_; uint8_t v_isSharedCheck_5137_; 
lean_del_object(v___x_5049_);
lean_dec(v_fst_5046_);
lean_del_object(v___x_5042_);
lean_dec(v_fst_5039_);
lean_del_object(v___x_5035_);
lean_dec(v_fst_5032_);
lean_del_object(v___x_5028_);
lean_del_object(v___x_5024_);
lean_del_object(v___x_5019_);
lean_del_object(v___x_5015_);
lean_dec(v_all_5008_);
lean_dec(v_hints_5006_);
lean_del_object(v___x_5002_);
v_a_5130_ = lean_ctor_get(v___x_5051_, 0);
v_isSharedCheck_5137_ = !lean_is_exclusive(v___x_5051_);
if (v_isSharedCheck_5137_ == 0)
{
v___x_5132_ = v___x_5051_;
v_isShared_5133_ = v_isSharedCheck_5137_;
goto v_resetjp_5131_;
}
else
{
lean_inc(v_a_5130_);
lean_dec(v___x_5051_);
v___x_5132_ = lean_box(0);
v_isShared_5133_ = v_isSharedCheck_5137_;
goto v_resetjp_5131_;
}
v_resetjp_5131_:
{
lean_object* v___x_5135_; 
if (v_isShared_5133_ == 0)
{
v___x_5135_ = v___x_5132_;
goto v_reusejp_5134_;
}
else
{
lean_object* v_reuseFailAlloc_5136_; 
v_reuseFailAlloc_5136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5136_, 0, v_a_5130_);
v___x_5135_ = v_reuseFailAlloc_5136_;
goto v_reusejp_5134_;
}
v_reusejp_5134_:
{
return v___x_5135_;
}
}
}
}
}
else
{
lean_object* v_a_5139_; lean_object* v___x_5141_; uint8_t v_isShared_5142_; uint8_t v_isSharedCheck_5146_; 
lean_del_object(v___x_5042_);
lean_dec(v_fst_5039_);
lean_del_object(v___x_5035_);
lean_dec(v_fst_5032_);
lean_del_object(v___x_5028_);
lean_del_object(v___x_5024_);
lean_del_object(v___x_5019_);
lean_del_object(v___x_5015_);
lean_dec(v_all_5008_);
lean_dec(v_hints_5006_);
lean_dec_ref(v_value_5005_);
lean_del_object(v___x_5002_);
v_a_5139_ = lean_ctor_get(v___x_5044_, 0);
v_isSharedCheck_5146_ = !lean_is_exclusive(v___x_5044_);
if (v_isSharedCheck_5146_ == 0)
{
v___x_5141_ = v___x_5044_;
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
else
{
lean_inc(v_a_5139_);
lean_dec(v___x_5044_);
v___x_5141_ = lean_box(0);
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
v_resetjp_5140_:
{
lean_object* v___x_5144_; 
if (v_isShared_5142_ == 0)
{
v___x_5144_ = v___x_5141_;
goto v_reusejp_5143_;
}
else
{
lean_object* v_reuseFailAlloc_5145_; 
v_reuseFailAlloc_5145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5145_, 0, v_a_5139_);
v___x_5144_ = v_reuseFailAlloc_5145_;
goto v_reusejp_5143_;
}
v_reusejp_5143_:
{
return v___x_5144_;
}
}
}
}
}
else
{
lean_object* v_a_5148_; lean_object* v___x_5150_; uint8_t v_isShared_5151_; uint8_t v_isSharedCheck_5155_; 
lean_del_object(v___x_5035_);
lean_dec(v_fst_5032_);
lean_del_object(v___x_5028_);
lean_del_object(v___x_5024_);
lean_del_object(v___x_5019_);
lean_del_object(v___x_5015_);
lean_dec_ref(v_type_5011_);
lean_dec(v_all_5008_);
lean_dec(v_hints_5006_);
lean_dec_ref(v_value_5005_);
lean_del_object(v___x_5002_);
v_a_5148_ = lean_ctor_get(v___x_5037_, 0);
v_isSharedCheck_5155_ = !lean_is_exclusive(v___x_5037_);
if (v_isSharedCheck_5155_ == 0)
{
v___x_5150_ = v___x_5037_;
v_isShared_5151_ = v_isSharedCheck_5155_;
goto v_resetjp_5149_;
}
else
{
lean_inc(v_a_5148_);
lean_dec(v___x_5037_);
v___x_5150_ = lean_box(0);
v_isShared_5151_ = v_isSharedCheck_5155_;
goto v_resetjp_5149_;
}
v_resetjp_5149_:
{
lean_object* v___x_5153_; 
if (v_isShared_5151_ == 0)
{
v___x_5153_ = v___x_5150_;
goto v_reusejp_5152_;
}
else
{
lean_object* v_reuseFailAlloc_5154_; 
v_reuseFailAlloc_5154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5154_, 0, v_a_5148_);
v___x_5153_ = v_reuseFailAlloc_5154_;
goto v_reusejp_5152_;
}
v_reusejp_5152_:
{
return v___x_5153_;
}
}
}
}
}
else
{
lean_object* v_a_5157_; lean_object* v___x_5159_; uint8_t v_isShared_5160_; uint8_t v_isSharedCheck_5164_; 
lean_del_object(v___x_5028_);
lean_del_object(v___x_5024_);
lean_del_object(v___x_5019_);
lean_del_object(v___x_5015_);
lean_dec_ref(v_type_5011_);
lean_dec(v_levelParams_5010_);
lean_dec(v_all_5008_);
lean_dec(v_hints_5006_);
lean_dec_ref(v_value_5005_);
lean_del_object(v___x_5002_);
v_a_5157_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5164_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5164_ == 0)
{
v___x_5159_ = v___x_5030_;
v_isShared_5160_ = v_isSharedCheck_5164_;
goto v_resetjp_5158_;
}
else
{
lean_inc(v_a_5157_);
lean_dec(v___x_5030_);
v___x_5159_ = lean_box(0);
v_isShared_5160_ = v_isSharedCheck_5164_;
goto v_resetjp_5158_;
}
v_resetjp_5158_:
{
lean_object* v___x_5162_; 
if (v_isShared_5160_ == 0)
{
v___x_5162_ = v___x_5159_;
goto v_reusejp_5161_;
}
else
{
lean_object* v_reuseFailAlloc_5163_; 
v_reuseFailAlloc_5163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5163_, 0, v_a_5157_);
v___x_5162_ = v_reuseFailAlloc_5163_;
goto v_reusejp_5161_;
}
v_reusejp_5161_:
{
return v___x_5162_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5019_);
lean_del_object(v___x_5015_);
lean_dec_ref(v_type_5011_);
lean_dec(v_levelParams_5010_);
lean_dec(v_name_5009_);
lean_dec(v_all_5008_);
lean_dec(v_hints_5006_);
lean_dec_ref(v_value_5005_);
lean_del_object(v___x_5002_);
return v___x_5021_;
}
}
}
}
else
{
lean_dec_ref(v_type_5011_);
lean_dec(v_levelParams_5010_);
lean_dec(v_name_5009_);
lean_dec(v_all_5008_);
lean_dec(v_hints_5006_);
lean_dec_ref(v_value_5005_);
lean_del_object(v___x_5002_);
return v___x_5012_;
}
}
}
case 2:
{
lean_object* v_val_5172_; lean_object* v___x_5174_; uint8_t v_isShared_5175_; uint8_t v_isSharedCheck_5333_; 
v_val_5172_ = lean_ctor_get(v_val_4877_, 0);
v_isSharedCheck_5333_ = !lean_is_exclusive(v_val_4877_);
if (v_isSharedCheck_5333_ == 0)
{
v___x_5174_ = v_val_4877_;
v_isShared_5175_ = v_isSharedCheck_5333_;
goto v_resetjp_5173_;
}
else
{
lean_inc(v_val_5172_);
lean_dec(v_val_4877_);
v___x_5174_ = lean_box(0);
v_isShared_5175_ = v_isSharedCheck_5333_;
goto v_resetjp_5173_;
}
v_resetjp_5173_:
{
lean_object* v_toConstantVal_5176_; lean_object* v_value_5177_; lean_object* v_all_5178_; lean_object* v_name_5179_; lean_object* v_levelParams_5180_; lean_object* v_type_5181_; lean_object* v___x_5182_; 
v_toConstantVal_5176_ = lean_ctor_get(v_val_5172_, 0);
lean_inc_ref(v_toConstantVal_5176_);
v_value_5177_ = lean_ctor_get(v_val_5172_, 1);
lean_inc_ref(v_value_5177_);
v_all_5178_ = lean_ctor_get(v_val_5172_, 2);
lean_inc(v_all_5178_);
lean_dec_ref(v_val_5172_);
v_name_5179_ = lean_ctor_get(v_toConstantVal_5176_, 0);
lean_inc(v_name_5179_);
v_levelParams_5180_ = lean_ctor_get(v_toConstantVal_5176_, 1);
lean_inc(v_levelParams_5180_);
v_type_5181_ = lean_ctor_get(v_toConstantVal_5176_, 2);
lean_inc_ref_n(v_type_5181_, 2);
lean_dec_ref(v_toConstantVal_5176_);
v___x_5182_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5181_, v_a_4751_, v___x_4894_);
if (lean_obj_tag(v___x_5182_) == 0)
{
lean_object* v_a_5183_; lean_object* v___x_5185_; uint8_t v_isShared_5186_; uint8_t v_isSharedCheck_5332_; 
v_a_5183_ = lean_ctor_get(v___x_5182_, 0);
v_isSharedCheck_5332_ = !lean_is_exclusive(v___x_5182_);
if (v_isSharedCheck_5332_ == 0)
{
v___x_5185_ = v___x_5182_;
v_isShared_5186_ = v_isSharedCheck_5332_;
goto v_resetjp_5184_;
}
else
{
lean_inc(v_a_5183_);
lean_dec(v___x_5182_);
v___x_5185_ = lean_box(0);
v_isShared_5186_ = v_isSharedCheck_5332_;
goto v_resetjp_5184_;
}
v_resetjp_5184_:
{
lean_object* v_snd_5187_; lean_object* v___x_5189_; uint8_t v_isShared_5190_; uint8_t v_isSharedCheck_5330_; 
v_snd_5187_ = lean_ctor_get(v_a_5183_, 1);
v_isSharedCheck_5330_ = !lean_is_exclusive(v_a_5183_);
if (v_isSharedCheck_5330_ == 0)
{
lean_object* v_unused_5331_; 
v_unused_5331_ = lean_ctor_get(v_a_5183_, 0);
lean_dec(v_unused_5331_);
v___x_5189_ = v_a_5183_;
v_isShared_5190_ = v_isSharedCheck_5330_;
goto v_resetjp_5188_;
}
else
{
lean_inc(v_snd_5187_);
lean_dec(v_a_5183_);
v___x_5189_ = lean_box(0);
v_isShared_5190_ = v_isSharedCheck_5330_;
goto v_resetjp_5188_;
}
v_resetjp_5188_:
{
lean_object* v___x_5191_; 
lean_inc_ref(v_value_5177_);
v___x_5191_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5177_, v_a_4751_, v_snd_5187_);
if (lean_obj_tag(v___x_5191_) == 0)
{
lean_object* v_a_5192_; lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5329_; 
v_a_5192_ = lean_ctor_get(v___x_5191_, 0);
v_isSharedCheck_5329_ = !lean_is_exclusive(v___x_5191_);
if (v_isSharedCheck_5329_ == 0)
{
v___x_5194_ = v___x_5191_;
v_isShared_5195_ = v_isSharedCheck_5329_;
goto v_resetjp_5193_;
}
else
{
lean_inc(v_a_5192_);
lean_dec(v___x_5191_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5329_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v_snd_5196_; lean_object* v___x_5198_; uint8_t v_isShared_5199_; uint8_t v_isSharedCheck_5327_; 
v_snd_5196_ = lean_ctor_get(v_a_5192_, 1);
v_isSharedCheck_5327_ = !lean_is_exclusive(v_a_5192_);
if (v_isSharedCheck_5327_ == 0)
{
lean_object* v_unused_5328_; 
v_unused_5328_ = lean_ctor_get(v_a_5192_, 0);
lean_dec(v_unused_5328_);
v___x_5198_ = v_a_5192_;
v_isShared_5199_ = v_isSharedCheck_5327_;
goto v_resetjp_5197_;
}
else
{
lean_inc(v_snd_5196_);
lean_dec(v_a_5192_);
v___x_5198_ = lean_box(0);
v_isShared_5199_ = v_isSharedCheck_5327_;
goto v_resetjp_5197_;
}
v_resetjp_5197_:
{
lean_object* v___x_5200_; 
v___x_5200_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5179_, v_a_4751_, v_snd_5196_);
if (lean_obj_tag(v___x_5200_) == 0)
{
lean_object* v_a_5201_; lean_object* v_fst_5202_; lean_object* v_snd_5203_; lean_object* v___x_5205_; uint8_t v_isShared_5206_; uint8_t v_isSharedCheck_5318_; 
v_a_5201_ = lean_ctor_get(v___x_5200_, 0);
lean_inc(v_a_5201_);
lean_dec_ref_known(v___x_5200_, 1);
v_fst_5202_ = lean_ctor_get(v_a_5201_, 0);
v_snd_5203_ = lean_ctor_get(v_a_5201_, 1);
v_isSharedCheck_5318_ = !lean_is_exclusive(v_a_5201_);
if (v_isSharedCheck_5318_ == 0)
{
v___x_5205_ = v_a_5201_;
v_isShared_5206_ = v_isSharedCheck_5318_;
goto v_resetjp_5204_;
}
else
{
lean_inc(v_snd_5203_);
lean_inc(v_fst_5202_);
lean_dec(v_a_5201_);
v___x_5205_ = lean_box(0);
v_isShared_5206_ = v_isSharedCheck_5318_;
goto v_resetjp_5204_;
}
v_resetjp_5204_:
{
lean_object* v___x_5207_; 
v___x_5207_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5180_, v_a_4751_, v_snd_5203_);
if (lean_obj_tag(v___x_5207_) == 0)
{
lean_object* v_a_5208_; lean_object* v_fst_5209_; lean_object* v_snd_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5309_; 
v_a_5208_ = lean_ctor_get(v___x_5207_, 0);
lean_inc(v_a_5208_);
lean_dec_ref_known(v___x_5207_, 1);
v_fst_5209_ = lean_ctor_get(v_a_5208_, 0);
v_snd_5210_ = lean_ctor_get(v_a_5208_, 1);
v_isSharedCheck_5309_ = !lean_is_exclusive(v_a_5208_);
if (v_isSharedCheck_5309_ == 0)
{
v___x_5212_ = v_a_5208_;
v_isShared_5213_ = v_isSharedCheck_5309_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_snd_5210_);
lean_inc(v_fst_5209_);
lean_dec(v_a_5208_);
v___x_5212_ = lean_box(0);
v_isShared_5213_ = v_isSharedCheck_5309_;
goto v_resetjp_5211_;
}
v_resetjp_5211_:
{
lean_object* v___x_5214_; 
v___x_5214_ = l_LeanExport_dumpExpr(v_type_5181_, v_a_4751_, v_snd_5210_);
if (lean_obj_tag(v___x_5214_) == 0)
{
lean_object* v_a_5215_; lean_object* v_fst_5216_; lean_object* v_snd_5217_; lean_object* v___x_5219_; uint8_t v_isShared_5220_; uint8_t v_isSharedCheck_5300_; 
v_a_5215_ = lean_ctor_get(v___x_5214_, 0);
lean_inc(v_a_5215_);
lean_dec_ref_known(v___x_5214_, 1);
v_fst_5216_ = lean_ctor_get(v_a_5215_, 0);
v_snd_5217_ = lean_ctor_get(v_a_5215_, 1);
v_isSharedCheck_5300_ = !lean_is_exclusive(v_a_5215_);
if (v_isSharedCheck_5300_ == 0)
{
v___x_5219_ = v_a_5215_;
v_isShared_5220_ = v_isSharedCheck_5300_;
goto v_resetjp_5218_;
}
else
{
lean_inc(v_snd_5217_);
lean_inc(v_fst_5216_);
lean_dec(v_a_5215_);
v___x_5219_ = lean_box(0);
v_isShared_5220_ = v_isSharedCheck_5300_;
goto v_resetjp_5218_;
}
v_resetjp_5218_:
{
lean_object* v___x_5221_; 
v___x_5221_ = l_LeanExport_dumpExpr(v_value_5177_, v_a_4751_, v_snd_5217_);
if (lean_obj_tag(v___x_5221_) == 0)
{
lean_object* v_a_5222_; lean_object* v_fst_5223_; lean_object* v_snd_5224_; lean_object* v___x_5226_; uint8_t v_isShared_5227_; uint8_t v_isSharedCheck_5291_; 
v_a_5222_ = lean_ctor_get(v___x_5221_, 0);
lean_inc(v_a_5222_);
lean_dec_ref_known(v___x_5221_, 1);
v_fst_5223_ = lean_ctor_get(v_a_5222_, 0);
v_snd_5224_ = lean_ctor_get(v_a_5222_, 1);
v_isSharedCheck_5291_ = !lean_is_exclusive(v_a_5222_);
if (v_isSharedCheck_5291_ == 0)
{
v___x_5226_ = v_a_5222_;
v_isShared_5227_ = v_isSharedCheck_5291_;
goto v_resetjp_5225_;
}
else
{
lean_inc(v_snd_5224_);
lean_inc(v_fst_5223_);
lean_dec(v_a_5222_);
v___x_5226_ = lean_box(0);
v_isShared_5227_ = v_isSharedCheck_5291_;
goto v_resetjp_5225_;
}
v_resetjp_5225_:
{
lean_object* v___x_5228_; 
v___x_5228_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5178_, v_a_4751_, v_snd_5224_);
if (lean_obj_tag(v___x_5228_) == 0)
{
lean_object* v_a_5229_; lean_object* v_fst_5230_; lean_object* v_snd_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5282_; 
v_a_5229_ = lean_ctor_get(v___x_5228_, 0);
lean_inc(v_a_5229_);
lean_dec_ref_known(v___x_5228_, 1);
v_fst_5230_ = lean_ctor_get(v_a_5229_, 0);
v_snd_5231_ = lean_ctor_get(v_a_5229_, 1);
v_isSharedCheck_5282_ = !lean_is_exclusive(v_a_5229_);
if (v_isSharedCheck_5282_ == 0)
{
v___x_5233_ = v_a_5229_;
v_isShared_5234_ = v_isSharedCheck_5282_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_snd_5231_);
lean_inc(v_fst_5230_);
lean_dec(v_a_5229_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5282_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5237_; lean_object* v___x_5239_; 
v___x_5235_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__7));
v___x_5236_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5237_ = l_Lean_JsonNumber_fromNat(v_fst_5202_);
if (v_isShared_5195_ == 0)
{
lean_ctor_set_tag(v___x_5194_, 2);
lean_ctor_set(v___x_5194_, 0, v___x_5237_);
v___x_5239_ = v___x_5194_;
goto v_reusejp_5238_;
}
else
{
lean_object* v_reuseFailAlloc_5281_; 
v_reuseFailAlloc_5281_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5281_, 0, v___x_5237_);
v___x_5239_ = v_reuseFailAlloc_5281_;
goto v_reusejp_5238_;
}
v_reusejp_5238_:
{
lean_object* v___x_5241_; 
if (v_isShared_5234_ == 0)
{
lean_ctor_set(v___x_5233_, 1, v___x_5239_);
lean_ctor_set(v___x_5233_, 0, v___x_5236_);
v___x_5241_ = v___x_5233_;
goto v_reusejp_5240_;
}
else
{
lean_object* v_reuseFailAlloc_5280_; 
v_reuseFailAlloc_5280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5280_, 0, v___x_5236_);
lean_ctor_set(v_reuseFailAlloc_5280_, 1, v___x_5239_);
v___x_5241_ = v_reuseFailAlloc_5280_;
goto v_reusejp_5240_;
}
v_reusejp_5240_:
{
lean_object* v___x_5242_; lean_object* v___x_5244_; 
v___x_5242_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5227_ == 0)
{
lean_ctor_set(v___x_5226_, 1, v_fst_5209_);
lean_ctor_set(v___x_5226_, 0, v___x_5242_);
v___x_5244_ = v___x_5226_;
goto v_reusejp_5243_;
}
else
{
lean_object* v_reuseFailAlloc_5279_; 
v_reuseFailAlloc_5279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5279_, 0, v___x_5242_);
lean_ctor_set(v_reuseFailAlloc_5279_, 1, v_fst_5209_);
v___x_5244_ = v_reuseFailAlloc_5279_;
goto v_reusejp_5243_;
}
v_reusejp_5243_:
{
lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5248_; 
v___x_5245_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5246_ = l_Lean_JsonNumber_fromNat(v_fst_5216_);
if (v_isShared_5186_ == 0)
{
lean_ctor_set_tag(v___x_5185_, 2);
lean_ctor_set(v___x_5185_, 0, v___x_5246_);
v___x_5248_ = v___x_5185_;
goto v_reusejp_5247_;
}
else
{
lean_object* v_reuseFailAlloc_5278_; 
v_reuseFailAlloc_5278_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5278_, 0, v___x_5246_);
v___x_5248_ = v_reuseFailAlloc_5278_;
goto v_reusejp_5247_;
}
v_reusejp_5247_:
{
lean_object* v___x_5250_; 
if (v_isShared_5220_ == 0)
{
lean_ctor_set(v___x_5219_, 1, v___x_5248_);
lean_ctor_set(v___x_5219_, 0, v___x_5245_);
v___x_5250_ = v___x_5219_;
goto v_reusejp_5249_;
}
else
{
lean_object* v_reuseFailAlloc_5277_; 
v_reuseFailAlloc_5277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5277_, 0, v___x_5245_);
lean_ctor_set(v_reuseFailAlloc_5277_, 1, v___x_5248_);
v___x_5250_ = v_reuseFailAlloc_5277_;
goto v_reusejp_5249_;
}
v_reusejp_5249_:
{
lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5254_; 
v___x_5251_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5252_ = l_Lean_JsonNumber_fromNat(v_fst_5223_);
if (v_isShared_5175_ == 0)
{
lean_ctor_set(v___x_5174_, 0, v___x_5252_);
v___x_5254_ = v___x_5174_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5276_; 
v_reuseFailAlloc_5276_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5276_, 0, v___x_5252_);
v___x_5254_ = v_reuseFailAlloc_5276_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
lean_object* v___x_5256_; 
if (v_isShared_5213_ == 0)
{
lean_ctor_set(v___x_5212_, 1, v___x_5254_);
lean_ctor_set(v___x_5212_, 0, v___x_5251_);
v___x_5256_ = v___x_5212_;
goto v_reusejp_5255_;
}
else
{
lean_object* v_reuseFailAlloc_5275_; 
v_reuseFailAlloc_5275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5275_, 0, v___x_5251_);
lean_ctor_set(v_reuseFailAlloc_5275_, 1, v___x_5254_);
v___x_5256_ = v_reuseFailAlloc_5275_;
goto v_reusejp_5255_;
}
v_reusejp_5255_:
{
lean_object* v___x_5257_; lean_object* v___x_5259_; 
v___x_5257_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5206_ == 0)
{
lean_ctor_set(v___x_5205_, 1, v_fst_5230_);
lean_ctor_set(v___x_5205_, 0, v___x_5257_);
v___x_5259_ = v___x_5205_;
goto v_reusejp_5258_;
}
else
{
lean_object* v_reuseFailAlloc_5274_; 
v_reuseFailAlloc_5274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5274_, 0, v___x_5257_);
lean_ctor_set(v_reuseFailAlloc_5274_, 1, v_fst_5230_);
v___x_5259_ = v_reuseFailAlloc_5274_;
goto v_reusejp_5258_;
}
v_reusejp_5258_:
{
lean_object* v___x_5260_; lean_object* v___x_5262_; 
v___x_5260_ = lean_box(0);
if (v_isShared_5190_ == 0)
{
lean_ctor_set_tag(v___x_5189_, 1);
lean_ctor_set(v___x_5189_, 1, v___x_5260_);
lean_ctor_set(v___x_5189_, 0, v___x_5259_);
v___x_5262_ = v___x_5189_;
goto v_reusejp_5261_;
}
else
{
lean_object* v_reuseFailAlloc_5273_; 
v_reuseFailAlloc_5273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5273_, 0, v___x_5259_);
lean_ctor_set(v_reuseFailAlloc_5273_, 1, v___x_5260_);
v___x_5262_ = v_reuseFailAlloc_5273_;
goto v_reusejp_5261_;
}
v_reusejp_5261_:
{
lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5267_; lean_object* v___x_5269_; 
v___x_5263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5263_, 0, v___x_5256_);
lean_ctor_set(v___x_5263_, 1, v___x_5262_);
v___x_5264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5264_, 0, v___x_5250_);
lean_ctor_set(v___x_5264_, 1, v___x_5263_);
v___x_5265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5265_, 0, v___x_5244_);
lean_ctor_set(v___x_5265_, 1, v___x_5264_);
v___x_5266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5266_, 0, v___x_5241_);
lean_ctor_set(v___x_5266_, 1, v___x_5265_);
v___x_5267_ = l_Lean_Json_mkObj(v___x_5266_);
lean_dec_ref_known(v___x_5266_, 2);
if (v_isShared_5199_ == 0)
{
lean_ctor_set(v___x_5198_, 1, v___x_5267_);
lean_ctor_set(v___x_5198_, 0, v___x_5235_);
v___x_5269_ = v___x_5198_;
goto v_reusejp_5268_;
}
else
{
lean_object* v_reuseFailAlloc_5272_; 
v_reuseFailAlloc_5272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5272_, 0, v___x_5235_);
lean_ctor_set(v_reuseFailAlloc_5272_, 1, v___x_5267_);
v___x_5269_ = v_reuseFailAlloc_5272_;
goto v_reusejp_5268_;
}
v_reusejp_5268_:
{
lean_object* v___x_5270_; lean_object* v___x_5271_; 
v___x_5270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5270_, 0, v___x_5269_);
lean_ctor_set(v___x_5270_, 1, v___x_5260_);
v___x_5271_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5270_, v_snd_5231_);
lean_dec_ref_known(v___x_5270_, 2);
return v___x_5271_;
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
}
else
{
lean_object* v_a_5283_; lean_object* v___x_5285_; uint8_t v_isShared_5286_; uint8_t v_isSharedCheck_5290_; 
lean_del_object(v___x_5226_);
lean_dec(v_fst_5223_);
lean_del_object(v___x_5219_);
lean_dec(v_fst_5216_);
lean_del_object(v___x_5212_);
lean_dec(v_fst_5209_);
lean_del_object(v___x_5205_);
lean_dec(v_fst_5202_);
lean_del_object(v___x_5198_);
lean_del_object(v___x_5194_);
lean_del_object(v___x_5189_);
lean_del_object(v___x_5185_);
lean_del_object(v___x_5174_);
v_a_5283_ = lean_ctor_get(v___x_5228_, 0);
v_isSharedCheck_5290_ = !lean_is_exclusive(v___x_5228_);
if (v_isSharedCheck_5290_ == 0)
{
v___x_5285_ = v___x_5228_;
v_isShared_5286_ = v_isSharedCheck_5290_;
goto v_resetjp_5284_;
}
else
{
lean_inc(v_a_5283_);
lean_dec(v___x_5228_);
v___x_5285_ = lean_box(0);
v_isShared_5286_ = v_isSharedCheck_5290_;
goto v_resetjp_5284_;
}
v_resetjp_5284_:
{
lean_object* v___x_5288_; 
if (v_isShared_5286_ == 0)
{
v___x_5288_ = v___x_5285_;
goto v_reusejp_5287_;
}
else
{
lean_object* v_reuseFailAlloc_5289_; 
v_reuseFailAlloc_5289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5289_, 0, v_a_5283_);
v___x_5288_ = v_reuseFailAlloc_5289_;
goto v_reusejp_5287_;
}
v_reusejp_5287_:
{
return v___x_5288_;
}
}
}
}
}
else
{
lean_object* v_a_5292_; lean_object* v___x_5294_; uint8_t v_isShared_5295_; uint8_t v_isSharedCheck_5299_; 
lean_del_object(v___x_5219_);
lean_dec(v_fst_5216_);
lean_del_object(v___x_5212_);
lean_dec(v_fst_5209_);
lean_del_object(v___x_5205_);
lean_dec(v_fst_5202_);
lean_del_object(v___x_5198_);
lean_del_object(v___x_5194_);
lean_del_object(v___x_5189_);
lean_del_object(v___x_5185_);
lean_dec(v_all_5178_);
lean_del_object(v___x_5174_);
v_a_5292_ = lean_ctor_get(v___x_5221_, 0);
v_isSharedCheck_5299_ = !lean_is_exclusive(v___x_5221_);
if (v_isSharedCheck_5299_ == 0)
{
v___x_5294_ = v___x_5221_;
v_isShared_5295_ = v_isSharedCheck_5299_;
goto v_resetjp_5293_;
}
else
{
lean_inc(v_a_5292_);
lean_dec(v___x_5221_);
v___x_5294_ = lean_box(0);
v_isShared_5295_ = v_isSharedCheck_5299_;
goto v_resetjp_5293_;
}
v_resetjp_5293_:
{
lean_object* v___x_5297_; 
if (v_isShared_5295_ == 0)
{
v___x_5297_ = v___x_5294_;
goto v_reusejp_5296_;
}
else
{
lean_object* v_reuseFailAlloc_5298_; 
v_reuseFailAlloc_5298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5298_, 0, v_a_5292_);
v___x_5297_ = v_reuseFailAlloc_5298_;
goto v_reusejp_5296_;
}
v_reusejp_5296_:
{
return v___x_5297_;
}
}
}
}
}
else
{
lean_object* v_a_5301_; lean_object* v___x_5303_; uint8_t v_isShared_5304_; uint8_t v_isSharedCheck_5308_; 
lean_del_object(v___x_5212_);
lean_dec(v_fst_5209_);
lean_del_object(v___x_5205_);
lean_dec(v_fst_5202_);
lean_del_object(v___x_5198_);
lean_del_object(v___x_5194_);
lean_del_object(v___x_5189_);
lean_del_object(v___x_5185_);
lean_dec(v_all_5178_);
lean_dec_ref(v_value_5177_);
lean_del_object(v___x_5174_);
v_a_5301_ = lean_ctor_get(v___x_5214_, 0);
v_isSharedCheck_5308_ = !lean_is_exclusive(v___x_5214_);
if (v_isSharedCheck_5308_ == 0)
{
v___x_5303_ = v___x_5214_;
v_isShared_5304_ = v_isSharedCheck_5308_;
goto v_resetjp_5302_;
}
else
{
lean_inc(v_a_5301_);
lean_dec(v___x_5214_);
v___x_5303_ = lean_box(0);
v_isShared_5304_ = v_isSharedCheck_5308_;
goto v_resetjp_5302_;
}
v_resetjp_5302_:
{
lean_object* v___x_5306_; 
if (v_isShared_5304_ == 0)
{
v___x_5306_ = v___x_5303_;
goto v_reusejp_5305_;
}
else
{
lean_object* v_reuseFailAlloc_5307_; 
v_reuseFailAlloc_5307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5307_, 0, v_a_5301_);
v___x_5306_ = v_reuseFailAlloc_5307_;
goto v_reusejp_5305_;
}
v_reusejp_5305_:
{
return v___x_5306_;
}
}
}
}
}
else
{
lean_object* v_a_5310_; lean_object* v___x_5312_; uint8_t v_isShared_5313_; uint8_t v_isSharedCheck_5317_; 
lean_del_object(v___x_5205_);
lean_dec(v_fst_5202_);
lean_del_object(v___x_5198_);
lean_del_object(v___x_5194_);
lean_del_object(v___x_5189_);
lean_del_object(v___x_5185_);
lean_dec_ref(v_type_5181_);
lean_dec(v_all_5178_);
lean_dec_ref(v_value_5177_);
lean_del_object(v___x_5174_);
v_a_5310_ = lean_ctor_get(v___x_5207_, 0);
v_isSharedCheck_5317_ = !lean_is_exclusive(v___x_5207_);
if (v_isSharedCheck_5317_ == 0)
{
v___x_5312_ = v___x_5207_;
v_isShared_5313_ = v_isSharedCheck_5317_;
goto v_resetjp_5311_;
}
else
{
lean_inc(v_a_5310_);
lean_dec(v___x_5207_);
v___x_5312_ = lean_box(0);
v_isShared_5313_ = v_isSharedCheck_5317_;
goto v_resetjp_5311_;
}
v_resetjp_5311_:
{
lean_object* v___x_5315_; 
if (v_isShared_5313_ == 0)
{
v___x_5315_ = v___x_5312_;
goto v_reusejp_5314_;
}
else
{
lean_object* v_reuseFailAlloc_5316_; 
v_reuseFailAlloc_5316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5316_, 0, v_a_5310_);
v___x_5315_ = v_reuseFailAlloc_5316_;
goto v_reusejp_5314_;
}
v_reusejp_5314_:
{
return v___x_5315_;
}
}
}
}
}
else
{
lean_object* v_a_5319_; lean_object* v___x_5321_; uint8_t v_isShared_5322_; uint8_t v_isSharedCheck_5326_; 
lean_del_object(v___x_5198_);
lean_del_object(v___x_5194_);
lean_del_object(v___x_5189_);
lean_del_object(v___x_5185_);
lean_dec_ref(v_type_5181_);
lean_dec(v_levelParams_5180_);
lean_dec(v_all_5178_);
lean_dec_ref(v_value_5177_);
lean_del_object(v___x_5174_);
v_a_5319_ = lean_ctor_get(v___x_5200_, 0);
v_isSharedCheck_5326_ = !lean_is_exclusive(v___x_5200_);
if (v_isSharedCheck_5326_ == 0)
{
v___x_5321_ = v___x_5200_;
v_isShared_5322_ = v_isSharedCheck_5326_;
goto v_resetjp_5320_;
}
else
{
lean_inc(v_a_5319_);
lean_dec(v___x_5200_);
v___x_5321_ = lean_box(0);
v_isShared_5322_ = v_isSharedCheck_5326_;
goto v_resetjp_5320_;
}
v_resetjp_5320_:
{
lean_object* v___x_5324_; 
if (v_isShared_5322_ == 0)
{
v___x_5324_ = v___x_5321_;
goto v_reusejp_5323_;
}
else
{
lean_object* v_reuseFailAlloc_5325_; 
v_reuseFailAlloc_5325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5325_, 0, v_a_5319_);
v___x_5324_ = v_reuseFailAlloc_5325_;
goto v_reusejp_5323_;
}
v_reusejp_5323_:
{
return v___x_5324_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5189_);
lean_del_object(v___x_5185_);
lean_dec_ref(v_type_5181_);
lean_dec(v_levelParams_5180_);
lean_dec(v_name_5179_);
lean_dec(v_all_5178_);
lean_dec_ref(v_value_5177_);
lean_del_object(v___x_5174_);
return v___x_5191_;
}
}
}
}
else
{
lean_dec_ref(v_type_5181_);
lean_dec(v_levelParams_5180_);
lean_dec(v_name_5179_);
lean_dec(v_all_5178_);
lean_dec_ref(v_value_5177_);
lean_del_object(v___x_5174_);
return v___x_5182_;
}
}
}
case 3:
{
lean_object* v_val_5334_; lean_object* v___x_5336_; uint8_t v_isShared_5337_; uint8_t v_isSharedCheck_5500_; 
v_val_5334_ = lean_ctor_get(v_val_4877_, 0);
v_isSharedCheck_5500_ = !lean_is_exclusive(v_val_4877_);
if (v_isSharedCheck_5500_ == 0)
{
v___x_5336_ = v_val_4877_;
v_isShared_5337_ = v_isSharedCheck_5500_;
goto v_resetjp_5335_;
}
else
{
lean_inc(v_val_5334_);
lean_dec(v_val_4877_);
v___x_5336_ = lean_box(0);
v_isShared_5337_ = v_isSharedCheck_5500_;
goto v_resetjp_5335_;
}
v_resetjp_5335_:
{
lean_object* v_toConstantVal_5338_; lean_object* v_value_5339_; uint8_t v_isUnsafe_5340_; lean_object* v_all_5341_; lean_object* v_name_5342_; lean_object* v_levelParams_5343_; lean_object* v_type_5344_; lean_object* v___x_5345_; 
v_toConstantVal_5338_ = lean_ctor_get(v_val_5334_, 0);
lean_inc_ref(v_toConstantVal_5338_);
v_value_5339_ = lean_ctor_get(v_val_5334_, 1);
lean_inc_ref(v_value_5339_);
v_isUnsafe_5340_ = lean_ctor_get_uint8(v_val_5334_, sizeof(void*)*3);
v_all_5341_ = lean_ctor_get(v_val_5334_, 2);
lean_inc(v_all_5341_);
lean_dec_ref(v_val_5334_);
v_name_5342_ = lean_ctor_get(v_toConstantVal_5338_, 0);
lean_inc(v_name_5342_);
v_levelParams_5343_ = lean_ctor_get(v_toConstantVal_5338_, 1);
lean_inc(v_levelParams_5343_);
v_type_5344_ = lean_ctor_get(v_toConstantVal_5338_, 2);
lean_inc_ref_n(v_type_5344_, 2);
lean_dec_ref(v_toConstantVal_5338_);
v___x_5345_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5344_, v_a_4751_, v___x_4894_);
if (lean_obj_tag(v___x_5345_) == 0)
{
lean_object* v_a_5346_; lean_object* v___x_5348_; uint8_t v_isShared_5349_; uint8_t v_isSharedCheck_5499_; 
v_a_5346_ = lean_ctor_get(v___x_5345_, 0);
v_isSharedCheck_5499_ = !lean_is_exclusive(v___x_5345_);
if (v_isSharedCheck_5499_ == 0)
{
v___x_5348_ = v___x_5345_;
v_isShared_5349_ = v_isSharedCheck_5499_;
goto v_resetjp_5347_;
}
else
{
lean_inc(v_a_5346_);
lean_dec(v___x_5345_);
v___x_5348_ = lean_box(0);
v_isShared_5349_ = v_isSharedCheck_5499_;
goto v_resetjp_5347_;
}
v_resetjp_5347_:
{
lean_object* v_snd_5350_; lean_object* v___x_5352_; uint8_t v_isShared_5353_; uint8_t v_isSharedCheck_5497_; 
v_snd_5350_ = lean_ctor_get(v_a_5346_, 1);
v_isSharedCheck_5497_ = !lean_is_exclusive(v_a_5346_);
if (v_isSharedCheck_5497_ == 0)
{
lean_object* v_unused_5498_; 
v_unused_5498_ = lean_ctor_get(v_a_5346_, 0);
lean_dec(v_unused_5498_);
v___x_5352_ = v_a_5346_;
v_isShared_5353_ = v_isSharedCheck_5497_;
goto v_resetjp_5351_;
}
else
{
lean_inc(v_snd_5350_);
lean_dec(v_a_5346_);
v___x_5352_ = lean_box(0);
v_isShared_5353_ = v_isSharedCheck_5497_;
goto v_resetjp_5351_;
}
v_resetjp_5351_:
{
lean_object* v___x_5354_; 
lean_inc_ref(v_value_5339_);
v___x_5354_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5339_, v_a_4751_, v_snd_5350_);
if (lean_obj_tag(v___x_5354_) == 0)
{
lean_object* v_a_5355_; lean_object* v___x_5357_; uint8_t v_isShared_5358_; uint8_t v_isSharedCheck_5496_; 
v_a_5355_ = lean_ctor_get(v___x_5354_, 0);
v_isSharedCheck_5496_ = !lean_is_exclusive(v___x_5354_);
if (v_isSharedCheck_5496_ == 0)
{
v___x_5357_ = v___x_5354_;
v_isShared_5358_ = v_isSharedCheck_5496_;
goto v_resetjp_5356_;
}
else
{
lean_inc(v_a_5355_);
lean_dec(v___x_5354_);
v___x_5357_ = lean_box(0);
v_isShared_5358_ = v_isSharedCheck_5496_;
goto v_resetjp_5356_;
}
v_resetjp_5356_:
{
lean_object* v_snd_5359_; lean_object* v___x_5361_; uint8_t v_isShared_5362_; uint8_t v_isSharedCheck_5494_; 
v_snd_5359_ = lean_ctor_get(v_a_5355_, 1);
v_isSharedCheck_5494_ = !lean_is_exclusive(v_a_5355_);
if (v_isSharedCheck_5494_ == 0)
{
lean_object* v_unused_5495_; 
v_unused_5495_ = lean_ctor_get(v_a_5355_, 0);
lean_dec(v_unused_5495_);
v___x_5361_ = v_a_5355_;
v_isShared_5362_ = v_isSharedCheck_5494_;
goto v_resetjp_5360_;
}
else
{
lean_inc(v_snd_5359_);
lean_dec(v_a_5355_);
v___x_5361_ = lean_box(0);
v_isShared_5362_ = v_isSharedCheck_5494_;
goto v_resetjp_5360_;
}
v_resetjp_5360_:
{
lean_object* v___x_5363_; 
v___x_5363_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5342_, v_a_4751_, v_snd_5359_);
if (lean_obj_tag(v___x_5363_) == 0)
{
lean_object* v_a_5364_; lean_object* v_fst_5365_; lean_object* v_snd_5366_; lean_object* v___x_5368_; uint8_t v_isShared_5369_; uint8_t v_isSharedCheck_5485_; 
v_a_5364_ = lean_ctor_get(v___x_5363_, 0);
lean_inc(v_a_5364_);
lean_dec_ref_known(v___x_5363_, 1);
v_fst_5365_ = lean_ctor_get(v_a_5364_, 0);
v_snd_5366_ = lean_ctor_get(v_a_5364_, 1);
v_isSharedCheck_5485_ = !lean_is_exclusive(v_a_5364_);
if (v_isSharedCheck_5485_ == 0)
{
v___x_5368_ = v_a_5364_;
v_isShared_5369_ = v_isSharedCheck_5485_;
goto v_resetjp_5367_;
}
else
{
lean_inc(v_snd_5366_);
lean_inc(v_fst_5365_);
lean_dec(v_a_5364_);
v___x_5368_ = lean_box(0);
v_isShared_5369_ = v_isSharedCheck_5485_;
goto v_resetjp_5367_;
}
v_resetjp_5367_:
{
lean_object* v___x_5370_; 
v___x_5370_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5343_, v_a_4751_, v_snd_5366_);
if (lean_obj_tag(v___x_5370_) == 0)
{
lean_object* v_a_5371_; lean_object* v_fst_5372_; lean_object* v_snd_5373_; lean_object* v___x_5375_; uint8_t v_isShared_5376_; uint8_t v_isSharedCheck_5476_; 
v_a_5371_ = lean_ctor_get(v___x_5370_, 0);
lean_inc(v_a_5371_);
lean_dec_ref_known(v___x_5370_, 1);
v_fst_5372_ = lean_ctor_get(v_a_5371_, 0);
v_snd_5373_ = lean_ctor_get(v_a_5371_, 1);
v_isSharedCheck_5476_ = !lean_is_exclusive(v_a_5371_);
if (v_isSharedCheck_5476_ == 0)
{
v___x_5375_ = v_a_5371_;
v_isShared_5376_ = v_isSharedCheck_5476_;
goto v_resetjp_5374_;
}
else
{
lean_inc(v_snd_5373_);
lean_inc(v_fst_5372_);
lean_dec(v_a_5371_);
v___x_5375_ = lean_box(0);
v_isShared_5376_ = v_isSharedCheck_5476_;
goto v_resetjp_5374_;
}
v_resetjp_5374_:
{
lean_object* v___x_5377_; 
v___x_5377_ = l_LeanExport_dumpExpr(v_type_5344_, v_a_4751_, v_snd_5373_);
if (lean_obj_tag(v___x_5377_) == 0)
{
lean_object* v_a_5378_; lean_object* v_fst_5379_; lean_object* v_snd_5380_; lean_object* v___x_5382_; uint8_t v_isShared_5383_; uint8_t v_isSharedCheck_5467_; 
v_a_5378_ = lean_ctor_get(v___x_5377_, 0);
lean_inc(v_a_5378_);
lean_dec_ref_known(v___x_5377_, 1);
v_fst_5379_ = lean_ctor_get(v_a_5378_, 0);
v_snd_5380_ = lean_ctor_get(v_a_5378_, 1);
v_isSharedCheck_5467_ = !lean_is_exclusive(v_a_5378_);
if (v_isSharedCheck_5467_ == 0)
{
v___x_5382_ = v_a_5378_;
v_isShared_5383_ = v_isSharedCheck_5467_;
goto v_resetjp_5381_;
}
else
{
lean_inc(v_snd_5380_);
lean_inc(v_fst_5379_);
lean_dec(v_a_5378_);
v___x_5382_ = lean_box(0);
v_isShared_5383_ = v_isSharedCheck_5467_;
goto v_resetjp_5381_;
}
v_resetjp_5381_:
{
lean_object* v___x_5384_; 
v___x_5384_ = l_LeanExport_dumpExpr(v_value_5339_, v_a_4751_, v_snd_5380_);
if (lean_obj_tag(v___x_5384_) == 0)
{
lean_object* v_a_5385_; lean_object* v_fst_5386_; lean_object* v_snd_5387_; lean_object* v___x_5389_; uint8_t v_isShared_5390_; uint8_t v_isSharedCheck_5458_; 
v_a_5385_ = lean_ctor_get(v___x_5384_, 0);
lean_inc(v_a_5385_);
lean_dec_ref_known(v___x_5384_, 1);
v_fst_5386_ = lean_ctor_get(v_a_5385_, 0);
v_snd_5387_ = lean_ctor_get(v_a_5385_, 1);
v_isSharedCheck_5458_ = !lean_is_exclusive(v_a_5385_);
if (v_isSharedCheck_5458_ == 0)
{
v___x_5389_ = v_a_5385_;
v_isShared_5390_ = v_isSharedCheck_5458_;
goto v_resetjp_5388_;
}
else
{
lean_inc(v_snd_5387_);
lean_inc(v_fst_5386_);
lean_dec(v_a_5385_);
v___x_5389_ = lean_box(0);
v_isShared_5390_ = v_isSharedCheck_5458_;
goto v_resetjp_5388_;
}
v_resetjp_5388_:
{
lean_object* v___x_5391_; 
v___x_5391_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5341_, v_a_4751_, v_snd_5387_);
if (lean_obj_tag(v___x_5391_) == 0)
{
lean_object* v_a_5392_; lean_object* v_fst_5393_; lean_object* v_snd_5394_; lean_object* v___x_5396_; uint8_t v_isShared_5397_; uint8_t v_isSharedCheck_5449_; 
v_a_5392_ = lean_ctor_get(v___x_5391_, 0);
lean_inc(v_a_5392_);
lean_dec_ref_known(v___x_5391_, 1);
v_fst_5393_ = lean_ctor_get(v_a_5392_, 0);
v_snd_5394_ = lean_ctor_get(v_a_5392_, 1);
v_isSharedCheck_5449_ = !lean_is_exclusive(v_a_5392_);
if (v_isSharedCheck_5449_ == 0)
{
v___x_5396_ = v_a_5392_;
v_isShared_5397_ = v_isSharedCheck_5449_;
goto v_resetjp_5395_;
}
else
{
lean_inc(v_snd_5394_);
lean_inc(v_fst_5393_);
lean_dec(v_a_5392_);
v___x_5396_ = lean_box(0);
v_isShared_5397_ = v_isSharedCheck_5449_;
goto v_resetjp_5395_;
}
v_resetjp_5395_:
{
lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5402_; 
v___x_5398_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0));
v___x_5399_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5400_ = l_Lean_JsonNumber_fromNat(v_fst_5365_);
if (v_isShared_5358_ == 0)
{
lean_ctor_set_tag(v___x_5357_, 2);
lean_ctor_set(v___x_5357_, 0, v___x_5400_);
v___x_5402_ = v___x_5357_;
goto v_reusejp_5401_;
}
else
{
lean_object* v_reuseFailAlloc_5448_; 
v_reuseFailAlloc_5448_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5448_, 0, v___x_5400_);
v___x_5402_ = v_reuseFailAlloc_5448_;
goto v_reusejp_5401_;
}
v_reusejp_5401_:
{
lean_object* v___x_5404_; 
if (v_isShared_5397_ == 0)
{
lean_ctor_set(v___x_5396_, 1, v___x_5402_);
lean_ctor_set(v___x_5396_, 0, v___x_5399_);
v___x_5404_ = v___x_5396_;
goto v_reusejp_5403_;
}
else
{
lean_object* v_reuseFailAlloc_5447_; 
v_reuseFailAlloc_5447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5447_, 0, v___x_5399_);
lean_ctor_set(v_reuseFailAlloc_5447_, 1, v___x_5402_);
v___x_5404_ = v_reuseFailAlloc_5447_;
goto v_reusejp_5403_;
}
v_reusejp_5403_:
{
lean_object* v___x_5405_; lean_object* v___x_5407_; 
v___x_5405_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5390_ == 0)
{
lean_ctor_set(v___x_5389_, 1, v_fst_5372_);
lean_ctor_set(v___x_5389_, 0, v___x_5405_);
v___x_5407_ = v___x_5389_;
goto v_reusejp_5406_;
}
else
{
lean_object* v_reuseFailAlloc_5446_; 
v_reuseFailAlloc_5446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5446_, 0, v___x_5405_);
lean_ctor_set(v_reuseFailAlloc_5446_, 1, v_fst_5372_);
v___x_5407_ = v_reuseFailAlloc_5446_;
goto v_reusejp_5406_;
}
v_reusejp_5406_:
{
lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5411_; 
v___x_5408_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5409_ = l_Lean_JsonNumber_fromNat(v_fst_5379_);
if (v_isShared_5349_ == 0)
{
lean_ctor_set_tag(v___x_5348_, 2);
lean_ctor_set(v___x_5348_, 0, v___x_5409_);
v___x_5411_ = v___x_5348_;
goto v_reusejp_5410_;
}
else
{
lean_object* v_reuseFailAlloc_5445_; 
v_reuseFailAlloc_5445_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5445_, 0, v___x_5409_);
v___x_5411_ = v_reuseFailAlloc_5445_;
goto v_reusejp_5410_;
}
v_reusejp_5410_:
{
lean_object* v___x_5413_; 
if (v_isShared_5383_ == 0)
{
lean_ctor_set(v___x_5382_, 1, v___x_5411_);
lean_ctor_set(v___x_5382_, 0, v___x_5408_);
v___x_5413_ = v___x_5382_;
goto v_reusejp_5412_;
}
else
{
lean_object* v_reuseFailAlloc_5444_; 
v_reuseFailAlloc_5444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5444_, 0, v___x_5408_);
lean_ctor_set(v_reuseFailAlloc_5444_, 1, v___x_5411_);
v___x_5413_ = v_reuseFailAlloc_5444_;
goto v_reusejp_5412_;
}
v_reusejp_5412_:
{
lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5417_; 
v___x_5414_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5415_ = l_Lean_JsonNumber_fromNat(v_fst_5386_);
if (v_isShared_5337_ == 0)
{
lean_ctor_set_tag(v___x_5336_, 2);
lean_ctor_set(v___x_5336_, 0, v___x_5415_);
v___x_5417_ = v___x_5336_;
goto v_reusejp_5416_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v___x_5415_);
v___x_5417_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5416_;
}
v_reusejp_5416_:
{
lean_object* v___x_5419_; 
if (v_isShared_5376_ == 0)
{
lean_ctor_set(v___x_5375_, 1, v___x_5417_);
lean_ctor_set(v___x_5375_, 0, v___x_5414_);
v___x_5419_ = v___x_5375_;
goto v_reusejp_5418_;
}
else
{
lean_object* v_reuseFailAlloc_5442_; 
v_reuseFailAlloc_5442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5442_, 0, v___x_5414_);
lean_ctor_set(v_reuseFailAlloc_5442_, 1, v___x_5417_);
v___x_5419_ = v_reuseFailAlloc_5442_;
goto v_reusejp_5418_;
}
v_reusejp_5418_:
{
lean_object* v___x_5420_; lean_object* v___x_5422_; 
v___x_5420_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5369_ == 0)
{
lean_ctor_set(v___x_5368_, 1, v_fst_5393_);
lean_ctor_set(v___x_5368_, 0, v___x_5420_);
v___x_5422_ = v___x_5368_;
goto v_reusejp_5421_;
}
else
{
lean_object* v_reuseFailAlloc_5441_; 
v_reuseFailAlloc_5441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5441_, 0, v___x_5420_);
lean_ctor_set(v_reuseFailAlloc_5441_, 1, v_fst_5393_);
v___x_5422_ = v_reuseFailAlloc_5441_;
goto v_reusejp_5421_;
}
v_reusejp_5421_:
{
lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5426_; 
v___x_5423_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_5424_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5424_, 0, v_isUnsafe_5340_);
if (v_isShared_5362_ == 0)
{
lean_ctor_set(v___x_5361_, 1, v___x_5424_);
lean_ctor_set(v___x_5361_, 0, v___x_5423_);
v___x_5426_ = v___x_5361_;
goto v_reusejp_5425_;
}
else
{
lean_object* v_reuseFailAlloc_5440_; 
v_reuseFailAlloc_5440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5440_, 0, v___x_5423_);
lean_ctor_set(v_reuseFailAlloc_5440_, 1, v___x_5424_);
v___x_5426_ = v_reuseFailAlloc_5440_;
goto v_reusejp_5425_;
}
v_reusejp_5425_:
{
lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5436_; 
v___x_5427_ = lean_box(0);
v___x_5428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5428_, 0, v___x_5426_);
lean_ctor_set(v___x_5428_, 1, v___x_5427_);
v___x_5429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5429_, 0, v___x_5422_);
lean_ctor_set(v___x_5429_, 1, v___x_5428_);
v___x_5430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5430_, 0, v___x_5419_);
lean_ctor_set(v___x_5430_, 1, v___x_5429_);
v___x_5431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5431_, 0, v___x_5413_);
lean_ctor_set(v___x_5431_, 1, v___x_5430_);
v___x_5432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5432_, 0, v___x_5407_);
lean_ctor_set(v___x_5432_, 1, v___x_5431_);
v___x_5433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5433_, 0, v___x_5404_);
lean_ctor_set(v___x_5433_, 1, v___x_5432_);
v___x_5434_ = l_Lean_Json_mkObj(v___x_5433_);
lean_dec_ref_known(v___x_5433_, 2);
if (v_isShared_5353_ == 0)
{
lean_ctor_set(v___x_5352_, 1, v___x_5434_);
lean_ctor_set(v___x_5352_, 0, v___x_5398_);
v___x_5436_ = v___x_5352_;
goto v_reusejp_5435_;
}
else
{
lean_object* v_reuseFailAlloc_5439_; 
v_reuseFailAlloc_5439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5439_, 0, v___x_5398_);
lean_ctor_set(v_reuseFailAlloc_5439_, 1, v___x_5434_);
v___x_5436_ = v_reuseFailAlloc_5439_;
goto v_reusejp_5435_;
}
v_reusejp_5435_:
{
lean_object* v___x_5437_; lean_object* v___x_5438_; 
v___x_5437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5437_, 0, v___x_5436_);
lean_ctor_set(v___x_5437_, 1, v___x_5427_);
v___x_5438_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5437_, v_snd_5394_);
lean_dec_ref_known(v___x_5437_, 2);
return v___x_5438_;
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
}
else
{
lean_object* v_a_5450_; lean_object* v___x_5452_; uint8_t v_isShared_5453_; uint8_t v_isSharedCheck_5457_; 
lean_del_object(v___x_5389_);
lean_dec(v_fst_5386_);
lean_del_object(v___x_5382_);
lean_dec(v_fst_5379_);
lean_del_object(v___x_5375_);
lean_dec(v_fst_5372_);
lean_del_object(v___x_5368_);
lean_dec(v_fst_5365_);
lean_del_object(v___x_5361_);
lean_del_object(v___x_5357_);
lean_del_object(v___x_5352_);
lean_del_object(v___x_5348_);
lean_del_object(v___x_5336_);
v_a_5450_ = lean_ctor_get(v___x_5391_, 0);
v_isSharedCheck_5457_ = !lean_is_exclusive(v___x_5391_);
if (v_isSharedCheck_5457_ == 0)
{
v___x_5452_ = v___x_5391_;
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
else
{
lean_inc(v_a_5450_);
lean_dec(v___x_5391_);
v___x_5452_ = lean_box(0);
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
v_resetjp_5451_:
{
lean_object* v___x_5455_; 
if (v_isShared_5453_ == 0)
{
v___x_5455_ = v___x_5452_;
goto v_reusejp_5454_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v_a_5450_);
v___x_5455_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5454_;
}
v_reusejp_5454_:
{
return v___x_5455_;
}
}
}
}
}
else
{
lean_object* v_a_5459_; lean_object* v___x_5461_; uint8_t v_isShared_5462_; uint8_t v_isSharedCheck_5466_; 
lean_del_object(v___x_5382_);
lean_dec(v_fst_5379_);
lean_del_object(v___x_5375_);
lean_dec(v_fst_5372_);
lean_del_object(v___x_5368_);
lean_dec(v_fst_5365_);
lean_del_object(v___x_5361_);
lean_del_object(v___x_5357_);
lean_del_object(v___x_5352_);
lean_del_object(v___x_5348_);
lean_dec(v_all_5341_);
lean_del_object(v___x_5336_);
v_a_5459_ = lean_ctor_get(v___x_5384_, 0);
v_isSharedCheck_5466_ = !lean_is_exclusive(v___x_5384_);
if (v_isSharedCheck_5466_ == 0)
{
v___x_5461_ = v___x_5384_;
v_isShared_5462_ = v_isSharedCheck_5466_;
goto v_resetjp_5460_;
}
else
{
lean_inc(v_a_5459_);
lean_dec(v___x_5384_);
v___x_5461_ = lean_box(0);
v_isShared_5462_ = v_isSharedCheck_5466_;
goto v_resetjp_5460_;
}
v_resetjp_5460_:
{
lean_object* v___x_5464_; 
if (v_isShared_5462_ == 0)
{
v___x_5464_ = v___x_5461_;
goto v_reusejp_5463_;
}
else
{
lean_object* v_reuseFailAlloc_5465_; 
v_reuseFailAlloc_5465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5465_, 0, v_a_5459_);
v___x_5464_ = v_reuseFailAlloc_5465_;
goto v_reusejp_5463_;
}
v_reusejp_5463_:
{
return v___x_5464_;
}
}
}
}
}
else
{
lean_object* v_a_5468_; lean_object* v___x_5470_; uint8_t v_isShared_5471_; uint8_t v_isSharedCheck_5475_; 
lean_del_object(v___x_5375_);
lean_dec(v_fst_5372_);
lean_del_object(v___x_5368_);
lean_dec(v_fst_5365_);
lean_del_object(v___x_5361_);
lean_del_object(v___x_5357_);
lean_del_object(v___x_5352_);
lean_del_object(v___x_5348_);
lean_dec(v_all_5341_);
lean_dec_ref(v_value_5339_);
lean_del_object(v___x_5336_);
v_a_5468_ = lean_ctor_get(v___x_5377_, 0);
v_isSharedCheck_5475_ = !lean_is_exclusive(v___x_5377_);
if (v_isSharedCheck_5475_ == 0)
{
v___x_5470_ = v___x_5377_;
v_isShared_5471_ = v_isSharedCheck_5475_;
goto v_resetjp_5469_;
}
else
{
lean_inc(v_a_5468_);
lean_dec(v___x_5377_);
v___x_5470_ = lean_box(0);
v_isShared_5471_ = v_isSharedCheck_5475_;
goto v_resetjp_5469_;
}
v_resetjp_5469_:
{
lean_object* v___x_5473_; 
if (v_isShared_5471_ == 0)
{
v___x_5473_ = v___x_5470_;
goto v_reusejp_5472_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v_a_5468_);
v___x_5473_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5472_;
}
v_reusejp_5472_:
{
return v___x_5473_;
}
}
}
}
}
else
{
lean_object* v_a_5477_; lean_object* v___x_5479_; uint8_t v_isShared_5480_; uint8_t v_isSharedCheck_5484_; 
lean_del_object(v___x_5368_);
lean_dec(v_fst_5365_);
lean_del_object(v___x_5361_);
lean_del_object(v___x_5357_);
lean_del_object(v___x_5352_);
lean_del_object(v___x_5348_);
lean_dec_ref(v_type_5344_);
lean_dec(v_all_5341_);
lean_dec_ref(v_value_5339_);
lean_del_object(v___x_5336_);
v_a_5477_ = lean_ctor_get(v___x_5370_, 0);
v_isSharedCheck_5484_ = !lean_is_exclusive(v___x_5370_);
if (v_isSharedCheck_5484_ == 0)
{
v___x_5479_ = v___x_5370_;
v_isShared_5480_ = v_isSharedCheck_5484_;
goto v_resetjp_5478_;
}
else
{
lean_inc(v_a_5477_);
lean_dec(v___x_5370_);
v___x_5479_ = lean_box(0);
v_isShared_5480_ = v_isSharedCheck_5484_;
goto v_resetjp_5478_;
}
v_resetjp_5478_:
{
lean_object* v___x_5482_; 
if (v_isShared_5480_ == 0)
{
v___x_5482_ = v___x_5479_;
goto v_reusejp_5481_;
}
else
{
lean_object* v_reuseFailAlloc_5483_; 
v_reuseFailAlloc_5483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5483_, 0, v_a_5477_);
v___x_5482_ = v_reuseFailAlloc_5483_;
goto v_reusejp_5481_;
}
v_reusejp_5481_:
{
return v___x_5482_;
}
}
}
}
}
else
{
lean_object* v_a_5486_; lean_object* v___x_5488_; uint8_t v_isShared_5489_; uint8_t v_isSharedCheck_5493_; 
lean_del_object(v___x_5361_);
lean_del_object(v___x_5357_);
lean_del_object(v___x_5352_);
lean_del_object(v___x_5348_);
lean_dec_ref(v_type_5344_);
lean_dec(v_levelParams_5343_);
lean_dec(v_all_5341_);
lean_dec_ref(v_value_5339_);
lean_del_object(v___x_5336_);
v_a_5486_ = lean_ctor_get(v___x_5363_, 0);
v_isSharedCheck_5493_ = !lean_is_exclusive(v___x_5363_);
if (v_isSharedCheck_5493_ == 0)
{
v___x_5488_ = v___x_5363_;
v_isShared_5489_ = v_isSharedCheck_5493_;
goto v_resetjp_5487_;
}
else
{
lean_inc(v_a_5486_);
lean_dec(v___x_5363_);
v___x_5488_ = lean_box(0);
v_isShared_5489_ = v_isSharedCheck_5493_;
goto v_resetjp_5487_;
}
v_resetjp_5487_:
{
lean_object* v___x_5491_; 
if (v_isShared_5489_ == 0)
{
v___x_5491_ = v___x_5488_;
goto v_reusejp_5490_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v_a_5486_);
v___x_5491_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5490_;
}
v_reusejp_5490_:
{
return v___x_5491_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5352_);
lean_del_object(v___x_5348_);
lean_dec_ref(v_type_5344_);
lean_dec(v_levelParams_5343_);
lean_dec(v_name_5342_);
lean_dec(v_all_5341_);
lean_dec_ref(v_value_5339_);
lean_del_object(v___x_5336_);
return v___x_5354_;
}
}
}
}
else
{
lean_dec_ref(v_type_5344_);
lean_dec(v_levelParams_5343_);
lean_dec(v_name_5342_);
lean_dec(v_all_5341_);
lean_dec_ref(v_value_5339_);
lean_del_object(v___x_5336_);
return v___x_5345_;
}
}
}
case 4:
{
lean_object* v___x_5501_; lean_object* v___x_5502_; 
lean_dec_ref_known(v_val_4877_, 1);
v___x_5501_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__9));
v___x_5502_ = l_LeanExport_dumpConstant(v___x_5501_, v_a_4751_, v___x_4894_);
if (lean_obj_tag(v___x_5502_) == 0)
{
lean_object* v_a_5503_; lean_object* v_snd_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; 
v_a_5503_ = lean_ctor_get(v___x_5502_, 0);
lean_inc(v_a_5503_);
lean_dec_ref_known(v___x_5502_, 1);
v_snd_5504_ = lean_ctor_get(v_a_5503_, 1);
lean_inc(v_snd_5504_);
lean_dec(v_a_5503_);
v___x_5505_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__19));
v___x_5506_ = lean_box(0);
v___x_5507_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
v___x_5508_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_4888_, v___x_5505_, v___x_5507_, v_a_4751_, v_snd_5504_);
if (lean_obj_tag(v___x_5508_) == 0)
{
lean_object* v_a_5509_; lean_object* v___x_5511_; uint8_t v_isShared_5512_; uint8_t v_isSharedCheck_5535_; 
v_a_5509_ = lean_ctor_get(v___x_5508_, 0);
v_isSharedCheck_5535_ = !lean_is_exclusive(v___x_5508_);
if (v_isSharedCheck_5535_ == 0)
{
v___x_5511_ = v___x_5508_;
v_isShared_5512_ = v_isSharedCheck_5535_;
goto v_resetjp_5510_;
}
else
{
lean_inc(v_a_5509_);
lean_dec(v___x_5508_);
v___x_5511_ = lean_box(0);
v_isShared_5512_ = v_isSharedCheck_5535_;
goto v_resetjp_5510_;
}
v_resetjp_5510_:
{
lean_object* v_fst_5513_; lean_object* v_fst_5514_; lean_object* v___x_5516_; uint8_t v_isShared_5517_; uint8_t v_isSharedCheck_5533_; 
v_fst_5513_ = lean_ctor_get(v_a_5509_, 0);
lean_inc(v_fst_5513_);
v_fst_5514_ = lean_ctor_get(v_fst_5513_, 0);
v_isSharedCheck_5533_ = !lean_is_exclusive(v_fst_5513_);
if (v_isSharedCheck_5533_ == 0)
{
lean_object* v_unused_5534_; 
v_unused_5534_ = lean_ctor_get(v_fst_5513_, 1);
lean_dec(v_unused_5534_);
v___x_5516_ = v_fst_5513_;
v_isShared_5517_ = v_isSharedCheck_5533_;
goto v_resetjp_5515_;
}
else
{
lean_inc(v_fst_5514_);
lean_dec(v_fst_5513_);
v___x_5516_ = lean_box(0);
v_isShared_5517_ = v_isSharedCheck_5533_;
goto v_resetjp_5515_;
}
v_resetjp_5515_:
{
if (lean_obj_tag(v_fst_5514_) == 0)
{
lean_object* v_snd_5518_; lean_object* v___x_5520_; 
v_snd_5518_ = lean_ctor_get(v_a_5509_, 1);
lean_inc(v_snd_5518_);
lean_dec(v_a_5509_);
if (v_isShared_5517_ == 0)
{
lean_ctor_set(v___x_5516_, 1, v_snd_5518_);
lean_ctor_set(v___x_5516_, 0, v___x_5506_);
v___x_5520_ = v___x_5516_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5524_; 
v_reuseFailAlloc_5524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5524_, 0, v___x_5506_);
lean_ctor_set(v_reuseFailAlloc_5524_, 1, v_snd_5518_);
v___x_5520_ = v_reuseFailAlloc_5524_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
lean_object* v___x_5522_; 
if (v_isShared_5512_ == 0)
{
lean_ctor_set(v___x_5511_, 0, v___x_5520_);
v___x_5522_ = v___x_5511_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v___x_5520_);
v___x_5522_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
return v___x_5522_;
}
}
}
else
{
lean_object* v_snd_5525_; lean_object* v_val_5526_; lean_object* v___x_5528_; 
v_snd_5525_ = lean_ctor_get(v_a_5509_, 1);
lean_inc(v_snd_5525_);
lean_dec(v_a_5509_);
v_val_5526_ = lean_ctor_get(v_fst_5514_, 0);
lean_inc(v_val_5526_);
lean_dec_ref_known(v_fst_5514_, 1);
if (v_isShared_5517_ == 0)
{
lean_ctor_set(v___x_5516_, 1, v_snd_5525_);
lean_ctor_set(v___x_5516_, 0, v_val_5526_);
v___x_5528_ = v___x_5516_;
goto v_reusejp_5527_;
}
else
{
lean_object* v_reuseFailAlloc_5532_; 
v_reuseFailAlloc_5532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5532_, 0, v_val_5526_);
lean_ctor_set(v_reuseFailAlloc_5532_, 1, v_snd_5525_);
v___x_5528_ = v_reuseFailAlloc_5532_;
goto v_reusejp_5527_;
}
v_reusejp_5527_:
{
lean_object* v___x_5530_; 
if (v_isShared_5512_ == 0)
{
lean_ctor_set(v___x_5511_, 0, v___x_5528_);
v___x_5530_ = v___x_5511_;
goto v_reusejp_5529_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v___x_5528_);
v___x_5530_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5529_;
}
v_reusejp_5529_:
{
return v___x_5530_;
}
}
}
}
}
}
else
{
lean_object* v_a_5536_; lean_object* v___x_5538_; uint8_t v_isShared_5539_; uint8_t v_isSharedCheck_5543_; 
v_a_5536_ = lean_ctor_get(v___x_5508_, 0);
v_isSharedCheck_5543_ = !lean_is_exclusive(v___x_5508_);
if (v_isSharedCheck_5543_ == 0)
{
v___x_5538_ = v___x_5508_;
v_isShared_5539_ = v_isSharedCheck_5543_;
goto v_resetjp_5537_;
}
else
{
lean_inc(v_a_5536_);
lean_dec(v___x_5508_);
v___x_5538_ = lean_box(0);
v_isShared_5539_ = v_isSharedCheck_5543_;
goto v_resetjp_5537_;
}
v_resetjp_5537_:
{
lean_object* v___x_5541_; 
if (v_isShared_5539_ == 0)
{
v___x_5541_ = v___x_5538_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5542_; 
v_reuseFailAlloc_5542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5542_, 0, v_a_5536_);
v___x_5541_ = v_reuseFailAlloc_5542_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
return v___x_5541_;
}
}
}
}
else
{
return v___x_5502_;
}
}
case 5:
{
lean_object* v_val_5544_; lean_object* v_all_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5548_; 
v_val_5544_ = lean_ctor_get(v_val_4877_, 0);
lean_inc_ref(v_val_5544_);
lean_dec_ref_known(v_val_4877_, 1);
v_all_5545_ = lean_ctor_get(v_val_5544_, 3);
lean_inc(v_all_5545_);
v___x_5546_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_5547_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__22, &l_LeanExport_dumpConstant___closed__22_once, _init_l_LeanExport_dumpConstant___closed__22);
v___x_5548_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v___x_4888_, v_val_5544_, v_all_5545_, v___x_5547_, v_a_4751_, v___x_4894_);
lean_dec(v_all_5545_);
lean_dec_ref(v_val_5544_);
if (lean_obj_tag(v___x_5548_) == 0)
{
lean_object* v_a_5549_; lean_object* v_fst_5550_; lean_object* v_snd_5551_; lean_object* v_snd_5552_; lean_object* v_fst_5553_; lean_object* v_fst_5554_; lean_object* v_snd_5555_; lean_object* v___x_5556_; size_t v_sz_5557_; size_t v___x_5558_; lean_object* v___x_5559_; 
v_a_5549_ = lean_ctor_get(v___x_5548_, 0);
lean_inc(v_a_5549_);
lean_dec_ref_known(v___x_5548_, 1);
v_fst_5550_ = lean_ctor_get(v_a_5549_, 0);
lean_inc(v_fst_5550_);
v_snd_5551_ = lean_ctor_get(v_fst_5550_, 1);
lean_inc(v_snd_5551_);
v_snd_5552_ = lean_ctor_get(v_a_5549_, 1);
lean_inc(v_snd_5552_);
lean_dec(v_a_5549_);
v_fst_5553_ = lean_ctor_get(v_fst_5550_, 0);
lean_inc(v_fst_5553_);
lean_dec(v_fst_5550_);
v_fst_5554_ = lean_ctor_get(v_snd_5551_, 0);
lean_inc(v_fst_5554_);
v_snd_5555_ = lean_ctor_get(v_snd_5551_, 1);
lean_inc(v_snd_5555_);
lean_dec(v_snd_5551_);
v___x_5556_ = lean_box(0);
v_sz_5557_ = lean_array_size(v_fst_5554_);
v___x_5558_ = ((size_t)0ULL);
v___x_5559_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(v_fst_5554_, v_sz_5557_, v___x_5558_, v___x_5556_, v_a_4751_, v_snd_5552_);
if (lean_obj_tag(v___x_5559_) == 0)
{
lean_object* v_a_5560_; lean_object* v_snd_5561_; lean_object* v___x_5562_; 
v_a_5560_ = lean_ctor_get(v___x_5559_, 0);
lean_inc(v_a_5560_);
lean_dec_ref_known(v___x_5559_, 1);
v_snd_5561_ = lean_ctor_get(v_a_5560_, 1);
lean_inc(v_snd_5561_);
lean_dec(v_a_5560_);
v___x_5562_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(v___x_4888_, v___x_5546_, v_snd_5555_, v_a_4751_, v_snd_5561_);
if (lean_obj_tag(v___x_5562_) == 0)
{
lean_object* v_a_5563_; lean_object* v_fst_5564_; lean_object* v_snd_5565_; lean_object* v_a_5566_; 
v_a_5563_ = lean_ctor_get(v___x_5562_, 0);
lean_inc(v_a_5563_);
lean_dec_ref_known(v___x_5562_, 1);
v_fst_5564_ = lean_ctor_get(v_a_5563_, 0);
lean_inc(v_fst_5564_);
v_snd_5565_ = lean_ctor_get(v_a_5563_, 1);
lean_inc(v_snd_5565_);
lean_dec(v_a_5563_);
v_a_5566_ = lean_ctor_get(v_fst_5564_, 0);
lean_inc(v_a_5566_);
lean_dec(v_fst_5564_);
v___y_4759_ = v___x_5556_;
v___y_4760_ = v_fst_5553_;
v___y_4761_ = v_fst_5554_;
v_fst_4762_ = v_a_5566_;
v_snd_4763_ = v_snd_5565_;
goto v___jp_4758_;
}
else
{
lean_object* v_a_5567_; lean_object* v___x_5569_; uint8_t v_isShared_5570_; uint8_t v_isSharedCheck_5574_; 
lean_dec(v_fst_5554_);
lean_dec(v_fst_5553_);
v_a_5567_ = lean_ctor_get(v___x_5562_, 0);
v_isSharedCheck_5574_ = !lean_is_exclusive(v___x_5562_);
if (v_isSharedCheck_5574_ == 0)
{
v___x_5569_ = v___x_5562_;
v_isShared_5570_ = v_isSharedCheck_5574_;
goto v_resetjp_5568_;
}
else
{
lean_inc(v_a_5567_);
lean_dec(v___x_5562_);
v___x_5569_ = lean_box(0);
v_isShared_5570_ = v_isSharedCheck_5574_;
goto v_resetjp_5568_;
}
v_resetjp_5568_:
{
lean_object* v___x_5572_; 
if (v_isShared_5570_ == 0)
{
v___x_5572_ = v___x_5569_;
goto v_reusejp_5571_;
}
else
{
lean_object* v_reuseFailAlloc_5573_; 
v_reuseFailAlloc_5573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5573_, 0, v_a_5567_);
v___x_5572_ = v_reuseFailAlloc_5573_;
goto v_reusejp_5571_;
}
v_reusejp_5571_:
{
return v___x_5572_;
}
}
}
}
else
{
lean_dec(v_snd_5555_);
lean_dec(v_fst_5554_);
lean_dec(v_fst_5553_);
return v___x_5559_;
}
}
else
{
lean_object* v_a_5575_; lean_object* v___x_5577_; uint8_t v_isShared_5578_; uint8_t v_isSharedCheck_5582_; 
v_a_5575_ = lean_ctor_get(v___x_5548_, 0);
v_isSharedCheck_5582_ = !lean_is_exclusive(v___x_5548_);
if (v_isSharedCheck_5582_ == 0)
{
v___x_5577_ = v___x_5548_;
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
else
{
lean_inc(v_a_5575_);
lean_dec(v___x_5548_);
v___x_5577_ = lean_box(0);
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
v_resetjp_5576_:
{
lean_object* v___x_5580_; 
if (v_isShared_5578_ == 0)
{
v___x_5580_ = v___x_5577_;
goto v_reusejp_5579_;
}
else
{
lean_object* v_reuseFailAlloc_5581_; 
v_reuseFailAlloc_5581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5581_, 0, v_a_5575_);
v___x_5580_ = v_reuseFailAlloc_5581_;
goto v_reusejp_5579_;
}
v_reusejp_5579_:
{
return v___x_5580_;
}
}
}
}
case 6:
{
lean_object* v_val_5583_; lean_object* v_induct_5584_; 
v_val_5583_ = lean_ctor_get(v_val_4877_, 0);
lean_inc_ref(v_val_5583_);
lean_dec_ref_known(v_val_4877_, 1);
v_induct_5584_ = lean_ctor_get(v_val_5583_, 1);
lean_inc(v_induct_5584_);
lean_dec_ref(v_val_5583_);
v_c_4750_ = v_induct_5584_;
v_a_4752_ = v___x_4894_;
goto _start;
}
default: 
{
lean_object* v_val_5586_; lean_object* v_all_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; 
v_val_5586_ = lean_ctor_get(v_val_4877_, 0);
lean_inc_ref(v_val_5586_);
lean_dec_ref_known(v_val_4877_, 1);
v_all_5587_ = lean_ctor_get(v_val_5586_, 1);
lean_inc(v_all_5587_);
lean_dec_ref(v_val_5586_);
v___x_5588_ = lean_box(0);
v___x_5589_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(v_all_5587_, v___x_5588_, v_a_4751_, v___x_4894_);
lean_dec(v_all_5587_);
if (lean_obj_tag(v___x_5589_) == 0)
{
lean_object* v_a_5590_; lean_object* v___x_5592_; uint8_t v_isShared_5593_; uint8_t v_isSharedCheck_5606_; 
v_a_5590_ = lean_ctor_get(v___x_5589_, 0);
v_isSharedCheck_5606_ = !lean_is_exclusive(v___x_5589_);
if (v_isSharedCheck_5606_ == 0)
{
v___x_5592_ = v___x_5589_;
v_isShared_5593_ = v_isSharedCheck_5606_;
goto v_resetjp_5591_;
}
else
{
lean_inc(v_a_5590_);
lean_dec(v___x_5589_);
v___x_5592_ = lean_box(0);
v_isShared_5593_ = v_isSharedCheck_5606_;
goto v_resetjp_5591_;
}
v_resetjp_5591_:
{
lean_object* v_snd_5594_; lean_object* v___x_5596_; uint8_t v_isShared_5597_; uint8_t v_isSharedCheck_5604_; 
v_snd_5594_ = lean_ctor_get(v_a_5590_, 1);
v_isSharedCheck_5604_ = !lean_is_exclusive(v_a_5590_);
if (v_isSharedCheck_5604_ == 0)
{
lean_object* v_unused_5605_; 
v_unused_5605_ = lean_ctor_get(v_a_5590_, 0);
lean_dec(v_unused_5605_);
v___x_5596_ = v_a_5590_;
v_isShared_5597_ = v_isSharedCheck_5604_;
goto v_resetjp_5595_;
}
else
{
lean_inc(v_snd_5594_);
lean_dec(v_a_5590_);
v___x_5596_ = lean_box(0);
v_isShared_5597_ = v_isSharedCheck_5604_;
goto v_resetjp_5595_;
}
v_resetjp_5595_:
{
lean_object* v___x_5599_; 
if (v_isShared_5597_ == 0)
{
lean_ctor_set(v___x_5596_, 0, v___x_5588_);
v___x_5599_ = v___x_5596_;
goto v_reusejp_5598_;
}
else
{
lean_object* v_reuseFailAlloc_5603_; 
v_reuseFailAlloc_5603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5603_, 0, v___x_5588_);
lean_ctor_set(v_reuseFailAlloc_5603_, 1, v_snd_5594_);
v___x_5599_ = v_reuseFailAlloc_5603_;
goto v_reusejp_5598_;
}
v_reusejp_5598_:
{
lean_object* v___x_5601_; 
if (v_isShared_5593_ == 0)
{
lean_ctor_set(v___x_5592_, 0, v___x_5599_);
v___x_5601_ = v___x_5592_;
goto v_reusejp_5600_;
}
else
{
lean_object* v_reuseFailAlloc_5602_; 
v_reuseFailAlloc_5602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5602_, 0, v___x_5599_);
v___x_5601_ = v_reuseFailAlloc_5602_;
goto v_reusejp_5600_;
}
v_reusejp_5600_:
{
return v___x_5601_;
}
}
}
}
}
else
{
return v___x_5589_;
}
}
}
}
}
}
else
{
lean_dec(v_val_4877_);
lean_dec(v_c_4750_);
goto v___jp_4754_;
}
}
v___jp_5615_:
{
if (v___y_5616_ == 0)
{
goto v___jp_4878_;
}
else
{
lean_dec(v_val_4877_);
lean_dec(v_c_4750_);
goto v___jp_4754_;
}
}
}
else
{
uint8_t v_ignoreMissing_5619_; 
lean_dec(v___x_4876_);
v_ignoreMissing_5619_ = lean_ctor_get_uint8(v_a_4752_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_5619_ == 0)
{
lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; lean_object* v___x_5624_; uint8_t v___x_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; 
v___x_5620_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_5621_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_5622_ = lean_unsigned_to_nat(254u);
v___x_5623_ = lean_unsigned_to_nat(48u);
v___x_5624_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_5625_ = 1;
v___x_5626_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_4750_, v___x_5625_);
v___x_5627_ = lean_string_append(v___x_5624_, v___x_5626_);
lean_dec_ref(v___x_5626_);
v___x_5628_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_5629_ = lean_string_append(v___x_5627_, v___x_5628_);
v___x_5630_ = l_mkPanicMessageWithDecl(v___x_5620_, v___x_5621_, v___x_5622_, v___x_5623_, v___x_5629_);
lean_dec_ref(v___x_5629_);
v___x_5631_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_5630_, v_a_4751_, v_a_4752_);
return v___x_5631_;
}
else
{
lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; 
lean_dec(v_c_4750_);
v___x_5632_ = lean_box(0);
v___x_5633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5633_, 0, v___x_5632_);
lean_ctor_set(v___x_5633_, 1, v_a_4752_);
v___x_5634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5634_, 0, v___x_5633_);
return v___x_5634_;
}
}
v___jp_4754_:
{
lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4755_ = lean_box(0);
v___x_4756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4756_, 0, v___x_4755_);
lean_ctor_set(v___x_4756_, 1, v_a_4752_);
v___x_4757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4757_, 0, v___x_4756_);
return v___x_4757_;
}
v___jp_4758_:
{
size_t v_sz_4764_; size_t v___x_4765_; lean_object* v___x_4766_; 
v_sz_4764_ = lean_array_size(v_fst_4762_);
v___x_4765_ = ((size_t)0ULL);
v___x_4766_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_fst_4762_, v_sz_4764_, v___x_4765_, v___y_4759_, v_a_4751_, v_snd_4763_);
if (lean_obj_tag(v___x_4766_) == 0)
{
lean_object* v_a_4767_; lean_object* v_snd_4768_; lean_object* v___x_4770_; uint8_t v_isShared_4771_; uint8_t v_isSharedCheck_4873_; 
v_a_4767_ = lean_ctor_get(v___x_4766_, 0);
lean_inc(v_a_4767_);
lean_dec_ref_known(v___x_4766_, 1);
v_snd_4768_ = lean_ctor_get(v_a_4767_, 1);
v_isSharedCheck_4873_ = !lean_is_exclusive(v_a_4767_);
if (v_isSharedCheck_4873_ == 0)
{
lean_object* v_unused_4874_; 
v_unused_4874_ = lean_ctor_get(v_a_4767_, 0);
lean_dec(v_unused_4874_);
v___x_4770_ = v_a_4767_;
v_isShared_4771_ = v_isSharedCheck_4873_;
goto v_resetjp_4769_;
}
else
{
lean_inc(v_snd_4768_);
lean_dec(v_a_4767_);
v___x_4770_ = lean_box(0);
v_isShared_4771_ = v_isSharedCheck_4873_;
goto v_resetjp_4769_;
}
v_resetjp_4769_:
{
lean_object* v___x_4772_; 
v___x_4772_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(v_fst_4762_, v_sz_4764_, v___x_4765_, v___y_4759_, v_a_4751_, v_snd_4768_);
if (lean_obj_tag(v___x_4772_) == 0)
{
lean_object* v_a_4773_; lean_object* v_snd_4774_; lean_object* v___x_4776_; uint8_t v_isShared_4777_; uint8_t v_isSharedCheck_4871_; 
v_a_4773_ = lean_ctor_get(v___x_4772_, 0);
lean_inc(v_a_4773_);
lean_dec_ref_known(v___x_4772_, 1);
v_snd_4774_ = lean_ctor_get(v_a_4773_, 1);
v_isSharedCheck_4871_ = !lean_is_exclusive(v_a_4773_);
if (v_isSharedCheck_4871_ == 0)
{
lean_object* v_unused_4872_; 
v_unused_4872_ = lean_ctor_get(v_a_4773_, 0);
lean_dec(v_unused_4872_);
v___x_4776_ = v_a_4773_;
v_isShared_4777_ = v_isSharedCheck_4871_;
goto v_resetjp_4775_;
}
else
{
lean_inc(v_snd_4774_);
lean_dec(v_a_4773_);
v___x_4776_ = lean_box(0);
v_isShared_4777_ = v_isSharedCheck_4871_;
goto v_resetjp_4775_;
}
v_resetjp_4775_:
{
size_t v_sz_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_171903__overap_4783_; lean_object* v___x_4784_; 
v_sz_4778_ = lean_array_size(v___y_4760_);
v___x_4779_ = l_unsafeCast___redArg(v___y_4760_);
lean_dec(v___y_4760_);
v___x_4780_ = lean_box_usize(v_sz_4778_);
v___x_4781_ = ((lean_object*)(l_LeanExport_dumpConstant___boxed__const__1));
v___x_4782_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___boxed), 6, 3);
lean_closure_set(v___x_4782_, 0, v___x_4780_);
lean_closure_set(v___x_4782_, 1, v___x_4781_);
lean_closure_set(v___x_4782_, 2, v___x_4779_);
v___x_171903__overap_4783_ = l_unsafeCast___redArg(v___x_4782_);
lean_dec_ref(v___x_4782_);
lean_inc_ref(v_a_4751_);
v___x_4784_ = lean_apply_3(v___x_171903__overap_4783_, v_a_4751_, v_snd_4774_, lean_box(0));
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v_a_4785_; lean_object* v_fst_4786_; lean_object* v_snd_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4862_; 
v_a_4785_ = lean_ctor_get(v___x_4784_, 0);
lean_inc(v_a_4785_);
lean_dec_ref_known(v___x_4784_, 1);
v_fst_4786_ = lean_ctor_get(v_a_4785_, 0);
v_snd_4787_ = lean_ctor_get(v_a_4785_, 1);
v_isSharedCheck_4862_ = !lean_is_exclusive(v_a_4785_);
if (v_isSharedCheck_4862_ == 0)
{
v___x_4789_ = v_a_4785_;
v_isShared_4790_ = v_isSharedCheck_4862_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_snd_4787_);
lean_inc(v_fst_4786_);
lean_dec(v_a_4785_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4862_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
size_t v_sz_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_171906__overap_4796_; lean_object* v___x_4797_; 
v_sz_4791_ = lean_array_size(v___y_4761_);
v___x_4792_ = l_unsafeCast___redArg(v___y_4761_);
lean_dec(v___y_4761_);
v___x_4793_ = lean_box_usize(v_sz_4791_);
v___x_4794_ = ((lean_object*)(l_LeanExport_dumpConstant___boxed__const__1));
v___x_4795_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___boxed), 6, 3);
lean_closure_set(v___x_4795_, 0, v___x_4793_);
lean_closure_set(v___x_4795_, 1, v___x_4794_);
lean_closure_set(v___x_4795_, 2, v___x_4792_);
v___x_171906__overap_4796_ = l_unsafeCast___redArg(v___x_4795_);
lean_dec_ref(v___x_4795_);
lean_inc_ref(v_a_4751_);
v___x_4797_ = lean_apply_3(v___x_171906__overap_4796_, v_a_4751_, v_snd_4787_, lean_box(0));
if (lean_obj_tag(v___x_4797_) == 0)
{
lean_object* v_a_4798_; lean_object* v_fst_4799_; lean_object* v_snd_4800_; lean_object* v___x_4802_; uint8_t v_isShared_4803_; uint8_t v_isSharedCheck_4853_; 
v_a_4798_ = lean_ctor_get(v___x_4797_, 0);
lean_inc(v_a_4798_);
lean_dec_ref_known(v___x_4797_, 1);
v_fst_4799_ = lean_ctor_get(v_a_4798_, 0);
v_snd_4800_ = lean_ctor_get(v_a_4798_, 1);
v_isSharedCheck_4853_ = !lean_is_exclusive(v_a_4798_);
if (v_isSharedCheck_4853_ == 0)
{
v___x_4802_ = v_a_4798_;
v_isShared_4803_ = v_isSharedCheck_4853_;
goto v_resetjp_4801_;
}
else
{
lean_inc(v_snd_4800_);
lean_inc(v_fst_4799_);
lean_dec(v_a_4798_);
v___x_4802_ = lean_box(0);
v_isShared_4803_ = v_isSharedCheck_4853_;
goto v_resetjp_4801_;
}
v_resetjp_4801_:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_171909__overap_4808_; lean_object* v___x_4809_; 
v___x_4804_ = l_unsafeCast___redArg(v_fst_4762_);
lean_dec_ref(v_fst_4762_);
v___x_4805_ = lean_box_usize(v_sz_4764_);
v___x_4806_ = ((lean_object*)(l_LeanExport_dumpConstant___boxed__const__1));
v___x_4807_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___boxed), 6, 3);
lean_closure_set(v___x_4807_, 0, v___x_4805_);
lean_closure_set(v___x_4807_, 1, v___x_4806_);
lean_closure_set(v___x_4807_, 2, v___x_4804_);
v___x_171909__overap_4808_ = l_unsafeCast___redArg(v___x_4807_);
lean_dec_ref(v___x_4807_);
lean_inc_ref(v_a_4751_);
v___x_4809_ = lean_apply_3(v___x_171909__overap_4808_, v_a_4751_, v_snd_4800_, lean_box(0));
if (lean_obj_tag(v___x_4809_) == 0)
{
lean_object* v_a_4810_; lean_object* v_fst_4811_; lean_object* v_snd_4812_; lean_object* v___x_4814_; uint8_t v_isShared_4815_; uint8_t v_isSharedCheck_4844_; 
v_a_4810_ = lean_ctor_get(v___x_4809_, 0);
lean_inc(v_a_4810_);
lean_dec_ref_known(v___x_4809_, 1);
v_fst_4811_ = lean_ctor_get(v_a_4810_, 0);
v_snd_4812_ = lean_ctor_get(v_a_4810_, 1);
v_isSharedCheck_4844_ = !lean_is_exclusive(v_a_4810_);
if (v_isSharedCheck_4844_ == 0)
{
v___x_4814_ = v_a_4810_;
v_isShared_4815_ = v_isSharedCheck_4844_;
goto v_resetjp_4813_;
}
else
{
lean_inc(v_snd_4812_);
lean_inc(v_fst_4811_);
lean_dec(v_a_4810_);
v___x_4814_ = lean_box(0);
v_isShared_4815_ = v_isSharedCheck_4844_;
goto v_resetjp_4813_;
}
v_resetjp_4813_:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4820_; 
v___x_4816_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__0));
v___x_4817_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__1));
v___x_4818_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_fst_4786_);
lean_dec(v_fst_4786_);
if (v_isShared_4815_ == 0)
{
lean_ctor_set(v___x_4814_, 1, v___x_4818_);
lean_ctor_set(v___x_4814_, 0, v___x_4817_);
v___x_4820_ = v___x_4814_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v___x_4817_);
lean_ctor_set(v_reuseFailAlloc_4843_, 1, v___x_4818_);
v___x_4820_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4824_; 
v___x_4821_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2));
v___x_4822_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_fst_4799_);
lean_dec(v_fst_4799_);
if (v_isShared_4803_ == 0)
{
lean_ctor_set(v___x_4802_, 1, v___x_4822_);
lean_ctor_set(v___x_4802_, 0, v___x_4821_);
v___x_4824_ = v___x_4802_;
goto v_reusejp_4823_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v___x_4821_);
lean_ctor_set(v_reuseFailAlloc_4842_, 1, v___x_4822_);
v___x_4824_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4823_;
}
v_reusejp_4823_:
{
lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4828_; 
v___x_4825_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__2));
v___x_4826_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_fst_4811_);
lean_dec(v_fst_4811_);
if (v_isShared_4790_ == 0)
{
lean_ctor_set(v___x_4789_, 1, v___x_4826_);
lean_ctor_set(v___x_4789_, 0, v___x_4825_);
v___x_4828_ = v___x_4789_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v___x_4825_);
lean_ctor_set(v_reuseFailAlloc_4841_, 1, v___x_4826_);
v___x_4828_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
lean_object* v___x_4829_; lean_object* v___x_4831_; 
v___x_4829_ = lean_box(0);
if (v_isShared_4771_ == 0)
{
lean_ctor_set_tag(v___x_4770_, 1);
lean_ctor_set(v___x_4770_, 1, v___x_4829_);
lean_ctor_set(v___x_4770_, 0, v___x_4828_);
v___x_4831_ = v___x_4770_;
goto v_reusejp_4830_;
}
else
{
lean_object* v_reuseFailAlloc_4840_; 
v_reuseFailAlloc_4840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4840_, 0, v___x_4828_);
lean_ctor_set(v_reuseFailAlloc_4840_, 1, v___x_4829_);
v___x_4831_ = v_reuseFailAlloc_4840_;
goto v_reusejp_4830_;
}
v_reusejp_4830_:
{
lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4836_; 
v___x_4832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4832_, 0, v___x_4824_);
lean_ctor_set(v___x_4832_, 1, v___x_4831_);
v___x_4833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4820_);
lean_ctor_set(v___x_4833_, 1, v___x_4832_);
v___x_4834_ = l_Lean_Json_mkObj(v___x_4833_);
lean_dec_ref_known(v___x_4833_, 2);
if (v_isShared_4777_ == 0)
{
lean_ctor_set(v___x_4776_, 1, v___x_4834_);
lean_ctor_set(v___x_4776_, 0, v___x_4816_);
v___x_4836_ = v___x_4776_;
goto v_reusejp_4835_;
}
else
{
lean_object* v_reuseFailAlloc_4839_; 
v_reuseFailAlloc_4839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4839_, 0, v___x_4816_);
lean_ctor_set(v_reuseFailAlloc_4839_, 1, v___x_4834_);
v___x_4836_ = v_reuseFailAlloc_4839_;
goto v_reusejp_4835_;
}
v_reusejp_4835_:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; 
v___x_4837_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4837_, 0, v___x_4836_);
lean_ctor_set(v___x_4837_, 1, v___x_4829_);
v___x_4838_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4837_, v_snd_4812_);
lean_dec_ref_known(v___x_4837_, 2);
return v___x_4838_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4845_; lean_object* v___x_4847_; uint8_t v_isShared_4848_; uint8_t v_isSharedCheck_4852_; 
lean_del_object(v___x_4802_);
lean_dec(v_fst_4799_);
lean_del_object(v___x_4789_);
lean_dec(v_fst_4786_);
lean_del_object(v___x_4776_);
lean_del_object(v___x_4770_);
v_a_4845_ = lean_ctor_get(v___x_4809_, 0);
v_isSharedCheck_4852_ = !lean_is_exclusive(v___x_4809_);
if (v_isSharedCheck_4852_ == 0)
{
v___x_4847_ = v___x_4809_;
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
else
{
lean_inc(v_a_4845_);
lean_dec(v___x_4809_);
v___x_4847_ = lean_box(0);
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
v_resetjp_4846_:
{
lean_object* v___x_4850_; 
if (v_isShared_4848_ == 0)
{
v___x_4850_ = v___x_4847_;
goto v_reusejp_4849_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v_a_4845_);
v___x_4850_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4849_;
}
v_reusejp_4849_:
{
return v___x_4850_;
}
}
}
}
}
else
{
lean_object* v_a_4854_; lean_object* v___x_4856_; uint8_t v_isShared_4857_; uint8_t v_isSharedCheck_4861_; 
lean_del_object(v___x_4789_);
lean_dec(v_fst_4786_);
lean_del_object(v___x_4776_);
lean_del_object(v___x_4770_);
lean_dec_ref(v_fst_4762_);
v_a_4854_ = lean_ctor_get(v___x_4797_, 0);
v_isSharedCheck_4861_ = !lean_is_exclusive(v___x_4797_);
if (v_isSharedCheck_4861_ == 0)
{
v___x_4856_ = v___x_4797_;
v_isShared_4857_ = v_isSharedCheck_4861_;
goto v_resetjp_4855_;
}
else
{
lean_inc(v_a_4854_);
lean_dec(v___x_4797_);
v___x_4856_ = lean_box(0);
v_isShared_4857_ = v_isSharedCheck_4861_;
goto v_resetjp_4855_;
}
v_resetjp_4855_:
{
lean_object* v___x_4859_; 
if (v_isShared_4857_ == 0)
{
v___x_4859_ = v___x_4856_;
goto v_reusejp_4858_;
}
else
{
lean_object* v_reuseFailAlloc_4860_; 
v_reuseFailAlloc_4860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4860_, 0, v_a_4854_);
v___x_4859_ = v_reuseFailAlloc_4860_;
goto v_reusejp_4858_;
}
v_reusejp_4858_:
{
return v___x_4859_;
}
}
}
}
}
else
{
lean_object* v_a_4863_; lean_object* v___x_4865_; uint8_t v_isShared_4866_; uint8_t v_isSharedCheck_4870_; 
lean_del_object(v___x_4776_);
lean_del_object(v___x_4770_);
lean_dec_ref(v_fst_4762_);
lean_dec(v___y_4761_);
v_a_4863_ = lean_ctor_get(v___x_4784_, 0);
v_isSharedCheck_4870_ = !lean_is_exclusive(v___x_4784_);
if (v_isSharedCheck_4870_ == 0)
{
v___x_4865_ = v___x_4784_;
v_isShared_4866_ = v_isSharedCheck_4870_;
goto v_resetjp_4864_;
}
else
{
lean_inc(v_a_4863_);
lean_dec(v___x_4784_);
v___x_4865_ = lean_box(0);
v_isShared_4866_ = v_isSharedCheck_4870_;
goto v_resetjp_4864_;
}
v_resetjp_4864_:
{
lean_object* v___x_4868_; 
if (v_isShared_4866_ == 0)
{
v___x_4868_ = v___x_4865_;
goto v_reusejp_4867_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v_a_4863_);
v___x_4868_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4867_;
}
v_reusejp_4867_:
{
return v___x_4868_;
}
}
}
}
}
else
{
lean_del_object(v___x_4770_);
lean_dec_ref(v_fst_4762_);
lean_dec(v___y_4761_);
lean_dec(v___y_4760_);
return v___x_4772_;
}
}
}
else
{
lean_dec_ref(v_fst_4762_);
lean_dec(v___y_4761_);
lean_dec(v___y_4760_);
return v___x_4766_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(lean_object* v_as_5635_, size_t v_sz_5636_, size_t v_i_5637_, lean_object* v_b_5638_, lean_object* v___y_5639_, lean_object* v___y_5640_){
_start:
{
uint8_t v___x_5642_; 
v___x_5642_ = lean_usize_dec_lt(v_i_5637_, v_sz_5636_);
if (v___x_5642_ == 0)
{
lean_object* v___x_5643_; lean_object* v___x_5644_; 
v___x_5643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5643_, 0, v_b_5638_);
lean_ctor_set(v___x_5643_, 1, v___y_5640_);
v___x_5644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5644_, 0, v___x_5643_);
return v___x_5644_;
}
else
{
lean_object* v___x_5645_; lean_object* v_a_5646_; lean_object* v___x_5647_; 
v___x_5645_ = lean_box(0);
v_a_5646_ = lean_array_uget_borrowed(v_as_5635_, v_i_5637_);
lean_inc(v_a_5646_);
v___x_5647_ = l_LeanExport_dumpConstant(v_a_5646_, v___y_5639_, v___y_5640_);
if (lean_obj_tag(v___x_5647_) == 0)
{
lean_object* v_a_5648_; lean_object* v_snd_5649_; size_t v___x_5650_; size_t v___x_5651_; 
v_a_5648_ = lean_ctor_get(v___x_5647_, 0);
lean_inc(v_a_5648_);
lean_dec_ref_known(v___x_5647_, 1);
v_snd_5649_ = lean_ctor_get(v_a_5648_, 1);
lean_inc(v_snd_5649_);
lean_dec(v_a_5648_);
v___x_5650_ = ((size_t)1ULL);
v___x_5651_ = lean_usize_add(v_i_5637_, v___x_5650_);
v_i_5637_ = v___x_5651_;
v_b_5638_ = v___x_5645_;
v___y_5640_ = v_snd_5649_;
goto _start;
}
else
{
return v___x_5647_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(lean_object* v_e_5653_, lean_object* v_a_5654_, lean_object* v_a_5655_){
_start:
{
lean_object* v___x_5657_; lean_object* v___x_5658_; size_t v_sz_5659_; size_t v___x_5660_; lean_object* v___x_5661_; 
v___x_5657_ = l_Lean_Expr_getUsedConstants(v_e_5653_);
v___x_5658_ = lean_box(0);
v_sz_5659_ = lean_array_size(v___x_5657_);
v___x_5660_ = ((size_t)0ULL);
v___x_5661_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v___x_5657_, v_sz_5659_, v___x_5660_, v___x_5658_, v_a_5654_, v_a_5655_);
lean_dec_ref(v___x_5657_);
if (lean_obj_tag(v___x_5661_) == 0)
{
lean_object* v_a_5662_; lean_object* v___x_5664_; uint8_t v_isShared_5665_; uint8_t v_isSharedCheck_5678_; 
v_a_5662_ = lean_ctor_get(v___x_5661_, 0);
v_isSharedCheck_5678_ = !lean_is_exclusive(v___x_5661_);
if (v_isSharedCheck_5678_ == 0)
{
v___x_5664_ = v___x_5661_;
v_isShared_5665_ = v_isSharedCheck_5678_;
goto v_resetjp_5663_;
}
else
{
lean_inc(v_a_5662_);
lean_dec(v___x_5661_);
v___x_5664_ = lean_box(0);
v_isShared_5665_ = v_isSharedCheck_5678_;
goto v_resetjp_5663_;
}
v_resetjp_5663_:
{
lean_object* v_snd_5666_; lean_object* v___x_5668_; uint8_t v_isShared_5669_; uint8_t v_isSharedCheck_5676_; 
v_snd_5666_ = lean_ctor_get(v_a_5662_, 1);
v_isSharedCheck_5676_ = !lean_is_exclusive(v_a_5662_);
if (v_isSharedCheck_5676_ == 0)
{
lean_object* v_unused_5677_; 
v_unused_5677_ = lean_ctor_get(v_a_5662_, 0);
lean_dec(v_unused_5677_);
v___x_5668_ = v_a_5662_;
v_isShared_5669_ = v_isSharedCheck_5676_;
goto v_resetjp_5667_;
}
else
{
lean_inc(v_snd_5666_);
lean_dec(v_a_5662_);
v___x_5668_ = lean_box(0);
v_isShared_5669_ = v_isSharedCheck_5676_;
goto v_resetjp_5667_;
}
v_resetjp_5667_:
{
lean_object* v___x_5671_; 
if (v_isShared_5669_ == 0)
{
lean_ctor_set(v___x_5668_, 0, v___x_5658_);
v___x_5671_ = v___x_5668_;
goto v_reusejp_5670_;
}
else
{
lean_object* v_reuseFailAlloc_5675_; 
v_reuseFailAlloc_5675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5675_, 0, v___x_5658_);
lean_ctor_set(v_reuseFailAlloc_5675_, 1, v_snd_5666_);
v___x_5671_ = v_reuseFailAlloc_5675_;
goto v_reusejp_5670_;
}
v_reusejp_5670_:
{
lean_object* v___x_5673_; 
if (v_isShared_5665_ == 0)
{
lean_ctor_set(v___x_5664_, 0, v___x_5671_);
v___x_5673_ = v___x_5664_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v___x_5671_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
return v___x_5673_;
}
}
}
}
}
else
{
return v___x_5661_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps___boxed(lean_object* v_e_5679_, lean_object* v_a_5680_, lean_object* v_a_5681_, lean_object* v_a_5682_){
_start:
{
lean_object* v_res_5683_; 
v_res_5683_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_e_5679_, v_a_5680_, v_a_5681_);
lean_dec_ref(v_a_5680_);
return v_res_5683_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg___boxed(lean_object* v_as_x27_5684_, lean_object* v_b_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_){
_start:
{
lean_object* v_res_5689_; 
v_res_5689_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(v_as_x27_5684_, v_b_5685_, v___y_5686_, v___y_5687_);
lean_dec_ref(v___y_5686_);
lean_dec(v_as_x27_5684_);
return v_res_5689_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg___boxed(lean_object* v_as_x27_5690_, lean_object* v_b_5691_, lean_object* v___y_5692_, lean_object* v___y_5693_, lean_object* v___y_5694_){
_start:
{
lean_object* v_res_5695_; 
v_res_5695_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(v_as_x27_5690_, v_b_5691_, v___y_5692_, v___y_5693_);
lean_dec_ref(v___y_5692_);
lean_dec(v_as_x27_5690_);
return v_res_5695_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2___boxed(lean_object* v_x_5696_, lean_object* v_x_5697_, lean_object* v___y_5698_, lean_object* v___y_5699_, lean_object* v___y_5700_){
_start:
{
lean_object* v_res_5701_; 
v_res_5701_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_x_5696_, v_x_5697_, v___y_5698_, v___y_5699_);
lean_dec_ref(v___y_5698_);
return v_res_5701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0___boxed(lean_object* v_as_5702_, lean_object* v_sz_5703_, lean_object* v_i_5704_, lean_object* v_b_5705_, lean_object* v___y_5706_, lean_object* v___y_5707_, lean_object* v___y_5708_){
_start:
{
size_t v_sz_boxed_5709_; size_t v_i_boxed_5710_; lean_object* v_res_5711_; 
v_sz_boxed_5709_ = lean_unbox_usize(v_sz_5703_);
lean_dec(v_sz_5703_);
v_i_boxed_5710_ = lean_unbox_usize(v_i_5704_);
lean_dec(v_i_5704_);
v_res_5711_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v_as_5702_, v_sz_boxed_5709_, v_i_boxed_5710_, v_b_5705_, v___y_5706_, v___y_5707_);
lean_dec_ref(v___y_5706_);
lean_dec_ref(v_as_5702_);
return v_res_5711_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___boxed(lean_object* v_a_5712_, lean_object* v_a_5713_, lean_object* v_a_5714_){
_start:
{
lean_object* v_res_5715_; 
v_res_5715_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v_a_5712_, v_a_5713_);
lean_dec_ref(v_a_5712_);
return v_res_5715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15___boxed(lean_object* v_as_5716_, lean_object* v_sz_5717_, lean_object* v_i_5718_, lean_object* v_b_5719_, lean_object* v___y_5720_, lean_object* v___y_5721_, lean_object* v___y_5722_){
_start:
{
size_t v_sz_boxed_5723_; size_t v_i_boxed_5724_; lean_object* v_res_5725_; 
v_sz_boxed_5723_ = lean_unbox_usize(v_sz_5717_);
lean_dec(v_sz_5717_);
v_i_boxed_5724_ = lean_unbox_usize(v_i_5718_);
lean_dec(v_i_5718_);
v_res_5725_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(v_as_5716_, v_sz_boxed_5723_, v_i_boxed_5724_, v_b_5719_, v___y_5720_, v___y_5721_);
lean_dec_ref(v___y_5720_);
lean_dec_ref(v_as_5716_);
return v_res_5725_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr___boxed(lean_object* v_e_5726_, lean_object* v_a_5727_, lean_object* v_a_5728_, lean_object* v_a_5729_){
_start:
{
lean_object* v_res_5730_; 
v_res_5730_ = l_LeanExport_dumpExpr(v_e_5726_, v_a_5727_, v_a_5728_);
lean_dec_ref(v_a_5727_);
return v_res_5730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14___boxed(lean_object* v_as_5731_, lean_object* v_sz_5732_, lean_object* v_i_5733_, lean_object* v_b_5734_, lean_object* v___y_5735_, lean_object* v___y_5736_, lean_object* v___y_5737_){
_start:
{
size_t v_sz_boxed_5738_; size_t v_i_boxed_5739_; lean_object* v_res_5740_; 
v_sz_boxed_5738_ = lean_unbox_usize(v_sz_5732_);
lean_dec(v_sz_5732_);
v_i_boxed_5739_ = lean_unbox_usize(v_i_5733_);
lean_dec(v_i_5733_);
v_res_5740_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_as_5731_, v_sz_boxed_5738_, v_i_boxed_5739_, v_b_5734_, v___y_5735_, v___y_5736_);
lean_dec_ref(v___y_5735_);
lean_dec_ref(v_as_5731_);
return v_res_5740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20___boxed(lean_object* v_as_5741_, lean_object* v_sz_5742_, lean_object* v_i_5743_, lean_object* v_b_5744_, lean_object* v___y_5745_, lean_object* v___y_5746_, lean_object* v___y_5747_){
_start:
{
size_t v_sz_boxed_5748_; size_t v_i_boxed_5749_; lean_object* v_res_5750_; 
v_sz_boxed_5748_ = lean_unbox_usize(v_sz_5742_);
lean_dec(v_sz_5742_);
v_i_boxed_5749_ = lean_unbox_usize(v_i_5743_);
lean_dec(v_i_5743_);
v_res_5750_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(v_as_5741_, v_sz_boxed_5748_, v_i_boxed_5749_, v_b_5744_, v___y_5745_, v___y_5746_);
lean_dec_ref(v___y_5745_);
lean_dec_ref(v_as_5741_);
return v_res_5750_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___boxed(lean_object* v_rule_5751_, lean_object* v_a_5752_, lean_object* v_a_5753_, lean_object* v_a_5754_){
_start:
{
lean_object* v_res_5755_; 
v_res_5755_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_rule_5751_, v_a_5752_, v_a_5753_);
lean_dec_ref(v_a_5752_);
return v_res_5755_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___boxed(lean_object* v_a_5756_, lean_object* v_a_5757_, lean_object* v_a_5758_){
_start:
{
lean_object* v_res_5759_; 
v_res_5759_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v_a_5756_, v_a_5757_);
lean_dec_ref(v_a_5756_);
return v_res_5759_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___boxed(lean_object* v___x_5760_, lean_object* v_as_x27_5761_, lean_object* v_b_5762_, lean_object* v___y_5763_, lean_object* v___y_5764_, lean_object* v___y_5765_){
_start:
{
uint8_t v___x_173170__boxed_5766_; lean_object* v_res_5767_; 
v___x_173170__boxed_5766_ = lean_unbox(v___x_5760_);
v_res_5767_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_173170__boxed_5766_, v_as_x27_5761_, v_b_5762_, v___y_5763_, v___y_5764_);
lean_dec_ref(v___y_5763_);
lean_dec(v_as_x27_5761_);
return v_res_5767_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___boxed(lean_object* v___x_5768_, lean_object* v_val_5769_, lean_object* v_as_x27_5770_, lean_object* v_b_5771_, lean_object* v___y_5772_, lean_object* v___y_5773_, lean_object* v___y_5774_){
_start:
{
uint8_t v___x_173481__boxed_5775_; lean_object* v_res_5776_; 
v___x_173481__boxed_5775_ = lean_unbox(v___x_5768_);
v_res_5776_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v___x_173481__boxed_5775_, v_val_5769_, v_as_x27_5770_, v_b_5771_, v___y_5772_, v___y_5773_);
lean_dec_ref(v___y_5772_);
lean_dec(v_as_x27_5770_);
lean_dec_ref(v_val_5769_);
return v_res_5776_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux___boxed(lean_object* v_e_5777_, lean_object* v_a_5778_, lean_object* v_a_5779_, lean_object* v_a_5780_){
_start:
{
lean_object* v_res_5781_; 
v_res_5781_ = l_LeanExport_dumpExprAux(v_e_5777_, v_a_5778_, v_a_5779_);
lean_dec_ref(v_a_5778_);
return v_res_5781_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant___boxed(lean_object* v_c_5782_, lean_object* v_a_5783_, lean_object* v_a_5784_, lean_object* v_a_5785_){
_start:
{
lean_object* v_res_5786_; 
v_res_5786_ = l_LeanExport_dumpConstant(v_c_5782_, v_a_5783_, v_a_5784_);
lean_dec_ref(v_a_5783_);
return v_res_5786_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(uint8_t v___x_5787_, lean_object* v_as_5788_, lean_object* v_as_x27_5789_, lean_object* v_b_5790_, lean_object* v_a_5791_, lean_object* v___y_5792_, lean_object* v___y_5793_){
_start:
{
lean_object* v___x_5795_; 
v___x_5795_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_5787_, v_as_x27_5789_, v_b_5790_, v___y_5792_, v___y_5793_);
return v___x_5795_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___boxed(lean_object* v___x_5796_, lean_object* v_as_5797_, lean_object* v_as_x27_5798_, lean_object* v_b_5799_, lean_object* v_a_5800_, lean_object* v___y_5801_, lean_object* v___y_5802_, lean_object* v___y_5803_){
_start:
{
uint8_t v___x_178087__boxed_5804_; lean_object* v_res_5805_; 
v___x_178087__boxed_5804_ = lean_unbox(v___x_5796_);
v_res_5805_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(v___x_178087__boxed_5804_, v_as_5797_, v_as_x27_5798_, v_b_5799_, v_a_5800_, v___y_5801_, v___y_5802_);
lean_dec_ref(v___y_5801_);
lean_dec(v_as_x27_5798_);
lean_dec(v_as_5797_);
return v_res_5805_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(uint8_t v___y_5806_, uint8_t v___x_5807_, lean_object* v_as_5808_, lean_object* v_as_x27_5809_, lean_object* v_b_5810_, lean_object* v_a_5811_, lean_object* v___y_5812_, lean_object* v___y_5813_){
_start:
{
lean_object* v___x_5815_; 
v___x_5815_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_5806_, v___x_5807_, v_as_x27_5809_, v_b_5810_, v___y_5812_, v___y_5813_);
return v___x_5815_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___boxed(lean_object* v___y_5816_, lean_object* v___x_5817_, lean_object* v_as_5818_, lean_object* v_as_x27_5819_, lean_object* v_b_5820_, lean_object* v_a_5821_, lean_object* v___y_5822_, lean_object* v___y_5823_, lean_object* v___y_5824_){
_start:
{
uint8_t v___y_178104__boxed_5825_; uint8_t v___x_178105__boxed_5826_; lean_object* v_res_5827_; 
v___y_178104__boxed_5825_ = lean_unbox(v___y_5816_);
v___x_178105__boxed_5826_ = lean_unbox(v___x_5817_);
v_res_5827_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(v___y_178104__boxed_5825_, v___x_178105__boxed_5826_, v_as_5818_, v_as_x27_5819_, v_b_5820_, v_a_5821_, v___y_5822_, v___y_5823_);
lean_dec_ref(v___y_5822_);
lean_dec(v_as_x27_5819_);
lean_dec(v_as_5818_);
return v_res_5827_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10(lean_object* v_00_u03b4_5828_, lean_object* v_t_5829_, lean_object* v_k_5830_){
_start:
{
lean_object* v___x_5831_; 
v___x_5831_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(v_t_5829_, v_k_5830_);
return v___x_5831_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___boxed(lean_object* v_00_u03b4_5832_, lean_object* v_t_5833_, lean_object* v_k_5834_){
_start:
{
lean_object* v_res_5835_; 
v_res_5835_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10(v_00_u03b4_5832_, v_t_5833_, v_k_5834_);
lean_dec(v_k_5834_);
lean_dec(v_t_5833_);
return v_res_5835_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(uint8_t v___x_5836_, lean_object* v_val_5837_, lean_object* v_as_5838_, lean_object* v_as_x27_5839_, lean_object* v_b_5840_, lean_object* v_a_5841_, lean_object* v___y_5842_, lean_object* v___y_5843_){
_start:
{
lean_object* v___x_5845_; 
v___x_5845_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v___x_5836_, v_val_5837_, v_as_x27_5839_, v_b_5840_, v___y_5842_, v___y_5843_);
return v___x_5845_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___boxed(lean_object* v___x_5846_, lean_object* v_val_5847_, lean_object* v_as_5848_, lean_object* v_as_x27_5849_, lean_object* v_b_5850_, lean_object* v_a_5851_, lean_object* v___y_5852_, lean_object* v___y_5853_, lean_object* v___y_5854_){
_start:
{
uint8_t v___x_178126__boxed_5855_; lean_object* v_res_5856_; 
v___x_178126__boxed_5855_ = lean_unbox(v___x_5846_);
v_res_5856_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(v___x_178126__boxed_5855_, v_val_5847_, v_as_5848_, v_as_x27_5849_, v_b_5850_, v_a_5851_, v___y_5852_, v___y_5853_);
lean_dec_ref(v___y_5852_);
lean_dec(v_as_x27_5849_);
lean_dec(v_as_5848_);
lean_dec_ref(v_val_5847_);
return v_res_5856_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13(lean_object* v_as_5857_, lean_object* v_as_x27_5858_, lean_object* v_b_5859_, lean_object* v_a_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_){
_start:
{
lean_object* v___x_5864_; 
v___x_5864_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(v_as_x27_5858_, v_b_5859_, v___y_5861_, v___y_5862_);
return v___x_5864_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___boxed(lean_object* v_as_5865_, lean_object* v_as_x27_5866_, lean_object* v_b_5867_, lean_object* v_a_5868_, lean_object* v___y_5869_, lean_object* v___y_5870_, lean_object* v___y_5871_){
_start:
{
lean_object* v_res_5872_; 
v_res_5872_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13(v_as_5865_, v_as_x27_5866_, v_b_5867_, v_a_5868_, v___y_5869_, v___y_5870_);
lean_dec_ref(v___y_5869_);
lean_dec(v_as_x27_5866_);
lean_dec(v_as_5865_);
return v_res_5872_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22(lean_object* v_as_5873_, lean_object* v_as_x27_5874_, lean_object* v_b_5875_, lean_object* v_a_5876_, lean_object* v___y_5877_, lean_object* v___y_5878_){
_start:
{
lean_object* v___x_5880_; 
v___x_5880_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(v_as_x27_5874_, v_b_5875_, v___y_5877_, v___y_5878_);
return v___x_5880_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___boxed(lean_object* v_as_5881_, lean_object* v_as_x27_5882_, lean_object* v_b_5883_, lean_object* v_a_5884_, lean_object* v___y_5885_, lean_object* v___y_5886_, lean_object* v___y_5887_){
_start:
{
lean_object* v_res_5888_; 
v_res_5888_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22(v_as_5881_, v_as_x27_5882_, v_b_5883_, v_a_5884_, v___y_5885_, v___y_5886_);
lean_dec_ref(v___y_5885_);
lean_dec(v_as_x27_5882_);
lean_dec(v_as_5881_);
return v_res_5888_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1(void){
_start:
{
lean_object* v___x_5890_; lean_object* v___x_5891_; 
v___x_5890_ = l_Lean_versionString;
v___x_5891_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5891_, 0, v___x_5890_);
return v___x_5891_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2(void){
_start:
{
lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; 
v___x_5892_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1);
v___x_5893_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0));
v___x_5894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5894_, 0, v___x_5893_);
lean_ctor_set(v___x_5894_, 1, v___x_5892_);
return v___x_5894_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4(void){
_start:
{
lean_object* v___x_5896_; lean_object* v___x_5897_; 
v___x_5896_ = l_Lean_githash;
v___x_5897_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5897_, 0, v___x_5896_);
return v___x_5897_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5(void){
_start:
{
lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; 
v___x_5898_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4);
v___x_5899_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3));
v___x_5900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5900_, 0, v___x_5899_);
lean_ctor_set(v___x_5900_, 1, v___x_5898_);
return v___x_5900_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6(void){
_start:
{
lean_object* v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; 
v___x_5901_ = lean_box(0);
v___x_5902_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5);
v___x_5903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5903_, 0, v___x_5902_);
lean_ctor_set(v___x_5903_, 1, v___x_5901_);
return v___x_5903_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7(void){
_start:
{
lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; 
v___x_5904_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6);
v___x_5905_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2);
v___x_5906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5906_, 0, v___x_5905_);
lean_ctor_set(v___x_5906_, 1, v___x_5904_);
return v___x_5906_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8(void){
_start:
{
lean_object* v___x_5907_; lean_object* v_leanMeta_5908_; 
v___x_5907_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7);
v_leanMeta_5908_ = l_Lean_Json_mkObj(v___x_5907_);
return v_leanMeta_5908_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17(void){
_start:
{
lean_object* v___x_5927_; lean_object* v_exporterMeta_5928_; 
v___x_5927_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16));
v_exporterMeta_5928_ = l_Lean_Json_mkObj(v___x_5927_);
return v_exporterMeta_5928_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18(void){
_start:
{
lean_object* v___x_5929_; lean_object* v_formatMeta_5930_; 
v___x_5929_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15));
v_formatMeta_5930_ = l_Lean_Json_mkObj(v___x_5929_);
return v_formatMeta_5930_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21(void){
_start:
{
lean_object* v_exporterMeta_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; 
v_exporterMeta_5933_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17);
v___x_5934_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20));
v___x_5935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5935_, 0, v___x_5934_);
lean_ctor_set(v___x_5935_, 1, v_exporterMeta_5933_);
return v___x_5935_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23(void){
_start:
{
lean_object* v_leanMeta_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; 
v_leanMeta_5937_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8);
v___x_5938_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22));
v___x_5939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5939_, 0, v___x_5938_);
lean_ctor_set(v___x_5939_, 1, v_leanMeta_5937_);
return v___x_5939_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25(void){
_start:
{
lean_object* v_formatMeta_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; 
v_formatMeta_5941_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18);
v___x_5942_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24));
v___x_5943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5943_, 0, v___x_5942_);
lean_ctor_set(v___x_5943_, 1, v_formatMeta_5941_);
return v___x_5943_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26(void){
_start:
{
lean_object* v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; 
v___x_5944_ = lean_box(0);
v___x_5945_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25);
v___x_5946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5946_, 0, v___x_5945_);
lean_ctor_set(v___x_5946_, 1, v___x_5944_);
return v___x_5946_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27(void){
_start:
{
lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; 
v___x_5947_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26);
v___x_5948_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23);
v___x_5949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5949_, 0, v___x_5948_);
lean_ctor_set(v___x_5949_, 1, v___x_5947_);
return v___x_5949_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28(void){
_start:
{
lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; 
v___x_5950_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27);
v___x_5951_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21);
v___x_5952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5952_, 0, v___x_5951_);
lean_ctor_set(v___x_5952_, 1, v___x_5950_);
return v___x_5952_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29(void){
_start:
{
lean_object* v___x_5953_; lean_object* v___x_5954_; 
v___x_5953_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28);
v___x_5954_ = l_Lean_Json_mkObj(v___x_5953_);
return v___x_5954_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30(void){
_start:
{
lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; 
v___x_5955_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29);
v___x_5956_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19));
v___x_5957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5957_, 0, v___x_5956_);
lean_ctor_set(v___x_5957_, 1, v___x_5955_);
return v___x_5957_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31(void){
_start:
{
lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; 
v___x_5958_ = lean_box(0);
v___x_5959_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30);
v___x_5960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5960_, 0, v___x_5959_);
lean_ctor_set(v___x_5960_, 1, v___x_5958_);
return v___x_5960_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32(void){
_start:
{
lean_object* v___x_5961_; lean_object* v___x_5962_; 
v___x_5961_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31);
v___x_5962_ = l_Lean_Json_mkObj(v___x_5961_);
return v___x_5962_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata(void){
_start:
{
lean_object* v___x_5963_; 
v___x_5963_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32);
return v___x_5963_;
}
}
static lean_object* _init_l_LeanExport_dumpMetadata___redArg___closed__0(void){
_start:
{
lean_object* v___x_5964_; lean_object* v___x_5965_; 
v___x_5964_ = l___private_LeanExport_Basic_0__LeanExport_exportMetadata;
v___x_5965_ = l_Lean_Json_compress(v___x_5964_);
return v___x_5965_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg(lean_object* v_a_5966_){
_start:
{
lean_object* v___x_5968_; lean_object* v___x_5969_; 
v___x_5968_ = lean_obj_once(&l_LeanExport_dumpMetadata___redArg___closed__0, &l_LeanExport_dumpMetadata___redArg___closed__0_once, _init_l_LeanExport_dumpMetadata___redArg___closed__0);
v___x_5969_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_5968_);
if (lean_obj_tag(v___x_5969_) == 0)
{
lean_object* v_a_5970_; lean_object* v___x_5972_; uint8_t v_isShared_5973_; uint8_t v_isSharedCheck_5978_; 
v_a_5970_ = lean_ctor_get(v___x_5969_, 0);
v_isSharedCheck_5978_ = !lean_is_exclusive(v___x_5969_);
if (v_isSharedCheck_5978_ == 0)
{
v___x_5972_ = v___x_5969_;
v_isShared_5973_ = v_isSharedCheck_5978_;
goto v_resetjp_5971_;
}
else
{
lean_inc(v_a_5970_);
lean_dec(v___x_5969_);
v___x_5972_ = lean_box(0);
v_isShared_5973_ = v_isSharedCheck_5978_;
goto v_resetjp_5971_;
}
v_resetjp_5971_:
{
lean_object* v___x_5974_; lean_object* v___x_5976_; 
v___x_5974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5974_, 0, v_a_5970_);
lean_ctor_set(v___x_5974_, 1, v_a_5966_);
if (v_isShared_5973_ == 0)
{
lean_ctor_set(v___x_5972_, 0, v___x_5974_);
v___x_5976_ = v___x_5972_;
goto v_reusejp_5975_;
}
else
{
lean_object* v_reuseFailAlloc_5977_; 
v_reuseFailAlloc_5977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5977_, 0, v___x_5974_);
v___x_5976_ = v_reuseFailAlloc_5977_;
goto v_reusejp_5975_;
}
v_reusejp_5975_:
{
return v___x_5976_;
}
}
}
else
{
lean_object* v_a_5979_; lean_object* v___x_5981_; uint8_t v_isShared_5982_; uint8_t v_isSharedCheck_5986_; 
lean_dec_ref(v_a_5966_);
v_a_5979_ = lean_ctor_get(v___x_5969_, 0);
v_isSharedCheck_5986_ = !lean_is_exclusive(v___x_5969_);
if (v_isSharedCheck_5986_ == 0)
{
v___x_5981_ = v___x_5969_;
v_isShared_5982_ = v_isSharedCheck_5986_;
goto v_resetjp_5980_;
}
else
{
lean_inc(v_a_5979_);
lean_dec(v___x_5969_);
v___x_5981_ = lean_box(0);
v_isShared_5982_ = v_isSharedCheck_5986_;
goto v_resetjp_5980_;
}
v_resetjp_5980_:
{
lean_object* v___x_5984_; 
if (v_isShared_5982_ == 0)
{
v___x_5984_ = v___x_5981_;
goto v_reusejp_5983_;
}
else
{
lean_object* v_reuseFailAlloc_5985_; 
v_reuseFailAlloc_5985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5985_, 0, v_a_5979_);
v___x_5984_ = v_reuseFailAlloc_5985_;
goto v_reusejp_5983_;
}
v_reusejp_5983_:
{
return v___x_5984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg___boxed(lean_object* v_a_5987_, lean_object* v_a_5988_){
_start:
{
lean_object* v_res_5989_; 
v_res_5989_ = l_LeanExport_dumpMetadata___redArg(v_a_5987_);
return v_res_5989_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata(lean_object* v_a_5990_, lean_object* v_a_5991_){
_start:
{
lean_object* v___x_5993_; 
v___x_5993_ = l_LeanExport_dumpMetadata___redArg(v_a_5991_);
return v___x_5993_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___boxed(lean_object* v_a_5994_, lean_object* v_a_5995_, lean_object* v_a_5996_){
_start:
{
lean_object* v_res_5997_; 
v_res_5997_ = l_LeanExport_dumpMetadata(v_a_5994_, v_a_5995_);
lean_dec_ref(v_a_5994_);
return v_res_5997_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(lean_object* v_as_x27_5998_, lean_object* v_b_5999_, lean_object* v___y_6000_, lean_object* v___y_6001_){
_start:
{
if (lean_obj_tag(v_as_x27_5998_) == 0)
{
lean_object* v___x_6003_; lean_object* v___x_6004_; 
v___x_6003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6003_, 0, v_b_5999_);
lean_ctor_set(v___x_6003_, 1, v___y_6001_);
v___x_6004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6004_, 0, v___x_6003_);
return v___x_6004_;
}
else
{
lean_object* v_head_6005_; lean_object* v_tail_6006_; lean_object* v_visitedNames_6007_; lean_object* v_visitedLevels_6008_; lean_object* v_visitedExprs_6009_; lean_object* v_visitedConstants_6010_; uint8_t v_exportMData_6011_; uint8_t v_exportUnsafe_6012_; uint8_t v_ignoreMissing_6013_; lean_object* v_recursorMap_6014_; lean_object* v___x_6016_; uint8_t v_isShared_6017_; uint8_t v_isSharedCheck_6027_; 
v_head_6005_ = lean_ctor_get(v_as_x27_5998_, 0);
v_tail_6006_ = lean_ctor_get(v_as_x27_5998_, 1);
v_visitedNames_6007_ = lean_ctor_get(v___y_6001_, 0);
v_visitedLevels_6008_ = lean_ctor_get(v___y_6001_, 1);
v_visitedExprs_6009_ = lean_ctor_get(v___y_6001_, 2);
v_visitedConstants_6010_ = lean_ctor_get(v___y_6001_, 3);
v_exportMData_6011_ = lean_ctor_get_uint8(v___y_6001_, sizeof(void*)*6);
v_exportUnsafe_6012_ = lean_ctor_get_uint8(v___y_6001_, sizeof(void*)*6 + 1);
v_ignoreMissing_6013_ = lean_ctor_get_uint8(v___y_6001_, sizeof(void*)*6 + 2);
v_recursorMap_6014_ = lean_ctor_get(v___y_6001_, 5);
v_isSharedCheck_6027_ = !lean_is_exclusive(v___y_6001_);
if (v_isSharedCheck_6027_ == 0)
{
lean_object* v_unused_6028_; 
v_unused_6028_ = lean_ctor_get(v___y_6001_, 4);
lean_dec(v_unused_6028_);
v___x_6016_ = v___y_6001_;
v_isShared_6017_ = v_isSharedCheck_6027_;
goto v_resetjp_6015_;
}
else
{
lean_inc(v_recursorMap_6014_);
lean_inc(v_visitedConstants_6010_);
lean_inc(v_visitedExprs_6009_);
lean_inc(v_visitedLevels_6008_);
lean_inc(v_visitedNames_6007_);
lean_dec(v___y_6001_);
v___x_6016_ = lean_box(0);
v_isShared_6017_ = v_isSharedCheck_6027_;
goto v_resetjp_6015_;
}
v_resetjp_6015_:
{
lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6021_; 
v___x_6018_ = lean_box(0);
v___x_6019_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_6017_ == 0)
{
lean_ctor_set(v___x_6016_, 4, v___x_6019_);
v___x_6021_ = v___x_6016_;
goto v_reusejp_6020_;
}
else
{
lean_object* v_reuseFailAlloc_6026_; 
v_reuseFailAlloc_6026_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_6026_, 0, v_visitedNames_6007_);
lean_ctor_set(v_reuseFailAlloc_6026_, 1, v_visitedLevels_6008_);
lean_ctor_set(v_reuseFailAlloc_6026_, 2, v_visitedExprs_6009_);
lean_ctor_set(v_reuseFailAlloc_6026_, 3, v_visitedConstants_6010_);
lean_ctor_set(v_reuseFailAlloc_6026_, 4, v___x_6019_);
lean_ctor_set(v_reuseFailAlloc_6026_, 5, v_recursorMap_6014_);
lean_ctor_set_uint8(v_reuseFailAlloc_6026_, sizeof(void*)*6, v_exportMData_6011_);
lean_ctor_set_uint8(v_reuseFailAlloc_6026_, sizeof(void*)*6 + 1, v_exportUnsafe_6012_);
lean_ctor_set_uint8(v_reuseFailAlloc_6026_, sizeof(void*)*6 + 2, v_ignoreMissing_6013_);
v___x_6021_ = v_reuseFailAlloc_6026_;
goto v_reusejp_6020_;
}
v_reusejp_6020_:
{
lean_object* v___x_6022_; 
lean_inc(v_head_6005_);
v___x_6022_ = l_LeanExport_dumpConstant(v_head_6005_, v___y_6000_, v___x_6021_);
if (lean_obj_tag(v___x_6022_) == 0)
{
lean_object* v_a_6023_; lean_object* v_snd_6024_; 
v_a_6023_ = lean_ctor_get(v___x_6022_, 0);
lean_inc(v_a_6023_);
lean_dec_ref_known(v___x_6022_, 1);
v_snd_6024_ = lean_ctor_get(v_a_6023_, 1);
lean_inc(v_snd_6024_);
lean_dec(v_a_6023_);
v_as_x27_5998_ = v_tail_6006_;
v_b_5999_ = v___x_6018_;
v___y_6001_ = v_snd_6024_;
goto _start;
}
else
{
return v___x_6022_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg___boxed(lean_object* v_as_x27_6029_, lean_object* v_b_6030_, lean_object* v___y_6031_, lean_object* v___y_6032_, lean_object* v___y_6033_){
_start:
{
lean_object* v_res_6034_; 
v_res_6034_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_6029_, v_b_6030_, v___y_6031_, v___y_6032_);
lean_dec_ref(v___y_6031_);
lean_dec(v_as_x27_6029_);
return v_res_6034_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0(lean_object* v_env_6035_, lean_object* v_cliOptions_6036_, lean_object* v___y_6037_, lean_object* v___y_6038_, lean_object* v___y_6039_){
_start:
{
lean_object* v___x_6041_; 
v___x_6041_ = l_LeanExport_initState(v_env_6035_, v_cliOptions_6036_, v___y_6038_, v___y_6039_);
if (lean_obj_tag(v___x_6041_) == 0)
{
lean_object* v_a_6042_; lean_object* v_snd_6043_; lean_object* v___x_6044_; 
v_a_6042_ = lean_ctor_get(v___x_6041_, 0);
lean_inc(v_a_6042_);
lean_dec_ref_known(v___x_6041_, 1);
v_snd_6043_ = lean_ctor_get(v_a_6042_, 1);
lean_inc(v_snd_6043_);
lean_dec(v_a_6042_);
v___x_6044_ = l_LeanExport_dumpMetadata___redArg(v_snd_6043_);
if (lean_obj_tag(v___x_6044_) == 0)
{
lean_object* v_a_6045_; lean_object* v_snd_6046_; lean_object* v___x_6047_; lean_object* v___x_6048_; 
v_a_6045_ = lean_ctor_get(v___x_6044_, 0);
lean_inc(v_a_6045_);
lean_dec_ref_known(v___x_6044_, 1);
v_snd_6046_ = lean_ctor_get(v_a_6045_, 1);
lean_inc(v_snd_6046_);
lean_dec(v_a_6045_);
v___x_6047_ = lean_box(0);
v___x_6048_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v___y_6037_, v___x_6047_, v___y_6038_, v_snd_6046_);
if (lean_obj_tag(v___x_6048_) == 0)
{
lean_object* v_a_6049_; lean_object* v___x_6051_; uint8_t v_isShared_6052_; uint8_t v_isSharedCheck_6065_; 
v_a_6049_ = lean_ctor_get(v___x_6048_, 0);
v_isSharedCheck_6065_ = !lean_is_exclusive(v___x_6048_);
if (v_isSharedCheck_6065_ == 0)
{
v___x_6051_ = v___x_6048_;
v_isShared_6052_ = v_isSharedCheck_6065_;
goto v_resetjp_6050_;
}
else
{
lean_inc(v_a_6049_);
lean_dec(v___x_6048_);
v___x_6051_ = lean_box(0);
v_isShared_6052_ = v_isSharedCheck_6065_;
goto v_resetjp_6050_;
}
v_resetjp_6050_:
{
lean_object* v_snd_6053_; lean_object* v___x_6055_; uint8_t v_isShared_6056_; uint8_t v_isSharedCheck_6063_; 
v_snd_6053_ = lean_ctor_get(v_a_6049_, 1);
v_isSharedCheck_6063_ = !lean_is_exclusive(v_a_6049_);
if (v_isSharedCheck_6063_ == 0)
{
lean_object* v_unused_6064_; 
v_unused_6064_ = lean_ctor_get(v_a_6049_, 0);
lean_dec(v_unused_6064_);
v___x_6055_ = v_a_6049_;
v_isShared_6056_ = v_isSharedCheck_6063_;
goto v_resetjp_6054_;
}
else
{
lean_inc(v_snd_6053_);
lean_dec(v_a_6049_);
v___x_6055_ = lean_box(0);
v_isShared_6056_ = v_isSharedCheck_6063_;
goto v_resetjp_6054_;
}
v_resetjp_6054_:
{
lean_object* v___x_6058_; 
if (v_isShared_6056_ == 0)
{
lean_ctor_set(v___x_6055_, 0, v___x_6047_);
v___x_6058_ = v___x_6055_;
goto v_reusejp_6057_;
}
else
{
lean_object* v_reuseFailAlloc_6062_; 
v_reuseFailAlloc_6062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6062_, 0, v___x_6047_);
lean_ctor_set(v_reuseFailAlloc_6062_, 1, v_snd_6053_);
v___x_6058_ = v_reuseFailAlloc_6062_;
goto v_reusejp_6057_;
}
v_reusejp_6057_:
{
lean_object* v___x_6060_; 
if (v_isShared_6052_ == 0)
{
lean_ctor_set(v___x_6051_, 0, v___x_6058_);
v___x_6060_ = v___x_6051_;
goto v_reusejp_6059_;
}
else
{
lean_object* v_reuseFailAlloc_6061_; 
v_reuseFailAlloc_6061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6061_, 0, v___x_6058_);
v___x_6060_ = v_reuseFailAlloc_6061_;
goto v_reusejp_6059_;
}
v_reusejp_6059_:
{
return v___x_6060_;
}
}
}
}
}
else
{
return v___x_6048_;
}
}
else
{
return v___x_6044_;
}
}
else
{
return v___x_6041_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0___boxed(lean_object* v_env_6066_, lean_object* v_cliOptions_6067_, lean_object* v___y_6068_, lean_object* v___y_6069_, lean_object* v___y_6070_, lean_object* v___y_6071_){
_start:
{
lean_object* v_res_6072_; 
v_res_6072_ = l_LeanExport_dumpEnv___lam__0(v_env_6066_, v_cliOptions_6067_, v___y_6068_, v___y_6069_, v___y_6070_);
lean_dec_ref(v___y_6069_);
lean_dec(v___y_6068_);
lean_dec(v_cliOptions_6067_);
return v_res_6072_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___lam__0(lean_object* v_es_6073_, lean_object* v_a_6074_, lean_object* v_b_6075_){
_start:
{
lean_object* v___x_6076_; lean_object* v___x_6077_; 
v___x_6076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6076_, 0, v_a_6074_);
lean_ctor_set(v___x_6076_, 1, v_b_6075_);
v___x_6077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6077_, 0, v___x_6076_);
lean_ctor_set(v___x_6077_, 1, v_es_6073_);
return v___x_6077_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(lean_object* v_f_6078_, lean_object* v_x_6079_, lean_object* v_x_6080_){
_start:
{
if (lean_obj_tag(v_x_6080_) == 0)
{
lean_dec(v_f_6078_);
return v_x_6079_;
}
else
{
lean_object* v_key_6081_; lean_object* v_value_6082_; lean_object* v_tail_6083_; lean_object* v___x_6084_; 
v_key_6081_ = lean_ctor_get(v_x_6080_, 0);
lean_inc(v_key_6081_);
v_value_6082_ = lean_ctor_get(v_x_6080_, 1);
lean_inc(v_value_6082_);
v_tail_6083_ = lean_ctor_get(v_x_6080_, 2);
lean_inc(v_tail_6083_);
lean_dec_ref_known(v_x_6080_, 3);
lean_inc(v_f_6078_);
v___x_6084_ = lean_apply_3(v_f_6078_, v_x_6079_, v_key_6081_, v_value_6082_);
v_x_6079_ = v___x_6084_;
v_x_6080_ = v_tail_6083_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(lean_object* v_f_6086_, lean_object* v_as_6087_, size_t v_i_6088_, size_t v_stop_6089_, lean_object* v_b_6090_){
_start:
{
uint8_t v___x_6091_; 
v___x_6091_ = lean_usize_dec_eq(v_i_6088_, v_stop_6089_);
if (v___x_6091_ == 0)
{
lean_object* v___x_6092_; lean_object* v___x_6093_; size_t v___x_6094_; size_t v___x_6095_; 
v___x_6092_ = lean_array_uget_borrowed(v_as_6087_, v_i_6088_);
lean_inc(v___x_6092_);
lean_inc(v_f_6086_);
v___x_6093_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(v_f_6086_, v_b_6090_, v___x_6092_);
v___x_6094_ = ((size_t)1ULL);
v___x_6095_ = lean_usize_add(v_i_6088_, v___x_6094_);
v_i_6088_ = v___x_6095_;
v_b_6090_ = v___x_6093_;
goto _start;
}
else
{
lean_dec(v_f_6086_);
return v_b_6090_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_f_6097_, lean_object* v_as_6098_, lean_object* v_i_6099_, lean_object* v_stop_6100_, lean_object* v_b_6101_){
_start:
{
size_t v_i_boxed_6102_; size_t v_stop_boxed_6103_; lean_object* v_res_6104_; 
v_i_boxed_6102_ = lean_unbox_usize(v_i_6099_);
lean_dec(v_i_6099_);
v_stop_boxed_6103_ = lean_unbox_usize(v_stop_6100_);
lean_dec(v_stop_6100_);
v_res_6104_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(v_f_6097_, v_as_6098_, v_i_boxed_6102_, v_stop_boxed_6103_, v_b_6101_);
lean_dec_ref(v_as_6098_);
return v_res_6104_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___lam__0(lean_object* v_f_6105_, lean_object* v_x1_6106_, lean_object* v_x2_6107_, lean_object* v_x3_6108_){
_start:
{
lean_object* v___x_6109_; 
v___x_6109_ = lean_apply_3(v_f_6105_, v_x1_6106_, v_x2_6107_, v_x3_6108_);
return v___x_6109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(lean_object* v_f_6110_, lean_object* v_keys_6111_, lean_object* v_vals_6112_, lean_object* v_i_6113_, lean_object* v_acc_6114_){
_start:
{
lean_object* v___x_6115_; uint8_t v___x_6116_; 
v___x_6115_ = lean_array_get_size(v_keys_6111_);
v___x_6116_ = lean_nat_dec_lt(v_i_6113_, v___x_6115_);
if (v___x_6116_ == 0)
{
lean_dec(v_i_6113_);
lean_dec(v_f_6110_);
return v_acc_6114_;
}
else
{
lean_object* v_k_6117_; lean_object* v_v_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; 
v_k_6117_ = lean_array_fget_borrowed(v_keys_6111_, v_i_6113_);
v_v_6118_ = lean_array_fget_borrowed(v_vals_6112_, v_i_6113_);
lean_inc(v_f_6110_);
lean_inc(v_v_6118_);
lean_inc(v_k_6117_);
v___x_6119_ = lean_apply_3(v_f_6110_, v_acc_6114_, v_k_6117_, v_v_6118_);
v___x_6120_ = lean_unsigned_to_nat(1u);
v___x_6121_ = lean_nat_add(v_i_6113_, v___x_6120_);
lean_dec(v_i_6113_);
v_i_6113_ = v___x_6121_;
v_acc_6114_ = v___x_6119_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg___boxed(lean_object* v_f_6123_, lean_object* v_keys_6124_, lean_object* v_vals_6125_, lean_object* v_i_6126_, lean_object* v_acc_6127_){
_start:
{
lean_object* v_res_6128_; 
v_res_6128_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(v_f_6123_, v_keys_6124_, v_vals_6125_, v_i_6126_, v_acc_6127_);
lean_dec_ref(v_vals_6125_);
lean_dec_ref(v_keys_6124_);
return v_res_6128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(lean_object* v_f_6129_, lean_object* v_as_6130_, size_t v_i_6131_, size_t v_stop_6132_, lean_object* v_b_6133_){
_start:
{
lean_object* v___y_6135_; uint8_t v___x_6139_; 
v___x_6139_ = lean_usize_dec_eq(v_i_6131_, v_stop_6132_);
if (v___x_6139_ == 0)
{
lean_object* v___x_6140_; 
v___x_6140_ = lean_array_uget_borrowed(v_as_6130_, v_i_6131_);
switch(lean_obj_tag(v___x_6140_))
{
case 0:
{
lean_object* v_key_6141_; lean_object* v_val_6142_; lean_object* v___x_6143_; 
v_key_6141_ = lean_ctor_get(v___x_6140_, 0);
v_val_6142_ = lean_ctor_get(v___x_6140_, 1);
lean_inc(v_f_6129_);
lean_inc(v_val_6142_);
lean_inc(v_key_6141_);
v___x_6143_ = lean_apply_3(v_f_6129_, v_b_6133_, v_key_6141_, v_val_6142_);
v___y_6135_ = v___x_6143_;
goto v___jp_6134_;
}
case 1:
{
lean_object* v_node_6144_; lean_object* v___x_6145_; 
v_node_6144_ = lean_ctor_get(v___x_6140_, 0);
lean_inc(v_f_6129_);
v___x_6145_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6129_, v_node_6144_, v_b_6133_);
v___y_6135_ = v___x_6145_;
goto v___jp_6134_;
}
default: 
{
v___y_6135_ = v_b_6133_;
goto v___jp_6134_;
}
}
}
else
{
lean_dec(v_f_6129_);
return v_b_6133_;
}
v___jp_6134_:
{
size_t v___x_6136_; size_t v___x_6137_; 
v___x_6136_ = ((size_t)1ULL);
v___x_6137_ = lean_usize_add(v_i_6131_, v___x_6136_);
v_i_6131_ = v___x_6137_;
v_b_6133_ = v___y_6135_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(lean_object* v_f_6146_, lean_object* v_x_6147_, lean_object* v_x_6148_){
_start:
{
if (lean_obj_tag(v_x_6147_) == 0)
{
lean_object* v_es_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; uint8_t v___x_6152_; 
v_es_6149_ = lean_ctor_get(v_x_6147_, 0);
v___x_6150_ = lean_unsigned_to_nat(0u);
v___x_6151_ = lean_array_get_size(v_es_6149_);
v___x_6152_ = lean_nat_dec_lt(v___x_6150_, v___x_6151_);
if (v___x_6152_ == 0)
{
lean_dec(v_f_6146_);
return v_x_6148_;
}
else
{
size_t v___x_6153_; size_t v___x_6154_; lean_object* v___x_6155_; 
v___x_6153_ = ((size_t)0ULL);
v___x_6154_ = lean_usize_of_nat(v___x_6151_);
v___x_6155_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(v_f_6146_, v_es_6149_, v___x_6153_, v___x_6154_, v_x_6148_);
return v___x_6155_;
}
}
else
{
lean_object* v_ks_6156_; lean_object* v_vs_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; 
v_ks_6156_ = lean_ctor_get(v_x_6147_, 0);
v_vs_6157_ = lean_ctor_get(v_x_6147_, 1);
v___x_6158_ = lean_unsigned_to_nat(0u);
v___x_6159_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(v_f_6146_, v_ks_6156_, v_vs_6157_, v___x_6158_, v_x_6148_);
return v___x_6159_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg___boxed(lean_object* v_f_6160_, lean_object* v_x_6161_, lean_object* v_x_6162_){
_start:
{
lean_object* v_res_6163_; 
v_res_6163_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6160_, v_x_6161_, v_x_6162_);
lean_dec_ref(v_x_6161_);
return v_res_6163_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_f_6164_, lean_object* v_as_6165_, lean_object* v_i_6166_, lean_object* v_stop_6167_, lean_object* v_b_6168_){
_start:
{
size_t v_i_boxed_6169_; size_t v_stop_boxed_6170_; lean_object* v_res_6171_; 
v_i_boxed_6169_ = lean_unbox_usize(v_i_6166_);
lean_dec(v_i_6166_);
v_stop_boxed_6170_ = lean_unbox_usize(v_stop_6167_);
lean_dec(v_stop_6167_);
v_res_6171_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(v_f_6164_, v_as_6165_, v_i_boxed_6169_, v_stop_boxed_6170_, v_b_6168_);
lean_dec_ref(v_as_6165_);
return v_res_6171_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(lean_object* v_map_6172_, lean_object* v_f_6173_, lean_object* v_init_6174_){
_start:
{
lean_object* v___f_6175_; lean_object* v___x_6176_; 
v___f_6175_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___lam__0), 4, 1);
lean_closure_set(v___f_6175_, 0, v_f_6173_);
v___x_6176_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v___f_6175_, v_map_6172_, v_init_6174_);
return v___x_6176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_map_6177_, lean_object* v_f_6178_, lean_object* v_init_6179_){
_start:
{
lean_object* v_res_6180_; 
v_res_6180_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_6177_, v_f_6178_, v_init_6179_);
lean_dec_ref(v_map_6177_);
return v_res_6180_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(lean_object* v_f_6181_, lean_object* v_init_6182_, lean_object* v_m_6183_){
_start:
{
lean_object* v_map_u2081_6184_; lean_object* v_map_u2082_6185_; lean_object* v_buckets_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; uint8_t v___x_6189_; 
v_map_u2081_6184_ = lean_ctor_get(v_m_6183_, 0);
v_map_u2082_6185_ = lean_ctor_get(v_m_6183_, 1);
v_buckets_6186_ = lean_ctor_get(v_map_u2081_6184_, 1);
v___x_6187_ = lean_unsigned_to_nat(0u);
v___x_6188_ = lean_array_get_size(v_buckets_6186_);
v___x_6189_ = lean_nat_dec_lt(v___x_6187_, v___x_6188_);
if (v___x_6189_ == 0)
{
lean_object* v___x_6190_; 
v___x_6190_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_u2082_6185_, v_f_6181_, v_init_6182_);
return v___x_6190_;
}
else
{
size_t v___x_6191_; size_t v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; 
v___x_6191_ = ((size_t)0ULL);
v___x_6192_ = lean_usize_of_nat(v___x_6188_);
lean_inc(v_f_6181_);
v___x_6193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(v_f_6181_, v_buckets_6186_, v___x_6191_, v___x_6192_, v_init_6182_);
v___x_6194_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_u2082_6185_, v_f_6181_, v___x_6193_);
return v___x_6194_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg___boxed(lean_object* v_f_6195_, lean_object* v_init_6196_, lean_object* v_m_6197_){
_start:
{
lean_object* v_res_6198_; 
v_res_6198_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(v_f_6195_, v_init_6196_, v_m_6197_);
lean_dec_ref(v_m_6197_);
return v_res_6198_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(lean_object* v_m_6200_){
_start:
{
lean_object* v___f_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; 
v___f_6201_ = ((lean_object*)(l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___closed__0));
v___x_6202_ = lean_box(0);
v___x_6203_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(v___f_6201_, v___x_6202_, v_m_6200_);
return v___x_6203_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg___boxed(lean_object* v_m_6204_){
_start:
{
lean_object* v_res_6205_; 
v_res_6205_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(v_m_6204_);
lean_dec_ref(v_m_6204_);
return v_res_6205_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__3(lean_object* v_a_6206_, lean_object* v_a_6207_){
_start:
{
if (lean_obj_tag(v_a_6206_) == 0)
{
lean_object* v___x_6208_; 
v___x_6208_ = l_List_reverse___redArg(v_a_6207_);
return v___x_6208_;
}
else
{
lean_object* v_head_6209_; lean_object* v_tail_6210_; lean_object* v___x_6212_; uint8_t v_isShared_6213_; uint8_t v_isSharedCheck_6220_; 
v_head_6209_ = lean_ctor_get(v_a_6206_, 0);
v_tail_6210_ = lean_ctor_get(v_a_6206_, 1);
v_isSharedCheck_6220_ = !lean_is_exclusive(v_a_6206_);
if (v_isSharedCheck_6220_ == 0)
{
v___x_6212_ = v_a_6206_;
v_isShared_6213_ = v_isSharedCheck_6220_;
goto v_resetjp_6211_;
}
else
{
lean_inc(v_tail_6210_);
lean_inc(v_head_6209_);
lean_dec(v_a_6206_);
v___x_6212_ = lean_box(0);
v_isShared_6213_ = v_isSharedCheck_6220_;
goto v_resetjp_6211_;
}
v_resetjp_6211_:
{
uint8_t v___x_6214_; 
v___x_6214_ = l_Lean_Name_isInternal(v_head_6209_);
if (v___x_6214_ == 0)
{
lean_object* v___x_6216_; 
if (v_isShared_6213_ == 0)
{
lean_ctor_set(v___x_6212_, 1, v_a_6207_);
v___x_6216_ = v___x_6212_;
goto v_reusejp_6215_;
}
else
{
lean_object* v_reuseFailAlloc_6218_; 
v_reuseFailAlloc_6218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6218_, 0, v_head_6209_);
lean_ctor_set(v_reuseFailAlloc_6218_, 1, v_a_6207_);
v___x_6216_ = v_reuseFailAlloc_6218_;
goto v_reusejp_6215_;
}
v_reusejp_6215_:
{
v_a_6206_ = v_tail_6210_;
v_a_6207_ = v___x_6216_;
goto _start;
}
}
else
{
lean_del_object(v___x_6212_);
lean_dec(v_head_6209_);
v_a_6206_ = v_tail_6210_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__2(lean_object* v_a_6221_, lean_object* v_a_6222_){
_start:
{
if (lean_obj_tag(v_a_6221_) == 0)
{
lean_object* v___x_6223_; 
v___x_6223_ = l_List_reverse___redArg(v_a_6222_);
return v___x_6223_;
}
else
{
lean_object* v_head_6224_; lean_object* v_tail_6225_; lean_object* v___x_6227_; uint8_t v_isShared_6228_; uint8_t v_isSharedCheck_6234_; 
v_head_6224_ = lean_ctor_get(v_a_6221_, 0);
v_tail_6225_ = lean_ctor_get(v_a_6221_, 1);
v_isSharedCheck_6234_ = !lean_is_exclusive(v_a_6221_);
if (v_isSharedCheck_6234_ == 0)
{
v___x_6227_ = v_a_6221_;
v_isShared_6228_ = v_isSharedCheck_6234_;
goto v_resetjp_6226_;
}
else
{
lean_inc(v_tail_6225_);
lean_inc(v_head_6224_);
lean_dec(v_a_6221_);
v___x_6227_ = lean_box(0);
v_isShared_6228_ = v_isSharedCheck_6234_;
goto v_resetjp_6226_;
}
v_resetjp_6226_:
{
lean_object* v_fst_6229_; lean_object* v___x_6231_; 
v_fst_6229_ = lean_ctor_get(v_head_6224_, 0);
lean_inc(v_fst_6229_);
lean_dec(v_head_6224_);
if (v_isShared_6228_ == 0)
{
lean_ctor_set(v___x_6227_, 1, v_a_6222_);
lean_ctor_set(v___x_6227_, 0, v_fst_6229_);
v___x_6231_ = v___x_6227_;
goto v_reusejp_6230_;
}
else
{
lean_object* v_reuseFailAlloc_6233_; 
v_reuseFailAlloc_6233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6233_, 0, v_fst_6229_);
lean_ctor_set(v_reuseFailAlloc_6233_, 1, v_a_6222_);
v___x_6231_ = v_reuseFailAlloc_6233_;
goto v_reusejp_6230_;
}
v_reusejp_6230_:
{
v_a_6221_ = v_tail_6225_;
v_a_6222_ = v___x_6231_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv(lean_object* v_env_6235_, lean_object* v_constants_x3f_6236_, lean_object* v_cliOptions_6237_){
_start:
{
lean_object* v___y_6240_; 
if (lean_obj_tag(v_constants_x3f_6236_) == 0)
{
lean_object* v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v___x_6247_; 
lean_inc_ref(v_env_6235_);
v___x_6243_ = l_Lean_Environment_constants(v_env_6235_);
v___x_6244_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(v___x_6243_);
lean_dec_ref(v___x_6243_);
v___x_6245_ = lean_box(0);
v___x_6246_ = l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__2(v___x_6244_, v___x_6245_);
v___x_6247_ = l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__3(v___x_6246_, v___x_6245_);
v___y_6240_ = v___x_6247_;
goto v___jp_6239_;
}
else
{
lean_object* v_val_6248_; 
v_val_6248_ = lean_ctor_get(v_constants_x3f_6236_, 0);
lean_inc(v_val_6248_);
lean_dec_ref_known(v_constants_x3f_6236_, 1);
v___y_6240_ = v_val_6248_;
goto v___jp_6239_;
}
v___jp_6239_:
{
lean_object* v___f_6241_; lean_object* v___x_6242_; 
lean_inc_ref(v_env_6235_);
v___f_6241_ = lean_alloc_closure((void*)(l_LeanExport_dumpEnv___lam__0___boxed), 6, 3);
lean_closure_set(v___f_6241_, 0, v_env_6235_);
lean_closure_set(v___f_6241_, 1, v_cliOptions_6237_);
lean_closure_set(v___f_6241_, 2, v___y_6240_);
v___x_6242_ = l_LeanExport_M_run___redArg(v_env_6235_, v___f_6241_);
return v___x_6242_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___boxed(lean_object* v_env_6249_, lean_object* v_constants_x3f_6250_, lean_object* v_cliOptions_6251_, lean_object* v_a_6252_){
_start:
{
lean_object* v_res_6253_; 
v_res_6253_ = l_LeanExport_dumpEnv(v_env_6249_, v_constants_x3f_6250_, v_cliOptions_6251_);
return v_res_6253_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(lean_object* v_as_6254_, lean_object* v_as_x27_6255_, lean_object* v_b_6256_, lean_object* v_a_6257_, lean_object* v___y_6258_, lean_object* v___y_6259_){
_start:
{
lean_object* v___x_6261_; 
v___x_6261_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_6255_, v_b_6256_, v___y_6258_, v___y_6259_);
return v___x_6261_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___boxed(lean_object* v_as_6262_, lean_object* v_as_x27_6263_, lean_object* v_b_6264_, lean_object* v_a_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_, lean_object* v___y_6268_){
_start:
{
lean_object* v_res_6269_; 
v_res_6269_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(v_as_6262_, v_as_x27_6263_, v_b_6264_, v_a_6265_, v___y_6266_, v___y_6267_);
lean_dec_ref(v___y_6266_);
lean_dec(v_as_x27_6263_);
lean_dec(v_as_6262_);
return v_res_6269_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1(lean_object* v_00_u03b2_6270_, lean_object* v_m_6271_){
_start:
{
lean_object* v___x_6272_; 
v___x_6272_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___redArg(v_m_6271_);
return v___x_6272_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1___boxed(lean_object* v_00_u03b2_6273_, lean_object* v_m_6274_){
_start:
{
lean_object* v_res_6275_; 
v_res_6275_ = l_Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1(v_00_u03b2_6273_, v_m_6274_);
lean_dec_ref(v_m_6274_);
return v_res_6275_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1(lean_object* v_00_u03b2_6276_, lean_object* v_00_u03c3_6277_, lean_object* v_f_6278_, lean_object* v_init_6279_, lean_object* v_m_6280_){
_start:
{
lean_object* v___x_6281_; 
v___x_6281_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___redArg(v_f_6278_, v_init_6279_, v_m_6280_);
return v___x_6281_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1___boxed(lean_object* v_00_u03b2_6282_, lean_object* v_00_u03c3_6283_, lean_object* v_f_6284_, lean_object* v_init_6285_, lean_object* v_m_6286_){
_start:
{
lean_object* v_res_6287_; 
v_res_6287_ = l_Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1(v_00_u03b2_6282_, v_00_u03c3_6283_, v_f_6284_, v_init_6285_, v_m_6286_);
lean_dec_ref(v_m_6286_);
return v_res_6287_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_6288_, lean_object* v_00_u03c3_6289_, lean_object* v_f_6290_, lean_object* v_x_6291_, lean_object* v_x_6292_){
_start:
{
lean_object* v___x_6293_; 
v___x_6293_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__2___redArg(v_f_6290_, v_x_6291_, v_x_6292_);
return v___x_6293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3(lean_object* v_00_u03c3_6294_, lean_object* v_00_u03b2_6295_, lean_object* v_map_6296_, lean_object* v_f_6297_, lean_object* v_init_6298_){
_start:
{
lean_object* v___x_6299_; 
v___x_6299_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___redArg(v_map_6296_, v_f_6297_, v_init_6298_);
return v___x_6299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03c3_6300_, lean_object* v_00_u03b2_6301_, lean_object* v_map_6302_, lean_object* v_f_6303_, lean_object* v_init_6304_){
_start:
{
lean_object* v_res_6305_; 
v_res_6305_ = l_Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3(v_00_u03c3_6300_, v_00_u03b2_6301_, v_map_6302_, v_f_6303_, v_init_6304_);
lean_dec_ref(v_map_6302_);
return v_res_6305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_6306_, lean_object* v_00_u03c3_6307_, lean_object* v_f_6308_, lean_object* v_as_6309_, size_t v_i_6310_, size_t v_stop_6311_, lean_object* v_b_6312_){
_start:
{
lean_object* v___x_6313_; 
v___x_6313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___redArg(v_f_6308_, v_as_6309_, v_i_6310_, v_stop_6311_, v_b_6312_);
return v___x_6313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_6314_, lean_object* v_00_u03c3_6315_, lean_object* v_f_6316_, lean_object* v_as_6317_, lean_object* v_i_6318_, lean_object* v_stop_6319_, lean_object* v_b_6320_){
_start:
{
size_t v_i_boxed_6321_; size_t v_stop_boxed_6322_; lean_object* v_res_6323_; 
v_i_boxed_6321_ = lean_unbox_usize(v_i_6318_);
lean_dec(v_i_6318_);
v_stop_boxed_6322_ = lean_unbox_usize(v_stop_6319_);
lean_dec(v_stop_6319_);
v_res_6323_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__4(v_00_u03b2_6314_, v_00_u03c3_6315_, v_f_6316_, v_as_6317_, v_i_boxed_6321_, v_stop_boxed_6322_, v_b_6320_);
lean_dec_ref(v_as_6317_);
return v_res_6323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg(lean_object* v_map_6324_, lean_object* v_f_6325_, lean_object* v_init_6326_){
_start:
{
lean_object* v___x_6327_; 
v___x_6327_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6325_, v_map_6324_, v_init_6326_);
return v___x_6327_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_map_6328_, lean_object* v_f_6329_, lean_object* v_init_6330_){
_start:
{
lean_object* v_res_6331_; 
v_res_6331_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___redArg(v_map_6328_, v_f_6329_, v_init_6330_);
lean_dec_ref(v_map_6328_);
return v_res_6331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6(lean_object* v_00_u03c3_6332_, lean_object* v_00_u03b2_6333_, lean_object* v_map_6334_, lean_object* v_f_6335_, lean_object* v_init_6336_){
_start:
{
lean_object* v___x_6337_; 
v___x_6337_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6335_, v_map_6334_, v_init_6336_);
return v___x_6337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6___boxed(lean_object* v_00_u03c3_6338_, lean_object* v_00_u03b2_6339_, lean_object* v_map_6340_, lean_object* v_f_6341_, lean_object* v_init_6342_){
_start:
{
lean_object* v_res_6343_; 
v_res_6343_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6(v_00_u03c3_6338_, v_00_u03b2_6339_, v_map_6340_, v_f_6341_, v_init_6342_);
lean_dec_ref(v_map_6340_);
return v_res_6343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7(lean_object* v_00_u03c3_6344_, lean_object* v_00_u03b1_6345_, lean_object* v_00_u03b2_6346_, lean_object* v_f_6347_, lean_object* v_x_6348_, lean_object* v_x_6349_){
_start:
{
lean_object* v___x_6350_; 
v___x_6350_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___redArg(v_f_6347_, v_x_6348_, v_x_6349_);
return v___x_6350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7___boxed(lean_object* v_00_u03c3_6351_, lean_object* v_00_u03b1_6352_, lean_object* v_00_u03b2_6353_, lean_object* v_f_6354_, lean_object* v_x_6355_, lean_object* v_x_6356_){
_start:
{
lean_object* v_res_6357_; 
v_res_6357_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7(v_00_u03c3_6351_, v_00_u03b1_6352_, v_00_u03b2_6353_, v_f_6354_, v_x_6355_, v_x_6356_);
lean_dec_ref(v_x_6355_);
return v_res_6357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_6358_, lean_object* v_00_u03b2_6359_, lean_object* v_00_u03c3_6360_, lean_object* v_f_6361_, lean_object* v_as_6362_, size_t v_i_6363_, size_t v_stop_6364_, lean_object* v_b_6365_){
_start:
{
lean_object* v___x_6366_; 
v___x_6366_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___redArg(v_f_6361_, v_as_6362_, v_i_6363_, v_stop_6364_, v_b_6365_);
return v___x_6366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_6367_, lean_object* v_00_u03b2_6368_, lean_object* v_00_u03c3_6369_, lean_object* v_f_6370_, lean_object* v_as_6371_, lean_object* v_i_6372_, lean_object* v_stop_6373_, lean_object* v_b_6374_){
_start:
{
size_t v_i_boxed_6375_; size_t v_stop_boxed_6376_; lean_object* v_res_6377_; 
v_i_boxed_6375_ = lean_unbox_usize(v_i_6372_);
lean_dec(v_i_6372_);
v_stop_boxed_6376_ = lean_unbox_usize(v_stop_6373_);
lean_dec(v_stop_6373_);
v_res_6377_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__9(v_00_u03b1_6367_, v_00_u03b2_6368_, v_00_u03c3_6369_, v_f_6370_, v_as_6371_, v_i_boxed_6375_, v_stop_boxed_6376_, v_b_6374_);
lean_dec_ref(v_as_6371_);
return v_res_6377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10(lean_object* v_00_u03c3_6378_, lean_object* v_00_u03b1_6379_, lean_object* v_00_u03b2_6380_, lean_object* v_f_6381_, lean_object* v_keys_6382_, lean_object* v_vals_6383_, lean_object* v_heq_6384_, lean_object* v_i_6385_, lean_object* v_acc_6386_){
_start:
{
lean_object* v___x_6387_; 
v___x_6387_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___redArg(v_f_6381_, v_keys_6382_, v_vals_6383_, v_i_6385_, v_acc_6386_);
return v___x_6387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10___boxed(lean_object* v_00_u03c3_6388_, lean_object* v_00_u03b1_6389_, lean_object* v_00_u03b2_6390_, lean_object* v_f_6391_, lean_object* v_keys_6392_, lean_object* v_vals_6393_, lean_object* v_heq_6394_, lean_object* v_i_6395_, lean_object* v_acc_6396_){
_start:
{
lean_object* v_res_6397_; 
v_res_6397_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_SMap_fold___at___00Lean_SMap_toList___at___00LeanExport_dumpEnv_spec__1_spec__1_spec__3_spec__6_spec__7_spec__10(v_00_u03c3_6388_, v_00_u03b1_6389_, v_00_u03b2_6390_, v_f_6391_, v_keys_6392_, v_vals_6393_, v_heq_6394_, v_i_6395_, v_acc_6396_);
lean_dec_ref(v_vals_6393_);
lean_dec_ref(v_keys_6392_);
return v_res_6397_;
}
}
lean_object* runtime_initialize_Lean(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_LeanExport_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_LeanExport_Basic_0__LeanExport_exportMetadata = _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata();
lean_mark_persistent(l___private_LeanExport_Basic_0__LeanExport_exportMetadata);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_LeanExport_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanExport_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_LeanExport_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_LeanExport_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_LeanExport_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
